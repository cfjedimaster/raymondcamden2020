
<div class="comment" id="c_1713675924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675924">1</a> by Tom Mollerus
		posted on 1/9/2008 at 2:42 AM
		</div>
		<div class="comment_text"><p>I'll jump in with an opinion on what a staging server is for, beyond that it's "where you deploy your work for folks to look at - before it goes to production", as Ray says. The purpose of a staging server is to be able to predict how your code will operate on the live server-- before you actually send it live. Therefore, the staging environment and hardware should be as close as possible to that of your live server. Also, the idea is that you're only testing a few things at a time on your staging server before they become live code.</p><p>The dev server, on the other hand, will probably have a lot of altered code on it as you develop new features or upgrade old code. It's okay to deal with errors on the dev server since you may be experimenting. Now here's the biggest reason for a separate dev server and staging server: on the dev server, you can't really fully test the performance of one feature because you may be changing so many pieces of code at one time that the changes affect each other. On the staging box, you keep the changes down to a minimum at any one time so that you know what set of code is causing errors and what isn't.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675925">2</a> by Marcin
		posted on 1/9/2008 at 2:53 AM
		</div>
		<div class="comment_text"><p>When I worked for a large corporate, with separate dev and admin teams we had Dev, UAT, Staging, Production.  UAT (I suppose you could call it Integration Testing) was the equivalent of staging above, we (the devs) could put changes up for the business to review in a stable environment.  On our staging server however we had no administrative privileges and only the Admins could deploy changes into staging - this allowed us to make sure the deployment process would also be tested and any issues sorted out before the admins deployed to production.</p><p>That was the "design", in practice I had people from other dev teams calling me when I broke the dev server (I delighted in telling them "tough luck, you shouldn't have dependencies, use UAT"), the admins we're undertrained and needed hand holding through the deployment (onto a server product that they should have known better), etc. Anyway, that's irrelevant now :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675927">3</a> by Phil Duba
		posted on 1/9/2008 at 3:10 AM
		</div>
		<div class="comment_text"><p>I'm kind of in the same boat as Marcin. In the various places I worked, we had a dev, test/qa, staging, and production servers. Dev was more or less our own box with working copies of source control and a centralized db and test/qa was for our qa department to test new functionality and bug fixes per internal processes. Staging really was used for seeing how new items would perform with production data as the server tied to the production db. Only a few people had access to the server and even less knew the web address of it (IP restricted, etc.). It also served as the "push-ready" box for deployments and so it served the purpose of generating replications to the production environment.<br>Where I am at now, we're going through this same definition and trying to understand how it fits into our workflow which consists of not only developers and qa folks, but also designers and content developers. I think this might be one topic where there will be a good number of definitions/suggestions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675926">4</a> by Damon Gentry
		posted on 1/9/2008 at 3:46 AM
		</div>
		<div class="comment_text"><p>I work for a rather large company and I support several development teams.  The number of environments that you use is highly dependent upon the needs of the application.  For example, our intranet site has but 2 environments (dev and production).  Another application has 5 (dev, integration, qa, staging, and production).  The number of environments that you have is determined by the amount of testing you need, and the insulation you may be required to have when testing.  For example:</p><p>Unit Testing: Should be done in the 'dev' environment, by developers.  If it's done anywhere else (or not at all), you need new developers.<br>Functional Testing: Should be done by both developers and QA staff in an 'integration' environment.<br>Regression Testing: Should be done by developers and QA staff in a 'qa' environment.<br>Load Testing: Should be done by QA staff in a 'staging' environment where you can put load on the system without affecting production traffic.</p><p>Basically, the more testing you do, the more environments you may need.  While you can combine environments for testing purposes, you will have to share these environments during individual testing phases.  At some point, you (or your manager) may see the benefits of spending money on a separate environment.</p><p>Additional environments can be logical (less cost: VMWare, additional JVMs) or physical (more cost: new hardware, licensing).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675935">5</a> by Damon Gentry
		posted on 1/9/2008 at 3:50 AM
		</div>
		<div class="comment_text"><p>One more note.  I always advocate (if possible) to have 'environmental integrity'.  This means that the 'staging' server does NOT have access to the 'production' database.  Each tier of the application should be connected to its equivalent environment.  QA code, QA database, QA message queue, and so on.  This is not always practical, but it certainly has benefits if you can keep your environments clean.</p><p>*I never like to see DSNs labeled 'Foo_Prod', and 'Foo_QA'.  Your code should simply reference 'Foo' and let the environment configuration determine which database you are actually connected to.</p><p>* Although I don't like it, I still support some apps that work this way. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675938">6</a> by Sean Corfield
		posted on 1/9/2008 at 11:26 AM
		</div>
		<div class="comment_text"><p>FWIW, here's how it went down at Macromedia:</p><p>We had five or six shared dev servers. Every dev had a full localhost env but we had autobuilds to each dev server based on trunk or a specific branch in CVS. We could upload patches to a dev server during the day for basic integration testing. The idea was that dev was "stable"-ish with builds once a day.</p><p>We also had five or six QA servers. Some of these had night autobuilds, some of these were controlled builds. They were meant to represent stable builds for QA to test bug fixes and also for internal demos. Again it was all based on trunk and branches.</p><p>We had a pre-production clustered setup for staging / integration / load testing. This was a small mirror of production with tightly controlled builds. Normally it holds a copy of production for bug triage etc. Just prior to a deployment, it holds a copy of the new build for load testing and final QA.</p><p>Then there was production - the big cluster. During deployments, after staging was verified, we would deploy to part of production but reconnect the staging web servers to that subset of production and retest. Once QA signed off, we would roll the changes across production, swapping in updated servers to the cluster as we swapped out old servers so we could update the code.</p><p>That's how it worked when I was still on Web Team a few years ago. It may have changed since then. It worked well and I'd happily implement a similar system for any company.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675944">7</a> by Rob Wilkerson
		posted on 1/9/2008 at 10:27 PM
		</div>
		<div class="comment_text"><p>@Marcin -</p><p>"On our staging server however we had no administrative privileges and only the Admins could deploy changes into staging - this allowed us to make sure the deployment process would also be tested and any issues sorted out before the admins deployed to production."</p><p>I do exactly the same thing with my team.  Not because I don't trust them on the staging server or I'm afraid they'll screw something up, but because I need to ensure that the application's (automated) deployment process is as smooth as it can be and that any additional steps that - for any reason - cannot be automated are documented thoroughly enough that I'm comfortable I'll be able to deploy to production without missing anything.</p><p>This is critical nuance of why a staging server should employed, I think.</p></div>
	</div>
</div>
		