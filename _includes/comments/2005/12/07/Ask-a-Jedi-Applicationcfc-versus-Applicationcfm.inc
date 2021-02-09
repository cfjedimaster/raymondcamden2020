
<div class="comment" id="c_1713623274">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623274">1</a> by Nic Tunney
		posted on 12/8/2005 at 9:46 AM
		</div>
		<div class="comment_text"><p>I learned in a CFUG preso Simon gave that it is a feature that both can exist in the same directory.  If, when you are developing your Application.cfc, if you ever have an issue, simply rename your Application.cfc to something else, and Application.cfm will take right back over.  That's about the only good thing I've ever heard.  I know it isn't much, but hey, at least it is something!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623276">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623276">2</a> by Ryan Guill
		posted on 12/8/2005 at 6:45 PM
		</div>
		<div class="comment_text"><p>Just to clarify, because you imply this but dont explicitly say it, this applies to cfmx 7 +.  In anything less the Application.cfc will be ignored.</p><p>Also, I wanted to point out something I came across this week in linux.  if you are using application.cfm, little-a application.cfm does not execute before every request, only big-A Application.cfm does.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623275">3</a> by Raymond Camden
		posted on 12/8/2005 at 7:00 PM
		</div>
		<div class="comment_text"><p>Yep, all true.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623277">4</a> by tony petruzzi
		posted on 12/8/2005 at 7:14 PM
		</div>
		<div class="comment_text"><p>Ray I'm trying to send you a JEDI question but your form doesn't work in FireFox. When you click submit it goes to your Camden family homepage. Here was the question:</p><p>Here' something that has errked me for sometime now and maybe you know the answer or a way around it. Why is it that CFMAIL now throws an error when it encounters a badly formatted email address instead of just continuing along like it did under CF5?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623278">5</a> by tony petruzzi
		posted on 12/8/2005 at 7:16 PM
		</div>
		<div class="comment_text"><p>One more thing. I noticed that there is a bug in the comments. When you enter in a website, if you don't put http:// in front of it, the link gets messed up. See the website of the previous post vs this one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623282">6</a> by Raymond Camden
		posted on 12/8/2005 at 8:20 PM
		</div>
		<div class="comment_text"><p>Tony - what URL were you at when you tried to post the question?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623284">7</a> by John Farrar
		posted on 12/8/2005 at 8:49 PM
		</div>
		<div class="comment_text"><p>You asked if anyone reads the readme files... yes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623285">8</a> by Raymond Camden
		posted on 12/8/2005 at 9:34 PM
		</div>
		<div class="comment_text"><p>As for your question, I do not know. I wish it would not. The safest thing I guess is to ensure your email addresses are valid, but that is pretty easy under cf7: isValid("email", ....)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623290">9</a> by Michael
		posted on 12/8/2005 at 9:40 PM
		</div>
		<div class="comment_text"><p>I was surprised to learn that its one or the other, but realistically your application should either follow one or the other model.</p><p>Personally I tried and tried to learn about app.cfc but found so many new ways to create error messages, and things not working when I expected them to. It allows greater control over CF's execution, but I found I was not ready for that control yet.</p><p>I went back to the app.cfm model because to me, its doing just fine. I think that app.cfc needs some work and please - more documentation and examples!!</p><p>* Not directed to Ray, but to MM. Ray's examples/posts/gracious email support helped me get a lot further than the docs did.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623287">10</a> by tony petruzzi
		posted on 12/9/2005 at 12:06 AM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.camdenfamily.com%2Fmorpheus%2Fblog%2F%3A1WuAln3cl2WfemynipCfMRdljYQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.camdenfamily.com/morpheus/blog/">http://www.camdenfamily.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623288">11</a> by Raymond Camden
		posted on 12/9/2005 at 12:13 AM
		</div>
		<div class="comment_text"><p>Hmpth. Well, don't go there. ;) Go to <a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%3Anr8Wfzs5RNhu5OZT_80z8UhvscU&amp;cuid=3321886" rel="nofollow noopener" title="ray.camdenfamily.com">ray.camdenfamily.com</a>. I need to add some code to check for that host and redirect to ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623283">12</a> by Saul
		posted on 3/18/2010 at 2:40 PM
		</div>
		<div class="comment_text"><p>&gt;in linux. if you are using application.cfm, little-a &gt;application.cfm does not execute before every request, only &gt;big-A Application.cfm does.</p><p>Arghhh! As if it's not bad enough for us windoze boys to have to deal with arcane command line stuff ... this! Thanks very much, sanity restored!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623292">13</a> by Chris Bowyer
		posted on 4/16/2010 at 11:48 AM
		</div>
		<div class="comment_text"><p>Unconfirmed... I read an article earlier today that said Application.cfc only overides Application.cfm if the version of ColdFusion is MX 7 or greater</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623286">14</a> by Raymond Camden
		posted on 4/16/2010 at 3:16 PM
		</div>
		<div class="comment_text"><p>Since Application.cfc came with CF7, wouldn't that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623289">15</a> by Chris Bowyer
		posted on 4/16/2010 at 3:50 PM
		</div>
		<div class="comment_text"><p>Well, when you put it that way, it does. I was unaware of exactly when Application.cfc was introduced, and obviously got mislead by reading the wrong blog. Thanks for the clarification.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623291">16</a> by Raymond Camden
		posted on 4/16/2010 at 3:54 PM
		</div>
		<div class="comment_text"><p>I don't encounter many people who still use 6, so forgive me if it wasn't obvious. :) If you really are, I'd definitely consider upgrading to 9.</p></div>
	</div>
</div>
		