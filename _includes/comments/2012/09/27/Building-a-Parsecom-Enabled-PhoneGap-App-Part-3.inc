
<div class="comment" id="c_1713743056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743056">1</a> by Chapin
		posted on 11/1/2012 at 2:58 AM
		</div>
		<div class="comment_text"><p>Hello,</p><p>I noticed you've created a list from your results, which I have been able to create the markers on the map, but have not been able to find a way to show a list on a separate page of the results...</p><p>"So - the final part to today's blog entry is the list function. I plan on using some mapping there and intelligent reporting (i.e., tell me the reports within 10 miles), but for now, I'm doing a simple list:"</p><p>Could you please show the html you used to create the feed of entries?</p><p>I'm having a hard time with this for some reason...</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743061">2</a> by Raymond Camden
		posted on 11/2/2012 at 1:06 AM
		</div>
		<div class="comment_text"><p>I'm not sure I'm reading your question right. Are you asking what code sample handles making the list? It is the last one. It isn't an HTMl list (ie: &lt;ul&gt;), just a repeated set of text.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743053">3</a> by Anthony
		posted on 4/6/2014 at 6:03 PM
		</div>
		<div class="comment_text"><p>Thank you for this blog, it has been a go-to reference in helping me learn and play with parse.</p><p>Taking this example one step further, how would I update an individual tip? Looking for best practice on how to structure this. <br>For example, perhaps the object ID could be a link to view the tip on it's own page. That page could have an edit button that enables an "edit mode" and so on. How would I assure/reference/know that I'm updating the object that I clicked on from the list? Best practice to reference/point to this object throughout the select and update process?</p><p>Thank you for your time and effort!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743057">4</a> by Raymond Camden
		posted on 4/6/2014 at 6:28 PM
		</div>
		<div class="comment_text"><p>Well it sounds like you get how Parse does it, but you are more curious about how to *present* it to the user, which is more UX than dev. Unfortunately the answer is that it really just depends. Given a list of notes, when the user clicks on one and you show the detail, you obviously know what Id you are working with. If you want to use a little button for editing then then you would simply re-use the same Id. How you show that form would depend on how your app is built. If you use Angular, you could just load a new view using $location.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1706887772">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_xafu4fw0zO.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1706887772">5</a> by Dixit
		posted on 11/22/2014 at 11:58 AM
		</div>
		<div class="comment_text"><p>i want to fetch image file from <a href="http://disq.us/url?url=http%3A%2F%2Fparse.com%3A9NAZCuXuWB_KfP-1b0V6Vh4y4SA&amp;cuid=3321886" rel="nofollow noopener" title="parse.com">parse.com</a> in my php code.<br>my question is it is possible to fetch image file without <a href="http://disq.us/url?url=http%3A%2F%2Fparse.com%3A9NAZCuXuWB_KfP-1b0V6Vh4y4SA&amp;cuid=3321886" rel="nofollow noopener" title="parse.com">parse.com</a> API..</p><p>if yes give me replay<br>my mail ID is : dixitsonchhatra@gmail.com</p><p>Thanx in advance..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1707009785">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1707009785">6</a> (In reply to <a href="#c_1706887772">#5</a>) by Raymond Camden
		posted on 11/22/2014 at 2:16 PM
		</div>
		<div class="comment_text"><p>If I remember right, they are stored on S3, but you need to use the API to get the URL first though. You could cache that URL but I think you need at least one API hit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1920056668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1920056668">7</a> by Guest
		posted on 3/21/2015 at 5:36 PM
		</div>
		<div class="comment_text"><p>Hello,<br>I was just trying to send a tip, however the button does not work for it. Is there any answer for this?<br>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1921636665">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1921636665">8</a> (In reply to <a href="#c_1920056668">#7</a>) by Raymond Camden
		posted on 3/22/2015 at 1:34 PM
		</div>
		<div class="comment_text"><p>What does remote debugging tell you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2412345769">
	<div>
		<img src="https://disqus.com/api/users/avatars/indiojohn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2412345769">9</a> by Indio John
		posted on 12/16/2015 at 11:55 AM
		</div>
		<div class="comment_text"><p>Very informative article.As I am just a beginner I want to know how to generate notification in phonegap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2412394077">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2412394077">10</a> (In reply to <a href="#c_2412345769">#9</a>) by Raymond Camden
		posted on 12/16/2015 at 12:48 PM
		</div>
		<div class="comment_text"><p>If you mean Push, there are multiple options. Google. :)</p></div>
	</div>
</div>
		