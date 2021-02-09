
<div class="comment" id="c_2265117599">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_3EIcrS27Y0.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2265117599">1</a> by Steven Pyle
		posted on 9/21/2015 at 10:22 AM
		</div>
		<div class="comment_text"><p>Works great!  Thanks for sharing.  I ran into two gotchas that other folks new to Ionic might also get stuck on.  In order to use the Calendar-PhoneGap-Plugin, I had to run "bower install ngCordova" in my project.  ng-cordova.js wasn't part of the default Ionic Framework project by default.  Also, adding events to a calendar doesn't seem to work when using "ionic serve" to run the app in a browser.  I had to use the emulator to see it work.  I guess that makes sense since there is no calendar available when not using a device...?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2265294604">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2265294604">2</a> (In reply to <a href="#c_2265117599">#1</a>) by Raymond Camden
		posted on 9/21/2015 at 1:06 PM
		</div>
		<div class="comment_text"><p>Sorry, these are both things I just kinda assumed were obvious, but were absolutely *not* obvious and I should have called out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2362174473">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_hVfC8MXNQg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2362174473">3</a> by Diogo Rodrigues
		posted on 11/16/2015 at 11:16 AM
		</div>
		<div class="comment_text"><p>pls, pls. help me to make this run. what i need? i get the procjet <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcfjedimaster%2FCordova-Examples%2Ftree%2Fmaster%2Fcalendarionic%3AdfFwiDg16DEh4BiEiGG0rSpfmeI&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cfjedimaster/Cordova-Examples/tree/master/calendarionic">https://github.com/cfjedima...</a> and run "ionic serve". I need anything else?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2362206991">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2362206991">4</a> (In reply to <a href="#c_2362174473">#3</a>) by Raymond Camden
		posted on 11/16/2015 at 11:56 AM
		</div>
		<div class="comment_text"><p>It depends on what you mean. If you mean you want to use this on a device, then you need to set up the various mobile SDKs. This isn't on topic for this blog post, but I'd suggest picking up my Apache Cordova book (linked to from the About Me page).</p></div>
	</div>
</div>
		
<div class="comment" id="c_2371072211">
	<div>
		<img src="https://disqus.com/api/users/avatars/darlaoct.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2371072211">5</a> by Dara
		posted on 11/21/2015 at 12:45 AM
		</div>
		<div class="comment_text"><p>nice .. thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2374261197">
	<div>
		<img src="https://disqus.com/api/users/avatars/ramogram.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2374261197">6</a> (In reply to <a href="#c_2265117599">#1</a>) by Ramo
		posted on 11/23/2015 at 8:06 AM
		</div>
		<div class="comment_text"><p>Hi Steven. I had the same problem. I tried to see the calendar in my browser (Chrome). Then I understood that the calendar can be seen only on the device. I got in browser no code errors. After I installed the calendar I still don't see the it on my device. Then I read that I have to write my calander-controller in such a function:</p><p>document.addEventListener("deviceready", function () {<br>//embed Code here <br>});</p><p> Even that didn't help. Have you solved your problem? If yes, how?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2374634953">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2374634953">7</a> (In reply to <a href="#c_2374261197">#6</a>) by Raymond Camden
		posted on 11/23/2015 at 3:00 PM
		</div>
		<div class="comment_text"><p>Ramo, as you see, I replied to Steven that this was device only - sorry if you missed that comment. Also, deviceready is standard for Cordova apps. You *always* need to wait for it when doing plugin stuff.</p><p>Have you tried remote debug to see what error you get?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2375971966">
	<div>
		<img src="https://disqus.com/api/users/avatars/ramogram.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2375971966">8</a> (In reply to <a href="#c_2374634953">#7</a>) by Ramo
		posted on 11/24/2015 at 9:40 AM
		</div>
		<div class="comment_text"><p>Now I tried remote debug and got no errors. But the calendar is still not displayed. I get the following console output (see the pic):</p></div>
	</div>
</div>
		
<div class="comment" id="c_2376256341">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2376256341">9</a> (In reply to <a href="#c_2375971966">#8</a>) by Raymond Camden
		posted on 11/24/2015 at 2:08 PM
		</div>
		<div class="comment_text"><p>So what happens when you click to add the event?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2377747832">
	<div>
		<img src="https://disqus.com/api/users/avatars/ramogram.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2377747832">10</a> (In reply to <a href="#c_2376256341">#9</a>) by Ramo
		posted on 11/25/2015 at 8:21 AM
		</div>
		<div class="comment_text"><p>Thanks for your kind support. I don't get the content of the calendar. My view is empty. No representation of the calendar. I've uploaded your code separately on GitHub. Would you please tell me what could be the problem? GitHub: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Framogundogdu%2FionCalendar%3AxgXoD3bIh0GMvSXcwe_ULh8_XWo&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/ramogundogdu/ionCalendar">https://github.com/ramogund...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2378185957">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2378185957">11</a> (In reply to <a href="#c_2377747832">#10</a>) by Raymond Camden
		posted on 11/25/2015 at 3:14 PM
		</div>
		<div class="comment_text"><p>Do you see where I left the else {} block empty? You should add some debugging there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2384956749">
	<div>
		<img src="https://disqus.com/api/users/avatars/ramogram.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2384956749">12</a> (In reply to <a href="#c_2378185957">#11</a>) by Ramo
		posted on 11/30/2015 at 7:50 AM
		</div>
		<div class="comment_text"><p>Raymond, I wrote some things like this in else block: console.log("do some thing! "+result); I get nothing. The whole time empty View (see the pic). Have you ever looked the code on git: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Framogundogdu%2FionCalendar%3F%3AcyvnAhj3xzCljlz0IjvJ_BvUHqY&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/ramogundogdu/ionCalendar?">https://github.com/ramogund...</a> I have taken one on one your code. and I get no errors and nothing displayed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2385270386">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2385270386">13</a> (In reply to <a href="#c_2384956749">#12</a>) by Raymond Camden
		posted on 11/30/2015 at 2:00 PM
		</div>
		<div class="comment_text"><p>Ramo, why are you testing in the browser? I said *multiple* times this is device only. Did you not see that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2386809273">
	<div>
		<img src="https://disqus.com/api/users/avatars/marcandrlanglais.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2386809273">14</a> by Marc-André Langlais
		posted on 12/1/2015 at 10:21 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>thanks for the article, really useful.<br>Having issue with eventFind. I can create the events just fine... however, I can't seem to get eventFind to work. It works when I debug really slowly through the loops, but not when not debugging.<br>Code in .service (as opposed to .factory):</p><p>self.findEvents = function() {</p><p>         var deferred = $q.defer();<br>         var promises = [];<br>         self.selectedTeam.Dates.forEach(function(date) {<br>             date.Events.forEach(function(event){<br>               ...<br>               // assign event params here<br>               ...<br>               promises.push($cordovaCalendar.findEvent({<br>                 title: tt,<br>                 location: loc,<br>                 notes: nt,<br>                  startDate: stUTC,<br>                  endDate: enUTC<br>               }));<br>             });<br>         });</p><p>         $q.all(promises).<br>         then(function(results) {<br>             for(var i=0; i&lt;results.length; i++)="" {="" if(results[i].length="=" 1){="" self.selectedteam.stats="cat" ;="" }="" }="" deferred.resolve(self.selectedteam);="" });="" return="" deferred.promise;="" }=""&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_2386886876">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2386886876">15</a> (In reply to <a href="#c_2386809273">#14</a>) by Raymond Camden
		posted on 12/1/2015 at 11:53 AM
		</div>
		<div class="comment_text"><p>If it works when you debug, it seems to imply an async issue. Maybe share the code thats calling the service?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2388137031">
	<div>
		<img src="https://disqus.com/api/users/avatars/marcandrlanglais.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2388137031">16</a> (In reply to <a href="#c_2386886876">#15</a>) by Marc-André Langlais
		posted on 12/2/2015 at 2:23 AM
		</div>
		<div class="comment_text"><p>Calling it from a controller. The service is called huskyModel.<br>loadGameAPI uses a $http service that runs just fine right before that.</p><p>.controller('gameController', ['$http', '$cordovaCalendar','huskyModel', function($http, $cordovaCalendar, huskyModel) {<br>  var self = this;<br>  var foundDate = null;<br>  self.huskyModel = huskyModel;</p><p>  self.huskyModel.loadGameAPI();<br>  foundDate = self.huskyModel.findEvents();</p></div>
	</div>
</div>
		
<div class="comment" id="c_2388612579">
	<div>
		<img src="https://disqus.com/api/users/avatars/ramogram.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2388612579">17</a> (In reply to <a href="#c_2385270386">#13</a>) by Ramo
		posted on 12/2/2015 at 12:21 PM
		</div>
		<div class="comment_text"><p>Of course I always test on the device. The screenshot what you see above looks the same also on the device, so just empty, no calander view. I meant the screenshot as an example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2388755885">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2388755885">18</a> (In reply to <a href="#c_2388612579">#17</a>) by Raymond Camden
		posted on 12/2/2015 at 2:24 PM
		</div>
		<div class="comment_text"><p>And when you tested on device, and used CHrome Remote debug, did you see anything in console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2388756854">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2388756854">19</a> (In reply to <a href="#c_2388137031">#16</a>) by Raymond Camden
		posted on 12/2/2015 at 2:24 PM
		</div>
		<div class="comment_text"><p>It doesn't look like you are properly using the async result from your code. Your treating it as sync, not async.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2388766290">
	<div>
		<img src="https://disqus.com/api/users/avatars/marcandrlanglais.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2388766290">20</a> (In reply to <a href="#c_2388756854">#19</a>) by Marc-André Langlais
		posted on 12/2/2015 at 2:32 PM
		</div>
		<div class="comment_text"><p>Do you have a suggestion? How should I be using the result? Am I limited on how I use the result? foundDate is a bool that is binded to a UI component.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2388772590">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2388772590">21</a> (In reply to <a href="#c_2388766290">#20</a>) by Raymond Camden
		posted on 12/2/2015 at 2:36 PM
		</div>
		<div class="comment_text"><p>If you look at my code, I show you how to work with the promises returned from my service/factory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2388787489">
	<div>
		<img src="https://disqus.com/api/users/avatars/marcandrlanglais.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2388787489">22</a> (In reply to <a href="#c_2388772590">#21</a>) by Marc-André Langlais
		posted on 12/2/2015 at 2:46 PM
		</div>
		<div class="comment_text"><p>self.huskyModel.findEvents();You simply binded the resolved property status for each fakeEvent, which is exactly what I did. The function self.huskyModel.findEvents(); updates properties in the service that are binded to the UI.<br>Regardless of the returned value, the resolved values should be reflected in the properties that were updated.<br>For example.. you can assign your resolved fakeEvents collection to anything, the fakeEvents[].status should be updated after the findEvent right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2388792209">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2388792209">23</a> (In reply to <a href="#c_2388787489">#22</a>) by Raymond Camden
		posted on 12/2/2015 at 2:50 PM
		</div>
		<div class="comment_text"><p>I'm not quite sure I get what you are saying. In my code, findEvents returned an async result. You can't just do x = foo.findEvents(); because it isn't finished processing in the initial result.</p><p>If you switch your code back to my original code, and confirm it works, maybe you can then slowly re-add your mods back in so we can see where it breaks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2388802099">
	<div>
		<img src="https://disqus.com/api/users/avatars/marcandrlanglais.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2388802099">24</a> (In reply to <a href="#c_2388792209">#23</a>) by Marc-André Langlais
		posted on 12/2/2015 at 2:56 PM
		</div>
		<div class="comment_text"><p>Good idea. I will attempt it later on in the night :)<br>Thanks Raymond!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2388834783">
	<div>
		<img src="https://disqus.com/api/users/avatars/ramogram.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2388834783">25</a> (In reply to <a href="#c_2388755885">#18</a>) by Ramo
		posted on 12/2/2015 at 3:19 PM
		</div>
		<div class="comment_text"><p>I get the following outputs in the following picture:</p></div>
	</div>
</div>
		
<div class="comment" id="c_2388845055">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2388845055">26</a> (In reply to <a href="#c_2388834783">#25</a>) by Raymond Camden
		posted on 12/2/2015 at 3:24 PM
		</div>
		<div class="comment_text"><p>Hmm. No error. Not sure then why it is pure white on your screen. Sorry - but I'd have to take your code and run it here to help more, which would be a paid engagement for my time and services.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2390349169">
	<div>
		<img src="https://disqus.com/api/users/avatars/marcandrlanglais.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2390349169">27</a> (In reply to <a href="#c_2388792209">#23</a>) by Marc-André Langlais
		posted on 12/3/2015 at 9:14 AM
		</div>
		<div class="comment_text"><p>Hi Raymond... still same issue.<br>Code:<br>self.findEvents = function(){<br>    var deferred = $q.defer();</p><p>        /*<br>        Logic is:<br>        For each, see if it exists an event.<br>        */<br>        var promises = [];<br>        self.selectedTeam.Events.forEach(function(event) {<br>            console.log('try to find '+<a href="http://disq.us/url?url=http%3A%2F%2Fevent.id%3Auvn421TlEA_Jv20zpbp9WR3MCO0&amp;cuid=3321886" rel="nofollow noopener" title="event.id">event.id</a>);<br>            promises.push($cordovaCalendar.findEvent({<br>          title: "Hockey - " + event.adversary +" - " + <a href="http://disq.us/url?url=http%3A%2F%2Fevent.id%3Auvn421TlEA_Jv20zpbp9WR3MCO0&amp;cuid=3321886" rel="nofollow noopener" title="event.id">event.id</a>,<br>          location: event.arenaCity + event.arenaName,<br>          notes: "Bonne partie! -" + <a href="http://disq.us/url?url=http%3A%2F%2Fevent.id%3Auvn421TlEA_Jv20zpbp9WR3MCO0&amp;cuid=3321886" rel="nofollow noopener" title="event.id">event.id</a>,<br>          startDate: event.dateTime,<br>          endDate: addMinutes(event.dateTime, 120)<br>      }));<br>        });</p><p>        $q.all(promises).then(function(results) {<br>            console.log("in the all done");    <br>            //should be the same len as events<br>            for(var i=0;i&lt;results.length;i++) {="" <a href="http://disq.us/url?url=http%3A%2F%2Fself.selectedteam.events%3AQ30GAzjDemF22s72m3P0BL7Dbm8&amp;cuid=3321886" rel="nofollow noopener" title="self.selectedteam.events">self.selectedteam.events</a>[i].oncalendar="results[i].length" =="=" 1;="" }="" deferred.resolve(<a href="http://disq.us/url?url=http%3A%2F%2Fself.selectedteam.events%3AQ30GAzjDemF22s72m3P0BL7Dbm8&amp;cuid=3321886" rel="nofollow noopener" title="self.selectedteam.events">self.selectedteam.events</a>);="" });="" return="" deferred.promise;="" }=""&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_2390373794">
	<div>
		<img src="https://disqus.com/api/users/avatars/marcandrlanglais.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2390373794">28</a> (In reply to <a href="#c_2390349169">#27</a>) by Marc-André Langlais
		posted on 12/3/2015 at 9:45 AM
		</div>
		<div class="comment_text"><p>...and what calls it:<br>self.huskyModel.findEvents().then(function(events){<br>    console.log("events", events);<br>    self.huskyModel.selectedTeam.Events = events;<br>  });</p></div>
	</div>
</div>
		
<div class="comment" id="c_2390524279">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2390524279">29</a> (In reply to <a href="#c_2390373794">#28</a>) by Raymond Camden
		posted on 12/3/2015 at 12:21 PM
		</div>
		<div class="comment_text"><p>If you use *exactly* my code, does it work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2391143052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2391143052">30</a> (In reply to <a href="#c_2388834783">#25</a>) by Felipe Zap de Mello
		posted on 12/3/2015 at 6:32 PM
		</div>
		<div class="comment_text"><p>Hi my friend , I had the same issue ,</p><p>in the controller, try to change the event deviceready from $ionicPlatform for this:</p><p>$window.document.addEventListener('deviceready', function(){});</p><p>more information here: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2FEddyVerbruggen%2FCalendar-PhoneGap-Plugin%2Fissues%2F95%3AeYdchfVsbR2CseMgZ6myk_4hHJw&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/EddyVerbruggen/Calendar-PhoneGap-Plugin/issues/95">https://github.com/EddyVerb...</a></p><p>Hope this helps!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2391180962">
	<div>
		<img src="https://disqus.com/api/users/avatars/felipezapdemello.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2391180962">31</a> by Felipe Zap de Mello
		posted on 12/3/2015 at 6:41 PM
		</div>
		<div class="comment_text"><p>For those who had the issue 'window.plugins is undefined'<br>In controller, try to change the event deviceready from $ionicPlatform for this:</p><p>$window.document.addEventListener('deviceready', function(){});</p><p>Don't forget to inject the variable $window</p><p>more information here: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2FEddyVerbruggen%2FCalendar-PhoneGap-Plugin%2Fissues%2F95%3AeYdchfVsbR2CseMgZ6myk_4hHJw&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/EddyVerbruggen/Calendar-PhoneGap-Plugin/issues/95">https://github.com/EddyVerb...</a><br>Hope this helps!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2391691884">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2391691884">32</a> (In reply to <a href="#c_2391180962">#31</a>) by Raymond Camden
		posted on 12/3/2015 at 8:47 PM
		</div>
		<div class="comment_text"><p>That shouldn't help though. Ionic's ready event wraps deviceready.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2514595320">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_zngqRDOnro.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2514595320">33</a> by salomon
		posted on 2/15/2016 at 1:58 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, maybe you or somebody else here can help me with my question/problem. Creating calendars, adding events etc. works fine but how can I fetch the data from the calendar and show it in my app?</p><p>For example, this is the line for listing all calendars:</p><p>listCalendars(onSuccess, onError)</p><p>When I call this function, the App opens a pop-up-window which shows the calendars with their attributes.</p><p>I wanna display the calendars in a p-element instead of the pop-up and tried it with the following lines:</p><p>var x = listCalendars(onSuccess, onError).toString();</p><p>$( "#test" ).append(x);</p><p>It doesn't work and the app opens the same pop-up-window. Maybe you have some ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2514598924">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2514598924">34</a> (In reply to <a href="#c_2514595320">#33</a>) by Raymond Camden
		posted on 2/15/2016 at 2:00 PM
		</div>
		<div class="comment_text"><p>The logic to handle (do X when done) should be in your onSuccess method. You may not understand how async operations work. Basically, listCalendars will run onSuccess when done, or onError, so your code to handle the result must be in onSuccess.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2514701289">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_zngqRDOnro.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2514701289">35</a> (In reply to <a href="#c_2514598924">#34</a>) by salomon
		posted on 2/15/2016 at 3:13 PM
		</div>
		<div class="comment_text"><p>Thank you! This helps me a lot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2607358773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2607358773">36</a> by Mohamed
		posted on 4/5/2016 at 2:59 PM
		</div>
		<div class="comment_text"><p>hello can i sent the event to the server via http at the same time of adding to my calender ???</p></div>
	</div>
</div>
		
<div class="comment" id="c_2607362151">
	<div>
		<img src="https://disqus.com/api/users/avatars/messaoud_mohamed.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2607362151">37</a> by Messaoud Mohamed
		posted on 4/5/2016 at 3:01 PM
		</div>
		<div class="comment_text"><p>hello can i sent the event to the server via http at the same time of adding to my calender ???</p></div>
	</div>
</div>
		
<div class="comment" id="c_2607364783">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2607364783">38</a> (In reply to <a href="#c_2607362151">#37</a>) by Raymond Camden
		posted on 4/5/2016 at 3:03 PM
		</div>
		<div class="comment_text"><p>Yes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2607383010">
	<div>
		<img src="https://disqus.com/api/users/avatars/messaoud_mohamed.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2607383010">39</a> (In reply to <a href="#c_2607364783">#38</a>) by Messaoud Mohamed
		posted on 4/5/2016 at 3:14 PM
		</div>
		<div class="comment_text"><p>and how ???</p></div>
	</div>
</div>
		
<div class="comment" id="c_2607384531">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2607384531">40</a> (In reply to <a href="#c_2607383010">#39</a>) by Raymond Camden
		posted on 4/5/2016 at 3:15 PM
		</div>
		<div class="comment_text"><p>You would do it just like you do any other HTTP call in JavaScript, via an Ajax call using XHR. Do you know how to do that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2607432055">
	<div>
		<img src="https://disqus.com/api/users/avatars/messaoud_mohamed.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2607432055">41</a> (In reply to <a href="#c_2607384531">#40</a>) by Messaoud Mohamed
		posted on 4/5/2016 at 3:43 PM
		</div>
		<div class="comment_text"><p>actually no</p></div>
	</div>
</div>
		
<div class="comment" id="c_2607437818">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2607437818">42</a> (In reply to <a href="#c_2607432055">#41</a>) by Raymond Camden
		posted on 4/5/2016 at 3:46 PM
		</div>
		<div class="comment_text"><p>Working with Ajax is a very important part of client-side JavaScript development. I'm pretty surprised you are working with hybrid mobile apps before you've learned that. I'd start off by doing some basic research - ie - Googling for it. As XHR is pretty old, you will find plenty of help. Actually, start here: <a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.mozilla.org%2Fen-US%2Fdocs%2FAJAX%3Ao9EwIIL8IrIx9LuSDgtERBX54eg&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.mozilla.org/en-US/docs/AJAX">https://developer.mozilla.o...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2607448773">
	<div>
		<img src="https://disqus.com/api/users/avatars/messaoud_mohamed.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2607448773">43</a> (In reply to <a href="#c_2607437818">#42</a>) by Messaoud Mohamed
		posted on 4/5/2016 at 3:53 PM
		</div>
		<div class="comment_text"><p>Thankyou very much but i'm just try to learn by building some application <br>when i buil my application i get this erreur  can u help please ??</p><p>* What went wrong:</p><p>A problem occurred configuring root project 'android'.</p><p>&gt; Could not resolve all dependencies for configuration ':_armv7DebugCompile'.</p><p>   &gt; Could not find any version that matches <a href="http://disq.us/url?url=http%3A%2F%2Fcom.android.support%3AqeRgsluGDUOaoZzus8obwdVGQKs&amp;cuid=3321886" rel="nofollow noopener" title="com.android.support">com.android.support</a>:support-v4:+.</p><p>     Searched in the following locations:</p><p>         <a href="https://disq.us/url?url=https%3A%2F%2Frepo1.maven.org%2Fmaven2%2Fcom%2Fandroid%2Fsupport%2Fsupport-v4%2Fmaven-metadata.xml%3ABJNL4ha0_1CsH8HolXR0KIntxvY&amp;cuid=3321886" rel="nofollow noopener" title="https://repo1.maven.org/maven2/com/android/support/support-v4/maven-metadata.xml">https://repo1.maven.org/mav...</a></p><p>         <a href="https://disq.us/url?url=https%3A%2F%2Frepo1.maven.org%2Fmaven2%2Fcom%2Fandroid%2Fsupport%2Fsupport-v4%2F%3AB_jktI0wdD1ni4AQFweRybJRhEk&amp;cuid=3321886" rel="nofollow noopener" title="https://repo1.maven.org/maven2/com/android/support/support-v4/">https://repo1.maven.org/mav...</a></p><p>         <a href="https://disq.us/url?url=https%3A%2F%2Fdownload.01.org%2Fcrosswalk%2Freleases%2Fcrosswalk%2Fandroid%2Fmaven2%2Fcom%2Fandroid%2Fsupport%2Fsupport-v4%2Fmaven-metad%3AijZAXNoZJuVN6iI1SqEfhJjSzME&amp;cuid=3321886" rel="nofollow noopener" title="https://download.01.org/crosswalk/releases/crosswalk/android/maven2/com/android/support/support-v4/maven-metad">https://download.01.org/cro...</a></p><p>         <a href="https://disq.us/url?url=https%3A%2F%2Fdownload.01.org%2Fcrosswalk%2Freleases%2Fcrosswalk%2Fandroid%2Fmaven2%2Fcom%2Fandroid%2Fsupport%2Fsupport-v4%2F%3A4T5FX6ZsAj45RFh671v2fbtKu0A&amp;cuid=3321886" rel="nofollow noopener" title="https://download.01.org/crosswalk/releases/crosswalk/android/maven2/com/android/support/support-v4/">https://download.01.org/cro...</a></p><p>         file:/C:/Program Files (x86)/Android/android-sdk/extras/google/m2repository/com/android/support/support-v4/mav</p><p>         file:/C:/Program Files (x86)/Android/android-sdk/extras/google/m2repository/com/android/support/support-v4/</p><p>     Required by:</p><p>         :android:unspecified</p><p>* Try:</p><p>Run with --stacktrace option to get the stack trace. Run with --info or --debug option to get more log output.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2607457218">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2607457218">44</a> (In reply to <a href="#c_2607448773">#43</a>) by Raymond Camden
		posted on 4/5/2016 at 3:54 PM
		</div>
		<div class="comment_text"><p>Ensure your Cordova/Ionic CLIs are fully up to date. Then - try a virgin Cordova project w/o any of my code, and ensure you can add the Android project and build for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2609066000">
	<div>
		<img src="https://disqus.com/api/users/avatars/tcmcdonalds.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609066000">45</a> by TC Mc Donalds
		posted on 4/6/2016 at 11:10 AM
		</div>
		<div class="comment_text"><p>@Raymond Camden<br>After installing the cordova-calendar-plugin, I not able to build the project.Please have a look at stacktrace.</p><p> error: cannot find symbol<br>      if (PackageManager.PERMISSION_GRANTED != ContextCompat.checkSelfPermission(this.cordova.getActivity(), type)) {<br>                                                            ^<br>  symbol:   method checkSelfPermission(Activity,String)<br>  location: class ContextCompat<br>/home/tushar/Documents/Sites/DailyGig_App/DailyGig_app/platforms/android/src/nl/xservices/plugins/<a href="http://disq.us/url?url=http%3A%2F%2FCalendar.java%3AGxawN1EMqo44WTfuCW6qoPe7DI8&amp;cuid=3321886" rel="nofollow noopener" title="Calendar.java">Calendar.java</a>:157: error: cannot find symbol<br>      ActivityCompat.requestPermissions(<br>                    ^<br>  symbol:   method requestPermissions(Activity,String[],int)<br>  location: class ActivityCompat</p><p></p></div>
	</div>
</div>
		
<div class="comment" id="c_2609097420">
	<div>
		<img src="https://disqus.com/api/users/avatars/messaoud_mohamed.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609097420">46</a> (In reply to <a href="#c_2607457218">#44</a>) by Messaoud Mohamed
		posted on 4/6/2016 at 11:41 AM
		</div>
		<div class="comment_text"><p>i do everythink i can build but when i run it it dosn't work in the device pleace how can i fix it and in the browser i have this proble :</p><p>ionic.bundle.js:19890 TypeError: Cannot read property 'calendar' of undefined</p><p>    at Object.findEvent</p></div>
	</div>
</div>
		
<div class="comment" id="c_2609194801">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609194801">47</a> (In reply to <a href="#c_2609066000">#45</a>) by Raymond Camden
		posted on 4/6/2016 at 12:57 PM
		</div>
		<div class="comment_text"><p>You will need to file a bug report with the plugin unfortunately.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2609197020">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609197020">48</a> (In reply to <a href="#c_2609097420">#46</a>) by Raymond Camden
		posted on 4/6/2016 at 12:58 PM
		</div>
		<div class="comment_text"><p>Sounds like you may have forgotten to install the plugin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2609214437">
	<div>
		<img src="https://disqus.com/api/users/avatars/messaoud_mohamed.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609214437">49</a> (In reply to <a href="#c_2609197020">#48</a>) by Messaoud Mohamed
		posted on 4/6/2016 at 1:10 PM
		</div>
		<div class="comment_text"><p>cordova plugin add cordova-plugin-calendar i install it</p></div>
	</div>
</div>
		
<div class="comment" id="c_2609221907">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609221907">50</a> (In reply to <a href="#c_2609214437">#49</a>) by Raymond Camden
		posted on 4/6/2016 at 1:16 PM
		</div>
		<div class="comment_text"><p>When you use Chrome remote debug, do you see an error in the console there?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2609247829">
	<div>
		<img src="https://disqus.com/api/users/avatars/messaoud_mohamed.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609247829">51</a> (In reply to <a href="#c_2609221907">#50</a>) by Messaoud Mohamed
		posted on 4/6/2016 at 1:31 PM
		</div>
		<div class="comment_text"><p>it work with this plugin</p><p>$ cordova plugin add <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2FEddyVerbruggen%2FCalendar-PhoneGap-Plugin.git%3AJRtcVQycOu81XAx25HjwTrcxw6s&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/EddyVerbruggen/Calendar-PhoneGap-Plugin.git">https://github.com/EddyVerb...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2609253612">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609253612">52</a> (In reply to <a href="#c_2609247829">#51</a>) by Raymond Camden
		posted on 4/6/2016 at 1:35 PM
		</div>
		<div class="comment_text"><p>Ok, then I'd consider pinging him and telling him the issue you had.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2609264997">
	<div>
		<img src="https://disqus.com/api/users/avatars/messaoud_mohamed.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609264997">53</a> (In reply to <a href="#c_2609253612">#52</a>) by Messaoud Mohamed
		posted on 4/6/2016 at 1:43 PM
		</div>
		<div class="comment_text"><p>thank u very much but i still have a little problem that when i pass one event it work but i put it all it come blank</p></div>
	</div>
</div>
		
<div class="comment" id="c_2609267820">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609267820">54</a> (In reply to <a href="#c_2609264997">#53</a>) by Raymond Camden
		posted on 4/6/2016 at 1:45 PM
		</div>
		<div class="comment_text"><p>I'm having difficulty understanding your English. "but i put it all it come blank" - can you rephrase that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2609277554">
	<div>
		<img src="https://disqus.com/api/users/avatars/messaoud_mohamed.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609277554">55</a> (In reply to <a href="#c_2609267820">#54</a>) by Messaoud Mohamed
		posted on 4/6/2016 at 1:51 PM
		</div>
		<div class="comment_text"><p>var fakeEvents = [];<br>fakeEvents.push(<br>{<br>"title":"hello",<br>"description":"We'll talk about astic, not Ionic.",<br>"date":incrementDate(new Date(), 5)<br>}   <br>); like this it work</p></div>
	</div>
</div>
		
<div class="comment" id="c_2609279024">
	<div>
		<img src="https://disqus.com/api/users/avatars/messaoud_mohamed.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609279024">56</a> (In reply to <a href="#c_2609277554">#55</a>) by Messaoud Mohamed
		posted on 4/6/2016 at 1:52 PM
		</div>
		<div class="comment_text"><p>fakeEvents.push(<br>        {<br>            "title":"hello",<br>            "description":"We'll talk about astic, not Ionic.",<br>            "date":incrementDate(new Date(), 5)<br>        } <br>    );<br>        fakeEvents.push(<br>        {<br>            "title":"Ray's Birthday Bash",<br>            "description":"Celebrate the awesomeness of Ray",<br>            "date":incrementDate(new Date(), 4)<br>        } <br>    );<br>but over 2 events it dosn't work ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2609282065">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609282065">57</a> (In reply to <a href="#c_2609279024">#56</a>) by Raymond Camden
		posted on 4/6/2016 at 1:54 PM
		</div>
		<div class="comment_text"><p>Do see you see anything in the Chrome remote console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2609303238">
	<div>
		<img src="https://disqus.com/api/users/avatars/messaoud_mohamed.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609303238">58</a> (In reply to <a href="#c_2609282065">#57</a>) by Messaoud Mohamed
		posted on 4/6/2016 at 2:07 PM
		</div>
		<div class="comment_text"><p>this all i have</p></div>
	</div>
</div>
		
<div class="comment" id="c_2609306052">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609306052">59</a> (In reply to <a href="#c_2609303238">#58</a>) by Raymond Camden
		posted on 4/6/2016 at 2:09 PM
		</div>
		<div class="comment_text"><p>That does not match my code, which means you've modified things a bit. Can you switch back to mine to see if the issue goes away?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2609310574">
	<div>
		<img src="https://disqus.com/api/users/avatars/messaoud_mohamed.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609310574">60</a> (In reply to <a href="#c_2609306052">#59</a>) by Messaoud Mohamed
		posted on 4/6/2016 at 2:12 PM
		</div>
		<div class="comment_text"><p>i got from the github</p></div>
	</div>
</div>
		
<div class="comment" id="c_2609316303">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609316303">61</a> (In reply to <a href="#c_2609310574">#60</a>) by Raymond Camden
		posted on 4/6/2016 at 2:15 PM
		</div>
		<div class="comment_text"><p>Are you sure? The error in the picture shows, "We'll talk about astic, not Ionic". Where do you see that in the GitHub code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2609319475">
	<div>
		<img src="https://disqus.com/api/users/avatars/messaoud_mohamed.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609319475">62</a> (In reply to <a href="#c_2609316303">#61</a>) by Messaoud Mohamed
		posted on 4/6/2016 at 2:17 PM
		</div>
		<div class="comment_text"><p>yes i change it to make test</p></div>
	</div>
</div>
		
<div class="comment" id="c_2609322575">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2609322575">63</a> (In reply to <a href="#c_2609319475">#62</a>) by Raymond Camden
		posted on 4/6/2016 at 2:19 PM
		</div>
		<div class="comment_text"><p>I just asked though if you had modified the code- so can you please do as I suggest and revert your code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2610854650">
	<div>
		<img src="https://disqus.com/api/users/avatars/messaoud_mohamed.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2610854650">64</a> (In reply to <a href="#c_2609322575">#63</a>) by Messaoud Mohamed
		posted on 4/7/2016 at 10:21 AM
		</div>
		<div class="comment_text"><p>Please the last quetion how can i use this event from data base to chage with the fake please thank you for your help</p><p>var eve = this;   <br>$http.get('http://localhost:2480/query/Insta/sql/SELECT * FROM Event', {<br>headers: { 'Authorization': 'Basic ' + base64('root:root') }}).success(function(response,result) {<br>                        //console.log(response.result);<br>                       <a href="http://disq.us/url?url=http%3A%2F%2Feve.data%3A6mmvF2sBKD2zcmzGegpj3EQVobg&amp;cuid=3321886" rel="nofollow noopener" title="eve.data">eve.data</a> = response.result;});<br>                       console.log(eve);</p></div>
	</div>
</div>
		
<div class="comment" id="c_2610935137">
	<div>
		<img src="https://disqus.com/api/users/avatars/messaoud_mohamed.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2610935137">65</a> (In reply to <a href="#c_2610854650">#64</a>) by Messaoud Mohamed
		posted on 4/7/2016 at 11:49 AM
		</div>
		<div class="comment_text"><p>Please i really need it</p></div>
	</div>
</div>
		
<div class="comment" id="c_2611055327">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2611055327">66</a> (In reply to <a href="#c_2610854650">#64</a>) by Raymond Camden
		posted on 4/7/2016 at 1:20 PM
		</div>
		<div class="comment_text"><p>Well first off, if you http to localhost, that's the device itself. You need to http to where your server is. If you are testing on your computer itself, it will work, but not when you test on a device of course.</p><p>Outside of that, you need to give me a more specific question. You showed code - you didn't say what worked and what didn't.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2619345357">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_v6OTLpGbyd.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2619345357">67</a> by Gianfra
		posted on 4/12/2016 at 8:51 AM
		</div>
		<div class="comment_text"><p>Hi,<br>Is it possible to add it and see it in the system default calendar ? like this I can get the notification of it</p></div>
	</div>
</div>
		
<div class="comment" id="c_2619464650">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2619464650">68</a> (In reply to <a href="#c_2619345357">#67</a>) by Raymond Camden
		posted on 4/12/2016 at 11:17 AM
		</div>
		<div class="comment_text"><p>Err, that's what this plugin does. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2619544746">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_v6OTLpGbyd.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2619544746">69</a> (In reply to <a href="#c_2619464650">#68</a>) by Gianfra
		posted on 4/12/2016 at 12:29 PM
		</div>
		<div class="comment_text"><p>With the method createEvent i don't see the created event in my calendar and i don't get the notification of it :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2622064661">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2622064661">70</a> (In reply to <a href="#c_2619544746">#69</a>) by Raymond Camden
		posted on 4/13/2016 at 7:25 PM
		</div>
		<div class="comment_text"><p>Check the console (with Chrome or Safari Remote Debug) and see if you get an error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2623004926">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_v6OTLpGbyd.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2623004926">71</a> (In reply to <a href="#c_2622064661">#70</a>) by Gianfra
		posted on 4/14/2016 at 9:41 AM
		</div>
		<div class="comment_text"><p>There was no error, it creates the event but it does not create the notification. I had to use createEventInteractively and create the event on the calendar</p></div>
	</div>
</div>
		
<div class="comment" id="c_2623226269">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2623226269">72</a> (In reply to <a href="#c_2623004926">#71</a>) by Raymond Camden
		posted on 4/14/2016 at 1:08 PM
		</div>
		<div class="comment_text"><p>Ah. If createEvent is *supposed* to support this and it does not, then I'd file a bug report with the plugin author.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2627977219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2627977219">73</a> (In reply to <a href="#c_2388792209">#23</a>) by Eniyan
		posted on 4/17/2016 at 10:11 AM
		</div>
		<div class="comment_text"><p>hellow sir how can i use this code in ionic framework</p></div>
	</div>
</div>
		
<div class="comment" id="c_2629602472">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2629602472">74</a> (In reply to <a href="#c_2627977219">#73</a>) by Raymond Camden
		posted on 4/18/2016 at 11:53 AM
		</div>
		<div class="comment_text"><p>Um... you know this entire article concerns the Ionic framework, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2657230187">
	<div>
		<img src="https://disqus.com/api/users/avatars/oneloud.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2657230187">75</a> by OneLoud .
		posted on 5/4/2016 at 6:18 AM
		</div>
		<div class="comment_text"><p>Hi Raymond. I am curious to know if i can call my data from localstorage to your calendar that will be added automatically. I am planning to create android apps which can save data and call them back to calendar as a generate result.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2657687447">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2657687447">76</a> (In reply to <a href="#c_2657230187">#75</a>) by Raymond Camden
		posted on 5/4/2016 at 1:02 PM
		</div>
		<div class="comment_text"><p>I'm not entirely sure what you are asking. Yes - you can read from LocalStorage and yes - that data could be used with the calendar plugin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2658206119">
	<div>
		<img src="https://disqus.com/api/users/avatars/oneloud.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2658206119">77</a> (In reply to <a href="#c_2657687447">#76</a>) by OneLoud .
		posted on 5/4/2016 at 5:52 PM
		</div>
		<div class="comment_text"><p>Is there a way how to do that? i am new to this stuff (calendar thing). <br>Let me provide some short story as an example of my problem.</p><p>The example story for my problem is like this: "The user fill in the form provided and then all the user input has been saved on the localstorage. Finally, when he/she go to the next scene which is the calendar part, the input that has been saved, will automatically inserted on the calendar based on the user date and time input."</p><p>For the date input, i think i make it as a string. I wonder how to make calendar detect my user input data which contain date(from), date(to), time(from), time(to). Please help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2658351514">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2658351514">78</a> (In reply to <a href="#c_2658206119">#77</a>) by Raymond Camden
		posted on 5/4/2016 at 7:09 PM
		</div>
		<div class="comment_text"><p>Well first off - do you know how to write and read from LocalStorage?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2658379196">
	<div>
		<img src="https://disqus.com/api/users/avatars/oneloud.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2658379196">79</a> (In reply to <a href="#c_2658351514">#78</a>) by OneLoud .
		posted on 5/4/2016 at 7:24 PM
		</div>
		<div class="comment_text"><p>well i do know setItem and getItem for my form. However when it comes to calendar, i got stuck completely. I have 2 main problem, first i'm not sure how to take my user input from localstorage to calendar code. second i have date and time input, and both are string. i wonder how to set the time and date on the calendar based on my input.<br>To be honest, i never done this before. i do search over an internet but i haven't found any tutorial for addEvent from external input.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2658464639">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2658464639">80</a> (In reply to <a href="#c_2658379196">#79</a>) by Raymond Camden
		posted on 5/4/2016 at 8:09 PM
		</div>
		<div class="comment_text"><p>"first i'm not sure how to take my user input from localstorage to calendar code."</p><p>Well you know how to read from LocalStorage.  As for passing it to the calendar code, you know how to do that too - I showed you in the blog post:</p><p>$cordovaCalendar.createEvent({<br>        title: event.title,<br>        notes: event.description,<br>        startDate: <a href="http://disq.us/url?url=http%3A%2F%2Fevent.date%3Au-gLwtzVpLg9I__u9GU4QM9SH14&amp;cuid=3321886" rel="nofollow noopener" title="event.date">event.date</a>,<br>        endDate:event.enddate</p><p>The values event.tite, event.etc, would be replaced with the values from localestorage.</p><p>"second i have date and time input, and both are string."</p><p>Try passing them as is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2658525228">
	<div>
		<img src="https://disqus.com/api/users/avatars/oneloud.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2658525228">81</a> (In reply to <a href="#c_2658464639">#80</a>) by OneLoud .
		posted on 5/4/2016 at 8:43 PM
		</div>
		<div class="comment_text"><p>i see. i will work it out. Is it going to work by passing the string date?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2658561835">
	<div>
		<img src="https://disqus.com/api/users/avatars/matiasaurbano.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2658561835">82</a> (In reply to <a href="#c_2609194801">#47</a>) by Matias A. Urbano
		posted on 5/4/2016 at 9:02 PM
		</div>
		<div class="comment_text"><p>I have the same problem here. any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2658564380">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2658564380">83</a> (In reply to <a href="#c_2658525228">#81</a>) by Raymond Camden
		posted on 5/4/2016 at 9:04 PM
		</div>
		<div class="comment_text"><p>Try it and see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2658576246">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2658576246">84</a> (In reply to <a href="#c_2658561835">#82</a>) by Raymond Camden
		posted on 5/4/2016 at 9:11 PM
		</div>
		<div class="comment_text"><p>Um, what I said above?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2659503191">
	<div>
		<img src="https://disqus.com/api/users/avatars/oneloud.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2659503191">85</a> (In reply to <a href="#c_2658564380">#83</a>) by OneLoud .
		posted on 5/5/2016 at 8:00 AM
		</div>
		<div class="comment_text"><p>It worked. Never min. i have one last question. for date is new Date() and end Date() right. What about time and day? i want to specify it such as "from 5/5/2016 to 5/31/2016 EVERY Monday". Also from time this to time that. is there a command for this? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2659864148">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2659864148">86</a> (In reply to <a href="#c_2659503191">#85</a>) by Raymond Camden
		posted on 5/5/2016 at 1:40 PM
		</div>
		<div class="comment_text"><p>I honestly don't remember - can you check the docs for the plugin?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2659888889">
	<div>
		<img src="https://disqus.com/api/users/avatars/oneloud.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2659888889">87</a> (In reply to <a href="#c_2659864148">#86</a>) by OneLoud .
		posted on 5/5/2016 at 1:55 PM
		</div>
		<div class="comment_text"><p>I did. But so far mostly it mention about date and time format that is relevant with my search.. well i will try look for it again..thanks anyway</p></div>
	</div>
</div>
		
<div class="comment" id="c_2784234147">
	<div>
		<img src="https://disqus.com/api/users/avatars/TheBrockEllis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2784234147">88</a> by Brock Ellis
		posted on 7/15/2016 at 4:36 AM
		</div>
		<div class="comment_text"><p>Hey there, Raymond!</p><p>This blog post is one of the top resources when searching for Ionic 2 Calendar help, so I wanted to throw this question out there to hear your thoughts.</p><p>According to the Calendar plugin author, the plugin isn't threadsafe and its recommended not to call plugin events in a loop. (<a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2FEddyVerbruggen%2FCalendar-PhoneGap-Plugin%2Fissues%2F239%29%3Aspb5m-DX3hLjmLmYHorFhYlOqKI&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/EddyVerbruggen/Calendar-PhoneGap-Plugin/issues/239)">https://github.com/EddyVerb...</a>. The suggested method is to call a function recursively from within the .then() of the promise that's returned, which kind of sucks since it gets rid of the advantages of the async-ness-itude on the promises.</p><p>I've borrowed (almost verbatim...thanks!) your sample code here and it's working great with Ionic 2 on iOS but it dies on Android.</p><p>When inspecting the app running on a device, it looks like only a handful of the promises are being resolved and the Promise.all() is never being called.</p><p>Just wanted to know if you've heard of anything like this happening or if you would have any advice.</p><p>Thanks again for your time!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2784747086">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2784747086">89</a> (In reply to <a href="#c_2784234147">#88</a>) by Raymond Camden
		posted on 7/15/2016 at 1:33 PM
		</div>
		<div class="comment_text"><p>First off - I had no idea about the threadsafe issue - thank you for letting me know. I'll put it in my queue to update this entry (or probably write a new one and link to it) so folks don't use this version.</p><p>If you remote debug w/ Chrome, do you see any exceptions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2784786950">
	<div>
		<img src="https://disqus.com/api/users/avatars/TheBrockEllis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2784786950">90</a> (In reply to <a href="#c_2784747086">#89</a>) by Brock Ellis
		posted on 7/15/2016 at 1:59 PM
		</div>
		<div class="comment_text"><p>I don't see any error in the remote debug session in chrome. Here's the setup I have in my code:</p><p></p><pre><code><br>    events.forEach(function(ev) {<br>      // do some work up here manipulating start and end date<br>      //title, location, notes, start, end<br>      var x = Calendar.findEvent(ev.Title, null, null, startDate, endDate);<br>      x.then( result =&gt; {<br>        console.log("Success!", result);<br>      }, fail =&gt; {<br>        console.log("Failed!", fail);<br>      });<br><br>      promises.push(x);<br>    }<br><br>    console.log("Promises array");<br>    console.log(promises);<br></code></pre><p></p><p>And here is the output I get from the device in the remote console:</p><p></p><pre><code><br>&gt; Promises array<br>&gt; app.bundle.js:810 [ZoneAwarePromise, ZoneAwarePromise, ZoneAwarePromise, ZoneAwarePromise, ZoneAwarePromise, ZoneAwarePromise, ZoneAwarePromise, ZoneAwarePromise, ZoneAwarePromise, ZoneAwarePromise, ZoneAwarePromise, ZoneAwarePromise, ZoneAwarePromise]<br>&gt; app.bundle.js:802 Success! []<br></code></pre><p></p><p>All of the promises are returned it looks like (13 events and 13 promises in the array) but only one of those promises ever gets resolved. Then the app hangs. It worked perfectly fine when I was testing on an iOS simulator and a real device. I have some log output from running 'adb logcat' that may be relevant, but I'm not quite sure. Still my first rodeo with all of this.</p><p>Does anything look out of place? I feel like it's probably something simple I'm missing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2784803564">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2784803564">91</a> (In reply to <a href="#c_2784786950">#90</a>) by Raymond Camden
		posted on 7/15/2016 at 2:10 PM
		</div>
		<div class="comment_text"><p>So wait... if the issue is that it isn't threadsafe, then what you have isn't safe either. The code would need to do something like this:</p><p>x is an array of events to add<br>while x isnt empty:<br>   do the add<br>   on done, pop one off X and if crap to do, repeat</p><p>Does that pseudo-code change make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2784804145">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2784804145">92</a> (In reply to <a href="#c_2784803564">#91</a>) by Raymond Camden
		posted on 7/15/2016 at 2:10 PM
		</div>
		<div class="comment_text"><p>Basically the change is to pretend you don't have the easy power of Promises.all anymore. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2785063170">
	<div>
		<img src="https://disqus.com/api/users/avatars/TheBrockEllis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2785063170">93</a> (In reply to <a href="#c_2784804145">#92</a>) by Brock Ellis
		posted on 7/15/2016 at 4:36 PM
		</div>
		<div class="comment_text"><p>After a moment of silence for the fallen Promise.all(), I refactored to use a 'threadsafe' method (shamelessly stolen from <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2FEddyVerbruggen%2FCalendar-PhoneGap-Plugin%2Fissues%2F239%3A6-nTeeX1Hnfz4j06Bq5yAFr8Ld0&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/EddyVerbruggen/Calendar-PhoneGap-Plugin/issues/239">here</a>.)</p><p>Here's what my code looks like now for checking to see if an event exists:</p><p></p><pre><code><br><br>checkEventsExist(events){<br>  //this.events = events;<br>  console.log("Getting to eventsExist and here are the events:");<br>      console.dir(events);<br><br>      return new Promise( resolve =&gt; {<br>          var checkSingleEvent = function (events, i) {<br>       if (i &lt; events.length) {<br>                   let event = events[i];<br>                   let startDate = Moment.unix(event.Timestamp).toDate(); <br>          let endDate = Moment.unix(event.Timestamp).add(1, "day").toDate();<br><br>                   var findingEvent = Calendar.findEvent(event.Title.trim(), undefined, undefined, startDate, endDate);<br>        }else{<br>                   console.log("Promise being resolved", events);<br>                   resolve(events)<br><br>                  return events;<br>              }<br><br>      findingEvent.then( status =&gt; {<br>        console.log("Status of event " + i + ":" + status);     <br>                 events[i].Status = status.length === 1;<br>        checkSingleEvent(events, i+1);<br>      }, error =&gt; {<br>        console.log("Failed checking single event", error);<br>             });<br>        };<br><br>        checkSingleEvent(events, 0);<br>      });<br>    <br>  }<br><br></code></pre><p></p><p>Still a bit raw, but it seems to work on Android and iOS without too much noticeable lag. Anything obvious that I could improve on? Still a newb at this and would eat up any advice you can give.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2946892764">
	<div>
		<img src="https://disqus.com/api/users/avatars/jsantiagoao.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2946892764">94</a> by J Santiago AO
		posted on 10/12/2016 at 4:56 PM
		</div>
		<div class="comment_text"><p>hi, Raymond, i´m working this project on android platform, but when i want to see the app on my device, the app is empty.. i installed correctly the calendar plugin, what is my error?..</p></div>
	</div>
</div>
		
<div class="comment" id="c_2947456254">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2947456254">95</a> (In reply to <a href="#c_2946892764">#94</a>) by Raymond Camden
		posted on 10/12/2016 at 10:18 PM
		</div>
		<div class="comment_text"><p>When you remote debug, what do you see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2956038429">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_SgVBgI4zJX.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2956038429">96</a> by SENTHIL
		posted on 10/18/2016 at 7:17 AM
		</div>
		<div class="comment_text"><p>This code is working in iOS fine. But it doesn't work in android. what is my error??</p></div>
	</div>
</div>
		
<div class="comment" id="c_2956515668">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2956515668">97</a> (In reply to <a href="#c_2956038429">#96</a>) by Raymond Camden
		posted on 10/18/2016 at 2:24 PM
		</div>
		<div class="comment_text"><p>I don't know. :) What do you see when you remote debug w/ Chrome?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3053032574">
	<div>
		<img src="https://disqus.com/api/users/avatars/nilanjibamstech.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3053032574">98</a> by nilanjibamstech
		posted on 12/15/2016 at 6:27 AM
		</div>
		<div class="comment_text"><p>Hi Raymond: Can I pull data via web service and show the event to this calendar? Is it possible?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3053319121">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3053319121">99</a> (In reply to <a href="#c_3053032574">#98</a>) by Raymond Camden
		posted on 12/15/2016 at 12:55 PM
		</div>
		<div class="comment_text"><p>Yes. My code has a hard coded list of events - you would just replace that with a service call.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3053321747">
	<div>
		<img src="https://disqus.com/api/users/avatars/nilanjibamstech.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3053321747">100</a> (In reply to <a href="#c_3053319121">#99</a>) by nilanjibamstech
		posted on 12/15/2016 at 12:58 PM
		</div>
		<div class="comment_text"><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3086897317">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Tl5UDPQgZh.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3086897317">101</a> by William
		posted on 1/7/2017 at 12:38 AM
		</div>
		<div class="comment_text"><p>Hi every one , can some one explain to me how you can do to run it ? Because I get the GitHub code and try to run it , got an error 'window.plugins is undefined' so I try to install the plugin but didn't find how to , please help me <br>( ps: sorry for my English I'm French )</p></div>
	</div>
</div>
		
<div class="comment" id="c_3087578685">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3087578685">102</a> (In reply to <a href="#c_3086897317">#101</a>) by Raymond Camden
		posted on 1/7/2017 at 2:37 PM
		</div>
		<div class="comment_text"><p>Bonjour, you need to make a new Ionic app, then copy my code over into it. It's basically the app source w/o being a real Ionic project - that means I'm storing less files up in GitHub.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3089530416">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Tl5UDPQgZh.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3089530416">103</a> (In reply to <a href="#c_3087578685">#102</a>) by William
		posted on 1/8/2017 at 8:40 PM
		</div>
		<div class="comment_text"><p>It's exactly what I try but got an error "windows.plugin is undefined "</p></div>
	</div>
</div>
		
<div class="comment" id="c_3089539979">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3089539979">104</a> (In reply to <a href="#c_3089530416">#103</a>) by Raymond Camden
		posted on 1/8/2017 at 8:47 PM
		</div>
		<div class="comment_text"><p>Oh I missed that you said you couldn't install the plugin. You need to. What command did you use to install the plugin?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3090249151">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Tl5UDPQgZh.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3090249151">105</a> (In reply to <a href="#c_3089539979">#104</a>) by William
		posted on 1/9/2017 at 8:53 AM
		</div>
		<div class="comment_text"><p>I quite bit try eveything:</p><p>"$ cordova plugin add cordova-plugin-calendar" works ( with cordova plugin ls , the plugin is in the list ) but still error<br> "$ cordova plugin add <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2FEddyVerbruggen%2FCalendar-PhoneGap-Plugin.git%3AJRtcVQycOu81XAx25HjwTrcxw6s&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/EddyVerbruggen/Calendar-PhoneGap-Plugin.git">https://github.com/EddyVerb...</a>"<br>this do the same , and with manually instal it call me that $cordova.calendar isn't defined, and angular integer error</p></div>
	</div>
</div>
		
<div class="comment" id="c_3090696971">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3090696971">106</a> (In reply to <a href="#c_3090249151">#105</a>) by Raymond Camden
		posted on 1/9/2017 at 3:57 PM
		</div>
		<div class="comment_text"><p>So are you testing in the emulator or device?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3090700839">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Tl5UDPQgZh.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3090700839">107</a> (In reply to <a href="#c_3090696971">#106</a>) by William
		posted on 1/9/2017 at 4:00 PM
		</div>
		<div class="comment_text"><p>Yes , unfortunatly there is a blank page with the header bar</p></div>
	</div>
</div>
		
<div class="comment" id="c_3090704529">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3090704529">108</a> (In reply to <a href="#c_3090700839">#107</a>) by Raymond Camden
		posted on 1/9/2017 at 4:02 PM
		</div>
		<div class="comment_text"><p>And when you remote debug, are you seeing the same error or something different?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3103735593">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Tl5UDPQgZh.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3103735593">109</a> (In reply to <a href="#c_3090704529">#108</a>) by William
		posted on 1/17/2017 at 9:52 AM
		</div>
		<div class="comment_text"><p>Remote debug , how can you do that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3103877602">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3103877602">110</a> (In reply to <a href="#c_3103735593">#109</a>) by Raymond Camden
		posted on 1/17/2017 at 12:39 PM
		</div>
		<div class="comment_text"><p>I covered this in multiple articles (go to my About page), and you can also Google for remote debug with Cordova.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3288214337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3288214337">111</a> by bharathi
		posted on 5/4/2017 at 11:37 AM
		</div>
		<div class="comment_text"><p>hi ,<br>can some one explain to me how you can do to run it ?<br>When i am run this application it showing only heading i.e.,Ionic Calendar Demo<br>remaining i am not getting</p></div>
	</div>
</div>
		
<div class="comment" id="c_3288215418">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3288215418">112</a> (In reply to <a href="#c_3288214337">#111</a>) by Raymond Camden
		posted on 5/4/2017 at 11:38 AM
		</div>
		<div class="comment_text"><p>If you don't know how to run Ionic apps, I'd head to their site and go through their documentation. They explain how to get started.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3288225240">
	<div>
		<img src="https://disqus.com/api/users/avatars/bharathidasam.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3288225240">113</a> by Bharathi Dasam
		posted on 5/4/2017 at 11:48 AM
		</div>
		<div class="comment_text"><p>i had created new ionic application and copied your code to my application.when im running on andriod device it showing only heading.please help me</p></div>
	</div>
</div>
		
<div class="comment" id="c_3288226141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3288226141">114</a> by bharathi
		posted on 5/4/2017 at 11:49 AM
		</div>
		<div class="comment_text"><p>i had created new ionic application and copied your code to my application.when im running on andriod device it showing only heading.please help me</p></div>
	</div>
</div>
		
<div class="comment" id="c_3288814302">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3288814302">115</a> (In reply to <a href="#c_3288225240">#113</a>) by Raymond Camden
		posted on 5/4/2017 at 6:22 PM
		</div>
		<div class="comment_text"><p>What do you see when you check the console via remote debug?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3288815387">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3288815387">116</a> (In reply to <a href="#c_3288226141">#114</a>) by Raymond Camden
		posted on 5/4/2017 at 6:23 PM
		</div>
		<div class="comment_text"><p>I believe you are the same user as below, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3289824532">
	<div>
		<img src="https://disqus.com/api/users/avatars/bharathidasam.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3289824532">117</a> by Bharathi Dasam
		posted on 5/5/2017 at 11:03 AM
		</div>
		<div class="comment_text"><p>can anyone tell me how to create push notifications in cordova using visual studio 2015</p></div>
	</div>
</div>
		
<div class="comment" id="c_3289829015">
	<div>
		<img src="https://disqus.com/api/users/avatars/bharathidasam.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3289829015">118</a> (In reply to <a href="#c_3288815387">#116</a>) by Bharathi Dasam
		posted on 5/5/2017 at 11:08 AM
		</div>
		<div class="comment_text"><p>yes same user</p></div>
	</div>
</div>
		
<div class="comment" id="c_3289860151">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3289860151">119</a> (In reply to <a href="#c_3289824532">#117</a>) by Raymond Camden
		posted on 5/5/2017 at 11:41 AM
		</div>
		<div class="comment_text"><p>This comment has nothing to do with this blog post. For general questions, I'd recommend StackOverflow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3294829278">
	<div>
		<img src="https://disqus.com/api/users/avatars/juanfernandezsosa.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3294829278">120</a> (In reply to <a href="#c_3288814302">#115</a>) by Juan Fernandez Sosa
		posted on 5/8/2017 at 5:17 PM
		</div>
		<div class="comment_text"><p>be sure to add "cordova-plugin-calendar" into your project.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3353447436">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_MrvcCKE4s6.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3353447436">121</a> by terushka
		posted on 6/11/2017 at 10:44 AM
		</div>
		<div class="comment_text"><p>Are there any chances that need to be made for Ionic 2?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3354494828">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3354494828">122</a> (In reply to <a href="#c_3353447436">#121</a>) by Raymond Camden
		posted on 6/12/2017 at 2:03 AM
		</div>
		<div class="comment_text"><p>Well, the general principle would be the same, but you couldn't copy and paste as is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3474401521">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_rvEfOAxhNm.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3474401521">123</a> by That Anime Dude
		posted on 8/18/2017 at 12:41 PM
		</div>
		<div class="comment_text"><p>Great tutorial! I have been searching for one about ionic and google calendar and this is the easiest to follow so far. The only problem i have is that I am using Ionic 2 and some of the stuff has since been deprecated, so I'd really appreciate if you could give me some tips on how I could integrate it into Ionic 2.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3474725103">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3474725103">124</a> (In reply to <a href="#c_3474401521">#123</a>) by Raymond Camden
		posted on 8/18/2017 at 4:05 PM
		</div>
		<div class="comment_text"><p>In theory, you should be able to use the plugin again, and follow the *form* of my code, but not copy and paste obviously. But what I did you could do in V2 for sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3474726007">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3474726007">125</a> (In reply to <a href="#c_3474725103">#124</a>) by Raymond Camden
		posted on 8/18/2017 at 4:06 PM
		</div>
		<div class="comment_text"><p>And look at the Ionic Native wrapper: <a href="https://disq.us/url?url=https%3A%2F%2Fionicframework.com%2Fdocs%2Fnative%2Fcalendar%2F%3A8XjW24JAK8j97EXFs5Jl3bGnAUE&amp;cuid=3321886" rel="nofollow noopener" title="https://ionicframework.com/docs/native/calendar/">https://ionicframework.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3477533471">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_rvEfOAxhNm.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3477533471">126</a> (In reply to <a href="#c_3474726007">#125</a>) by That Anime Dude
		posted on 8/20/2017 at 9:29 AM
		</div>
		<div class="comment_text"><p>Thanks a lot Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3576192943">
	<div>
		<img src="https://disqus.com/api/users/avatars/tinashether.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3576192943">127</a> by Tinashe | the R
		posted on 10/20/2017 at 12:36 PM
		</div>
		<div class="comment_text"><p>Hey Ray,<br>Thanks for the share. Any thoughts on how to dynamically set the startDate and endDate dynamically using JSON - and input the values as a string? I've been struggling with this using Ionic 3x. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3577783775">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3577783775">128</a> (In reply to <a href="#c_3576192943">#127</a>) by Raymond Camden
		posted on 10/21/2017 at 1:30 PM
		</div>
		<div class="comment_text"><p>Well, in theory you would just change where your data comes from. Mine is hard coded, but you could get data from anywhere. Your server, a remote API, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3593039574">
	<div>
		<img src="https://disqus.com/api/users/avatars/kristofdelaet.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3593039574">129</a> by Kristof De Laet
		posted on 10/31/2017 at 9:36 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>First of all, thanks for the nice tutorial.</p><p>Could you just confirm one thing for me? This plugin is only for the native calendar, correct?<br>I'm making an app where I need to access events of a google calendar where users can get an overview of all the events in a specific calendar and can chance there status to attending or not attending for example.<br>So my question is, can I use this plugin to achieve this and could you give me a tip on how to? If not do you maybe know how to acces the google calendar api in an ionic app? I've been trying do to do so for a long time now and I just can't figure it out :(</p><p>Any tips would be highly appreciated,</p><p>Thx and keep up the good work!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3600414676">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3600414676">130</a> (In reply to <a href="#c_3593039574">#129</a>) by Raymond Camden
		posted on 11/4/2017 at 9:52 PM
		</div>
		<div class="comment_text"><p>Native calendar only - but doesn't the OS let you add a Google account and access the calendar? I'd check the docs - I see you can get calendar details - so maybe you can detect a Google calendar, although I'm not sure that makes sense. I mean - the user should have control over where something is stored. It looks like the plugin may be able to get them and show them so you can let the user decide, but I wouldn't force it to a Google calendar specifically.</p><p>That being said, Google *does* have APIs for everything, so if the plugin won't work for you, you can roll your own.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4379714764">
	<div>
		<img src="https://disqus.com/api/users/avatars/bradleywyrosdick.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4379714764">131</a> by Bradley Wyrosdick
		posted on 3/15/2019 at 3:43 PM
		</div>
		<div class="comment_text"><p>Is this for Native Ionic apps only or can you use this with Ionic Progressive Web Apps?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4379807783">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4379807783">132</a> (In reply to <a href="#c_4379714764">#131</a>) by Raymond Camden
		posted on 3/15/2019 at 4:45 PM
		</div>
		<div class="comment_text"><p>PWAs do not have access to their user's calendar. Now - a web app COULD access a Google Calendar and a lot of folks use Google for their calendars, so that would be a possible option. But it wouldn't be the *device* calendar.</p></div>
	</div>
</div>
		