
<div class="comment" id="c_1713744454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744454">1</a> by Rodney
		posted on 6/2/2013 at 10:51 AM
		</div>
		<div class="comment_text"><p>Thanks - I do find that if I use a frequency of 200 then the shake event fires multiple times - e.g. 3 times on Ripple Emulator and on my Android S4. I set it to 500 and it seems to only fire once. Is it possible to adapt the code to only fire once and then not fire again if it is within a small period of time (after a few seconds it should keep listening)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744452">2</a> by Raymond Camden
		posted on 6/2/2013 at 5:24 PM
		</div>
		<div class="comment_text"><p>It is kind of cheesy, but use a global var: paused</p><p>When you begin the shake do:</p><p>paused=true;<br>window.setTimeout(clearPause, 2000);</p><p>clearPause will set paused to false. And before you do your shake. check if paused is true.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744457">3</a> by Rodney
		posted on 7/6/2013 at 11:25 AM
		</div>
		<div class="comment_text"><p>Thanks, that worked. It is very sensitive!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1799710659">
	<div>
		<img src="https://disqus.com/api/users/avatars/rossrawlins.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1799710659">4</a> by Ross Rawlins
		posted on 1/18/2015 at 3:56 PM
		</div>
		<div class="comment_text"><p>have you got a version of this with angular and ngcordova working?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1799735668">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1799735668">5</a> (In reply to <a href="#c_1799710659">#4</a>) by Raymond Camden
		posted on 1/18/2015 at 4:16 PM
		</div>
		<div class="comment_text"><p>No, but honestly, it's one event handler and a func to determine if it was a shake. Fairly trivial, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1799740358">
	<div>
		<img src="https://disqus.com/api/users/avatars/rossrawlins.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1799740358">6</a> (In reply to <a href="#c_1799735668">#5</a>) by Ross Rawlins
		posted on 1/18/2015 at 4:20 PM
		</div>
		<div class="comment_text"><p>I havent been able to understand how ngCordova plugin works so I know if seems easy for you but I havent grasped this on yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1799743769">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1799743769">7</a> (In reply to <a href="#c_1799740358">#6</a>) by Raymond Camden
		posted on 1/18/2015 at 4:22 PM
		</div>
		<div class="comment_text"><p>How ngCordova works in general? It's mainly a Angular-friendly promisey- version of Cordova stuff. If you don't understand ngCordova in general, I'd suggest their docs of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1799745985">
	<div>
		<img src="https://disqus.com/api/users/avatars/rossrawlins.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1799745985">8</a> (In reply to <a href="#c_1799743769">#7</a>) by Ross Rawlins
		posted on 1/18/2015 at 4:24 PM
		</div>
		<div class="comment_text"><p>I know how to implement all their plugins. Its just the device motion I cant seem to get anything to fire with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1799756896">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1799756896">9</a> (In reply to <a href="#c_1799745985">#8</a>) by Raymond Camden
		posted on 1/18/2015 at 4:30 PM
		</div>
		<div class="comment_text"><p>Well when you tried, what error did you get?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1799760536">
	<div>
		<img src="https://disqus.com/api/users/avatars/rossrawlins.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1799760536">10</a> (In reply to <a href="#c_1799756896">#9</a>) by Ross Rawlins
		posted on 1/18/2015 at 4:33 PM
		</div>
		<div class="comment_text"><p>thats the thing in ripple it tells me it detect device motion of undefined because ngCordova plugins dont work in ripple. and when I run it on a device I cant see anything that is going on no alerts are firing at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1799762121">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1799762121">11</a> (In reply to <a href="#c_1799760536">#10</a>) by Raymond Camden
		posted on 1/18/2015 at 4:35 PM
		</div>
		<div class="comment_text"><p>Ok, well first off, I'd remove Ripple from the picture as it is quite old. If you don't know how to debug, you need to learn about remote debugging. Chrome and Safari make this easy and powerful. If you go to the About Me page on this blog, look at my list of articles, and I've got two covering these features. It will help quite a bit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1799765786">
	<div>
		<img src="https://disqus.com/api/users/avatars/rossrawlins.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1799765786">12</a> (In reply to <a href="#c_1799762121">#11</a>) by Ross Rawlins
		posted on 1/18/2015 at 4:38 PM
		</div>
		<div class="comment_text"><p>thanks I will try; I have used the adobe debugger but that doesnt work becuase of angular.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1799766738">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1799766738">13</a> (In reply to <a href="#c_1799765786">#12</a>) by Raymond Camden
		posted on 1/18/2015 at 4:38 PM
		</div>
		<div class="comment_text"><p>What Adobe debugger?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1799772240">
	<div>
		<img src="https://disqus.com/api/users/avatars/rossrawlins.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1799772240">14</a> (In reply to <a href="#c_1799766738">#13</a>) by Ross Rawlins
		posted on 1/18/2015 at 4:42 PM
		</div>
		<div class="comment_text"><p>with phonegap you can build your app through adobe build and there you can select to allow debugging then when you deploy the app and you can debug it on your computer while it is on the device. But this isnt working with angular yet. its called weinre I think.</p><p>I also looked at your about me page and I know of edge, and I dont have a make. I will have to look at the code again and try see how I can get a response of some sorts.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fngcordova.com%2Fdocs%2Fplugins%2FdeviceMotion%2F%3Ab5HFyEEbq5QY9374DMXTdYiFRh4&amp;cuid=3321886" rel="nofollow noopener" title="http://ngcordova.com/docs/plugins/deviceMotion/">http://ngcordova.com/docs/p...</a></p><p>thats the example code that I cant get to fire off any time let alone after a shake.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1799774161">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1799774161">15</a> (In reply to <a href="#c_1799772240">#14</a>) by Raymond Camden
		posted on 1/18/2015 at 4:43 PM
		</div>
		<div class="comment_text"><p>Oh wow, you mean Adobe PhoneGap Builder. Ok. "Adobe Debugger" didn't mean anything to me. So yes, it uses Weinre, and that was made *before* remote debugging was an option. You only use it if you are using a device not supported by remote debugging. Trust me - check out my articles. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2341543711">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_y1MvIHTAqa.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2341543711">16</a> by Aaron Mason
		posted on 11/3/2015 at 11:27 PM
		</div>
		<div class="comment_text"><p>I see a potential issue with your code:</p><p>if(deltaX + deltaY + deltaZ &gt; 3) {</p><p>That probably won't add deltaX, deltaY and deltaZ and then see if the value is greater than 3 - it most likely adds deltaX, deltaY and "deltaZ &gt; 3", which may be 1 or 0 depending on whether or not deltaZ is greater than three.</p><p>The code below will produce the desired result:</p><p>if((deltaX + deltaY + deltaZ) &gt; 3) {</p><p>As a programming lecturer once told me, parentheses are free, never rely on order of operations.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2341781405">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2341781405">17</a> (In reply to <a href="#c_2341543711">#16</a>) by Raymond Camden
		posted on 11/4/2015 at 3:04 AM
		</div>
		<div class="comment_text"><p>From what I see here, <a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.mozilla.org%2Fen-US%2Fdocs%2FWeb%2FJavaScript%2FReference%2FOperators%2FOperator_Precedence%3AtTAFbH1delU25mxFYoEgGpOvjfs&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Operator_Precedence">https://developer.mozilla.o...</a>, it looks like addition takes priority. Did you test? You are right though that parenthesis wouldn't hurt.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2343190722">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_y1MvIHTAqa.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2343190722">18</a> (In reply to <a href="#c_2341781405">#17</a>) by Aaron Mason
		posted on 11/4/2015 at 10:08 PM
		</div>
		<div class="comment_text"><p>I stand corrected.  Even in C it seems addition takes priority.  Thanks, I learned something new today.</p></div>
	</div>
</div>
		