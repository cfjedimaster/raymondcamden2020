
<div class="comment" id="c_1713731440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731440">1</a> by JP
		posted on 4/6/2011 at 2:31 AM
		</div>
		<div class="comment_text"><p>Thanks Ray, I got it working on my jquery mobile test site:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fm2.jhweather.com%2Findex.cfm%3Fid%3Dm-weather-stations%3Au8hVulTvYfVYPTwRbL3Nqhr12p8&amp;cuid=3321886" rel="nofollow noopener" title="http://m2.jhweather.com/index.cfm?id=m-weather-stations">http://m2.jhweather.com/ind...</a></p><p>I still have a lot of CSS to fix up... speaking of which, do you know why the content of each list element doesn't span the total width of the list? It only spans about 3/4 of the list width.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731438">2</a> by Rick Mason
		posted on 4/6/2011 at 3:08 AM
		</div>
		<div class="comment_text"><p>Thought you linked to the wrong demo for a second there Ray ;&lt;). In IE-8 selecting either choice gives you a custom 403 message.  Works as intended in Firefox.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731444">3</a> by JP
		posted on 4/6/2011 at 3:26 AM
		</div>
		<div class="comment_text"><p>Just fixed a couple jqplot errors and got my example working in IE 8:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fm2.jhweather.com%2Findex.cfm%3Fid%3Dm-weather-stations%3Au8hVulTvYfVYPTwRbL3Nqhr12p8&amp;cuid=3321886" rel="nofollow noopener" title="http://m2.jhweather.com/index.cfm?id=m-weather-stations">http://m2.jhweather.com/ind...</a></p><p>Click on "View 24 Hour History"</p><p>I wonder if it's possible to get jQuery to NOT do a re-load after you've already expanded.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731442">4</a> by Raymond Camden
		posted on 4/6/2011 at 4:22 AM
		</div>
		<div class="comment_text"><p>@Rick: It's the console message. If you remove it, it should work fine in IE for you. Yes - I made _that_ mistake again. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731445">5</a> by Raymond Camden
		posted on 4/6/2011 at 4:23 AM
		</div>
		<div class="comment_text"><p>@Rick: Removed the console.log just for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731443">6</a> by Raymond Camden
		posted on 4/6/2011 at 4:24 AM
		</div>
		<div class="comment_text"><p>@JP: Ah, good catch there. It should NOT reopen. Give me 10 minutes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731448">7</a> by Raymond Camden
		posted on 4/6/2011 at 4:28 AM
		</div>
		<div class="comment_text"><p>Ok, check out</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fapril52011%2Ftest3.cfm%3ABfzqDraLtQe7jyRIDQbTzMCPfWA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/april52011/test3.cfm">http://www.coldfusionjedi.c...</a></p><p>All I did was add a simple flag per record:</p><p>	var done = {};</p><p>	$('<a href="http://disq.us/url?url=http%3A%2F%2Fdiv.info%3ARg6UNbYF8Rzjaum9Rhof25EgE24&amp;cuid=3321886" rel="nofollow noopener" title="div.info">div.info</a>').live('expand', function(){<br>		//get the ID for this record<br>		var record = $(this).data("record");<br>		if (!done[record]) {<br>			$(".detail", this).load("test2.cfm?record=" + record);<br>			done[record] = 1;<br>		}<br>	  });</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731452">8</a> by JP
		posted on 4/6/2011 at 4:47 AM
		</div>
		<div class="comment_text"><p>Nice... I added it to my page:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fm2.jhweather.com%2Findex.cfm%3Fid%3Dm-weather-stations%3Au8hVulTvYfVYPTwRbL3Nqhr12p8&amp;cuid=3321886" rel="nofollow noopener" title="http://m2.jhweather.com/index.cfm?id=m-weather-stations">http://m2.jhweather.com/ind...</a></p><p>Now I just need to make it all look cool. Time to dive into navigation lists.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731447">9</a> by Drew Wells
		posted on 4/7/2011 at 6:11 PM
		</div>
		<div class="comment_text"><p>Good article, have you seen this? "Why you should never use jquery live" <a href="http://disq.us/url?url=http%3A%2F%2Fjupiterjs.com%2Fnews%2Fwhy-you-should-never-use-jquery-live%3ArrIKSfgHz9PNW2H1SRKVXjPF6zY&amp;cuid=3321886" rel="nofollow noopener" title="http://jupiterjs.com/news/why-you-should-never-use-jquery-live">http://jupiterjs.com/news/w...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731451">10</a> by Raymond Camden
		posted on 4/7/2011 at 6:13 PM
		</div>
		<div class="comment_text"><p>I had not - and thank you. This is something I had kind of heard before - but getting out of the habit has been hard to do. (Of course, the original code was taken from the jQuery forums - so may I blame them instead? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731453">11</a> by Drew Wells
		posted on 4/7/2011 at 8:32 PM
		</div>
		<div class="comment_text"><p>Yes you can! Maybe this is why Stackoverflow allows their uber users to edit other users content.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731455">12</a> by JP
		posted on 4/7/2011 at 10:15 PM
		</div>
		<div class="comment_text"><p>I tried using delegate (), but I can't seem to get it to work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731450">13</a> by Raymond Camden
		posted on 4/7/2011 at 10:17 PM
		</div>
		<div class="comment_text"><p>Maybe share a pastebin link with your code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731449">14</a> by JP
		posted on 4/7/2011 at 10:25 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FMzb73bjr%3AUdqGsbivuNQDsglKgaselOGWE8w&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/Mzb73bjr">http://pastebin.com/Mzb73bjr</a>  (doesn't include the test2.cfm file it's trying to load)</p><p>But first, I need to get the delegate function to bind to the expand action.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731457">15</a> by JP
		posted on 4/7/2011 at 11:35 PM
		</div>
		<div class="comment_text"><p>I can get it working with:</p><p>$('*').delegate ('.info', 'expand', function (event) {...}</p><p>not sure why it won't work with:</p><p>$('.weather-station').delegate ('.info', 'expand', function (event) {...}</p><p>I had thought that delegate finds the specified nodes inside the initial selector.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731456">16</a> by Steve
		posted on 7/7/2011 at 11:08 AM
		</div>
		<div class="comment_text"><p>Thanks - great article, clearly written and an excellent discussion with enhancements to follow :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731458">17</a> by Matthew Fedak
		posted on 10/2/2012 at 5:23 AM
		</div>
		<div class="comment_text"><p>Thanks Ray, why did they not mention the expand in the jquery mobile docs I wonder. Second time now I been on your site during the jquery mobile project I'm making, keep up the good work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731466">18</a> by Raymond Camden
		posted on 10/2/2012 at 7:52 PM
		</div>
		<div class="comment_text"><p>Glad to help. To be fair to the docs, this feels like something that isn't necessarily appropriate there - more like a jQuery Mobile cookbook type thing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731469">19</a> by tony farrell
		posted on 10/11/2012 at 12:40 AM
		</div>
		<div class="comment_text"><p>this is nice - is there a way to make the two items into a seamless grouping?</p><p>thanks<br>tony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731468">20</a> by Raymond Camden
		posted on 10/11/2012 at 1:13 AM
		</div>
		<div class="comment_text"><p>Sorry, I don't understand your question.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731467">21</a> by Mike Backhouse
		posted on 4/11/2013 at 2:39 PM
		</div>
		<div class="comment_text"><p>Awsome work , have been googling this for ages works a treat</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731472">22</a> by Angus Marshall
		posted on 6/2/2014 at 7:09 PM
		</div>
		<div class="comment_text"><p>Works lovely as a test at my site <a href="http://disq.us/url?url=http%3A%2F%2Fwww.homeducate.me%2Fcgi-bin%2Ftesthtml1.cgi%3AA2ruBC-Dm2iRzhrwdQ8KcAmzY5k&amp;cuid=3321886" rel="nofollow noopener" title="http://www.homeducate.me/cgi-bin/testhtml1.cgi">http://www.homeducate.me/cg...</a></p><p>However, I'm trying to get it to work with:<br><a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.4.1.min.css<br>jquery-1.10.2.min.js<br><a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.4.1.min.js</p><p>and it fails (see <a href="http://disq.us/url?url=http%3A%2F%2Fwww.homeducate.me%2Fcgi-bin%2Ftesthtml2.cgi%3A875VarhX50A3kgtGD9lWa9-BTfU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.homeducate.me/cgi-bin/testhtml2.cgi">http://www.homeducate.me/cg...</a> ). Need those versions for other reasons :(</p><p>Any ideas?</p><p>Also, any ideas on how to display a "busy" twirly animation while the AJAX is doing its thing?</p><p>Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731473">23</a> by Raymond Camden
		posted on 6/2/2014 at 7:37 PM
		</div>
		<div class="comment_text"><p>You should learn to use your browser dev tools. :) As soon as I opened it I saw an error in the console: undefined is not a function</p><p>It is failing on the .live call, which was deprecated if i remember right, and should be replaced with .on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731474">24</a> by Angus Marshall
		posted on 6/3/2014 at 6:53 PM
		</div>
		<div class="comment_text"><p>Ah, thank you for the training :) <br>I tried the switch to .on but it still fails. I will tinker about with it and see what I can find.  Thanks for the great code anyway and response to steer me in the right direction. It's much appreciated!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731475">25</a> by ravi tiwari
		posted on 6/28/2014 at 6:16 AM
		</div>
		<div class="comment_text"><p>hi,<br>i am also facing the same <a href="http://disq.us/url?url=http%3A%2F%2Fissue.works%3Arv0H6AtMj6Pj8XwuDMn9rcT63xY&amp;cuid=3321886" rel="nofollow noopener" title="issue.works">issue.works</a> good with old jquery but not with latest 1.4.2 jquery mobile and 1.11 jquery.can u please update ur guide for latest version of   jquery</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.way2enjoy.com%2Ftouch%2Fw2et%2Fcollapse-new3.php%3ACp30SwunY8c3l7kQ-hIVuX7p8iM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.way2enjoy.com/touch/w2et/collapse-new3.php">http://www.way2enjoy.com/to...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731523">26</a> by Raymond Camden
		posted on 6/28/2014 at 6:30 AM
		</div>
		<div class="comment_text"><p>As I described above, you can replace .live with .on. See the docs on how it's API works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731522">27</a> by ravi tiwari
		posted on 6/28/2014 at 10:11 AM
		</div>
		<div class="comment_text"><p>Dear Ray,</p><p>thanks for your reply.i tried with all possible options including on but its not working. used js debugger then also no luck.request you, whenever you get some time, please try once in latest version of  jquery for your this <a href="http://disq.us/url?url=http%3A%2F%2Fpost.it%3A4VD1CT6ooXyVrIPhOPTMdJ3RKmI&amp;cuid=3321886" rel="nofollow noopener" title="post.it">post.it</a> will be great help</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731526">28</a> by Angus Marshall
		posted on 6/28/2014 at 11:48 AM
		</div>
		<div class="comment_text"><p>I also failed to get it working with .on<br>for later versions of JQuery/JQM and would very much appreciate an update.  My coding skills are just not up to it, sorry :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731524">29</a> by Raymond Camden
		posted on 6/28/2014 at 8:50 PM
		</div>
		<div class="comment_text"><p>@ravi: Well, the first step is to see if you can listen to the expand/collapse events. So before even trying to load crap in via AJAX, ensure your event handlers work by checking the console to see if there are fired.</p><p>Using on, it should be</p><p>$("body").on("expand", "div")</p><p>Try that first. The docs for on may be found here: <a href="http://disq.us/url?url=http%3A%2F%2Fapi.jquery.com%2Fon%2F%3A67BVgMmFTAn1s7HRAs8c3yWcF7E&amp;cuid=3321886" rel="nofollow noopener" title="http://api.jquery.com/on/">http://api.jquery.com/on/</a></p><p>I do not have plans on updating this post as - well - with ten years of posts I've got a lot of content that would need updating.</p><p>So I recommend following the steps I explained above - start simple and ensure you can listen to the event right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731525">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731525">30</a> by Raymond Camden
		posted on 6/28/2014 at 8:51 PM
		</div>
		<div class="comment_text"><p>Also, the official docs for jQM show examples: <a href="http://disq.us/url?url=http%3A%2F%2Fapi.jquerymobile.com%2Fcollapsible%2F%23event-collapse%3A-WE8kk1KPF1HXBnsQ5oxtCqQTgM&amp;cuid=3321886" rel="nofollow noopener" title="http://api.jquerymobile.com/collapsible/#event-collapse">http://api.jquerymobile.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731532">31</a> by james
		posted on 11/11/2014 at 3:55 PM
		</div>
		<div class="comment_text"><p>Anyone can update this post .please??????</p><p>its not working on latest version of Jquery</p></div>
	</div>
</div>
		