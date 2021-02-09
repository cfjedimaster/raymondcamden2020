
<div class="comment" id="c_1714082789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082789">1</a> by Dheeraj Varshney
		posted on 4/25/2014 at 11:09 PM
		</div>
		<div class="comment_text"><p>I need Actual Speed for Sencha Touch Application.</p><p>Question is When I use Device (Application on Phone)  at the Driving then On Device I Want to Show Speed As Showing On Vehicles Meter's.</p><p>1.var geoLocationOptions = { maximumAge: 3000, timeout: 5000, enableHighAccuracy: false };<br>		navigator.geolocation.getCurrentPosition(geoLocationSuccess,geoLocationError,geoLocationOptions);</p><p>		function geoLocationSuccess(position) {<br>			this.watchPositionCallBack(position);<br>		}</p><p>		function geoLocationError() {<br>			Ext.Msg.alert('Error','Error while getting geolocation');<br>		}</p><p> 2.	var options = {<br>			maximumAge:0, timeout:10000,<br>			callback: this.watchPositionCallBack,<br>			failure: function () {<br>				Ext.Msg.alert('GPS error', 'GPS location cannot be tracked, error');<br>			},<br>			scope: this<br>		}<br>		Ext.device.Geolocation.watchPosition(options);</p><p>watchPositionCallBack: function (position) {<br>		alert(position.coords.speed);//Not Getting Actual- NULL return @all.<br>		}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082785">2</a> by Raymond Camden
		posted on 4/25/2014 at 11:14 PM
		</div>
		<div class="comment_text"><p>This is not a general support web site and your question has absolutely nothing to do with the topic of the blog entry. Please use my contact form for general tech support questions or StackOverflow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082786">3</a> by Brian Rinaldi
		posted on 4/30/2014 at 4:28 PM
		</div>
		<div class="comment_text"><p>It's not specifically Cordova related, but Mobile Web Weekly has a lot of Cordova related resources. <a href="http://disq.us/url?url=http%3A%2F%2Fmobilewebweekly.co%2F%3AmjhTzFj_gHP9GEA5x4Twi30HUWM&amp;cuid=3321886" rel="nofollow noopener" title="http://mobilewebweekly.co/">http://mobilewebweekly.co/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082788">4</a> by Raymond Camden
		posted on 4/30/2014 at 4:32 PM
		</div>
		<div class="comment_text"><p>Hey now - no fair pimping your own stuff here. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082787">5</a> by Sathiyaraj
		posted on 5/12/2014 at 4:03 PM
		</div>
		<div class="comment_text"><p>my app sign in page have more input fields, i enter my last input text field that time phone keyboard appeared. Show that time my text box not show the user. What can i do for this problem getting solution ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082790">6</a> by Raymond Camden
		posted on 5/12/2014 at 4:05 PM
		</div>
		<div class="comment_text"><p>@Sathiyaraj: Your question is not on topic for this blog post. Please ask your question on Stack Overflow.</p></div>
	</div>
</div>
		