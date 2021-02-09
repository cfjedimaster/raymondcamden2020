
<div class="comment" id="c_1713666121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666121">1</a> by Scott P
		posted on 6/1/2007 at 9:13 AM
		</div>
		<div class="comment_text"><p>Pretty cool.  One thing I noticed was application.cfc needs to be renamed to Application.cfc.  Loved the charts!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666116">2</a> by todd sharp
		posted on 6/1/2007 at 5:53 PM
		</div>
		<div class="comment_text"><p>I hate to beat a dead horse - but I can't understand why people insist on setting variables in the request scope that should be set in the application scope.  I know we're only talking about .0001ms probably - but there's no reason to set a var on every request that will not change.</p><p>&lt;!--- Provides a single location to update the path to our component(s) ---&gt;<br>&lt;cfset Request.componentPath = "Other.VI-RD.Tamagotchi2.web.Components" /&gt;</p><p>&lt;!--- Useful general information on paths ---&gt;<br>&lt;cfset Request.webRootRel = "/Other/VI-RD/Tamagotchi/web/" /&gt;<br>&lt;cfset Request.webRootAbs = ExpandPath(Request.webRootRel) /&gt;<br>&lt;!--- Path to Creature icons ---&gt;<br>&lt;cfset Request.monsterIcons = "Stock\Icons\" /&gt;</p><p>Not trying to be harsh - I just don't get it.  Maybe it's me...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666131">3</a> by Raymond Camden
		posted on 6/1/2007 at 5:55 PM
		</div>
		<div class="comment_text"><p>Nope, I'm with you Todd (musta missed it when I was reviewing). Of course, maybe I'm scared about what happened last time I brought it up. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666123">4</a> by Steve Bryant
		posted on 6/1/2007 at 6:04 PM
		</div>
		<div class="comment_text"><p>Personally, I prefer request scope. I realize that I set the variables every time, but it reads cleaner to me and the performance hit for setting every variable is negligible.</p><p>If I used Application scope for every setting, I would have to add a conditional to keep from setting the variables on every request and then change a bit of code every time I added a new variable or else it would never get set.</p><p>So, for a miniscule performance my life seems much easier.</p><p>Don't see it is a point of major passion though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666129">5</a> by Steve Bryant
		posted on 6/1/2007 at 6:06 PM
		</div>
		<div class="comment_text"><p>Incidentally, that is a really cool use of cfchart!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666128">6</a> by todd sharp
		posted on 6/1/2007 at 6:36 PM
		</div>
		<div class="comment_text"><p>Steve:  That's the beauty of app.cfc though - you don't need the conditional logic like you do in app.cfm.  Just set it in onAppStart() and forget it (sorry for the ron popeil reference).</p><p>I think people get tripped up when moving from app.cfm logic and forget the benefits of app.cfc.</p><p>Also - if you worry about app level vars not being reset - just add a conditional call to onAppStart in onRequestStart like many of Ray's app's do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666126">7</a> by Jonathon Stierman
		posted on 6/1/2007 at 6:58 PM
		</div>
		<div class="comment_text"><p>Thanks all for the comments!</p><p>I am curious as to how you would approach making those Request (or Application ;))variables (Request.componentPath, etc) not hardcoded.  I've secretly hoped there was a way to fully dynamically set up all that information, but I haven't been able to come up with anything that works in all cases.</p><p>I'm not an OOP programmer by nature, so I'm hoping to gleam some useful insight out of this :)  What do you mean when you say the Creature.cfc is "part bean, part generic"?  When we built the "Creature" object, I essentially asked myself "What should a Creature do?"  My reaction was to say "It should know some basic information about itself (name, image, birthday, etc), and also perform some actions."  Thus all the "action" methods are in Creature CFC along with the getters and some setters for the "basic information."  I'm curious as to how else the same functionality could be done.</p><p>Thanks all for your comments!</p><p>Jonathon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666132">8</a> by Steve Bryant
		posted on 6/1/2007 at 7:03 PM
		</div>
		<div class="comment_text"><p>No I get the benefit of Application.cfc, but it doesn't really change anything here.</p><p>This is evidence by your own quote:<br>"just add a conditional call to onAppStart"<br>You still have a conditional, it just seems "better" somehow that the conditional calls out to onApplicationStart, but you are still doing the same thing.</p><p>I still need extra code to indicate that I changed the value of a variable or to call that code when I add a new variable.</p><p>I'm not saying that no-one should use Application variables for settings (certainly, I do so myself for some conditions), but often (usually) request scoped variables are much more handy for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666130">9</a> by Steve Bryant
		posted on 6/1/2007 at 7:07 PM
		</div>
		<div class="comment_text"><p>Jonathon,</p><p>Take a look at GetBaseTemplatePath() and <br>GetCurrentTemplatePath() if you haven't already. I generally use getCurrentTemplatePath() from my root Application.cfm/.cfc and then figure the paths for subfolders from there.</p><p>You can also use the following code to get the directory delimiter for the OS on which your code is running:<br>dirdelim = CreateObject("java", "java.io.File").separator</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666134">10</a> by Raymond Camden
		posted on 6/1/2007 at 7:10 PM
		</div>
		<div class="comment_text"><p>Steve, you misunderstood him. By conditional call he didn't mean:</p><p>if <a href="http://disq.us/url?url=http%3A%2F%2Fapp.foo%3AH-GgSHN1LR8HZBIJkCCw4x96j6Y&amp;cuid=3321886" rel="nofollow noopener" title="app.foo">app.foo</a> not defined, set stuff</p><p>What he was talking about was a way to rerun the onAppStart method by passing a url variable. This is nice during development since onppStart is only run once.</p><p>But INSIDE onAppStart, you don't need a condition. That by itself makes it nicer than old school app.cfm code.</p><p>Steve (to your second comment) - I _think_ the OS file sep may be in the server scope too. Maybe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666136">11</a> by Steve Bryant
		posted on 6/1/2007 at 7:27 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Then I didn't make myself clear in my original comment. Having a conditional to reload Application variables was what I was talking about as well. Admittedly, without Application.cfc you need an OR in your conditional to check for prior existence, but I don't think that is a major advantage.</p><p>I don't see the location of the conditional as a major factor either. I do see how Application.cfc enforces some organization and that is nice.</p><p>My major point, however, is that I don't think that use of request scope or Application scope is a clear issue of one being better than the other. For me, it is personal preference. After all, any performance difference is going to be negligible.</p><p>I just checked Server scope and no delimiter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666143">12</a> by Jonathon Stierman
		posted on 6/1/2007 at 7:29 PM
		</div>
		<div class="comment_text"><p>I've tinkered around with GetBaseTemplatePath() and GetCurrentTemplatePath() (peeked at the Server scope too -- didn't even know that one existed!).  Even using those, I'm not sure how I could build my Request.componentPath using those?</p><p>So let's say my application is housed in the following directory:</p><p>D:\WWWROOT\Other\CowgirlTuff\web\</p><p>To build my componentPath, I need some way of chopping off the "D:\WWWROOT\" dynamically.  I didn't see anything in the Server scope, or those other two functions that would let me do that... am I missing something?</p><p>Thanks for your input thus far (I'm feeling smarter already)!</p><p>Jonathon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666139">13</a> by Raymond Camden
		posted on 6/1/2007 at 7:31 PM
		</div>
		<div class="comment_text"><p>For component path - go relative. If you code tries to make a component of "<a href="http://disq.us/url?url=http%3A%2F%2Ffoo.goo%3ALu-XwU-ZM5UH6KoZdfymWDYe1J0&amp;cuid=3321886" rel="nofollow noopener" title="foo.goo">foo.goo</a>", CF will first look for a foo folder under your CURRENT file. It will then try to find foo in cf mappings. All I did was strip off all your code before the main sub folder.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666111">14</a> by Steve Bryant
		posted on 6/1/2007 at 7:40 PM
		</div>
		<div class="comment_text"><p>Jonathon,</p><p>Sorry I misunderstood the question. CF will look for your path starting from the current file.</p><p>Then it will use mappings. If you don't have a mapping for that path (or a "/" mapping) it will next look from the root of your site and then from the CustomTags folder.</p><p>So, I often use "com.sebtools" for my components (because I control "<a href="http://disq.us/url?url=http%3A%2F%2Fsebtools.com%3Ar9gj64ZKCtgHUh7UtIL-1QFFSOM&amp;cuid=3321886" rel="nofollow noopener" title="sebtools.com">sebtools.com</a>"). When I am on shared hosting, I put the com/sebtools folder in the root of the site. When I control the server (and have multiple sites using those components) I put it in the CustomTags folder. Of course, I never use a "/" mapping, which I think would mess that up (haven't verified that though).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666110">15</a> by Jonathon Stierman
		posted on 6/1/2007 at 7:51 PM
		</div>
		<div class="comment_text"><p>Hmm...  I get the order of operations there (local folder first, then CFMappings), but I guess I can't comprehend how to utilize that to get what I need.</p><p>Let's assume the following folder structure:<br>Site Root: D:\WWWROOT\myTestApp\web\<br>Components: D:\WWWROOT\myTestApp\web\Components\<br>Example Page: D:\WWWROOT\myTestApp\web\test\test.cfm</p><p>Test.cfm needs to call a Component in the Components folder.  Is it possible to tell it to relatively "go up a folder, and then into Components/MyComponent.cfc" ?  I tried using some "../" notation, but apparently Component Paths can't start or end with a period. :)</p><p>I understand how it could work with mappings, but I'd really like to avoid having to set up a mapping for every site on the server :/</p><p>"All I did was strip off all your code before the main sub folder."</p><p>That sounds really easy, and I feel like I'm missing something terribly obvious!</p><p>Jonathon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666112">16</a> by Jonathon Stierman
		posted on 6/1/2007 at 8:00 PM
		</div>
		<div class="comment_text"><p>I think some confusion is coming out of our setup on our development machine.  We've actually got tons of "sites" running off the same "site" in IIS.</p><p>We've got our base folder registered as a site in IIS:<br>D:\WWWROOT\</p><p>But we develop all of our applications in subfolders of that site.  For example:<br>D:\WWWROOT\myTestApp\web\<br>D:\WWWROOT\myTestApp2\web\<br>D:\WWWROOT\myTestApp3\web\</p><p>If I just cut off the "myTestApp3.web." out of my Components folder, then CF will look in the D:\WWWROOT\ folder for those components (which it won't find, since they don't exist there).</p><p>Jonathon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666113">17</a> by Steve Bryant
		posted on 6/1/2007 at 8:15 PM
		</div>
		<div class="comment_text"><p>Jonathon,</p><p>I typically switch my web root to point to whichever site I am currently working on (helps with component paths as well as links and such).</p><p>If you are able to do that, it will make your life much easier. If not, then I would suggest calling CreateObject from the root of your site.</p><p>Then you can just point to the path to your component from there (as you discovered, no going "up" with component paths).</p><p>So, put a UDF in a file in D:\WWWROOT\myTestApp\web\ to call CreateObject (with a path of "Components.componentname") and then call that UDF from test.cfm.</p><p>Ben Nadel wrote a great blog entry on his variation on this approach with lots of good information:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F348-Creating-ColdFusion-Components-In-Parent-Directories-From-Sub-Directories-Without-Mapped-Paths.htm%3ACEnGJZMM5QZaphC-ff2midm__ps&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/348-Creating-ColdFusion-Components-In-Parent-Directories-From-Sub-Directories-Without-Mapped-Paths.htm">http://www.bennadel.com/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666114">18</a> by Jonathon Stierman
		posted on 6/1/2007 at 8:34 PM
		</div>
		<div class="comment_text"><p>Ahh, cool!  I'll dig into Ben's post there.</p><p>Unfortunately, I can't be reseting the webroot in IIS.  I'm part of a development firm, so I'm not the only one using the website.  Can't be switching the webroot on everyone every week ;)</p><p>Jonathon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666125">19</a> by Jonathon
		posted on 6/1/2007 at 8:41 PM
		</div>
		<div class="comment_text"><p>Going back to the "As for his CFC - he uses a CFC similar to an earlier entry - part bean - part generic handler."  Aspect...</p><p>I thought up another way that I might handle this, and would like some input!</p><p>Rather than having the "Creature" performing all the actions itself (which now that I think about it, that doesn't quite make sense -- the Creature doesn't "get fed" itself, it needs something "to feed it").  With that in mind, I might have created a CreatureHandler class that actually performs the actions on creatures:</p><p>CreatureHandler methods:<br>pet()<br>feed()<br>groom()<br>play()<br>etc...</p><p>Each function would take in an instance of Creature, and then perform the add/subtracting of nourishment/happiness/sanity.</p><p>The one issue I see with this is that then my Creature.hunger, Creature.happiness, and Creature.sanity attributes "public" (at least Getters and Setters) otherwise CreatureHandler won't be able to update the Creature's statistics.  That does kind of irk me ... I don't think those attributes should be modifiable outside of Creature (they're "private" to the Creature).</p><p>Thoughts?</p><p>Jonathon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666133">20</a> by Raymond Camden
		posted on 6/1/2007 at 11:25 PM
		</div>
		<div class="comment_text"><p>I'm not quite sure I'd do it that way. I'd probably have the handler take care of calling the proper methods on the creature. So the create CFC is more simple (can be fed, etc), whereas the handler is more a manager for the CFC.</p><p>Really - there isn't one answer for this.</p></div>
	</div>
</div>
		