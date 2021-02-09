
<div class="comment" id="c_1713716290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716290">1</a> by Ben Nadel
		posted on 6/20/2009 at 5:04 AM
		</div>
		<div class="comment_text"><p>Forgive my ignorance when it comes to Frameworks... but, when you're inside the shipping report controller, wouldn't the other services be called explicitly:</p><p>getShip()... getPlanet(), etc?</p><p>At this point, can't you pass in the named argument however you want?</p><p>If I'm way off base (having not used frameworks much), no need to bother explaining.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716299">2</a> by Raymond Camden
		posted on 6/20/2009 at 5:08 AM
		</div>
		<div class="comment_text"><p>I was way too vague in my post. I blame the IPAs.</p><p>So don't worry about the service per se, but more the controller.</p><p>As with most frameworks (from what I know), MG provides an API to get to URL/Form data in an encapsulated Event argument. So instead of me doing</p><p>ship = shipService.getShip(<a href="http://disq.us/url?url=http%3A%2F%2Furl.id%3A0bRnXeBrI7OIqL9bKyG2zQPmmP0&amp;cuid=3321886" rel="nofollow noopener" title="url.id">url.id</a>)</p><p>I'll do</p><p>ship = shipService.getShip(arguments.event.getValue("id"))</p><p>In other words: "From the Event, get the ID value, and pass it to the shipService."</p><p>The issue is the use of ID. If the controller method, getShip, looks for ID, and the controller method, getPlanet, looks for ID, I couldn't run both of those in the same request.</p><p>Does that make sense? I could include more code if it will help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716298">3</a> by salvatore fusto
		posted on 6/20/2009 at 12:36 PM
		</div>
		<div class="comment_text"><p>Sometimes you have to display on the same template more query'es from the same table, i.e. list of articles for different categories: in this case i use to pass an angument specifying the category, and an argument specifying the name list:<br>&lt;message getQuery&gt;<br>   &lt;argument name="list" value="list1"/&gt;<br>   &lt;argument name="category" value="c1"/&gt;<br>&lt;/message&gt;   <br>&lt;message getQuery&gt;<br>   &lt;argument name="list" value="list2"/&gt;<br>   &lt;argument name="category" value="c2"/&gt;<br>&lt;/message&gt; <br>in my controller:<br>&lt;cfset arguments.event.setValue(arguments.getArgument("list1"), myQuery1&gt;<br>&lt;cfset arguments.event.setValue(arguments.getArgument("list2), myQuery2&gt;<br> and in my template<br>&lt;cfset list1 = event.getvalue("list1")<br>&lt;cfset list1 = event.getvalue("list2")<br>regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716300">4</a> by salvatore fusto
		posted on 6/20/2009 at 12:37 PM
		</div>
		<div class="comment_text"><p>excuse me<br>and in my template<br>&lt;cfset list1 = event.getvalue("list1")<br>&lt;cfset list2 = event.getvalue("list2")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716302">5</a> by Tim Leach
		posted on 6/20/2009 at 9:15 PM
		</div>
		<div class="comment_text"><p>I've always tried to name my variables like:<br>planetID<br>ShipID</p><p>That where there is never any confusion about what I'm requesting. And all my handlers know to look for [objectName]ID.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716296">6</a> by Raymond Camden
		posted on 6/20/2009 at 9:34 PM
		</div>
		<div class="comment_text"><p>@Tim: Yep, from now on, that's my plan.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716305">7</a> by Jason Fisher
		posted on 6/21/2009 at 1:25 AM
		</div>
		<div class="comment_text"><p>+1 Tim's suggestion, works well for me in M-G to always have the key cleanly separated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716308">8</a> by Raymond Camden
		posted on 6/21/2009 at 1:28 AM
		</div>
		<div class="comment_text"><p>So um... you guys did see that that is exactly what I said at the end of my post, right? Just trying to make sure it was obvious. :) It's kind of the whole point of this blog entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716307">9</a> by Sean Corfield
		posted on 6/21/2009 at 8:59 AM
		</div>
		<div class="comment_text"><p>Another nice thing about using fooID and barID is that you can do automatic validation and authentication control at the start of a request (e.g., for each xxxID, make sure the id is a valid xxx and that you have permission to view that xxx object).</p><p>The Broadchoice Workshop / Community Platform does this (for siteId, sectionId and pageId when you are editing).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716306">10</a> by Ben Nadel
		posted on 6/22/2009 at 4:55 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>I'm sorry, I'm a bit dense this morning, but I am not seeing your issue. From the code you just posted, it seems that there would be no issue:</p><p>ship = shipService.getShip(arguments.event.getValue("id"))</p><p>As long as you know what the URL / FORM values were that you posted, you can't you explicitly get those back from the event object:</p><p>ship = shipService.getShip(arguments.event.getValue("ship_id"))</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716309">11</a> by Raymond Camden
		posted on 6/22/2009 at 5:08 PM
		</div>
		<div class="comment_text"><p>Forgive the format of the reply - on myiphone. The code you showed there grabs an id value from the event scope. This ends up being <a href="http://disq.us/url?url=http%3A%2F%2Fform.id%3A3d-z2yGmix7Yv9fmFDril4Ji1pg&amp;cuid=3321886" rel="nofollow noopener" title="form.id">form.id</a> or <a href="http://disq.us/url?url=http%3A%2F%2Furl.id%3A0bRnXeBrI7OIqL9bKyG2zQPmmP0&amp;cuid=3321886" rel="nofollow noopener" title="url.id">url.id</a>. The issue is if two controller methods want to load data and they both want to use ID then who wins? I hope that makes sense as I don't think I can explain it any simpler. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716293">12</a> by Ben Nadel
		posted on 6/22/2009 at 5:26 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>But, I thought you won't have two controllers accepting the request? I thought you had one controller accepting the request - the reporting controller - which would then turn around and access the individually ship / planet services (at which point, you could translate the event data to the service method signatures).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716304">13</a> by Raymond Camden
		posted on 6/22/2009 at 11:57 PM
		</div>
		<div class="comment_text"><p>It doesn't matter how many controllers you have. That isn't relevant. I think you are overthinking this. :) Let me try again.</p><p>Imagine you write a controller method that is responsible to listen for a getShip broadcast. This controller method handles asking the Service for the ship, and passing it back to the view.</p><p>Right? So question - how does the controller know _where_ find the value in the event. Is it url.ray? <a href="http://disq.us/url?url=http%3A%2F%2Furl.foo%3F%3AQrPEXlUYrzAV8dO__scx1SYmM1c&amp;cuid=3321886" rel="nofollow noopener" title="url.foo?">url.foo?</a> No. It's <a href="http://disq.us/url?url=http%3A%2F%2Furl.id%3A0bRnXeBrI7OIqL9bKyG2zQPmmP0&amp;cuid=3321886" rel="nofollow noopener" title="url.id">url.id</a>. MG nicely collapses that into the Event structure.</p><p>Ok, so if the controller was written to look for ID, what happens when I write getPlanet to work the same way? Normally, no big deal. But if I fire both getShip and getPlanet, and both assume ID is _their_ ID, then we have a problem.</p><p>As I said, you may be overthinking this. It's really a small thing, but I've tripped myself up on it now a few times.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716312">14</a> by Ben Nadel
		posted on 6/23/2009 at 4:49 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>I think I see where the disconnect might be coming from; are you having multiple controllers fire for a single page request? I think what I assumed was that you would have ONE controller fire to handle the page request (ex. reporting), which would then, in turn, request Ship and Planet data directly from the appropriate services. It sounds like rather than having one controller talk to several services, you are firing off additional events to retrieve the Ship and Planet data?</p><p>At that point, however, wouldn't you be launching new events with a completely new event object? Couldn't you just put the translated ID in the new event object?</p><p>Something like:</p><p>e = new Event()<br><a href="http://disq.us/url?url=http%3A%2F%2Fe.id%3AbYYhokgkXrnxCbGZodSb6tfGiMo&amp;cuid=3321886" rel="nofollow noopener" title="e.id">e.id</a> = currentEvent.getValue( "ship_id" )<br>e.execute()</p><p>... or however subsequent events get fired in a framework.</p><p>I know I am speaking from a point of ignorance, but my gut instinct is just telling me that if you have to start prefixing your variables (ie. ship_id rather than id), then something else is going wrong somewhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716311">15</a> by Raymond Camden
		posted on 6/23/2009 at 4:54 PM
		</div>
		<div class="comment_text"><p>Ah ok, so no, there is 2 controller methods being run. In MG, when I define an event, I broadcast N messages. For the ship detail display, I'd just broadcast getShip. For planet display, I'd broadcast getPlanet.</p><p>Now for the "History of ship docking at planet" event, I could broadcast: getShipAndPlanet. That one controller method could hit the service layer to get details on both. But, why should I? I've already coded support to get details for ships and planets, so imho, it makes sense to simply fire off 2 messages. Also, if my controller is wrapping the call with security, then I'd be reusing the secured call as opposed to having to redo it.</p><p>Once I write a getX controller method, I don't want to ever re-build that code. I want to use it in every situation where I need X.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716310">16</a> by Ben Nadel
		posted on 6/23/2009 at 4:57 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>Ok, i see where you're coming from. So, is there any validity behind my idea behind creating a new event object to execute. It seems that the getShip "event" would be completely new event and should have a completely new event object.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716314">17</a> by Raymond Camden
		posted on 6/23/2009 at 4:59 PM
		</div>
		<div class="comment_text"><p>It's not a new event, it's a broadcast. Every request is basically one event. The event in my case is GetShipPlanetDockingHistory. The event has various needs (ship detail, planet detail, docking history) and would broadcast messages that the controller layer listens for and handles.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716313">18</a> by Ben Nadel
		posted on 6/23/2009 at 5:05 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>So, are the controllers than handle the page requests the same that handle the "broadcasts"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716316">19</a> by Raymond Camden
		posted on 6/23/2009 at 5:08 PM
		</div>
		<div class="comment_text"><p>I wouldn't say the controller handlers the page request. The controller listens for messages. In Model-Glue, your main XML file (you can have multiple for large, complex apps) defines a relationship between events, messages, and views.</p><p>So for shipDetail, I say:<br>a) I need to broadcast a message to get Ship Details<br>b) I need to run a view</p><p>a) will fire off the message, "getShipDetails". I've defined which controller method will listen for it. The controller method handles the grunt work: "Where is my ID? Call my service. Set the result in the event."</p><p>At this point I'd recommend the new MG3 docs. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716317">20</a> by Jason Fisher
		posted on 6/23/2009 at 5:12 PM
		</div>
		<div class="comment_text"><p>@Ben,</p><p>The issue is not about number of controllers per se, although it is about number of service objects.  Model-Glue (for example) translates all form and URL variables into the request.event object, but the situation would hold, no matter how you accessed those variables.  To simplify, let's stick with the URL scope.</p><p>Say there's a request for info on a ship:</p><p>index.cfm?event=ship.view&amp;id=22</p><p>The controller may then grab data like this:</p><p>shipInfo = shipObject.getByID(<a href="http://disq.us/url?url=http%3A%2F%2Furl.id%3A0bRnXeBrI7OIqL9bKyG2zQPmmP0&amp;cuid=3321886" rel="nofollow noopener" title="url.id">url.id</a>);</p><p>Say there's a request for info on a planet:</p><p>index.cfm?event=planet.view&amp;id=47</p><p>The controller may then grab data like this:</p><p>planetInfo = planetController.getByID(<a href="http://disq.us/url?url=http%3A%2F%2Furl.id%3A0bRnXeBrI7OIqL9bKyG2zQPmmP0&amp;cuid=3321886" rel="nofollow noopener" title="url.id">url.id</a>);</p><p>Now, following Ray's explanation, there's a request for routes a ship takes between planets.  The controller (in Model-Glue) will need to call both objects, but now it can't distinguish between IDs when it needs to call both objects:</p><p>shipInfo = shipObject.getByID(<a href="http://disq.us/url?url=http%3A%2F%2Furl.id%3A0bRnXeBrI7OIqL9bKyG2zQPmmP0&amp;cuid=3321886" rel="nofollow noopener" title="url.id">url.id</a>);<br>planetInfo = planetController.getByID(<a href="http://disq.us/url?url=http%3A%2F%2Furl.id%3A0bRnXeBrI7OIqL9bKyG2zQPmmP0&amp;cuid=3321886" rel="nofollow noopener" title="url.id">url.id</a>);</p><p>Obviously this won't work :-) ...</p><p>index.cfm?event=route.view&amp;id=22&amp;id=47</p><p>Going back to Ray's original post, the tightest solution is to start using shipID and planetID, simply so that the service calls can always be the same for any event:</p><p>index.cfm?event=route.view&amp;shipID=22&amp;planetID=47</p><p>shipInfo = shipObject.getByID(url.shipID);<br>planetInfo = planetController.getByID(url.planetID);</p><p>Model-Glue essentially creates an Event object which represents all the information being passed around in the Request, so there is a one-to-one relationship of Request-to-Event, but a controller 'handler' may call many methods across any number of service objects (which M-G calls 'controllers', which is where it gets a bit confusing).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716319">21</a> by Ben Nadel
		posted on 6/23/2009 at 5:44 PM
		</div>
		<div class="comment_text"><p>Hmmm. I know I don't know much about the framework, but it seems like a funky flaw not to be able to broadcast data along with the message. Something like how you might in jQuery:</p><p>MGApp.trigger({<br>type: getShip<br>id: event.getValue( "ship_id" )<br>)};</p><p>I think that would rock nicely and handle your problem. Of course, its a moot point since it doesn't work that way :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716320">22</a> by Raymond Camden
		posted on 6/23/2009 at 5:54 PM
		</div>
		<div class="comment_text"><p>You can actually. Thats what I said above Ben. I said that one of my fixes was to broadcast the _location_ of the PK. Ie:</p><p>Broadcast Msg: Get Ship<br>Broadcast Argument: Hey, look for the ship id in the value "ShipId"</p><p>So yes, you can do that. But why bother? If I had just used shipid from the beginning, I wouldn't have to worry about it.</p><p>Again, I really think you are overthinking this. :) This is a small little issue - a brain fart on my part - and as I've seen it a few times now I thought I'd share it. It really isn't that complex. :)</p><p>How about this - imagine you wrote a custom tag called getShip. It _always_ did <a href="http://disq.us/url?url=http%3A%2F%2Fcaller.name%3AZZ0SjwrubkRpA7oJp6BDlSPRQQs&amp;cuid=3321886" rel="nofollow noopener" title="caller.name">caller.name</a> = X. Now imagine a custom tag called getPlanet. It always did <a href="http://disq.us/url?url=http%3A%2F%2Fcaller.name%3AZZ0SjwrubkRpA7oJp6BDlSPRQQs&amp;cuid=3321886" rel="nofollow noopener" title="caller.name">caller.name</a> = X. If you ran both of those tags you would have a problem, right? Now the best solution is to pass to the tag the name of the return variable, but I could also simply do caller.shipname=x and caller.planetname=x.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716322">23</a> by Ben Nadel
		posted on 6/23/2009 at 6:02 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>From what you wrote, however, it looks like the id -&gt; shipID definition is a value that is hard-coded int the MG config. Unless I am missing something, I don't think this really solves the problem - it simply shifts it until you have future naming conflicts (although admittedly, shipID, will cut down on that).</p><p>With something like jQuery (just trying to create a common language for us since I'm not MG-savvy), you can pass custom event data at run time, which I think is different than what you are talking about right?</p><p>I know you're probably exacerbated right now, but something in my gut is telling me that this is not just a small problem. If you look at the ColdFusion language (to touch on your custom tag example), the trend has been to ADD ways for people to define return variables. Even tags that used to create standard structs (ex. CFFILE, CFHTTP) now give us the ability to define "result" variables. I have to assume this was done because hard-coding value associations was creating problems.</p><p>... but, that's just my opinion - we've left the technical realm. Perhaps we can call this matter closed :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716321">24</a> by Raymond Camden
		posted on 6/23/2009 at 6:05 PM
		</div>
		<div class="comment_text"><p>It isn't hard coded in the config - it is hard coded in the controller. Whether you use MG or not, you have to get a value from the URL or Form scope, right? You have to look somewhere. My code was looking for ID. That's not too crazy. I think most of us normally use ID for a URL param.</p><p>I can make it dynamic with event arguments, and as I said, I did use that as a solution to this problem where the code to look for ID was already in use.</p><p>Starting from scratch, next time, I'll just use shipid though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716324">25</a> by Ben Nadel
		posted on 6/23/2009 at 6:11 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>Yeah, you need to get the data from somewhere :) Perhaps we are saying the same thing?? I think hard-coding in the Controller would be just fine as it would be the controller's job to translate the request data into usable data internally.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716323">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716323">26</a> by Raymond Camden
		posted on 6/23/2009 at 6:13 PM
		</div>
		<div class="comment_text"><p>Right, so the point of this is - I hard coded it for ID. Which worked fine - in isolation. It didn't work fine when it was run with other controller methods that _also_ wanted to use ID.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716325">27</a> by Ben Nadel
		posted on 6/23/2009 at 6:18 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>Oooh, you hard coded the ID in the callee controller (ship). I thought you meant that you hard-coded the ID in the callER controller (report).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716326">28</a> by Raymond Camden
		posted on 6/23/2009 at 9:57 PM
		</div>
		<div class="comment_text"><p>Well, the caller isn't a controller - it's more the XML config file. I've said, for event so and so, call these messages.</p><p>I would _really_ recommend taking a look at the MG Quick Start. It will only take you about an hour.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716327">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716327">29</a> by Ben Nadel
		posted on 6/23/2009 at 10:44 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>I've been meaning too. I tried like two weeks ago, but then got de-motivated when I had to install ColdSpring... we'll suck it up and try again :)</p></div>
	</div>
</div>
		