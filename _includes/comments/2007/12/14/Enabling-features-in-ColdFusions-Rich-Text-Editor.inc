
<div class="comment" id="c_1713675560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675560">1</a> by James Allen
		posted on 12/14/2007 at 10:47 PM
		</div>
		<div class="comment_text"><p>Why on earth didn't Adobe provide CF options to for turning this feature on? This is an essential option for rich text editors in my opinion as there is usually a need to allowing images to be uploaded - especially in CMS systems.<br>While Rakshith's instructions work it is somewhat long winded and requires messing with Coldfusion system files.</p><p>I hope they address this in a future update.. Seems somewhat of an oversight if you ask me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675558">2</a> by Ryan
		posted on 12/14/2007 at 11:11 PM
		</div>
		<div class="comment_text"><p>James,</p><p>I believe I read something from Adobe about security concerns in a shared hosting environment during the beta testing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675563">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675563">3</a> by James Allen
		posted on 12/14/2007 at 11:31 PM
		</div>
		<div class="comment_text"><p>Ah I see.</p><p>I still think they could have simply disabled it by default but given people the option of enabling it. Or providing an option in the administration system to turn it off on a shared hosting basis.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675562">4</a> by Todd Rafferty
		posted on 12/14/2007 at 11:53 PM
		</div>
		<div class="comment_text"><p>@ James, I think Adobe just wanted to get this feature out there rather than worrying about the security aspects of the editor.</p><p>This 3rd party app is so small, that I don't think they would want to bother putting admin settings in the CFIDE/Administrator.  Plus, the way it's written, there's no real way they could have and shared hosting issues is an even bigger bag of worms (the way it's written).</p><p>If you really needed the ability to upload, FCKEditor can be implemented without using cftexarea.  So, it's a convenience.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675567">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675567">5</a> by James Allen
		posted on 12/15/2007 at 12:56 AM
		</div>
		<div class="comment_text"><p>@ Todd I know what you mean, but I just think it's a shame such an important feature is missed out. Yeah, it can be implemented fairly easily without using the built in function but it feels a little silly to have to do this to fully leverage the features.</p><p>If someone goes the route of using richtext=true but then later needs image upload they either have to try and edit the system files (a big no no on shared hosting) or scrap their code and re-do it manually..</p><p>Just a shame it couldn't be a fuller implementation. I still think it's cool Adobe added this feature in, but I would like to see the full feature set covered.</p><p>I've been using rich text editors in shared hosting for years and not had any security issues so far. I thought CF7+ made it alot easier to tie users into the sandbox..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675566">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675566">6</a> by Todd Rafferty
		posted on 12/15/2007 at 1:03 AM
		</div>
		<div class="comment_text"><p>@James, Download the FCKEditor code and take a look through the CFM pages.  Now ask yourself how Adobe can make that part of CF Server (full featured, sandboxing, etc.) without just scrapping it and building their own.  I don't think it's worth Adobe's time.</p><p>I wonder if the Spry team is working on something (probably not) or if that's out of scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675564">7</a> by James Allen
		posted on 12/15/2007 at 1:05 AM
		</div>
		<div class="comment_text"><p>You do have a point Todd. I suppose I'm just finding it hard to see the security implications as I've been using a rich text editor on my sites which run on shared hosting for years without issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675571">8</a> by Steve Walker
		posted on 12/15/2007 at 9:58 AM
		</div>
		<div class="comment_text"><p>Although I agree that it is a pain that this is not included by default, the ColdFusion team did a wonderful thing.  If you load FCKEditor on your site you can take full advantage of the cftextarea tag by using the basepath attribute and pointing it to the installed location.  This give you every option available.  The new 2.5 version is so much better than the current CF installation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675572">9</a> by James Allen
		posted on 12/15/2007 at 5:20 PM
		</div>
		<div class="comment_text"><p>@Steve Now that is very cool! I do like how they've done that. Nice to be able to upgrade the FCK code and still leverage the hooks in CF. Top job.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675575">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675575">10</a> by Ketan
		posted on 6/26/2008 at 5:34 AM
		</div>
		<div class="comment_text"><p>My client is on HostMySite (shared environment) and I love the option of uploading a file when creating links -- makes life sooooo much easier for me that feature is incorporated into cfk editor.  However, I don't think HMs has this option enabled.  Is there a way I can use this feature for my client?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675574">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675574">11</a> by Raymond Camden
		posted on 6/26/2008 at 7:32 AM
		</div>
		<div class="comment_text"><p>Well, remember that this is just a 'wrapped up' version of fckEditor. You can always upload the full package yourself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675576">12</a> by Ketan
		posted on 6/27/2008 at 4:19 AM
		</div>
		<div class="comment_text"><p>Ray, that's what I was thinking, but reading through the docs it's not very clear how to implement this. I mean compared to TineMCE (which is incredibly simple to use and work with) i'm not sure where the fckeditor folder should be uploaded to, how to change the upload directory path, and how to use the code on the textarea style.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675573">13</a> by Raymond Camden
		posted on 6/27/2008 at 5:31 PM
		</div>
		<div class="comment_text"><p>Ketan - I don't use fckEditor. I can't really help you here.</p></div>
	</div>
</div>
		