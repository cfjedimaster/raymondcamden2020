
<div class="comment" id="c_1713678355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678355">1</a> by David McGuigan
		posted on 3/24/2008 at 9:00 PM
		</div>
		<div class="comment_text"><p>Sold. Thanks Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678376">2</a> by David Buhler
		posted on 3/24/2008 at 9:27 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Can you expand on the use-cases of an application based CFC?</p><p>On our app, I have a CFC that as of yesterday, will be hit (quite possibly) 100s of times by one user using a new "AutoSave" feature we introduced. In Flex, when users move from item to item, we save the current work to the DB through our CFC. I'm curious if moving this kind of functionality into the application scope would create a worthy speed difference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678377">3</a> by David Buhler
		posted on 3/24/2008 at 9:33 PM
		</div>
		<div class="comment_text"><p>Subscribed!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678372">4</a> by Raymond Camden
		posted on 3/24/2008 at 9:49 PM
		</div>
		<div class="comment_text"><p>Well, in _general_, if you have a service used throughout an application, it makes sense to store it in the Application scope. Just like you would store a value used throughout an application.</p><p>It sounds like your Flex app is hitting a CC, is it not? I normally would use a CFC 'proxy', by that I mean a CFC that works with the 'real' application-scoped CFCs. This lets me use Application configured CFC from Flex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678378">5</a> by David Buhler
		posted on 3/24/2008 at 10:02 PM
		</div>
		<div class="comment_text"><p>Not sure what you mean by a "CC".</p><p>The Flex app has a wizard. The Wizard is between 9 and 13 steps, depending on the options you choose. Flex makes a request on a CFC with a method called "Update" each time the view changes. This logic was just added, because we had kept all the information "in state" on the client, but some people clicked the HTML Header, or their Favorites, or their Home Button, and lost 9-13 steps worth of work. :)</p><p>I guess my confusion lies in defining when I wouldn't create my CFCs in the application scope and when I would. For example:</p><p>The "Login" CFC would run each time a user hits the app.<br>The "Fetch Regions" CFC would run each time a user hits the app.<br>The "UpdateEvent" CFC would run each time a user hits the app.</p><p>I could theoretically store all of the above in the application scope. Is that reasonable? Are there drawbacks? What kind of speed gains are there to storing a CFC in the application scope?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678361">6</a> by David Buhler
		posted on 3/24/2008 at 10:04 PM
		</div>
		<div class="comment_text"><p>"I normally would use a CFC 'proxy', by that I mean a CFC that works with the 'real' application-scoped CFCs."</p><p>Are you loading the CFCs into application scope in the Application.cfc?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678357">7</a> by Raymond Camden
		posted on 3/24/2008 at 10:07 PM
		</div>
		<div class="comment_text"><p>David: My first 'CC' was 'CFC', sorry. Yes - I do normally load all my CFCs into the App scope - I say normally because I'm slowly moving to ColdSpring.</p><p>I can't tell you if it makes sense to use the App scope w/o knowing even more about your app. It depends! First off - remember you can't hit an Application scoped CFC via Flex. You have to hit a proxy CFC instead that would integrate with the Application scoped CFC. There really aren't any drawbacks if you are using CFCs are basic services, which it sounds like you are.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678359">8</a> by Daniel Budde II
		posted on 3/24/2008 at 10:19 PM
		</div>
		<div class="comment_text"><p>David, I would say 'yes', Ray regulary uses components scoped in the application scope.  Take a look at his blogcfc or galleon.  As Ray said earlier, it is a very easy way of having access to an object throughout your application and if you tack on an object factory to that, then you have a method that should help ensure you are only using one instance of a component always.  Although, if you were to always use, lets say 'application.user' for a user object, that is relatively easy to be using the same instance throughout your application.</p><p>Regarding the proxy CFC, one example of that would be if you had a 'user' component with an 'authenticate' method, but you needed to be able to authenticate through a flash client, you could create a proxy cfc 'remote' access method named 'userProxy.cfc' and have a remote method in it named 'authenticate' that calls 'application.user.authenticate()' and this way you have a controled method for breaking encapsulation within a cfc.</p><p>Hope that makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678360">9</a> by Daniel Budde II
		posted on 3/24/2008 at 10:22 PM
		</div>
		<div class="comment_text"><p>Bah, by the time I responded, Ray had already answered.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678365">10</a> by Raymond Camden
		posted on 3/24/2008 at 10:26 PM
		</div>
		<div class="comment_text"><p>One thing I want to point out - BlogCFC is NOT what I'd consider best practice. I love it- but it's a bit rusty. That's why BlogCFC6 is a rewrite. Galleon is definitely done a bit nicer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678356">11</a> by David Buhler
		posted on 3/24/2008 at 10:30 PM
		</div>
		<div class="comment_text"><p>Still much appreciated from both of you.</p><p>I'll give it a shot tonight. I'm curious as to the speed difference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678364">12</a> by Raymond Camden
		posted on 3/24/2008 at 10:40 PM
		</div>
		<div class="comment_text"><p>You probably won't see a lot - especially if you are under CF8. But again - I prefer to create things one time only if I can get away with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678363">13</a> by David McGuigan
		posted on 3/24/2008 at 10:51 PM
		</div>
		<div class="comment_text"><p>I would think that any noticeable "speed" differences wouldn't surface until you were dealing with large magnitudes of simultaneous requests; Ray mentioned that with CF 8 a lot of the CFC instantiation overhead was reduced or eliminated.</p><p>The application that sparked my initial question can have thousands (and hopefully tens of thousands soon) of users navigating the site at the same time, so moving to a set of application-scoped CFCs, I'm hoping, should cut out a lot of unnecessary workload fat.</p><p>Beyond performance though, a side benefit I've noticed is that it just makes sense and seems more logical to store a single instances of CFCs in the application scope from a development standpoint. I much prefer using:</p><p>&lt;cfSet wtf = application.instance.freakOut('#session.idUser#', '#now()#') /&gt;</p><p>to</p><p>&lt;cfinvoke component="aksl.sjd.jsdfj" method="freakOut" idUser="#session.idUser#" timeStamp="#now()#" returnVariable="wtf" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678362">14</a> by Michael
		posted on 3/24/2008 at 10:54 PM
		</div>
		<div class="comment_text"><p>I would also suggest including an application reset code in your application.cfc to detect presence of a URL variable...appreset.cfc this will allow for grabbing new versions of your cfc's if there is a change.</p><p>&lt;cffunction name="appStart"&gt;<br>&lt;cfset application.users = CreateObject("component", "cfc.users")&gt;</p><p>&lt;/cffunction&gt;<br>&lt;cffunction name="onApplicationStart"&gt;<br>  &lt;cfset this.appStart()&gt;<br>  &lt;cfreturn true&gt;<br>&lt;/cffunction&gt;<br>&lt;cffunction name="onRequestStart"&gt;<br>  &lt;cfif IsDefined("URl.AppReset")&gt;<br>   &lt;cfset this.appStart()&gt;<br>  &lt;/cfif&gt;<br>  &lt;cfreturn true&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678366">15</a> by David McGuigan
		posted on 3/25/2008 at 12:06 PM
		</div>
		<div class="comment_text"><p>Michael! I cannot even articulate how helpful that is. I had been either developing the CFC external to the app scope and then when I thought it was ready moving it over OR restarting the CF service for each new test. GENIUS.</p><p>I'll also take this opportunity to act like a grown up and mention that, "Kids, the example Michael showed above is for development purposes only. When you move your application to a production server, you need to amputate the ability of anonymous users to reset it. Slash stay in school" - Grown Up Dave.</p><p>Thanks Michael.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678369">16</a> by Raymond Camden
		posted on 3/25/2008 at 3:24 PM
		</div>
		<div class="comment_text"><p>David, you don't have to remove it in production. A 'reset' isn't always that big of a deal. You can also make it check url.appreset for a particular value, like url.appreset=cowseatchicken. This means that only people who know the right password can reset it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678368">17</a> by Brian Kotek
		posted on 3/25/2008 at 9:54 PM
		</div>
		<div class="comment_text"><p>The main factor in determining whether a CFC is a candidate for being a Singleton and going into the application scope is whether or not it has state.</p><p>Things like Services (the API to the model) and Gateways (CFCs that deal with database queries) are usually great candidates for the application scope because they have no instance data. You just pass in arguments and get back a result.</p><p>On the other hand, CFCs that have state (often called "business objects") do have state, and these are usually created on a per-request basis. They're also called "transient" objects because they only stick around for one request. So something like a User CFC, or an Address, or a Company, do contain state since they represent specific entities. So those would not be good for the application scope (in fact they'd probably be really bad).</p><p>Hopefully that helps a bit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678367">18</a> by David Buhler
		posted on 3/25/2008 at 10:00 PM
		</div>
		<div class="comment_text"><p>My understanding is that the client has state and the Database has state, but how would you preserve state in the CFC, even in the application scope, once the request ends?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678384">19</a> by Brian Kotek
		posted on 3/25/2008 at 10:02 PM
		</div>
		<div class="comment_text"><p>I should modify that to say "The main factor in determining whether a CFC is a candidate for being a Singleton and going into the application scope is whether or not it has state *that changes or varies between users or requests*."</p><p>Singletons can certainly have instance data, it just generally doesn't change once the CFC has been created.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678380">20</a> by David McGuigan
		posted on 3/25/2008 at 11:10 PM
		</div>
		<div class="comment_text"><p>David B:<br>The "state" would be represented by the current values of the CFC's properties at any given time. As users and code interact with the application, the CFC's instance variables' values can change, thereby altering its state.</p><p>By placing a CFC instance in the application scope, you're ensuring that it, and its properties/state will live before, during, and after each subsequent request until either ColdFusion is restarted or some other mechanism overwrites the instance with a new instance (such as Michael's user-triggered appStart function above).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678383">21</a> by David McGuigan
		posted on 3/25/2008 at 11:21 PM
		</div>
		<div class="comment_text"><p>While we're on the subject:<br>Can you not call Application.cfc methods from ordinary application-child code?</p><p>I have these two methods in Application.cfc:</p><p>&lt;!--- f: onApplicationStart ---&gt;<br>&lt;cffunction name="onApplicationStart" returnType="boolean" output="false"&gt;</p><p>	&lt;!--- Initialize application variables ---&gt;<br>	&lt;cfreturn reinitializeApplication() /&gt;</p><p>&lt;/cffunction&gt;<br>&lt;!--- x: onApplicationStart ---&gt;</p><p>&lt;!--- f: reinitializeApplication ---&gt;<br>&lt;cffunction name="reinitializeApplication" returntype="boolean" output="false" &gt;</p><p>&lt;!--- Etc. ---&gt;<br>&lt;cfreturn true /&gt;</p><p>&lt;/cffunction&gt;<br>&lt;!--- x: reinitializeApplication ---&gt;</p><p>Although the application correctly initializes as predicted, when I call reinitializeApplication() from the Index.cfm file for example, I get this error:</p><p>Error: The initializeApplication method was not found.</p><p>Here's the code that calls it, I'm not sure what I'm doing wrong.</p><p>&lt;!--- Check for an application reset trigger (development purposes only) ---&gt;<br>        &lt;cfif etc eq 'Reset'&gt;</p><p>                &lt;cfset application.initializeApplication() /&gt;</p><p>        &lt;/cfif&gt;</p><p>Any ideas? Can you just not call Application.cfc methods outside of the file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678382">22</a> by David McGuigan
		posted on 3/25/2008 at 11:25 PM
		</div>
		<div class="comment_text"><p>Note: I realize that in the last chunk of code I accidentally pasted "initializeApplication" instead of "reinitializeApplication". Whoops.</p><p>Just ignore that. The same problem still exists even when I attempt to call the correct function name.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678385">23</a> by Michael
		posted on 3/25/2008 at 11:28 PM
		</div>
		<div class="comment_text"><p>In your Application.cfc onApplicationStart <br>you can include this line<br>&lt;cfset application.applicationCFC = this&gt;</p><p>then in your index file and any other file in your application you can reference application.applicationCFC.resetApp or whatever..  I haven't tried this reference but it should work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678386">24</a> by Raymond Camden
		posted on 3/25/2008 at 11:29 PM
		</div>
		<div class="comment_text"><p>@Dave - do you mean, can I call 'core' App.cfc methods from other methods in App.cfc? Yes. Any method can call any other methods. Just be aware that when you call a 'core' method, like onSessionEnd, it doesn't REALLY have the samep impact. Ie, you can't kill a session, only CF can. Also note that methods which are single threaded, like onAppStart, will NOT be single threaded if you call them youself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678387">25</a> by David McGuigan
		posted on 3/25/2008 at 11:47 PM
		</div>
		<div class="comment_text"><p>Ray:<br>I just meant outside of the Application.cfc file, particularly, non-core methods (in this case reinitializeApplication, my custom function).</p><p>Michael:<br>That did it! Exactly what I was looking for. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678390">26</a> by Raymond Camden
		posted on 3/25/2008 at 11:49 PM
		</div>
		<div class="comment_text"><p>If I had stuff I wanted to call from my app, and from app.cfc, I would not put the methods in app.cfc. I'd put them in another CFC, and make an instance of that CFC in the app.cfc file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678393">27</a> by David Buhler
		posted on 3/26/2008 at 12:19 AM
		</div>
		<div class="comment_text"><p>I still wish this type of functionality...the ability to restart the application from a URL parameter or the creation of a "down for maintenance" page, was part of an off-the-shelf, Adobe framework for CF. It seems to be standard practice for all of the more experienced developers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678391">28</a> by Raymond Camden
		posted on 3/26/2008 at 12:28 AM
		</div>
		<div class="comment_text"><p>I don't know - I mean - rerunning onAppStart is simple enough with a hook in onRequestStart. You don't need a 'real' restart truly, you just want to reload your application variables. Doing a real app restart has consequences beyond your code - like in active sessions, etc. So in general, I don't think you really need that kind of power, although, I know I've asked for it myself in the past, so maybe I'm being difficult. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678389">29</a> by David McGuigan
		posted on 3/26/2008 at 1:23 AM
		</div>
		<div class="comment_text"><p>I have to agree with / be as difficult as Ray here.</p><p>As far as a sitewide maintenance mode, Adobe HAS __kind_of__ provided this for us (I don't know what that underscore syntax means, I've just seen Ray use it before so thought I'd give it a shot).</p><p>The onRequestStart method. All we have to do is flip the switch and decide what to show instead.</p><p>I wrote this the other day, it's a pretty good example of just how easy ColdFusion makes it. This code goes in the onRequestStart method (probably before anything else).</p><p>&lt;!--- Sitewide maintenance mode mechanism. Intercepts any request for site content and aborts it, serving alternate content ---&gt;</p><p>		&lt;!--- Just set sitewideMaintenanceMode to true to activate ---&gt;<br>        &lt;cfset sitewideMaintenanceMode = false /&gt;</p><p>        &lt;!--- If sitewide maintenance mode is active, serve alternate content and abort processing on every request ---&gt;<br>        &lt;cfif sitewideMaintenanceMode &gt;</p><p>            &lt;cfinclude template="/Mechanics/AlternateContent/Maintenance.cfm" /&gt;<br>            &lt;cfabort /&gt;</p><p>        &lt;/cfif&gt;</p><p>The coolest thing about it is that you can have various modes and pre-written messages and just toggle them with simple variable / content pairs. In reality you could even move the sitewideMaintenanceMode variable into a password-protected database table and trigger it from a web-based administrator.</p><p>Long story short, ColdFusion saves lives.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678392">30</a> by David McGuigan
		posted on 3/26/2008 at 1:36 AM
		</div>
		<div class="comment_text"><p>Note: In order for this to do what it should all of your application pages should be ColdFusion files. As far as I know, there's no way to let ColdFusion get at and intercept non-ColdFusion file requests (like .htm or .css files).</p><p>Although, I'm curious as to whether you could just set handlers for other file types on your Web server and have CF pre-empt them too.</p><p>I just tried setting CF script map for the .htm type in IIS 7 and it serves "The service is unavailable". I don't know that much about Web server configuration, but this is kind of an interesting concept. It'd let you protect a lot of non-CF content(like .jpg files for example)from being accessed directly through URLs.</p><p>Anyone IISperts out there that can answer this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678394">31</a> by David Buhler
		posted on 3/26/2008 at 6:47 PM
		</div>
		<div class="comment_text"><p>@Dave</p><p>I think the "Down for Maint" page is going to need CFHeaders added to let the Search Engine Spiders know that the page is down for "X time" and the redirect is temporary in nature.</p><p>This type of functionality should be built in to the App.cfc when it's first generated, I think, because:</p><p>1) it's commonly used<br>2) the details are important</p><p>I'd just argue that the Coldfusion framework is well done by Adobe, but Adobe should still support their own homegrown framework with this type of functionality built in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678395">32</a> by Derek
		posted on 8/29/2009 at 6:42 PM
		</div>
		<div class="comment_text"><p>How well does this work when the Application scope is being duplicated to be put on the request?  Looking at some old code that is doing this and I'm concerned that creating Singletons in the application scope would be a waste if they are being copied to the request.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678396">33</a> by Raymond Camden
		posted on 8/29/2009 at 6:43 PM
		</div>
		<div class="comment_text"><p>Simple - don't duplicate the App scope to the Request scope. That was done in CF5 days when the App scope had memory leak issues. It has not been needed, nor recommended, for years.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678399">34</a> by Derek
		posted on 9/27/2009 at 4:46 AM
		</div>
		<div class="comment_text"><p>Thanks.  That will be fun ripping that stuff out.  Setting complex variables is done by reference in CF, right?  So if it was doing &lt;<a href="http://disq.us/url?url=http%3A%2F%2FRequest.app%3AZspbZiwdJ0PNhoZvwZO_W4VpD8w&amp;cuid=3321886" rel="nofollow noopener" title="Request.app">Request.app</a> = Duplicate(app)&gt;, I should be able to convert that to &lt;<a href="http://disq.us/url?url=http%3A%2F%2FRequest.app%3AZspbZiwdJ0PNhoZvwZO_W4VpD8w&amp;cuid=3321886" rel="nofollow noopener" title="Request.app">Request.app</a> = app&gt; right?  Is locking still needed on the app scope?  If so, for reads and writes or just writes?  I'm on CFMX7 if that makes a difference.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678398">35</a> by Raymond Camden
		posted on 9/28/2009 at 12:25 AM
		</div>
		<div class="comment_text"><p>By ref, yes. Yep to your second question. No - you don't need to lock just because you use the app scope - you only need to lock when you are concerned about race conditions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678397">36</a> by Zdenek Picha
		posted on 10/22/2009 at 4:33 PM
		</div>
		<div class="comment_text"><p>I have found this page:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.alagad.com%2Fblog%2Fpost.cfm%2Ftroubleshooting-coldfusion-performance-analysis-part-ii%3A1OK5izGGoai6LdalA9aISqe-baE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.alagad.com/blog/post.cfm/troubleshooting-coldfusion-performance-analysis-part-ii">http://www.alagad.com/blog/...</a><br>showing memory leaks if duplicate not used.</p><p>"This simple example is just an illustration of how you can get yourself into trouble when pointing a reference to objects from a shared scope like application or server, into a local scope like request.  When we make a link from the request scope into the application scope, it maintains a reference such that the request variable would never go away until the referencing application variable gets garbage collected (which would wait for the application timeout).  By duplicating the object into the request scope instead, this ensures there is no reference to the application scope variable, which allows it to be cleaned up after the request completes."</p><p>Can we really believe these leaks are over?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678400">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678400">37</a> by Raymond Camden
		posted on 10/22/2009 at 4:54 PM
		</div>
		<div class="comment_text"><p>Than I suppose it just makes sense to _not_ use the request scope. Really it was only useful pre-MX days.</p><p>To be clear, I mean to use the Request scope as a duped copy of app.whatever.</p></div>
	</div>
</div>
		