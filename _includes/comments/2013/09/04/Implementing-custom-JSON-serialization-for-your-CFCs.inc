
<div class="comment" id="c_1714079827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714079827">1</a> by Jaana Gilbert
		posted on 9/4/2013 at 4:57 PM
		</div>
		<div class="comment_text"><p>Neato Bandito!!! Nice going Ben, I sure will be giving this a try this week!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714079832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714079832">2</a> by Raymond Camden
		posted on 9/4/2013 at 5:38 PM
		</div>
		<div class="comment_text"><p>Ahem, Ray wrote this blog entry. ;) (Ok, Ben gets the credit, but you don't want to hurt my fragile ego, do you???)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714079826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714079826">3</a> by Jaana Gilbert
		posted on 9/4/2013 at 5:43 PM
		</div>
		<div class="comment_text"><p>Ok Ok Mr Ray :) Great job both of you guys!!!!<br>You know you're the man Ray :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714079823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714079823">4</a> by Raymond Camden
		posted on 9/4/2013 at 5:44 PM
		</div>
		<div class="comment_text"><p>Heh, thank you, ego saved. :) Personally - I still think folks get confused by returnformat and CFC calls. So this was a great opportunity to show an example of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714079828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714079828">5</a> by Phillip Senn
		posted on 9/4/2013 at 6:23 PM
		</div>
		<div class="comment_text"><p>"the keys were lowercased".</p><p>Q: What if it were FavColor instead of favcolor?  Are you saying that using url.returnformat = "plain" leaves the case alone?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714079829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714079829">6</a> by Raymond Camden
		posted on 9/4/2013 at 6:26 PM
		</div>
		<div class="comment_text"><p>"Q: What if it were FavColor instead of favcolor?"</p><p>Doesn't change. I believe Ben's code forces lowercase. Just checked his code - and it does. To me, this is good.</p><p>"Are you saying that using url.returnformat = "plain" leaves the case alone?"</p><p>No. When you use returnformat=plain, ColdFusion does nothing to the result. When you use returnformat=wddx or json, CF does serialization. If you use returnformat=plain, you MUST return a simple result (string, date, number, you get the idea).</p><p>So basically my point is - if you don't like the built-in serialization and want to use your own (or Ben's), use the plain format and handle it yourself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714079824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714079824">7</a> by Ben Nadel
		posted on 9/4/2013 at 6:33 PM
		</div>
		<div class="comment_text"><p>Woot!! Thank you Ray :D Now, this is what I call a good Hump day!</p><p>@Phillip, Re: casing of keys, it will use what ever you pass into the asXYZ() methods. So, if you pass .asString( "FavColor" ), the keys will come through as "FavColor". This holds true for all the .as() methods.</p><p>By default, it will lowercase all the keys that it doesn't recognize. So, if it reaches part of data structure that was not explicitly defined, it will just lowercase the keys.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714079834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714079834">8</a> by Raymond Camden
		posted on 9/4/2013 at 6:34 PM
		</div>
		<div class="comment_text"><p>@Ben: Oh slick - that is well done. (I'll be honest - I skim/read. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714079835">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714079835">9</a> by Ben Nadel
		posted on 9/4/2013 at 6:39 PM
		</div>
		<div class="comment_text"><p>No worries :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714079822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714079822">10</a> by Dan G. Switzer, II
		posted on 9/4/2013 at 6:54 PM
		</div>
		<div class="comment_text"><p>You may also want/need to explicitly content type to application/json:</p><p>&lt;cfcontent type="application/json" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714079825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714079825">11</a> by Raymond Camden
		posted on 9/4/2013 at 7:00 PM
		</div>
		<div class="comment_text"><p>Good point there. Interestingly enough you can't do it in cfscript. I'm assuming you would need to do it with getPageContext, which is workable, but not acceptable. Checking the bug tracker.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714079833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714079833">12</a> by Raymond Camden
		posted on 9/4/2013 at 7:01 PM
		</div>
		<div class="comment_text"><p>ER is here - folks should vote for it. I'm going to do so now:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fbugbase.adobe.com%2Findex.cfm%3Fevent%3Dbug%26id%3D3133316%3Ah6wN1e6U3qUd3b4_JOI5P8zAhcE&amp;cuid=3321886" rel="nofollow noopener" title="https://bugbase.adobe.com/index.cfm?event=bug&amp;id=3133316">https://bugbase.adobe.com/i...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714079836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714079836">13</a> by Adam Cameron
		posted on 9/5/2013 at 2:59 AM
		</div>
		<div class="comment_text"><p>I dunno if I'm being overly dogmatic about encapsulation, but is there no better way of dealing with URL.returnformat than accessing it directly within one's method? For a remote call with returnFormat on the URL, it should be passed into the arguments scope, shouldn't it?</p><p>(the above is very much a question, not a statement dressed up as one)</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714079840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714079840">14</a> by Raymond Camden
		posted on 9/5/2013 at 3:23 AM
		</div>
		<div class="comment_text"><p>Good question Adam. Obviously it works (hard coding it), but is it "The Right Thing" (and I know that is not something folks agree on all the time).</p><p>In my opinion - returnformat is a handy way to allow a service to dynamically return JSON or WDDX or plain text for a remote client.</p><p>But in *practical* usage, I'm willing to bet that 99% of your use of this CFC will be for AJAX, and therefore, json.</p><p>So by adding a url.returnformat to the method, I make it easier for the consumer which to me is a Good Thing as well. Now I can just call soandso.cfc?method=foo and not worry about asking for JSON when JSON is the only thing that would ever make sense.</p><p>My 2 cents.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714079838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714079838">15</a> by Adam Cameron
		posted on 10/24/2013 at 11:28 AM
		</div>
		<div class="comment_text"><p>Sorry Ray, you missed my point. What I meant was that rather than using this:</p><p>url.returnformat = "plain";</p><p>Can you not use:</p><p>arguments.returnformat = "plain";</p><p>For remote calls, aren't all URL params passed into the method as arguments?</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714079839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714079839">16</a> by Raymond Camden
		posted on 10/24/2013 at 4:41 PM
		</div>
		<div class="comment_text"><p>It should be. I haven't tried it that way.</p></div>
	</div>
</div>
		