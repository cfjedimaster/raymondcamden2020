
<div class="comment" id="c_1713732633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732633">1</a> by Mike Brunt
		posted on 5/27/2011 at 2:39 AM
		</div>
		<div class="comment_text"><p>Ray, I believe your description of Try/Catch contrasted to global error handing mechanisms is spot on and I would certainly have Try/Catch on in development and test-QA and production; for instance it might be  a call to an external resource which could be suspected to fail wherever the code is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732639">
	<div>
		<img src="https://disqus.com/api/users/avatars/stevegood.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732639">2</a> by Steve Good
		posted on 5/27/2011 at 2:39 AM
		</div>
		<div class="comment_text"><p>I don't think the two are mutually exclusive. There are times you might want to log particular exceptions around critical areas of code and then just rethrow for the global handler to catch.  There may also be times where you _don't_ want to have the global handler involved and you would rather have the try catch handle it (I'm thinking of remote call exceptions).  I think a healthy application will make use of both types of exception handling.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732627">3</a> by Hal Helms
		posted on 5/27/2011 at 2:59 AM
		</div>
		<div class="comment_text"><p>People, I think, misunderstand the best use of try/catch. It's NOT to catch errors, but to protect your code from things you have no control over.</p><p>Here's some code...</p><p>try{<br>   var length = Len( arguments.someValue );<br>} catch ( any e ) {<br>   var length = 0;<br>}</p><p>Good? No. Here, you do have control over someValue.</p><p>If you're worried that someValue might not exist in the arguments, provide a default value.</p><p>If you're worried that the data type for someValue might not work with the Len() function, enforce data typing.</p><p>Here is a better use for try/catch:</p><p>try{<br>   var length = Len( new model.SomeClass().someValue() );<br>} catch ( any e ) {<br>   // appropriate error-handling<br>}</p><p>Since you don't have control over SomeClass's someValue method, you may want to protect your code.</p><p>More can be said about try/catch, but I think if someone were just to stick with that simple idea ("Do I have control or not?"), they could go a long way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732634">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732634">4</a> by JP
		posted on 5/27/2011 at 3:00 AM
		</div>
		<div class="comment_text"><p>What better way to test your error handling than to use try/catch during development? By the time my code goes to production, my error handling has been thoroughly tested, so I'm pretty confident that if something goes wrong, the user will be notified, the error will be logged, and I'll get an email.</p><p>One thing that is worth mentioning... my error handling is smart enough to know when I'm working in a dev environment, so it doesn't log/email the error information.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732616">5</a> by Hal Helms
		posted on 5/27/2011 at 3:03 AM
		</div>
		<div class="comment_text"><p>@Steve</p><p>I find the issue of logging (on during dev; off otherwise) can be handled better by leaving calls to the logger in place and replacing the actual *logger*.</p><p>In dev mode, I have a TrueLogger that has two methods: msg and log. These log to a Development.log file.</p><p>In production mode, I switch TrueLogger out for FalseLogger that also has two methods: msg and log. These, however, do nothing and cost (almost) nothing.</p><p>One upside is that if something wacky starts happening in production, you can swap out FalseLogger for TrueLogger and actually see what's going on in production.</p><p>At least, that works for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732638">
	<div>
		<img src="https://disqus.com/api/users/avatars/stevegood.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732638">6</a> by Steve Good
		posted on 5/27/2011 at 3:13 AM
		</div>
		<div class="comment_text"><p>@Hal While I agree with your use of a global logger to protect code from "external influences", I was thinking more about needing to take special action when something fails within the application (perhaps a failed call to an ESB or remote endpoint).</p><p>Additionally, if my application provides an external API of its own it might not be appropriate for the global handler to respond to remote calls.  In a perfect world the API would be an application of its own, but I imagine we can all put our hands on an application within minutes where that is not the case.</p><p>For the latter scenario one could argue that the global handler could be smart enough to understand the differences between a remote and an internal application call.  That, however, makes me think back to something you told me a few years ago about not creating "magic bullet solutions" and I think that applies here.</p><p>At the end of the day I think it comes down to what you stated about code protection _and_ context of the requesting source.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732635">7</a> by Sharon
		posted on 5/27/2011 at 3:39 AM
		</div>
		<div class="comment_text"><p>Too often I find that try and catch do little more than suppress errors that *should* surface and get in the way of fixing bugs...and there is almost never a global way to over-ride that.</p><p>I like Hal's way of handling things, especially the part about being able to turn on logging later (without setting the whole site to "isDev") and still having the code fail gracefully on the front-end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732642">8</a> by Andrew Scott
		posted on 5/27/2011 at 3:52 AM
		</div>
		<div class="comment_text"><p>As most people have mentioned the deciding factor is if you want the processing to stop or to continue.</p><p>When using any external HTTP calls via CFHTP or WebServices or even when using a 3rd party API or even an API you are creating, you will need to decide whether to allow the continued page request or abort and display the error.</p><p>Most notably it goes without saying as others have said, that it would be a given to try/catch a Web Service call and decide based on the info returned from that call will decide on what you need to do.</p><p>API's or your own framework, is a case where you might want to throw an excpetion. Then your application can decided on what to do with that exception, examples here would be say I am writing a database upgrader. One of the methods is to excute code that does some checking and reports that it can't find a file/database, you would throw a custom excpetion.</p><p>Once this falls back to the loop that is processing the files, you might decide that the importance of stopping the process is not important enough for a missing file. That means you can capture, check the type of exception and log the error and allow it to fall silently back into the loop and continue.</p><p>There are no hard and fast rules here, and it will be what you as a developer really want the application to do. If you are lazy enough to not even think about all possible scenarios, then you might be very comfortable in not using the try/catch to do what you need and just let it happen and deal with it when it happens.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732636">9</a> by MrBuzzy
		posted on 5/27/2011 at 4:20 AM
		</div>
		<div class="comment_text"><p>Here's how I would *handle* this in CF speak. The main objective is to always throw or re-throw errors to the global error handler, even from OnError(). Then in the development environment simply turn off the global error handler, or, from in the global error handler do an environment check or allow the global error handler to be enabled or disabled using IsDebugMode().<br>This allows applications to use try/catch as necessary to handle errors as required, but the global error handler remains the user friendly catch all.<br>Additionally, unless there's a specifc need to know where an error was caught, I avoid using cfrethrow. Instead I use cfthrow object='#cfcatch#' which preserves the original error as is, effectively hiding the fact that the error has been re-thrown.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732643">10</a> by Seth
		posted on 5/27/2011 at 5:29 AM
		</div>
		<div class="comment_text"><p>Thanks to all, I have a much better understanding, and some great ways to approach the problem I was trying to solve initially.</p><p>@Hal, the TrueLogger/FalseLogger is a great idea - I had been leaving the logging on (though just for error events).  I will definately be asking myself if I control it or not in the future and taking the appropriate action.</p><p>@Sharon and @JP, I think my biggest issue was with overthinking and trying to get a bit too granular (and OCD) in my catching/logging.</p><p>@Andrew, @Mike, @Steve, I think your examples are a perfect place to implement Ray's solution and have some sort of application variable where you can watch for certain errors (remote for instance) and then either rethrow, log, or make lemonade.</p><p>@MrBuzzy and @Ray this is definately the direction I am going to head from now on.  Let the global error handler do its job, that's where the logic belongs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732637">11</a> by Andrew Scott
		posted on 5/27/2011 at 5:46 AM
		</div>
		<div class="comment_text"><p>Actually I was leading away from the flag option.</p><p>The reason being is that when you begin getting in the habit of using the try/catch block, and understand when to use it or need it, that the global flag is really going to a hinder more than anything.</p><p>The reason I make that is because you might need to capture and do a redirection in work flow, by turning this of on a global level this will never happen and will cause your application to maybe behave incorrectly.</p><p>One should always think about looking at what they are doing, so if you might be doing say file IO. In a normal world we would need to write try/catches to make sure we alert our caller, that an error has occurred. This is normal analytic thinking about the situation, if you don't try/catch this then later on down the track you are going to be patching this to fix the errors that only sometimes crop up.</p><p>But if you write a flag to override this, then you cause issues that you might normally not get.</p><p>The safest thing to think about here is what is the code block going to be doing, and is there a potential that what I am calling might throw an exception. This is where Java and ColdFusion are different, in Java you are not going to be able to compile any code that has not caught an exception, when it calls something that requires this. ColdFusion doesn't care, it will just eventually fall down to the global error handling level.</p><p>So what I am saying is that you should be forgetting about that level, if it is for logging purposes to notify you of the errors. Then yes I would look at some flag that defines the difference between dev and production, and then provide a service / AOP to handle providing the information that you require, or minimal as required in your logs dependant on what server you are on or even require.</p><p>Hope that helps some more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732640">12</a> by Seth
		posted on 5/27/2011 at 6:11 AM
		</div>
		<div class="comment_text"><p>@Andrew, sorry for confusion.  What I was getting at was the possibility of having different types of exception flags. Maybe you have one for remote calls only then you could determine what the catch should do depending on dev / prod.  The app is almost always going to rethrow I imagine, unless its an external call in which you may just create an empty result struct for instance and log the fact that the remote source could not be contacted.  This would allow the app logic to continue (albeit with an empty resultset), but at least you would be alerted that the webservice was down.  In dev mode you may want to turn that off so that you can dump or log the resultcode and try to determine what is going awry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732646">13</a> by Marc
		posted on 5/27/2011 at 6:23 AM
		</div>
		<div class="comment_text"><p>I suggest writing an exception handling cfc which you can use to log errors in a catch or in the global exception handler. This way you have the option of logging the error and continuing as normal.</p><p>@MrBuzzy My testing in Adobe Coldfusion 8.0.1 shows that using &lt;cfrethrow&gt; doesn't change the exception at all and it has the advantage preserving the stack trace (AKA tagcontext). Is there a case when &lt;cfrethrow&gt; changes the exception?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732649">14</a> by Andrew Scott
		posted on 5/27/2011 at 6:25 AM
		</div>
		<div class="comment_text"><p>See now you just raised another issue.</p><p>I always without fail make sure that I capture any type of exception, that is raised via a remote call. And respond with custom error messages that anyone using the API calls can then do what they need too, this is regardless of whether that call will be made from a remote call or not. This way I am writing one block of code, and not writing one for internal use or just one for external use.</p><p>The point is that when you start mixing this type of behaviour, you can't expect a global option to just switch it on or off and will stand by this should not be decided on whether it is in production or not. Logging information for later analysis is a different story.</p><p>I also live by the rule that you want to mimic your production with your development/testing environment as much as possible, there are limits to this rule. But when it comes to code, then the rule is simple unless it is logging information, then if you expect to debug the code then you are going to be debugging this on your machines. Anyone who debugs on production is only asking for more complaints from your customers/client.</p><p>Seth, I am not just trying to get you to think outside the square. The try/catch block is there for a reason, and it might very well work right now for you to think and use this way. Now I know you might be thinking that you want to run code that is on production differently to development, and a flag will work very well there. But when it comes to dealing with exception handling then no, I disagree with a global flag option on that alone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732647">15</a> by Matt Woodward
		posted on 5/27/2011 at 6:27 AM
		</div>
		<div class="comment_text"><p>@Hal I actually use try/catch precisely for things I DO have control over, which is kind of what Ray was getting at.</p><p>Best use case I can think of is I have an app that does a ton of backend processing of data that comes from the wild, so as you can imagine I have to reject it for about 50 different reasons but I need to know precisely the reason why the data needs to be rejected and handle completely differently depending on the reason.</p><p>The key here is a single try statement can have multiple catches, and remember that you can explicitly *throw* an error of a custom type as well, which makes for some slick stuff in a layered architecture.</p><p>So let's say I have a controller that calls a service, and what goes on in the service might fail for one of my 50 aforementioned reasons.</p><p>In the service I might have something like:<br>... do stuff ...</p><p>&lt;cfif errorState1&gt;<br>  &lt;cfthrow type="errorType1" /&gt;<br>&lt;/cfif&gt;</p><p>... do more stuff ...</p><p>&lt;cfif errorState2&gt;<br>  &lt;cfthrow type="errorType2" /&gt;<br>&lt;/cfif&gt;</p><p>And then in my controller:<br>&lt;cftry&gt;<br>  &lt;cfset callServiceMethod() /&gt;</p><p>  &lt;cfcatch type="errorType1"&gt;<br>    ... do stuff ...<br>  &lt;/cfcatch&gt;</p><p>  &lt;cfcatch type="errorType2"&gt;<br>    ... do completely different stuff ...<br>  &lt;/cfcatch&gt;<br>&lt;/cftry&gt;</p><p>I've found that works extremely well and makes the service code simpler because it doesn't have to do anything other than say "I can't proceed, here's why, whoever called me needs to deal with it." And of course if the error isn't caught it bubbles up anyway and ultimately will be dealt with at a higher level.</p><p>Anyway, just wanted to chime in with that example because I've found it works really well for me. Basically keep error *handling* as far "forward" (if that makes sense) in your application as possible, and further down I tend to just throw errors (and make use of the ability to throw custom types!) and let the caller handle it however they see fit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732650">16</a> by Andrew Scott
		posted on 5/27/2011 at 6:33 AM
		</div>
		<div class="comment_text"><p>@Matt - nice example.</p><p>BTW saying that slick stuff can be done with custom excpetions is also an understatement.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732654">17</a> by MrBuzzy
		posted on 5/27/2011 at 6:38 AM
		</div>
		<div class="comment_text"><p>@Marc if I remember correctly, it adds additional lines to the java stacktrace. Also if viewing the error in the browser, with 'show detailed ...' turned on, you will see the CFML from where the error was rethrown, not the original place the error occurred.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732653">18</a> by Hal Helms
		posted on 5/27/2011 at 7:26 AM
		</div>
		<div class="comment_text"><p>I agree, @Matt. They can also be used for flow control, if you're very careful about what you're doing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732657">19</a> by Raymond Camden
		posted on 5/27/2011 at 4:01 PM
		</div>
		<div class="comment_text"><p>Wow - I spent the night "away from desk" and come back to a great set of comments.</p><p>First - Hal and Andrew - I really like how you guys described when to use try/catch. Andrew, I especially liked your simple "if you want the processing to stop or continue" description.</p><p>@Steve: To your first comment, I hope my text did not imply one should be used -instead- of the other. I'd assume 100% of apps out there make use of a global error handler and many would also need try/catch blocks somewhere in there.</p><p>@Sharon: Yeah, I ran into an improper use of try/catch a few weeks ago. I was shocked as it was a pretty important process and all errors were simply being ignored.</p><p>@MattW: I didn't think I implied I'd use try/catch for things I have control over - but that being said I think your example makes sense too. (And this is exactly the type of comments I was hoping to see. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732655">20</a> by todd sharp
		posted on 5/27/2011 at 4:44 PM
		</div>
		<div class="comment_text"><p>I find that another good use for try/catch is inside of a cfthread where the standard global error handling is not going to alert the user that something went wrong.  You might end up rethrowing, but you'll be able to at least alert the user at some point that there was an error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732656">21</a> by Jamie Krug
		posted on 5/27/2011 at 9:33 PM
		</div>
		<div class="comment_text"><p>Regarding throwing custom error types, I'm reminded of a post a while back from Mark Mandel, which is an approach I like:<br><a href="http://disq.us/url?url=http%3A%2F%2Fcompoundtheory.com%2F%3Faction%3DdisplayPost%26ID%3D387%3AQ3M7xs5IA3BplvBzIaK0Nd304MA&amp;cuid=3321886" rel="nofollow noopener" title="http://compoundtheory.com/?action=displayPost&amp;ID=387">http://compoundtheory.com/?...</a></p><p>Have a peak at the ColdSpring 2.0 code repo over at SourceForge for some examples of this in action.</p></div>
	</div>
</div>
		