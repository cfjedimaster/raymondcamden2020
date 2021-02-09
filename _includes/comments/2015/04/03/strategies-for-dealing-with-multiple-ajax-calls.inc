
<div class="comment" id="c_1944159387">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_SKnAyyqXGI.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1944159387">1</a> by Jonathan Smith
		posted on 4/3/2015 at 2:31 PM
		</div>
		<div class="comment_text"><p>A user found an issue with multiple AJAX calls in our SPA. We ended up adopting the xhr.abort() approach.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1944268554">
	<div>
		<img src="https://disqus.com/api/users/avatars/larrylyons.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1944268554">2</a> by Larry C. Lyons
		posted on 4/3/2015 at 3:42 PM
		</div>
		<div class="comment_text"><p>I've used the BlockUI plugin. After including the library, I just use this default script:</p><p>$(document).ajaxStart($.blockUI).ajaxStop($.unblockUI);</p><p>then do my ajax calls as needed;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1944820568">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_gzoLcCA96L.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1944820568">3</a> by robocat
		posted on 4/3/2015 at 8:37 PM
		</div>
		<div class="comment_text"><p>A third solution is to only have one ajax call in-flight/active, and queue any further requests and send the requests after you get the first response (also makes webserver coding simpler because there can be no race conditions if state modified for that user).</p><p>Ideally requests need to be consolidated together (not very RESTful though).</p><p>If deleting the previous message, only delete messages of the same kind.</p><p>For example, desktop keyboard up key/down key row selection on a master grid with a child form:<br>1. Send request of selected row number immediately to give fast response <br>2. If lots of down presses queued, only need to keep last message.<br>3. Disable child form while waiting for response.<br>4. Use a whole page disabling spinner when user saves.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1945601246">
	<div>
		<img src="https://disqus.com/api/users/avatars/rejamesuk.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1945601246">4</a> by Rob James
		posted on 4/4/2015 at 11:03 AM
		</div>
		<div class="comment_text"><p>You can simplify that a little more actually. You don't need the active variable, or check the ready state - all you need to do is</p><p>if (xhr) xhr.abort();<br></p></div>
	</div>
</div>
		
