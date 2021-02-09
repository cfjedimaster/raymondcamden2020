
<div class="comment" id="c_1713720512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720512">1</a> by Lola LB
		posted on 12/16/2009 at 8:04 AM
		</div>
		<div class="comment_text"><p>Is storing the geocodes in a database really a good idea?  Suppose you're setting up a user-based website where one of the primary features will be the ability to locate other users on the maps, say, all the members within a 25 mile range, or all 100 friends who are on that user-based website.  That database table could get big very fast, I would think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720513">2</a> by Raymond Camden
		posted on 12/16/2009 at 8:10 AM
		</div>
		<div class="comment_text"><p>It is just a longitude and latitude. If you already store a full address, this is just two more fields. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720515">3</a> by amclean
		posted on 12/16/2009 at 11:47 AM
		</div>
		<div class="comment_text"><p>Thanks, Ray. I knew you would know what to do.<br>Genius answer - I didn't even realize the geocoding service was a separate function.</p><p>I'll apply this right away to my project.</p><p>Thanks again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720514">4</a> by Marko Simic
		posted on 12/16/2009 at 2:55 PM
		</div>
		<div class="comment_text"><p>Thank you. Good to know.<br>Only thing I would change is a side where this would be processed. That is, I would move it from server to client side. With some nice progress bar ("Processing markers. Please wait...") it would be visually more attractive too.<br>With increase of number of addresses, this would keep thread hanging for considerably long period.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720519">5</a> by Benoit HEDIARD
		posted on 12/16/2009 at 3:18 PM
		</div>
		<div class="comment_text"><p>Indeed, geocoding the addresses at first load and store them in a database is definitely the way to go.</p><p>As for display performance on the client, I strongly recommend markers clustering. There is a nice JS library to do that (<a href="http://disq.us/url?url=http%3A%2F%2Fgooglemapsapi.martinpearman.co.uk%2Freadarticle.php%3Farticle_id%3D4%29%3AjJK5KaMvzoCrrtr1iteluENQk-U&amp;cuid=3321886" rel="nofollow noopener" title="http://googlemapsapi.martinpearman.co.uk/readarticle.php?article_id=4)">http://googlemapsapi.martin...</a>.<br>But I don't know if you can integrate it with cfmap (we don't use it...). It might be a great addition to cfmap.</p><p>More info in this article :<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.svennerberg.com%2F2009%2F01%2Fhandling-large-amounts-of-markers-in-google-maps%2F%3AcWXnRZ6XP2MtwrO2SLlAVXR7dKs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.svennerberg.com/2009/01/handling-large-amounts-of-markers-in-google-maps/">http://www.svennerberg.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720517">6</a> by Raymond Camden
		posted on 12/16/2009 at 5:09 PM
		</div>
		<div class="comment_text"><p>Marko: Why move it to the client side if you can do it server side behind the scenes? I mean obviously - if the user _just_ entered the addresses, then you may need to, but if this is existing data, then I think it makes sense to do it server side as a background process.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720518">7</a> by Marko Simic
		posted on 12/16/2009 at 5:25 PM
		</div>
		<div class="comment_text"><p>Of course it strongly depends of scenario.<br>From your example, I understood that is a case of bulk of addresses that need to be processed. As rule of thumb I always look for the way to save server resources as much as possible. One of "few" options is to move workload on client. Of course, having in mind, not to jeopardize their experience.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720516">8</a> by Raymond Camden
		posted on 12/16/2009 at 5:28 PM
		</div>
		<div class="comment_text"><p>Ok, now thats an interesting argument. I'd try to push the work to the server and not the client. But yeah - it definitely depends.</p><p>My only issue with the processing on the client is - you only want to do it one time. So your client needs to send the geocoded data back to the server so it can be persisted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720521">9</a> by Joshua Cyr
		posted on 12/16/2009 at 6:19 PM
		</div>
		<div class="comment_text"><p>In my tests a few weeks ago I found between 9 and 11 map items where the max.  Since the data was just test data and there was an admin to add new records I just added the geocoding during the add/edit process.  Note that if you are going to to that you may also want to allow people to override the lat/long with their own.  Google isn't perfect at geolocation and since you already are storing lat/long giving the user ability to be more precise is easy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720522">10</a> by Marko Simic
		posted on 12/16/2009 at 6:52 PM
		</div>
		<div class="comment_text"><p>@Ray<br>Sure. After processing (all) addresses, client can send coords back to server in single request....IF user stay long enough on that page. Otherwise, result can be sent back one-by-one.</p><p>Pros and cons exist on both sides, but, god didn't gave us second generation of web (aka 2.0) for nothing :))</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720523">11</a> by John Allen
		posted on 12/16/2009 at 10:42 PM
		</div>
		<div class="comment_text"><p>Thank you very much for this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720524">12</a> by Mike Collins
		posted on 5/10/2010 at 6:51 PM
		</div>
		<div class="comment_text"><p>I am losing my cfmapitems when I use the srollwheel to zoom.  If I use the zoomcontrol + and - buttons , no issues.</p><p>Anyone else seeing this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720586">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720586">13</a> by Khurram
		posted on 6/30/2010 at 7:00 PM
		</div>
		<div class="comment_text"><p>Thank  Raymond, I got on the right place after searching for the same issue. I would maintain the the Longitude and Latitudes in my database of addresses.<br>But unfortunately I think riaforge has moved the Google Geocode API from the URL <a href="http://disq.us/url?url=http%3A%2F%2Fgooglegeocode.riaforge.org%2F%3ALt0F6RwCLY24Ztrp87EniLzuehA&amp;cuid=3321886" rel="nofollow noopener" title="http://googlegeocode.riaforge.org/">http://googlegeocode.riafor...</a> to some where else or may be they have just removed it.</p><p>Can I get it from else where<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720583">14</a> by Raymond Camden
		posted on 6/30/2010 at 7:04 PM
		</div>
		<div class="comment_text"><p>You want this: <a href="http://disq.us/url?url=http%3A%2F%2Fgooglegeocoder3.riaforge.org%2F%3AzlhifIRWROH6tIkwGKf_n1u7Jco&amp;cuid=3321886" rel="nofollow noopener" title="http://googlegeocoder3.riaforge.org/">http://googlegeocoder3.riaf...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720584">15</a> by Khurram
		posted on 6/30/2010 at 11:50 PM
		</div>
		<div class="comment_text"><p>^ Exactly, I wanted it. thanks a lot for your help :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720587">16</a> by Gareth
		posted on 3/28/2011 at 9:24 PM
		</div>
		<div class="comment_text"><p>Hi, I have managed to store my long and lats in a mysql db and call them to generate the cfmap items but still get this debug URL parameter error. Here is my code</p><p>&lt;cfquery name="qRecentEvents" datasource="funkadelicgrjk24"&gt;<br>SELECT *<br>FROM tblbookings<br>WHERE tblbookings.bookingDate &lt; now()<br>AND tblbookings.bookinglatitude != ""<br>AND tblbookings.bookinglongitude  != ""<br>AND tblbookings.bookingPostcode != ""<br>ORDER BY tblbookings.bookingDate DESC<br>LIMIT 0,20<br>&lt;/cfquery&gt;</p><p>&lt;cfajaximport params="#{googlemapkey='ABQIAAAADjCG_E_MrtI5RR9ca6jWaBRIIrxyUpiBF3OCcOJXxijgjehLExTdVid6CC1kqmSc2bcZFQYXpVADfg'}#"&gt;</p><p>&lt;cfmap name="gmap02" <br>width="600" height="350"<br>    centeraddress="Birkenhead, Wirral, Merseyside, UK" <br>    doubleclickzoom="false" <br>    overview="false" <br>    scrollwheelzoom="true" <br>    showscale="false" <br>    tip="My Map" <br>    zoomlevel="9"&gt;</p><p>      &lt;cfloop query="qRecentEvents"&gt;<br>&lt;cfmapitem name="#qRecentEvents.bookingID#" <br>    address="#qRecentEvents.bookinglatitude#, #qRecentEvents.bookinglongitude#" <br>    tip="#qRecentEvents.bookingAddressLine1#, #LSDateFormat(qRecentEvents.bookingDate, "ddd, mmmm dd, yyyy")#"/&gt;<br>        &lt;/cfloop&gt;</p><p>&lt;/cfmap&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720585">17</a> by Raymond Camden
		posted on 3/28/2011 at 9:34 PM
		</div>
		<div class="comment_text"><p>You are passing an address, which even though is a long/lat, your asking Google to geolocate it. Use the longtiude/latitude attributes instead. (See reference for cfmapitem.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720588">18</a> by Gareth
		posted on 3/28/2011 at 9:51 PM
		</div>
		<div class="comment_text"><p>Superstar! Cheers Ray</p></div>
	</div>
</div>
		