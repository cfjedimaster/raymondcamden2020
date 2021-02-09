
<div class="comment" id="c_1713731337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731337">1</a> by Glen Dunlop
		posted on 4/2/2011 at 9:04 PM
		</div>
		<div class="comment_text"><p>Ray, I think this might be a Chrome issue rather than a CF issue. If I do this in FireFox with fireBug it is displayed as Json.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731336">2</a> by Raymond Camden
		posted on 4/2/2011 at 9:08 PM
		</div>
		<div class="comment_text"><p>I'm not seeing that in Firefox 4. The response type was still test/html.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731339">3</a> by Glen Dunlop
		posted on 4/2/2011 at 9:45 PM
		</div>
		<div class="comment_text"><p>Did not know FF4 had been finally released :(</p><p>Anyway even after downloading that I still see JSon, I also don't see the text/html like you are either. Can you explain what section of fireBug that is, cause I don't see that. Maybe it is a platform difference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731338">4</a> by Raymond Camden
		posted on 4/2/2011 at 9:47 PM
		</div>
		<div class="comment_text"><p>I was in the Net panel, on the URL that was for the CFC, and I clicked the Headers panel. In response headers I saw the wrong type. When I added my fix, it was right. This was with the final jQuery version, NOT Ajax proxy. (Just to make sure we are on the same boat.)</p><p>Also - JSON crap changed quite a bit in the 9 timeframe. I'm on 901+CHF. You?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731340">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731340">5</a> by Glen Dunlop
		posted on 4/2/2011 at 9:52 PM
		</div>
		<div class="comment_text"><p>I use ExtJS Core, and I am using chf9010001.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731345">6</a> by Raymond Camden
		posted on 4/2/2011 at 9:54 PM
		</div>
		<div class="comment_text"><p>Just to make things simpler - can you try my jQuery one? It uses the CDN, so you should be able to run as is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731341">7</a> by Roberto
		posted on 4/2/2011 at 10:07 PM
		</div>
		<div class="comment_text"><p>Ray, is possibile to use json returned by serializeJson function with jQuery tmpl? ... <br><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F5500770%2Fjson-for-jquery-tmpl%3AFG-Np1BmFuBaZU95Kz733JDA2yk&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/5500770/json-for-jquery-tmpl">http://stackoverflow.com/qu...</a><br>I had to use cfjson...</p><p>thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731343">8</a> by Glen Dunlop
		posted on 4/2/2011 at 10:10 PM
		</div>
		<div class="comment_text"><p>Was not able to see what you see, I modified the code a little to reflect it correctly.</p><p>index.cfm</p><p>&lt;html&gt;<br>	&lt;body&gt;</p><p>		&lt;cfajaxproxy cfc="test" jsclassname="theproxy"&gt;<br>		&lt;script&gt;</p><p>		var foo = new theproxy();<br>		var result = foo.getone();<br>		console.log(result);<br>		var result = foo.gettwo();<br>		console.log(result);<br>		&lt;/script&gt;</p><p>	&lt;/body&gt;<br>&lt;/html&gt;</p><p>test.cfc</p><p>component {</p><p>	remote function getone() {</p><p>		return '{"errors":[{"ValidationError": {"validationLevel":"property","message":"Please enter your name","class":"system.domains.modules.blog.blogComment","property":"name","validationType":"NOTEMPTY"}},{"ValidationError": {"validationLevel":"property","message":"Please enter a valid email address","class":"system.domains.modules.blog.blogComment","property":"email","validationType":"NOTEMPTY"}},{"ValidationError": {"validationLevel":"property","message":"Please enter your comment","class":"system.domains.modules.blog.blogComment","property":"comment","validationType":"NOTEMPTY"}}],"status":"failed"}';<br>	}</p><p>	remote function gettwo() {</p><p>		return 2;<br>	}</p><p>}</p><p>Method one returns Json as it supposed too, because that is what it is.<br>Method two returns text as that is what it is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731342">9</a> by Raymond Camden
		posted on 4/2/2011 at 10:18 PM
		</div>
		<div class="comment_text"><p>@Glen: Respectfully I think you are wrong about your change to method 1. Why would you return the JSON yourself when CF can take a struct and convert it to JSON for you automatically? The whole point of this blog post is "Should CF uses the right content type when we request JSON using returnFormat." That's an automatic feature of CF. You are doing the JSON manually (which I think is a mistake, will describe below why) which is a different manner.</p><p>Now - my problem with you doing the JSON manually is that CF is going to see that as a string. When it adds returnFormat=json, it's going to JSON-ify the JSON itself. (It should - will confirm.) Your method as is would only be valid if you used returnformat=plain. That tells CF to not muck with the response at all.</p><p>As to your second method, I don't think you are getting the point of this. The point is - returnFormat=json tells CF to JSONify the response. '2' comes back as just 2 in JSON anyway I believe. But pretend I had used something like [] instead. In other words, let's not focus on my simple results - that really isn't relevant.</p><p>@Roberto: Um maybe - can we take this offline since it's a different topic?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731344">10</a> by Glen Dunlop
		posted on 4/2/2011 at 10:19 PM
		</div>
		<div class="comment_text"><p>Ok Tried it with ExtJS Core, CFAjaxProxy and your jQuery example.</p><p>Every example if it is not a Json being returned will be returned as HTML, if it is a valid Json string then there is a Json tab when you drop the request to show the responce and post information.</p><p>Still don't see what the problem is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731346">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731346">11</a> by Raymond Camden
		posted on 4/2/2011 at 10:22 PM
		</div>
		<div class="comment_text"><p>Correction: So CF sees a string and leaves it alone. So Glen, your JSON string result isn't re-JSON-ified, but again, it goes against the whole point here. The point is the CF provides a way to take your CFC methods and have them be auto-converted to JSON.</p><p>And btw - using your return, the content type was still incorrect.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731347">12</a> by Raymond Camden
		posted on 4/2/2011 at 10:23 PM
		</div>
		<div class="comment_text"><p>Look in the headers. To be clear, this is NOT something that causes a bug. My code w/o the response header changes works fine. I was trying to get the content type... "more proper" I guess.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731352">13</a> by Glen Dunlop
		posted on 4/2/2011 at 10:24 PM
		</div>
		<div class="comment_text"><p>Ray, how can it return it as Json?</p><p>Json is built using valid keyword/value pairs, how can it return what the number 1/2 as Json without having the required information to be a Json?</p><p>ColdFusion might be doing an isJson to change the returntype in this example you put forward, it is the only explanation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731351">14</a> by Glen Dunlop
		posted on 4/2/2011 at 10:26 PM
		</div>
		<div class="comment_text"><p>Sorry Ray the point is if you return a valid Json string as I outlined in my example. I clearly see Json in fireBug and can drill into the nodes of the structure, if I do what you do, I do see just HTML but I think that is expected as I explained.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731349">15</a> by Raymond Camden
		posted on 4/2/2011 at 10:30 PM
		</div>
		<div class="comment_text"><p>Again - I am not talking about the JSON string. It is returned correctly. I am talking about the content type of the result. Nothing more. Does that distinction make sense? Did you read about how I added &lt;cfcontent&gt;? I didn't tweak the actual data. Only the content type of the response.</p><p>As to your comment 13 - CF supports turning stuff into JSON. Has since version 8. But that's not the point of this blog entry in any way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731350">16</a> by Glen Dunlop
		posted on 4/2/2011 at 10:31 PM
		</div>
		<div class="comment_text"><p>Here is something you might think stranger, in jQuery if I use your exact code it does not return Json in the fireBug console.</p><p>Yet if I change your example to</p><p>&lt;script type="text/javascript" src="<a href="http://disq.us/url?url=http%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F1%2Fjquery.min.js%3AmyXuj5h8gP7HzSEw76YxIcay7LQ&amp;cuid=3321886" rel="nofollow noopener" title="http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js">http://ajax.googleapis.com/...</a>"&gt;&lt;/script&gt;<br>&lt;script&gt;<br>$(document).ready(function() {<br>	$.get("test.cfc?method=getone&amp;returnformat=json",{}, function(res) {<br>		console.log(res);<br>	},"json");<br>})<br>&lt;/script&gt;</p><p>I see the Json tab, will send you an image off list to show you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731353">17</a> by Glen Dunlop
		posted on 4/2/2011 at 10:39 PM
		</div>
		<div class="comment_text"><p>Ray, I seriously get your point. But I am not seeing what you see, unless there is an alert() there. Even then I do not see in the Net tab the text/html I just see status 200.</p><p>I am also very aware of how ColdFusion converts to Json, I have been doing Ajax development in CF for 7-8 years now and never had an issue.</p><p>but if you are using alerts instead of console.log, then like I said it looks like this is an actual browser issue with firebug and not a ColdFusion problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731355">18</a> by Raymond Camden
		posted on 4/2/2011 at 10:41 PM
		</div>
		<div class="comment_text"><p>Got a lot of moving parts here. ;) Can you please focus though on the _Headers_. I'm not terribly concerned with the resulting data as it works for me (if not for you we can open a new thread). Again - let's focus on the core issue here - which is not  necessarily a bug folks need to care about, but is more about what SHOULD happen, and that is this core principle:</p><p>If I tell CF to "auto jsonify" a result, it should also auto change the content type of the result (along with JSON-ifing) the data.</p><p>That's all I'm saying here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731358">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731358">19</a> by Raymond Camden
		posted on 4/2/2011 at 10:43 PM
		</div>
		<div class="comment_text"><p>I'm not worried about the status code. I'm worried about the content type.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731357">20</a> by Glen Dunlop
		posted on 4/2/2011 at 10:54 PM
		</div>
		<div class="comment_text"><p>But Ray, it is changing the content type. And that is what I see is happening, provided it is a valid Json being returned.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731359">21</a> by Raymond Camden
		posted on 4/2/2011 at 10:58 PM
		</div>
		<div class="comment_text"><p>So to be clear, when you expand the result in Firebug and look at the header you see application/json? Look at my very first screen shot (my only shot), the 4th column says text/html. That is what I'm saying is incorrect.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731360">22</a> by Glen Dunlop
		posted on 4/2/2011 at 11:15 PM
		</div>
		<div class="comment_text"><p>The point I was trying to make is that a string like 1 can't be converted to a Json struct, and object sure can, a struct sure can etc. A string is different, it doesn't have any more information to return it as a key/value pair.</p><p>Hope the clarifies what I was actually saying, and not disputing the conversion process by returning a json string like I did.</p><p>To illustrate</p><p>&lt;cfset myStruct = {} /&gt;<br>&lt;cfset myStruct.test = 'one' /&gt;<br>&lt;cfreturn myStruct /&gt;</p><p>Returns as a Json object</p><p>&lt;cfset mySting = 'Glen Dunlop' /&gt;<br>&lt;cfreturn myString /&gt;</p><p>Returns as a string, so no conversion takes place.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731362">23</a> by Raymond Camden
		posted on 4/2/2011 at 11:23 PM
		</div>
		<div class="comment_text"><p>@Glen: Agreed, yep.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731367">24</a> by Ben Nadel
		posted on 4/5/2011 at 6:41 PM
		</div>
		<div class="comment_text"><p>Awesome tip on using URL to predefine the returnFormat:</p><p>url.returnformat="json";</p><p>Groovy!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731373">25</a> by Raymond Camden
		posted on 4/5/2011 at 6:44 PM
		</div>
		<div class="comment_text"><p>That was Mark Drew's discovery. It works really well I think. Anything to minimize the amount of code your callers have to use is a good thing I think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731370">26</a> by Ben Nadel
		posted on 4/5/2011 at 6:48 PM
		</div>
		<div class="comment_text"><p>@Ray, absolutely! Plus, less for you type type in your CFFunction tags!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731369">27</a> by Raymond Camden
		posted on 4/5/2011 at 6:51 PM
		</div>
		<div class="comment_text"><p>Oh snap - now you sound something I can pounce on! ;)</p><p>I would propose that - normally (nothing is 100%) you should refrain from ever using returnFormat in your cffunction tags themselves. The method should be as ignorant as possible about the callers intended use of the data.</p><p>Being preachy there - so take with large grain of salt.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731365">28</a> by Ben Nadel
		posted on 4/5/2011 at 6:57 PM
		</div>
		<div class="comment_text"><p>Ha ha ha, I won't argue with that :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731372">29</a> by Phillip Senn
		posted on 4/5/2011 at 11:51 PM
		</div>
		<div class="comment_text"><p>I wonder if you could use</p><p>&lt;cfparam name="url.returnformat" default="json"&gt;<br> in the constructor instead of cfset.</p><p>I'm still on version 8 btw.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731368">30</a> by Raymond Camden
		posted on 4/5/2011 at 11:56 PM
		</div>
		<div class="comment_text"><p>I bet it works. But- hey - don't wonder - try it and tell us. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731371">31</a> by Phillip Senn
		posted on 4/10/2011 at 5:36 AM
		</div>
		<div class="comment_text"><p>I just thought about this post while reading Rebecca Murphey's jQuery Fundamentals at <a href="http://disq.us/url?url=http%3A%2F%2Fjqfundamentals.com%2Fbook%2Findex.html%3AceX0GPgR5AsU3h6xEm5CP8JwKSY&amp;cuid=3321886" rel="nofollow noopener" title="http://jqfundamentals.com/book/index.html">http://jqfundamentals.com/b...</a>.<br>"for JSON data, the Content-type header should be application/json".<br>I'll be sure to put &lt;cfcontent type="application/json"&gt; in the constructor of all my remote cfcs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731366">32</a> by Stefan Richter
		posted on 11/15/2011 at 2:46 PM
		</div>
		<div class="comment_text"><p>Old thread I know, but what is the conclusion? Is this a bug in CF, or are we encouraged to set the content type manually?</p><p>I just tried this with CF 9 under OSX and I too see text/html; charset=UTF-8 as the content type when returning a JSON response via returnformat=json</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731376">33</a> by Raymond Camden
		posted on 11/15/2011 at 4:48 PM
		</div>
		<div class="comment_text"><p>I'd say it is still an issue - just one that doesn't seem to impact me much. I use the json argument in my jQuery calls and it just plain works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731377">34</a> by Jeff Regan
		posted on 11/25/2011 at 8:11 AM
		</div>
		<div class="comment_text"><p>I have an application that uses jQuery and AJAX to get employee records. The issue is that employee numbers are indeed numbers and some of them have leading zeroes. I am using json.cfc to produce the JSON because it allows me to format numbers as strings and preserve the leading zeroes.</p><p>Is there anything in CF that will allow me to use their native JSON functionality to achieve the same result?</p><p>I also set the status code, content length and message using setStatus and setContentLength for success and sendError for errors.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731375">35</a> by Raymond Camden
		posted on 11/27/2011 at 12:32 AM
		</div>
		<div class="comment_text"><p>You want to ensure you are on the -very- latest CF, (901+CHF). We made multiple changes to JSON serialization over time. I think, however, we may still convert "000N" to "N", but it is worth checking.</p><p>You can - if you want - add the values. For example, with SQL you can select a column and prefix it with something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731374">36</a> by Stefan Richter
		posted on 2/1/2012 at 2:42 AM
		</div>
		<div class="comment_text"><p>Just to chime in, this bugs me greatly (wrong content type being sent by CF for JSON data).<br>Particularly during debugging (Chrome console for example) it is annoying that CF sends text/html as the content type.</p><p>I'll try setting the content-type header manually. Annoyingly.</p></div>
	</div>
</div>
		