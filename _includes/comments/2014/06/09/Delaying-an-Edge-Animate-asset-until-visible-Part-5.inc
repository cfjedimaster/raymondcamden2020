
<div class="comment" id="c_1714083068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083068">1</a> by Peter
		posted on 6/23/2014 at 1:55 PM
		</div>
		<div class="comment_text"><p>Hello Raymond, first of all thanks for all the knowledge.</p><p>I'm trying to use your code for a couple of days now, I've been reading all of it's parts. I just can't seem to figure it out. I don't know if I have to change something on the code to adapt it to mine.</p><p>The thing is, I have an animation of a little guy coming out of an underground hole and that animation is on the footer of the screen. I want this animation to play when the user goes to that section of the screen. I'm putting your code on creationComplete, and I must admit I'm quite an amateur with coding, so I bet I'm doing something wrong, but the animation just won't run, it's frizzed and if I apply the Auto Play it just plays normally without waiting for me to scroll.</p><p>Thanks in advanced!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083069">2</a> by Raymond Camden
		posted on 6/23/2014 at 6:15 PM
		</div>
		<div class="comment_text"><p>Is it online where I can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083074">3</a> by Peter
		posted on 6/23/2014 at 7:25 PM
		</div>
		<div class="comment_text"><p>Yes -it's in process- but here it is.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fmbibs.businesscatalyst.com%2Fcontact-us.html%3AAh9HCf3hMIALBe03A-ztKxFYXH0&amp;cuid=3321886" rel="nofollow noopener" title="http://mbibs.businesscatalyst.com/contact-us.html">http://mbibs.businesscataly...</a></p><p>The hole on the ground is the animation. The guy comes out of that hole.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083076">4</a> by Raymond Camden
		posted on 6/23/2014 at 8:11 PM
		</div>
		<div class="comment_text"><p>I see you are using an iframe, which is slightly different than what I dealt with above. In theory it should have worked the same. I'm going to have to try to debug this myself on a simple iframe demo locally. It's that or you give me FTP access to your box to try to diagnose it directly there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083077">5</a> by Raymond Camden
		posted on 6/23/2014 at 8:12 PM
		</div>
		<div class="comment_text"><p>Actually it may be simpler. See this line:</p><p>element=$("#EdgeID",window.parent.document);</p><p>This expected to match the OBJECT id in the parent document. You are using an iframe with id of U1132_animation. Try using that value. (Don't forget to put the # in front.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083079">6</a> by Peter
		posted on 6/23/2014 at 8:49 PM
		</div>
		<div class="comment_text"><p>Hello Raymond, many thanks on your replies.</p><p>I would totally would share with you the FTP information but I'm using Adobe Muse's and I don't even know how it is.</p><p>I've tried with that ID but doesn't work and I think it is cos every time I publish it, the ID changes...I've seen this by inspecting the element on Google Chrome and every time I made changes the ID was different.</p><p>Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083078">7</a> by Raymond Camden
		posted on 6/23/2014 at 8:52 PM
		</div>
		<div class="comment_text"><p>Hmm - if you can't stop that from happening, I'm not sure what to suggest. This may, stress, MAY work:</p><p>element=$("iframe",window.parent.document);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083081">8</a> by Peter
		posted on 6/23/2014 at 9:48 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond, I'm burning my brain right now...I think I smell barbecue.</p><p>I will definitely post the solution here if I ever find it...but I'm sure it has to do with that iframe id that's changing and I can't find a way to say to the code "this is the animation"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083083">9</a> by Raymond Camden
		posted on 6/23/2014 at 9:52 PM
		</div>
		<div class="comment_text"><p>I just noticed you have 2 iframes on the page, so my code would have matched the first one. You would need to handle that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083084">10</a> by Peter
		posted on 6/23/2014 at 10:04 PM
		</div>
		<div class="comment_text"><p>Those iframes are 2 different Adobe Edge animations (the plane and the hole). I'm working the website inside Muse cos like I said earlier I'm quite a noob on coding. I bet there's a way to name them like I want to and put that name on your code, I just can't find it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083085">11</a> by Jason
		posted on 7/9/2014 at 7:01 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I've been trying to adapt this for a horizontal scroll and can't for the life of me get it to work ...<br>Is it not as simple as using</p><p>	function isScrolledIntoView(elem) {<br>		var docViewLeft = $(window).scrollLeft();<br>		var docViewRight = docViewLeft + $(window).innerWidth();</p><p>		var elemLeft = $(elem).offset().left;<br>		var elemRight = elemLeft + $(elem).width();</p><p>		return ((elemRight &gt;= docViewLeft) &amp;&amp; (elemLeft &lt;= docViewRight)<br>		  &amp;&amp; (elemRight &lt;= docViewRight) &amp;&amp;  (elemLeft &gt;= docViewLeft) );<br>	}</p><p>?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083086">12</a> by Jason
		posted on 7/9/2014 at 7:07 AM
		</div>
		<div class="comment_text"><p>here is my current .html ...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fparkviewmotorcamp.com%2Fanim8a%2Fhorizontal%2Fhorizontal15.html%3ANl0sSCLxsHXR7ieifMuMyCris38&amp;cuid=3321886" rel="nofollow noopener" title="http://parkviewmotorcamp.com/anim8a/horizontal/horizontal15.html">http://parkviewmotorcamp.co...</a></p><p>and associated project files ...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fparkviewmotorcamp.com%2Fanim8a%2Fhorizontal%2Fhorizontal15.zip%3AlWUU5gqc9vYU3Bbe8bWwTtu4KCU&amp;cuid=3321886" rel="nofollow noopener" title="http://parkviewmotorcamp.com/anim8a/horizontal/horizontal15.zip">http://parkviewmotorcamp.co...</a></p><p>thanks for any assistance :)</p></div>
	</div>
</div>
		