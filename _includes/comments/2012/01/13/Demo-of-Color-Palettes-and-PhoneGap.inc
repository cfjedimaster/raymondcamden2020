
<div class="comment" id="c_1713738071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738071">1</a> by Simon MacDonald
		posted on 1/14/2012 at 12:59 AM
		</div>
		<div class="comment_text"><p>Wow, this is the second time today I've heard of this Color Thief library. I wish it had been around back when I was doing another project as it would have come in real handy. Glad to see you are digging into the PhoneGap API.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738073">2</a> by Mikel
		posted on 1/17/2012 at 6:40 PM
		</div>
		<div class="comment_text"><p>Wow, that is really cool!  Thanks for sharing!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738076">3</a> by Keiller
		posted on 2/16/2012 at 2:45 AM
		</div>
		<div class="comment_text"><p>Cool!! Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738079">4</a> by Shaashimov
		posted on 2/25/2013 at 3:17 PM
		</div>
		<div class="comment_text"><p>Hello.<br>I'm trying to pick the color value to do my stuff :<br>if ((("#swatch"+i).css("background-color")== "#000000") || (("#swatch"+i).css("background-color")== "#ffffff")) {<br>				$.mobile.changePage("index.html");<br>			}</p><p>but it returns me this :<br>Uncaught TypeError: Object #swatch0 has no method 'css'.</p><p>Do you have any solution for me ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738082">5</a> by Raymond Camden
		posted on 2/25/2013 at 5:07 PM
		</div>
		<div class="comment_text"><p>You aren't using jQuery right. You prepend those selectors with a $ character.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738081">6</a> by Shaashimov
		posted on 2/25/2013 at 5:41 PM
		</div>
		<div class="comment_text"><p>I 've fixed like this :<br>if ((("background-color","rgb("+colorArr[i][0]+","+colorArr[i][1]+","+colorArr[i][2]+")")== "rgb(4,4,4)") || (("background-color","rgb("+colorArr[i][0]+","+colorArr[i][1]+","+colorArr[i][2]+")")== "rgb(8,4,4)")) {<br>				$('.corpus').load('index.html', {transition : "slide"});<br>			}<br>			else {}</p><p>It worked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738075">7</a> by Raymond Camden
		posted on 2/25/2013 at 5:53 PM
		</div>
		<div class="comment_text"><p>Not sure how that works as ("background-color") by itself is meaningless. It is NOT a jQuery selector.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738072">8</a> by Shaashimov
		posted on 2/25/2013 at 8:11 PM
		</div>
		<div class="comment_text"><p>You're right. No need this ("background-color").<br>I've deleted this entry and it works as well.<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738074">9</a> by Jitendra Jain
		posted on 6/11/2014 at 12:57 PM
		</div>
		<div class="comment_text"><p>I have downloaded the entire zip file and the camera functionality is not called. Am i missing something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738077">10</a> by Raymond Camden
		posted on 6/11/2014 at 6:19 PM
		</div>
		<div class="comment_text"><p>When you open up console, what do you see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738078">11</a> by Aditya
		posted on 11/17/2014 at 10:00 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I'm facing the same issue. The camera is not getting called and it gives error back in the console saying "TypeError: Cannot call method 'getPicture' of undefined".</p><p>Thanks,<br>Adi</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738083">12</a> by Raymond Camden
		posted on 11/17/2014 at 4:19 PM
		</div>
		<div class="comment_text"><p>It sounds like you didn't add the Camera plugin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3512684770">
	<div>
		<img src="https://disqus.com/api/users/avatars/richieyaez.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3512684770">13</a> by Richie Yañez
		posted on 9/11/2017 at 7:31 PM
		</div>
		<div class="comment_text"><p>Hi raymond</p><p>you will have a project that you can send me and thanks for your tutorials I have a year following you</p></div>
	</div>
</div>
		
<div class="comment" id="c_3512740824">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3512740824">14</a> (In reply to <a href="#c_3512684770">#13</a>) by Raymond Camden
		posted on 9/11/2017 at 8:07 PM
		</div>
		<div class="comment_text"><p>I fixed the download link.</p></div>
	</div>
</div>
		