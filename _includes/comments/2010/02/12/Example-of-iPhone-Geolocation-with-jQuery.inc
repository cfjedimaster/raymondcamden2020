
<div class="comment" id="c_1713721979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721979">1</a> by Kit Brandner
		posted on 2/13/2010 at 4:40 AM
		</div>
		<div class="comment_text"><p>Great example... for the jQuery thing, I think insertAfter() would work:</p><p>$("Location: &lt;input type='text' /&gt;").insertAfter("#term")</p><p>Or insertBefore() the searchButton...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721977">2</a> by Scott P
		posted on 2/13/2010 at 5:17 AM
		</div>
		<div class="comment_text"><p>To add support for android - add this at top:</p><p>&lt;script type="text/javascript" src="<a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fapis%2Fgears%2Fgears_init.js%3A1RV_dwjawy1uAvKf3Pwv0MgxIII&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/apis/gears/gears_init.js">http://code.google.com/apis...</a>"&gt;&lt;/script&gt;</p><p>Then make this change to the javascript:</p><p>$(document).ready(function() {<br>     if (<a href="http://disq.us/url?url=http%3A%2F%2Fwindow.google%3ApZEkuk3RdcKA5SZstft8Qj_cpKY&amp;cuid=3321886" rel="nofollow noopener" title="window.google">window.google</a> &amp;&amp; google.gears){<br>    		$("#results").html("&lt;i&gt;Locating you...&lt;/i&gt;")<br>	        gps = google.gears.factory.create('beta.geolocation');<br>            gps.getCurrentPosition(function (position){<br>	           foundLocation(position);<br>            }) <br>		}</p><p>	else {<br>		if (navigator.geolocation == null) <br>			noLocation()<br>		else {<br>			$("#results").html("&lt;i&gt;Locating you...&lt;/i&gt;")<br>			navigator.geolocation.getCurrentPosition(foundLocation, noLocation) <br>			}	<br>		}</p><p>I sent Ray the file if the comments don't handle this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721981">3</a> by Adam
		posted on 2/13/2010 at 6:34 AM
		</div>
		<div class="comment_text"><p>^Scott P - hmm, interesting, doesn't look like Ray's added that code yet but on my Android it still ask's if I want to allow my location to be used, how's that working then? (No results are returned, but then even if I try it in a browser and enter my UK lat&amp;long I get NY pizza results, so I'm guessing something else may be up)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721978">4</a> by Raymond Camden
		posted on 2/13/2010 at 7:08 AM
		</div>
		<div class="comment_text"><p>@Kit: I'll try that next time. I knew there was a way.</p><p>@ScottP: Interesting. Query - why "<a href="http://disq.us/url?url=http%3A%2F%2Fwindow.google%3ApZEkuk3RdcKA5SZstft8Qj_cpKY&amp;cuid=3321886" rel="nofollow noopener" title="window.google">window.google</a>" and "google.gears"? Could you shorten it to window.google.gears != null or some such?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721985">5</a> by Adam
		posted on 2/13/2010 at 7:12 AM
		</div>
		<div class="comment_text"><p>Just did a quick Google and found these jQuery plugins...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fp%2Fjquery-geolocation%2F%3Acq5fhelwefkGpTy2T5NbeEf29xI&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/p/jquery-geolocation/">http://code.google.com/p/jq...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fgithub.com%2Ffabiant7t%2FjQuery-Geolocator-Plugin%3Acqn0kgAfMmUgHoODY-p3cQBvpWM&amp;cuid=3321886" rel="nofollow noopener" title="http://github.com/fabiant7t/jQuery-Geolocator-Plugin">http://github.com/fabiant7t...</a></p><p>...both of which seem to also work fine on my Android without any specific google code being called or tested for, so looks like navigator.geolocation is compatible with both iPhone &amp; Android (anyone confirm?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721980">6</a> by Raymond Camden
		posted on 2/13/2010 at 7:19 AM
		</div>
		<div class="comment_text"><p>Is there an Android simulator?</p><p>Btw - dumb question - but "Android" is a generic term, right? For a bunch of phones? Like the new Nexus One?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721982">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721982">7</a> by Scott P
		posted on 2/13/2010 at 7:20 AM
		</div>
		<div class="comment_text"><p>@adam - no clue, mine didn't work until I added that.  I'm on stock droid eris.</p><p>@ray <a href="http://disq.us/url?url=http%3A%2F%2Fdeveloper.android.com%2Fguide%2Fdeveloping%2Ftools%2Femulator.html%3ArHLgddfdrtUpt8NraLEiIoelxQs&amp;cuid=3321886" rel="nofollow noopener" title="http://developer.android.com/guide/developing/tools/emulator.html">http://developer.android.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721986">8</a> by Scott P
		posted on 2/13/2010 at 7:24 AM
		</div>
		<div class="comment_text"><p>ray - the sdk is here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fdeveloper.android.com%2Fguide%2Findex.html%3Av_nFbpPas0pg5UPls6JSyUDPCKc&amp;cuid=3321886" rel="nofollow noopener" title="http://developer.android.com/guide/index.html">http://developer.android.co...</a></p><p>Android is the operating system, several phones run it.<br><a href="http://disq.us/url?url=http%3A%2F%2Fen.wikipedia.org%2Fwiki%2FAndroid_%28operating_system%29%3AFfF9gU10E5TA5Hdub5RxDAdLXwU&amp;cuid=3321886" rel="nofollow noopener" title="http://en.wikipedia.org/wiki/Android_(operating_system)">http://en.wikipedia.org/wik...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721983">9</a> by Adam
		posted on 2/13/2010 at 7:27 AM
		</div>
		<div class="comment_text"><p>@Ray - as Scott linked to, grab the SDK (which uses Eclipse so you should feel fairly at home) and the emulator comes with it. And yeah Android is Googles mobile OS, so Nexus 1, bunch of recent HTC phones, upcoming Dell Mini 5 etc... many more to come this year.</p><p>@Scott - I'm on a G2 with a hacked 2.1 rom, so maybe it's new in the latest updates?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721984">10</a> by Adam
		posted on 2/13/2010 at 7:30 AM
		</div>
		<div class="comment_text"><p>ahh, just noticed on the wikipedia page, 2.1 brought 'New browser UI and HTML5 support' ... that may be it.<br>(sorry to hijack your iPhone thread Ray :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721989">11</a> by Scott P
		posted on 2/13/2010 at 7:31 AM
		</div>
		<div class="comment_text"><p>yeah - iPhone is dead platform.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721991">12</a> by aaron
		posted on 2/13/2010 at 11:34 AM
		</div>
		<div class="comment_text"><p>Try using jQuery's before() and after() instead of append() or prepend() so you can have your button inside of the form.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721988">
	<div>
		<img src="https://disqus.com/api/users/avatars/Roverwolf.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721988">13</a> by Roverwolf
		posted on 2/13/2010 at 11:14 PM
		</div>
		<div class="comment_text"><p>If one uses this type of thing then it is usually nice to allow the user a chance to correct the location.</p><p>My iPod Touch seems to claim that it is in Washington DC when I am actually on the west coast.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721987">14</a> by jeremy
		posted on 2/13/2010 at 11:41 PM
		</div>
		<div class="comment_text"><p>This was very helpful. Exactly what I needed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721990">15</a> by Raymond Camden
		posted on 2/13/2010 at 11:44 PM
		</div>
		<div class="comment_text"><p>@David: Yeah, good point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721997">16</a> by Ben Nadel
		posted on 2/15/2010 at 9:56 PM
		</div>
		<div class="comment_text"><p>That is very cool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721996">17</a> by Henry Cox
		posted on 3/30/2010 at 9:31 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>Maybe I am missing something here, but, with I assume developers aiming for compatibility across all OS's don't most mobile devices support ECMAScript X. Is this above, with the additional comments, intended because these mobile devices don't support the ECMAScript standard, i.e., javascript Location Object. Thanks<br>Henry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721998">18</a> by Raymond Camden
		posted on 3/30/2010 at 9:59 PM
		</div>
		<div class="comment_text"><p>I'm afraid I don't get what you are saying. Do you have a URL for the JS Location object? I'm only aware of document.location.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721999">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721999">19</a> by Henry Cox
		posted on 3/30/2010 at 10:06 PM
		</div>
		<div class="comment_text"><p>Sorry about that. Don't all(or most current) mobile devices, that are equipped with Browsers, support javascript, therefore, the location can be determined through javascript's Location object and the device's hardware? <br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722008">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722008">20</a> by Raymond Camden
		posted on 3/30/2010 at 10:12 PM
		</div>
		<div class="comment_text"><p>What Location object though? That's the question I'm asking. I know of document.location, which is the URL object, but what do you mean? A URL reference would be handy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722007">21</a> by Jon Hayes
		posted on 6/9/2010 at 8:56 AM
		</div>
		<div class="comment_text"><p>Hi Ray, Banging my head on a table..... <br>In my hack of this script I am trying to send the <br>data.latitude = lat<br>data.longitude = long <br>to a cfc to set client.latitude in order to locate a user on a map as per Adam Tuttles solution for setting client variables on <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F537057%2Fassign-coldfusion-client-variables-using-javascript%3AMt1l1ZVkffCLrdIU7JrmZxlgLXs&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/537057/assign-coldfusion-client-variables-using-javascript">http://stackoverflow.com/qu...</a></p><p>Please please with candy on top can you help me figure out how to send the location data to my ClientFacade.cfc so I can pass the location data around my app! Thanks in advance...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722012">22</a> by Raymond Camden
		posted on 6/9/2010 at 4:21 PM
		</div>
		<div class="comment_text"><p>Once you have the long/lat, you simply make the Ajax request. Look at his <a href="http://disq.us/url?url=http%3A%2F%2FsetValue.click%3AO2RtQJKKDih9Nt4DqogAlIMAu5g&amp;cuid=3321886" rel="nofollow noopener" title="setValue.click">setValue.click</a> function. Notice the $.getJSON function. That performs the Ajax request. Just use that portion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722010">23</a> by Jon Hayes
		posted on 6/10/2010 at 6:57 AM
		</div>
		<div class="comment_text"><p>ack. still trying. the cfc setting is working... I just can't seem to see how to write the json my code is (using google gears for development purposes here - my iphone 3g is definitely not that quick loading (I want a Droid... :) ):</p><p>var geo = google.gears.factory.create('beta.geolocation');<br>						var latitude = {"mylatobject": function updatePosition(position) {<br>						  (position.latitude);<br>						}<br>						};</p><p>                $.getJSON(<br>                        'clientFacade.cfc',<br>                        {<br>                          method:"set",<br>                          returnFormat:"json",<br>                          name:"foo",<br>                          "val":valu,<br>			 "mylat":latitude<br>                        },</p><p>basically my results are always 'undefined'... :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722006">24</a> by Raymond Camden
		posted on 6/10/2010 at 6:59 AM
		</div>
		<div class="comment_text"><p>Can you show us the entire code - or point us to the url?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722009">25</a> by Jon Hayes
		posted on 6/10/2010 at 7:20 AM
		</div>
		<div class="comment_text"><p>The blog keeps flagging me as spam when I try to paste the code so I replied to your comments notification email address</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.environmental.ly%2Fmycomponents%2Ft2.cfm%3ACLx473U7ReYt5rwnDi1TEi-sL_w&amp;cuid=3321886" rel="nofollow noopener" title="http://www.environmental.ly/mycomponents/t2.cfm">http://www.environmental.ly...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722011">26</a> by Raymond Camden
		posted on 6/10/2010 at 4:54 PM
		</div>
		<div class="comment_text"><p>Wow - your code is seriously messed up. :) I see the JS, then I see a copy of it outside of a script block (well there is a closing script block). Did you mispaste something? Also, I never saw my Long/Lat. Job one is to ensure that part works -then look into making it set and getting get to work.</p></div>
	</div>
</div>
		