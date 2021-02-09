
<div class="comment" id="c_1713721278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721278">1</a> by Sam Farmer
		posted on 1/19/2010 at 10:54 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Cool find to get the directions.</p><p>I played around a bit with the ajaxOnLoad and ExtJS.  Your right that the ajaxOnLoad will wait till the document is really ready since that is dependent on ExtJS (as is every CF ajax feature) I thought I would try and do it with ExtJS instead of jQuery.</p><p>Its pretty similar all in:</p><p>Ext.onReady(function(){</p><p>	Ext.get('doDirections').on( 'click', function() {<br>		youraddy=Ext.get('youraddress').getValue();<br>		if(youraddy == '') return<br>		console.log('Directions from '+youraddy)<br>		var mapOb = ColdFusion.Map.getMapObject("themap")<br>		var dir = new GDirections(mapOb, document.getElementById('result'))<br>		&lt;cfoutput&gt;<br>		dir.load("from: "+youraddy +" to: #theAddress#")<br>		&lt;/cfoutput&gt;<br>		console.log('done')<br>	});<br>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721275">2</a> by Raymond Camden
		posted on 1/19/2010 at 11:03 PM
		</div>
		<div class="comment_text"><p>Wow, that's so .... not jQuery. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721268">3</a> by Sam Farmer
		posted on 1/19/2010 at 11:18 PM
		</div>
		<div class="comment_text"><p>Heh ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721271">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721271">4</a> by Sebastiaan
		posted on 1/21/2010 at 1:03 PM
		</div>
		<div class="comment_text"><p>Hi Ray, this demo doesn't work for me in Opera 10.10 Pressing the button doesn't deliver any directions at all... Maybe it's a US-only demo? I typed in Utrecht, the Netherlands and nothing happened ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721266">5</a> by Raymond Camden
		posted on 1/21/2010 at 5:22 PM
		</div>
		<div class="comment_text"><p>Does it work in Firefor or Chrome? Does it work if you use the default address?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721280">6</a> by Sebastiaan
		posted on 1/21/2010 at 7:44 PM
		</div>
		<div class="comment_text"><p>Doesn't work in Opera 10.10, FF 3.5.7 or IE7 on XP... In Safari and Chrome I get results from the default address.</p><p>In IE7 I get the following error: Line 31, Char 3, 'console' is undefined.</p><p>FF gives me a ton of CSS-errors in ext-all.css that ships with the CF AJAX-scripts though..., and the error all the way at the bottom that console is not defined. Hence no results there either</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721279">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721279">7</a> by Raymond Camden
		posted on 1/21/2010 at 7:45 PM
		</div>
		<div class="comment_text"><p>Oh shoot - jsut remove the console.log lines. I always forget that in. It requires Firebug in FF, or Safari/Chrome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721281">8</a> by Sebastiaan
		posted on 1/21/2010 at 7:58 PM
		</div>
		<div class="comment_text"><p>OK, so I need to remove the console lines to make it work in any browser..., and CF9 of course ;-)</p><p>Darn, we just moved to CF8 last year, don't think they'll move to CF9 any time soon...</p><p>Maybe Railo 3.2 or higher (the version coming after Barry) will have this in it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721282">9</a> by Raymond Camden
		posted on 1/21/2010 at 8:00 PM
		</div>
		<div class="comment_text"><p>I can't speak to Railo, but you can obviously use Google Maps in CF8. You just need to do it manually. If folks want a CF based demo of that, just ask.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721290">10</a> by Denato
		posted on 6/28/2010 at 6:47 PM
		</div>
		<div class="comment_text"><p>Hey Ray, did you ever make a CF8 Demo of this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721291">11</a> by Raymond Camden
		posted on 6/28/2010 at 7:11 PM
		</div>
		<div class="comment_text"><p>No, my thinking was to do a blog post on how to do maps in CF without using CFMap. Basically a simple tutorial that is CF based.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721294">12</a> by Denato
		posted on 6/28/2010 at 8:35 PM
		</div>
		<div class="comment_text"><p>Thanks Ray,</p><p>if you have time, I would be interested in a tutorial for this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721295">13</a> by Raymond Camden
		posted on 6/28/2010 at 8:38 PM
		</div>
		<div class="comment_text"><p>I've got it on my list. If you check the Google docs - it really isn't that hard - but obvious it isn't ColdFusion specific.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721293">14</a> by JC
		posted on 2/9/2011 at 10:51 PM
		</div>
		<div class="comment_text"><p>Has Google changed something with the API?  The button in the demo doesn't do anything for me with Firefox.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721296">15</a> by Raymond Camden
		posted on 2/9/2011 at 10:53 PM
		</div>
		<div class="comment_text"><p>Worked for me. Do you have Firebug installed? If not, it won't work. I make use of console.log messages in my demos. Or you can try Chrome/Safari wich has console built in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721297">16</a> by JC
		posted on 2/9/2011 at 11:00 PM
		</div>
		<div class="comment_text"><p>Ah, yep.  It worked when I turned on Firebug.  However, my users won't have it...is there a way to do it without Firebug?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721298">17</a> by Raymond Camden
		posted on 2/9/2011 at 11:05 PM
		</div>
		<div class="comment_text"><p>The console.log messages are just for the demo. They are debug messages. You can remove them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721302">18</a> by DSW
		posted on 2/10/2012 at 11:57 AM
		</div>
		<div class="comment_text"><p>Thanks so much for this resource - it is going to add value to our new site and I did not have to spent the time trying to learn how to do it.</p><p>I notice that you have used ".click(function()" to generate the directions. I am new to all of this but want to be able to display directions when the page loads and / or when a link in a markerWindowContent is selected.</p><p>Any guidance in this would be greatly appreciated!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721299">19</a> by Raymond Camden
		posted on 2/10/2012 at 6:45 PM
		</div>
		<div class="comment_text"><p>You can run code on page load, in jQuery anyway, within:</p><p>$(document).ready()</p><p>You can see I have that already. So basically, the .click handler would be removed - the meat of it would be kept though so it just plain runs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721310">20</a> by DSW
		posted on 2/11/2012 at 10:50 AM
		</div>
		<div class="comment_text"><p>Thanks for your time Raymond - I gave it a bash (well to the best of my jQuery ability!) below is what I tried, (which does not work) pleascould you show me what you mean?</p><p>&lt;script&gt;<br>$(document).ready(function() {</p><p>        var youraddy = $.trim($("#searchaddress").val())<br>        if(youraddy == '') return<br>        console.log('Directions from '+youraddy)<br>        var mapOb = ColdFusion.Map.getMapObject("themap")<br>        var dir = new GDirections(mapOb, document.getElementById('result'))<br>        &lt;cfoutput&gt;<br>        dir.load("from: "+youraddy +" to: #theAddress#")<br>        &lt;/cfoutput&gt;<br>        console.log('done')</p><p>})<br>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721300">21</a> by Raymond Camden
		posted on 2/11/2012 at 6:52 PM
		</div>
		<div class="comment_text"><p>Ah sorry - brain fart on my part. The code requires a search address, so having it run _immediately_ doesn't make sense. It has to run when you have a value for the address. Unless you want to use Geolocation and get the user's address automatically.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721311">22</a> by DSW
		posted on 2/12/2012 at 11:25 AM
		</div>
		<div class="comment_text"><p>Currently the users address on my site is being stored in a session so I have that data when the page loads.. I just cant get your code to show the directions without the doDirections being clicked - hope you can help me out! (the geolocation would be funky too! just not sure if it is accurate enough where I am in Africa)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721303">23</a> by Raymond Camden
		posted on 2/12/2012 at 9:18 PM
		</div>
		<div class="comment_text"><p>My code assumes the address value comes from a form field. If you have it in the session, then you would want to output it dynamically when you generate the page. You can use the toScript function to generate a valid JS variable from CF.</p><p>That make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721312">24</a> by DSW
		posted on 2/13/2012 at 2:31 PM
		</div>
		<div class="comment_text"><p>Thanks for you time... yeah it does make sense - thank you. I am working away like crazy trying to finish other elements of the site right now - but will come back and look at this in more detail when I have the rest of it working - thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721305">25</a> by Misty
		posted on 2/25/2012 at 5:25 PM
		</div>
		<div class="comment_text"><p>Hi ray, i tried ur same example within cfwindow, it is not working, i tried the same in separate window, it works.</p><p>i also added one alert after 1 click the btn to show me the directions but it does not fire that alert too, any idea</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721306">26</a> by Raymond Camden
		posted on 2/26/2012 at 3:14 AM
		</div>
		<div class="comment_text"><p>Well, how is it not working? You didn't say.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721304">27</a> by Misty
		posted on 2/27/2012 at 12:46 PM
		</div>
		<div class="comment_text"><p>It is not firing the onclick event i just added alert after the $("#doDirections").click</p><p>but the alert did not fired up, i even included the jquery code, but no sure, i can shar the online link too, if needed, let me know</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721307">28</a> by Raymond Camden
		posted on 2/27/2012 at 9:03 PM
		</div>
		<div class="comment_text"><p>I guess share the online link so we can view source. Please remember how your event handlers work in jQuery. If you do</p><p>$("something").click</p><p>Then jQuery looks in the DOM _right_ then. If it can't find it, it does nothing.</p><p>If your cfwindow is pointing it's content to another file, then it's possible that is your issue. You can use jQuery's on method to bind in such a way that it would work post page DOM loaded (if that makes sense).</p><p>We are now getting into a level of tech support where I may have to push back on you a bit and ask about a consulting agreement. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721309">29</a> by Misty
		posted on 2/29/2012 at 1:16 AM
		</div>
		<div class="comment_text"><p>Have a look @</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ftinyurl.com%2F774vzp6%3A62fcU6gC_lZI3jzviP1jm4p6KeA&amp;cuid=3321886" rel="nofollow noopener" title="http://tinyurl.com/774vzp6">http://tinyurl.com/774vzp6</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721313">30</a> by Raymond Camden
		posted on 2/29/2012 at 3:00 AM
		</div>
		<div class="comment_text"><p>Omg I hate you for making me look at food. Ok, going back...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721314">31</a> by Raymond Camden
		posted on 2/29/2012 at 3:27 AM
		</div>
		<div class="comment_text"><p>You need to move your script logic inside your main file, clone.cfm, or within a JS file included. Your code is not working because when cfwindow loads the remote content, it is ignoring your script block.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721315">32</a> by Misty
		posted on 2/29/2012 at 5:31 PM
		</div>
		<div class="comment_text"><p>Hi Ray, Even after the moving the code to the main page, this still does not work. you can view the same link, updated now.</p><p>also, Explian me your this point, DOm already gets loaded,</p><p>If your cfwindow is pointing it's content to another file, then it's possible that is your issue. You can use jQuery's on method to bind in such a way that it would work post page DOM loaded (if that makes sense).</p><p>cfwindow fetches content of another file drive.cfm</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721316">33</a> by Raymond Camden
		posted on 2/29/2012 at 5:41 PM
		</div>
		<div class="comment_text"><p>Yeah, you want to switch to using .on instead of .click.</p><p>$("#doDirections").click(function() {</p><p>should be</p><p>$("#doDirections").on("click",function() {</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721317">34</a> by malikGee
		posted on 7/9/2012 at 9:49 PM
		</div>
		<div class="comment_text"><p>i don't know why is not working for me.<br>Please give a short explaination for it.<br>I am in very trouble</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721318">35</a> by Raymond Camden
		posted on 7/9/2012 at 9:53 PM
		</div>
		<div class="comment_text"><p>I can't really help you unless you provide more information. Can you describe where it is failing? What browser - or all browsers? Is it online where I can see?</p></div>
	</div>
</div>
		