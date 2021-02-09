
<div class="comment" id="c_1713746410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746410">1</a> by Jack
		posted on 5/13/2013 at 10:36 PM
		</div>
		<div class="comment_text"><p>I'm a little confused about the third code sample:</p><p> function testpub() {<br>return pub1() * 2;<br>}<br>return {<br>doPriv:priv1,<br>pub1:pub1,<br>testpub:testpub<br>}</p><p>Here, it looks like you've returned to the version of testpub that caused problems in the first code sample.  Does it now automagically work because you switched to object notation in the return block?</p><p>When you use object notation in the return block, do you no longer need the technique used in the second code sample:<br> testpub:function() {<br>return revealModuleTest.pub1()*2;<br>}<br>?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746411">2</a> by Raymond Camden
		posted on 5/14/2013 at 12:31 AM
		</div>
		<div class="comment_text"><p>"Here, it looks like you've returned to the version of testpub that caused problems in the first code sample. "</p><p>Technically yes, but the scope is now different. When I call myModule.testpub, the public interface, it is connected to the functions that were defined privately. testpub, pub1, and priv1. They can all see each other just fine.</p><p>I'm probably still not explaining that very well and I apologize. Hopefully the above is a bit clearer.</p><p>"When you use object notation in the return block, do you no longer need the technique used in the second code sample"</p><p>Correct.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746412">3</a> by John C. Bland II
		posted on 5/14/2013 at 12:41 AM
		</div>
		<div class="comment_text"><p>Just hoist your module variable to the top and you can access it with no problem.</p><p>var module = {};</p><p>module.doIt = function(){<br>}</p><p>var b = function(){<br>   module.doIt();<br>};</p><p>return module;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746413">4</a> by Raymond Camden
		posted on 5/14/2013 at 12:49 AM
		</div>
		<div class="comment_text"><p>John, the fact that b has to prefix module to the call is part of the problem though. By moving to the revealing module pattern, all my functions can access each other 'naked'. It isn't that it isn't fixable, my second code sample shows that fix, it is more a, "If you prefer to use modules  and want to not worry about it, consider this version."</p><p>(Imo)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746417">5</a> by Gary
		posted on 5/18/2013 at 3:11 AM
		</div>
		<div class="comment_text"><p>Very good examples and I agree that it feels like a superior design convention. ( I prefer to think of simple patterns as design conventions.)  I'm way far from being a JavaScript expert yet.  Picking it up is slow going when when not using it for substantial client logic particularly because so much of it feels like "it just happens to work."  And I hope you didn't put a damper on this saying this only works in WebKit. Obviously you mean your implementation with WebSQL.  I'll be watching so I learn something about that too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746421">6</a> by John C. Bland II
		posted on 5/18/2013 at 3:59 AM
		</div>
		<div class="comment_text"><p>@Ray<br>I didn't see the code when I read it (RSS feed didn't include it) but I use that pattern often as well.</p><p>There is a gotcha though. If you run a test and want to do something like this, it'll fail:<br>//Jasmine test<br>diaryModule.callSomething();<br>expect(diaryModule.somethingElse).toHaveBeenCalled();</p><p>'somethingElse' is on the same module but the internal call doesn't call the module.</p><p>There may be a way around it but that bit me more than once. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746416">7</a> by Raymond Camden
		posted on 5/18/2013 at 4:16 AM
		</div>
		<div class="comment_text"><p>@Gary: Yes - I meant the demo won't work outside of Webkit(Blink) cuz of WebSQL. It is part of my plan to bring up interfaces/etc as a way to support the same API but with different implementations.</p><p>@John: Interesting. Why would you write a test that sees if method X calls method Y? That seems... wrong. It seems like my unit tests shouldn't care *how* X does it's shit. It should just care that it has the right result. If i one day change X so that it doesn't call Y, but it still works right, my unit test test would break. That seems... wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746415">8</a> by John C. Bland II
		posted on 5/18/2013 at 4:33 AM
		</div>
		<div class="comment_text"><p>@Ray<br>Nah, it can be completely right. That is part of the unit. What you don't care about is what happens in 'diaryModule.somethingElse' but you could definitely care your method called the right other method.</p><p>Consider your method switching between an online or offline (local storage) service call or if param2 was passed in you want to make sure diaryModule.somethingElse received the right config object.</p><p>Your tests are there to test the unit, we agree, but your unit can include calling other methods; which you don't care what they do or return.</p><p>#havecode #willshare :-D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746419">9</a> by Raymond Camden
		posted on 5/18/2013 at 4:38 AM
		</div>
		<div class="comment_text"><p>I don't know man. Consider your offline/online example. I've got a method called getData. When online, it gets the latest data. When offline, it gets data from cache. I suppose I could see you wanting to confirm it called the right method. But - if I'm offline and my method still returns data, then I'd consider it working fine as is. (This assumes a UT framework that could correctly mock network status.) To me, the crucial thing is, "Do I still work offline or online." The fact that I've got some private method called "getCrapFromCache" shouldn't be tied to my unit test of "getData". (imo)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746414">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746414">10</a> by John C. Bland II
		posted on 5/18/2013 at 4:46 AM
		</div>
		<div class="comment_text"><p>In our case, we needed to make sure the proper service module was called, we mocked the service, and had it return data. Sure we could have just tested the data but in that case we're not confirming where the data came from: RestService or LocalService. (not actual names)</p><p>You have to know where your data comes from to verify a statement like this worked (dumbed down):<br>if(online) return RestService.getData();<br>else return LocalService.getData();</p><p>If you simply do:<br>expect(mymodule.getMyData()).toEqual(myMockArray);</p><p>...you're setting yourself up for failure when something changes in the logic controlling the 'online' variable.</p><p>You're still 100% testing your unit and nothing more but without confirming the method call your exposure to a problem is higher.</p><p>In this example, I wouldn't care if the method was called:<br>var b = function(){<br>      var c = getData();<br>      c.whatever = true;<br>      return c;<br>}</p><p>//in my tests<br>var result = b();<br>expect(result).toEqual(myMockData);<br>expect(result.whatever).toBeTruthy();</p><p>I don't care where the data came from so long as it equals my mock data and 'whatever' is set properly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746418">11</a> by John C. Bland II
		posted on 5/18/2013 at 4:49 AM
		</div>
		<div class="comment_text"><p>"...you're setting yourself up for failure when something changes in the logic controlling the 'online' variable."</p><p>^ or your logic for determining whether to get online or offline data changes (ie - pull from cache if it exists).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746420">12</a> by Raymond Camden
		posted on 5/18/2013 at 6:20 AM
		</div>
		<div class="comment_text"><p>I don't see how you can say, "I don't care where the data came from so long as it equals my mock data and 'whatever' is set properly.", and the say you check to see if a particular service is run. Those statements seem contradictory. If your intent is to ensure getData works online or offline, and you mock that status, then you expect data in both cases. You would test for getting data back, now how it got it.</p><p>"or your logic for determining whether to get online or offline data changes (ie - pull from cache if it exists)."</p><p>To me that means, one day I may decide if offline, we don't return data, but a flag of some sort. If so, that would mean a change to your unit tests. Your test for getData(while offline) should expect *no* data but the flag instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746422">13</a> by John C. Bland II
		posted on 5/18/2013 at 8:21 AM
		</div>
		<div class="comment_text"><p>"I don't care where the data came from so long as it equals my mock data and 'whatever' is set properly."<br>^ That's related to the code right above it not my other point. The last bit of code is more to your point of not caring where the data comes from. It's a scenario where I would not test 'getData' was called. In other words, not contradictory at all as it had nothing to do with other 'switching' logic for online/offline.</p><p>Yes, if that logic changed, you'd write more tests and adjust your other test. What gets returned isn't a flat answer though so "no" data isn't valid in our case.</p><p>The overall point though is if you have logic in your functions that changes based on different conditions, you should verify those methods are called. Again, not a hard and fast rule but test coverage should be full units (meaning all functionality in that unit, not just the result).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746423">14</a> by Raymond Camden
		posted on 5/18/2013 at 6:52 PM
		</div>
		<div class="comment_text"><p>Hmm. I see your point - just not sure I agree. :) But thanks - it has given me something to think about.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746424">15</a> by John C. Bland II
		posted on 5/18/2013 at 6:53 PM
		</div>
		<div class="comment_text"><p>Cool beans and no prob. I always enjoy good discussions. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746425">16</a> by James
		posted on 7/8/2013 at 7:27 PM
		</div>
		<div class="comment_text"><p>I really don't get the whole 'repeat the name of the main object when he wanted to call one public method from another' argument. Surely you can just use the 'this' pointer internally, or am I missing something?</p><p>testpub:function() {<br>  return this.pub1()*2;   <br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746426">17</a> by John C. Bland II
		posted on 7/9/2013 at 3:43 AM
		</div>
		<div class="comment_text"><p>@james<br>'this' is evil and should be avoided at all times, IMHO. There are very rare instances where you need to use 'this'.</p><p>I can call any of your methods and change the context by simply doing: module.testpub.apply(myOtherModule). In this instance, myOtherModule is 'this' and 'this.pub1()' does not exist there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746428">18</a> by Guillermo Snipe
		posted on 10/25/2013 at 6:45 PM
		</div>
		<div class="comment_text"><p>Hi Raymond:<br>Would like to ask you something related to the pattern, when writing IFEs, the rule says that parenthesis at the beginning are not needed if the function is not assigned to a variable. Is there some reason to have parenthesis in this case?</p><p>Thanks so much,</p><p>Guillermo</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746427">19</a> by Raymond Camden
		posted on 11/8/2013 at 3:06 AM
		</div>
		<div class="comment_text"><p>I think I was just following the format I had seen. You are right though. (Sorry for the delay in responding.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713746429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713746429">20</a> by I-Lin Kuo
		posted on 12/31/2013 at 4:49 PM
		</div>
		<div class="comment_text"><p>The Revealing Module Pattern has a major flaw when it comes to inheritance. See my answer on stack overflow -- <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fa%2F20856718%2F1171180%3AaY7Kuc22uaNH1FodiIkH_RyowXk&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/a/20856718/1171180">http://stackoverflow.com/a/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1851399412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1851399412">21</a> by Yagnya
		posted on 2/13/2015 at 10:00 AM
		</div>
		<div class="comment_text"><p>Thank's Raymond you have explained it very nicely,the part you are talking silly that helped me to understand why we need Revealing module pattern.</p></div>
	</div>
</div>
		