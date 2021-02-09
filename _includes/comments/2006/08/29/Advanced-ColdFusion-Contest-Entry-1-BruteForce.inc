
<div class="comment" id="c_1713656882">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656882">1</a> by Brad
		posted on 8/29/2006 at 5:34 PM
		</div>
		<div class="comment_text"><p>Second image link returns error.</p><p>This looks good. I didn't think of using Coldfusion API. I should try check that out sometime and this project too!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656889">2</a> by Raymond Camden
		posted on 8/29/2006 at 5:38 PM
		</div>
		<div class="comment_text"><p>Fixed. Thanks Brad.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656896">3</a> by Tom Chiverton
		posted on 8/29/2006 at 5:59 PM
		</div>
		<div class="comment_text"><p>The example rules file is a good example of why CF needs interfaces - you'd know exactly what functions to provide and what was expected in and out :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656898">4</a> by Bastian Konetzny
		posted on 8/29/2006 at 8:01 PM
		</div>
		<div class="comment_text"><p>Hey Ray,<br>thanks for the great feedback!<br>I will post a link to an updated verion later.<br>I have written some documentation and did some improvements you suggested.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656895">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656895">5</a> by Bastian Konetzny
		posted on 8/30/2006 at 2:02 AM
		</div>
		<div class="comment_text"><p>As promised I uploaded a new version.<br>You can download it under <a href="http://disq.us/url?url=http%3A%2F%2Fwww.thecoss.org%2Fstorage%2Fbruteforce.zip%3A2Ffz2hmHrI0S8Iaqa3hXTqTqJlg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.thecoss.org/storage/bruteforce.zip">http://www.thecoss.org/stor...</a> - included are a new entry in the navigation named "documentation" and several fixes/improvements.<br>Ray, I did this "check all" thingie you wanted ;)</p><p>I also added an extensioncustoms.cfm which you can include with your extensioncustoms.cfm in the cfadmin root. this file will go through all sub-directories and tries to find a file called extension.xml in your extension. if found, it will add the given name form this xml file to the cfadmin navigation. maybe we can establish some "extension standard" here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656902">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656902">6</a> by Raymond Camden
		posted on 8/30/2006 at 2:22 AM
		</div>
		<div class="comment_text"><p>Bastian, interesting. What does your toggle_areas code do?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656899">7</a> by Bastian Konetzny
		posted on 8/30/2006 at 11:28 AM
		</div>
		<div class="comment_text"><p>toggle_areas toggles the areas :)<br>By default, in the cfadmin some areas in the navigation are expanded. with this code i toggle these areas.<br>Example: &lt;cfparam name="variables.toggle_areas" default="serversettings,customextensions"&gt;<br>This code will close the serversettings ares (expanded by default) and open the customextensions area (closed by default). I did this because I often use the customextensions area, but almost never the serversettings area.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656901">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656901">8</a> by Lola Lee Beno
		posted on 8/30/2006 at 4:48 PM
		</div>
		<div class="comment_text"><p>I'm seeing two folders named bruteforce, one which is the main directory that emerges from the package, and an inner folder named bruteforce along with extensionscustom.cfm.  Am I supposed to put the main directory within /cfide/administrator/extension directory?  The documentation is a bit unclear - I have no idea what the three underscores from this section " '___extensions/bruteforce/' " is supposed to represent - "/cfide/administrator/", right?</p><p>And what is the purpose of extensionscustom.cfm?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656900">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656900">9</a> by Lola Lee Beno
		posted on 8/30/2006 at 4:50 PM
		</div>
		<div class="comment_text"><p>Ooops . . . about my question regarding extensionscustom.cfm - never mind - obviously it's been answered above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656903">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656903">10</a> by Raymond Camden
		posted on 8/30/2006 at 4:57 PM
		</div>
		<div class="comment_text"><p>Lola, I'm planning a short blog entry on extending the cf admin. I think I've mentioned it before a few times, but it may be time for a reminder.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656904">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656904">11</a> by Bastian Konetzny
		posted on 8/30/2006 at 5:04 PM
		</div>
		<div class="comment_text"><p>To describe my environment:<br>I have all the extensions in "/cfide/administrator/___extensions/"<br>I have a extensionscustom.cfm in "/cfide/administrator/" which includes my customized extensionscustom.cfm in "/cfide/administrator/___extensions/".<br>My customized extensionscustom.cfm will lookup all folders unter "/cfide/administrator/___extensions/" for an extension.xml - if found, it will read this xml-file and add the name of the extension to the "Custom Extensions" Navigation in the CFAdmin.</p></div>
	</div>
</div>
		