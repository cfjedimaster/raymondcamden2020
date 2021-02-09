
<div class="comment" id="c_1713720614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720614">1</a> by Jeff Howden
		posted on 12/17/2009 at 12:23 AM
		</div>
		<div class="comment_text"><p>Maybe it's just a copy-and-paste error, but shouldn't the &lt;cfheader&gt; tag be called as:</p><p>&lt;cfheader name="content-disposition" value="attachment; filename=""#local.rc.file.getOriginalFileName()#""" /&gt;</p><p>Notice the use of extra quotes around the filename string.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720612">2</a> by Raymond Camden
		posted on 12/17/2009 at 12:28 AM
		</div>
		<div class="comment_text"><p>Actually, he has a quote in front - see it? But not in back. I bet that could be it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720591">3</a> by Jeff Howden
		posted on 12/17/2009 at 12:34 AM
		</div>
		<div class="comment_text"><p>Yeah, I see it.  I don't see a trailing one though, hence my comment about a possible error in copy-and-paste.</p><p>Personally, I prefer to not use single-quotes (') for attribute values (throws off syntax highlighting in Homesite+ [yeah, I'm 'old-school']) and will just double-up any double-quotes within attribute values.  For some reason my eye is more easily able to parse the doubled-up double-quotes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720596">4</a> by Raymond Camden
		posted on 12/17/2009 at 12:43 AM
		</div>
		<div class="comment_text"><p>It helps if I read your _entire_ comment. ;) But yeah, I think thats the issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720598">5</a> by Nathan Strutz
		posted on 12/17/2009 at 12:53 AM
		</div>
		<div class="comment_text"><p>Thanks for being so kind to my sad little app, Ray!</p><p>Oh, and "gray error" - it's the standard CF error with the gray background. It was with the installer, if you give an incorrect cf admin password it would just throw an error that I didn't feel like catching (another item on the infinite to-do list).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720602">6</a> by Marko Simic
		posted on 12/17/2009 at 7:36 AM
		</div>
		<div class="comment_text"><p>I totally agree with all Ray said. An excellent peace of code.<br>+ what I liked:</p><p>a) devnotes.txt <br>I am sooo lazy to do that and I regretted so many times I did not. I envy you on this :)</p><p>b) Use of Ant. Not so common to see that employed in non-Java environment.</p><p>Questions:</p><p>- Why you ignored "service by convention" and did not use auto-wiring by any mean?</p><p>- Partially related to first Q. What motivated you to write your own bean factory?</p><p>As this is second entry with setup wizard, and for Nth time saw how useful that is, I am definitely going to create one for my app(s).</p><p>IMHO, this app is very good demo of how CF applications is going to look like (organized and written) in near future (for an year or two).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720608">7</a> by Raymond Camden
		posted on 12/17/2009 at 7:39 AM
		</div>
		<div class="comment_text"><p>@Marko: Actually, I see many intermediate/advanced CFers use Ant. I don't use it often, but have some experience with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720601">8</a> by Sam Farmer
		posted on 12/17/2009 at 8:23 AM
		</div>
		<div class="comment_text"><p>Nathan, this looks really cool and I love the UI (though not the background color).</p><p>I'm getting a really weird error during the setup:</p><p>Error getting collection information.: org.apache.solr.common.SolrException: Not Found Not Found request: http://localhost:8983/solr/admin/cores?action=STATUS&amp;core=&amp;wt=javabin</p><p>The error occurred in /Applications/ColdFusion9/wwwroot/best9/CF9DocRepo_Build/com/dopefly/SimulatedCFTags.cfc: line 3<br>Called from /Applications/ColdFusion9/wwwroot/best9/CF9DocRepo_Build/com/dopefly/documentrepository/DocumentRepositorySetup.cfc: line 13<br>Called from /Applications/ColdFusion9/wwwroot/best9/CF9DocRepo_Build/setup/setup.cfm: line 21</p><p>I'm on a Mac and have manually started solr.  Any thoughts?  I think I might have messed something up during install...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720599">9</a> by Nathan Strutz
		posted on 12/17/2009 at 9:15 AM
		</div>
		<div class="comment_text"><p>@Marko, Thanks for your comments. In response...<br>1) I ignored FW/1's services and autowiring because there was no documentation when I started writing it, and it wasn't immediately obvious how to make it work the way I wanted, so I dropped it.<br>2) I didn't want to incorporate any more files, external libraries, etc, further complicating stuff. The "manualwiring" was the easy solution. I'm for them, generally, and would probably shoot for Lightwire as a bean factory framework.</p><p>@Marko, @cfjedimaster, a story: I was trying to tweak things and get it in a releaseable state, rushing through bug after bug just to make it load right, squeezing every second, cramming. It was 11:57PM on Nov. 30th. Two clicks later, I had a zip file the the app in it. Less than a minute later and the email with my entry was sent - Ant TOTALLY saved my skin! The time I put into it early on completely paid off.</p><p>@Sam_Farmer I think that's the error you get when CF can't talk to Solr. Honestly, the app will work the same without Solr, just the setup app will bomb. The background color? I thought dark grays were the new lime green, or something...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720610">10</a> by Ryan Arneson
		posted on 4/27/2011 at 10:15 PM
		</div>
		<div class="comment_text"><p>@Sam_Farmer I posted this on your blog but want to mention it here in case anybody else runs into this. I was getting the same error this morning. I had created an alias to cfusion/solr/cfsolr to allow me to start solr from any location in terminal. The problem is, cfsolr looks for start.jar without specifying a path to it, and if you're not running the command from the same directory (cfusion/solr/) it's not going to find it. To further complicate things, it suppresses the error message and tells you ColdFusion Solr Server is starting up and will be available shortly, leading you to believe everything is peachy.</p></div>
	</div>
</div>
		