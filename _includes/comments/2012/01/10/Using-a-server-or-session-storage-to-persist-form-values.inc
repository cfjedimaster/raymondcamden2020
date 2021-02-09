
<div class="comment" id="c_1713738001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738001">1</a> by Brian Lang
		posted on 1/11/2012 at 4:28 AM
		</div>
		<div class="comment_text"><p>A couple of comments:<br>1. It's important to note that SessionStorage in the web browser is NOT in any way, shape, or form, related to ColdFusion Sessions. SessionStorage lasts until all web browser windows are closed.</p><p>2. I usually start a "defaults" section of code (like in your first code example) with some initialization of the fields in question - usually to blank or zero fields/variables (as appropriate). Then I do my tests to see if I have data to work with or not. You wouldn't need quite as many lines of code in this case.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738002">2</a> by Raymond Camden
		posted on 1/11/2012 at 4:33 AM
		</div>
		<div class="comment_text"><p>1) I had assumed folks knew that when I mentioned localeStorage, but I good point to remind folks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738003">3</a> by Brian Lang
		posted on 1/11/2012 at 4:37 AM
		</div>
		<div class="comment_text"><p>Well, whenever I need help with a Coldfusion problem, I turn to my trusty friend Google. Usually, one of the top hits is for this blog - which almost always has enough of the answer I'm looking for to get me where I'm going.</p><p>I'm sure I'm not the only one who's encountered this phenomenon, so I figured it best to point it out for any HTML5 newbies who come across this page :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738004">4</a> by Michael Wilson
		posted on 1/12/2012 at 1:32 AM
		</div>
		<div class="comment_text"><p>I am not sure how the HTML5 version would solve the problems of the browser crashing or accidentally closing the tab. If the data stored in the SessionStorage is removed when the browser is closed, then wouldn't it be gone on the next visit to the page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738007">5</a> by Raymond Camden
		posted on 1/12/2012 at 1:35 AM
		</div>
		<div class="comment_text"><p>Good point Michael. I was thinking of a ColdFusion session that is time based. I believe you are right in that session storage would go away if the browser closes. Let me verify that though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738006">6</a> by Raymond Camden
		posted on 1/12/2012 at 1:38 AM
		</div>
		<div class="comment_text"><p>I stand corrected - thank you Michael. So this would only help if you were to click away by accident. (And I'll admit to having done that. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738009">7</a> by Michael Wilson
		posted on 1/12/2012 at 4:40 AM
		</div>
		<div class="comment_text"><p>I see a lot of good uses for the SessionStorage, but would local storage be the only HTML5 client solution for protecting against crashes and accidental closure?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738012">8</a> by Raymond Camden
		posted on 1/12/2012 at 4:45 AM
		</div>
		<div class="comment_text"><p>Yeah - localeStorage is more permanent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3970524742">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Guxo2xjZ3s.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3970524742">9</a> by Michael Ray
		posted on 7/2/2018 at 2:27 PM
		</div>
		<div class="comment_text"><p>Can you fix your links for demos and zip? Agree that localStorage would be preferred for persistent storage.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3970702272">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3970702272">10</a> (In reply to <a href="#c_3970524742">#9</a>) by Raymond Camden
		posted on 7/2/2018 at 4:17 PM
		</div>
		<div class="comment_text"><p>Demo links are removed - I don't host ColdFusion anymore. Download link is fixed.</p></div>
	</div>
</div>
		