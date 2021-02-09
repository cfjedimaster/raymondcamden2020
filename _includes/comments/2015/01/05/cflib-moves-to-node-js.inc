
<div class="comment" id="c_1773631149">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_rsmvX4Rvdo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1773631149">1</a> by Andy Matthews
		posted on 1/5/2015 at 10:11 PM
		</div>
		<div class="comment_text"><p>Is it still dynamic? You should write static pages, or perhaps cache them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1773637403">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1773637403">2</a> (In reply to <a href="#c_1773631149">#1</a>) by Raymond Camden
		posted on 1/5/2015 at 10:15 PM
		</div>
		<div class="comment_text"><p>Heh, well, it is Node, so yes. ;) I considered HarpJS, but, I only wanted to go that route if I was going to EOL (End of Life) CFLib, and I don't want to do that. I do think it will continue to grow over the year. I felt like Harp would be a bit too complex to get working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1773648674">
	<div>
		<img src="https://disqus.com/api/users/avatars/marcins.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1773648674">3</a> by Marcin
		posted on 1/5/2015 at 10:24 PM
		</div>
		<div class="comment_text"><p>Not sure if you've written about this before Ray, but how do you deploy your Node stuff? Do you use Heroku or similar?</p><p>Currently working on my first full NodeJS / Express site (a side project), running it on my own VPS though - running it behind Nginx, with "forever" to keep it running, and using Capistrano to do the deploy. All working well for now, but feels a bit cobbled together.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1773652181">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1773652181">4</a> (In reply to <a href="#c_1773648674">#3</a>) by Raymond Camden
		posted on 1/5/2015 at 10:27 PM
		</div>
		<div class="comment_text"><p>I use AppFog. I reviewed them a while ago. I prefer Modulus, but for the price, AppFog is better for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1773897596">
	<div>
		<img src="https://disqus.com/api/users/avatars/ryanguill.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1773897596">5</a> by Ryan Guill
		posted on 1/6/2015 at 1:25 AM
		</div>
		<div class="comment_text"><p>Nice stuff, and thanks for open sourcing it.  I haven't written any express apps yet, but we have been writing quite a few node apps and really enjoying it. I definitely sympathise with you about code organization though, knowing when and how to split files is something we are still working on.</p><p>With mongo, did you run into anything complicated with CFLib that made you wish you had something more like SQL, or was everything pretty straight forward?  I actually like SQL, but would like to play more with the NoSQL stuff - I'm currently leaning towards postgres with the JSON columns to get the best of both worlds, but interested in real world experience with mongo.</p><p>As far as suggestions go, if you aren't averse to adding a few packages:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fwww.npmjs.com%2Fpackage%2Fnconf%3AJyRahvZH98O73in5P1FpXUaA1Mo&amp;cuid=3321886" rel="nofollow noopener" title="https://www.npmjs.com/package/nconf">https://www.npmjs.com/packa...</a> is great for multi layer configuration - you can take configuration from files, arguments, environment variables and have defaults - and you can configure what takes precedence.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fwww.npmjs.com%2Fpackage%2Flodash%3A1r7fFG-kEfKYQAH95V8AfH5lP0I&amp;cuid=3321886" rel="nofollow noopener" title="https://www.npmjs.com/package/lodash">https://www.npmjs.com/packa...</a> has tons of utility functions for collections and other things that make a whole lot of your data massaging easier.  For instance, a reduce in your udfcount code would clean up a lot of the boilerplate and reduce the signal to noise - I believe there is an Array.reduce built in with node, but lodash has a lot of other stuff too. (If you would rather go more functional, <a href="https://disq.us/url?url=https%3A%2F%2Fwww.npmjs.com%2Fpackage%2Framda%3AQ_hzIn8E6bV2pJPhJgkX4hb4ZFo&amp;cuid=3321886" rel="nofollow noopener" title="https://www.npmjs.com/package/ramda">https://www.npmjs.com/packa...</a> looks nice - its similar though.  Lodash is much more widely used)</p><p>JSHint with a .jshintrc file can help with the organization too, at least insofar as it will help keep everything consistent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1773974601">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1773974601">6</a> (In reply to <a href="#c_1773897596">#5</a>) by Raymond Camden
		posted on 1/6/2015 at 2:30 AM
		</div>
		<div class="comment_text"><p>Hmm. I ran into a few oddities - but mainly because I was very unfamiliar with Mongo. I had used it years ago with CF (and in fact, I use cfmongo to create my database, I should have mentioned that), but it had been quite some time and I wasn't familiar with the APIs. Add Mongoose on top, which is cool, but I was also unfamiliar with it too. Everything was easy, I just had trouble learning (well, learning enough to use it) both at once and getting confused between the two of them.</p><p>I liked that my complex data (args for UDFs) went from a wddx packet in the database to actual arrays of objects in Mongo.</p><p>I also ran into an issue searching by name. I had to add a duplicate property, lname, to let me match names and ignore case.</p><p>Outside of that, I think it was all kosher.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1773986611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1773986611">7</a> by Aaron
		posted on 1/6/2015 at 2:40 AM
		</div>
		<div class="comment_text"><p>I just have to ask.  A ColdFusion library site that isn't running on ColdFusion?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1773993735">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1773993735">8</a> (In reply to <a href="#c_1773986611">#7</a>) by Raymond Camden
		posted on 1/6/2015 at 2:46 AM
		</div>
		<div class="comment_text"><p>Totally fair. :) I'm slowly turning off my main server which means shutting down my CF box. I've got one Google Compute engine for this blog and AppFog for Node apps. Trying to simplify.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1774258980">
	<div>
		<img src="https://disqus.com/api/users/avatars/jeanmoniatte.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1774258980">9</a> (In reply to <a href="#c_1773993735">#8</a>) by Jean Moniatte
		posted on 1/6/2015 at 8:03 AM
		</div>
		<div class="comment_text"><p>Congrats on the node.js migration, but I have to agree with Aaron, it's weird that the site is not running on ColdFusion. Plenty of options exist for running ColdFusion at very low cost, your personal server situation should not be the question. Especially for a site that has been fed with content over the years by the community.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1774390846">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1774390846">10</a> (In reply to <a href="#c_1774258980">#9</a>) by Raymond Camden
		posted on 1/6/2015 at 11:22 AM
		</div>
		<div class="comment_text"><p>"Plenty of options exist for running ColdFusion at very low cost"</p><p>Sure, but I also wanted to use something I already had - AppFog. I pay AppFog 20 bucks a month for N instances, so I had one to spare.</p><p>"Especially for a site that has been fed with content over the years by the community."<br>Not sure how this applies. Are you saying people who submitted content may be upset? Their content is still there. I didn't take it away.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1774396062">
	<div>
		<img src="https://disqus.com/api/users/avatars/jeanmoniatte.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1774396062">11</a> (In reply to <a href="#c_1774390846">#10</a>) by Jean Moniatte
		posted on 1/6/2015 at 11:27 AM
		</div>
		<div class="comment_text"><p>I think that being a website about ColdFusion it should be powered by ColdFusion. That's all I wanted to say.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1774398409">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1774398409">12</a> (In reply to <a href="#c_1774396062">#11</a>) by Raymond Camden
		posted on 1/6/2015 at 11:29 AM
		</div>
		<div class="comment_text"><p>Ok. I don't agree - but ok. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1774718490">
	<div>
		<img src="https://disqus.com/api/users/avatars/markdrew74.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1774718490">13</a> (In reply to <a href="#c_1774398409">#12</a>) by markdrew74
		posted on 1/6/2015 at 3:45 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Frailodocs.org%3AW2hIwceOy6vkltwrxdPJraXUSLo&amp;cuid=3321886" rel="nofollow noopener" title="railodocs.org">railodocs.org</a> is powered by nodejs too,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1774727670">
	<div>
		<img src="https://disqus.com/api/users/avatars/jeanmoniatte.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1774727670">14</a> (In reply to <a href="#c_1774718490">#13</a>) by Jean Moniatte
		posted on 1/6/2015 at 3:52 PM
		</div>
		<div class="comment_text"><p>All right then. I don't get it, but all right :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1774971025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1774971025">15</a> (In reply to <a href="#c_1774398409">#12</a>) by David McCan
		posted on 1/6/2015 at 6:01 PM
		</div>
		<div class="comment_text"><p>Imagine this:  A guy works for Ford designing cars.  When his daughter graduates college he buys her a Toyota.  Whatever his reasons, it is easy to interpret that decision as making some kind of statement.  For example, the guys neighbor sees the new car and thinks, "Wow, he must not have much confidence in Ford cars if he buys Toyota for his family."</p><p>As a luminary in the ColdFusion community, when you migrate your sites from ColdFusion to something else, likewise it might be seen as making some kind of statement, whether you meant it to or not. Jean's comment might be prompted by the thought that when visitors to CFLib or ColdFusionBloggers see they are written in Node.js those visitors might think something along the lines of "Wow, they don't have a lot of confidence in ColdFusion if they don't trust it to run their sites."</p><p>I understand that you are "scratching your own itch" and working with Node.js because you want or need to learn about it, while providing helpful resources for others.  I understand that you are not "disrespecting" ColdFusion by doing a project with Node (queue Rodney Dangerfield), but perhaps on a "meta" level you made a statement whether you meant to or not.</p><p>The Node and PhoneGap articles (and your 2014 reading list for that matter) are interesting to me, just like your ColdFusion articles.  It is cool that you are exploring and sharing across a wide range of web technologies and not limiting yourself to ColdFusion.  I have a lot of appreciation and respect for you.  Thank you for sharing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1775018392">
	<div>
		<img src="https://disqus.com/api/users/avatars/miguel_f.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1775018392">16</a> (In reply to <a href="#c_1774971025">#15</a>) by Miguel-F
		posted on 1/6/2015 at 6:21 PM
		</div>
		<div class="comment_text"><p>Well said...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1775053235">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1775053235">17</a> (In reply to <a href="#c_1774971025">#15</a>) by Raymond Camden
		posted on 1/6/2015 at 6:41 PM
		</div>
		<div class="comment_text"><p>I think that's a fair statement to make. I *do* (currently) work for Adobe and I can see how it does make a statement when I use other technologies than CF.</p><p>If there is any "meta statement" I'd like folks to get it is that there are more options for the server-side stack than CF. I think folks already know that, I knew that, but I never really did much else outside of CF over the past decade or so.</p><p>I feel like I've evangelized, unofficially, ColdFusion, for most of my life, and honestly, I don't know if I can anymore. I still care about CF. I want to see CF12 - and I want to test it, file bugs, etc. I still want to present on it (I just did one a few weeks back). But I don't know if I want to be "responsible" any more for trying to get it to succeed. I tried for 10+ years to officially become the evangelist for the product and it never worked out. I stood by while others, normally people I had never heard of, get selected for that role. (To be clear, good people. :) Maybe that's a sign that I'm not the best luminary for it. Maybe I'm taking it too personally. (Likely, I have the fragile ego of a teenager.)</p><p>All I want is to help others. That was originally just for CF, but now is more client-side, hybrid dev, "general web", etc, with CF just being one part of it.</p><p>I'll probably regret writing this - but I'm beyond caring. (To be clear, beyond caring about "product", not about yall folks here in this conversation, I *hope* that is clear!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1775144605">
	<div>
		<img src="https://disqus.com/api/users/avatars/Adam_Cameron.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1775144605">18</a> by Adam Cameron
		posted on 1/6/2015 at 7:29 PM
		</div>
		<div class="comment_text"><p>Jesus. One would need to have a very very narrow view of our industry to pass judgement on Ray for using something other than CF for the <a href="http://disq.us/url?url=http%3A%2F%2Fcflib.org%3A_xxzCNK-l1o46U5-IF400HiKZ0A&amp;cuid=3321886" rel="nofollow noopener" title="cflib.org">cflib.org</a> site.</p><p>Ray is NOT an evangelist for CF (well: in his spare time he is, but it's not his job), and as far as I know he has nothing to do with CF at Adobe. Also <a href="http://disq.us/url?url=http%3A%2F%2Fcflib.org%3A_xxzCNK-l1o46U5-IF400HiKZ0A&amp;cuid=3321886" rel="nofollow noopener" title="cflib.org">cflib.org</a> is not an Adobe site, or an "official" project. Plus he does it in his spare time. So it's completely up to him what he chooses to use for it.</p><p>Equally, how bloody naive to think that just because Ray is a CF expert and *likes* it that it is immediately either the automatic best fit for what he's doing at a given point in time? That's gobsmacking. Even before stopping to consider he might simply be a bit bored with CFML - he's been doing it for an age, and its appeal as far as "doing new stuff" wears off after a while, I can tell you - and he simply might have used this *personal project* as an opportunity to learn something new and compelling.</p><p>What a bunch of - foolish - ingrates.</p><p>Also... quick show of hands... who amongst the commenters here have CFML-run community-aimed websites that you pour a lot of time into, and have made the CFML community a much much better place? [Adam is amongst those not raising his hand].</p></div>
	</div>
</div>
		
<div class="comment" id="c_1775223374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1775223374">19</a> (In reply to <a href="#c_1775053235">#17</a>) by David McCan
		posted on 1/6/2015 at 8:12 PM
		</div>
		<div class="comment_text"><p>You weren't the ColdFusion product evangelist?  Wow, I guess sometimes the virtual has a more significant impact than the real.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1775327819">
	<div>
		<img src="https://disqus.com/api/users/avatars/michaelzock.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1775327819">20</a> by Michael Zock
		posted on 1/6/2015 at 9:11 PM
		</div>
		<div class="comment_text"><p>I wouldn't write off relational databases just yet. Both major types have their advantages and disadvantages (and don't forget graph databases, but that's a different can of worms).</p><p>As for using Node instead of CFML, part of a developer's job is to pick the most efficient tool for the job at hand (Why use a giant 18-wheeler when a panel van can get the job done in a shorter time?) and to know that the decades old way isn't the only way of doing things.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1775464539">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1775464539">21</a> (In reply to <a href="#c_1775223374">#19</a>) by Raymond Camden
		posted on 1/6/2015 at 10:37 PM
		</div>
		<div class="comment_text"><p>Thanks David. It wasn't for lack of trying...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1778559986">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_uunjLgj1n9.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1778559986">22</a> by John Allen
		posted on 1/8/2015 at 4:48 PM
		</div>
		<div class="comment_text"><p>This is cool! Have you checked out GeddyJS as a front controller framework? It's a little more prescriptive than Express (which I also like). I've been using both and Geddy just 'feels' right as an MVC implementation especially coming from the family of ColdFusion frameworks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1782059448">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1782059448">23</a> (In reply to <a href="#c_1778559986">#22</a>) by Raymond Camden
		posted on 1/9/2015 at 12:18 PM
		</div>
		<div class="comment_text"><p>I have not. I took a look at it yesterday and it looks interesting. Going to try to play with it soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1786464840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1786464840">24</a> (In reply to <a href="#c_1773993735">#8</a>) by Aaron
		posted on 1/11/2015 at 4:12 AM
		</div>
		<div class="comment_text"><p>If I'd known you'd receive the types of comments my question generated  I would have kept my mouth shut.  Your a champ for the CF community, the comments are undeserving.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1786964462">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1786964462">25</a> (In reply to <a href="#c_1786464840">#24</a>) by Raymond Camden
		posted on 1/11/2015 at 3:27 PM
		</div>
		<div class="comment_text"><p>Spirited discussion is what makes this community so fun. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1790597920">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ELMfn1m7kJ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1790597920">26</a> (In reply to <a href="#c_1775144605">#18</a>) by gary gilbert
		posted on 1/13/2015 at 4:58 PM
		</div>
		<div class="comment_text"><p>can I NOT raise my hand too?</p></div>
	</div>
</div>
		