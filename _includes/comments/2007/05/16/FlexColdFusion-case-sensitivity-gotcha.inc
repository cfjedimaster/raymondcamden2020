
<div class="comment" id="c_1713665277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665277">1</a> by Kyle Hayes
		posted on 5/16/2007 at 6:03 PM
		</div>
		<div class="comment_text"><p>Something to be careful of to be sure in Flex. Another article talking about other case issues between flex and cf:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.kylehayes.info%2Fblog%2Findex.cfm%2F2007%2F5%2F14%2FColdFusion-Struct-to-Flex-Untyped-Object-Gotcha%3AAVo1rywEnmQoA0JaDfKEJmoDaG4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.kylehayes.info/blog/index.cfm/2007/5/14/ColdFusion-Struct-to-Flex-Untyped-Object-Gotcha">http://www.kylehayes.info/b...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665279">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665279">2</a> by Raymond
		posted on 5/16/2007 at 6:52 PM
		</div>
		<div class="comment_text"><p>I know that's tripped me up on many occasions, switching between cf, as and javascript on one project, especially when doing AJAX things involving going between cf and javascript numerous times.  So I just use naming conventions anyways in cf, even though I know it doesn't matter, keeps me sharp.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665276">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665276">3</a> by Bruce
		posted on 5/17/2007 at 1:40 AM
		</div>
		<div class="comment_text"><p>Here is a blog post I wrote about another case sensitive problem CF Developers working in Flex might encounter:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.brucephillips.name%2Fblog%2Findex.cfm%2F2007%2F3%2F17%2FSolving-A-Problem-In-Relating-An-ActionScript-Class-To-A-ColdFusion-CFC%3A_4N3sFEqJLZJBSj1rRZgR7_m7eo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.brucephillips.name/blog/index.cfm/2007/3/17/Solving-A-Problem-In-Relating-An-ActionScript-Class-To-A-ColdFusion-CFC">http://www.brucephillips.na...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665275">4</a> by Kai Pradel
		posted on 12/3/2007 at 9:32 PM
		</div>
		<div class="comment_text"><p>Also, make sure that your compiler path is set correctly inside of Flex Builder. When you import a new project Flex Builder will use the default path (local) to compile. I have ColdFusion 8 running locally (OSX) and had to set my compile path to</p><p>-context-root "" -services "/Applications/ColdFusion8/wwwroot/WEB-INF/flex/services-config.xml" -locale en_US</p><p>before the project would work.</p><p>Kai</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665260">5</a> by Tony Eckert
		posted on 5/15/2008 at 8:28 PM
		</div>
		<div class="comment_text"><p>Forgive me for raising the dead thread, but I just came across a problem that was tied into this one.</p><p>I'm creating a project using FDS that compiles on the server when the page is loaded.  I'm getting the above error, however I'm using ColdFusion spelled in this case for the destination.  When I try to view my compiler path, it says that "Since this project is compiled by the server, these settings do not apply."</p><p>So what can I do to get my remoteObject to connect to the ColdFusion destination?</p></div>
	</div>
</div>
		