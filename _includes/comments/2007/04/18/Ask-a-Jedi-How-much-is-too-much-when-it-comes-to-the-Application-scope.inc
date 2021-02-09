
<div class="comment" id="c_1713664231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664231">1</a> by Phillip Senn
		posted on 4/18/2007 at 5:42 PM
		</div>
		<div class="comment_text"><p>I'm more of a database kind of guy, so I would first start with the database.<br>Right now you suspect that the application scope is the bottleneck, but it may not be.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664228">2</a> by Raymond Camden
		posted on 4/18/2007 at 5:46 PM
		</div>
		<div class="comment_text"><p>Duh. Very good point there Phillip. He shouldn't assume it is the app scope just because it is large. _Darn_ good point there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664205">3</a> by Michael Schmidt
		posted on 4/18/2007 at 6:20 PM
		</div>
		<div class="comment_text"><p>It might also help to explain what exactly the Application Scope was intended for.  In my opinion the Application Scope is for variables that will not change.  Ones you can write once and then only read them.</p><p>The problem with the Application Scope containing variables that might change is a few, I have worked on applications that get put on a server farm environment.  Then if you use application variables it is a pain trying to get all the variables sync'd up properly.<br>  I have worked on a system that was using Application scope for everything.  Then we decided to expand on it and place applications within it.  And then we ran into similar  problems. <br>   Application Scope can save some space and some database reads, just make sure you are using it appropriately and are prepared to change it if your future changes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664229">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664229">4</a> by tof
		posted on 4/18/2007 at 6:22 PM
		</div>
		<div class="comment_text"><p>haha, 1999 keys? how could you resist the temptation of creating just one more? I know I couldn't.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664215">5</a> by kenneth
		posted on 4/18/2007 at 6:31 PM
		</div>
		<div class="comment_text"><p>Load testing is the best way to see where your architecture problems are.   Throw hundreds of users at the app and see what happens to memory.   I just got FusionReactor so don't know it very well but <a href="http://disq.us/url?url=http%3A%2F%2Fwww.opensta.org%3AsUHCfe5ZvZOLVAqQ-rDWyVA_qOQ&amp;cuid=3321886" rel="nofollow noopener" title="www.opensta.org">www.opensta.org</a> is a decent tool that will do the job.  You can track many metrics including memory, page request time, db time, etc. etc. as users start to hit the application in groups.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664221">6</a> by Terrence P Ryan
		posted on 4/18/2007 at 6:37 PM
		</div>
		<div class="comment_text"><p>Another thing to consider is: "Are you storing information there that belongs in a completely different technology?"</p><p>I've seen application scopes hold font and color information. That belongs in CSS, unless you have strong reason for putting it in the application scope.</p><p>Granted they still aren't pushing the application scope outside of its memory footprint, but the application would be slightly slower performing on the client side due to larger download size of your pages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664224">7</a> by Joe Mastroianni
		posted on 4/18/2007 at 6:38 PM
		</div>
		<div class="comment_text"><p>Another issue with a lot of storage in the application scope has to do with being in a cluster. If you ever need to refresh the scope, you need to do so on each instance of CF in the cluster. We had some issues with this over here. I've learned to try and not rely on the application scope as much becuase of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664219">8</a> by Raymond Camden
		posted on 4/18/2007 at 6:59 PM
		</div>
		<div class="comment_text"><p>The Server Monitor in CF8 does show you, per application, how much RAM is being used, even to the detail of RAM per Application variable. FYI - remember NDA folks, I asked before I posted this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664220">9</a> by Justice
		posted on 4/18/2007 at 7:54 PM
		</div>
		<div class="comment_text"><p>I had an app with colors and fonts all specified in a DB, and it would do a DB query for EACH key it needed, ie heading_font was a query, heading_color another, etc.</p><p>Make seperate CSS files for each customer, and have 1 application for each.</p><p>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664226">10</a> by Tom Mollerus
		posted on 4/18/2007 at 7:58 PM
		</div>
		<div class="comment_text"><p>Nearly 2000 keys in a structure may sound like a lot to us, but I doubt it's a big deal to a CPU.  And remember, it's not as if the server has to run a search on the key out of all 200 of them-- I'm willing to bet that the memory space for that key is already mapped out.</p><p>I think the better questions that have been mentioned so far are "are the application-scope variables necessary?" and "is the code maintainable?"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664225">11</a> by DK
		posted on 4/18/2007 at 8:07 PM
		</div>
		<div class="comment_text"><p>I tend to agree with the first post. 8 times out of 10 the bottlneck is database related. The first thing to check imho are the indexes on larger tables ... and see if they need to be revisited, and if scheduled maintenance runs in mssql to rebuild them nightly/weekly/etc. You would be amazed at the increase revisiting these items can make especially if your schema has evolved.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664210">12</a> by Chris Mallinson
		posted on 4/18/2007 at 8:42 PM
		</div>
		<div class="comment_text"><p>I ran a content management system a few years ago, and we were having rpblems due to a slow database connection.  As a last ditch effore, I cached the entire content of the site in the App scope (well over 10,000 pages on HTML content).  The application absolutely screams, and this is an intranet site with over a million hits per day.  Loading up the Application scope, and refrshing with each change in content has not caused a problem in two years.  It sounds like a lot of content, but it's less than a 100MB of data, and if you have sufficient RAM, I say go for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664211">13</a> by Nathan Dintenfass
		posted on 4/18/2007 at 9:12 PM
		</div>
		<div class="comment_text"><p>@tof -- the answer is obvious: because then they could not party like it's 1999.</p><p>But, seriously -- having lots of keys is not inherently bad (and 2000 is not "lots" from a struct lookup sense on modern hardware), but it's a red flag that the underlying "architecture" was not terribly well thought out.  I'd focus on a higher level of abstraction in rethinking how things work (and as has been pointed out -- never underestimate the power of some good indexes in a database to dramatically improve things) before you worry about how many keys you have in the Application scope -- if you are going to refactor anyway, the Application scope questions will take care of themselves as part of the bigger picture.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664209">14</a> by tony petruzzi
		posted on 4/18/2007 at 9:49 PM
		</div>
		<div class="comment_text"><p>To start with you could off load some the stuff in the application scope into the request scope. Particularly the stuff that customizes the application. Another benefit about doing this is you don't to reinit the whole application when change a customized setting or correct a spelling error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664235">15</a> by Jaime Metcher
		posted on 4/19/2007 at 1:38 AM
		</div>
		<div class="comment_text"><p>I'm with Chris.  The performance levels we get from servers today are totally reliant on layers of caching.  I want my DB server to cache the entire database in RAM, I want my CF server to cache every compiled tag in RAM, and I want the user's browser to cache every bit of static content it can.  *And* I want to cache every CFC instance I create during a session in the Session scope, and every CFC instance that's used across sessions in the Application scope.  I don't care how many keys that is - just tell me how much memory and I'll buy it.</p><p>The only thing that would deter me is that cache management is hard, so I don't want to write it myself.  But once again, show me an industrial strength cache manager and I'll buy it. (Or just download it - thanks again to Mark Mandel).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664236">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664236">16</a> by Allen
		posted on 4/19/2007 at 1:39 AM
		</div>
		<div class="comment_text"><p>I can understand the questions over how the server is handling the load.  But I think it's likely a moot point compared to session variables (e.g. 1,000 session vars for 1,000 users is 1,000,000 vars to track).  The real issue is what the application scope is intended for.  I have a hard time imagining how that many application scope vars could exist and it being properly used.  I wouldn't be surprised if they're using it to do things like specify 10 different font colors when really that is the job of style sheets (even if they're dynamically called).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664234">17</a> by Robert blackburn
		posted on 4/19/2007 at 4:05 AM
		</div>
		<div class="comment_text"><p>Just my 2 cents...<br>Personally my main concern for something like that would simply be the maintainability.</p><p>If you use the application scope to store page caches or something like that I could see how you could very quickly get up to a few thousand elements. However, when you are debugging a problem with your cache I would imagine it could be a bit time consuming for a develop to have to deal with such a large structure or it might make it difficult to get down to the root cause of any problem related tot he application scope. RAM is cheap, but developer time is not.</p><p>So I would personally evaluate if that information REALLY needs to be in the application scope. From experience I am willing to bet that 80%+ of those keys are coming from only a few places (like page caching). So I would just focus on where MOST of the keys are coming from.</p><p>If it turned out that the application scope is truly the most appropriate place for the data, then I might suggest storing some of that data in nested structures/arrays. For example, if 80%+ of the keys were from page caching then create a structure in the application scope named “cache” and place all your HTML cache in there. This will clean up the root of the application scope and hopefully make debugging or maintenance a little bit easier. (of course you will need to verify the application["cache"] key exists before accessing it, but you can do that in the applicationStart() method so the extra IF statement should not be a performance concern).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664237">18</a> by Adam Reynolds
		posted on 4/19/2007 at 2:52 PM
		</div>
		<div class="comment_text"><p>Just for argument sake, 2000 individual top-level keys seems excessive.</p><p>However if you had a application scope structure within which you held the pages of your site cached or you loaded your CFCs into application.lib structure.</p><p>I think what I'm saying is that the data hierarchy within the application scope is more important here rather than whether there are 2k or 2million keys. As long as it it correctly structured this should not be a problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664238">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664238">19</a> by Pete Freitag
		posted on 4/19/2007 at 4:58 PM
		</div>
		<div class="comment_text"><p>You don't need CF8, fusion reactor, or see fusion to see how much ram your JVM is using: Java's Runtime class exposes this info: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.petefreitag.com%2Fitem%2F115.cfm%3APIEWKRU-AOJ4vy9bSvKcPRzc-nc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.petefreitag.com/item/115.cfm">http://www.petefreitag.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664239">20</a> by Raymond Camden
		posted on 4/19/2007 at 5:14 PM
		</div>
		<div class="comment_text"><p>Good point Pete. To be fair though - CF8s ability to show how much RAM each key is taking is pretty handy.</p></div>
	</div>
</div>
		