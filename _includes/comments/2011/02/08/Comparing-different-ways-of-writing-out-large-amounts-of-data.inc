
<div class="comment" id="c_1713729609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729609">1</a> by Dan G. Switzer, II
		posted on 2/9/2011 at 6:52 PM
		</div>
		<div class="comment_text"><p>Depending on the requirements, you might be able to drop to the OS and just use the OS to merge the files together--which is going to be way faster than using CF.</p><p>In Windows, you can do something like the following from a command prompt:</p><p>copy /b *.txt big-old-file.txt</p><p>Or:</p><p>copy /b file1.txt +file2.txt +file3.txt merged1-3.txt</p><p>Now obviously if you have to do some parsing to the files before merging them, this may not work for you. But if the goal is to just merge a ton of individual files into a single file, you can do this very easy using command line tools.</p><p>As for your solutions, if the outputted file is going to be very large, I'm not a fan of trying to create everything in memory--because it can cause issues w/the JVM. I'm a much bigger fan of appending the data to a file and writing the data in controlled chunks. It's more work, but will work reliably even if you need to merge really large text files (that you don't want to read all in memory at one time.)</p><p>You can use java.io.LineNumberReader (which your <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cflib.org%2Fudf%2FFileRead%3AhCBO_07SHwYYL7IK1eRmvhZnIMM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cflib.org/udf/FileRead">http://www.cflib.org/udf/Fi...</a> UDF uses) to pull in chunks from an external file, then append those chunks to another file.</p><p>This could be overkill for this project, but I thought I'd mention it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729611">2</a> by Raymond Camden
		posted on 2/9/2011 at 7:17 PM
		</div>
		<div class="comment_text"><p>Interesting point Dan, and while "we" ("we" being the collective CF bloggers, speakers, etc) tend to mention not writing OS specific code, this is an example where for practical reasons it may make sense. So question - do you feel like running a speed test?</p><p>As to your 3rd idea (lineNumberReader), wouldn't you agree that UDF does not make sense anymore in CF8+? Certainly it is convenient (to go to line N), but since fileReadLine should be using similar code under the hood then it should perform well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729608">3</a> by Larry C. Lyons
		posted on 2/9/2011 at 7:43 PM
		</div>
		<div class="comment_text"><p>Very interesting Ray. In tests I've run comparing string concatenation to cfsavecontent and the java string buffer, cfsavecontent has been the fastest of all three methods. For string concatenation, I've seen times like 27 seconds vs. about 160ms or less for cfsavecontent, while using the java string buffer was around 420 ms. A caveat, this test was run using cf7.02 on a WinXP box. Let me know if you'd like a copy of the code and I can send it along.</p><p>Here are the results of one test (iteration of 50000 in each case):</p><p>String Concatenation<br>string &amp; string: 28297ms<br>String Length: 650000</p><p>CFSaveContent<br>cfsavecontent: 156ms<br>String Length: 650001</p><p>Using Java String Buffer<br>java string buffer: 422ms<br>String Length: 650001</p><p>----<br>Here's the code:<br>&lt;cfset runtime = CreateObject("java", "java.lang.Runtime").getRuntime()&gt; <br>&lt;cfset total_memory = runtime.totalMemory()&gt; &lt;cfset runtime.gc()&gt; <br>&lt;cfset memory_before = (total_memory-runtime.freeMemory()) / 1024 / 1024&gt; <br>&lt;cfoutput&gt;Memory Before: #round(memory_before)# Megs&lt;br&gt; &lt;cfset string1 = ""&gt;<br> &lt;cftimer label="string &amp; string" type="inline"&gt;<br>   &lt;cfloop from="1" to="50000" index="i"&gt;<br>     &lt;cfset string1 = string1 &amp; "Hello World. "&gt;<br>     &lt;/cfloop&gt;<br>  &lt;/cftimer&gt;<br> &lt;cfoutput&gt;<br>String Length: #len(string1)#&lt;/cfoutput&gt;&lt;br&gt;<br> &lt;cfset memory_after = (total_memory-runtime.freeMemory()) / 1024 / 1024&gt; Memory After: #round(memory_after)# Megs -- Increase of #round(memory_after - memory_before)# Megs&lt;br&gt; &lt;br /&gt; <br>&lt;/cfoutput&gt;<br> &lt;cfset runtime.gc()&gt;<br> &lt;cfset memory_before = (total_memory-runtime.freeMemory()) / 1024 / 1024&gt; <br>&lt;cfoutput&gt;Memory Before: #round(memory_before)# Megs&lt;br&gt;<br>&lt;/cfoutput&gt;</p><p> &lt;cftimer label="cfsavecontent" type="inline"&gt;<br>   &lt;cfsavecontent variable="string2"&gt;<br>     &lt;cfloop from="1" to="50000" index="i"&gt;<br>       &lt;cfoutput&gt;Hello World.&lt;/cfoutput&gt;<br>       &lt;/cfloop&gt;<br>   &lt;/cfsavecontent&gt;<br>  &lt;/cftimer&gt;</p><p> &lt;cfoutput&gt;String Length: #len(string2)#&lt;/cfoutput&gt;&lt;br&gt;<br> &lt;cfset memory_after = (total_memory-runtime.freeMemory()) / 1024 / 1024&gt;<br> &lt;cfoutput&gt;Memory After: #round(memory_after)# Megs -- Increase of #round(memory_after - memory_before)# Megs&lt;br&gt;&lt;/cfoutput&gt;</p><p>regards,<br>larry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729610">4</a> by Larry C. Lyons
		posted on 2/9/2011 at 7:50 PM
		</div>
		<div class="comment_text"><p>Just an addenum to my previous note. I decided to do String Concatenation with CFSavecontent using CF9 on a Windows 7 box. here are the results:</p><p>Memory Before: 208 Megs<br>string &amp; string: 19718ms String Length: 650000<br>Memory After: 252 Megs -- Increase of 43 Megs</p><p>Memory Before: 31 Megs<br>cfsavecontent: 32ms String Length: 650001<br>Memory After: 38 Megs -- Increase of 7 Megs</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729606">5</a> by Giancarlo Gomez
		posted on 2/9/2011 at 11:12 PM
		</div>
		<div class="comment_text"><p>Hello Ray,</p><p>I found this entry by Ben Nadel very helpful. Writing Enormous Files Based On Massive Record Sets In ColdFusion @ <a href="http://disq.us/url?url=http%3A%2F%2Fbit.ly%2FgGqVJJ%3A-60BcMV3OWhjJ9pOj7OEkAPQzL0&amp;cuid=3321886" rel="nofollow noopener" title="http://bit.ly/gGqVJJ">http://bit.ly/gGqVJJ</a> .</p><p>I added some comments at the bottom on how to change his process if you need to specify an encoding type like UTF-8.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729613">6</a> by Giancarlo Gomez
		posted on 2/9/2011 at 11:22 PM
		</div>
		<div class="comment_text"><p>Based on your tests above I did this and it took 790ms</p><p>&lt;cfscript&gt;<br>	thisTick = getTickCount();<br>	// file to write<br>	fileToWrite = expandPath('./test.txt');<br>	// create the file<br>	theFile = createObject("java","java.io.File").init(javaCast("string",fileToWrite));<br>	// create my java file writer<br>	fileWriter = createObject("java","java.io.BufferedWriter").<br>					init(createObject("java","java.io.OutputStreamWriter").<br>					init(createObject("java","java.io.FileOutputStream").<br>					init(theFile),"UTF8"));</p><p>	// create string object<br>	stringToWrite = createObject("java","java.lang.StringBuffer").Init();<br>	for(x=1; x&lt;=200000; x++){<br>		stringToWrite.Append(x &amp; chr(13) &amp; chr(10));	<br>	}<br>	// write line<br>	fileWriter.write(stringToWrite.toString());<br>	// Flush the buffered output stream to make sure there is no straggling buffer data<br>	fileWriter.flush();<br>	// final count<br>	finalTick = getTickCount() - thisTick;<br>	// write output<br>	writeOutput('&lt;p&gt;Took #finalTick# ms to write.');<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729614">7</a> by Will
		posted on 2/9/2011 at 11:49 PM
		</div>
		<div class="comment_text"><p>I would do this in my RDBMS. In MySQL, I would just use Navicat to spit the file out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729615">8</a> by Raymond Camden
		posted on 2/10/2011 at 12:04 AM
		</div>
		<div class="comment_text"><p>Ben's post goes down to Java - which would not be necessary in CF8 or higher I'd say. Interesting that yours ran even faster though - almost by half.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729616">9</a> by Mark Andrachek
		posted on 2/10/2011 at 12:30 PM
		</div>
		<div class="comment_text"><p>Sounds like what's really needed here, is a &lt;cffile action="concatenate" input="#fileList#" file="#outputFile#" /&gt;. Especially if you don't need to do any modifications to the data, and are just cat'ing the files together.</p><p>One of the fastest ways to do this, would be to use the java nio package (in most cases should outperform using buffered streams), and I imagine that the underlying implementation of such a feature, would look something like this (which you should be able to "createObject"ify to do essentially the same thing, if you don't want to compile and load the java class.):</p><p>import java.io.FileInputStream;<br>import java.io.FileOutputStream;<br>import java.io.IOException;<br>import java.nio.channels.FileChannel;<br>import java.util.Arrays;<br>import java.util.List;</p><p>public class FileUtils {<br>	public FileUtils() {}</p><p>	public static void concatenate(String target,String inList) throws IOException {<br>		 FileChannel out = new FileOutputStream(target).getChannel();<br>		 FileChannel in = null;<br>		 try {<br>			 List&lt;String&gt; inputs = Arrays.asList(inList.split(","));</p><p>			 for (String inputFile : inputs) {<br>				 try {<br>					 in = new FileInputStream(inputFile).getChannel();<br>					 in.transferTo (0, in.size(), out);<br>				 }<br>				 finally { <br>					 try { <br>						 if (in != null)<br>							 in.close(); <br>					} <br>					catch (Exception e) {}<br>				}<br>			 }<br>		 }<br>		 finally {<br>			 try { out.close(); } catch (Exception e) {}<br>		 }<br>	}</p><p>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729617">10</a> by Abutaleb
		posted on 8/30/2013 at 8:11 PM
		</div>
		<div class="comment_text"><p>Appreciate your article, was very useful.</p></div>
	</div>
</div>
		