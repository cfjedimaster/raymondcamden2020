
<div class="comment" id="c_2140355564">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2140355564">1</a> by Raymond Camden
		posted on 7/16/2015 at 7:18 PM
		</div>
		<div class="comment_text"><p>If anyone wants to track this bug, it is bug id 21859864.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2141371308">
	<div>
		<img src="https://disqus.com/api/users/avatars/simevidas.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2141371308">2</a> (In reply to <a href="#c_2140355564">#1</a>) by Šime Vidas
		posted on 7/17/2015 at 3:07 AM
		</div>
		<div class="comment_text"><p>It’s not in WebKit Bugzilla? <a href="https://disq.us/url?url=https%3A%2F%2Fbugs.webkit.org%2Fshow_bug.cgi%3Fid%3D21859864%3AtNth9bbgzAszh042QTRkF-eTGg4&amp;cuid=3321886" rel="nofollow noopener" title="https://bugs.webkit.org/show_bug.cgi?id=21859864">https://bugs.webkit.org/sho...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2141497550">
	<div>
		<img src="https://disqus.com/api/users/avatars/simevidas.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2141497550">3</a> by Šime Vidas
		posted on 7/17/2015 at 5:34 AM
		</div>
		<div class="comment_text"><p>I’ve also tested in Firefox, Edge and IE11 (demo: <a href="http://disq.us/url?url=http%3A%2F%2Foutput.jsbin.com%2Fxorogo%2Fquiet%3AlOoIdII6fJHvE3_dDKsWkqGQpDg&amp;cuid=3321886" rel="nofollow noopener" title="http://output.jsbin.com/xorogo/quiet">http://output.jsbin.com/xor...</a> ); they match Chrome. Safari is the outlier here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2141605135">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_mq5ypxPnfw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2141605135">4</a> by meandmycode
		posted on 7/17/2015 at 7:51 AM
		</div>
		<div class="comment_text"><p>In your example, the API does not specify Cache-Control, so I believe it's non specified behavior (user agent is free to cache as it wishes). Due to the nature of that API endpoint being transient you should outreach to them to add in 'Cache-Control: no-cache', that way they are being explicit about the ability for the result to be cached (which is cannot). Cache busting works, but as a general solution it just completely writes off caching.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2141818750">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2141818750">5</a> (In reply to <a href="#c_2141371308">#2</a>) by Raymond Camden
		posted on 7/17/2015 at 11:32 AM
		</div>
		<div class="comment_text"><p>A Safari engineer had me add it to <a href="http://disq.us/url?url=http%3A%2F%2Fbugreport.apple.com%3ASSoFed8Jcv99Qiwu7VLBnz-t0BA&amp;cuid=3321886" rel="nofollow noopener" title="bugreport.apple.com">bugreport.apple.com</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2141819659">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2141819659">6</a> (In reply to <a href="#c_2141605135">#4</a>) by Raymond Camden
		posted on 7/17/2015 at 11:33 AM
		</div>
		<div class="comment_text"><p>I agree with you that the API provider should absolutely do that, but as I said in the post, this is nothing to do with the fact that it is caching, but the fact that there is no *developer* feedback that XHR requests 2-10 were skipped due to the cache. Make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2141907530">
	<div>
		<img src="https://disqus.com/api/users/avatars/WolffenGeist.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2141907530">7</a> by WolffenGeist
		posted on 7/17/2015 at 12:45 PM
		</div>
		<div class="comment_text"><p>If you add the argument cache: false to your ajax call, does it still pull just the one record and make only one call?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2141936983">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2141936983">8</a> (In reply to <a href="#c_2141907530">#7</a>) by Raymond Camden
		posted on 7/17/2015 at 1:01 PM
		</div>
		<div class="comment_text"><p>To be clear, even if it did, that isn't the issue. I feel like I'm not being clear here. :) I can work around the issue w/ a random value in the URL, and maybe cache:false would work too. But that isn't the problem. The problem is that when Safari decides to not make a network request, it needs to _report_ this to the developer. Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2141964881">
	<div>
		<img src="https://disqus.com/api/users/avatars/WolffenGeist.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2141964881">9</a> (In reply to <a href="#c_2141936983">#8</a>) by WolffenGeist
		posted on 7/17/2015 at 1:20 PM
		</div>
		<div class="comment_text"><p>Absolutely makes sense. If I'm remembering correctly, IE8 and IE9 do the same thing. Basically they just cache the request and don't bother making the additional calls. The cache: false argument works similar to adding a random value to the URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2141972533">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2141972533">10</a> (In reply to <a href="#c_2141964881">#9</a>) by Raymond Camden
		posted on 7/17/2015 at 1:25 PM
		</div>
		<div class="comment_text"><p>Nice little hack by jQuery there. I was using Angular in the 'real' code, and I know they have their own caching system, but I wonder if they have a hack like this too. FYI, I tried testing my code in IE11 and it worked perfectly. If I had an IE8 VM around I'd check it there too. (Again, not to see it cache, but to see if the dev tools back then showed it.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2142343370">
	<div>
		<img src="https://disqus.com/api/users/avatars/simevidas.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2142343370">11</a> (In reply to <a href="#c_2141907530">#7</a>) by Šime Vidas
		posted on 7/17/2015 at 4:30 PM
		</div>
		<div class="comment_text"><p>Adding <code>cache: false</code> makes Safari behave like the other browsers (test: <a href="http://disq.us/url?url=http%3A%2F%2Fjsbin.com%2Fqidaro%2Fedit%3Fjs%2Coutput%3A0rhGo_CS3Jul6AgY3gAUZXZJSLY&amp;cuid=3321886" rel="nofollow noopener" title="http://jsbin.com/qidaro/edit?js,output">http://jsbin.com/qidaro/edi...</a> ). I’ll have to remember that “cache: false for Safari” rule.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2142372140">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2142372140">12</a> (In reply to <a href="#c_2142343370">#11</a>) by Raymond Camden
		posted on 7/17/2015 at 4:47 PM
		</div>
		<div class="comment_text"><p>Of course - that's only jQuery. Did anyone check the Angular docs to see if $http has something similar? (Yes, I'm being lazy.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2142706542">
	<div>
		<img src="https://disqus.com/api/users/avatars/kylemcnally.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2142706542">13</a> (In reply to <a href="#c_2142372140">#12</a>) by Sparticuz
		posted on 7/17/2015 at 7:59 PM
		</div>
		<div class="comment_text"><p>Yep $http.get(url,{cache:false})</p></div>
	</div>
</div>
		
<div class="comment" id="c_2803787349">
	<div>
		<img src="https://disqus.com/api/users/avatars/ligaz.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2803787349">14</a> by Stefan Dobrev
		posted on 7/26/2016 at 8:09 AM
		</div>
		<div class="comment_text"><p>We just got bitten by this bug. The strange thing is that it happens only the very first time the page is opened.</p><p>In our case we are using content negotiation and returning either JSON or HTML based on the `Accept` header sent from the client.</p><p>Has your bug report been addressed? I was unable to find it in Apple's database.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2804288166">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2804288166">15</a> (In reply to <a href="#c_2803787349">#14</a>) by Raymond Camden
		posted on 7/26/2016 at 2:45 PM
		</div>
		<div class="comment_text"><p>I don't know. I don't even know where the code is anymore.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2804292619">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2804292619">16</a> (In reply to <a href="#c_2803787349">#14</a>) by Raymond Camden
		posted on 7/26/2016 at 2:46 PM
		</div>
		<div class="comment_text"><p>Ok, I found it, but not sure how to link to it. Bug ID is 21859864.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2804303981">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2804303981">17</a> (In reply to <a href="#c_2803787349">#14</a>) by Raymond Camden
		posted on 7/26/2016 at 2:53 PM
		</div>
		<div class="comment_text"><p>Looks to still exist.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2804305372">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2804305372">18</a> (In reply to <a href="#c_2803787349">#14</a>) by Raymond Camden
		posted on 7/26/2016 at 2:54 PM
		</div>
		<div class="comment_text"><p>As an FYI, I consistently see this: For my 10 calls, calls 2-10 are duplicates. So for 10 calls, I get 2 distinct values.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2845704124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2845704124">19</a> by diegopf
		posted on 8/19/2016 at 10:37 AM
		</div>
		<div class="comment_text"><p>Thank you Raymond for share this! It has been very helpful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3741659440">
	<div>
		<img src="https://disqus.com/api/users/avatars/gwmdr.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3741659440">20</a> by gwmdr
		posted on 2/4/2018 at 3:15 AM
		</div>
		<div class="comment_text"><p>Years later, Safari still returns 200 even when the file hasn't changed. And, it reads it from disk cache. Why isn't it returning 304 ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3743505587">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3743505587">21</a> (In reply to <a href="#c_3741659440">#20</a>) by Raymond Camden
		posted on 2/5/2018 at 1:34 PM
		</div>
		<div class="comment_text"><p>You got me. I should have filed a bug report for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4184879172">
	<div>
		<img src="https://disqus.com/api/users/avatars/OliverJAsh.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4184879172">22</a> by OliverJAsh
		posted on 11/8/2018 at 2:36 PM
		</div>
		<div class="comment_text"><p>Some people have mentioned a filed bug with ID 21859864.</p><p>Unfortunately Apple are mean and they don't let you view other people's bug reports: <a href="https://disq.us/url?url=https%3A%2F%2Fstackoverflow.com%2Fa%2F145223%2F5932012%3AsJ9Mzbx0I5fZRnlsNNQVE9LGuF8&amp;cuid=3321886" rel="nofollow noopener" title="https://stackoverflow.com/a/145223/5932012">https://stackoverflow.com/a...</a></p><p>However, I believe I have found another filed issue for this over on the WebKit bug tracker. Open since 2014 :-|</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fbugs.webkit.org%2Fshow_bug.cgi%3Fid%3D134105%3A5m3_w3-KTbqQSZdxZN6j8O35P1o&amp;cuid=3321886" rel="nofollow noopener" title="https://bugs.webkit.org/show_bug.cgi?id=134105">https://bugs.webkit.org/sho...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_5217978370">
	<div>
		<img src="https://disqus.com/api/users/avatars/izbickikuba.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5217978370">23</a> by Izbicki Kuba
		posted on 1/8/2021 at 12:35 PM
		</div>
		<div class="comment_text"><p>This issue is still present, on macos 14 in safari, and also on ios 14 on safari and chrome apps. Im doing 4 GET requests to a single url with a 200ms delay between each, but safari's network tab shows only a single request.</p></div>
	</div>
</div>
		