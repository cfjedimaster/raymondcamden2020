
<div class="comment" id="c_1713656564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656564">1</a> by Stephen Adams
		posted on 8/22/2006 at 3:43 PM
		</div>
		<div class="comment_text"><p>Looks cool, I like the look of Spry and am looking forward to using it with Model-Glue. What about using Model-GLue and Felx is that possible?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656573">2</a> by Raymond Camden
		posted on 8/22/2006 at 4:40 PM
		</div>
		<div class="comment_text"><p>No reason why not. (AFAIK)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656572">3</a> by Brian Kotek
		posted on 8/22/2006 at 6:18 PM
		</div>
		<div class="comment_text"><p>Using Flex with Model-Glue (or Mach-II or Fusebox) would, as I understand it, be quite redundant. All you're really "re-using" is the Model layer, becuase Flex (the Flash app running on the client) takes over the duties of Controller and View.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656568">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656568">4</a> by Raymond Camden
		posted on 8/22/2006 at 6:21 PM
		</div>
		<div class="comment_text"><p>Brian, you don't think you would use the controller in MG? Maybe it would be overkill, but it still seems like something that could be useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656571">5</a> by Brian Kotek
		posted on 8/22/2006 at 6:54 PM
		</div>
		<div class="comment_text"><p>I don't believe so. The Flex app would become the controller, just making calls directly to your model though your service layer. Going through the Model-Glue controller would add all of the overhead of the MG framework for little gain because none of the other aspects of the framework are being used. MG, Mach-II and Fusebox are what I would call "HTML UI Controller" frameworks. I don't think they're meant to handle pure Flex, web service, or Flash remoting applications.</p><p>All that said, two caveats. First, I haven't done this so it is just my opinion/theory. And second, I'm sure it is probably possible to use a MG app as the backend of a Flex app. It just seems like trying to bend it to do something it wasn't really meant to do.</p><p>You've done more Flex work than I have Ray so maybe you can discuss this a bit further? The way I understand it, a Flex app works something like this:</p><p>Flex app announces event. Flex hits a CFC on the server (a Facade that in turn calls a Service layer component in the application scope) for some data. Data is returned via Flash Remoting. Flex populates a data object. View components in the Flex app that are bound to the data object update themselves in response (such as a data grid).  Am I near the mark? Maybe one difference is that I'm talking about Flash Remoting and your blog entry is about XML formatted data for AJAX. They are kind of different beasts I believe.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656569">6</a> by Raymond Camden
		posted on 8/22/2006 at 7:13 PM
		</div>
		<div class="comment_text"><p>I think the problem with Flex making direct calls to the model is that it ties Flex a bit too closely to the model. What if the model changes? Having the controller layer aspect in place creates a clear separation between Flex and back end. Now - Flex has a controller aspect to it - but using that means you are syaing you will only have a Flex front end. If you move to HTML, or whatever, then you don't have the controller in place at the server side.</p><p>I think you are right on your understanding of Flex (I doubt I am much more experienced in it then you), but in your text where you say, 'flex hits a service layer', I see no reason why that can't be the MG controllers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656575">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656575">7</a> by Brian Kotek
		posted on 8/22/2006 at 7:25 PM
		</div>
		<div class="comment_text"><p>Agreed on avoiding the tying of the Flex app to the data model. That is indeed where the Service layer would come into play. Even in my MG, MII or Fusebox apps I use a Service layer, and my Listeners/Controllers don't do any acutal processing, but simply take requests from the framework and forward them on to the Service layer, which in turn handles all the Model chores by calling Gateways (or Reactor), business objects, etc.</p><p>In other words, my MG controllers are pretty "dumb", and simply delegate to the Service layer. In this setup, maybe it makes more sense why I think keeping Model-Glue "in the way" so to speak seems redundant. If the model changes, that's fine, because the Service layer interface is meant to stay consistent. In fact, with such a setup, it would be possible to have a MG app running an HTML version of the site, but a Flex app making calls directly to the Service layer though some simple Facade components.</p><p>Maybe this would clear it up a bit for me: if you used a MG app as the back-end for a Flex app, and you wanted to use Flash Remoting as the data exchange mechanism, what exactly would the Flex app be "calling" in the MG app? Wouldn't you have to create a static Facade CFC to point the Flex remoting calls to? AFAIK, you can't point a Flash Remoting call at a normal URL, it must be pointed at a CFC method whose access is "remote". What do you think? Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656574">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656574">8</a> by Raymond Camden
		posted on 8/22/2006 at 11:00 PM
		</div>
		<div class="comment_text"><p>You are right - you would need some kind of proxy CFC or facade CFC for Flash Remoting to call. One thing that MG needs to add (and it has it, but a bit hidden I believe), is a way to call MG events from outside of MG. So for example, I want to be able to do: result = mg.invokeEvent("goober").</p><p>But anyway - you are right - I'd have a facade CFC and be skipping MG anyway. So forget what I said I guess. ;) Although I'd probably still have MG there to support a web based admin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656576">9</a> by Sam Clement
		posted on 8/23/2006 at 12:18 AM
		</div>
		<div class="comment_text"><p>Very interesting post and comments!  This is a bit off topic... but how do you usually model your service layers?</p><p>I'd imagine that applications with data persistence would have service objects that had CRUD methods.  However, I always get a bit confused on how best to create service objects when objects are composed of each other, i.e. do I need a separate user service, company service, address service etc.</p><p>I guess this is the problem with modeling objects from the database structure, which is very tempting when using something like Reactor!  Anyway, do either of you have advice on how best to model services?  Or know of any indicators that help identify when persistence objects should be aggregated under one service object (if that makes any sense)?</p><p>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656582">10</a> by Raymond Camden
		posted on 8/23/2006 at 12:58 AM
		</div>
		<div class="comment_text"><p>I haven't had to worry about that yet actually. The closest thing I've done for that is the blogproxyCFC I built for my Spry demo. BlogCFC doesn't work well outside it's application context, so I needed the proxy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656585">11</a> by Simeon
		posted on 8/23/2006 at 1:38 AM
		</div>
		<div class="comment_text"><p>Following along the thread of Brian and Rays conversation....</p><p>Using MG Unity to get this done means that you  have already wired up your "Service" cfc's in ColdSpring.  ColdSpring has an object called RemoteFactoryBean.  This allows you to have ColdSpring generate your remote facade for you from your main service object.  So you can enjoy the benifits of Ajax/Flex without having to write extra code to interface it with the business code you have already written.  Through AOP in ColdSpring you can also implement security, logging and even "massage" the data you return.</p><p>I made a blog post about it a while ago. Which you can see here <a href="http://disq.us/url?url=http%3A%2F%2Fwww.simb.net%2Fclient%2Findex.cfm%2F2006%2F7%2F6%2FColdSpring-Remoting%3AmFIvGca1vx-1lrWQ36eoFD00pEM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.simb.net/client/index.cfm/2006/7/6/ColdSpring-Remoting">http://www.simb.net/client/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656588">12</a> by Sam Clement
		posted on 8/23/2006 at 4:25 AM
		</div>
		<div class="comment_text"><p>Very cool stuff, Simeon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656586">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656586">13</a> by Brian Kotek
		posted on 8/23/2006 at 7:13 AM
		</div>
		<div class="comment_text"><p>Agreed, I had not heard of that capability of ColdSpring!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656587">14</a> by Simeon
		posted on 8/23/2006 at 6:18 PM
		</div>
		<div class="comment_text"><p>Well I am glad that you might find it useful.  Brian, as a fuseboxer you will be happy to know that I also use these same techniques there.  I just tend to set up ColdSpring in my application.cfc rather that in the fusebox initialization.  That way if the first request comes in through flex or some remote access method, everything still gets loaded up :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656589">15</a> by Andrew Powell
		posted on 8/23/2006 at 8:16 PM
		</div>
		<div class="comment_text"><p>Ray, good to see you MGer's are catching up!  :)</p><p>I think the Flex question also addresses the use of web services with frameworks as well.  In MG as well as Mach-II, you will have to have a facade CFC that will have to be directly accessed at the controller layer.  This will suite FR and webservices.</p><p>For web services, I guess you could have a view that generates the WSDL and all, but that seems like a bit of overkill when CF will do it for you.</p><p>The more I look at it, creating "Remote Facades" or "wrapper CFCs" in the controller makes the most sense.  Although, doing that makes the consuming service an extension of the controller, I would think.  That, however, is more of a theoretical issue than practical.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656689">16</a> by Joel Cox
		posted on 8/23/2006 at 9:29 PM
		</div>
		<div class="comment_text"><p>Thanks for the example, Ray, I'm looking at your code and applying it to a MachII application.</p><p>Is there any way in ColdFusion to use function pointers? For instance, in my spryListener, I want a simple function called 'proxy'.</p><p>  &lt;cffunction name="proxy" access="public" returntype="xml" output="false"&gt;<br>  	&lt;cfargument name="event" type="MachII.framework.Event" required="yes"/&gt;<br>	&lt;cfset var proxyFunction = event.getArg('method') /&gt;<br>    &lt;cfreturn variables.spryGateway.#proxyFunction#() /&gt;<br>  &lt;/cffunction&gt;</p><p>This doesn't compile, but illustrates what I want to do. I want to be able to supply any function name to the listener and have it call the appropriate function in the spryGateway (which builds the actual xml).</p><p>This would allow me to build Spry datasets like</p><p>var dsRecentUsers = new Spry.Data.XMLDataSet("index.cfm?event=spry&amp;method=recentLogins", "users/user");</p><p>The spry event notifies the spryListener, passing the name of the function to be called in the spryGateway as the "method" parameter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656694">17</a> by Raymond Camden
		posted on 8/23/2006 at 9:35 PM
		</div>
		<div class="comment_text"><p>If spryGateway is a CFC, just switch to cfinvoke:</p><p>&lt;cfinvoke component="#spryGateway#" method="#proxyFunction#" etc&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656695">18</a> by Joel Cox
		posted on 8/23/2006 at 10:14 PM
		</div>
		<div class="comment_text"><p>Nice,</p><p>  &lt;cffunction name="proxy" access="public" returntype="xml" output="false"&gt;<br>  	&lt;cfargument name="event" type="MachII.framework.Event" required="yes"/&gt;<br>	&lt;cfset var proxyFunction = event.getArg('method') /&gt;<br>	&lt;cfset var myXML = '' /&gt;<br>    &lt;cfinvoke component="#variables.spryGateway#" method="#proxyFunction#" argumentcollection="#event.getArgs()#"  returnvariable="myXML" /&gt;<br>	&lt;cfreturn myXML /&gt;<br>  &lt;/cffunction&gt;</p><p>seems to be working at first blush. The argumentcollection is picking up any additional parameters properly also, ie.,</p><p>var dsRecentUsers = new Spry.Data.XMLDataSet("index.cfm?event=spry.facade&amp;method=recentLogins&amp;NumberDays={dsDays::day}", "users/user", {useCache: false});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656693">19</a> by Jan Jannek
		posted on 9/18/2006 at 4:25 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>this is really a nice description. I am trying to implement some parts of a MG:U app with AJAX (probably Spry) and want to integrate your idea. The problem is the debugging information provided by MG. Everything works fine while not using it (debug=false in CS configuration). Is there a way to let MG render the view without the debug output and NOT setting it to 'false' globally in the configuration? I haven't found a way to do this yet, so I am interested if anyone else got that working.</p><p>Greetings,<br>Jan from Germany</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656692">20</a> by Raymond Camden
		posted on 9/18/2006 at 5:21 PM
		</div>
		<div class="comment_text"><p>I don't think so, but that could be useful, kind of like a request override. I'll ping Joe to see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656696">21</a> by Jan Jannek
		posted on 9/18/2006 at 5:53 PM
		</div>
		<div class="comment_text"><p>I just found out by having a look at the MG-Examples of ajaxCFC, that there is the option to get rid of the debugging for a single event by adding:</p><p>&lt;cfset request.modelGlueSuppressDebugging = true /&gt;</p><p>to the xml.view.cfm and everything works fine!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656697">22</a> by Raymond Camden
		posted on 9/18/2006 at 6:14 PM
		</div>
		<div class="comment_text"><p>I blogged this. Thanks.</p></div>
	</div>
</div>
		