
<div class="comment" id="c_1713722650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722650">1</a> by Bob
		posted on 3/19/2010 at 9:09 PM
		</div>
		<div class="comment_text"><p>Waiting for more goodness with part two.  Wondering if there is a way to measure the distance between each lat/long pair and then add a pointer to the map with a line connecting them?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722658">2</a> by Raymond Camden
		posted on 3/19/2010 at 9:53 PM
		</div>
		<div class="comment_text"><p>I kinda forgot about this one. I'll definitely do a part 2 though. You can also do lines. I don't think lines make sense in this example, but I wanted to show that as well (err, what I mean is, it doesn't make sense for the 'Bird Watching' demo).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722656">3</a> by Ben Nadel
		posted on 3/30/2010 at 11:02 PM
		</div>
		<div class="comment_text"><p>Very cool - I've only played around with Google maps and I am also impressed with how easy they make a lot of stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722657">4</a> by Jody Fitzpatrick
		posted on 4/10/2010 at 7:26 PM
		</div>
		<div class="comment_text"><p>I have a question, assume that we have placement markers throughout the cfmap. When we zoom out or in it will load more markers or less based on the location.</p><p>For Example.)</p><p>Marker one location is in NY,  marker two is in Louisiana, and marker three is in California, While NY is only in few it will only show NY, but if CALI comes in view it will show the marker in Cali, as well if it was two show Louisiana in view.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722652">5</a> by Raymond Camden
		posted on 4/11/2010 at 7:03 PM
		</div>
		<div class="comment_text"><p>Are you asking if that is possible? The answer is absolutely yes. Google has support for something called a Marker Manager. It is built to better handle large sets of markers and one of the specific features is support for 'show these markers at zoom x'</p><p>I'm rereading your comment and I think that may not _exactly_ match what you mean. Obviously if you set a marker to show at a 'low' zoom, then you would only see the CA one if you were zoomed in low enough. You can also notice when the view port changes. You could say, "If I'm in a range of these long/lat, I'm over CA so show marker X." Not sure how efficient it would be.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722655">6</a> by Mike
		posted on 9/16/2011 at 2:36 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>How would you adapt the js here to simply populate 1 existing input field and update it each time?  I know its probably trivial but I cant figure it out...</p><p>thanks man.</p><p>Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722659">7</a> by Raymond Camden
		posted on 9/16/2011 at 7:44 PM
		</div>
		<div class="comment_text"><p>Instead of adding a new field, you would append to the old field like so (assume old field has id of 'simple')</p><p>$("#simple").append(latln)</p><p>Append should append to the value.... but double check that. If it doesn't, just do</p><p>$("#simple").val($("#simple").val() + "," +latlng)</p><p>Actually that second one is better as it adds the comma to keep it separate.</p><p>Actually (grin), that's bad since the lat and lng are separated with a comma. You REALLY don't want to use one field. But if you insist, use another delimiter like a @ sign. Or consider a textarea and use line breaks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722664">8</a> by Misty
		posted on 12/17/2011 at 8:43 AM
		</div>
		<div class="comment_text"><p>Hi ray, What if we want to calculate the difference between the two locations and hightlight the one to use which is the shortest route.</p><p>is this possible</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722663">9</a> by Raymond Camden
		posted on 12/17/2011 at 8:04 PM
		</div>
		<div class="comment_text"><p>You need to look at Google's Directions API. It supports finding routes, finding quickest, etc. I've blogged on this before, and of course, Google has a bunch of docs on it. It's a rather nice service actually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722661">10</a> by Ahmad Bakri
		posted on 1/8/2012 at 12:44 PM
		</div>
		<div class="comment_text"><p>Thanks Ray,</p><p>This is damn useful, very simple. I even manage to retrieve address with little GClientGeocoder()tweak.</p><p>&lt;script&gt;<br>var counter;</p><p>function init() {<br>    counter = 0;</p><p>	var geocoder = null;<br>	geocoder = new GClientGeocoder();</p><p>    map = ColdFusion.Map.getMapObject('mainMap')<br>    GEvent.addListener(map, "click", function(overlay,latlng) {<br>        if(latlng) {</p><p>			geocoder.getLocations(latlng, function(addresses) {<br>			  if(addresses.Status.code != 200) {<br>				alert("reverse geocoder failed to find an address for " + latlng.toUrlValue());<br>			  }<br>			  else {<br>				address = addresses.Placemark[0];<br>				var myHtml = address.address;<br>				document.getElementById("myaddress").innerHTML = myHtml;<br>			  }<br>			});<br> }<br>    })<br>}&lt;/script&gt;</p><p>&lt;span id="myaddress"&gt;&lt;/span&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722666">11</a> by Raymond Camden
		posted on 1/8/2012 at 6:23 PM
		</div>
		<div class="comment_text"><p>Slick - thanks for sharing that.</p></div>
	</div>
</div>
		