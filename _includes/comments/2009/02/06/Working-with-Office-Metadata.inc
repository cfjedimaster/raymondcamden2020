
<div class="comment" id="c_1713712236">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712236">1</a> by Leigh
		posted on 2/8/2009 at 5:50 AM
		</div>
		<div class="comment_text"><p>The shortest route I found was to use the ExtractorFactory. Since it can handle both formats, I used it as a generic shortcut to grab the underlying properties. (Unfortunately, I could not find a ReaderFactory.)</p><p>The ooxml format has different property types: core, extended and custom. So to determine the file format, I used java's isInstance method. CF's IsInstanceOf method did not seem to work with the objects I created using the javaLoader.</p><p>ExtractorFactory = javaLoader.create("org.apache.poi.extractor.ExtractorFactory");<br>inputFile = createObject("java", "java.io.File").init( "c:\myFiles\testExcel2007.xlsx" );<br>extractor = ExtractorFactory.createExtractor( inputFile );</p><p>// Determine the format<br>POIXMLTextExtractor = javaLoader.create("org.apache.poi.POIXMLTextExtractor");<br>isFormatOOXML = POIXMLTextExtractor.getClass().isInstance( extractor );</p><p>if (isFormatOOXML)<br>{<br>   // extract core properties (author, title, etctera...)				<br>   coreProp = extractor.getCoreProperties().getUnderlyingProperties();</p><p>   WriteOutput("Creator = " &amp; coreProp.getCreatorProperty().getValue() &amp; "&lt;br&gt;");<br>   WriteOutput("Title = " &amp; coreProp.getTitleProperty().getValue() &amp; "&lt;br/&gt;");<br>   // ...<br>}<br>else <br>{<br>    summary = extractor.getSummaryInformation();<br>    WriteOutput("Title="&amp; summary.getTitle() &amp;"&lt;br/&gt;");<br>    WriteOutput("Author"&amp; summary.getAuthor() &amp;"&lt;br/&gt;");<br>    // ....<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712243">2</a> by Raymond Camden
		posted on 2/8/2009 at 7:31 AM
		</div>
		<div class="comment_text"><p>Nice, I tried like heck to figure out how to get props for 2007 and I just couldn't figure it out. Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712240">3</a> by Leigh
		posted on 2/8/2009 at 9:48 PM
		</div>
		<div class="comment_text"><p>You are welcome.  Sometimes the api only gets you so far... Eclipse's debug mode for java code often fills in the gaps. (It definitely did this time ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712242">4</a> by Raymond Camden
		posted on 2/8/2009 at 9:52 PM
		</div>
		<div class="comment_text"><p>So I asked this question on the earlier post. Does it make sense to turn this into a CFC? There is a metadata project at RIAForge, but I believe it hasn't been updated since 06. Also, I don't want to step on Ben Nadel's toes. His code does everything Excel related. But maybe a CFC that _just_ does text and metadata read/writes would be useful?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712237">5</a> by Leigh
		posted on 2/8/2009 at 10:57 PM
		</div>
		<div class="comment_text"><p>No question there would be some overlap. But a separate cfc might be useful. I could see cases where you might want to extract the text or metadata from _any_ office document, not Excel specifically.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712239">6</a> by Raymond Camden
		posted on 2/9/2009 at 5:18 PM
		</div>
		<div class="comment_text"><p>I've spoken with Ben and he agrees. I'll see what I can whip up. I assume I have full rights to steal I mean innovate from you, Leah? ;) I'll credit you by URL to help respect your privacy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712238">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712238">7</a> by Leigh
		posted on 2/9/2009 at 11:32 PM
		</div>
		<div class="comment_text"><p>Well, it is okay with me. But you will have to ask Leah too ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712360">8</a> by Anne
		posted on 4/26/2009 at 4:28 AM
		</div>
		<div class="comment_text"><p>Ray, thank so much for the post.  I'm trying to batch extract about 4,000 word docs and POI is doing a great job until it hits a *.doc file that it determines is actually an RTF file.  I know POI doesn't support RTF but I've run into a wall trying to determine the best way to ignore/possibly re-classify the file and continue processing.  Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712372">9</a> by Raymond Camden
		posted on 4/26/2009 at 4:44 PM
		</div>
		<div class="comment_text"><p>Why not just try/catch the call?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712363">10</a> by Marc
		posted on 8/3/2009 at 11:18 PM
		</div>
		<div class="comment_text"><p>I'm using the POI tools to successfully read the text in from a Word 2007 (docx) file, but for some reason when it completes reading the file, ti will not release the document so that I can delete it. Even when I try to manually browse to the file, Windows tells me that it cannot delete the file because jrun.exe is still using it. My Word 2003 (doc) files do not exhibit this behaviour. Any clues? Some code is below:</p><p>&lt;!--- where the poi files are ---&gt;<br>&lt;cfset jarpath = ABSPath &amp; "\jars"&gt;<br>&lt;cfset paths = []&gt;<br>&lt;cfdirectory action="list" name="files" directory="#jarpath#" filter="*.jar" recurse="true"&gt;</p><p>&lt;!--- Get all the jar files to load ---&gt;<br>&lt;cfloop query="files"&gt;<br>   &lt;cfset arrayAppend(paths, directory &amp; "/" &amp; name)&gt;<br>&lt;/cfloop&gt;</p><p>&lt;!--- Load javaloader ---&gt;<br>&lt;cfset server.loader = createObject("component", "#CFHome#/components.javaloader.JavaLoader").init(paths)&gt;</p><p>&lt;!--- Generic file reader ---&gt;<br>&lt;cfset myfile = createObject("java","java.io.File")&gt;<br>&lt;cfset myfile.init("#UploadPath##currFileName#")&gt;</p><p>&lt;!--- Init the extractor factory ---&gt;<br>&lt;cfset extractorFactory = server.loader.create("org.apache.poi.extractor.ExtractorFactory")&gt;</p><p>&lt;!--- Create Extractor ---&gt;<br>&lt;cfset extractor = extractorFactory.createExtractor(myFile)&gt;</p><p>&lt;!--- Get Summary Info <br>&lt;cfset summary = extractor.getSummaryInformation()&gt;<br>&lt;cfoutput&gt;&lt;pre&gt;#summary.getPageCount()#&lt;/pre&gt;&lt;/cfoutput&gt;<br>---&gt;</p><p>&lt;!--- Get our page count ---&gt;<br>&lt;cfset PagesFound = REMatch(Session.KeyPhrase,extractor.getText())&gt;<br>&lt;cfset PageCounter = ArrayLen(PagesFound)&gt;</p><p>NOTE: I added this trying to see if i released the objects if it would let the file go, but it made no difference.<br>&lt;!--- Close the file? ---&gt;<br>&lt;cfset extractor = ""&gt;<br>&lt;cfset extractorFactory = ""&gt;<br>&lt;cfset myfile = ""&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712362">11</a> by Raymond Camden
		posted on 8/3/2009 at 11:34 PM
		</div>
		<div class="comment_text"><p>Weird - I looked around for a method that would possibly close the connection, but do not see one and I see no reason why the extractor would even need to keep it open. Maybe it is a Office 2007 versus Earlier issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712364">12</a> by Leigh
		posted on 8/4/2009 at 1:09 AM
		</div>
		<div class="comment_text"><p>It seems like it has something to do with the underlying java code. It creates a PushbackInputStream to read the first few bytes of the file to determine if it is binary or ooxml.  Try using the createExtractor() method that accepts an InputStream:</p><p>...<br>&lt;cfset fis = createObject("java", "java.io.FileInputStream").init(myFile)&gt;<br>&lt;cfset extractorFactory = server.loader.create("org.apache.poi.extractor.ExtractorFactory")&gt;<br>&lt;cfset extractor = extractorFactory.createExtractor(fis)&gt;<br>...etcetera ..<br>&lt;cfset fis.close()&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712370">13</a> by Marc
		posted on 8/4/2009 at 3:40 AM
		</div>
		<div class="comment_text"><p>Ray/Leigh,</p><p>Thanks for your help! Changing to the FileInputStream did the trick and it was able to purge the file after reading it.</p><p>Thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712373">14</a> by Tad
		posted on 5/18/2010 at 10:59 PM
		</div>
		<div class="comment_text"><p>Hey there - great post, and hoping this is the answer to what I'm looking to do.  Trying to extract summary information from DOCX files on CF9, using (what I think are) the latest POI jars.  Getting "The getSummaryInformation method was not found" error when trying to get summary info.  I'm specifically trying to extract the create date/time from the docs.  Any insight?  I'm currently saying:</p><p>&lt;cfset myfile = createObject("java","java.io.FileInputStream").init(expandPath("UPLOAD_DOCS/#DOCMT_URL_TXT#"))&gt;<br>&lt;cfset extractorFactory = createObject("java","org.apache.poi.extractor.ExtractorFactory")&gt;<br>&lt;cfset extractor = extractorFactory.createExtractor(myFile)&gt;<br>&lt;cfset summary = extractor.getSummaryInformation()&gt;<br>&lt;cfoutput&gt;&lt;pre&gt;#summary.getCreateDateTime()#&lt;/pre&gt;&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712382">15</a> by Leigh
		posted on 5/19/2010 at 2:13 AM
		</div>
		<div class="comment_text"><p>&gt; using (what I think are) the latest POI jars.</p><p>Not quite, but they are close enough (3.5-beta).  The metadata is slightly different for binary and ooxml files. Take a look at the first comment above.  It utilizes different properties for the two formats.</p><p>For ooxml documents, try using the extractor's core properties.</p><p>ie <br>core = extractor.getCoreProperties();<br>created = core.getCreated();<br>title = core.getTitle();<br>etcetera ...</p><p>HTH<br>-Leigh</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712380">16</a> by Richard Brasier
		posted on 7/6/2010 at 2:48 AM
		</div>
		<div class="comment_text"><p>Im having trouble setting custom metadata to a word document using the Extractor Factory method, after not much luck with the. I thought the following would work, and its not throwing any errors, but i cant help think im missing something.  Anyone have any ideas?</p><p>Thanks in advance</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2Fbpff6cmY%3A-2DJUX66dDONRizMUBYumDugCj4&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/bpff6cmY">http://pastebin.com/bpff6cmY</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712368">17</a> by Richard Brasier
		posted on 8/23/2010 at 8:23 AM
		</div>
		<div class="comment_text"><p>In case anyone is wondering.  I have managed to solve my earlier problem.  I posted a solution on my blog:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.rbrasier.com%2F2010%2F08%2Fadding-custom-properties-metadata-into-word-documents-through-coldfusion%2F%3ApTsrdcpihtCRYerkQYigjBaxrf8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.rbrasier.com/2010/08/adding-custom-properties-metadata-into-word-documents-through-coldfusion/">http://www.rbrasier.com/201...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712374">18</a> by Raymond Camden
		posted on 8/23/2010 at 3:22 PM
		</div>
		<div class="comment_text"><p>Very cool - thanks for sharing your solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712379">19</a> by BeekerMD03
		posted on 2/25/2011 at 8:11 PM
		</div>
		<div class="comment_text"><p>Anyone find a solution to updating properties for Office 07 documents yet?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712367">20</a> by Raz
		posted on 9/5/2012 at 8:15 AM
		</div>
		<div class="comment_text"><p>I've read about org.apache.poi.xwpf.usermodel.XWPFDocument and tried to implement them but I'm having trouble initilizing it.</p><p>&lt;cfset javaloader  = createObject("component", "home.cfcs.javaloader.JavaLoader").init(paths)&gt;<br>&lt;cfset fis = createObject("java","java.io.FileInputStream")&gt;<br>&lt;cfset theFile = <a href="http://disq.us/url?url=http%3A%2F%2FfileQuery.directory%3A9l1SWkWth8MW_ucUUxACWQJIbGo&amp;cuid=3321886" rel="nofollow noopener" title="fileQuery.directory">fileQuery.directory</a> &amp; "/" &amp; <a href="http://disq.us/url?url=http%3A%2F%2FfileQuery.name%3A7Qccg7m8phvHw56W9KIFZbi0IDo&amp;cuid=3321886" rel="nofollow noopener" title="fileQuery.name">fileQuery.name</a>&gt; <br>&lt;cfset fis.init(theFile)&gt;<br>&lt;cfset docx = javaloader.create("org.apache.poi.xwpf.usermodel.XWPFDocument").init(fis)&gt;</p><p>the last code gives me an "Object instantation exception" error</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712369">21</a> by Raymond Camden
		posted on 9/5/2012 at 2:47 PM
		</div>
		<div class="comment_text"><p>The last code - so you mean the last line?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712377">22</a> by Raz
		posted on 9/5/2012 at 8:02 PM
		</div>
		<div class="comment_text"><p>yes, the last line. I also tried  <br>cfset docx = createObject("java","org.apache.poi.xwpf.usermodel.XWPFDocument").init(createObject("java","java.io.FileInputStream").init(theFileJava))</p><p>but it gives me an "Unable to find a constructor for class org.apache.poi.xssf.usermodel.XSSFWorkbook that accepts parameters of type ( java.io.FileInputStream ).". I'm stuck to this because I know it should accept the FileInputStream because it's a chile of InputStream. I'm using CF9, not sure if it matters.</p><p>Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712371">23</a> by Leigh
		posted on 9/5/2012 at 8:25 PM
		</div>
		<div class="comment_text"><p>Did you verify you are passing in a valid file path ie FileExists(theFile)?</p><p>&lt;i&gt;I know it should accept the FileInputStream because it's a chile of InputStream&lt;/i&gt;</p><p>True, but it was created by a different class loader ie createObject versus javaLoader which can cause problems in some cases. Try creating both objects with the javaLoader.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712375">24</a> by Raz
		posted on 9/6/2012 at 8:55 PM
		</div>
		<div class="comment_text"><p>Yes, it's a valid file.</p><p>I tried this:<br> &lt;cfset docx = javaloader.create("org.apache.poi.xwpf.usermodel.XWPFDocument").init(fis)&gt;</p><p>but it's giving me an "Object instantation exception"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712378">25</a> by Leigh
		posted on 9/6/2012 at 9:03 PM
		</div>
		<div class="comment_text"><p>That is just a generic error you get whenever something goes wrong with a java object. Look in the stack trace. That is where you will find the real exception.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712383">26</a> by Raz
		posted on 9/7/2012 at 7:31 AM
		</div>
		<div class="comment_text"><p>Thank you so much for a very prompt reply. I do appreciate it.</p><p>I modify the code a bit to make it clear:</p><p>&lt;cfscript&gt;<br>          theFileCF = <a href="http://disq.us/url?url=http%3A%2F%2FfileQuery.directory%3A9l1SWkWth8MW_ucUUxACWQJIbGo&amp;cuid=3321886" rel="nofollow noopener" title="fileQuery.directory">fileQuery.directory</a> &amp; "\" &amp; <a href="http://disq.us/url?url=http%3A%2F%2FfileQuery.name%3A7Qccg7m8phvHw56W9KIFZbi0IDo&amp;cuid=3321886" rel="nofollow noopener" title="fileQuery.name">fileQuery.name</a>;	                 	                         <br>	  docx = createObject("java","org.apache.poi.xwpf.usermodel.XWPFDocument").init(createObject("java","java.io.FileInputStream").init(theFileCF));<br>&lt;/cfscript&gt;</p><p>this still gives me an "Unable to find a constructor for class org.apache.poi.xwpf.usermodel.XWPFDocument that accepts parameters of type ( java.io.FileInputStream ). "</p><p>tried to use the javaloader:<br>&lt;cfscript&gt;<br>         theFileCF = <a href="http://disq.us/url?url=http%3A%2F%2FfileQuery.directory%3A9l1SWkWth8MW_ucUUxACWQJIbGo&amp;cuid=3321886" rel="nofollow noopener" title="fileQuery.directory">fileQuery.directory</a> &amp; "\" &amp; <a href="http://disq.us/url?url=http%3A%2F%2FfileQuery.name%3A7Qccg7m8phvHw56W9KIFZbi0IDo&amp;cuid=3321886" rel="nofollow noopener" title="fileQuery.name">fileQuery.name</a>;	                 	                         <br>         docx = javaloader.create("org.apache.poi.xwpf.usermodel.XWPFDocument").init(javaloader.create("java.io.FileInputStream").init(theFileCF));<br>&lt;/cfscript&gt;</p><p> but it gives me an error "An exception occurred while instantiating a Java object. The class must not be an interface or an abstract class."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712376">27</a> by Raz
		posted on 9/7/2012 at 7:33 AM
		</div>
		<div class="comment_text"><p>I use the poi jars from poi-bin-3.8-20120326</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712385">28</a> by Leigh
		posted on 9/7/2012 at 7:49 AM
		</div>
		<div class="comment_text"><p>Forget about the "..class must not be an interface or an abstract class" error. It is usually meaningless. Just a throw away header to say "oops, something" went wrong. To find out what that "something" is, you have to review the stack trace.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F9.0%2FDeveloping%2FWSc3ff6d0ea77859461172e0811cbec22c24-7d24.html%3AKp_TJyoAyfeUbzaVkwnYtHBw7-M&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/9.0/Developing/WSc3ff6d0ea77859461172e0811cbec22c24-7d24.html">http://help.adobe.com/en_US...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712381">29</a> by Raz
		posted on 9/7/2012 at 11:09 AM
		</div>
		<div class="comment_text"><p>here's the stack trace:</p><p>Stack Trace<br>at cffilename_search_action2ecfm454045983.runPage(D:\Websites\Home\Employee Services\Policies &amp; Procedures\filename_search_action.cfm:153)</p><p>coldfusion.runtime.java.JavaProxy$NoSuchConstructorException: Unable to find a constructor for class org.apache.poi.xwpf.usermodel.XWPFDocument that accepts parameters of type ( java.io.FileInputStream ).<br>	at coldfusion.runtime.java.JavaProxy.CreateObject(<a href="http://disq.us/url?url=http%3A%2F%2FJavaProxy.java%3AAaw2-a_HT4xGmPrro-gVeQUd-sA&amp;cuid=3321886" rel="nofollow noopener" title="JavaProxy.java">JavaProxy.java</a>:178)<br>	at coldfusion.runtime.java.JavaProxy.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FJavaProxy.java%3AAaw2-a_HT4xGmPrro-gVeQUd-sA&amp;cuid=3321886" rel="nofollow noopener" title="JavaProxy.java">JavaProxy.java</a>:80)<br>	at coldfusion.runtime.CfJspPage._invoke(<a href="http://disq.us/url?url=http%3A%2F%2FCfJspPage.java%3ADrFcmjVQk5qzfPgU8u4mJFJc9BM&amp;cuid=3321886" rel="nofollow noopener" title="CfJspPage.java">CfJspPage.java</a>:2360)<br>	at cffilename_search_action2ecfm454045983.runPage(D:\Websites\Home\Employee Services\Policies &amp; Procedures\filename_search_action.cfm:153)<br>	at coldfusion.runtime.CfJspPage.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FCfJspPage.java%3ADrFcmjVQk5qzfPgU8u4mJFJc9BM&amp;cuid=3321886" rel="nofollow noopener" title="CfJspPage.java">CfJspPage.java</a>:231)<br>	at coldfusion.tagext.lang.IncludeTag.doStartTag(<a href="http://disq.us/url?url=http%3A%2F%2FIncludeTag.java%3AxCx1-v7yWxktJ75w83tBF6RmZfk&amp;cuid=3321886" rel="nofollow noopener" title="IncludeTag.java">IncludeTag.java</a>:416)<br>	at coldfusion.filter.CfincludeFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FCfincludeFilter.java%3A6BCKWaB5atgL76uxBq8XSS8CNJ8&amp;cuid=3321886" rel="nofollow noopener" title="CfincludeFilter.java">CfincludeFilter.java</a>:65)<br>	at coldfusion.filter.ApplicationFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FApplicationFilter.java%3A_uYcV8J6FPZPo3khkIMmkViNQb8&amp;cuid=3321886" rel="nofollow noopener" title="ApplicationFilter.java">ApplicationFilter.java</a>:363)<br>	at coldfusion.filter.RequestMonitorFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FRequestMonitorFilter.java%3Am-PVS2bQzmXiERdT4dpdEijYL0M&amp;cuid=3321886" rel="nofollow noopener" title="RequestMonitorFilter.java">RequestMonitorFilter.java</a>:48)<br>	at coldfusion.filter.MonitoringFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FMonitoringFilter.java%3A5MrsV4xdu8Q39_rgQDy6Msv-pFU&amp;cuid=3321886" rel="nofollow noopener" title="MonitoringFilter.java">MonitoringFilter.java</a>:40)<br>	at coldfusion.filter.PathFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FPathFilter.java%3ASiwAy2pVu_YikdHxqFRltdPO5JY&amp;cuid=3321886" rel="nofollow noopener" title="PathFilter.java">PathFilter.java</a>:87)<br>	at coldfusion.filter.LicenseFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FLicenseFilter.java%3ACP_T7Pll9qWS25QcipTGrCd67bk&amp;cuid=3321886" rel="nofollow noopener" title="LicenseFilter.java">LicenseFilter.java</a>:27)<br>	at coldfusion.filter.ExceptionFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FExceptionFilter.java%3AGDJhmJPm0y_uBv-bqMx5jgl7Wfo&amp;cuid=3321886" rel="nofollow noopener" title="ExceptionFilter.java">ExceptionFilter.java</a>:70)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712384">30</a> by Leigh
		posted on 9/7/2012 at 7:52 PM
		</div>
		<div class="comment_text"><p>No, sorry I meant the stack trace from the other example. (If the full trace is too long for comments, use pastebin).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712386">31</a> by Raz
		posted on 9/8/2012 at 11:02 PM
		</div>
		<div class="comment_text"><p>please see</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FEX97PSxS%3A2hlFCA6KjjxiWuCYtKo5mWg24vk&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/EX97PSxS">http://pastebin.com/EX97PSxS</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712387">32</a> by Leigh
		posted on 9/9/2012 at 1:40 AM
		</div>
		<div class="comment_text"><p>Perfect, thanks. When you create the javaLoader, try setting the loadColdFusionClassPath property to true:</p><p>javaLoader.init(loadPaths=paths, loadColdFusionClassPath=true);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712389">33</a> by Raz
		posted on 9/9/2012 at 7:18 PM
		</div>
		<div class="comment_text"><p>Hello, I tried the code but I'm still getting the same error</p><p>here's my code <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FRReHJ77m%3AfnXQeQGbg6rMWP_bkGZmtYZjBhU&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/RReHJ77m">http://pastebin.com/RReHJ77m</a></p><p>and here's the stack trace <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2F24zXEcQQ%3AobfucsYgjHs_CEJtOuybAKlYjFg&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/24zXEcQQ">http://pastebin.com/24zXEcQQ</a></p><p>Thanks in advance for your patience.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712392">34</a> by Leigh
		posted on 9/10/2012 at 1:03 AM
		</div>
		<div class="comment_text"><p>Basically the problem is the dom4j jar which is used by POI and CF. It is notorious for causing problems when multiple class loaders are used. In short, omit that jar and use the loadColdFusionClassPath=true and it should work. See example here: <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FiEafTZqq%3AsM7g7FmoCdca8u9RbpVETr87y7w&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/iEafTZqq">http://pastebin.com/iEafTZqq</a></p><p>Though if all you need is the properties, it is simpler to use the ExtractorFactory. Then you will not need separate code for the different types of POI files. There is an example above in the initial comments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712391">35</a> by Raz
		posted on 9/10/2012 at 7:06 AM
		</div>
		<div class="comment_text"><p>Thank you so much, Leigh!!! It worked!</p><p>I omit dom4j jar, use loadPaths=paths, loadColdFusionClassPath=true and ExtractorFactory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712390">36</a> by Leigh
		posted on 9/10/2012 at 7:25 AM
		</div>
		<div class="comment_text"><p>Great! Glad to hear it is all sorted out :)</p></div>
	</div>
</div>
		