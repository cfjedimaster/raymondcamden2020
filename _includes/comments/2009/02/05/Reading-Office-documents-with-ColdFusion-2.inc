
<div class="comment" id="c_1713712225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712225">1</a> by Andrius
		posted on 7/8/2009 at 2:56 PM
		</div>
		<div class="comment_text"><p>Thank you for this elegant solution. It helped me a lot. <br>However, you could save the javaloader into the server scope and use it from there to avoid memory leaks (please refer to readme.txt within the javaloader folder).</p><p>There is a known memory leak issue when using a java.net.URLClassLoader to load external jar files. Please find more info here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.compoundtheory.com%2F%3Faction%3DdisplayPost%26ID%3D212%3A5S_nzd-U3xmLIET66VkoWR-gJzw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.compoundtheory.com/?action=displayPost&amp;ID=212">http://www.compoundtheory.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712226">2</a> by Andrew Duvall
		posted on 10/2/2009 at 12:04 AM
		</div>
		<div class="comment_text"><p>in this article it says "Copy all the JARs, all the lib contents, and the ooxml-lib files, into a new subfolder called jars2"<br>I am using the now release final <a href="http://disq.us/url?url=http%3A%2F%2Fpoi-3.5-final.zip%3AOmwml7VjvJuJqawdYePr5gxaL6A&amp;cuid=3321886" rel="nofollow noopener" title="poi-3.5-final.zip">poi-3.5-final.zip</a> file and now have a total of 7 jar files (16.7 MB)<br>\jars2\lib\commons-logging-1.1.jar  <br>\jars2\lib\junit-3.8.1.jar  <br>\jars2\lib\log4j-1.2.13.jar  <br>\jars2\ooxml-lib\dom4j-1.6.1.jar  <br>\jars2\ooxml-lib\geronimo-stax-api_1.0_spec-1.0.jar  <br>\jars2\ooxml-lib\ooxml-schemas-1.0.jar  <br>\jars2\ooxml-lib\xmlbeans-2.3.0.jar</p><p>Question: is that all i need from the zip file?</p><p>Issue: I get Error Occurred While Processing Request <br>org.apache.poi.extractor.ExtractorFactory</p><p>The error occurred in C:\Dev\libs\contactsImporter\javaloader\JavaLoader.cfc: line 94</p><p>92 : 	&lt;cfargument name="className" hint="The name of the class to create" type="string" required="Yes"&gt;<br>93 : 	&lt;cfscript&gt;<br>94 : 		var class = getURLClassLoader().loadClass(arguments.className);<br>95 : <br>96 : 		return createJavaProxy(class);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712231">3</a> by Andrew Duvall
		posted on 10/2/2009 at 1:54 AM
		</div>
		<div class="comment_text"><p>ok, this is my first time implementing a POI solution and to be quite frank, I've rarely used jar files.  Since the final release of POI-3.5 was just a couple days ago.  It seems they excluded some JAR files.<br>I didn't know where to find the FINAL versions jar files, but used the missing jars from beta6 found here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.jarvana.com%2Fjarvana%2Fbrowse%3Fpath%3D%2Forg%2Fapache%2Fpoi%2F%3A7AdqAXYCtSI4HHjV_sbfvp7ihS8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.jarvana.com/jarvana/browse?path=/org/apache/poi/">http://www.jarvana.com/jarv...</a><br>folders:<br>4. poi<br>5. poi_contrib<br>6. poi_ooxml<br>7. poi-scratchpad</p><p>It seems like the POI project is using POM files; not sure if that is why certains JAR files are gone? not sure what POM files are used for either :)</p><p>Anyway, I don't doubt I'll be schooled here; but this is what I did to get my app working for now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712228">4</a> by Raymond Camden
		posted on 10/2/2009 at 1:56 AM
		</div>
		<div class="comment_text"><p>You won't be schooled by me. ;) I stumble in this area as well sometimes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712229">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712229">5</a> by Don
		posted on 2/19/2010 at 1:24 AM
		</div>
		<div class="comment_text"><p>Well, since your last entry on this I see version 3.6 is out. Can't find 3.5 anywhere.  So I shall dive in head first and hope it works. <br>See, my problem is that I have THOUSANDS of RTF files on a server. The server is dieing so we moved the application to a new server. Now we have to read/edit the rtf files somehow. Previously it was done by simply using cfcontent.  This opened Word and they did their thing. That doesn't work now since the files are on 1 server and the application on another. The app server does not have office at all on it. <br>Fun fun fun.<br>And now "for security" they want to put these files in an Oracle db. I can do that, but getting them out in an editable format is kicking my butt.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712227">6</a> by Mike
		posted on 6/21/2011 at 8:33 PM
		</div>
		<div class="comment_text"><p>I downloaded your code and downloaded the POI 3.8 beta3. It works GREAT for old formats like ppt, xls, and doc. But as soon as I move a 2007-formatted file into the testdocs folder, it breaks. I checked all my log files and I can't find anything that references what the problem is. CF gives a 500 error message, and temporarily CF is unavailable, it must reboot quickly. It chokes on the line:</p><p>&lt;cfset extractor = extractorFactory.createExtractor(myFile)&gt;</p><p>for Office 2007 documents (can be any 2007 document - docx, pptx, xlsx) - and these files aren't anything special - just basic files with no macros or fanciness.</p><p>any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712230">7</a> by Raymond Camden
		posted on 6/23/2011 at 12:01 AM
		</div>
		<div class="comment_text"><p>If I remember right the code was only for pre-2007 files and they had a newer system for 2007+ Office extensions. Best bet is to check the site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712234">8</a> by Raz
		posted on 9/5/2012 at 8:10 AM
		</div>
		<div class="comment_text"><p>Hi Raymond and Mike, were you able to find a solution for the Office 2007 documents (can be any 2007 document - docx, pptx, xlsx) files? on how to read their metadata?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712233">9</a> by Raymond Camden
		posted on 9/5/2012 at 2:48 PM
		</div>
		<div class="comment_text"><p>Try this maybe? <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F8%2F16%2FgetAllTheTexts--simple-Apache-Tika-wrapper%3AMKXflWX9e2TJqcqI3FYUcmuJgrk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/8/16/getAllTheTexts--simple-Apache-Tika-wrapper">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		