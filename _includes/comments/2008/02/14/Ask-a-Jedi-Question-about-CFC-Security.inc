
<div class="comment" id="c_1713677065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677065">1</a> by Chris
		posted on 2/15/2008 at 2:20 AM
		</div>
		<div class="comment_text"><p>Call me a noob but if I place the cfc's in the gateway/cfc folder and IIS points my site files to c:\inetpub\wwwroot\mydomain, then what path do I put in cfinvoke?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677066">2</a> by Raymond Camden
		posted on 2/15/2008 at 2:26 AM
		</div>
		<div class="comment_text"><p>If yo use a cfmapping for the site root (not web root, the site, or project root), then you can make instances of the CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677063">3</a> by Jason Holden
		posted on 2/15/2008 at 2:27 AM
		</div>
		<div class="comment_text"><p>How do you organize your CFC's when there are multiple sites running on the same server?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677069">4</a> by Raymond Camden
		posted on 2/15/2008 at 2:39 AM
		</div>
		<div class="comment_text"><p>Not quite sure I get you. Are you saying you have multiple sites that need the same CFCs? If so, store them in some common folder, make a CF mapping (like /common), and address them there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677070">5</a> by Dan Sorensen
		posted on 2/15/2008 at 3:21 AM
		</div>
		<div class="comment_text"><p>I've created a folder outside the webroot called, "org" which is mapped in Coldfusion as "org". Then I have subfolders for a namespacing type setup that I saw Ray using. For example, "I've got "<a href="http://disq.us/url?url=http%3A%2F%2Forg.camden.yahoo%3A04lhCRrvFXcmS3sSviYNAWB2sfg&amp;cuid=3321886" rel="nofollow noopener" title="org.camden.yahoo">org.camden.yahoo</a>", "org.cflib" (for cflib functions), "org.esd112.service.something", "org.esd112.customtags".</p><p>So to answer Jason's question, I would create a 2nd folder under "org" (or "com" if you prefer) such as "org.siteA.something.somethingelse" and "org.siteB.stuff".</p><p>Works great. (BTW, thanks for the clarification Ray. I was wondering about the same question. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677072">6</a> by Jason Holden
		posted on 2/15/2008 at 3:41 AM
		</div>
		<div class="comment_text"><p>@Ray I usually put my site specific CFC's in /sys under the site root.  You said they should be put outside the site root folder.  I'm curious how you setup your folders outside the root.  Do you put them in a directory and then use a CF mapping for each site or do you have a common place that you organize by folders (i.e. What Dan is doing)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677082">7</a> by Raymond Camden
		posted on 2/15/2008 at 3:42 AM
		</div>
		<div class="comment_text"><p>I did not say that. I said put them out of web root. I only suggested out of site root for CFCs that multiple siutes use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677084">8</a> by Willy
		posted on 2/15/2008 at 5:38 AM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>Isn't it so that if you request a CFC directly with your browser you end up with the cfcExplorer introspective CFC documentation, or am I mistaken about how that works?  If so, isn't it against best-practices to expose those kinds of guts?  I'm not sure I'm 100% comfortable with it.  Also seems to me like another one of those theoretical problems that is not dangerous to worry much about in the real world?  Thoughts?</p><p>/Willy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677092">9</a> by Raymond Camden
		posted on 2/15/2008 at 6:08 AM
		</div>
		<div class="comment_text"><p>You can only access CFC introspeciton docs if you know the CF Admin/RDS password, or if you have none set. That should never be true in production.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677095">10</a> by Willy
		posted on 2/15/2008 at 6:13 AM
		</div>
		<div class="comment_text"><p>Oh YEAH... Ok, so that's not a problem.  Thanks, Ray.</p><p>For what it's worth, we put our cfcs in an reversed-domain-name folder structure outside of our webroot, with a cf mapping directly to our edu/ folder.  Now that this question has come up, I'm not completely sure WHY we do that, other than the good organizationally-specific name-spacing.</p><p>/w</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677093">11</a> by Raymond Camden
		posted on 2/15/2008 at 6:53 AM
		</div>
		<div class="comment_text"><p>I believe the reverse domain thing is common in Java packages. It is convention.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677094">12</a> by Tony Petruzzi
		posted on 2/15/2008 at 9:42 PM
		</div>
		<div class="comment_text"><p>I completely disagree with the logic of moving your includes, custom tags and cfcs to folder outside of the webroot. this causes more headaches then it's worth when deploying the program.</p><p>Most people don't use ant or some other automatic deployment method. Most copy the files manually and then create mappings and what not through cf administrator.</p><p>By moving these file out of the web root, now you have to remember to copy those folders as well AND remember to create a mapping for it in CF administrator. Although CF8 allows us the ability to create mappings through the cfmapping tag, you could still be restricted by the ftp process. If you only have access to your web root folder when ftpping into the site, then what good was moving the files to an outside directory for development in the first place?</p><p>A better solution (in my opinion) is to put all of your custom tag, includes and cfcs under a directory in your web root and then create an application.cfm file for that directory that does nothing but about the request.</p><p>Now your application doesn't require a mapping for it to run and your code is safe from someone trying to execute it remotely (though I don't see how you would execute an include, custom tag or cfc remotely.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677091">13</a> by Raymond Camden
		posted on 2/15/2008 at 9:51 PM
		</div>
		<div class="comment_text"><p>@Tony:</p><p>Wow, lots of comments here.</p><p>First off - I'm not sure what FTP program you are using. I have no issues moving amongst folders. Having folders in and our of web root is no different than having sub folders under web root. If you have to navigate to upload a JS file, than what's the big deal about navigating to upload a CFC? Unless you put ALL your filers in one folder (I hope not!) than you must be  moving around so that argument doesn't hold any water with me.</p><p>Secondly - if you use shared hosting and just have a web root, then the argument is moot. Yes you must stay under web root. But if you have access to a 'real' server or VPS, then you can use whatever.</p><p>Thirdly - if I can simply put my resources out of web root, I don't have to worry about adding a bunch of app.cfm files just to 'suppress' the loading of these files. In my mind, that is simpler. Why write security to block access to a resource when you can simply remove the resource from the web root.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677097">14</a> by Steve Bryant
		posted on 2/16/2008 at 2:47 AM
		</div>
		<div class="comment_text"><p>For code that is not site-specific, I put it in the CustomTags folder or a subfolder thereof (CustomTags/com/sebools, for example). This makes those resources universally available without the need for a mapping (one less thing to think about).</p><p>For site-specific CFCs, the location doesn't really matter. Unless the access is "remote", then they are safe.</p><p>For site-specific custom tags, I don't think it really matters (so long as you use Application.cfm to secure them if they aren't in the web root). It isn't a bunch of app.cfm files, just one. That really isn't much trouble.</p><p>The point is that either way works, but I would hate for people who are in a situation where they don't have easy access beyond the web root to worry that they aren't secure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677096">15</a> by Raymond Camden
		posted on 2/16/2008 at 2:55 AM
		</div>
		<div class="comment_text"><p>Well technically they ARE less secure. How many people run their custom tags and includes directly to see what happens? If you can't move your files out of web root, then you must use an app.cfc/cfm 'block' as you suggested. I -do- want people to think about this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677100">16</a> by Steve Bryant
		posted on 2/16/2008 at 3:31 AM
		</div>
		<div class="comment_text"><p>Assuming that you are using Application.cfm to prevent access, how are they less secure?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677098">17</a> by Raymond Camden
		posted on 2/16/2008 at 3:37 AM
		</div>
		<div class="comment_text"><p>That's what I said though - you have to write code to make it secure, whereas my way just keeps em out of web root altogether.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677099">18</a> by Akira
		posted on 2/22/2008 at 12:55 AM
		</div>
		<div class="comment_text"><p>How does this work with cfgrid? I made a mapping in the administrator to a folder off the web root but when I try to bind a cfc in cfgrid it says it can't find it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677102">19</a> by Raymond Camden
		posted on 2/22/2008 at 3:06 AM
		</div>
		<div class="comment_text"><p>Because CFGRID is making an Ajax based request. If you can't hit your CFC in the browser, neither can CFGRID. YOu need to use a proxy to point to the CFCs outside of web root. A CF mapping is not the same as a web mapping.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677101">20</a> by Andy Tyrone
		posted on 3/17/2008 at 9:56 PM
		</div>
		<div class="comment_text"><p>I've got clients with all types of server configurations: shared, in-house, and dedicated co-location.  I use mappings for all of these configurations and keep CFCs, UDFs, custom tags, etc. outside the web root.  The web root in shared hosting doesn't HAVE to be your "site root" or "account root".  When I set up new shared sites I simply request a "www" folder be created in my site root directory and specify that folder as the web root.  If a host won't do that for you, I'd suggest moving to one that will.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677105">21</a> by Asish
		posted on 12/13/2011 at 6:56 PM
		</div>
		<div class="comment_text"><p>I have two instances of an application in same server. When i try to run a component from one instance its taking the component in the other instance ( the component in the same instance is not running ) since the directory structure is similar in both. What i have to do to get this solved? i want the corresponding component to be run from the instance it is called.. please help</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677104">22</a> by Raymond Camden
		posted on 12/14/2011 at 12:25 AM
		</div>
		<div class="comment_text"><p>Are both apps using the exact same name?</p></div>
	</div>
</div>
		