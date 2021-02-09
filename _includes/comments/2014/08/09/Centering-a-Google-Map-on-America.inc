
<div class="comment" id="c_1714083700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083700">1</a> by Robert
		posted on 8/9/2014 at 9:44 PM
		</div>
		<div class="comment_text"><p>That second result must be the result of continental drift! <a href="https://disq.us/url?url=https%3A%2F%2Fen.wikipedia.org%2Fwiki%2FContinental_drift%3AgwEwae6gWV9oVXIxG0DVDXu1aTY&amp;cuid=3321886" rel="nofollow noopener" title="https://en.wikipedia.org/wiki/Continental_drift">https://en.wikipedia.org/wi...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083707">2</a> by Ty Whalin
		posted on 8/9/2014 at 9:45 PM
		</div>
		<div class="comment_text"><p>I've played around a bit with this script and actually implemented it on several websites. The location of choice is good with me. Learned some new thing's from you as usual. You definitely helped connect the dots on several thing's. I created the same code and placed it into a CF file for inclusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083703">3</a> by Philip
		posted on 8/10/2014 at 5:59 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>apologies up front for the shameless self-promotion. I'm the product manager for the HERE Geocoder and I stumbled across your post. In HERE Geocoder we're offering a map view bounding box as part of the response. I wonder whether that would help solve your problem better. You could scale the map display with the screen size and still ensure America is fully visible.<br>Here is an example of the response and the API call:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fgeocoder.cit.api.here.com%2F6.2%2Fgeocode.json%3Faddressattributes%3Dall%26gen%3D5%26jsonattributes%3D1%26language%3Den-US%26locationattributes%3Dall%26maxresults%3D20%26responseattributes%3Dall%26searchtext%3Dusa%26app_id%3DDemoAppId01082013GAL%26app_code%3DAJKnXv84fjrb0KIHawS0Tg%3AeijkWyuNP0VG2AzHSiEKRgSiIAk&amp;cuid=3321886" rel="nofollow noopener" title="http://geocoder.cit.api.here.com/6.2/geocode.json?addressattributes=all&amp;gen=5&amp;jsonattributes=1&amp;language=en-US&amp;locationattributes=all&amp;maxresults=20&amp;responseattributes=all&amp;searchtext=usa&amp;app_id=DemoAppId01082013GAL&amp;app_code=AJKnXv84fjrb0KIHawS0Tg">http://geocoder.cit.api.her...</a></p><p>{<br>   relevance: 1,<br>   matchLevel: "country",<br>   matchQuality: {<br>      country: 1<br>   },<br>   location: {<br>      locationId: "02wVnFKLeuA57le7GuahvD",<br>      locationType: "area",<br>      displayPosition: {<br>         latitude: 38.89037,<br>         longitude: -77.03196<br>      },<br>      navigationPosition: [<br>         {<br>            latitude: 38.89037,<br>            longitude: -77.03196<br>         }<br>      ],<br>      mapView: {<br>         topLeft: {<br>            latitude: 49.3845,<br>            longitude: -124.749<br>         },<br>         bottomRight: {<br>            latitude: 24.5018,<br>            longitude: -66.9406<br>         }<br>      },<br>      address: {<br>         label: "United States",<br>         country: "USA",<br>         additionalData: [<br>            {<br>               value: "United States",<br>               key: "CountryName"<br>            }<br>         ]<br>      },<br>      mapReference: {<br>         mapVersion: "Q2/2014",<br>         countryId: "21000001"<br>      }<br>   },<br>   matchCode: "exact"<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083708">4</a> by Raymond Camden
		posted on 8/10/2014 at 6:56 PM
		</div>
		<div class="comment_text"><p>First off - nope - I don't mind you mentioning your product, especially since you were honest about it. ;)</p><p>I dont believe - however - that my issue was with the bounding box per se. I just wanted to center on America and wanted the quickest solution for that. Which to me was to Geocode *once* and copy the values. I'll point out that the Google Geocde API also does this for results. (I forget the name though - they don't call it a bounding box but it has a similar result.) Although your JSON looks to be a lot more clearer about it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083705">5</a> by Philip
		posted on 8/11/2014 at 6:25 PM
		</div>
		<div class="comment_text"><p>Thanks for your feedback Raymond. I was thinking a mapView maybe helpful in getting the zoom level right.<br>And since our service sets the display coordinate for the USA into the center of Washington DC, I thought maybe Google does the same. But you are right, the have what they call a "viewport" and this is similar to our mapView. And their display coordinate is actually centered, somewhere in Kansas.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083706">6</a> by Thomas
		posted on 8/13/2014 at 11:39 PM
		</div>
		<div class="comment_text"><p>Could it be that the difference comes from 39°50"N 98°35W is not 39,5 and -98,35 but rather 39+50/60 and -98-35/60?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083704">7</a> by Raymond Camden
		posted on 8/13/2014 at 11:42 PM
		</div>
		<div class="comment_text"><p>Probably. :) How would you have changed 39/50 to decimal?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083711">8</a> by Thomas
		posted on 8/14/2014 at 10:09 AM
		</div>
		<div class="comment_text"><p>I think there are 60 minutes to 1 degree, and 60 seconds to 1 minute (cf. <a href="http://disq.us/url?url=http%3A%2F%2Fastro.unl.edu%2Fnaap%2Fmotion1%2Ftc_units.html%29%3AA-dZm8aEfAPupQS07Eib1IE0AV0&amp;cuid=3321886" rel="nofollow noopener" title="http://astro.unl.edu/naap/motion1/tc_units.html)">http://astro.unl.edu/naap/m...</a><br>Therefore, 39°50"N should be 39+50/60 which is about 39,833 and 98°35"W should be -98-35/60 which is about -98,583 (reading further down in the Wikipedia article you cite for the location, you'll find: "Modern methodology has identified the location as Latitude 39.828127, Longitude -98.579404") which is almost exactly the values obtained when converting the long/lat to decimal. HTH :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083712">9</a> by Raymond Camden
		posted on 8/14/2014 at 2:59 PM
		</div>
		<div class="comment_text"><p>Ah that does make sense. Thanks. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083720">10</a> by Ty Whalin
		posted on 8/15/2014 at 9:55 AM
		</div>
		<div class="comment_text"><p>Glad I took a look at the page you posted a link too Thomas. Had no clue about the conversion method used above...</p></div>
	</div>
</div>
		