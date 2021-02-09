
<div class="comment" id="c_1713715061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715061">1</a> by Rolando Lopez
		posted on 5/1/2009 at 7:23 PM
		</div>
		<div class="comment_text"><p>I guess you missed arrays :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715077">2</a> by Raymond Camden
		posted on 5/1/2009 at 7:24 PM
		</div>
		<div class="comment_text"><p>Eh?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715074">3</a> by Justin Carter
		posted on 5/1/2009 at 8:05 PM
		</div>
		<div class="comment_text"><p>You asked if you missed any complex data types :) An array is, although in CF arrays are passed by value not by reference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715072">4</a> by Andrea
		posted on 5/1/2009 at 8:08 PM
		</div>
		<div class="comment_text"><p>I find passing ararys by value as something that shoudl be solved. Adobe could think to a checkbox in admin for keeping back compatibility but passing arrays by value looks like a bug to be solved and not like a language tipical aspect to be preserved.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715075">5</a> by Andy Sandefer
		posted on 5/1/2009 at 8:33 PM
		</div>
		<div class="comment_text"><p>This is just a buyer beware type of thing and every language has its own little gotchas.  This is important to know but I'm not sure that changing it after 8 releases would be a good thing.  Just my opinion as someone who has had legacy code broken for the sake of satisfying someone's newly found ideology.  I'm sure that there are probably strong arguments to be made either way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715073">6</a> by Andrea
		posted on 5/1/2009 at 8:41 PM
		</div>
		<div class="comment_text"><p>@Andy<br>I do nto think is only ideology.<br>Passing by value means that any time you pass an array a new one is made.<br>This is one thing but cf is full of these littles tricks that make it run slower than railo for example..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715078">7</a> by Raymond Camden
		posted on 5/1/2009 at 9:55 PM
		</div>
		<div class="comment_text"><p>@Justin: Oh, well, I thought Rolando meant I missed talking about arrays, and that was my second area. Yes, they are complex, I just wanted to make sure to separate them from the 'expected' list of things passed by ref.</p><p>Yes, I'm being defensive. Sue me. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715092">8</a> by phill.nacelli
		posted on 5/1/2009 at 10:51 PM
		</div>
		<div class="comment_text"><p>Ray and I had this discussion while he was writing this blog about whether or not this should be fixed in future versions, it's valid that backward compatibility issue would be at play here but this is a inconsistency nonetheless.  I am glad however that he posted this gotcha so at least people are aware of the implications and won't go crazy if they see this odd behavior.</p><p>cheers..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715093">9</a> by Justin Carter
		posted on 5/2/2009 at 4:21 PM
		</div>
		<div class="comment_text"><p>@Ray: Yeah of course, the most important part of your article is the distinction that arrays aren't passed by reference like other complex types and need to be thought of separately :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715091">10</a> by Jim_Collins
		posted on 5/3/2009 at 8:07 AM
		</div>
		<div class="comment_text"><p>Ray; I love you man but your example isn't very good; it's what I'd expect. This gives you the full "WTF?!?!" effect:</p><p>&lt;cfset s = {} /&gt;<br>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fs.name%3AprcCAM7nZPr_jd9tMI3Crp7rZLM&amp;cuid=3321886" rel="nofollow noopener" title="s.name">s.name</a> = "Britney"&gt;<br>&lt;cfset s2 = s /&gt;<br>&lt;cfdump var="#s#" label="S"&gt;<br>&lt;cfdump var="#s2#" label="S2"&gt;<br>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fs2.name%3AaElFmDiuMkYp4nUnr70MrTehK4M&amp;cuid=3321886" rel="nofollow noopener" title="s2.name">s2.name</a> = "Paris"&gt;<br>&lt;cfdump var="#s#" label="S"&gt;<br>&lt;cfdump var="#s2#" label="S2"&gt;</p><p>Result: All Paris all the time!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715090">11</a> by Chuck Savage
		posted on 12/7/2009 at 10:26 PM
		</div>
		<div class="comment_text"><p>Ben Nadel posted a 'sweet' coldfusion pass array by reference, that has a caveat perhaps...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F275-Passing-Arrays-By-Reference-In-ColdFusion-SWEEET-.htm%3A8AG0jrUuCjqs2uJ2CBOFaDlePJ8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/275-Passing-Arrays-By-Reference-In-ColdFusion-SWEEET-.htm">http://www.bennadel.com/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715094">12</a> by Joel
		posted on 3/3/2010 at 12:59 AM
		</div>
		<div class="comment_text"><p>Passing arrays by value = FAIL</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715095">13</a> by Drew Wells
		posted on 6/15/2010 at 12:37 AM
		</div>
		<div class="comment_text"><p>I agree above, arrays are passed by value incorrectly.  Took me a while to figure out that Adobe dropped the ball here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715097">14</a> by mike cohen
		posted on 2/11/2011 at 10:44 PM
		</div>
		<div class="comment_text"><p>Its interesting to me that structs are passed by reference. C passes structs as value but I guess since Coldfusion is Java structs is just another object and so passed by reference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715099">15</a> by James Hull
		posted on 11/28/2011 at 4:13 PM
		</div>
		<div class="comment_text"><p>"When working with ColdFusion, any complex data type (structs, CFCs, queries, COM/JavaObjects, did I miss one?) will be passed by reference, not by value."</p><p>This is technically incorrect. The reference to the object is actually passed by value. Most of the time you don't have to worry about it, but imagine you had something like this:</p><p>public void function test() {<br>	var s = {<br>		"name" = "James"<br>	};</p><p>	refTest(s);</p><p>	writeDump(var:s, abort:true);<br>}</p><p>private void function refTest(struct t) {<br>	t = {};		<br>}</p><p>You might assume that it will dump out an empty struct when it actually dumps out the unmodified original struct. This is because the value of s (the reference to the struct) is passing a copy to refTest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715098">16</a> by Raymond Camden
		posted on 11/28/2011 at 4:35 PM
		</div>
		<div class="comment_text"><p>Interesting - yet my other examples do show this behavior. So am I wrong - or just not specifying this right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715102">17</a> by James Hull
		posted on 11/28/2011 at 4:41 PM
		</div>
		<div class="comment_text"><p>The other examples work because the reference points to the same object.</p><p>So in my example above - refTest(struct t) - t contains a copy of the reference to struct s. If I was to do:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ft.name%3AY7gKsPTXp5WDufR-9qPRevrzIJI&amp;cuid=3321886" rel="nofollow noopener" title="t.name">t.name</a> = "Ray";</p><p>The dump would now show</p><p>name = "Ray"</p><p>This is, as you state in your post, because refTest used the reference to alter the underlining struct. However, if (like I did originally) change t to point to a new struct hence a new reference - this doesn't affect the original reference in my caller function. s still points to the same struct. This is because the reference was passed by value. In other words a copy of the reference was created and passed to the refTest function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715103">18</a> by Raymond Camden
		posted on 11/28/2011 at 4:48 PM
		</div>
		<div class="comment_text"><p>Interesting. But wouldn't you say - in a typical case - when you pass a struct to a method the method is normally going to do something with it. Like add or remove a key? And in most cases, the issue of it changing the original would possibly hurt people?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715100">19</a> by James Hull
		posted on 11/28/2011 at 4:54 PM
		</div>
		<div class="comment_text"><p>Yeah sure. For the most part - I don't imagine most people would run into this. I was just pointing out that whilst in general most people would think of passing a struct is passing by reference - technically it's not.</p><p>A colleague of mine actually come up against this very issue a few months ago. He was passing a structure into a function which used the values contained in the struct and then he wanted to "clear" it by creating a new structure. Bit of a shock when in the caller function - the structure still contained all the original values!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715104">20</a> by Raymond Camden
		posted on 11/28/2011 at 5:01 PM
		</div>
		<div class="comment_text"><p>Maybe I'm being picky - but how is it _not_ passing by reference? It seems like you are saying that when you made T a new struct, the reference broke. But it was still a reference at first. So it was -passed- in as a reference, but then the connection was lost. Right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715101">21</a> by James Hull
		posted on 11/28/2011 at 5:10 PM
		</div>
		<div class="comment_text"><p>The formal definition of pass by reference is actually quite complex but the important thing to note is that if you pass a variable by reference, the method you're calling can change the value of the caller's variable by changing its parameter value.</p><p>As you see from my example - if I change the parameter value (t) it doesn't change the callers variable (s). In other words, if I change t to a new reference - s still stays the same. So by it's formal definition - this is not pass by reference.</p><p>From a abstract view - you can think of this as passing by reference - because the argument to refTest is a reference. But the point I was trying to make is by the correct definition of pass by reference, passing a struct or any complex type is still pass by value - we just happen to be passing a reference.</p><p>It's probably me just being pedantic, however I think it's a distinction that people need to be aware of.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715105">22</a> by Raymond Camden
		posted on 11/28/2011 at 5:12 PM
		</div>
		<div class="comment_text"><p>I concede your point - I just think it's going to _act_ more like the first case then the second. But I see your point.</p></div>
	</div>
</div>
		