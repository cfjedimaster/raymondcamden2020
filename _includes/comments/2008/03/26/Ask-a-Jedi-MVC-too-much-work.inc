
<div class="comment" id="c_1713678411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678411">1</a> by matt
		posted on 3/26/2008 at 8:57 PM
		</div>
		<div class="comment_text"><p>well said.<br>I like fusebox myself, sites grow fast when ya can see what code exists</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678431">2</a> by Nathan Mische
		posted on 3/26/2008 at 9:12 PM
		</div>
		<div class="comment_text"><p>I'm about to get into Flex as well and would like to know if an MVC CF framework like Model-Glue, Fusebox, or Mach-ii really work well for Flex. It seems to me that your controller and view would live in Flex, so I'm not sure what a full MVC CF framework gives you, other than added complexity. Again, I haven't done any Flex work yet so I could be missing something.</p><p>I should say that I am a huge proponent of MVC frameworks for HTML based web applicaitons, and while I do see the benefit of an IOC framework like ColdSpring, I'm not sure I see the benefit of an MVC CF framework behind a Flex app. Any insight would be greatly appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678432">3</a> by David Buhler
		posted on 3/26/2008 at 9:57 PM
		</div>
		<div class="comment_text"><p>@Nathan,</p><p>We have a Flex Application that acts as our content management system for our customers.</p><p>On the Search Engine Friendly side of things, we display the content added through the Flex Admin in CFML.</p><p>On the Flex side, we used Cairngorm as our MVC.<br>On the CF side, we found that we needed some small framework to manage the ever growing complexity of the code. It was easier for us to roll our own, because there weren't enough views to warrant a full MVC framework, but there's enough logic to warrant an organizational structure that saves time moving forward (using cfsavecontent pretty extensively).</p><p>So, here's my 2 cents:<br>If you're using nothing more than CFCs for the Flex application, consider strongly a Domain Model. A basic domain model that emulates the hierarchy of your viewstacks in Flex is a good place to start. This kind of organizational structure helps.</p><p>If you're using Flex to generate content that is part of a large CMFL system, a standard MVC framework may be very useful.</p><p>If you have a couple of pages of content, some contact forms, and a few display pages in CFML, I'd suggest creating your own micro-framework that focuses more on separating logic from layout, and creating complex layouts through smarter and more encapsulated CFCs. You'll also find that you can create more Search Engine Friendly URLs with a homegrown framework, and there's less processing overhead that may be beneficial when it comes to speed (and subsequently, the Search Engine Benefits of fast load times).</p><p>I believe Fusebox and Model Glue allow easier integration with Flex Remoting calls, and Model Glue has an example showing the Flex MVC and CF MVC frameworks together.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678433">4</a> by Jeff
		posted on 3/26/2008 at 10:12 PM
		</div>
		<div class="comment_text"><p>I am very pro Fusebox-XML/MVC.  Even for the brochure websites.  They always want to add a contact form, comments, catalog etc.  And you have a great framework to build on when they call and say, "Wouldn't it be nice if...."</p><p>It's a little more work up front, but it saves tons of time in the long run.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678435">5</a> by Nathan Mische
		posted on 3/26/2008 at 10:19 PM
		</div>
		<div class="comment_text"><p>@David - Thanks for the input. I can see where, if you were using Flex as part of a larger system which included HTML views, a CF MVC framework would be very useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678412">6</a> by David Buhler
		posted on 3/26/2008 at 10:47 PM
		</div>
		<div class="comment_text"><p>@ Jeff,</p><p>We built our contact form in Flex using the Cairngorm MVC. The benefit is that we could resuse the same form validation, services, regex, etc, as the monster Flex apps.</p><p>We used our own homegrown CF framework for populating the Object/Embed/History Manager/JS code because many of our pages use little Flex widgets.</p><p>In the future, I think you'll see more robust CF frameworks that are used to serve up Flex and Ajax systems with fewer views, more JS files, and help to create greater structure of the business logic with a completely different take on the "V" from "MVC."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678428">7</a> by Jeff
		posted on 3/26/2008 at 11:05 PM
		</div>
		<div class="comment_text"><p>@David</p><p>I agree :) , I just haven't taken the plunge into Flex yet.  All of our sites are AJAX/HTML for the most part and they work great with FUSEBOX.  When I do start our FLEX stuff I will definitely look into Cairngorm (I have read about it already).</p><p>Isn't there a Model-Glue flex framework also?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678424">8</a> by David Buhler
		posted on 3/26/2008 at 11:09 PM
		</div>
		<div class="comment_text"><p>@Jeff,</p><p>There is a Model Glue framework for Flex that provides an example of using MG for Flex with MG for CF.</p><p>sidenote: I'd like to see the CF Frameworks take a slightly more aggressive role in separating out some of the logic required to use the Ajax frameworks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678440">9</a> by Kris Brixon
		posted on 3/27/2008 at 4:16 PM
		</div>
		<div class="comment_text"><p>Although I like and use Fusebox, most programmers that don't blog also don't use frameworks. I would recommend at the very least to separate the display code/logic from the business/data code/logic.</p><p>For ColdFusion, I will require a minimum of not having SQL in the same file as HTML. Once you can break that cycle, moving up to a framework or MVC gets much easier.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678436">10</a> by Chris Vigliotti (hibiscusroto)
		posted on 3/28/2008 at 7:40 PM
		</div>
		<div class="comment_text"><p>I second David's thoughts on creating your own framework...although I try to stay away from putting layout elements in cfcs (choosing to use custom tags).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678437">11</a> by Raymond Camden
		posted on 3/28/2008 at 7:46 PM
		</div>
		<div class="comment_text"><p>@Chris: Not so sure I'd agree with that. One of the benefits of using a 'known' framework is that if you had to add/modify staff, it is easier for the person to come in and get to work. Obviously a company can teach their own custom framework, but with using an existing one, there is a greater chance of hiring someone who already know its.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678441">12</a> by Chris Vigliotti (hibiscusroto)
		posted on 3/28/2008 at 8:07 PM
		</div>
		<div class="comment_text"><p>@ Ray: I see your point &amp; have been in a situation where I've had to deal with a massive home-grown framework in the past.  Needless to say it was a mess.  Now if it had been properly commented/documented, better organized and consistently coded I'd be telling another story.</p><p>One last point...the "known frameworks" were once unknown frameworks.  I should write a song about that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678443">13</a> by Raymond Camden
		posted on 3/28/2008 at 8:15 PM
		</div>
		<div class="comment_text"><p>@CHris: True - I didn't mean to imply that folks shouldn't make new frameworks - but....</p><p>a) An existing framework has the benefit of having been tested in the real world (most likely)<br>b) Before you re-invent the wheel, maybe you can modify an existing framework<br>c) There is a difference between having a home grown framework no one knows about and a framework you share with the world, get feedback on, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678442">14</a> by Indra
		posted on 10/22/2008 at 2:52 AM
		</div>
		<div class="comment_text"><p>Hi, I am new to ColdFusion for that matter to programming. I am developing an application for which I want to use coldFusion 8 and also want to follow MVC design pattern. Could you please suggest me any good CF MVC framework which is easy to work with. My application mainly concentrates on retriving the information from the DB and displaying.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678439">15</a> by Raymond Camden
		posted on 10/22/2008 at 5:41 AM
		</div>
		<div class="comment_text"><p>Well I'd recommend Model-Glue, but you may also want to look at ColdBox, Fusebox, Mach II, and any other CF framework I may have forgotten. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678444">16</a> by Bri Garrett
		posted on 7/22/2011 at 11:59 PM
		</div>
		<div class="comment_text"><p>Ray, I have been having nightmares about MVC for a month now. It is a BRICK WALL in my path of learning. I struggle because I want to "do it myself" first and then use a framework. I hate using things blindly. Yes, I do know how coldfusion works...and I can use it fairly well. Right now I'm actually trying to create some sort of design pattern to clean up some of my applications. This is where I started seeing MVC come up A LOT. What do you suggest I do? Do you know of any books/ sites that go really in depth on programming a MVC? (general rules and what not...)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678445">17</a> by Raymond Camden
		posted on 7/25/2011 at 3:51 PM
		</div>
		<div class="comment_text"><p>I'd maybe consider the Head First Design Patterns book: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fproducts%2Fcatalog%3Frlz%3D1C1CHFX_enUS407US407%26q%3Ddesign%2Bpatterns%2Bbook%26um%3D1%26ie%3DUTF-8%26tbm%3Dshop%26cid%3D4263304705204607972%26sa%3DX%26ei%3DgVgtTqSQCdDwmAXj0PW5Dw%26ved%3D0CE8Q8wIwAw%3AnhOl1_gwBo-QweP-_RKAI1SKVLk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/products/catalog?rlz=1C1CHFX_enUS407US407&amp;q=design+patterns+book&amp;um=1&amp;ie=UTF-8&amp;tbm=shop&amp;cid=4263304705204607972&amp;sa=X&amp;ei=gVgtTqSQCdDwmAXj0PW5Dw&amp;ved=0CE8Q8wIwAw">http://www.google.com/produ...</a></p><p>And don't forget Matt Gifford's OO in ColdFusion book:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.amazon.com%2FObject-Oriented-Programming-ColdFusion-Matt-Gifford%2Fdp%2F1847196322%2Fref%3Dsr_1_1%3Fie%3DUTF8%26qid%3D1311594674%26sr%3D8-1%3AjqZSKjxWfhsNOrRuZuKEi8TOym4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.amazon.com/Object-Oriented-Programming-ColdFusion-Matt-Gifford/dp/1847196322/ref=sr_1_1?ie=UTF8&amp;qid=1311594674&amp;sr=8-1">http://www.amazon.com/Objec...</a></p></div>
	</div>
</div>
		