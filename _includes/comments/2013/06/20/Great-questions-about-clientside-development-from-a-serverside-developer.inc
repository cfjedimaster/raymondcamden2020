
<div class="comment" id="c_1713747368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747368">1</a> by Paul
		posted on 6/21/2013 at 6:44 PM
		</div>
		<div class="comment_text"><p>I started playing with AJAX at my last job and fell in love with it. My current job prevents me from using AJAX as much because everything has to be compliant with Section 508. Nothing about responsive design prevents a site from being 508-compliant, but poorly implemented AJAX can.</p><p>I would like to see more information on how to properly design a site that uses AJAX to asynchronously update the information on the page while remaining 508-compliant.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747348">2</a> by Jeromy French
		posted on 6/21/2013 at 7:25 PM
		</div>
		<div class="comment_text"><p>@Paul: you seek "Progressive Enhancement".</p><p>Progressive Enhancement is a development technique that stresses the primacy of the semantic HTML, then testing for browser-capability and conditionally "layering" on JavaScript and/or CSS enhancements for the browsers that can utilize those enhancements.</p><p>One of the keys is understanding that we're testing for what the browser can do, as opposed to browser-sniffing. Modernizr is a very popular browser-capability test suite.</p><p>Progressive-Enhancement is inherently (section 508) accessible; it provides for meeting the letter of the law and the spirit of the rule.</p><p>The Filament Group wrote the excellent "Designing With Progressive Enhancement" book (<a href="http://disq.us/url?url=http%3A%2F%2Ffilamentgroup.com%2Fdwpe%2F%29%3AYodgyzLLJE0r2DZItV3jXauVURY&amp;cuid=3321886" rel="nofollow noopener" title="http://filamentgroup.com/dwpe/)">http://filamentgroup.com/dw...</a> on the subject. (I am not affiliated with Filament Group, though they are so freaking smart I wish I were.)</p><p>Check out "A List Apart's" excellent intro (<a href="http://disq.us/url?url=http%3A%2F%2Falistapart.com%2Farticle%2Funderstandingprogressiveenhancement%29%3AY7L3vRqxg6wmRsqGygJolRxLg2w&amp;cuid=3321886" rel="nofollow noopener" title="http://alistapart.com/article/understandingprogressiveenhancement)">http://alistapart.com/artic...</a> on the topic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747364">3</a> by Phillip Senn
		posted on 6/21/2013 at 9:39 PM
		</div>
		<div class="comment_text"><p>I learned this morning about another framework called Meteor where they say "the same language you use to set up jQuery slider plugins can also be used to query your app’s database!"<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.smashingmagazine.com%2F2013%2F06%2F13%2Fbuild-app-45-minutes-meteor%2F%3Futm_source%3Djavascriptweekly%26utm_medium%3Demail%3ADsVoa8i0tEeWP9vnkBrFQnIoyYc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.smashingmagazine.com/2013/06/13/build-app-45-minutes-meteor/?utm_source=javascriptweekly&amp;utm_medium=email">http://www.smashingmagazine...</a></p><p>I think the economics of having a shared ColdFusion or Railo account make it not worth the effort for me to use JavaScript.  ColdFusion is much easier to work with than JavaScript.</p><p>That being said, even ColdFusion can be daunting - after doing a lot of plunking around, I decided not to use ORM and to even discontinue using cfquery.  Instead, I now use the new cfscript hotness setSQL and execute inside of scripted components. This of course requires ColdFusion 9+.</p><p>So even if you stick with what seems to be the simpler approach, there is still a lot to learn/relearn.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747357">4</a> by Raymond Camden
		posted on 6/22/2013 at 4:49 PM
		</div>
		<div class="comment_text"><p>"I think the economics of having a shared ColdFusion or Railo account make it not worth the effort for me to use JavaScript. ColdFusion is much easier to work with than JavaScript."</p><p>I'm sorry - can you explain this? I fail to see how the cost of CF, or the lack of cost of Railo, would stop you from using JavaScript.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747359">5</a> by Phillip Senn
		posted on 6/22/2013 at 7:14 PM
		</div>
		<div class="comment_text"><p>It might be tempting to replace all ColdFusion code with node.js or another JavaScript library like Meteor.  But JavaScript is a much harder language to work with, and the cost of running ColdFusion is not that prohibitive.</p><p>One argument might be that writing server side code in the same language as their client side code would make things simpler.  But ColdFusion code is already simple.  I struggle with JavaScript.  When I get into the ColdFusion lane, it's clear sailing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747360">6</a> by Raymond Camden
		posted on 6/22/2013 at 7:22 PM
		</div>
		<div class="comment_text"><p>You're talking about replacing CF with another server-side platform. That isn't at all what we are talking about. The original person was asking if you could replace server-side code with client-side code. JS on the Server isn't client-side code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747365">7</a> by Brian FitzGerald
		posted on 6/24/2013 at 6:14 PM
		</div>
		<div class="comment_text"><p>@Raymond, Phillip may not be talking about exactly the same thing in terms of smarter clients vs. leaner clients, but he does bring up another point which is core to the main discussion. As clients get smarter and more of the app is written javascript, at what point does it make sense to then consider "standardizing" the code across the client and server with one language by using something like Node.js as he describes.</p><p>Not that I'm looking for you to provide this answer, but it is does open up another set of the million and one considerations that are out there regarding how we might architect a modern application that will naturally be more js heavy than something that was written in years past.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747363">8</a> by Raymond Camden
		posted on 6/24/2013 at 6:18 PM
		</div>
		<div class="comment_text"><p>I think it would be a consideration. If I were a client-side dev who did not have server-side experience, something like Node would be *very* appealing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747361">9</a> by Brian FitzGerald
		posted on 6/24/2013 at 6:29 PM
		</div>
		<div class="comment_text"><p>To add a bit to that, @Phillip, I think we can agree that JavaScript will make it's way into your application one way or another. You simply cannot write a modern web application without JavaScript, so avoiding it altogether is certainly not a feasible option.</p><p>There are techniques, however, that you can certainly employ which will aide in keeping more of your code (and business logic) on the server and away from the client, which I think would be more central to the main theme of the discussion. Even relatively simple js, though, tends to get unwieldy quickly, leading you to quickly realize "you're going to need something" to help manage it (quoting the feeling that Ray describes in the article).</p><p>One such example I have recently faced in my own projects is the decision between (when making ajax calls) whether to return markup rendered in a cf template (the server-heavy approach) vs. going the more modern approach and returning straight json and handing the rendering of the markup using a client side templating system like handlebars (the smarter-client approach).</p><p>For the moment, I have begun porting my markup into handlebars in order to transfer less data over the wire (json being lighter weight than html), but it is a bit of a tedious process as I have always been in the habit of writing my template markup in cf, meaning there are many templates to refactor. With that said, if you wanted to let cf do more of the work, arguments can certainly be made that would keep the js side of your application lighter by continuing to render the templates on the server.</p><p>Nothing groundbreaking of course, just thought I would share an example of something I am dealing with along these lines.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747366">10</a> by Raymond Camden
		posted on 6/24/2013 at 6:32 PM
		</div>
		<div class="comment_text"><p>Brian - just to make things even more confusing (grin), the folks at Twitter actually ended up moving *away* from templating on the client. They found that for older browsers, they could get better performance doing the rendering on the server and returning HTML.</p><p>I'm not saying that you should follow the same, client-side templating works fine for me and I recommend it, just putting the thought in your head.</p><p>There's many way to skin the cat so to speak in web development. That's what keeps the hair gray. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747367">11</a> by Brian FitzGerald
		posted on 6/24/2013 at 6:51 PM
		</div>
		<div class="comment_text"><p>Haha yes Ray, it would be too easy otherwise :) I think that's what makes this line of work so much fun though (at least that's what my optimistic side tells me). I guess in the end we all need to decide for our specific projects and user demographics what makes the most sense.</p><p>I hadn't heard that about Twitter's decision though, thank you for sharing. For what it's worth, I did come across this performance comparison by Ryan Florence written last year where he provides a nice analysis and even has a series of test requests that run and return realtime speed results. Anyone can check it out here if interested:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fryanflorence.com%2F2012%2Fclient-v-server-templating%2F%3AAvCaEU3eWvNz46kuT_47BpX2soY&amp;cuid=3321886" rel="nofollow noopener" title="http://ryanflorence.com/2012/client-v-server-templating/">http://ryanflorence.com/201...</a></p></div>
	</div>
</div>
		