<div class="comment" id="c_1945672422">
	<div>
		<img src="https://disqus.com/api/users/avatars/ryanguill.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1945672422">5</a> by Ryan Guill
		posted on 4/4/2015 at 12:30 PM
		</div>
		<div class="comment_text"><p>Usually what I do in those situations is send a token with the request that gets echo'd back with the response and if the response's token isn't the latest token i've sent then I ignore the response. I usually use a millisecond unix timestamp for the token but anything unique for that page request works fine.</p><p>but I like the idea of cancelling the ajax request.  On mobile that could make a difference if you had a lot of this going on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1945923975">
	<div>
		<img src="https://disqus.com/api/users/avatars/michielvaneerd.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1945923975">6</a> by Michiel van Eerd
		posted on 4/4/2015 at 4:05 PM
		</div>
		<div class="comment_text"><p>You could also use promises: when you return a Promise from a then callback, the next then waits on it to resolve. So if you use 1 Promise than you can synchonize tha calls and their result.</p><p>See the GitHub Gist:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fmichielvaneerd%2F9fd21fc85bd3293676ee%3AXGIc1ObHJjc_gnNTMlLxdtr9eQM&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/michielvaneerd/9fd21fc85bd3293676ee">https://gist.github.com/mic...</a></p><p>The response of getOne always returns after 10 milliseconds, and the response of getTwo always returns after 3000 milliseconds. If you call getTwo first and then immediately getOne, you still get the response of getOne after the response of getTwo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1946007449">
	<div>
		<img src="https://disqus.com/api/users/avatars/piotr_nalepa.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1946007449">7</a> by Piotr z blog.piotrnalepa.pl
		posted on 4/4/2015 at 5:05 PM
		</div>
		<div class="comment_text"><p>Another option is to debounce click event callback. With this implemented you start sending AJAX request after some (short, about 200-300ms) time. That way you could create idiot-proof interrfaces ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1948035756">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_D7WjqR9ojh.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1948035756">8</a> by David Parker
		posted on 4/5/2015 at 8:53 PM
		</div>
		<div class="comment_text"><p>What about adding button events to  an intermediate array? Then you can observe that and pop the 1st or successful result off the "stack"</p><p>Fast and cheap. Is that too simplistic?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1948389099">
	<div>
		<img src="https://disqus.com/api/users/avatars/simevidas.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1948389099">9</a> by Šime Vidas
		posted on 4/6/2015 at 2:39 AM
		</div>
		<div class="comment_text"><p>You can use the XHR <code>.readyState</code> property instead of the <code>active</code> variable:</p><p></p><pre><code><br>    if (xhr &amp;&amp; xhr.readyState &lt; 4) {<br></code></pre><p></p><p>😁</p><p>During a typical <code>$.getJSON</code> call, you get a bunch of <code>1</code>s and then a single <code>4</code> at the end: <a href="http://disq.us/url?url=http%3A%2F%2Fjsbin.com%2Fwayake%2Fedit%3Fjs%2Cconsole%3AB5b5OmJapvSjH8tikAWoYj6eSzo&amp;cuid=3321886" rel="nofollow noopener" title="http://jsbin.com/wayake/edit?js,console">http://jsbin.com/wayake/edi...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1948881015">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1948881015">10</a> (In reply to <a href="#c_1948389099">#9</a>) by Raymond Camden
		posted on 4/6/2015 at 1:00 PM
		</div>
		<div class="comment_text"><p>You know I tried that - and oddly it didn't seem consistent for me - but I was probably just doing it wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1948881901">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1948881901">11</a> (In reply to <a href="#c_1948035756">#8</a>) by Raymond Camden
		posted on 4/6/2015 at 1:01 PM
		</div>
		<div class="comment_text"><p>That seems more complex than simplistic. :) But I'd like to see that - can you share a JSBin?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1948882526">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1948882526">12</a> (In reply to <a href="#c_1946007449">#7</a>) by Raymond Camden
		posted on 4/6/2015 at 1:01 PM
		</div>
		<div class="comment_text"><p>That wouldn't help the main issue though. If the 1st click takes 3 seconds to work, and the second takes 0.5 seconds, we'd still have the same problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1948883795">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1948883795">13</a> (In reply to <a href="#c_1945923975">#6</a>) by Raymond Camden
		posted on 4/6/2015 at 1:03 PM
		</div>
		<div class="comment_text"><p>Pretty cool!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1949154084">
	<div>
		<img src="https://disqus.com/api/users/avatars/piotr_nalepa.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1949154084">14</a> (In reply to <a href="#c_1948882526">#12</a>) by Piotr z blog.piotrnalepa.pl
		posted on 4/6/2015 at 4:03 PM
		</div>
		<div class="comment_text"><p>I don't agree. I believe that after such a long time (3 sec) a user might want to see diferrent results so it shouldn't be an issue if the AJAX responses are quick.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1949249455">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1949249455">15</a> (In reply to <a href="#c_1949154084">#14</a>) by Raymond Camden
		posted on 4/6/2015 at 5:02 PM
		</div>
		<div class="comment_text"><p>But that's the problem I'm trying to solve here. User clicks 1, gets tired of waiting, clicks 2, sees the result, then sees 1's result come in, which imo is bad.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1950476932">
	<div>
		<img src="https://disqus.com/api/users/avatars/itmitica.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1950476932">16</a> (In reply to <a href="#c_1949249455">#15</a>) by Dumitru "Mitică" Ungureanu
		posted on 4/7/2015 at 10:03 AM
		</div>
		<div class="comment_text"><p>If an app is permitting several requests for the same token without checking for a response, then it creates the premise for DoS attacks.</p><p>Hence, I'd say you're trying to solve a problem that shouldn't exist in the first place.</p><p>Otherwise, allowing the user to make several AJAX calls, each regarding different tokens, and the user getting the responses in a different order, that's probably not something you should have to synchronize.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1950660499">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1950660499">17</a> (In reply to <a href="#c_1950476932">#16</a>) by Raymond Camden
		posted on 4/7/2015 at 1:03 PM
		</div>
		<div class="comment_text"><p>I wouldn't say this causes an opening for DoS. I mean shoot, even in my "fixed" version, all I need to do is copy the URL, open a new tab, and go crazy with reloads. By me fixing it, it has slowed down my time to get to the attack by about 30 seconds.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1951337714">
	<div>
		<img src="https://disqus.com/api/users/avatars/itmitica.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1951337714">18</a> (In reply to <a href="#c_1950660499">#17</a>) by Dumitru "Mitică" Ungureanu
		posted on 4/7/2015 at 6:59 PM
		</div>
		<div class="comment_text"><p>"I mean shoot, even in my "fixed" version, all I need to do is copy the URL, open a new tab, and go crazy with reloads."</p><p>It's something different. It's the equivalent of multiple users asking the same resource for the same token. It's normal operation mode. It has to do with the server load balance.</p><p>Your scenario, if I understood it correctly, is the equivalent of a single user being able to ask the same resource for the same token continuously. The fact that such a thing is possible in the first place, that's an issue. You should not have to "fix" this, "it" should not be possible to begin with.</p><p>Finally, the same user being able to ask the same resource for multiple tokens, that's also normal operation mode, as long as one token is fully resolved, one way or the other, before being able to ask for it again.</p><p>My point is, you're approaching this as a enhancement, I think it should be a requirement.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1951366851">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1951366851">19</a> (In reply to <a href="#c_1951337714">#18</a>) by Raymond Camden
		posted on 4/7/2015 at 7:15 PM
		</div>
		<div class="comment_text"><p>Maybe I don't understand you then. Given that URL X represents "info on product 1", how do you propose to stop me from requesting that N times a second? You can't - unless you do something on the server to block my traffic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1951394028">
	<div>
		<img src="https://disqus.com/api/users/avatars/itmitica.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1951394028">20</a> (In reply to <a href="#c_1951366851">#19</a>) by Dumitru "Mitică" Ungureanu
		posted on 4/7/2015 at 7:30 PM
		</div>
		<div class="comment_text"><p>Exactly my point: server and client mechanisms to stop unsatisfied requests from being issued over and over again under the same identical parameters are not optional, these are solid requirements from the get go.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1951400473">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1951400473">21</a> (In reply to <a href="#c_1951394028">#20</a>) by Raymond Camden
		posted on 4/7/2015 at 7:33 PM
		</div>
		<div class="comment_text"><p>I still don't think I'm understanding you. Are you saying you shouldn't do something on the client to provide a better experience because it doesn't stop a potentially DDOS attack? To me - that doesn't make sense. I think the changes described above help provide a better user experience, which is a good thing. Do they prevent a DDOS? No. Does this blog entry discuss DDOS? No. Is that an important topic? Sure - but it isn't relevant to this entry nor does it imply that what I propose here shouldn't be done. Imo, it should.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1951423097">
	<div>
		<img src="https://disqus.com/api/users/avatars/itmitica.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1951423097">22</a> (In reply to <a href="#c_1951400473">#21</a>) by Dumitru "Mitică" Ungureanu
		posted on 4/7/2015 at 7:45 PM
		</div>
		<div class="comment_text"><p>Let's recap.</p><p>You start by proposing a user can make parallel requests and get responses in a different order. For me this is perfectly fine, if we're talking about different tokens. Do you see an issue so far?</p><p>The point where I agree is when you identify a problem with the user (EDIT: user session ) being able to ask twice or more times for the same token regardless of the response loop back.</p><p>The point where I disagree is that this problem should not exist, to be fixed, in production. Beside possibly circumventing things like data correctness for the user, it's also a DoS vector.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1951432463">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1951432463">23</a> (In reply to <a href="#c_1951423097">#22</a>) by Raymond Camden
		posted on 4/7/2015 at 7:50 PM
		</div>
		<div class="comment_text"><p>But the whole point of this article is that the user is requesting -2- different URLs. It's one service, but its two different pieces of data. And the problem is - how do you ensure that if they quickly click twice, they don't see a result that may be confusing. ("I hit product 2 last, but I see product 1s info.") They aren't asking for the same token in my example, but rather 2 different ones.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1951436693">
	<div>
		<img src="https://disqus.com/api/users/avatars/itmitica.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1951436693">24</a> (In reply to <a href="#c_1951432463">#23</a>) by Dumitru "Mitică" Ungureanu
		posted on 4/7/2015 at 7:52 PM
		</div>
		<div class="comment_text"><p>It's only confusing if each response is not properly formulated, otherwise it doesn't really matter which response gets faster. Product 1 and product 2 have any relationship or dependence? If yes, the user should not be able to request but in a dependent manner.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1951444067">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1951444067">25</a> (In reply to <a href="#c_1951436693">#24</a>) by Raymond Camden
		posted on 4/7/2015 at 7:56 PM
		</div>
		<div class="comment_text"><p>Then I believe we will have to agree to disagree on this point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1980888020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1980888020">26</a> by Ravi
		posted on 4/22/2015 at 8:12 AM
		</div>
		<div class="comment_text"><p>Thanks Ray for the write up and your time. I have question say i have multiple async ajax request i make at the same time. how to handle such multiple request ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1981120958">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1981120958">27</a> (In reply to <a href="#c_1980888020">#26</a>) by Raymond Camden
		posted on 4/22/2015 at 12:22 PM
		</div>
		<div class="comment_text"><p>I'd look into promises. If you go to my YouTube channel and view my jQuery tutorial series, I have one on just that topic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2259449410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2259449410">28</a> by Dave Whit
		posted on 9/17/2015 at 9:57 PM
		</div>
		<div class="comment_text"><p>I realize this is an old post but thought I'd chime in. This seems like a perfect case for async.series why go through all this trouble?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2259450608">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2259450608">29</a> (In reply to <a href="#c_2259449410">#28</a>) by Raymond Camden
		posted on 9/17/2015 at 9:58 PM
		</div>
		<div class="comment_text"><p>Can you talk about what this is and how it would act?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2285397455">
	<div>
		<img src="https://disqus.com/api/users/avatars/pradeepchinwan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2285397455">30</a> by pradeep chinwan
		posted on 10/2/2015 at 11:38 AM
		</div>
		<div class="comment_text"><p>i'm stuck on this problem last 2 days....finally got it.........!!!!!!!!!!!!!!!!!!!!!</p><p>thanks a lot</p></div>
	</div>
</div>
		
<div class="comment" id="c_2308584820">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_cTRpX29UeW.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2308584820">31</a> by rWb
		posted on 10/15/2015 at 12:36 PM
		</div>
		<div class="comment_text"><p>I have written - when I was still very inexperienced in JS - an async queue manager that adds functions calls and ajax calls to a queue and runs them one-by-one and queue-after-queue to handle these cases with an added please wait animation. I don't do this that much lately as I found there is nothing wrong about getting data back in the wrong order and solved dependencies with deffered objects which are also good for animations by the way.</p><p>Anyway code is here without the fluff I have around it: <a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2Frawbits%2FfgxtdLL9%2F%3A4W4ShbQxTiwvYcJpWiVQ_f_1zsc&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/rawbits/fgxtdLL9/">http://jsfiddle.net/rawbits...</a><br>Not runnable in the fiddle though but perfectly working - at least I don't found any bugs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2614332348">
	<div>
		<img src="https://disqus.com/api/users/avatars/dmitrizzle.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2614332348">32</a> by dmitrizzle
		posted on 4/9/2016 at 9:11 AM
		</div>
		<div class="comment_text"><p>I have a related question. My application loads bits of JS and JSON as required using AJAX. Occasionally though it would make a request to the same or same series of files. Ideally I don't want to do a server request for something that's in the memory already (files can be assumed to be static). What would be the best way you'd recommend I control for that?</p><p>One (important) thing to keep in mind is that the way my scripts are built is to wait for the files to load and then perform a series of tasks within onComplete{}. Is the only way to do this is to store variables that count whatever's been loaded? Or is there another way that would mean a lot less code restructuring for me?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2616125131">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2616125131">33</a> (In reply to <a href="#c_2614332348">#32</a>) by Raymond Camden
		posted on 4/10/2016 at 2:42 PM
		</div>
		<div class="comment_text"><p>I'd look into client-side storage. Modern browsers provide multiple ways to cache things in RAM/disk and let you fetch them later. I even wrote a book on it. :) (If you go to the About page here, you can see a link both to the book and to the video series I have on the topic.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2631742618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2631742618">34</a> by Subba
		posted on 4/19/2016 at 3:44 PM
		</div>
		<div class="comment_text"><p>My Application , am calling a single ajax call when i call it loads the json file and when i select field in that it loads another json , here also one more link to json it also loading , here am increasing to pass one application to another application , ajax calls increasing and background also calling with each request , number of background pages increasing constantly</p></div>
	</div>
</div>
		
<div class="comment" id="c_2631763110">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2631763110">35</a> (In reply to <a href="#c_2631742618">#34</a>) by Raymond Camden
		posted on 4/19/2016 at 3:56 PM
		</div>
		<div class="comment_text"><p>Ok - is that a question?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2845039860">
	<div>
		<img src="https://disqus.com/api/users/avatars/ezion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2845039860">36</a> by ezion
		posted on 8/18/2016 at 11:13 PM
		</div>
		<div class="comment_text"><p>I ran into this same problem but came to a different solution than the ones mentioned  so  far. Though its similar to the send a token to and fro method mentioned by Ryan Guill below.<br>Extending object prototypes is a no no in JS. However extending instances is OK, as long you avoid name collisions. <br>By adding a myToken property to the XMLHttpRequest object instance you can see if the response handler is dealing with the request you want. If not, either ignore the result or when readyState &lt; 4 abort() the request.</p><p>in code:</p><p>var LastEvent ; // this has to be global</p><p>function sendRequest(php, data) {<br>        ....var xhttp=new XMLHttpRequest();<br>        ........if (xhttp){<br>............xhttp.open("POST",php); <br>                ............xhttp.onreadystatechange=handleResponse;</p><p>                ............xhttp.myToken=getToken();    // get a unique identifier<br>............LastEvent=xhttp.myToken;     // and remember the last one</p><p>         ............xhttp.setRequestHeader("Content-type", "application/x-www-form-urlencoded");<br>         ............xhttp.send(data);<br>........}else alert("Get a better browser");<br>}</p><p>function handleResponse(e){</p><p>....if(LastEvent==this.myToken){ // Is this the response we want?</p><p>.........if (this.readyState==4){ <br>.............if (this.status==200){<br>            .................alert(this.responseText); // Do something with the result</p><p>.............}else alert(this.responseText); // Or show what went wrong</p><p>.........}else this.abort(); // Get rid of this request<br>....}<br>....e.stopPropagation();<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_3163366125">
	<div>
		<img src="https://disqus.com/api/users/avatars/server4001.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3163366125">37</a> by Brice Bentler
		posted on 2/19/2017 at 5:36 AM
		</div>
		<div class="comment_text"><p>Extremely helpful. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3794398542">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_EldrJaqMUs.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3794398542">38</a> by Harsha Vardhan
		posted on 3/9/2018 at 7:57 AM
		</div>
		<div class="comment_text"><p>Thanks a lot for sharing !! I</p></div>
	</div>
</div>
		
<div class="comment" id="c_3816110495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3816110495">39</a> by billy
		posted on 3/20/2018 at 9:44 PM
		</div>
		<div class="comment_text"><p><b>Thank you!</b></p></div>
	</div>
</div>
		
<div class="comment" id="c_3849873618">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_GDmKtBIOnI.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3849873618">40</a> by meric
		posted on 4/11/2018 at 12:49 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, I'm trying to use your code, but I couldn't get it done. I'm trying to run a different query.php with  the click of each button. I tried several ways, but couldn't make it. Something like this? &lt;button data-prodid="query1.php" class="loadButton"&gt;Load One&lt;/button&gt; but it didn't work. how can I do that using your code? please. thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3849891426">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3849891426">41</a> (In reply to <a href="#c_3849873618">#40</a>) by Raymond Camden
		posted on 4/11/2018 at 1:02 PM
		</div>
		<div class="comment_text"><p>The data-prodid attribute is storing an ID value that gets read and made part of the request. But the request is to a hard coded ColdFusion file. You want to change that to your PHP and keep prodid as ID values.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3849905771">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_GDmKtBIOnI.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3849905771">42</a> (In reply to <a href="#c_3849891426">#41</a>) by meric
		posted on 4/11/2018 at 1:12 PM
		</div>
		<div class="comment_text"><p>yes, I wanted to run an sql query with the button click. I have several buttons, and actually have a working code for this, but it is very messy and long with repetitions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3849936232">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3849936232">43</a> (In reply to <a href="#c_3849905771">#42</a>) by Raymond Camden
		posted on 4/11/2018 at 1:32 PM
		</div>
		<div class="comment_text"><p>Cool... so you got it? I can't tell by your comment if you got it working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3849940105">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_GDmKtBIOnI.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3849940105">44</a> (In reply to <a href="#c_3849936232">#43</a>) by meric
		posted on 4/11/2018 at 1:35 PM
		</div>
		<div class="comment_text"><p>No, unfortunately, I couldn't use your code for this. I came across your page when I was looking for a simpler code to replace my existing code. At the moment, i use this code, and for every button, i repeat it. :</p><p>&lt;script type="text/javascript"&gt;<br>function loadXMLDoc1()<br>{<br>var xmlhttp;<br>if (window.XMLHttpRequest)<br>{<br> xmlhttp=new XMLHttpRequest();<br>}<br>else<br>{<br>  xmlhttp=new ActiveXObject("Microsoft.XMLHTTP");<br>}<br>     xmlhttp.onreadystatechange=function()<br>{<br>    if (xmlhttp.readyState==4 &amp;&amp; xmlhttp.status==200)<br>    {<br>        document.getElementById("querydiv").innerHTML=xmlhttp.responseText;<br>    }<br>  }<br><a href="http://disq.us/url?url=http%3A%2F%2Fxmlhttp.open%3AKxbnNCbje5fFlTo9Xxaq-W1kv6s&amp;cuid=3321886" rel="nofollow noopener" title="xmlhttp.open">xmlhttp.open</a>("GET","query1.php",true);<br>xmlhttp.send();</p><p>}<br>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_3849977499">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3849977499">45</a> (In reply to <a href="#c_3849940105">#44</a>) by Raymond Camden
		posted on 4/11/2018 at 1:59 PM
		</div>
		<div class="comment_text"><p>Ok... but I explained how to fix the code though. You were using the URL in data-prodid, which in my demo represented a value you wanted to pass in to the back end service. If you literally change my jQuery code to point to your PHP and change the prodid values to be IDs, it should work. Of course, that assumes your back end code is a similar demo to mine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3850020992">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_GDmKtBIOnI.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3850020992">46</a> (In reply to <a href="#c_3849977499">#45</a>) by meric
		posted on 4/11/2018 at 2:14 PM
		</div>
		<div class="comment_text"><p>Thanks, Raymond! I'll work on that. Have a great day!</p></div>
	</div>
</div>
		