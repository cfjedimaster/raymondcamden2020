
<div class="comment" id="c_1713671430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671430">1</a> by Shane Zehnder
		posted on 9/7/2007 at 8:09 PM
		</div>
		<div class="comment_text"><p>That would have come in really handy back when I was doing a flat-file db conversion.  Much easier to just read it in one line at a time instead of parsing it out of one big chunk of text.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671428">2</a> by TJ Downes
		posted on 9/7/2007 at 8:20 PM
		</div>
		<div class="comment_text"><p>If I recall, the person who told that performance-wise this was far faster than parsing line by line, especially if you do not need to start at the top of the file. I haven't run the tests to be certain.</p><p>Given that, I think I would just toss in a cftry to catch the EoF error and handle it elegantly using a break. I think Ill run some tests to see how much of a performance gain you get. Now just to find a massive log file......</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671429">3</a> by Raymond Camden
		posted on 9/7/2007 at 8:24 PM
		</div>
		<div class="comment_text"><p>TJ, you are indeed right. cfloop/file, and the new file funcs, are all faster than the cffile tag, which reads in the entire file in memory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671431">4</a> by TJ Downes
		posted on 9/7/2007 at 8:37 PM
		</div>
		<div class="comment_text"><p>Unfortunately you cant break out of the loop with a EoF error. Its the tag itself reaching the EoF and catching that simply stops processing of the page. So I guess the rules of thumb for using from &amp; to attributes when reading a file is that you must know the file's length.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671434">5</a> by Eric Roberts
		posted on 9/7/2007 at 10:14 PM
		</div>
		<div class="comment_text"><p>Couldn't you just get the file size and use that as a limiting factor for the "to" attribute (make it a variable and throw in some logic before the loop if x gt file length, x=file length?</p><p>Eric</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671432">6</a> by Raymond Camden
		posted on 9/7/2007 at 10:19 PM
		</div>
		<div class="comment_text"><p>File size though has nothing to do with the number of lines. You could have one VERY long line and a bunch of small ones.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671436">7</a> by Mike Benner
		posted on 9/7/2007 at 10:30 PM
		</div>
		<div class="comment_text"><p>It is documented in the error/debug information sent to the browser.  Now to find the time to break every tag to find hidden documentation.</p><p>Attribute validation error for the CFLOOP tag.<br># The tag has an invalid attribute combination: condition,file,index. Possible combinations are:Required attributes: 'file,index'. Optional attributes: 'charset,from,to'.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671438">8</a> by Mike Benner
		posted on 9/7/2007 at 10:46 PM
		</div>
		<div class="comment_text"><p>TJ,</p><p>You can do the following:</p><p>&lt;code&gt;<br>&lt;cfset myfile = server.coldfusion.rootdir &amp; "/logs/server.log"&gt;<br>&lt;cftry&gt;<br>--------BoF----------&lt;br /&gt;<br>&lt;cfloop file="#myfile#" index="line" from="1" to="10"&gt;<br>   &lt;cfoutput&gt;#line#&lt;br /&gt;&lt;/cfoutput&gt;<br>&lt;/cfloop&gt;<br>&lt;cfcatch&gt;<br>--------EOF-------&lt;br /&gt;<br>&lt;/cfcatch&gt;<br>&lt;/cftry&gt;<br>....More Processing....<br>&lt;/code&gt;</p><p>All lines are output, no error is displayed to the user and it allows you process the rest of the page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671440">9</a> by Raymond Camden
		posted on 9/7/2007 at 10:48 PM
		</div>
		<div class="comment_text"><p>Mike, to make your code more safe, you should check the exception type in catch. For example, if I provide a file that doesn't exist, an error will be thrown, but you don't want to ignore that error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671441">10</a> by TJ Downes
		posted on 9/8/2007 at 2:27 AM
		</div>
		<div class="comment_text"><p>Thanks Mike, I thought I tried that method and got the EoF error... Ill have to try it again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671444">11</a> by Mike Benner
		posted on 9/8/2007 at 2:45 AM
		</div>
		<div class="comment_text"><p>TJ,</p><p>I tried it on my fusion reactor logs and it worked great.  Couldn't be better timing as I was working with files.</p><p>Ray,</p><p>In this instance couldn't I just do fileExists() before the loop?  Otherwise, how would you recommend doing the try/catch this instance?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671445">12</a> by Raymond Camden
		posted on 9/8/2007 at 6:54 AM
		</div>
		<div class="comment_text"><p>Mike - sure, fileExists would catch it, but it wouldn't catch CF not being able to read it. getFileInfo would check that. My point is though - you can have cfcatch look for a specific type of exception. You would want to do that so you ONLY catch that error, and not others.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671446">13</a> by Rupesh kumar
		posted on 9/8/2007 at 9:02 PM
		</div>
		<div class="comment_text"><p>One way to break out of loop upon end of file is use the actual exception thrown. Here is the actual catch statement that you can use. <br>&lt;cfcatch type="coldfusion.tagext.io.FileUtils$EndOfFileException"&gt;</p><p>On a related note, I blogged about it a while back at<br><a href="http://disq.us/url?url=http%3A%2F%2Fcoldfused.blogspot.com%2F2007%2F07%2Fnew-file-io-in-coldfusion-8.html%3AmqaLIwLAaBdmBhBI5AcvrwyC1Ws&amp;cuid=3321886" rel="nofollow noopener" title="http://coldfused.blogspot.com/2007/07/new-file-io-in-coldfusion-8.html">http://coldfused.blogspot.c...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fcoldfused.blogspot.com%2F2007%2F07%2Fnew-file-io-in-coldfusion-8-part-ii.html%3Ae5yEOLiRcuNYVWePz9-Hq2N_JQM&amp;cuid=3321886" rel="nofollow noopener" title="http://coldfused.blogspot.com/2007/07/new-file-io-in-coldfusion-8-part-ii.html">http://coldfused.blogspot.c...</a></p><p>A better and elegant way to do what you want is using new File IO using file handle where you can actually check if you have reached the end of file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671447">14</a> by Raymond Camden
		posted on 9/8/2007 at 9:09 PM
		</div>
		<div class="comment_text"><p>Thanks for adding those links Rupesh.</p><p>The _one_ function I wish existed was a FileSeek. That would be useful for jumping to a position in a file (like to examine MP3 files)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671456">15</a> by TT
		posted on 9/10/2007 at 8:46 PM
		</div>
		<div class="comment_text"><p>Just curious, does anyone know how cf8 knows the end of a line? chr(10) or chr(13) or both?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671457">16</a> by Raymond Camden
		posted on 9/10/2007 at 10:07 PM
		</div>
		<div class="comment_text"><p>There is a Java property, or method for it, so I assume they use that. Or they sniff the first part of the file.</p></div>
	</div>
</div>
		