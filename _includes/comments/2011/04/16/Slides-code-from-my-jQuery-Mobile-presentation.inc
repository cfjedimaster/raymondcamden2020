
<div class="comment" id="c_1713731688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731688">1</a> by Andrew Scott
		posted on 4/17/2011 at 3:20 AM
		</div>
		<div class="comment_text"><p>Ray the only problem I have with the jQuery detection or any JS detection, is that on my phone a Samsung Galaxy S. Both your site and any site that has begun using this detection from jQuery, means I actually have to kill the internet browser in my phone. I gave up trying to get you to fix this on your blog over 8 months ago, and find that it is easy for me to just filter sites out that use this jQuery method.</p><p>The reason being is that each time I hit my back button, the one that navigates app screens to the previous screen. Reloads the jQuery detection and redirects back to the mobile version, that means that I can never leave the browser in the manner that one should be able too.</p><p>I highly suggest that if anyone is going to be looking at Mobile Detection for their websites in the future, that you have a good look at the project that is desinged for this and that is the OWASPI project WURFL at <a href="http://disq.us/url?url=http%3A%2F%2Fwurfl.sourceforge.net%2F%3Ad1EUf8Y5zWbCGL17OhejQnhn208&amp;cuid=3321886" rel="nofollow noopener" title="http://wurfl.sourceforge.net/">http://wurfl.sourceforge.net/</a></p><p>Sorry to be so negative, but thats the reality of this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731691">2</a> by Raymond Camden
		posted on 4/17/2011 at 3:48 AM
		</div>
		<div class="comment_text"><p>The detection I'm using has _nothing_ to do with jQuery. You know that, right? It's pure server side code using the item listed above.</p><p>My site uses a session cookie when you leave the mobile site - but ONLY sets it if you click the exit mobile button the bottom right. Don't hit back. Can you just try that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731692">3</a> by Andrew Scott
		posted on 4/17/2011 at 4:17 AM
		</div>
		<div class="comment_text"><p>Will chat with you off list.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731689">4</a> by Andrew Scott
		posted on 4/17/2011 at 4:44 AM
		</div>
		<div class="comment_text"><p>I should say that I assumed it was jQuery because the page loads, and then is redirected to the mobile site. Which indicated some JavaScript redirection was happening, and as you used jQuery, I assumed that this was happening by jQuery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731690">5</a> by Isaac Sunkes
		posted on 4/18/2011 at 12:35 AM
		</div>
		<div class="comment_text"><p>Seems you could always detect a mobile browser with the "cgi.http_user_agent" string and then use CFlocation to send the user to a mobile version of the application. I don't mean on every page request either, just send them to a jQuery mobile version on the first request.</p><p>I have been using jQuery mobile to build clients mobile versions of their current web applications and so far they love it.</p><p>@Andrew: jQuery mobile doesn't crash our companies Samsung Galaxy S browser, and the user can leave the page whenever they want?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731696">6</a> by Andrew Scott
		posted on 4/18/2011 at 1:45 AM
		</div>
		<div class="comment_text"><p>After chatting with Ray off list, it wasnt jQuery which I mentioned above that I did assume it was it. The problem is ColdFusion and the fact that CFLocation is used, when doing it this way the mobile browser will end up in and endless loop when trying to go backwards.</p><p>It was wrong to make the intial assumption I did make.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731695">7</a> by Isaac Sunkes
		posted on 4/18/2011 at 2:36 AM
		</div>
		<div class="comment_text"><p>What it wrong with cflocation, I have experienced no endless loops? You mention a problem with cflocation yet offer no alternative solution? Correct me if I am wrong but doesn't cflocation keep the original landing page's HTTP_REFERER?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731698">8</a> by Andrew Scott
		posted on 4/18/2011 at 3:05 AM
		</div>
		<div class="comment_text"><p>I think ou are getting a little confused there, refferer has nothing to do with previous page URL. When you hit a page URL the browser has already began loading that URL, with a cflocation you are forcing another URL to then be loaded into the browser. You can test this very easily by creating a page that loads anothe URL, and try to hit the back button. You will find that the browser has detected that you are going to a page that has been redirected, and redirects you back to the same page you just came from.</p><p>That is just common knowledge and behaviour of a browser mechanics.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731697">9</a> by Isaac Sunkes
		posted on 4/18/2011 at 3:08 AM
		</div>
		<div class="comment_text"><p>@Andrew: So if is not the way you think it should be done (which is what I think you are getting at) what is your solution to the problem?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731700">10</a> by Andrew Scott
		posted on 4/18/2011 at 3:17 AM
		</div>
		<div class="comment_text"><p>It will depend on you and your application, but as I work with MVC type frameworks this is very easy to overcome with no extra effort on my part.</p><p>But a simple cfinlclude to load that data would work fine.</p><p>Look I have to make this very clear, this is not a dig at Ray or jQuery but something that I have noticed overtime. And there are a couple of high profile news sites that detect that you are browsing and redirect you to a new domain usual starting with m so if the domain was <a href="http://disq.us/url?url=http%3A%2F%2Fwww.abc.com%3A8p9WR1OpihLf3I4QtrRLwtv_gqI&amp;cuid=3321886" rel="nofollow noopener" title="www.abc.com">www.abc.com</a> it would redirecto you to <a href="http://disq.us/url?url=http%3A%2F%2Fm.abc.com%3AJ1MN3Fzp72PWX2sPfoiKxd_YADY&amp;cuid=3321886" rel="nofollow noopener" title="m.abc.com">m.abc.com</a> and when you try to hit the back button, you are taken back to the <a href="http://disq.us/url?url=http%3A%2F%2Fwww.abc.com%3A8p9WR1OpihLf3I4QtrRLwtv_gqI&amp;cuid=3321886" rel="nofollow noopener" title="www.abc.com">www.abc.com</a> site which then redirects you back to <a href="http://disq.us/url?url=http%3A%2F%2Fm.abc.com%3AJ1MN3Fzp72PWX2sPfoiKxd_YADY&amp;cuid=3321886" rel="nofollow noopener" title="m.abc.com">m.abc.com</a></p><p>I am not telling anyone how to do this, or that they shouldn't do this. What I am saying is that you really should be aware that on a mobil device it is highly possible that this will frustrate the user to the website, and I have stopped browsing these sites because I was getting sick and tired of having to kill the task on the mobile each and everytime.</p><p>I guess at the end of the day, you are free to do what you please. but I just want it be known that this can be a problem that noone might have ever considered.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731699">11</a> by Topper Harley
		posted on 4/18/2011 at 6:54 AM
		</div>
		<div class="comment_text"><p>Silly rookies! No sense arguing...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731701">12</a> by Raymond Camden
		posted on 4/18/2011 at 7:04 AM
		</div>
		<div class="comment_text"><p>Thanks for the helpful comment there Topper. As helpful as your last one. Are you trying to troll here or do you have a point?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731703">13</a> by Ruan Carlos
		posted on 5/2/2011 at 8:21 PM
		</div>
		<div class="comment_text"><p>Hey, thx for all. Can you share the source code of your demos?</p><p>Thx a lot =D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731704">14</a> by Raymond Camden
		posted on 5/2/2011 at 8:33 PM
		</div>
		<div class="comment_text"><p>I did. :) Click the Menu button on the embedded slide viewer above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731722">15</a> by Ruan Carlos
		posted on 5/2/2011 at 8:36 PM
		</div>
		<div class="comment_text"><p>Lindo!!! - BTF hehe, i never see this slide viewer before =D Thx a lot =D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731716">16</a> by Raymond Camden
		posted on 5/2/2011 at 8:38 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2FSlidesix.com%3Af43b63BKQkqI0zbFLT-lJIkKlfk&amp;cuid=3321886" rel="nofollow noopener" title="Slidesix.com">Slidesix.com</a> - darn good site for hosting presos - especially for developers. Also built by a friend of mine so I may be biased.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731718">17</a> by Rick Faircloth
		posted on 5/10/2011 at 8:23 PM
		</div>
		<div class="comment_text"><p>Hey, Ray... I'm trying to get the code, etc., from your jQuery Mobile presentation.  I see where it says I should click the menu button in the slideshow to get the attachments, but the slideshow area now states that there are no slides, and the menu button doesn't respond.</p><p>Is there another way to get the source code/documents?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731719">18</a> by Raymond Camden
		posted on 5/10/2011 at 8:25 PM
		</div>
		<div class="comment_text"><p>This looks to be an issue with SlideSix. Try again in a while. If you want the slides/code now, ping me via Twitter/IM with your email and I can send you a zip.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731720">19</a> by Raymond Camden
		posted on 5/10/2011 at 8:27 PM
		</div>
		<div class="comment_text"><p>Fixed. Todd Sharp is Uber Man.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731715">20</a> by Rick Faircloth
		posted on 5/10/2011 at 8:28 PM
		</div>
		<div class="comment_text"><p>Oh, wait! Another refresh (which I had tried several times...) and the presentation came to life! :o)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731721">21</a> by Rick Faircloth
		posted on 5/10/2011 at 8:28 PM
		</div>
		<div class="comment_text"><p>Wow!  Fast fix!  Impressive! ;o)</p></div>
	</div>
</div>
		