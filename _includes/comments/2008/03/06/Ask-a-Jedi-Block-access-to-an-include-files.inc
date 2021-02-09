
<div class="comment" id="c_1713677793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677793">1</a> by Sean Coyne
		posted on 3/6/2008 at 6:26 PM
		</div>
		<div class="comment_text"><p>Why not put them all in an includes folder then add an Application.cfm file with just a &lt;cfabort /&gt;.  This will work on shared hosting as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677799">2</a> by Raymond Camden
		posted on 3/6/2008 at 6:28 PM
		</div>
		<div class="comment_text"><p>Dude, it's funny. I was away from the keyboard (getting ready to bring the kids to school) when I remember the App.cfc/cfm method. So yes, that is another way of doing it. Although I'd probably just do it in my App's root Application.cfc file. In onRequestStart you can look for /includes in the template and if it exists, block it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677797">3</a> by Devon
		posted on 3/6/2008 at 7:28 PM
		</div>
		<div class="comment_text"><p>Will be using this in a mini inhouse framework which is very much geared toward drag and drop a site and edit the css for guys who dont know to much CFML. So moving outside the webroot is not an option,since shared hosting will be the most likely candidate for the simple sites this allows.</p><p>Thanks Ray, this helps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677804">4</a> by Ben Nadel
		posted on 3/6/2008 at 7:50 PM
		</div>
		<div class="comment_text"><p>I have been using a system that works great for me. All non-public files start with underscores. Example:</p><p>_header.cfm<br>_footer.cfm</p><p>Then, in the App.cfc/cfm I check to see if the requested page starts with an underscore and if so, I throw an error (or treat otherwise).</p><p>This works great on two levels. On one level, its an ultra easy way to limit file access. But, almost more importantly, it makes a really obvious statement about the file to anyone who is going to be working on it. Is this a public file?? Does it start with an underscore? If yes, then no, not a public file. I love me some explicit style.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677808">5</a> by Raymond Camden
		posted on 3/6/2008 at 8:00 PM
		</div>
		<div class="comment_text"><p>Until a new developer forgets the _. ;)</p><p>Which also applies to the solution I suggested of checking getbasttemplatepath.</p><p>These are _all_ hacks. Just best to put the files outside of web root. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677811">6</a> by Will B.
		posted on 3/6/2008 at 9:41 PM
		</div>
		<div class="comment_text"><p>I saw another system of doing this in a free (PHP-based) CRM tool called SugarCRM.  I dug through the files for grins.  It contained a set of flags that checked something like a request scope variable.  Meaning, if the primary page was properly executed (think index.cfm in an MVC setup), then a request flag was set, like "request.properlyRun", whatever.  Then each page checked that flag and wouldn't execute if called directly.</p><p>- Will B.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677812">7</a> by Adam Bielawski
		posted on 3/6/2008 at 9:44 PM
		</div>
		<div class="comment_text"><p>Hi Ben,</p><p>I'm a mere novice in CF, I usually prefix my includes with the underscore, how do you check?</p><p>I hope I'm not too mere mortal for this blog.</p><p>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677821">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677821">8</a> by Raymond Camden
		posted on 3/6/2008 at 9:48 PM
		</div>
		<div class="comment_text"><p>Adam, this blog is for people of all skill levels. :)</p><p>I'll answer the q, even though it was to Ben. In OnRequestStart, you have access to the name of the template being requested, ie</p><p>/index.cfm</p><p>/foo/goo.cfm</p><p>Etc. You can get the filename by using list functions:</p><p>filename = listLast(arguments.template,"/")</p><p>You can then see if the first char is a _</p><p>if(left(filename,1) is "_")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677823">9</a> by Ben Nadel
		posted on 3/6/2008 at 9:48 PM
		</div>
		<div class="comment_text"><p>@Adam,</p><p>No problem, it's pretty easy:</p><p>&lt;cfif (Left( GetFileFromPath( GetBaseTemplatePath() ), 1 ) EQ "_")&gt;</p><p>... throw error, or include a different file (ex. index.cfm).</p><p>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677822">10</a> by Ben Nadel
		posted on 3/6/2008 at 9:49 PM
		</div>
		<div class="comment_text"><p>Ooops :) Me and Ray answered at the same time :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677827">11</a> by Adam Bielawski
		posted on 3/6/2008 at 9:52 PM
		</div>
		<div class="comment_text"><p>Cool thanks guys, I will have to try this out this weekend. I am not new to CF, just don't have time to reinvorce my skills anymore at my current job.  But those are the phases in life, so all it during those weekends at home trying to get my site(s) more interactive.</p><p>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677828">12</a> by Geoff
		posted on 3/7/2008 at 12:26 AM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fwtg%2Fpublic%2Fcoding_standards%2Fstructure.html%3ALysumsTLXM2eCdQTDpx6bScOh-o&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/wtg/public/coding_standards/structure.html">http://livedocs.adobe.com/w...</a></p><p>This is worth a read, if your web host allows you to access a level above your wwwroot.</p><p>You can put all your includes outside of the web root and just &lt;cfinclude template="../extensions/includes/blah.cfm" /&gt;</p><p>And if you like the tag library layout, you can &lt;cfimport&gt; some folder or other outside the webroot.</p><p>&lt;cfimport prefix="blah" taglib="../extensions/customtags/" /&gt;<br>&lt;blah:nav&gt;<br>&lt;h1&gt;Hello!&lt;/h1&gt;<br>&lt;/blah:nav&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677825">13</a> by Robb
		posted on 3/7/2008 at 1:41 AM
		</div>
		<div class="comment_text"><p>All of these suggestions are great to have depending on circumstance but don't forget about FTP security. HTTP access obviously is important to manage but having someone attack your FTP just plain sucks even if they don't get in. If you can control your FTP address use an ip address that is not related with your sites and try not to use <a href="http://disq.us/url?url=http%3A%2F%2Fftp.sitename.com%3AfSYK4FStX4UR74pqEqXs-ZuO9wg&amp;cuid=3321886" rel="nofollow noopener" title="ftp.sitename.com">ftp.sitename.com</a>.</p><p>Just my 2 cents and thanks for all the great suggestions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677826">14</a> by dc
		posted on 3/7/2008 at 2:21 AM
		</div>
		<div class="comment_text"><p>+1 for the underscore.</p><p>I then do the security at the web server level and I can use the underscore method for any file type that should not be served directly.</p><p>As for it being a hack that a new developer might miss, surely you have documentation and coding guidelines :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677829">15</a> by DanaK
		posted on 3/7/2008 at 6:51 PM
		</div>
		<div class="comment_text"><p>Just a side note, there is a slim chance that using hyphens or underscores in your filesnames can cause some unforseen issues in a very small number of cases.</p><p>IIS 6.x applies encoding to hyphens and underscores in all its courtesy redirects (at least it used to?). The 'best practice' I have read in the past was to avoid using them in folder structure and file naming in a production environment where they will be a part of a direct url request.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677830">16</a> by Raymond Camden
		posted on 3/7/2008 at 6:55 PM
		</div>
		<div class="comment_text"><p>Interesting tip there Dana - although - if it WERE to block a URL request, or make it harder, that would actually be helpful in this situation. ;)</p></div>
	</div>
</div>
		