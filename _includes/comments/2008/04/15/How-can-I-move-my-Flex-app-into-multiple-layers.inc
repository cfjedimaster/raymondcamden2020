
<div class="comment" id="c_1713679624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679624">1</a> by Neil Middleton
		posted on 4/16/2008 at 2:15 AM
		</div>
		<div class="comment_text"><p>To be honest Ray, you really need to take an MVC approach to this - by putting remote objects into your view you're breaking all sorts of best-practise.  Therefore, I would strongly advise that you do one of two things:</p><p>a) Create a services component that contains your service declaration and configuration, plus any required helper functions - you would then include this where needed (or make a global singleton object for it somehow)....or</p><p>b) don't reinvent the wheel and use a framework like Cairngorm.  Knowing that you know model-glue well, this should be easy to pick up assuming you've nailed the conceptual model in your head.  For this, I find that the Cairngorm diagram* invaluable.  Cairngorm isn't scary, and solves so many problems like this in a really simple best-practise way.</p><p>* <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cairngormdocs.org%2Ftools%2FCairngormDiagramExplorer.swf%3Ak1QxYVyiRXYWMCKz2nc6v-HhJbc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cairngormdocs.org/tools/CairngormDiagramExplorer.swf">http://www.cairngormdocs.or...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679637">2</a> by Pure MVC
		posted on 4/16/2008 at 2:44 AM
		</div>
		<div class="comment_text"><p>Check out puremvc. I've used cairngorm and puremvc and i like puremvc a lot more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679633">3</a> by Dan Wilson
		posted on 4/16/2008 at 2:48 AM
		</div>
		<div class="comment_text"><p>Neil is right. You probably need a bit of architecture, MVC style. Once an app moves beyond trivial, the appo will eventually trip over itself and need a refactor.</p><p>Cairngorm is one way to do it, PureMVC (<a href="http://disq.us/url?url=http%3A%2F%2Fpuremvc.org%3Am7y6FdqK6kaozBsnY_pXpgymbVw&amp;cuid=3321886" rel="nofollow noopener" title="puremvc.org">puremvc.org</a>) would be another.</p><p>The dead simplest way would be EasyMVC by Simeon Bateman. This will get you up to speed the quickest.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fprojects.simb.net%2FeasyMVC%3A3hgCMFqRvz0Pd3uy9riJ-kEmgxw&amp;cuid=3321886" rel="nofollow noopener" title="http://projects.simb.net/easyMVC">http://projects.simb.net/ea...</a></p><p>The screencast (<a href="http://disq.us/url?url=http%3A%2F%2Fblog.simb.net%2F2007%2F12%2F06%2Fsimeon-says-intro-to-easymvc-screencast%2F%29%3ANJtTU_pzvPC5vA4Mm0VzguoLdZw&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.simb.net/2007/12/06/simeon-says-intro-to-easymvc-screencast/)">http://blog.simb.net/2007/1...</a> will get you started in 7 minutes flat.</p><p>Regardless of what you choose, the answer to your problems is a proper architecture.</p><p>DW</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679634">4</a> by Gareth
		posted on 4/16/2008 at 3:53 AM
		</div>
		<div class="comment_text"><p>I completely agree with all of these remarks.  It may cost you a little time now, but compartmentalizing everything now will definitely save you time (and frustration) later.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679635">5</a> by Johan
		posted on 4/16/2008 at 4:22 AM
		</div>
		<div class="comment_text"><p>Agree with previous remarks. Take a look at Easy MVC (Tom Bray as opposed to Simeon's EasyMVC) - it is a lot quicker to get your head around than Cairngorm and PureMVC. What I like about Tom Bray version is that you do not have to download/include anything - it is an easy to implement approach. Nicely explained/documented by Jon Baker here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.clockobj.co.uk%2F2007%2F10%2F17%2Fsimplified-cairngorm-easy-mvc-for-adobe-flex%3A2HhItl8KO4BamiUEasqulpAF6DQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.clockobj.co.uk/2007/10/17/simplified-cairngorm-easy-mvc-for-adobe-flex">http://www.clockobj.co.uk/2...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679632">6</a> by John C. Bland II
		posted on 4/16/2008 at 10:05 AM
		</div>
		<div class="comment_text"><p>You don't need to change your entire approach/setup for this. Just create a Singleton which handles all of your data transfer then hit it like this:</p><p>DataLocator.instance.dataService.someMethod();<br>(or DataLocator.getInstance(); your preference)</p><p>You can then use the same dataService throughout the site without passing it all over the place.</p><p>Now, for keeping it on the top level and passing events down...no sweat there either. You shouldn't get any errors if you set</p><p>mx:method ... result="something.someFunction(event)"</p><p>Just make sure your someFunction expects the proper result type.</p><p>Hit me up on IM and we can hash out some more ideas/updates. MVC is great but for this you don't need to rewrite your app to use MVC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679636">7</a> by Raymond Camden
		posted on 4/16/2008 at 5:22 PM
		</div>
		<div class="comment_text"><p>@All: I've avoided considering Flex frameworks as I feel like I'm not ready for them yet. I feel like I need to learn more. But at the same time - I avoided learning CF frameworks for a while too, so maybe I just need to get the heck over it.</p><p>@JBII: I had assumed it would throw an error. I'll give that a try as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679630">8</a> by Neil Middleton
		posted on 4/16/2008 at 5:24 PM
		</div>
		<div class="comment_text"><p>@Ray I found learning Cairngorm taught me helluva lot about Flex - and that helps you write better code elsewhere..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679638">9</a> by David Buhler
		posted on 4/16/2008 at 6:18 PM
		</div>
		<div class="comment_text"><p>"Am I expected to create the data in the top level MXML and pass it to someview? "</p><p>You'll want to create a model or value object to hold your data. At the top of either Model or Value Object class, add a [Bindable] Tag.</p><p>When your data is received from CF, you can now populate the Value Object or Model 's properties (for example, usersFirstName) with the data response and reference this data from any of your views of their subclasses.</p><p>In your views, you can use the mx:Binding tags to bind a control to and from your control (ex: textInput.text) to your data in the model or Value Object. Now, the views will update automatically when the data changes, and you have one reference point for the current data (Model or VO).</p><p>When you save the data, you can just pass the Value Object to CF and work with it as a Struct, or you can cast your model's properties to an object's properties.</p><p>To see errors, make sure you're working with the Flash Debug Player, and not just the Flash Player. For your fault handler in a Remote Object, make sure you add a throw statement in actionscript. If I remember right, throw(faultevent.error.toString()) will give you added detail, but I'd doublecheck this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679640">10</a> by David Buhler
		posted on 4/16/2008 at 6:44 PM
		</div>
		<div class="comment_text"><p>//ToDo: Abstract this into an XML file<br>private var endpoint:String = "<a href="http://disq.us/url?url=http%3A%2F%2Fdev.nextbigthing.com%2Fflex2gateway%2F%3Aj9OiGV2xSdTZWO4AC9yuIXWyakY&amp;cuid=3321886" rel="nofollow noopener" title="http://dev.nextbigthing.com/flex2gateway/">http://dev.nextbigthing.com...</a>";</p><p>Coldfusion already has this set-up. You can use the Flex Config.xml and Services-Config.xml files located in the web-inf/flex files, to create named service definitions.</p><p>If these files aren't viewable, you'll need to generate them using the compiler args in Flex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679639">11</a> by Raymond Camden
		posted on 4/16/2008 at 7:18 PM
		</div>
		<div class="comment_text"><p>David - I'm building an AIR app so I think this is necessary, is it not?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679626">12</a> by David Buhler
		posted on 4/16/2008 at 7:39 PM
		</div>
		<div class="comment_text"><p>Because the Air App still makes named Service calls to a remote object on the server, the deployment type (Flex or Air) should not matter. The Flex-Config file should be compiled into the SWF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679645">13</a> by Raymond Camden
		posted on 4/16/2008 at 7:45 PM
		</div>
		<div class="comment_text"><p>I'm confused though - so your saying I should use the flex-config file to name my service and configure the URL there? I inteded to have other settings as well, not just the end point, and I'd like to keep it all together if possible, so is there anything wrong with my approach?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679647">14</a> by David Buhler
		posted on 4/16/2008 at 10:28 PM
		</div>
		<div class="comment_text"><p>There are some different configuration files for AIR:</p><p>"The only difference between the Flex and the AIR versions of the utilities is that the AIR versions load the configuration options from the air-config.xml file instead of the flex-config.xml file."</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fflex%2F3%2Fhtml%2Fsetup_Flex_1.html%3AOC5pSNxNWcPNRso__H04UTDonO8&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/flex/3/html/setup_Flex_1.html">http://livedocs.adobe.com/f...</a></p><p>"I'm confused though - so your saying I should use the flex-config file to name my service and configure the URL there?"</p><p>Yes, but according to the docs, you'll need to use the Air-Config file. I just googled it around, so it's new t me.</p><p>You can dump all of the Config files using...:<br><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fflex%2F3%2Fhtml%2Fcompilers_09.html%3A-SubnmRFwHqM8cEazBAVDCjVB40&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/flex/3/html/compilers_09.html">http://livedocs.adobe.com/f...</a></p><p>I would assume the AIR-config file has similar destination path configurations as the flex-config.xml file.</p><p>If you use Cairngorm, you'll have a Services.mxml file. This is the Cairngorm way of referencing the External named services (also known as CFCs). You can also reference the Named Services without the Services.MXML file that Cairngorm provides, by removing your endpoint and adding the Name of your service (as configured outside of Flex) in the Remote Destination.</p><p>The question one might ask if this: Why should I use the Flex-Config and Services-Config.xml files, when I can do the exact same thing inside my view with Actionscript/mxml?</p><p>The answer is: Now, you can change the destination paths and roles without having to recompile your SWF. Also, you'll probably find your paths to your CFCs is different from Dev as it is in Production, and being able to compile against two different XML files (production vs dev) makes life easier.</p><p>"I inteded to have other settings as well, not just the end point, and I'd like to keep it all together if possible, so is there anything wrong with my approach?"</p><p>While I'm not sure what the other settings are, you can add additional settings in the external configuration file.</p><p>As Todd Rafferty pointed out to me last week, the Coldfusion 8.0.1 update affects the security loophole with Flex being able to access Public vs Remote CF functions.</p><p>These are the types of settings you could change in the Config files (what kind (access) and which (function names) can flex call). Roles can also be configured in the Config files, as well as a whitelist of acceptable services.</p><p>This may be of help, too: <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.firemoss.com%2Fblog%2Findex.cfm%2F2008%2F1%2F25%2FFlex-Configuration-Demystified-servicesconfigxml-Destinations-and-Channels%3AmXztn4SiUg1pnN2H78QMHTNQlMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.firemoss.com/blog/index.cfm/2008/1/25/Flex-Configuration-Demystified-servicesconfigxml-Destinations-and-Channels">http://www.firemoss.com/blo...</a></p><p>The greatest difficulty in understanding the process is a lack of good, working Flex/Air examples for CF (and some of the other languages). Understanding the relationship between Flex, Cairngorm, and CF through Standard Remoting is complex without being able to visualize it, because some of the files you should use or need, don't exist out-of-the-box...instead...they have to be "Generated."</p><p>IMO, the Cairngorm Store example is just too complex, and the Login example is just too basic.</p><p>If you have any issues, I can whip up a working Flex/Cairngorm app for you, given the basics of your current structure, that include the Remoting-Config and Services-Config files. Cairngorm, like Fusebox, gives you the ability to copy and paste existing files, to create new functionality:</p><p>Copy View<br>Cut out old code in view down to the Cairngorm Event call and Cairngorm imports.<br>Create Event. Add variable you'll be passing.<br>Add Event Name &amp; Command Name to controller.<br>Create Command.<br>Create Delegate.<br>Create Service in Delegate (and Services Config file if it doesn't exist).<br>Rinse. Wash. Repeat.</p><p>You'd have to change the flex-config to the air-config, though. :)</p><p>I usually skip the Cairngorm framework when I'm building something as simple as a Contact Form in Flex. If I'm going to make more than 3 different method calls, that's when I'll start to separate out the logic into an MVC structure.</p><p>Note: according to the doc linked below, the Flash Debugger does not apply to AIR, but adding try/catch/throw (or trace) statements is strongly encouraged. Unlike CF and Java, Flex doesn't have a global way (like application.cfc's onError) to trap and log errors. It's granular...method by method.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fflex%2F3%2Fhtml%2FCommandLineTools_4.html%3AIAqu1f4sZeCI_QQimC1F1lun8NM&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/flex/3/html/CommandLineTools_4.html">http://livedocs.adobe.com/f...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679642">15</a> by David Buhler
		posted on 4/16/2008 at 10:38 PM
		</div>
		<div class="comment_text"><p>Actually, I take this back:</p><p>"The answer is: Now, you can change the destination paths and roles without having to recompile your SWF. Also, you'll probably find your paths to your CFCs is different from Dev as it is in Production, and being able to compile against two different XML files (production vs dev) makes life easier."</p><p>It still gets compiled into the application and the SWF has to be recompiled for changes. What I meant to say was:</p><p>"Now, you can change the destination paths and roles without having to edit paths in your XML file since your paths to your CFCs are different from Dev to Production, and being able to compile against two different XML files (production vs dev) makes life easier."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679644">16</a> by Andychou
		posted on 4/18/2008 at 11:05 AM
		</div>
		<div class="comment_text"><p>Need 3 Flex engineers in New York City:<br>1. You have to be living in New York City for now. <br>2. Work part time or full time with us.<br>3. Good at Adobe Flex technology.<br>4. Please contact us for other requirement and details.</p><p>Busycode Inc. is a top Adobe Flex shop who develops Flex/AIR applications for clients. <br>For more info, please visit <a href="http://disq.us/url?url=http%3A%2F%2Fwww.busycode.com%3Aj_YxUqTyaQLUqyObt5aovRrULXg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.busycode.com">http://www.busycode.com</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679643">17</a> by Raymond Camden
		posted on 4/18/2008 at 3:14 PM
		</div>
		<div class="comment_text"><p>Andy - I will leave your comment up for now, but in the future, do NOT post job postings like this. My blog is not your job board and while my post concerns Flex, your job posting is NOT on topic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679641">18</a> by Ken Dunnington
		posted on 4/18/2008 at 11:54 PM
		</div>
		<div class="comment_text"><p>Ray, I've also avoided Flex frameworks so far for the same reason as you. I solve the RemteObject problem by taking an event-driven approach. My apps aren't overly complex, so I'll often keep my RO in the root MXML, and have my views broadcast custom (often bubbling) events which are caught and handled in the root. I also employ a ModelLocator and often use the ChangeWatcher to trigger those events. It's not a pure MVC approach, but it's been a good learning experience, and I can understand exactly what's going on. If you're looking to get your hands dirty before diving into a framework, custom events are a great way to do it! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679646">19</a> by John C. Bland II
		posted on 4/19/2008 at 5:26 AM
		</div>
		<div class="comment_text"><p>I'm with you Ken. I have my own approach to Flex apps which include design patterns but I don't use frameworks. Think about it...Flex is a FRAMEWORK. You're putting a framework on top of a framework. That's fine, honestly it is, but unnecessary. Yes, maybe it will speed you up a bit but spend 6 months writing apps and you'll have your own basic code-base ("framework").</p><p>That's just the way I choose to do it. PureMVC, etc is not a end-all-be-all for every RIA you touch. It is a peg which you have to find the right hole to fit into.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679649">20</a> by Simon Bailey
		posted on 6/5/2008 at 12:18 AM
		</div>
		<div class="comment_text"><p>I see the general consensus is do what feel best for you and personally I have found frameworks invaluable to by Flex application development in particular PureMVC.  Each to their own :)  Regarding you query Ray I have developed a demo Flex CF application doing a simple CFC query and have taken a slightly different approach creating a remote delegate class thats reutilised for soooo easily for all method calls on my cfc.  This, as I have read above, may seem all a little ott but to be honest this was easy to do and I also wrote a tutorial on it for a publication over here in the UK and a ot of developers with different ranges of capabilities picked it up np.  Anyway, the full source can be checked out here on my project owner page, see what you think :)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ftrac.puremvc.org%2FDemo_AS3_Flex_CF_QueryCFC%3AnWXC8rRCws4E8NiFjXF15nh05JE&amp;cuid=3321886" rel="nofollow noopener" title="http://trac.puremvc.org/Demo_AS3_Flex_CF_QueryCFC">http://trac.puremvc.org/Dem...</a></p><p>Cheers</p><p>Simon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679648">21</a> by Brendon
		posted on 6/23/2008 at 3:50 AM
		</div>
		<div class="comment_text"><p>Ray, you can use bits and pieces of the cairngorm framework until you fully understand all parts of it. Take a look at this article by Tom Ortega when you are ready. I found it invaluable. <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fdevnet%2Fflex%2Farticles%2Fgraduating_pt1.html%3AE3uxlFXEncVjlWDiDV-dxRBG2Wg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/devnet/flex/articles/graduating_pt1.html">http://www.adobe.com/devnet...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679653">22</a> by n00bflexer
		posted on 4/1/2011 at 6:50 PM
		</div>
		<div class="comment_text"><p>I have found all of these comments invaluable.</p></div>
	</div>
</div>
		