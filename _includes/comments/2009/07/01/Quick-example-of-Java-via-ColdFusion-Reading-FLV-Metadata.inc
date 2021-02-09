
<div class="comment" id="c_1713716592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716592">1</a> by Luke
		posted on 7/2/2009 at 12:51 PM
		</div>
		<div class="comment_text"><p>hi Ray,</p><p>great article - using underlying java is something i've only ever dabbled in once before (to get ssl + gmail pop3 working) and to be honest it was a cut n' paste job without much thought into the possibilities it might open up.</p><p>i'd be keen to see more snippets of useful java stuff for CFers.</p><p>thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716601">2</a> by Martijn van der Woud
		posted on 7/3/2009 at 11:46 PM
		</div>
		<div class="comment_text"><p>@Ray @Mark I can confirm that JavaLoader does indeed work with class files. (It works in my Railo install, haven't tested on Adobe CF).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716594">3</a> by David Wall
		posted on 11/25/2009 at 4:29 AM
		</div>
		<div class="comment_text"><p>@Ray @Martijn, couple things, thanks for this article...it helped me go a direction that was previous a dark, black hole.  I have two problems, when I put this code into a CFLOOP, it will not work.  Next is on many of the files the obj.getWidth() reports a "-1", I'm using CF8 enterprise.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716600">4</a> by David Wall
		posted on 11/25/2009 at 4:37 AM
		</div>
		<div class="comment_text"><p>Please never mind about the 2nd issue.  I'm looking closer at the class file and noticed the comments.  Duh...  I'll continue testing, please delete these two posts if you get around to it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716591">5</a> by Amir
		posted on 1/8/2010 at 4:43 AM
		</div>
		<div class="comment_text"><p>This indeed showed me the right direction. I have a question though. Sometime inorder to create an object from a java class I have to use $ insread of "." (dot) for example:<br>createObject("java", "javax.mail.Message$RecipientType").BCC;</p><p>why?</p><p>see: <a href="http://disq.us/url?url=http%3A%2F%2Fjava.sun.com%2Fj2ee%2Fsdk_1.3%2Ftechdocs%2Fapi%2Fjavax%2Fmail%2Fsearch%2FRecipientTerm.html%3An4qRO0GPukaeORUqGBN7c4FtBlk&amp;cuid=3321886" rel="nofollow noopener" title="http://java.sun.com/j2ee/sdk_1.3/techdocs/api/javax/mail/search/RecipientTerm.html">http://java.sun.com/j2ee/sd...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716598">6</a> by Amir
		posted on 1/8/2010 at 4:52 AM
		</div>
		<div class="comment_text"><p>You can find the answer to my last post here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F1370-Ask-Ben-Instantiating-Nested-Java-Classes-In-ColdFusion.htm%3AosTXoDD8X0-05Bhe4xH8jsu6VSg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/1370-Ask-Ben-Instantiating-Nested-Java-Classes-In-ColdFusion.htm">http://www.bennadel.com/blo...</a></p></div>
	</div>
</div>
		