
<div class="comment" id="c_1713665930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665930">1</a> by Sam
		posted on 5/31/2007 at 4:27 PM
		</div>
		<div class="comment_text"><p>I've been secretly hoping they would add that.  Right now I've hacked a solution together where we do the same thing, but this will be perfect for the application I've been working on.</p><p>Absolutely great!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665931">2</a> by Ben Nadel
		posted on 5/31/2007 at 5:36 PM
		</div>
		<div class="comment_text"><p>Ray, I think there is some sort of conflict between the welcomeFileList and directory browsing (or maybe I am missing something). If you say:</p><p>"<a href="http://disq.us/url?url=http%3A%2F%2Fwww.dhamra.com%2Fsecretfolder%3AxkRPHnxL9qFEzQbssQV6AU_I53o&amp;cuid=3321886" rel="nofollow noopener" title="www.dhamra.com/secretfolder">www.dhamra.com/secretfolder</a>" This will not fire onMissingTemplate....</p><p>Wouldn't that be the same as viewing a directory for directory browsing? The only difference being that in directory browsing, you call a directory that does exist.</p><p>Am I missing something here or is the documentation just not clear?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665942">3</a> by Raymond Camden
		posted on 5/31/2007 at 5:46 PM
		</div>
		<div class="comment_text"><p>Ben, what I meant was - if your APp.cfc is in root, and you request secretfolder, it will not fire if secretfolder doesn't exist. If it does exist, you will get directory browsing, or the index.cfm in that folder.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665953">4</a> by Ben Nadel
		posted on 5/31/2007 at 5:56 PM
		</div>
		<div class="comment_text"><p>Ray, sorry, I miscommunicated... what I meant to say was that the fact that onmissingtemplate does not fire for missing directories is proof that onmissingtemplate does not have anything to do with directories. From that, I meant to ask, what does it have to do with directory browsing and how would you even define a "directory" for the welcomeFileList? I know it mentions it in the documentation (but I cannot find it - I remember reading it). It confuses me, but it looks like you say not to worry about it anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665954">5</a> by Raymond Camden
		posted on 5/31/2007 at 5:59 PM
		</div>
		<div class="comment_text"><p>What I get from the docs is confusing. I'm asking for more clarification and when I get it - I'll post back.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665952">6</a> by Ben Nadel
		posted on 5/31/2007 at 7:09 PM
		</div>
		<div class="comment_text"><p>Sweeeeeet :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665955">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665955">7</a> by Geoff
		posted on 5/31/2007 at 9:12 PM
		</div>
		<div class="comment_text"><p>I'd be careful with cflocation - it does a "302 temporarily moved" redirect, so you'd have to make sure your 404.cfm had a cfheader with a proper 404 in it...</p><p>I think the 302 is bad for search engines as it's effectively saying "the page you requested *does exist*, but is temporarily elsewhere - go there and have a look".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665959">8</a> by Raymond Camden
		posted on 6/1/2007 at 12:00 AM
		</div>
		<div class="comment_text"><p>Actually, it turns out the you can now do a status code in cflocation. THe values allowed are 300-307. Would 301 be ok?</p><p>"301 HTTP_MOVED_PERMANENTLY - The page<br>has been assigned a new URI. The change is<br>permanent."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665951">9</a> by Sean Corfield
		posted on 6/1/2007 at 4:53 AM
		</div>
		<div class="comment_text"><p>The welcomeFileList does indeed sound confusing but here's how I believe it should work (this will test my understanding of it!).</p><p>Suppose you have index.cfm and default.cfm as your web.xml default welcome pages. If you try to browse to a directory, the system will try to find index.cfm or default.cfm. Normally (with onMissingTemplate() in place), if the file does not exist, it will trigger the handler instead of letting you browse the directory. If you additionally set welcomeFIleList to "index.cfm,default.cfm" then onMissingTemplate() will no longer fire if those files do not exist.</p><p>I think :)</p><p>I suppose I should just go and test it really...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665956">10</a> by Raymond Camden
		posted on 6/1/2007 at 5:13 AM
		</div>
		<div class="comment_text"><p>Sean, I'm not seeing this. Assume app.cfc in /. I request /foo, and foo DOES exist, and has files, but no 'welcome' file. Apache is set to allow directory browsing and thats what I see. The directory browser. My onMissing Template didn't fire since I didn't request a missing thing. If I request /goo, which doesnt' exist, it does work.</p><p>So I guess I'm saying - I can't seem to force the issue that makes you even need the welcome pages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665958">11</a> by Sean Corfield
		posted on 6/1/2007 at 5:26 AM
		</div>
		<div class="comment_text"><p>Heh, well, some testing reveals that whatever you specify in this.welcomeFileList will suppress onMissingTemplate() for those named files.</p><p>Try setting it to "foo.cfm" and then requesting that file - you'll get the raw CF error.</p><p>So it seems something needs to change in the web server setup to make this "work" the way we might expect...</p><p>*goes off to do more testing*</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665957">12</a> by Raymond Camden
		posted on 6/1/2007 at 5:32 AM
		</div>
		<div class="comment_text"><p>So I still don't get it. If /foo exists, and has no welcome file, then the web server either does a browse, OR, it tells you browsing isn't allowed. None of those is a 404. So why would onMissingTemplate even be _considered_ in this case?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665960">13</a> by Johan
		posted on 4/27/2008 at 3:45 AM
		</div>
		<div class="comment_text"><p>Ray - this is cool but the CF8 docs state: To include the contents of a page in the onMissingTemplate function, use the cfinclude tag. Do not use any other method to include or redirect other page content, including tags and functions such as cflocation,<br>GetPageContext().forward(), and GetPageContext().include().</p><p>Pity since server-side forward makes it easy to support path styles urls and legacy urls.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665963">14</a> by Raymond Camden
		posted on 4/27/2008 at 4:58 PM
		</div>
		<div class="comment_text"><p>Odd. My cflocation code works just fine, and I can think of no reason why not to recommend it. Do note that the docs aren't always correct. ;) I'll try to find out why this was written. The only thing I can figure is that they are worried that you might cflocate to another page that doesn't exist and create a loop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665964">15</a> by Johan
		posted on 4/27/2008 at 11:53 PM
		</div>
		<div class="comment_text"><p>I figured the same - that the concern is a endless loop. I tested with a server-side forward and it also worked fine. however if it is on the docs then I am hesitant to commit to the solution. Be great if you can find out more. Thanks.</p></div>
	</div>
</div>
		