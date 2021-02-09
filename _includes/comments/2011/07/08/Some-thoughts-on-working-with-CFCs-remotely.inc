
<div class="comment" id="c_1713734053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734053">1</a> by Gareth Arch
		posted on 7/8/2011 at 8:18 PM
		</div>
		<div class="comment_text"><p>Hopefully this blog entry will spur a good bit of discussion.  I always enjoy reading how others make use of remote service calls from Flex/AJAX back to CF.</p><p>I just started to make use of cflogin and roles to enable remote access only to logged in users via an AIR client and am trying to find some best practices for that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734058">2</a> by MikeG
		posted on 7/8/2011 at 8:44 PM
		</div>
		<div class="comment_text"><p>When did CF start running the init method automatically?  How do you pass arguments if that happens?  In the past when creating instances I have always<br>session.myInstance=createobject(....).init(args);</p><p>Next question, why not just use the extends argument for the cfcomponent tag?  Seems to me if you reference a persistent scope directly in a cfc you may have problems.  My practice has always been "CFC functions can only use data/objects that are passed into them as arguments or available to them though variables or this scope".  Granted this is beyond "baby steps"; but it is as difficult to unlearn a practice as it is to learn one..  By following this self imposed rule, I can use cfcs across applications with or without a framework to prop them up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734057">3</a> by Adrian J. Moreno
		posted on 7/8/2011 at 8:45 PM
		</div>
		<div class="comment_text"><p>I generally use an AjaxProxy.cfc which functions like your ArtService.cfc. I would think a better name might be ArtProxy.cfc for your example.</p><p>The reason being that files named *Service.cfc are generally assumed to be Service Objects. As such, they should be singletons created in the application scope just as your other two CFCs were.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734056">4</a> by Dave DuPlantis
		posted on 7/8/2011 at 9:05 PM
		</div>
		<div class="comment_text"><p>Baby steps are important, because you have at least two advantages once you get beyond them.</p><p>One is that if you're having trouble using a framework, you already understand the basics, so you've got a point of reference: you just need to figure out how Framework X implements whatever you're doing.</p><p>Another is that when you get to something that's not easily done within the scope of your framework, you'll be more comfortable expanding it than if you didn't understand how it did the basic stuff in the first place.</p><p>I like the tip about executing code on creation of a CFC ... as you say, not that I'd really want to use it that much, but I'm sure the need will come up from time to time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734061">5</a> by Devin
		posted on 7/8/2011 at 9:18 PM
		</div>
		<div class="comment_text"><p>I understand the purpose of this blog entry, but what I found confusing was that out of all 3 of the CFCs, you chose the one that was most likely to have instance data as the one to instantiate in the application scope, and the two that were most likely to not have instance data (singletons) were not instantiated in the application scope.</p><p>I know it's just an example, but in the real world, you'd most likely cache your services/utils in the app scope and not the entities / model objects.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734062">6</a> by Raymond Camden
		posted on 7/8/2011 at 10:03 PM
		</div>
		<div class="comment_text"><p>Lots to reply to...</p><p>@MikeG: I believe CF9. And yes, you can pass args. Given an init func that accepts a name arg I can do:</p><p>&lt;cfset t = new test("Ray")&gt;</p><p>To your question - why not use extends? In general, extends is meant to be used for inheritance. Ie, A is a B. In our case, our component wasn't extending util, it was needing. Hence why I made an instance. To be clear, yes, if you did extends it would work, but it's not considereded best practices, and immediately fails when your CFC needs another one as well.</p><p>@Adrian: No, I checked. My name is right. Yours is wrong. End of story. ;) Yeah - it could get confusing if use service components in your model. Again though I'm trying to KISS here.</p><p>@Devin:</p><p>Well, its an example, really. And I disagree - the service compnent here was specifically built for remote calls, so it can't be cached. If you mean "service" as in what Adrian brought up, then sure, but that's not how I used it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734063">7</a> by Gareth Arch
		posted on 7/8/2011 at 10:29 PM
		</div>
		<div class="comment_text"><p>I have a question for everyone:</p><p>How does everyone handle returning errors back from their remote service calls?</p><p>e.g. I have a remote service that accepts a customer and saves or updates it.  However, if the e-mail address address already exists (for a new user), I want to return an error message back to my AIR app that states that that e-mail already exists.  Currently I'm just returning back the "Customer" object.  Would the "best" method be to add an "error" object to my Customer that I would check to see if any errors had been thrown, or create another object that has error and customer properties, and return that back.  For both methods I would probably check in the resultHandler of the client app for the error and display it to the end user.</p><p>I tried using CFThrow, then catching that error in the AIR app, but I found that if I didn't have robust debugging turned on, it sends back a generic error message (found a bug mentioned for CF 9.0.1 in the Adobe bug tracker, hopefully 9.0.2 will have a fix for it).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734067">8</a> by Raymond Camden
		posted on 7/8/2011 at 10:32 PM
		</div>
		<div class="comment_text"><p>@Gareth: I won't pretend to have the best answer but I'll give my opinion. But before that, let me address your last point.</p><p>902 (who says the next version is 902? ;) will not "fix" this as it isn't broken. Robust Exception info is only for debugging. "Rich" error handling is ok CFM to CFM (or I should say, local code on server to local code on server), but when a remote guy invokes your call, the result error should not contain info that can be used as an attack vector. If it did, I'd just force an error remotely and use it to help attack your site.</p><p>So I'd probably do this:</p><p>a) For CFCs in your model, go ahead and throw real errors, that's what they are there for.</p><p>b) For your Remote CFC (proxy, service, whatever), I'd return a struct that contains information about the request. This could include status flags, like 0 == error with a message detailing why.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734066">9</a> by Robert Zehnder
		posted on 7/8/2011 at 10:34 PM
		</div>
		<div class="comment_text"><p>@Gareth<br>I generally return a status (0 or 1 depending on success) and an error array on every request.  If status is 0 (failed) it is handled by the front-end dumps out the error array and handles them accordingly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734070">10</a> by MikeG
		posted on 7/8/2011 at 10:40 PM
		</div>
		<div class="comment_text"><p>for remote cfc calls I rarely return just the data; typically a struct with 3 keys, status, msg, data.  In the cfc function, lots of catch blocks to return well formed messages for expected problems and one generic catch that sets "Error encountered" message.  Only give remote callers error messages that you craft, try to to let them have system error messages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734082">11</a> by Gareth Arch
		posted on 7/8/2011 at 10:48 PM
		</div>
		<div class="comment_text"><p>@Ray,<br>It does actually appear to be a bug though<br><a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%23bugId%3D83525%3AkLPRiFa6QaFRPPwnmrjQqQdMqq8&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html#bugId=83525">http://cfbugs.adobe.com/cfb...</a><br>I try to throw back just a message, but get a generic message "Unable to invoke CFC - Event handler exception."</p><p>@all,<br>Yeah, I'm definitely getting to see the advantages to something more constructive when returning data back to my calling app.  Just didn't want to have to return back a generic "data" property back to my app, but I guess it doesn't matter as I have to type it when it returns back to my client app anyway :)  No different than "event.result" now I think about it.<br>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734083">12</a> by Raymond Camden
		posted on 7/8/2011 at 10:52 PM
		</div>
		<div class="comment_text"><p>Woah - that's a very different thing though. You didn't mention the use of onCFCRequest. You only said (afaik) that you threw an error in the CFC method. Your bug then is in error handling via onCFCRequest. Looks like a real bug to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734085">13</a> by Gareth Arch
		posted on 7/8/2011 at 11:03 PM
		</div>
		<div class="comment_text"><p>Yeah, it was definitely a bit of a pain.  I threw the message back, then it gets gobbled up and converted to the generic message.  Would be *fantastic* if it worked correctly :)  And it did for all my local testing as I had robust error handling turned on.  I like idea of passing back more info to my calling page though...seems like a good solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734084">14</a> by Devin
		posted on 7/8/2011 at 11:14 PM
		</div>
		<div class="comment_text"><p>Remote services can certainly be cached, when using the onCFCRequest().</p><p>And yeah, that error handling is a tricky thing. It makes it impossible to catch the real error in your Flex fault handlers.</p><p>One thing I've done (which is a PITA) is to return some sort of error formatted data and utilize the availble hooks in the RemoteObject/Message classes that allow you to intercept the RPC results (before your RPC responders receive it), check to see if it's an error, and then produce a FaultEvent and pass manually pass it to your fault responders.</p><p>The idea is that once they fix the error serialization in CF (assuming they do), you can just delete your interceptor code in the flex app and be done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734086">15</a> by Raymond Camden
		posted on 7/8/2011 at 11:17 PM
		</div>
		<div class="comment_text"><p>@Devin: I'm sorry - but how? Are you saying you intercept the call in onCFCRequest and 'replace' the CFC with one from the app scope? I don't believe that would work. You can stop the request I suppose and redirect it. Is that what you mean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734089">16</a> by Gareth Arch
		posted on 7/8/2011 at 11:17 PM
		</div>
		<div class="comment_text"><p>@Devin,<br>Ah, I was scouring through the ResultEvent debug result looking for that exact thing...do you have any code or where I can look for that?<br>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734088">17</a> by Devin
		posted on 7/8/2011 at 11:30 PM
		</div>
		<div class="comment_text"><p>@Ray:  It's no different than using the onRequest handler to intercept a request but include a different file.  With CFCs, you're just intercepting the request and calling a different CFC instance (the one stored in the application scope).</p><p>@Gareth:  Take a look in the docs at the RemoteObject.convertResultHandler() method.  That should get you started. If you need further assistance with it, feel free to email me at devin@shinynet.com</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734090">18</a> by Raymond Camden
		posted on 7/8/2011 at 11:44 PM
		</div>
		<div class="comment_text"><p>I wonder if it runs before the remote method check. Ie, if I called</p><p>/remote/goo.cfc?method=X</p><p>and X wasn't even valid, would onCFCRequest still run.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734093">19</a> by Devin
		posted on 7/9/2011 at 12:32 AM
		</div>
		<div class="comment_text"><p>Good question. I can't say that I've tried, but in theory it should... considering one of the primary purposes of onCFCRequest is to intercept the request and do [whatever you want] including not even calling the intended method.</p><p>That would allow you to call dynamic methods such as:<br>getProductsByColorAndSizeAndCategory("red", "XL", "shirt") and use the methodname and args parameters to determine the real request.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734094">20</a> by Raymond Camden
		posted on 7/9/2011 at 12:33 AM
		</div>
		<div class="comment_text"><p>Of course, onMissingMethod might work for that too. I always forget if it works remotely though.</p><p>2 things for us to test. Race ya... ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734096">21</a> by Raymond Camden
		posted on 7/9/2011 at 12:36 AM
		</div>
		<div class="comment_text"><p>Ok I tested onMissingMethod. If access=remote, it can work fine remotely. (Kinda obvious I guess, but still...)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734098">22</a> by Devin
		posted on 7/9/2011 at 12:59 AM
		</div>
		<div class="comment_text"><p>I tested it with Flex, calling a fake method with fake arguments and dumpint the arguments scope from the onCFCRequest to a file and it worked with no problems.</p><p>For shits and grins, I attempted calling a non-existent CFC and that did not work. So I guess only the CFC is checked before onCFCRequest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734097">23</a> by Raymond Camden
		posted on 7/9/2011 at 1:06 AM
		</div>
		<div class="comment_text"><p>Did you try onMissingTemplate?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734100">24</a> by Devin
		posted on 7/9/2011 at 1:15 AM
		</div>
		<div class="comment_text"><p>I could not get that to work. But I've never used onMissingTemplate before so it's possible I'm doing something wrong.  I simply set it to return true hoping the request then be sent to the onCFCRequest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734101">25</a> by Michael
		posted on 7/11/2011 at 6:31 PM
		</div>
		<div class="comment_text"><p>@Devin - was it a CF error when calling the non-existent CFC or a web server error?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734099">26</a> by Brian W.
		posted on 7/12/2011 at 8:47 PM
		</div>
		<div class="comment_text"><p>Ray, I can't tell you how helpful this is! I use quite a few remote calls in many of my applications that leverage fairly status CFC's that could now be put into the application scope.</p><p>One question I have is how would your example impact server memory? I know you're not big on "one-rule-of-thumb to rule them all" but could you give a *do* and *don't* scenario to help with what should be considered before using this technique?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734105">27</a> by Raymond Camden
		posted on 7/12/2011 at 8:51 PM
		</div>
		<div class="comment_text"><p>It shouldn't have any real impact. I think if you imagine 5-10 or so CFCs for a normal app, all a few hundred lines, you are probably taking 10-20K of ram. To be honest, I'm just guessing here. I've never seen it be an issue. It's easy enough to test though with the built in Server Monitor. You can quickly see how much RAM your own application is taking.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734102">28</a> by Brian W.
		posted on 7/12/2011 at 8:56 PM
		</div>
		<div class="comment_text"><p>Thanks Ray - I'm going to have to do some playing, i mean, testing... I'm probably a little too excited about this but this post really puts my head into a different place when thinking about remote calls (I use my remote calls for Ajax w/ JSON).</p><p>Thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734104">29</a> by Raymond Camden
		posted on 7/12/2011 at 9:00 PM
		</div>
		<div class="comment_text"><p>&lt;cf_soapbox&gt;<br>To me, the sign of any good technology is how excited it makes you. If you see it demonstrated and immediately start thinking about all the cool crap you could build, then it's a good tech. If you see it and think, my god, I'd lose half my hair just writing Hello World, then that's a tech to avoid.<br>&lt;/cf_soapbox&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734107">30</a> by Dave DuPlantis
		posted on 7/12/2011 at 9:03 PM
		</div>
		<div class="comment_text"><p>I think I just made a connection between working with Lisp and VB 6 and needing to wear a hat when I go outside these days.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734108">31</a> by Mary Jo
		posted on 7/22/2011 at 6:01 PM
		</div>
		<div class="comment_text"><p>Ah yes, that bug with onCFCRequest caused me many, many headaches! You'll see I put my vote in on it, and I hope others will as well, because Adobe consider it not very important since you can work around it. The workaround though can be very, very time consuming! I'm using Mate in my Flex app, and it had really nice Fault Handling, but the bug totally broke that as it doesn't return useful information. I ended up having to roll my own return object that would have a success indicator, and then either the return data, or an error struct. Then I had to extend Mate to look for this in all the return objects and handle it accordingly. Of course, I'm also sending any errors to my site-wide error handler on the server that logs everything and notifies me of the error.</p><p>As for my CF backend, I did find that the more complicated my model got, the more problematic it got. I'm using CF9 ORM, and it's hard to really control how much data gets returned. I ended up building a remote facade layer that includes assembly methods. So it would take the ORM objects, and create much simplier DTOs (data transfer objects) to send to Flex. A similar re-assembly method was used for return data. I also including caching methods so any DTO could be cached in EHCache based on its last modified date, so I only would run assembly if the object was not yet in cache, or had been changed since last cached. All this was a bit of work, but gives us total control over the data sent back and forth to Flex, and gave us huge performance increases as well by decreasing the massive objects CF was trying to send.</p></div>
	</div>
</div>
		