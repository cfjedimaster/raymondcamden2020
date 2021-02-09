
<div class="comment" id="c_2236725799">
	<div>
		<img src="https://disqus.com/api/users/avatars/timmaybrown.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2236725799">1</a> by Tim Brown
		posted on 9/4/2015 at 10:15 PM
		</div>
		<div class="comment_text"><p>Couldn't agree more with how frustrating JSON is in ACF. I love Coldfusion, but wish they could just get this part right. If I have to resort to looping my property names and extending Nadel's serializer.cfc like in this gist ( <a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Ftimmaybrown%2F7226809%3A2JmSm7R4Hkk5yXq1cjav7YhYO0U&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/timmaybrown/7226809">https://gist.github.com/tim...</a> ) just to get dynamic proper casing and data typing of my JSON returns, it becomes a question of why am I working so hard and makes me think about other technologies. It looks like Lucee has addressed this for quite sometime ( <a href="http://disq.us/url?url=http%3A%2F%2Ftrycf.com%2Fgist%2F9277c5dd8a14766d029f%2Flucee%3Ftheme%3Dmonokai%3A40DyeMDcXTIo8Uaj6F8LaO5Cn_o&amp;cuid=3321886" rel="nofollow noopener" title="http://trycf.com/gist/9277c5dd8a14766d029f/lucee?theme=monokai">http://trycf.com/gist/9277c...</a> )... I guess I need to be more agressive in my switch to Lucee for all my applications as I'm tired of fighting against the grain on my REST API development on ACF...</p></div>
	</div>
</div>
		
<div class="comment" id="c_2236757135">
	<div>
		<img src="https://disqus.com/api/users/avatars/rogertubby.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2236757135">2</a> by roger tubby
		posted on 9/4/2015 at 10:40 PM
		</div>
		<div class="comment_text"><p>Unit tests? If so, you would think they would like to publish them so we can all run on our instances. (This is part of the same company that also doesn't test its other products [Flash, Acrobat] very well.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2237381647">
	<div>
		<img src="https://disqus.com/api/users/avatars/danakowalski.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2237381647">3</a> by Dana Kowalski
		posted on 9/5/2015 at 11:18 AM
		</div>
		<div class="comment_text"><p>"Before I manage my APIs, I want 100% certainty that they actually process data correctly."</p><p>-- this</p></div>
	</div>
</div>
		
<div class="comment" id="c_2237521345">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_uC8iW86l6S.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2237521345">4</a> by Gary F
		posted on 9/5/2015 at 1:48 PM
		</div>
		<div class="comment_text"><p>When I first read about serialization problems many, many years ago (just after CF8's release?) I thought "oh dear, I don't trust that function". So ever since I've rolled my own json output from CF. It doesn't do Adobe's reputation any good and if there are any newbies to CF they'll wonder why their json is broken and go through the same pain that others did many years before them.</p><p>I recommend they create a new function called toJSON() which is 100% new, bug-free, and doesn't matter if it's incompatible with serializeJSON() as this won't break anyone's code using the "legacy" function. This would seam so logical in order to move forwards. Start fresh.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2237959620">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfvonner.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2237959620">5</a> by Carl Von Stetten
		posted on 9/5/2015 at 7:06 PM
		</div>
		<div class="comment_text"><p>One gripe I have is that if you specify JSON as the returntype for remote CFCs so that the proper mime type is set, you are locked into implicitly executing SerializeJSON on the return variable. You can't use a roll-your-own serializer or your return variable will get double-serialized.</p><p>If Adobe can't figure out how to get serialization to work in a safe and sane manner, then I agree they should just stop trying and deprecate the mess they created. </p></div>
	</div>
</div>
		
<div class="comment" id="c_2238781979">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2238781979">6</a> (In reply to <a href="#c_2237959620">#5</a>) by Raymond Camden
		posted on 9/6/2015 at 9:58 AM
		</div>
		<div class="comment_text"><p>Actually, you can. You can specify a custom serializer in CF11.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2244061652">
	<div>
		<img src="https://disqus.com/api/users/avatars/petertilbrook.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2244061652">7</a> by Peter Tilbrook
		posted on 9/9/2015 at 10:44 AM
		</div>
		<div class="comment_text"><p>Just started using the Stripe payment gateway. All sorts of complicated CF "solutions" out there. I ended up ussing CFHTTP over SSL. Works a treat. In three lines of code and no MAPPINGS or Application.cfc bullshit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2246963327">
	<div>
		<img src="https://disqus.com/api/users/avatars/claytonreeves.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2246963327">8</a> (In reply to <a href="#c_2244061652">#7</a>) by Clayton Reeves
		posted on 9/10/2015 at 8:53 PM
		</div>
		<div class="comment_text"><p>You should look at <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fphilcruz%2FStripe.cfc%3AFyzn-X5rWJT6TepwNqNtv_NONRw&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/philcruz/Stripe.cfc">https://github.com/philcruz...</a>, there is a lot of functionality in there and works very quickly and easily.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2247979256">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ziYkbnZHSn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2247979256">9</a> by Matt Woodward
		posted on 9/11/2015 at 1:05 PM
		</div>
		<div class="comment_text"><p>I made changes in OpenBD a few years back to make JSON serialization work as it always should have in CFML (and apparently still doesn't in ACF), and the changes were not difficult to make at all. Fixing the case issues and the problems with numbers made things SO much nicer. Moot point to me now since I don't do CF anymore, but kinda hard to believe this is still a thing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2332934236">
	<div>
		<img src="https://disqus.com/api/users/avatars/bennadel.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2332934236">10</a> by Ben Nadel
		posted on 10/29/2015 at 12:58 PM
		</div>
		<div class="comment_text"><p>I've been feeling a lot of the same frustrations as well. From a "render this page," standpoint, ColdFusion is still just unbelievably powerful. You can literally create a working page with a single .CFM file that includes the text "Hello World.". While a trite example, the same with something like Node.js requires many more steps - probably using express, configuring an HTTP service, port forward, etc.</p><p>But, when it comes to JSON, which we use a LOT these days, ColdFusion is just one headache after another. ColdFusion is at the point where it makes some things super easy, and some things super hard.</p><p>That said, it's still my go-to tool anytime I want to spin up something quick and have it just "work" out of the box.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2332966047">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2332966047">11</a> (In reply to <a href="#c_2332934236">#10</a>) by Raymond Camden
		posted on 10/29/2015 at 1:20 PM
		</div>
		<div class="comment_text"><p>I think your point about "just making a page" is very valid. In Node, that means me making a route first and then adding the code I want to test.</p><p>However...</p><p>I think this is a mental... um... "mistake" (not the best word) on my part. I'm so used to building CF pages where I write a CFM under web root and hit it with my browser.</p><p>I forget that I can just write foo.js and node it. I don't need a web server. I can just execute it as is.</p><p>I mean I *know* this, but I swear it just doesn't seem to click in my brain sometimes.</p><p>Of course, CF has a CLI now with CommandBox so it has something similar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2333002630">
	<div>
		<img src="https://disqus.com/api/users/avatars/bennadel.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2333002630">12</a> (In reply to <a href="#c_2332966047">#11</a>) by Ben Nadel
		posted on 10/29/2015 at 1:44 PM
		</div>
		<div class="comment_text"><p>Yeah, that's true. I definitely catch myself making a cookie-cutter HTML page sometimes when I just want to test something in JavaScript, because I forget I can just `node thing.js` to test.</p><p>But, really, what I mean is that if I wanted to just make a silly page where it was like a count-down clock until the new Star Wars movie, I could literally create a .cfm file with a dateDiff() call and a writeOuptut() call and then point IIS or Apache at it, and its done. There is something so powerful about that.</p><p>Of course, I'm skimming over the fact that ColdFusion had to be installed and configured to work with something like IIS or nginx. But, once you eat that upfront cost, there is next to no cost for adding 2-N sites to the same box. No worrying about IP forwarding or all that stuff.</p><p>I don't know.... maybe this is all just the "curse of knowledge" and ColdFusion just feels easier because I know it and it's already installed. Maybe Node.js people feel the same way about spinning up a new Express instance and configuring Nginx.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2333009630">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2333009630">13</a> (In reply to <a href="#c_2333002630">#12</a>) by Raymond Camden
		posted on 10/29/2015 at 1:48 PM
		</div>
		<div class="comment_text"><p>Heh, I'd just use JavaScript and create a static site and host it via Surge or S3. No servers at all. Nothing to break. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2584928072">
	<div>
		<img src="https://disqus.com/api/users/avatars/richardspector.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2584928072">14</a> (In reply to <a href="#c_2333009630">#13</a>) by Richard Spector
		posted on 3/23/2016 at 2:07 PM
		</div>
		<div class="comment_text"><p>webstorm editor is awesome you can build and edit the js then just run it from the editor without having to node js it</p></div>
	</div>
</div>
		