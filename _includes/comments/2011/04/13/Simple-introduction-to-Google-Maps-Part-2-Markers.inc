
<div class="comment" id="c_1713731648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731648">1</a> by Jeremy Battle
		posted on 4/14/2011 at 3:57 AM
		</div>
		<div class="comment_text"><p>Nice followup post. I was curious, since I haven't used the maps API in awhile, does the title property do anything for a marker? I didn't notice "Order #orderid# for #dollarFormat(total)#" displaying anywhere.</p><p>This was the first ORM project I did when CF9 came out (I also chose not to use CF's version of google maps so I could update the maps stuff without upgrading CF).</p><p>I went with making "markers" into an object and using the orderid as properties of the object (and that property in turn was the corresponding marker object). That way when paging through the results I could use the markers object as a cache and only create a new marker if that ID didn't exist as a property of the markers object. I don't know how much memory creating a marker takes but I figured it's still best not to let someone loading them infinitely :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731650">2</a> by Chris Bowyer
		posted on 4/14/2011 at 4:50 AM
		</div>
		<div class="comment_text"><p>Very nice! Just one issue. It is not working for me in in IE9</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731649">3</a> by Raymond Camden
		posted on 4/14/2011 at 6:35 AM
		</div>
		<div class="comment_text"><p>@Chris: That's the console.log messages. I warned ya about them. ;)</p><p>@Jeremy: They show up (or should) on mouse over.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731651">4</a> by Jeremy Battle
		posted on 4/14/2011 at 6:39 AM
		</div>
		<div class="comment_text"><p>@Ray You're totally right, I originally read the post on my Xoom so I wasn't seeing them. Get them fine in desktop browsers, didn't know about that property, very nice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731652">5</a> by Raymond Camden
		posted on 4/14/2011 at 6:49 AM
		</div>
		<div class="comment_text"><p>Beside the mouseover not working, how did it look in the Xoom? Mine is upstairs and I'm too lazy to go get it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731653">6</a> by Drew Wells
		posted on 4/14/2011 at 8:10 AM
		</div>
		<div class="comment_text"><p>You should try out some of the competition, they don't get enough publicity.  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.openlayers.org%2F%3ATcHDBPnZ1Fcvn3QEFsSIyqAJK0M&amp;cuid=3321886" rel="nofollow noopener" title="http://www.openlayers.org/">http://www.openlayers.org/</a> <a href="http://disq.us/url?url=http%3A%2F%2Fpolymaps.org%2F%3AgpSMwWHkyevIiSNNUWpMd6_jYqU&amp;cuid=3321886" rel="nofollow noopener" title="http://polymaps.org/">http://polymaps.org/</a> <a href="http://disq.us/url?url=http%3A%2F%2Ftile5.com%2F%3AzBxbq6KisbtMqRTJ1b9uRrAqRD8&amp;cuid=3321886" rel="nofollow noopener" title="http://tile5.com/">http://tile5.com/</a><br>Here's one I made with polymaps <a href="http://disq.us/url?url=http%3A%2F%2Fdrewwells.net%2Fcraigmaps%2F%3A_1lcT_KHqFBn_HAn_XeHv5b4HT8&amp;cuid=3321886" rel="nofollow noopener" title="http://drewwells.net/craigmaps/">http://drewwells.net/craigm...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731655">7</a> by Chris Bowyer
		posted on 4/14/2011 at 8:20 AM
		</div>
		<div class="comment_text"><p>@Drew: Your map doesn't work for me in IE9 and it is very slow. I also much prefer a Google map</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731656">8</a> by Jeremy Battle
		posted on 4/14/2011 at 6:16 PM
		</div>
		<div class="comment_text"><p>@Ray It looked just as good on the Xoom, snappy too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731654">9</a> by Raymond Camden
		posted on 4/14/2011 at 6:23 PM
		</div>
		<div class="comment_text"><p>Sweetness. Will try it today at lunch. Oddly - my upstairs office is wired, not wireless, so it's hard to use devices. Got wifi downstairs in the main part of my house.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731659">10</a> by Jeremy Battle
		posted on 4/14/2011 at 6:49 PM
		</div>
		<div class="comment_text"><p>Random sidenote, Drew's map doesn't work in IE because of line 687 in polymap.js:</p><p>window.addEventListener("resize", resizer, false);<br>window.addEventListener("load", resizer, false);</p><p>which in IE needs to be window.addEvent() because I don't believe IE supports addEventLister() in recent versions, usually you can just conditionally add the events based on browser type.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.quirksmode.org%2Fjs%2Fevents_advanced.html%3Ah6bJMK6SR45tbVV3lC28I87Qydo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.quirksmode.org/js/events_advanced.html">http://www.quirksmode.org/j...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731657">11</a> by Dale Severin
		posted on 4/15/2011 at 1:33 AM
		</div>
		<div class="comment_text"><p>Marker: 12 Gover St, Oakland, CA 45794 displays at Glover Street in San Francisco.  Apparantly Google maps gets lost at times.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731660">12</a> by Raymond Camden
		posted on 4/15/2011 at 1:38 AM
		</div>
		<div class="comment_text"><p>Interesting. If you input that address in <a href="http://disq.us/url?url=http%3A%2F%2Fmaps.google.com%3Ahxt1lmq3WYIXvnlzfsQExherA7Q&amp;cuid=3321886" rel="nofollow noopener" title="maps.google.com">maps.google.com</a>, it can't find it, and the first location it suggests is Glover in San Fran. So in this case I'm guessing the geolocation is just using the best result.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731661">13</a> by Matt Reynolds
		posted on 5/25/2011 at 10:10 PM
		</div>
		<div class="comment_text"><p>You can use the Google chart api to change up the icon for your map marker (<a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fapis%2Fchart%2Fimage%2Fdocs%2Fgallery%2Fdynamic_icons.html%29%3ACi5PgG_jTmJ8i9pk_A33jaEUynI&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/apis/chart/image/docs/gallery/dynamic_icons.html)">http://code.google.com/apis...</a> You pass the url of the marker you come up with to the icon parameter of marker. Here's a marker that has a blue pin with a black letter C in it:</p><p>		  var contactMarker = new google.maps.Marker({<br>		      position: contactLocn,<br>		      map: map,<br>		      title:"Here they are!",<br>		      icon:'<a href="https://disq.us/url?url=https%3A%2F%2Fchart.googleapis.com%2Fchart%3Fchst%3Dd_map_pin_letter_withshadow%26chld%3DC%3AkKANIONoFpXZkFlTq5bhXZz3cVc&amp;cuid=3321886" rel="nofollow noopener" title="https://chart.googleapis.com/chart?chst=d_map_pin_letter_withshadow&amp;chld=C">https://chart.googleapis.co...</a>|87cefa|000000',<br>		      animation: google.maps.Animation.DROP<br>		  });	 	<br>nb - you can use http or https for maps and charts now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731664">14</a> by Raymond Camden
		posted on 5/25/2011 at 10:12 PM
		</div>
		<div class="comment_text"><p>Wow, that's kinda cool. Thanks Matt!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731663">15</a> by Chris Bowyer
		posted on 5/27/2011 at 3:29 PM
		</div>
		<div class="comment_text"><p>@Ray - Thanks for this article Ray. It has been of great help</p><p>@Dale - Had a play with the Google Chart icons this evening. Yes. Very cool. Only problem is, they are not very accurate, especially the not so standard looking pins and other icons</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731665">16</a> by Tariq
		posted on 9/8/2011 at 4:44 PM
		</div>
		<div class="comment_text"><p>I have getting error one i fetch number of record in cfoutput<br>OVER_QUERY_LIMIT indicates that you are over your quota.<br>Its means when i have above 50 records this will not work.<br>Please help me about this</p><p>Thanks in advance</p><p>Regards,</p><p>Tariq</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731666">17</a> by Raymond Camden
		posted on 9/8/2011 at 4:50 PM
		</div>
		<div class="comment_text"><p>Um - use less markers? Seriously - I can't help you with the Google quota limits. I'm sure you could pay them for more. You could try limiting the number of markers you show at one time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731667">18</a> by Terry Collinson
		posted on 9/21/2011 at 12:18 AM
		</div>
		<div class="comment_text"><p>Thanks again Ray. Indebted as ever.Struggling trying to get the infoWindow to go to the right point. It always picks up the last record even thought the title is correct.</p><p>&lt;cfoutput query="Sightings"&gt;<br>	var latlng = new google.maps.LatLng(#Sightings.lattitude#, #Sightings.longitude#);<br>	var marker = new google.maps.Marker({<br>				map: map, <br>				position:latlng,<br>				title: "#label_en#- #lattitude#, #longitude#",				<br>			});			<br>     var infowindow = new google.maps.InfoWindow({	 	<br>    			content: "&lt;B&gt;#label_en#&lt;/B&gt;&lt;br/&gt;&lt;a href='http://127.0.0.1:8500/WildlifeHeroWebCFM/WildlifeHero/tree-of-life/wildlifebinomial.cfm?binomial=#URLEncodedFormat(binomial)#'&gt;(#binomial#)&lt;/a&gt;&lt;br/&gt;#eventDate#&lt;br&gt;#city#,#weather#c&lt;p&gt;#eventnotes#"<br>			});<br>			google.maps.event.addListener(marker, 'click', function() {<br>			  <a href="http://disq.us/url?url=http%3A%2F%2Finfowindow.open%3At-qF8yd3iPELaUDNUTbZ1qMmZgw&amp;cuid=3321886" rel="nofollow noopener" title="infowindow.open">infowindow.open</a>(map,marker);<br>			});		<br>	&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731668">19</a> by Raymond Camden
		posted on 9/21/2011 at 12:19 AM
		</div>
		<div class="comment_text"><p>I think you want to remove "Sightings." from here:</p><p>var latlng = new google.maps.LatLng(#Sightings.lattitude#, #Sightings.longitude#);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731670">20</a> by Terry Collinson
		posted on 9/21/2011 at 12:31 AM
		</div>
		<div class="comment_text"><p>Wow thanks for coming back so quick. Tried that, it makes no difference at all. The hover over title is correct but when I open the information window it is always displaying the last record.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731672">21</a> by Raymond Camden
		posted on 9/21/2011 at 12:46 AM
		</div>
		<div class="comment_text"><p>Is it online where I can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731671">22</a> by Terry Collinson
		posted on 9/22/2011 at 4:03 PM
		</div>
		<div class="comment_text"><p>Hi Ray, I have it online now at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.wildlifehero.com%2Fweb%2Fmaps%2Freservemap.cfm%3Freservename%3DMy%2520Reserve%3A8oDMXrLfCMDXG6McIhkxNzyy_fg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.wildlifehero.com/web/maps/reservemap.cfm?reservename=My%20Reserve">http://www.wildlifehero.com...</a> Bit infuriating this one. I assume the varables are overwriiten by the time I get to use them in the infoWindow. By the way I am using your galleon forums here too so you are an official Wildlife Hero</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731673">23</a> by Raymond Camden
		posted on 9/22/2011 at 5:20 PM
		</div>
		<div class="comment_text"><p>Ok - you are doing things a bit differently since you have lat/lng values and don't have to geocode.</p><p>What follows - I stress - should be taken with a grain of salt as it involves scoping issues in JavaScript and I'm still a bit... unsure there.</p><p>If you look at my code, I've got N "blocks" of geocoding going on. Within the block, I use var statements to define markers, strings, etc, and then append a marker to a global object.</p><p>In your code, you don't have those wrappers. So I think the variables are 'going over' each other.</p><p>As a quick fix, try this. I imagine you are looping over a query, right? So you have access to somequery.currentRow. Take that value and add it to the end of</p><p>latlgnS<br>image<br>contentString<br>infowindow<br>marker</p><p>Or - conversely - use a loop in JavaScript.</p><p>If you want to give me FTP access, I can take a stab at it.</p><p>Actually.... thinking... try adding the dynamic part ONLY to marker. So</p><p>var marker =</p><p>becomes</p><p>var marker#somequery.currentRow# =</p><p>Hmmm. The more I think about it, the more I know it is a scoping issue. I'd have to really get in to see the best fix though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731676">24</a> by Terry Collinson
		posted on 9/22/2011 at 6:10 PM
		</div>
		<div class="comment_text"><p>Adding current row causes the window not function at all. Can u send me your email address I have lost it. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731674">25</a> by Raymond Camden
		posted on 9/22/2011 at 6:14 PM
		</div>
		<div class="comment_text"><p>I emailed you this morning about a ... issue... on your server. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731677">26</a> by Gary Funk
		posted on 8/6/2012 at 4:32 AM
		</div>
		<div class="comment_text"><p>Dang it Ray,  I'm having the same problem as Terry. Been working on it for several hours. Wishing I had more brain cells.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731675">27</a> by Raymond Camden
		posted on 8/6/2012 at 7:04 PM
		</div>
		<div class="comment_text"><p>If I can help, let me know via email.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731678">28</a> by Shameel
		posted on 3/5/2013 at 1:37 PM
		</div>
		<div class="comment_text"><p>Hi...Thanks for the nice post. I want to know if there is a way to search through the markers..I have a custom map with around a hundred markers and I want to search among them..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731681">29</a> by Raymond Camden
		posted on 3/5/2013 at 5:21 PM
		</div>
		<div class="comment_text"><p>You would have to do it via JavaScript. If you have the data for your markers in a JavaScript array, you would just loop over them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731680">30</a> by jlig
		posted on 4/29/2013 at 7:01 PM
		</div>
		<div class="comment_text"><p>Ray, what about adding an option that allows the end-user to "drag" the pin to a different location that is saved back to Coldfusion (like this example: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.putyourlightson.net%2Fcoordinates%29%3F%3AQIziNiSW2C4K0M3ZJ8xhlnqS7ck&amp;cuid=3321886" rel="nofollow noopener" title="http://www.putyourlightson.net/coordinates)?">http://www.putyourlightson....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731679">31</a> by Raymond Camden
		posted on 4/29/2013 at 10:29 PM
		</div>
		<div class="comment_text"><p>I'm confused - what part do you need help with? In this demo, he gives you the JS. To 'store' it you would just do an AJAX call. If you've never done AJAX with CF, let me know, but if you have, that's all that is involved here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731682">32</a> by jlig
		posted on 4/29/2013 at 11:17 PM
		</div>
		<div class="comment_text"><p>The example I linked to is using the old v2 the Google API so I needed an example using v3.. This example is v3 &amp; grabs the Lat/Long. (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.geocodezip.com%2Fv3_GoogleEx_geocoding-reversegeocoding-simple.html%29%3ALlEuCGx376SUFx5v74aAMkivJfc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.geocodezip.com/v3_GoogleEx_geocoding-reversegeocoding-simple.html)">http://www.geocodezip.com/v...</a></p><p>Question: How do I "grab" those updated Lat/Long values and save to URL variables for posting to SalesForce/ColdFusion?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731683">33</a> by Raymond Camden
		posted on 4/30/2013 at 12:31 AM
		</div>
		<div class="comment_text"><p>All I can recommend is doing what I'd do. I'd look at the first example and see how they enabled drag/drop for the markers. Compare that to the docs you can read for v3 and see if they are the same, or if not, close. Make any required changes for v3, and then you are done.</p><p>Wouldn't you agree that should work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731686">34</a> by Benyam
		posted on 5/30/2013 at 6:32 PM
		</div>
		<div class="comment_text"><p>Thank You !!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731684">35</a> by Mandy
		posted on 7/1/2014 at 7:22 PM
		</div>
		<div class="comment_text"><p>is there a way when an information window open, other window close automatically without click on the X? where to modify the code to accomplish this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731685">36</a> by Raymond Camden
		posted on 7/2/2014 at 5:27 AM
		</div>
		<div class="comment_text"><p>Yes, it is possible. You would need to write code to remember what windows were open so you can close them via the API.</p></div>
	</div>
</div>
		