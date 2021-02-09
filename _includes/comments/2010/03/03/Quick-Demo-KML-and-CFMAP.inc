
<div class="comment" id="c_1713722280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722280">1</a> by John Sieber
		posted on 3/4/2010 at 10:08 AM
		</div>
		<div class="comment_text"><p>Great to see this example as it is something I was hoping to do. I have some .kml files that I would like to display but I'm a still a little confused when trying to do this with my own files. In the countykml variable as an example, can the url point directly to a hosted kml file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722281">2</a> by Raymond Camden
		posted on 3/4/2010 at 5:13 PM
		</div>
		<div class="comment_text"><p>I think so. But you have to ensure your web server is set up to serve the KML file correctly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722282">3</a> by RickZ
		posted on 3/4/2010 at 7:08 PM
		</div>
		<div class="comment_text"><p>Hi John, yes, it can point directly to a hosted file. Like Ray said, you have to make sure that whatever webserver you're using is set-up with the correct mime-type for KML. For example, in Apache you'd add the following to your .htaccess file:</p><p>AddType application/<a href="http://disq.us/url?url=http%3A%2F%2Fvnd.google%3AlJJVu40MGFtkSOepX0VtAHNav_w&amp;cuid=3321886" rel="nofollow noopener" title="vnd.google">vnd.google</a>-earth.kml+xml    kml</p><p>We use IIS and it's equally simple to add the correct mime-type.</p><p>You also need to make sure that your server is capable of back and forth communication with Google Maps. On our webstage server we were unable to map anything until we actually NAT'ed it out with a public domain.</p><p>Thanks Ray for your help and for posting this!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722284">4</a> by Michael De Jonghe
		posted on 3/5/2010 at 3:23 AM
		</div>
		<div class="comment_text"><p>Very cool.</p><p>I've been trying to get cfmap to do "larger custom icons" and had some success... but the cfmap and my javascript LatLng don't match up because CF throws an error when it sees a CENTERLONGITUDE greater than -90.0.  WHAT??</p><p>Try this bit...</p><p>&lt;cfmap width="900" height="800" centerlatitude="34.0000" centerlongitude="-118.0000"  zoomlevel="13" name="map" showcentermarker="no"&gt;    <br>&lt;/cfmap&gt;</p><p>That should be the center of Los Angeles California... it's a small town maybe CF hasn't heard about it yet.</p><p>Any ideas for the readers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722285">5</a> by Raymond Camden
		posted on 3/5/2010 at 3:26 AM
		</div>
		<div class="comment_text"><p>That's a known bug. I'd use an address for now, not a long/lat pair.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722289">6</a> by Michael De Jonghe
		posted on 3/5/2010 at 3:50 AM
		</div>
		<div class="comment_text"><p>I figured out the Longitude error.  CF seems to be using a 360 degree approach.</p><p>Simply add the negative Longitude from 360 and you'll get the positive number you need to make CFMap work.</p><p>&lt;cfset lng = -118.0000&gt;<br>&lt;cfif lng lt 0&gt;<br>	&lt;cfset lng = (360 + lng)&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfmap width="900" height="800" centerlatitude="34.0000" centerlongitude="#lng#"  zoomlevel="8" name="map" showcentermarker="yes"&gt;    <br>&lt;/cfmap&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722291">7</a> by John Sieber
		posted on 3/5/2010 at 6:17 AM
		</div>
		<div class="comment_text"><p>Thanks Ray and Rick,<br>Adding the mime type to my server made it work. Thanks for sharing this!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722286">8</a> by John Sieber
		posted on 3/5/2010 at 9:27 AM
		</div>
		<div class="comment_text"><p>One other item, if you need to show .gpx files as overlays you can add a mime type for gpx files and they will display as well. This will save me the step of converting my .gpx files to .kml.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722290">9</a> by RickZ
		posted on 3/5/2010 at 7:24 PM
		</div>
		<div class="comment_text"><p>Michael- We bumped into that same issue and came up with an identical workaround. Unfortunate, but a small hiccup in an otherwise incredibly easy to use way of incorporating Google Maps.</p><p>John - I'm glad that we were able to help out. That's awesome that it works with other overlay types beyond KML. I searched all over for some reference to doing this and never really found anything. Ray pointed me in the right direction of experimenting with using the standard Google Maps API functions. It never even dawned on me that it would be that simple. The only caveat was that I had to declare the setCenter in the javascript. Leaving that out throws a an error in Firebug and prevents it from adding more than one map layer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722287">10</a> by theresa Valentine
		posted on 5/21/2011 at 12:55 AM
		</div>
		<div class="comment_text"><p>I've been trying to add a KML file to my application, and I can't see to get the KML file to draw using cold fusion tags.  The kml file is ok, as I get it to draw in other apps.</p><p>&lt;script&gt;<br>//&lt;![CDATA[<br>function AddKMLOverlay(){</p><p>	var map = ColdFusion.Map.getMapObject("myMap");<br>	 map.setCenter(new google.maps.LatLng(44.212,-122.256), 13);<br>     map.setZoom(13);</p><p> var boundKML = new GGeoXml("<a href="http://disq.us/url?url=http%3A%2F%2Fandrewsforest.oregonstate.edu%2Fdata%2Fspatial%2Fkml%2Fbound_line.kml%3AScOL_rynhAgh7ygIpFh34zULqto&amp;cuid=3321886" rel="nofollow noopener" title="http://andrewsforest.oregonstate.edu/data/spatial/kml/bound_line.kml">http://andrewsforest.oregon...</a>");<br>	map.addOverlay(boundKML); <br>    }<br>function initialize() {<br>  AddKMLOverlay();<br>}<br>//]]&gt;  <br>&lt;/script&gt;</p><p>&lt;table&gt;<br>&lt;cfoutput&gt;<br>&lt;h1&gt;#dbcode#&lt;/h1&gt;<br>&lt;/cfoutput&gt;<br>&lt;tr&gt;&lt;td&gt;<br>&lt;cfmap width="680" height="400" centerlatitude="44.212" centerlongitude="-122.256" zoomlevel="9" typecontrol="advanced"  name="myMap"&gt;<br>&lt;/cfmap&gt;<br>&lt;/td&gt;&lt;/tr&gt;<br>&lt;/table&gt;<br> &lt;cfset ajaxOnLoad("initialize")&gt;</p><p>any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722283">11</a> by Raymond Camden
		posted on 5/21/2011 at 12:56 AM
		</div>
		<div class="comment_text"><p>Is the URL to your KML file valid?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722292">12</a> by theresa Valentine
		posted on 5/21/2011 at 1:16 AM
		</div>
		<div class="comment_text"><p>yes.  I can get it to draw on when not using coldfusion tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722293">13</a> by Raymond Camden
		posted on 5/21/2011 at 1:18 AM
		</div>
		<div class="comment_text"><p>Do you mean if you don't use CFMAP and just use Google maps by itself?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722298">14</a> by theresa Valentine
		posted on 5/21/2011 at 2:06 AM
		</div>
		<div class="comment_text"><p>yes.  I am trying to generate markers from a database query.  I have one sample where I don't use cfmap and I can get the boundary and the markers, but the info windows all point to the same point (first record).  I can get the info window to work if I use cfmap, but then I can't get the boundary kml to show.  Sorry, my maps are behind firewall right now...<br>will see if I can get one working outside and post links.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722299">15</a> by theresa Valentine
		posted on 5/21/2011 at 2:17 AM
		</div>
		<div class="comment_text"><p>here is one that works for one place and one the boundary</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fandrewsforest.oregonstate.edu%2Fdata%2Fplace_include5.cfm%3Fdomain%3Dplace%26dbcode%3DAS006%26placeid%3D2941%26topnav%3D97%3A3t9vkzzpw84jB0goywZ8F5EFQ4Y&amp;cuid=3321886" rel="nofollow noopener" title="http://andrewsforest.oregonstate.edu/data/place_include5.cfm?domain=place&amp;dbcode=AS006&amp;placeid=2941&amp;topnav=97">http://andrewsforest.oregon...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722300">16</a> by theresa Valentine
		posted on 5/21/2011 at 2:42 AM
		</div>
		<div class="comment_text"><p>can't get it to work on our internet, as it's version 5 or so of CF.. and it doesn't like my tags..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722301">17</a> by Raymond Camden
		posted on 5/21/2011 at 5:51 AM
		</div>
		<div class="comment_text"><p>Not sure what to tell you. You said you are on CF5 - CFMAP won't work there for sure. You can definitely do Google Maps via the JS api though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722302">18</a> by theresa Valentine
		posted on 5/23/2011 at 8:24 PM
		</div>
		<div class="comment_text"><p>figured out the problem.  The script tag needed to be within the &lt;head&gt; tag for it to work.  <br>Just to clarify, our development site is on version 9 of CF, but our production site (old site) is on version 5.  I'll try and post a link when we go live with the new site.  Thanks to Aimee Lesieutre for figuring this out for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722304">19</a> by tdo
		posted on 11/2/2011 at 8:12 PM
		</div>
		<div class="comment_text"><p>any ideas on why this data won't work?  it just pulls up the map but without the overlay.</p><p>&lt;!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fxhtml1%2FDTD%2Fxhtml1-transitional.dtd%3AlsD79NC9EpzB4LCkih033Se6Csw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">http://www.w3.org/TR/xhtml1...</a>"&gt;<br>&lt;html xmlns="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2F1999%2Fxhtml%3AA6NInarpbzWm6HKZDXlFrwZefzc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/1999/xhtml">http://www.w3.org/1999/xhtml</a>"&gt;<br>&lt;head&gt;<br>&lt;meta http-equiv="Content-Type" content="text/html; charset=utf-8" /&gt;<br>&lt;title&gt;Google Maps KML Overlays&lt;/title&gt;</p><p>&lt;cfajaximport params="#{googlemapkey='ABQIAAAAyBqdTNCO82gdyPcdR94xEBQLxw0Tb61Zhdk6a1DqnmRS3wNprhS8v8KU4__Dlq7yiLtBm5L1kZJSpQ'}#"&gt;</p><p>&lt;script&gt;<br>//&lt;![CDATA[<br>function AddKMLOverlay() {</p><p>	var map = ColdFusion.Map.getMapObject("mainMap");<br>	map.setCenter(new google.maps.LatLng(33.710413, -117.951616), 9);<br>	map.setZoom(9);</p><p>	var NorthOC = new GGeoXml("<a href="http://disq.us/url?url=http%3A%2F%2Fmaps.google.com%2Fmaps%2Fms%3Fie%3DUTF%26msa%3D0%26msid%3D216180395329783550640.0004b0c21ce6bde263b17%3AkSAYXsAsrhFNEESC_Ux_Nq6lSRg&amp;cuid=3321886" rel="nofollow noopener" title="http://maps.google.com/maps/ms?ie=UTF&amp;msa=0&amp;msid=216180395329783550640.0004b0c21ce6bde263b17">http://maps.google.com/maps...</a>"); <br>	map.addOverlay(NorthOC);</p><p>}</p><p>function init() {<br>	AddKMLOverlay();<br>}<br>//]]&gt;<br>&lt;/script&gt;</p><p>&lt;/head&gt;</p><p>&lt;body&gt;</p><p>    &lt;table width="100%" height="100%"&gt;<br>    &lt;tr&gt;<br>      &lt;td align="center"&gt;<br>        &lt;table&gt;</p><p>          &lt;tr align="left" valign="top"&gt;<br>            &lt;td&gt;<br>               &lt;cfmap width="680" height="400" centeraddress="92708" zoomlevel="9" name="mainMap"&gt;    <br>               &lt;/cfmap&gt;<br>            &lt;/td&gt;<br>          &lt;/tr&gt;</p><p>        &lt;/table&gt;</p><p>      &lt;/td&gt;<br>    &lt;/tr&gt;<br>  &lt;/table&gt;</p><p>&lt;/body&gt;<br>&lt;/html&gt;<br>&lt;cfset ajaxOnLoad("init")&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722305">20</a> by Raymond Camden
		posted on 11/2/2011 at 8:19 PM
		</div>
		<div class="comment_text"><p>Not sure. My old demo still seems to work fine.</p></div>
	</div>
</div>
		