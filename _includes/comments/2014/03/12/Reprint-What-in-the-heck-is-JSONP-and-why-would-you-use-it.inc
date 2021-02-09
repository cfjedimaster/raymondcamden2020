
<div class="comment" id="c_1714082305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082305">1</a> by Michael Schmidt
		posted on 3/12/2014 at 8:44 PM
		</div>
		<div class="comment_text"><p>I have used JSONP for receiver a twitter feed, in working with Google GeoCoding, and working with my own custom methods across domains.</p><p>JSONP is powerful and I use it, but if someone is worried about security they might look into sandboxing their JSONP calls, by putting them into a sandboxed iframe that you can then use postMessage to communicate with the parent frame.</p><p>I also have the warning for server side developers to only expose things via JSONP that are OK to be retrieved anywhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082307">2</a> by Martin Cisneros
		posted on 3/21/2014 at 11:04 AM
		</div>
		<div class="comment_text"><p>I use it to save data from a phonegap app to a local server... is there another way to post the data to another server without CORS?</p><p>I POST my data using the GET in a JSONP call (haters gonna hate), theres a limit of how much GET requests you want to do in one step so i divided my data and made various JSONP and everything is fine</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082310">3</a> by Raymond Camden
		posted on 3/21/2014 at 3:20 PM
		</div>
		<div class="comment_text"><p>"I use it to save data from a phonegap app to a local server"<br>You know you don't need CORS or JSON/P for PhoneGap, right? It automatically removes XHR security stuff. (Although you need to ensure your access block in config allows the domain.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082311">4</a> by Michael Schmidt
		posted on 3/21/2014 at 5:38 PM
		</div>
		<div class="comment_text"><p>Even in a website where you have control of both sides of the website the front end and the back end but they live on different domains you can have a form post to a hidden iframe that you then can communicate via post message between the iframes on the different domains.  <br>There is no need to have to do huge transactions over get requests.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082308">5</a> by Raymond Camden
		posted on 3/21/2014 at 5:42 PM
		</div>
		<div class="comment_text"><p>Or just use CORS. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082309">6</a> by Martin Cisneros
		posted on 3/22/2014 at 10:17 AM
		</div>
		<div class="comment_text"><p>Raymond Camden: Thanks a lot for the tip hehe, now i changed my code and now is much better :)</p></div>
	</div>
</div>
		