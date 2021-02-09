
<div class="comment" id="c_1713743509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743509">1</a> by Jaana Gilbert
		posted on 10/26/2012 at 4:42 AM
		</div>
		<div class="comment_text"><p>That was absolutely awesome!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743510">2</a> by Jim
		posted on 11/2/2012 at 9:17 PM
		</div>
		<div class="comment_text"><p>I watched the video and really enjoyed but a few thoughts:</p><p>He says the web is apps/sites built for all browsers.  Right now that is difficult to do.  He says things need to be packaged and added to the standards, but a lot of the problem is the various organizations that build the web browsers.  You will never get all of them displaying content in the exact same way and implementing the standards to a tee.  They also all want to be innovators, they want to build new features that are non standard so they can brag about it and own it.  Also, as he mentioned it takes W3C forever to review and approve new standards.  Then you have old versions of browsers.  This makes it a very difficult experience for the web developer, thus tools such as jQuery, then he says not to abstract.  I think it's just a very tall order.  That's why I loved using Flex/Flash so much.  I'm moving over to HTML/JS, etc. mainly because people demand it, not because I think it's better.</p><p>With the collaboration piece using dropbox, etc., what about security and privacy?  Some organizations will never use this sort of collaboration due to proprietary information.</p><p>With the part with mobile phones using the Firefox OS, again my question would be, how secure is this?  I don't want people hacking in and taking my kids pictures and financial information.  Perhaps they are addressing this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743511">3</a> by Raymond Camden
		posted on 11/2/2012 at 9:43 PM
		</div>
		<div class="comment_text"><p>Hey Jim, thanks for the comments. I've pinged Christian to let him know as he would be best to reply. I'll give you _my_ opinion which I expect will be different than his.</p><p>"Right now that is difficult to do."</p><p>I don't agree with that. I think we've gotten into a mind set that crossplatform/works everywhere is impossible because of the Great Stain of IE6. IE6 is the past. There are certainly differences between browsers but they are NOT as bad as they were in the past. This is an old mindset and one we need to shake off.</p><p>"You will never get all of them displaying content in the exact same way and implementing the standards to a tee. They also all want to be innovators, they want to build new features that are non standard so they can brag about it and own it. "</p><p>Again - I think this is more true in the past then it is now. Don't get me wrong, it happens, but I think we are seeing more innovation in terms of user features (for example, Chrome sync) than random HTML tags (as in &lt;layer&gt;).</p><p>I guess it comes down to what you mean by difficult. We're professionals, right? So knowing the standards and understanding how to test is part of our job. I've been doing this this Netscape 1 and the difference is night and day. (Part of the reason why you see me blogging so much more client-side stuff over the past few years.)</p><p>re:Dropbox. I can't really speak to that. I think if you are an Enterprise org then you probably wouldn't need something like Dropbox for hosting. I think he was suggesting it as a _simple_ alternative, not a solution to all hosting needs of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743512">4</a> by Jim
		posted on 11/5/2012 at 10:04 PM
		</div>
		<div class="comment_text"><p>Thanks for the reply, I always appreciate other viewpoints as it helps keep me grounded.</p><p>Yes, it is easier than before and I have to admit I'm not quite up to speed on the latest with HTML5/CSS/JS/AJAX, I just like to play devil's advocate.  From past experience I have found that organizations (especially for profit) like to add non standard features, I think it's a matter of time before this happens, especially if there is a paradigm change that HTML5 just does not support.</p><p>I was reading on one company's blog that since they moved from Flash to HTML5 they spend as much as 30% of their time worrying about cross browser compatibilities.  Granted, that's anecdotal evidence, but still perhaps something to think about.  When you consider it, you have 4-5 major browser vendors, each with different versions, then 3-4 major OS's with different versions, which if you want to do it right means hundreds of combinations to test for and this is only desktops, throw mobile in there as well and you have a real mess.  Most organizations simply can't test for all combinations.  Again, that's why I liked Flex/Flash as it was then Adobe's job to worry about the compatibility issues, which didn't always work perfectly but was a lot better than the alternative.</p><p>That being said, I like standards and I like the direction of HTML5 and DOM, but I think this will always be an issue unless you end up with just one browser vendor, which nobody wants.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743513">5</a> by Dan
		posted on 11/6/2012 at 10:52 PM
		</div>
		<div class="comment_text"><p>Jim,</p><p>Like Ray, I've been involved in the web for quite a while and the past is the past.  I can agree that browsers will always struggle to show off some non-standard feature, but for our company, we have recently chosen to stick to strict standards to reduce that inter-browser incompatibility issue.</p><p>For the longest time our site used the wrong Doctype declaration (Transitional) and that was killing us.  It wasn't until recently that we recognized some failures on our part to better adhere to standards.  On our recent revision, which has an even blend of HTML, JS, CSS, &amp; CF, we've had to worry less about whether a particular browser was going to do an "OK" job at rendering and executing our content.  We've done some abstracting by leaning on YUI where it benefits the task, but other than that we require ourselves to "know what we're doing."</p><p>I think that 30% value is either because their developers aren't doing it right, or a fabricated number to hype the a false sense of design difficulty.  We actually spend more time worry about usability than anything else.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.amazon.com%2FDont-Make-Me-Think-Usability%2Fdp%2F0321344758%3AzkMTcwgis-c-mitPmyR2AjNfB-Q&amp;cuid=3321886" rel="nofollow noopener" title="http://www.amazon.com/Dont-Make-Me-Think-Usability/dp/0321344758">http://www.amazon.com/Dont-...</a></p><p>Ray, great post.</p></div>
	</div>
</div>
		