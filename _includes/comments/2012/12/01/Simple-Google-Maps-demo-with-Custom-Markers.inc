
<div class="comment" id="c_1713743931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743931">1</a> by SuperAlly
		posted on 12/2/2012 at 2:57 AM
		</div>
		<div class="comment_text"><p>Thanks Ray.  I'm in the middle of this very thing, and this will be a big help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743939">2</a> by SuperAlly
		posted on 12/2/2012 at 10:25 AM
		</div>
		<div class="comment_text"><p>Ray<br>This was a great help.  One thing I noticed when putting my own map together, when you click on a link in the sidebar, it closes the previous infowindow, but if you click on the map markers themselves, it leaves previous infowindows open.  <br>Any idea how to work around that?  I thought calling infowindow.close() before <a href="http://disq.us/url?url=http%3A%2F%2Finfowindow.open%3At-qF8yd3iPELaUDNUTbZ1qMmZgw&amp;cuid=3321886" rel="nofollow noopener" title="infowindow.open">infowindow.open</a> would suffice, but no luck.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743938">3</a> by SuperAlly
		posted on 12/2/2012 at 11:00 AM
		</div>
		<div class="comment_text"><p>Ray, my apologies for the repeated posts, but I got the infowindows working properly by changing this:<br>google.maps.event.addListener(marker, 'click', function() {<br>  <a href="http://disq.us/url?url=http%3A%2F%2Finfowindow.open%3At-qF8yd3iPELaUDNUTbZ1qMmZgw&amp;cuid=3321886" rel="nofollow noopener" title="infowindow.open">infowindow.open</a>(map,marker);<br>});</p><p>to this slight mod of the other block of code:<br>google.maps.event.addListener(marker, 'click', function() {<br>  if(lastinfowindow instanceof google.maps.InfoWindow) lastinfowindow.close();<br>  <a href="http://disq.us/url?url=http%3A%2F%2Fmarker.infowindow.open%3AJhK7zMevk4fHttX62MlpZxXX8wI&amp;cuid=3321886" rel="nofollow noopener" title="marker.infowindow.open">marker.infowindow.open</a>(map, marker);<br>  lastinfowindow = marker.infowindow;<br>});</p><p>Just wanted to pass it along, and thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743934">4</a> by Misty
		posted on 12/2/2012 at 12:03 PM
		</div>
		<div class="comment_text"><p>Hi ray, I had build this and filtering a long but with xml and javascript . cfmap was not introduced then. was pretty easy the way. But you make nice usage and it looks awesome</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743932">5</a> by Raymond Camden
		posted on 12/2/2012 at 8:16 PM
		</div>
		<div class="comment_text"><p>No need to apologize, SuperAlly, thanks for finding that *and* fixing it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743933">6</a> by Paul
		posted on 12/3/2012 at 11:04 PM
		</div>
		<div class="comment_text"><p>I love the function and the code, but I think the people of Denver or Sante Fe may not like their new locations ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743937">7</a> by Raymond Camden
		posted on 12/3/2012 at 11:15 PM
		</div>
		<div class="comment_text"><p>Paul - sorry - what? Did the geocode fail?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743942">8</a> by Paul
		posted on 12/3/2012 at 11:59 PM
		</div>
		<div class="comment_text"><p>It was on the first demo, orders 5 &amp; 6.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743941">9</a> by Raymond Camden
		posted on 12/4/2012 at 12:01 AM
		</div>
		<div class="comment_text"><p>Interesting. Definitely a bug there. Well, it's old, so I'm not going to worry about it. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743940">10</a> by Raymond Camden
		posted on 12/4/2012 at 3:30 AM
		</div>
		<div class="comment_text"><p>Follow up post with SuperAlly's fix in it:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F12%2F3%2FSimple-Google-Maps-demo-with-Custom-Markers--Followup%3AVykk0xYctU70aHdiipSAJLZfWpo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/12/3/Simple-Google-Maps-demo-with-Custom-Markers--Followup">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743943">11</a> by Jim Cato
		posted on 1/14/2013 at 8:21 PM
		</div>
		<div class="comment_text"><p>I an a novice to joomla and am not a programmer.  I do my own websites and have been looking for a plugin or module that would allow me to reference google icons in a menu; in other words, have a menu with an image that matches an icon on a map.  Do you have any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743945">12</a> by Raymond Camden
		posted on 1/14/2013 at 8:22 PM
		</div>
		<div class="comment_text"><p>For Joomla? I don't use it. Sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743946">13</a> by Hicham
		posted on 1/22/2013 at 4:42 PM
		</div>
		<div class="comment_text"><p>Hi Raymond Camden,</p><p>Thank you so much for this code, exactly what i was searching for :)<br>Is it possible to ad a mailto: link for email in the map ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743947">14</a> by Raymond Camden
		posted on 1/22/2013 at 5:25 PM
		</div>
		<div class="comment_text"><p>The title values for those markers can include HTML - just use it there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743951">15</a> by denis
		posted on 4/12/2013 at 11:32 PM
		</div>
		<div class="comment_text"><p>I'm trying to building a web app using google maps, and seeing the aplicatios of the demo, it's what I'm finding, I'm studing the code e creating my work!But now, the mission is to  create an application where people clicks on checkbox e just show the icons by category. Adress isn't necessary in my context. What class or library  I should to use to finish the web app? I'm using in this application  javascript and html5</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743948">16</a> by Raymond Camden
		posted on 4/14/2013 at 12:04 AM
		</div>
		<div class="comment_text"><p>Um. I don't know if I really understand you. I believe you want JavaScript but honestly I can't tell.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744016">17</a> by Lara
		posted on 4/15/2013 at 11:30 AM
		</div>
		<div class="comment_text"><p>Hi, i'm trying to building a web site for the people create markers about crime in a city. Do you know if can i open a box for it? Save in a database and load after?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744035">18</a> by Raymond Camden
		posted on 4/15/2013 at 3:02 PM
		</div>
		<div class="comment_text"><p>"Do you know if can i open a box for it? Save in a database and load after?" Not sure what you mean by open a box. If you mean, "Can I allow people to add markers (with some text data too) and store it" then the answer is yes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744025">19</a> by Cruelcrome
		posted on 4/17/2013 at 11:06 AM
		</div>
		<div class="comment_text"><p>Any1 know if I want to zoom/bound to only the active markers(by the checkboxes) and fit the map after them?<br>... And if no checkboxes are selected then go back to default map zoom/center ?? .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744019">20</a> by Raymond Camden
		posted on 4/17/2013 at 3:28 PM
		</div>
		<div class="comment_text"><p>"Any1 know if I want to zoom/bound to only the active markers(by the checkboxes) and fit the map after them?" Afaik, the Google Maps API has the ability to zoom/fit things, so this _should_ be possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744024">21</a> by Cruelcrome
		posted on 4/18/2013 at 12:07 PM
		</div>
		<div class="comment_text"><p>ok, ty i'll try that...</p><p>do you have any clue on how i highlight(by chance the loc class somehow) so i can see which marker is active at the sidebar?</p><p>regards Cruelcrome</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744027">22</a> by Raymond Camden
		posted on 4/18/2013 at 3:25 PM
		</div>
		<div class="comment_text"><p>Nope. I'd recommend going to the docs. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744014">23</a> by denis
		posted on 4/20/2013 at 12:28 AM
		</div>
		<div class="comment_text"><p>Yes. Javascript is tme main language that i'm using. But, I'm tring to use jQuery to show and hide markers in the map based on the checkboxes that are selected.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744020">24</a> by Raymond Camden
		posted on 4/20/2013 at 12:31 AM
		</div>
		<div class="comment_text"><p>Which is what I demoed, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744018">25</a> by denis
		posted on 4/26/2013 at 2:27 AM
		</div>
		<div class="comment_text"><p>Yes, I saw this demo ,  that gave me an orientation to building in an web application</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744026">26</a> by Raymond Camden
		posted on 4/26/2013 at 3:50 AM
		</div>
		<div class="comment_text"><p>Sorry, but what exactly are you trying to ask me?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744022">27</a> by denis
		posted on 5/1/2013 at 3:06 AM
		</div>
		<div class="comment_text"><p>Ok, let's go. I'm using a web application that shows in a map the icons , using google maps . For this,I want using a &lt;select&gt; tag to filter the icons by categories, instead of checkboxes. I hope that you undestad!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744031">28</a> by Raymond Camden
		posted on 5/1/2013 at 6:31 AM
		</div>
		<div class="comment_text"><p>So, step one then would be for you to add a dropdown and notice the change. Can you handle that portion? That's simple jQuery event handling.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744015">29</a> by Stuart
		posted on 5/29/2013 at 3:43 PM
		</div>
		<div class="comment_text"><p>Hi.I have followed your guides, they are great by the way. Do you know how to insert something like this into a wordpress site?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744017">30</a> by Raymond Camden
		posted on 5/29/2013 at 6:02 PM
		</div>
		<div class="comment_text"><p>Nope, I don't use Wordpress. This entire demo is just HTML and JavaScript. I assume Wordpress has some way to let you do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744023">31</a> by Roge
		posted on 5/30/2013 at 1:40 AM
		</div>
		<div class="comment_text"><p>Hi! Nice tutorial!! <br>How can i change the data of the geolocation (adress:") for the lat. and long. ('position') ?? i don't want to use the geolocation api to create the marks.</p><p>Tnx!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744029">32</a> by Raymond Camden
		posted on 5/30/2013 at 1:46 AM
		</div>
		<div class="comment_text"><p>Well, obviously you would change address to longitude and latitude. And then instead of doing a geolocation, just add the markers with those values.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744034">33</a> by Roge
		posted on 5/30/2013 at 2:18 AM
		</div>
		<div class="comment_text"><p>Hi again! Sorry for this, I'm a little beginner over here, can you give me some example of code? <br>If is too much for ask, thanks anyway, and great job!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744032">34</a> by Raymond Camden
		posted on 5/31/2013 at 2:45 AM
		</div>
		<div class="comment_text"><p>Sorry, I can't. You should be able to modify the code I've provided, or use the API docs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744038">35</a> by Joaquin
		posted on 6/18/2013 at 1:27 PM
		</div>
		<div class="comment_text"><p>Hi. Thanks for this, but I can not use. My skills of Javascript are limited. I only need copy font code? Could you upload the complete example. I dont know how use it. Thanks and regards.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744030">36</a> by Raymond Camden
		posted on 6/18/2013 at 6:11 PM
		</div>
		<div class="comment_text"><p>To be honest, I would not recommend using this if you do not having basic JavaScript skills.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744036">37</a> by Ed Stephenson
		posted on 7/22/2013 at 4:38 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Thanks for the really helpful tutorial! It's solved an issues i've spent weeks on.</p><p>I have one question: Is there anyway to sort the data that comes through on the locs section?</p><p>I see that yours is conveniently in alphabetical order. However I've used the maps API to find out how far away a user would be from the locations of the markers. I want to order the sidebar results by distance from the user....Would you be willing to give me any pointers?</p><p>Thanks,</p><p>Ed</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744033">38</a> by Raymond Camden
		posted on 7/22/2013 at 5:40 PM
		</div>
		<div class="comment_text"><p>If you know the distance then sure - you could sort the array. I'd Google for "javascript array sort" to start. It should be simple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744037">39</a> by Joaquin
		posted on 7/22/2013 at 8:43 PM
		</div>
		<div class="comment_text"><p>Although I only have basic skills I have finished! But I have a problem, why only appear 11 items in the sidebar?? I need much more and I dont know where change this limit. When any checkbox is on all point must be appear.</p><p>Please, I need help.</p><p>My map is here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjjmontalban.com%2Fmap%2F%3AWvm63_3FZJ-e7HFDSbmHCL8qbfA&amp;cuid=3321886" rel="nofollow noopener" title="http://jjmontalban.com/map/">http://jjmontalban.com/map/</a></p><p>Thanks and regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744021">40</a> by Raymond Camden
		posted on 7/22/2013 at 10:37 PM
		</div>
		<div class="comment_text"><p>Looking at your code I see /* around some data. I think you commented part out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744045">41</a> by Joaquin
		posted on 7/23/2013 at 2:42 PM
		</div>
		<div class="comment_text"><p>Yes, I have commented part of address. But appear 18 address and only appear 11. If I uncomment all address only still appear 11 too.</p><p>Where is the problem??</p><p>Thanks and regards.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744047">42</a> by Raymond Camden
		posted on 7/23/2013 at 3:39 PM
		</div>
		<div class="comment_text"><p>It probably failed to Geocode. Try uncommenting this:</p><p>alert("Geocode was not successful for the following reason: " + status)</p><p>Ah... and I bet I know why. Google puts a limit on the # of addresses you can Geocode in a certain time.</p><p>So what I recommend is geocoding the addresses one time - manually - and skipping the geocode process in your production app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744046">43</a> by Joaquin
		posted on 7/30/2013 at 10:19 PM
		</div>
		<div class="comment_text"><p>How can I geocoding manually? My skill still are short but I need this map.</p><p>When I uncomment the alert show the problem but show all addresses!</p><p>Thanks and regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744051">44</a> by Raymond Camden
		posted on 7/30/2013 at 10:37 PM
		</div>
		<div class="comment_text"><p>Well there are a few ways. Right now your code is geocoding SOME of the data. In your code, just use a console.log to report it, and then copy those values down. Then remove those addresses and do the rest. After one or two loads you will have all the data you need and can skip that entire process.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744048">45</a> by Joaquin
		posted on 7/31/2013 at 2:29 PM
		</div>
		<div class="comment_text"><p>Sorry to ask again, but do not understand how to use console.log. I can not find the solution to the problem. I tried with the geocoder object, but do not know where to use it or how exactly.</p><p>greetings and thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744053">46</a> by Raymond Camden
		posted on 7/31/2013 at 3:23 PM
		</div>
		<div class="comment_text"><p>I recommend you learn how to use it. Here is one doc on it:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.mozilla.org%2Fen-US%2Fdocs%2FWeb%2FAPI%2Fconsole%3AqJXGrVb-7bFTpoBrd_xaPvbEWyc&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.mozilla.org/en-US/docs/Web/API/console">https://developer.mozilla.o...</a></p><p>And here is another one, just for Chrome:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fdevelopers.google.com%2Fchrome-developer-tools%2Fdocs%2Fconsole%3A2dA9o7Ij3SWQ8tuOS_GzVVqxSpU&amp;cuid=3321886" rel="nofollow noopener" title="https://developers.google.com/chrome-developer-tools/docs/console">https://developers.google.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744050">47</a> by Paul Clapp
		posted on 8/9/2013 at 2:34 PM
		</div>
		<div class="comment_text"><p>Great tutorial. it's just the thing I've been looking for, so thank you.</p><p>I've made a good start integrating this with WordPress but for some reason can't seem to get it to display more than 11 markers. Is there anything in the script that could be causing this, I couldn't see anything obvious?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744052">48</a> by Raymond Camden
		posted on 8/9/2013 at 2:56 PM
		</div>
		<div class="comment_text"><p>See the earlier comments (pretty much the ones right before here). Google limits you to how many addresses you can geolocate at once. You will want to geolocate them manually and use those addresses instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744054">49</a> by Paul Clapp
		posted on 8/9/2013 at 3:04 PM
		</div>
		<div class="comment_text"><p>Ah yes, I see that now. What a bummer! Thanks for the quick response though, much appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744056">50</a> by Raymond Camden
		posted on 8/9/2013 at 3:07 PM
		</div>
		<div class="comment_text"><p>It is easy to fix though. I'm writing a blog post now on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744055">51</a> by Paul Clapp
		posted on 8/9/2013 at 3:10 PM
		</div>
		<div class="comment_text"><p>Ok great, I may wait for that as my project isn't urgent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744058">52</a> by Raymond Camden
		posted on 8/9/2013 at 3:20 PM
		</div>
		<div class="comment_text"><p>Nice - I actually already did this. *sigh*. Check this:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F12%2F3%2FSimple-Google-Maps-demo-with-Custom-Markers--Followup%3AVykk0xYctU70aHdiipSAJLZfWpo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/12/3/Simple-Google-Maps-demo-with-Custom-Markers--Followup">http://www.raymondcamden.co...</a></p><p>and what I just wrote:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2013%2F8%2F9%2FGoogle-Maps-and-Markers-Update%3A8F3fYRC7mLaJ1qFvFuYIBJqMfw0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2013/8/9/Google-Maps-and-Markers-Update">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744057">53</a> by Raymond Camden
		posted on 8/9/2013 at 3:20 PM
		</div>
		<div class="comment_text"><p>Btw, the update was under "Related Entries" above - which is why you may have missed it. I missed it too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744059">54</a> by natali
		posted on 1/4/2014 at 6:43 PM
		</div>
		<div class="comment_text"><p>how can i add more categories for filtering?<br>(i want another group of checkboxs, another value to filter by. this is filtering by "type", and i want to filter by "country")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744060">55</a> by Raymond Camden
		posted on 1/4/2014 at 7:25 PM
		</div>
		<div class="comment_text"><p>Well, adding more categories is as simple as just adding more of the input fields.</p><p>If you want to add another "group" of checkboxes, you would need do something like this:</p><p>a) Add code that listens for clicks in that group<br>b) On click, your filter function now needs to check both groups to see what is being filtered and then apply that logic to the original data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744063">56</a> by natali
		posted on 1/4/2014 at 7:39 PM
		</div>
		<div class="comment_text"><p>here's what I've done so far, but its not working ! <br>could you tell me the problem?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fnatalipolishuk.com%2Fvolunteer%2Findex.html%3AvoTYPq8_Jjz3rWPp6SsaQ6bYHl0&amp;cuid=3321886" rel="nofollow noopener" title="http://natalipolishuk.com/volunteer/index.html">http://natalipolishuk.com/v...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744061">57</a> by Raymond Camden
		posted on 1/4/2014 at 7:57 PM
		</div>
		<div class="comment_text"><p>No, I cannot. I'm happy to help, guide, etc, but you need to do the gist of the work. I'd begin by asking, what isn't working. Did you add new categories first and test that? You had wanted to do 2 different things, so I'd focus on the one at a time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744062">58</a> by Neo
		posted on 3/3/2014 at 12:03 PM
		</div>
		<div class="comment_text"><p>I like this example, I was wondering if you had any code to put a search box in for locations? thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744067">59</a> by Raymond Camden
		posted on 3/5/2014 at 7:32 PM
		</div>
		<div class="comment_text"><p>No, not pre-built. Wouldn't be hard though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744065">60</a> by Jan
		posted on 3/29/2014 at 4:18 PM
		</div>
		<div class="comment_text"><p>Very usefull. Thank you for this demo. I make few changes, but the idea is still same and pretty clear.</p><p>// filtering by category</p><p>function doFilter(category) {<br>  data.forEach(function(entry) {<br>    if(entry.category_id == category || category == 0)<br>    {<br>      markers[<a href="http://disq.us/url?url=http%3A%2F%2Fentry.id%3AGYhbzzYi0bti0YV6P-u46nVBRnU&amp;cuid=3321886" rel="nofollow noopener" title="entry.id">entry.id</a>].setVisible(true);    <br>    }<br>    else<br>    {<br>      markers[<a href="http://disq.us/url?url=http%3A%2F%2Fentry.id%3AGYhbzzYi0bti0YV6P-u46nVBRnU&amp;cuid=3321886" rel="nofollow noopener" title="entry.id">entry.id</a>].setVisible(false);<br>    }<br>  });    <br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744064">61</a> by Rashmi Kant
		posted on 6/16/2014 at 9:33 PM
		</div>
		<div class="comment_text"><p>This really a very good article , help me a lot to understand the things. I will be very grate ful if you provide me some code or article over this to filter this record on basis of google circle radius.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744066">62</a> by Raymond Camden
		posted on 6/17/2014 at 5:12 AM
		</div>
		<div class="comment_text"><p>Nope. I do have an article where I demonstrate drawing a polygon to limit search results.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744068">63</a> by nish
		posted on 7/25/2014 at 6:17 AM
		</div>
		<div class="comment_text"><p>great script..</p><p>I want to hide all markers by default. means when no checkbox is selected no marker should be shown. plus how can i use Geo coordinates instead of address of place.</p><p>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744069">64</a> by Raymond Camden
		posted on 7/25/2014 at 3:17 PM
		</div>
		<div class="comment_text"><p>"I want to hide all markers by default. means when no checkbox is selected no marker should be shown."</p><p>Are you asking *if* you can do that? If so - of course. It would be a minor tweak to the code. Please go ahead and try .</p><p>"plus how can i use Geo coordinates instead of address of place."<br>That would actually made the code simpler as you can skip the Geocoding and just place the markers with the data you already have.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744077">65</a> by Tom
		posted on 10/10/2014 at 2:52 PM
		</div>
		<div class="comment_text"><p>Is there a way to auto start showing locations? One by one after for example 3 secs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744076">66</a> by Raymond Camden
		posted on 10/10/2014 at 2:55 PM
		</div>
		<div class="comment_text"><p>Yes. Generically speaking you want to use setTimeout or setInterval to do so.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744074">67</a> by Tom
		posted on 10/10/2014 at 3:12 PM
		</div>
		<div class="comment_text"><p>Can You help me, which part of Your code should I change to have that? I want to loop showing these locations. SetTimeout can auto start showing locations (I shoul use onload() to auto start that?).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744075">68</a> by Raymond Camden
		posted on 10/10/2014 at 3:19 PM
		</div>
		<div class="comment_text"><p>Speaking generically, if you have an array of values, and you want to do stuff with them in an interval, you could use pseudo-code like so:</p><p>var current = 0;<br>var interval = window.setInterval(showNext, 2000);</p><p>function showNext() {<br>  // do something with the array at position current<br>  //add one to current. if current = array size, then window.clearInterval(interval)<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744078">69</a> by Tom
		posted on 10/10/2014 at 3:22 PM
		</div>
		<div class="comment_text"><p>Sorry for my previous comment - not logically...<br>Can you help me, where to put: "setInterval(function(), 3000);" to "play" clicking next locations?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744073">70</a> by Tom
		posted on 10/10/2014 at 3:26 PM
		</div>
		<div class="comment_text"><p>Thank you for your help, but I thought it will be much easier - one, two simple JS lines. Unfortunately I don't know as much JS to do that...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2114049505">
	<div>
		<img src="https://disqus.com/api/users/avatars/sivashangar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2114049505">71</a> by siva shangar
		posted on 7/3/2015 at 6:44 AM
		</div>
		<div class="comment_text"><p>Thank you !...<br>But I need to pass locations from my database.</p><p>How to pass locations from my database to json array ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2114553175">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2114553175">72</a> (In reply to <a href="#c_2114049505">#71</a>) by Raymond Camden
		posted on 7/3/2015 at 2:09 PM
		</div>
		<div class="comment_text"><p>You would need some kind of application server on the back end to read the db and output JSON.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2462683420">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_13oSbnsKsI.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2462683420">73</a> by dude
		posted on 1/17/2016 at 10:14 AM
		</div>
		<div class="comment_text"><p>hi Ray! thanks for the awesome blog! i'm trying to make a site with the same features, but where any user can input data into the infowindow (the data being categorized) and then save &amp; close. other users will be able to filter the data based on the categories as you have shown. any advice how to do that? thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_2464569243">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2464569243">74</a> (In reply to <a href="#c_2462683420">#73</a>) by Raymond Camden
		posted on 1/18/2016 at 2:41 PM
		</div>
		<div class="comment_text"><p>Roughly:</p><p>You will need JS code that listens for a submit event on the infowindow's form. It will get the data and do an XHR to your server so your server can do what makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2465794774">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_13oSbnsKsI.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2465794774">75</a> (In reply to <a href="#c_2464569243">#74</a>) by dude
		posted on 1/19/2016 at 4:18 AM
		</div>
		<div class="comment_text"><p>thanks Ray! will try it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2920726435">
	<div>
		<img src="https://disqus.com/api/users/avatars/julio_c_zar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2920726435">76</a> by Julio Cézar
		posted on 9/27/2016 at 11:10 AM
		</div>
		<div class="comment_text"><p>Hello! I could not download the example. Where can I download this example to study?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2921074537">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2921074537">77</a> (In reply to <a href="#c_2920726435">#76</a>) by Raymond Camden
		posted on 9/27/2016 at 3:17 PM
		</div>
		<div class="comment_text"><p>I linked to it above. You don't see it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2986199045">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Qgp3wa2JO4.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2986199045">78</a> by Waleed
		posted on 11/5/2016 at 3:03 PM
		</div>
		<div class="comment_text"><p>I am trying to retrieve the location of the points from an online database,then redefine them into the JavaScript array "data" how best can I do that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2986206028">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2986206028">79</a> (In reply to <a href="#c_2986199045">#78</a>) by Raymond Camden
		posted on 11/5/2016 at 3:09 PM
		</div>
		<div class="comment_text"><p>You would set something up on your server that would listen for an HTTP request and return a JSON-encoded list of locations. Something like Node, PHP, or ColdFusion, could handle this for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2986208713">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Qgp3wa2JO4.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2986208713">80</a> (In reply to <a href="#c_2986206028">#79</a>) by Waleed
		posted on 11/5/2016 at 3:11 PM
		</div>
		<div class="comment_text"><p>Thanks for your prompt reply, do you know of any resources that may cover this kind of thing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2986209840">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2986209840">81</a> (In reply to <a href="#c_2986208713">#80</a>) by Raymond Camden
		posted on 11/5/2016 at 3:12 PM
		</div>
		<div class="comment_text"><p>Well, there's millions of resources on those technologies. :) If you've never done anything server-side, I'd start w/ Node.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2986720290">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Qgp3wa2JO4.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2986720290">82</a> (In reply to <a href="#c_2986209840">#81</a>) by Waleed
		posted on 11/5/2016 at 9:47 PM
		</div>
		<div class="comment_text"><p>I have used PHP before, but I am having trouble with the example above</p></div>
	</div>
</div>
		
<div class="comment" id="c_2988132105">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2988132105">83</a> (In reply to <a href="#c_2986720290">#82</a>) by Raymond Camden
		posted on 11/6/2016 at 8:16 PM
		</div>
		<div class="comment_text"><p>Well the basic idea is to output an array of data in JSON-friendly format like the data I have hard coded above. If you've never done Ajax before, you need to do some basic research of course. I can't really explain it to you all here.</p></div>
	</div>
</div>
		