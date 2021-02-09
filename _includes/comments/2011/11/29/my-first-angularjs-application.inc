
<div class="comment" id="c_1713736987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736987">1</a> by Elliott Sprehn
		posted on 11/30/2011 at 2:54 AM
		</div>
		<div class="comment_text"><p>Awesome!</p><p>(Also you probably shouldn't use delete as a key for an object, or as a method name. delete is a keyword in JS and some browsers won't allow you to use it like that).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736986">2</a> by Raymond Camden
		posted on 11/30/2011 at 3:05 AM
		</div>
		<div class="comment_text"><p>Good point Elliott. I didn't notice that until I put it into Android. Eclipse complained about it. I just deleted the errors though and it ran on my device.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736985">3</a> by dmitry
		posted on 12/9/2011 at 1:44 AM
		</div>
		<div class="comment_text"><p>I wonder if AngularJS has been used by any major company. There are so many javascript mvc frameworks, I'm confused which one to use. The two main ones that I hear a lot are backbone.js and JavaScript MVC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736989">4</a> by Raymond Camden
		posted on 12/9/2011 at 1:45 AM
		</div>
		<div class="comment_text"><p>Hopefully Elliott will chime in here. I'm not sure who out there is using it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736990">5</a> by Joe Hillman
		posted on 12/10/2011 at 8:47 PM
		</div>
		<div class="comment_text"><p>I convinced my company to go with Angularjs for a new project and so far so good.  There is a bit of a learning curve but I think it is worth it.  Anyway great tut!</p><p>For those interested I converted a standard JS application (Kevin's HTML5 Quiz) to Angularjs in a couple of hours.  Link: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.webappstogo.com%2Fhtml5quiz%3Ag3x9a3vyy887OMQx1MZri_rW3_U&amp;cuid=3321886" rel="nofollow noopener" title="http://www.webappstogo.com/html5quiz">http://www.webappstogo.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736992">6</a> by Raymond Camden
		posted on 12/10/2011 at 10:33 PM
		</div>
		<div class="comment_text"><p>Nice - and yes - I viewed source so I could cheat.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736993">7</a> by Joe Hillman
		posted on 12/10/2011 at 10:45 PM
		</div>
		<div class="comment_text"><p>Thanks!  I forgot to add I have the source on github -&gt; <a href="http://disq.us/url?url=http%3A%2F%2Fbit.ly%2FrCVLXO%3AA3fQPOGLo3YQ6hhj02ZZBuNZSgc&amp;cuid=3321886" rel="nofollow noopener" title="http://bit.ly/rCVLXO">http://bit.ly/rCVLXO</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736994">8</a> by Johan
		posted on 12/13/2011 at 4:16 AM
		</div>
		<div class="comment_text"><p>I've been using angular on a few projects and really like it. Apparently angular is used quite a lot internally at google.</p><p>Some pointers:</p><p>- Use ng:href in your templates for links that have bindings</p><p>- Rather than using a function to change browser location  you could just use an href with the path, for example to edit: ng:href="#/notes/edit/{{<a href="http://disq.us/url?url=http%3A%2F%2Fnote.id%3AbzX-4acJJ35DT8damm9ETndsbjQ&amp;cuid=3321886" rel="nofollow noopener" title="note.id">note.id</a>}}";</p><p>- If you do want to set location in your controller use:  $location.path('/notes/edit' + self.noteId);</p><p>- you can access the $routeParams in your controller and  use that to load a note using something like this<br>self.noteid = $routeParams.noteId as alternative to  self.params.hasOwnProperty("noteId")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736999">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736999">9</a> by Raymond Camden
		posted on 12/13/2011 at 4:19 AM
		</div>
		<div class="comment_text"><p>Thanks for the tips Johan. I've been trying to find time to build another Angular app - I just haven't had the time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736997">10</a> by Johan
		posted on 12/13/2011 at 6:43 AM
		</div>
		<div class="comment_text"><p>No worries Ray - given the diversity and amount of useful stuff you explore/publish I'll cut you a bit of slack on getting to your next angular post ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737001">11</a> by Johan
		posted on 12/13/2011 at 7:23 AM
		</div>
		<div class="comment_text"><p>@Dmitry - yes there seems to be a new JavaScript MVC framework each day. I tried a few and found the TODO MVC resource from Addy Osmani useful for comparision:<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Faddyosmani%2Ftodomvc%2Ftree%2Fmaster%2Ftodo-example%3AsR7ee9Kh00hvQ1tPHoCIt5cZMXs&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/addyosmani/todomvc/tree/master/todo-example">https://github.com/addyosma...</a></p><p>Angular was the best fit for me. The community is still small compared to backbone but core developers (they work for google) are very helpful and answer questions on the forums promptly.</p><p>For angular I'd recommend using latest release (unstable - 10.x) available here:<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fangular%2Fangular.js%2Ftags%3A6eKR-cd5NqgIsKOVVU1hf1gn4b8&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/angular/angular.js/tags">https://github.com/angular/...</a></p><p>Make sure to consult the latest docs here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fdocs-next.angularjs.org%2Fapi%3A1hlcAj5iAftPBxZ1Q79mRgB9YqE&amp;cuid=3321886" rel="nofollow noopener" title="http://docs-next.angularjs.org/api">http://docs-next.angularjs....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737000">12</a> by Raymond Camden
		posted on 12/13/2011 at 7:25 AM
		</div>
		<div class="comment_text"><p>"Angular was the best fit for me." - And isn't that the most important thing? I know for me in ColdFusion, there were multiple frameworks I tried until I found the one that made me effective.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736998">13</a> by nilay
		posted on 8/26/2012 at 8:37 PM
		</div>
		<div class="comment_text"><p>I tried to compile a angular js application into phonegap....But the angular.js directives {{ng:repeat}} does not seems to be picked up when I compile with ant debug..... But the rest of the html stuff seems to be ok...Is there any special rules that needs to be followed for compiling it with the the angular.js ? Any complete example of an android app which contains the index.html in assets/www ? Thanks for any pointer...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737002">14</a> by Raymond Camden
		posted on 8/26/2012 at 9:50 PM
		</div>
		<div class="comment_text"><p>I'd try checking DDMS and the console output. Check my post here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F5%2F10%2FSetting-up-console-debugging-for-PhoneGap-and-Android%3AsRPh9ZRNPozXgktLldsvy4u8VlM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/5/10/Setting-up-console-debugging-for-PhoneGap-and-Android">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737003">15</a> by Pete
		posted on 9/19/2012 at 11:48 AM
		</div>
		<div class="comment_text"><p>What icon set are you using in your test app Ray? For the edit and delete buttons?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737005">16</a> by Raymond Camden
		posted on 9/19/2012 at 4:04 PM
		</div>
		<div class="comment_text"><p>famfamfam Silk Icons - <a href="http://disq.us/url?url=http%3A%2F%2Fwww.famfamfam.com%2Flab%2Ficons%2Fsilk%2F%3A7NvsGQuHKaigrQ_eIG8tjKfyyyc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.famfamfam.com/lab/icons/silk/">http://www.famfamfam.com/la...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737012">17</a> by asic
		posted on 12/4/2012 at 3:31 PM
		</div>
		<div class="comment_text"><p>Thanks for that wonderfull tuto.<br>What is the licence for your code ? Mit ? LGPL ?<br>Can we use your code ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737014">18</a> by Raymond Camden
		posted on 12/4/2012 at 5:34 PM
		</div>
		<div class="comment_text"><p>In general, my code is Apache licensed, and practically, it is: Free to use, give me credit in the source, and visit the Amazon Wish List if you can.</p><p>BUT - please note this blog post is very old. I know it's just one year, but Angular has changed a lot since then. (In fact, I kinda don't like it anymore. No offense to the Angular folks, but I'm just not happy with it's current form.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737019">19</a> by Asic
		posted on 12/5/2012 at 1:25 PM
		</div>
		<div class="comment_text"><p>What bothers you in the current version of angular ?<br>Have you moved to another framework ? If so which one ?<br>Thanks again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737017">20</a> by Raymond Camden
		posted on 12/5/2012 at 10:24 PM
		</div>
		<div class="comment_text"><p>It's hard to really say. I feel like how Angular does stuff now in 1.0 is just... overly complex and weird. I accept that it is a completely "gut feel" type reaction, but when I tried Angular 1.0, I had none of the feelings I did when I tried the earlier editions.</p><p>The framework I'm most interested in now (but I've yet to build a POC in it it) is Knockout.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737020">21</a> by Pardeep
		posted on 12/6/2012 at 12:08 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I've been looking at Angular.js the last few days. Looks v intriguing. The 3 finalists were Angular, Knockout and Ember. The latter looks too complex, and I was heading into Knockout territory until I took a closer look at Angular.</p><p>I found a good resource for knockout called Knockout.js Succinctly, helped me wrap my head around it better than the website.  You can download it at:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.syncfusion.com%2Fresources%2Ftechportal%2Febooks%2Fknockoutjs%3ACBnVCAAYrwNnSmJm7PPccAIvPjw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.syncfusion.com/resources/techportal/ebooks/knockoutjs">http://www.syncfusion.com/r...</a></p><p>Are you currently still working with Knockout or Angular. If the latter, did you get to the point of using a cfc to feed the view or post data to the db?</p><p>I've also been learning Coffeescript, quite like the syntax. Have you checked that out?</p><p>Best,<br>Pardeep.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737021">22</a> by Raymond Camden
		posted on 12/6/2012 at 5:22 PM
		</div>
		<div class="comment_text"><p>"Are you currently still working with Knockout or Angular." As I said above - I'm not using Angular, I want to use Knockout, but i haven't had a chance to yet.</p><p>Coffeescript: I don't care for it. I'm no JS expert, but I find it easy enough to write that a 'meta language' on top just feels wrong. The syntax feels weird to me too. Now that being said, I can say I like TypeScript quite a bit as it feels like a "slightly extended JavaScipt".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737023">23</a> by Lou
		posted on 12/19/2012 at 12:14 AM
		</div>
		<div class="comment_text"><p>When I try to run this app, I get an error:</p><p>Unhandled exception at line 3, column 1 in http://localhost:36184/app/js/services.js</p><p>0x800a01b6 - JavaScript runtime error: Object doesn't support property or method 'service'</p><p>Have you seen this before?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737026">24</a> by Raymond Camden
		posted on 12/19/2012 at 12:16 AM
		</div>
		<div class="comment_text"><p>Sorry, I don't know. I haven't run this in a long time. Does the online demo do the same?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737024">25</a> by Lou
		posted on 12/19/2012 at 12:17 AM
		</div>
		<div class="comment_text"><p>Figures, after I posted this, I replaced the Partial files and it worked, must of been a type-o somewhere</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737025">26</a> by Lou
		posted on 12/19/2012 at 12:20 AM
		</div>
		<div class="comment_text"><p>This is a great app for your first application in AngularJS.<br>I am just learning this too, How did you figure out how to use local storage? <br>For a first app it you seem to have a pretty good handle on AngularJS. Great job!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737027">27</a> by Raymond Camden
		posted on 12/19/2012 at 12:24 AM
		</div>
		<div class="comment_text"><p>"This is a great app for your first application in AngularJS."</p><p>Thanks. However, I don't really use Angular anymore. I'm not a fan with how it evolved.</p><p>"How did you figure out how to use local storage? "<br>LocalStorage is one of the easiest, and most practical, of the HTML5 features out there. I love it. If you search my blog you will find many examples of it. And here is the MDN doc on it:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.mozilla.org%2Fen-US%2Fdocs%2FDOM%2FStorage%3Ah-TkaAwYZHMDWAC_8tfd7XgB24Q&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.mozilla.org/en-US/docs/DOM/Storage">https://developer.mozilla.o...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737028">28</a> by Pardeep
		posted on 12/19/2012 at 3:45 AM
		</div>
		<div class="comment_text"><p>What didn't you like about how Angular evolved?</p><p>I'm still trying out Angular, Knockout and Ember. Found a lesser known but quite elegant framework called serenade.js. V diff less verbose approach.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737030">29</a> by Raymond Camden
		posted on 12/19/2012 at 7:09 AM
		</div>
		<div class="comment_text"><p>It isn't a very scientific thing - just a gut feeling. It seems like it's gotten overly complex and it isn't as friendly as when I first saw it. This is in no way meant to be an attack on them. I'm sure it is still a good framework. It just doesn't feel right for me.</p><p>Knockout is the one I'm most interested in now, but I haven't had a chance to build a demo with it yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737032">30</a> by Ravi Gupta
		posted on 1/27/2013 at 3:54 PM
		</div>
		<div class="comment_text"><p>I downloaded the files of your project &amp; tried to run this application on Eclipse(helios) but it didn't work.<br>It was not showing any error also.<br>When i tried to execute this application, only I found is a BLANK PAGE.<br>Could you please help me with this??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737034">31</a> by Raymond Camden
		posted on 1/27/2013 at 7:17 PM
		</div>
		<div class="comment_text"><p>Your comment about running it in Eclipse doesn't make sense. Eclipse is your editor. You should be running it in the browser. If you get a blank page, then open your browser's dev tools to see if an error has shown up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737031">32</a> by Gomes
		posted on 1/28/2013 at 9:19 PM
		</div>
		<div class="comment_text"><p>Interested to see you are going from angular to knockout.In my case i started with knockout and endup with angularjs. knockout support only binding. AngularJS is more than that it is framework whereas knockout is api. knockout has to work with other JS framework but Angular has everthing built in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737037">33</a> by Raymond Camden
		posted on 1/30/2013 at 8:13 PM
		</div>
		<div class="comment_text"><p>Knockout may support less, but that doesn't necessarily make it better for me. :) Frameworks are - imo - a very personal thing. They either work well for you and your team or they don't. To me, Angular just isn't working for me. As I've said now multiple times, this is no reflection on the product itself, but just my personal feelings about it. :)</p><p>I did get a chance to play with Knockout finally and - I dig it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737036">34</a> by Augustin Riedinger
		posted on 2/22/2013 at 4:14 PM
		</div>
		<div class="comment_text"><p>I have been working with this project to learn angular :<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fkevinpet%2Fangular-phonecat-coffee%3Avv9GNw0T0F_Dg0tcGVeZVx7nNbA&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/kevinpet/angular-phonecat-coffee">https://github.com/kevinpet...</a></p><p>and I still haven't managed to understand quite some stuff in the code that I could not find in any other projects but yours.<br>As I read in the previous comments, this may be because the code is old and Angular evolved (and they kept the compatibility, but without documenting it).</p><p>The biggest thing I wonder about is where does the Note_ variable comes from ? I can't see anywhere in the doc written that the 'Note' service will be accessible by giving it to the NodeListCtrl by adding an underscore ... but so it seems.</p><p>Besides, I want to change mycode to a module structure, and whenever I write <br>app = angular.module('phonecat', ['phonecat.filters', '<a href="http://disq.us/url?url=http%3A%2F%2Fphonecat.services%3AsJjAkwoR2wNwnfMFPcbH6IglJkw&amp;cuid=3321886" rel="nofollow noopener" title="phonecat.services">phonecat.services</a>'])<br>I get this error :<br>Uncaught TypeError: Object #&lt;Object&gt; has no method 'module'</p><p>which I don't understand since I have seen it everywhere in any other project.</p><p>A great thanks in advance, thanks for the tutorial, it has already helped me a lot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737038">35</a> by Raymond Camden
		posted on 2/22/2013 at 9:50 PM
		</div>
		<div class="comment_text"><p>Augustin, I really can't help anymore with this. I've not used Angular in so long that I simply do not remember how my old app here works. I wouldn't try to make it work with modern Angular either. As you said, it may work for backwards compat reasons, but it would seem (imo) to be a bad idea to try to use 'old' style Angular on a new project.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737042">36</a> by Steve Gentile
		posted on 2/26/2013 at 1:21 AM
		</div>
		<div class="comment_text"><p>KnockoutJS is good but doesn't contain what you need to build any large SPA.  (You could look at Durandal) - this is where AngularJS shines - it's routing, view composition, etc... is baked right in from the start.</p><p>That said, it really depends on the type of application you are building - if it's smaller app and your just looking for the data-binding KnockoutJS is simple and easy to use.   If your building a full fledge application, you'll have to provide 3rd party routers, dynamic template html loading, etc... then I'd lean toward AngularJS.</p><p>EmberJS for me is nice - last time I checked though Ember-Data was pre-alpha - maybe when it's matured it would be a good candidate.  Also, it had some performance issues that scared me away</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737041">37</a> by Deepak MP
		posted on 3/25/2014 at 9:47 AM
		</div>
		<div class="comment_text"><p>I have a simple angulajs application and I can run it on web browser.</p><p>How can I create apk file for this aaplication so that I can install it on an android device.</p><p>Is there any changes needed in my web application for this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713737039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713737039">38</a> by Raymond Camden
		posted on 3/25/2014 at 2:49 PM
		</div>
		<div class="comment_text"><p>Please see the PhoneGap or Cordova docs for creating APKs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1927638769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1927638769">39</a> by Milan
		posted on 3/25/2015 at 5:47 PM
		</div>
		<div class="comment_text"><p>The link "Download attached file." doesn't work? Could you please provide it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1927646045">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1927646045">40</a> (In reply to <a href="#c_1927638769">#39</a>) by Raymond Camden
		posted on 3/25/2015 at 5:50 PM
		</div>
		<div class="comment_text"><p>I fixed the link, but I'd urge you away from using my code as an example. This post is almost four years old and doesn't represent a modern Angular app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1928749216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1928749216">41</a> (In reply to <a href="#c_1927646045">#40</a>) by Sello
		posted on 3/26/2015 at 7:28 AM
		</div>
		<div class="comment_text"><p>i went through you code, i am busy with angular now...yes it might be four years old but trust me..it helped me a lot.</p><p>thanks</p></div>
	</div>
</div>
		