
<div class="comment" id="c_1713738881">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738881">1</a> by Will B.
		posted on 1/27/2012 at 11:25 PM
		</div>
		<div class="comment_text"><p>We're making a big push at work to start using ValidateThis.  I'm sure you're familiar with it, for those who aren't it's a rules-based framework that generates client-side (Javascript) validation code, but also server-side (Coldfusion) code to valdate your incoming data on both sides.  And even without a framework of this type, you should be, as Ray said, absolutely testing w/o Javascript.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738875">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738875">2</a> by Dom
		posted on 1/28/2012 at 12:03 AM
		</div>
		<div class="comment_text"><p>"Your form submission page is the exhaust port of the Death Star. It's dangerous."</p><p>Ray, you are seriously in the wrong job. That is brilliant !!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738883">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738883">3</a> by Joel Cox
		posted on 1/28/2012 at 12:15 AM
		</div>
		<div class="comment_text"><p>I know you said no frameworks or plugins, but someone's going to mention it sooner or later, so it might as well be me.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fbassistance.de%2Fjquery-plugins%2Fjquery-plugin-validation%2F%3Aq7khCEUGYQ3tYK7B4v37cPz5Jfo&amp;cuid=3321886" rel="nofollow noopener" title="http://bassistance.de/jquery-plugins/jquery-plugin-validation/">http://bassistance.de/jquer...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738889">4</a> by Phillip Senn
		posted on 1/28/2012 at 12:43 AM
		</div>
		<div class="comment_text"><p>Ray Camden using a php page in an example.<br>I had to shake my head and blink.</p><p>Ray: You're well aware that console.log locks up IE.<br>I think you had a blog post a while back where most of<br>the comments left were from people saying that it didn't work in IE,<br>despite you telling them that you knew console.log didn't work in IE and that you were just using it as a shortcut.</p><p>JavaScript handles events differently in IE vs other browsers. Or at least did.  That's why jQuery is so popular<br>because fundamental things in JavaScript are implemented<br>differently in differnt browsers.  So if jQuery had not<br>been written, someone would have had to have written it.</p><p>Alert is not the best user experience.<br>It's just as easy to type $('#errorDiv').html(errors);<br>Oh wait, I see that you removed the alert statement.<br>Why show the wrong way to do something and then the right way?<br>People don't have time to read how to do something the wrong way.</p><p>Using onload="init" isn't a best practice.<br>You don't need to use it at all if you put your js at the end <br>of the page instead of the head section.</p><p>name and bio should have label tags.</p><p>The script should be external.</p><p>The css should be external.</p><p>This is my frustration with web development.<br>There are so many wrong ways that still work, so<br>it's hard to argue against someone that says "Hey if works..."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738885">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738885">5</a> by existdissolve
		posted on 1/28/2012 at 3:09 AM
		</div>
		<div class="comment_text"><p>I like this tutorial, Ray. I think it does a good job of being very accessible to someone just starting out, whlie also nudging them in the direction of easier/better ways to do things.</p><p>As to criticisms that this doesn't show 100% best practices, I say that it's probably ok. I know people who have come a long way in their experience are very much interested in best practices (and so they should be). However, for the person just getting started, best practices don't mean anything if you can't even get the car started. Sometimes having something "just work" is the step in the right direction that a probably-already-very-frustrated developer needs to make progress.</p><p>That won't be a popular opinion, I'm sure, but there it is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738877">6</a> by Raymond Camden
		posted on 1/28/2012 at 3:14 AM
		</div>
		<div class="comment_text"><p>@Joel: Nope, glad you did, and it's my goto plugin for form validation.</p><p>@Dom: Thank you. :)</p><p>@Phillip: I tested my code in IE9 and it worked fine, even with console. I'm guessing though it may not work in 8. In general though I'm happy with telling folks to use the latest.</p><p>Alert - well, I like to "build" my blog entries. Alert isn't wrong. Alert is a quick and simple way to provide feedback. It's not as good as the DOM update one, but it's quicker. I take baby steps when I write code. ;)</p><p>I respectfully disagree with your comments. Not that they are wrong - but that I don't think it's necessary to clutter things now. You say it's wrong. I say - it's not as optimal as it could be. There is absolutely nothing "wrong" with a script block in a page, and with something as short as I did here, I think it is perfectly acceptable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738886">7</a> by vsync
		posted on 1/29/2012 at 5:54 PM
		</div>
		<div class="comment_text"><p>Hey, nice article.</p><p>I have written a post also about client-side form validation, and also created a very nice piece of code which handles many cases of validation, check it out:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdropthebit.com%2F150%2Fvalidation-styling-semantics-of-forms%2F%3AaSrvb3LdG-Ui5i7Xp3QgBXEgPCs&amp;cuid=3321886" rel="nofollow noopener" title="http://dropthebit.com/150/validation-styling-semantics-of-forms/">http://dropthebit.com/150/v...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738878">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738878">8</a> by Raymond Camden
		posted on 1/29/2012 at 8:44 PM
		</div>
		<div class="comment_text"><p>Nice - I like the use of data attributes. I'm a huge fan of that feature.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738879">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738879">9</a> by Steve Bryant
		posted on 1/31/2012 at 11:20 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>While I like this entry as a whole, I think the introductory part really stands out as something special. It is this sort of high-level thinking that so many technical tutorials (mine included) miss too often.</p><p>So thanks for taking the time to start with a high-level overview before digging into the code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738884">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738884">10</a> by Raymond Camden
		posted on 2/1/2012 at 12:08 AM
		</div>
		<div class="comment_text"><p>Thanks Steve.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738887">11</a> by Doug
		posted on 2/1/2012 at 12:44 AM
		</div>
		<div class="comment_text"><p>Is preventDefault() part of vanilla JavaScript? I can't find any documentation regarding it.  (But I did find it in &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fapi.jquery.com%2Fevent.preventDefault%2F%3AixiDmJDv4J9iGuY-gp0XD3_dCqc&amp;cuid=3321886" rel="nofollow noopener" title="http://api.jquery.com/event.preventDefault/">http://api.jquery.com/event...</a>"&gt;jQuery's docs&lt;/a&gt;.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738888">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738888">12</a> by Doug
		posted on 2/1/2012 at 12:45 AM
		</div>
		<div class="comment_text"><p>No htML?  Aw maaaaan.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738890">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738890">13</a> by Raymond Camden
		posted on 2/1/2012 at 12:49 AM
		</div>
		<div class="comment_text"><p>Yep: <a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.mozilla.org%2Fen%2FDOM%2Fevent.preventDefault%3AlVdDk_q1oUlRAlv76XAIZVdSb98&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.mozilla.org/en/DOM/event.preventDefault">https://developer.mozilla.o...</a></p><p>I believe - stress believe - jQuery handles it if your current browser does not.</p></div>
	</div>
</div>
		