
<div class="comment" id="c_3087384093">
	<div>
		<img src="https://disqus.com/api/users/avatars/terrycollinson1.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3087384093">1</a> by terrycollinson1
		posted on 1/7/2017 at 11:03 AM
		</div>
		<div class="comment_text"><p>I am really struggling with menus. I have a tabbed application where I want different menus on the different tab pages. Thought it would be simple. <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F41304757%2Fionic-2-multiple-menus-on-multiple-pages-not-working%3AhPt0oi6pTVv2L9uJBIjiYouNC8o&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/41304757/ionic-2-multiple-menus-on-multiple-pages-not-working">http://stackoverflow.com/qu...</a> No answers yet</p></div>
	</div>
</div>
		
<div class="comment" id="c_3087577722">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3087577722">2</a> (In reply to <a href="#c_3087384093">#1</a>) by Raymond Camden
		posted on 1/7/2017 at 2:36 PM
		</div>
		<div class="comment_text"><p>So to be clear, you have tabs, and each tab page has its own menu system?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3088782632">
	<div>
		<img src="https://disqus.com/api/users/avatars/terrycollinson1.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3088782632">3</a> (In reply to <a href="#c_3087577722">#2</a>) by terrycollinson1
		posted on 1/8/2017 at 9:07 AM
		</div>
		<div class="comment_text"><p>Hi Ray. Yes that's exactly right. I have 4 tabs excluding the home page. Each of the tabbed pages has its own menu.The code in stack overflow I have replicated on each of the pages but just changed the id's. I have had one working, one toggling another menu on another page all sorts of weird stuff.. You can see it not working here <a href="https://disq.us/url?url=https%3A%2F%2Fbou-bou-lodge.firebaseapp.com%2F%3A_zWw7rRTTc1Y_3gsVxleI7l8wXM&amp;cuid=3321886" rel="nofollow noopener" title="https://bou-bou-lodge.firebaseapp.com/">https://bou-bou-lodge.fireb...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3090715428">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3090715428">4</a> (In reply to <a href="#c_3088782632">#3</a>) by Raymond Camden
		posted on 1/9/2017 at 4:09 PM
		</div>
		<div class="comment_text"><p>Not to punt on you - but I'd suggest putting up a demo on codepen, then filing a bug report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3107962533">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_xcPqHPRhCN.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3107962533">5</a> by AlphaOne
		posted on 1/19/2017 at 3:45 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>This is just a shot in the dark, but does this mean that it is a better idea to create a menu using a page than using the MenuController as part of the main App page if you want to create a nested view as well?<br>If that's the case, how would you control the nav stack (especially when pushing to pages)? If I had to have a menu toggle button on a load of pages, would I be able to control which menu page it would link to?</p><p>Thanks for the post though, it really helped understand a few things that have been bothering me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3108494454">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3108494454">6</a> (In reply to <a href="#c_3107962533">#5</a>) by Raymond Camden
		posted on 1/19/2017 at 8:17 PM
		</div>
		<div class="comment_text"><p>"This is just a shot in the dark, but does this mean that it is a better idea to create a menu using a page than using the MenuController as part of the main App page if you want to create a nested view as well?"</p><p>I honestly have no idea what you mean. :) It sounds like you mean you can create the menu entirely via code - and if so - that's something I haven't seen yet.</p><p>As for nested view - ditto. Not sure what you mean. To me, I have a menu with X views. It isn't necessarily nested.</p><p>"If that's the case, how would you control the nav stack (especially when pushing to pages)? If I had to have a menu toggle button on a load of pages, would I be able to control which menu page it would link to?"</p><p>Sorry - but I'm not understanding this question either. Right now the menu sets the rootpage, which should reset the nav stack, which makes sense to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3109682478">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_xcPqHPRhCN.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3109682478">7</a> (In reply to <a href="#c_3108494454">#6</a>) by AlphaOne
		posted on 1/20/2017 at 2:56 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>Yes, what I meant is that if you want true customisation of a menu, it looks like it would be a better idea to custom-code the menu using NavController in a separate page. At least that's the impression I get extrapolating from your post.</p><p>When I say 'nested view' I mean for instance if one would like to create a 2-level menu item. How would you go about pushing only the Menu controller if it is contained within the main app component? I've actually been trying to do this for a few days now without any success.</p><p>Regarding the nav stack, that's exactly what I meant. By setting the rootpage every time you select a menu item, the stack is reset. This isn't very intuitive if you need to cache information that the user was inputting for instance. Certainly, if there is no need to cache data across pages then this is the best option, but a problem arises if you have gone down the 'page' route of making a menu from scratch; how would one then ensure that the menutoggle would open the correct menu level?</p><p>Sorry if I was a bit vague and muddled, I was just putting my thoughts down to see if you had an idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3114925088">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3114925088">8</a> (In reply to <a href="#c_3109682478">#7</a>) by Raymond Camden
		posted on 1/23/2017 at 4:13 PM
		</div>
		<div class="comment_text"><p>You got me on all this. :) To the first part of your question - I'm still having issues wrapping my head around it. I hate to punt, but I'd say this would be good for the Ionic forums.</p><p>To your second one - well I'd say you can cache the data in the component. It shouldn't go away just because I leave the page and go to some othe rpage.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3214560274">
	<div>
		<img src="https://disqus.com/api/users/avatars/sudhirgovekar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3214560274">9</a> by Sudhir Govekar
		posted on 3/21/2017 at 4:50 AM
		</div>
		<div class="comment_text"><p>hi ,</p><p>i have created an ionic2 application which is having an sidemenu which has 3 options <br>1. login <br>2. register<br>3. add post [Q&amp;A]</p><p>which are in app.html</p><p>for every option i have created one folder along with .ts, .css and .html file</p><p>login is done successfully but i am facing issue ..that how to hide the login and register options after successfully login</p><p>i have created one provider which will have access to my mongoose api which will check for isLogedin() [which will return TRUE or FALSE]</p><p>based on this condition i need to hide .. as soon as i login ....</p><p> i am new to ionic and i badly stuck ...so please <br>can anyone help me out on this please</p><p>thank you...</p></div>
	</div>
</div>
		
<div class="comment" id="c_3216435611">
	<div>
		<img src="https://disqus.com/api/users/avatars/manzarrizvi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3216435611">10</a> (In reply to <a href="#c_3214560274">#9</a>) by manzar rizvi
		posted on 3/22/2017 at 5:45 AM
		</div>
		<div class="comment_text"><p>i am also facing the same issue i hide my menu after login but the problem is "the application doesnot change it without the application load 2nd ime" can you please help me to solve this issue</p></div>
	</div>
</div>
		
<div class="comment" id="c_3223689700">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3223689700">11</a> (In reply to <a href="#c_3216435611">#10</a>) by Raymond Camden
		posted on 3/26/2017 at 12:37 AM
		</div>
		<div class="comment_text"><p>What about using *ngIf to show/hide the items?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3233117959">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_dKWFKN9yVV.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3233117959">12</a> by raghul
		posted on 3/31/2017 at 12:18 PM
		</div>
		<div class="comment_text"><p>in iphone is not working</p></div>
	</div>
</div>
		
<div class="comment" id="c_3233192087">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3233192087">13</a> (In reply to <a href="#c_3233117959">#12</a>) by Raymond Camden
		posted on 3/31/2017 at 1:19 PM
		</div>
		<div class="comment_text"><p>Ok, but how? Do you see an error in console? What doesn't work exactly?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3241155531">
	<div>
		<img src="https://disqus.com/api/users/avatars/fredbaine.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3241155531">14</a> by Fred Baine
		posted on 4/5/2017 at 3:22 PM
		</div>
		<div class="comment_text"><p>So how would you (could you) programatically navigate from the dog page to the cat page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3241203441">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3241203441">15</a> (In reply to <a href="#c_3241155531">#14</a>) by Raymond Camden
		posted on 4/5/2017 at 3:46 PM
		</div>
		<div class="comment_text"><p>Using the navController component.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3260237034">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_OI6nZ6ura8.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3260237034">16</a> by Samarth Agarwal
		posted on 4/17/2017 at 6:33 PM
		</div>
		<div class="comment_text"><p>How can be send parameters to the new rootPage?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3260319566">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3260319566">17</a> (In reply to <a href="#c_3260237034">#16</a>) by Raymond Camden
		posted on 4/17/2017 at 7:29 PM
		</div>
		<div class="comment_text"><p>As far as I know, you can't. You're basically setting a root value for the app. There's probably some way to do it - but none are coming to mind right now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3323827420">
	<div>
		<img src="https://disqus.com/api/users/avatars/akarshapurvachar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3323827420">18</a> by Akarsha Purvachar
		posted on 5/25/2017 at 9:58 AM
		</div>
		<div class="comment_text"><p>Hi, <br>How to create side menu for any other page which is not root page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3323989633">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3323989633">19</a> (In reply to <a href="#c_3323827420">#18</a>) by Raymond Camden
		posted on 5/25/2017 at 12:48 PM
		</div>
		<div class="comment_text"><p>You would just use the component on that page - it should just work. Did you try?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3324736818">
	<div>
		<img src="https://disqus.com/api/users/avatars/akarshapurvachar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3324736818">20</a> (In reply to <a href="#c_3323989633">#19</a>) by Akarsha Purvachar
		posted on 5/25/2017 at 8:06 PM
		</div>
		<div class="comment_text"><p><a href="https://uploads.disquscdn.com/images/0699ab60fe3a66b16d463515f0c96ea11500f8adcbe221b8f69efbba77c41da5.png" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/0699ab60fe3a66b16d463515f0c96ea11500f8adcbe221b8f69efbba77c41da5.png">https://uploads.disquscdn.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3324741049">
	<div>
		<img src="https://disqus.com/api/users/avatars/akarshapurvachar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3324741049">21</a> (In reply to <a href="#c_3324736818">#20</a>) by Akarsha Purvachar
		posted on 5/25/2017 at 8:09 PM
		</div>
		<div class="comment_text"><p>So this is my app.html file which has menu design, i want this in the home page, and my root page in login page... how should i include it in home page? and what should go in .ts file?<br>I'm really confused...</p></div>
	</div>
</div>
		
<div class="comment" id="c_3324741828">
	<div>
		<img src="https://disqus.com/api/users/avatars/akarshapurvachar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3324741828">22</a> (In reply to <a href="#c_3323989633">#19</a>) by Akarsha Purvachar
		posted on 5/25/2017 at 8:09 PM
		</div>
		<div class="comment_text"><p>&lt;ion-menu [content]="nav"&gt;</p><p>    &lt;ion-header&gt;</p><p>        &lt;ion-toolbar&gt;</p><p>            &lt;ion-title&gt;Menu&lt;/ion-title&gt;</p><p>        &lt;/ion-toolbar&gt;</p><p>    &lt;/ion-header&gt;</p><p>    &lt;ion-content&gt;</p><p>        &lt;ion-list&gt;</p><p>            &lt;button ion-item="" (click)="onLoad(homePage)"&gt;</p><p>                &lt;ion-icon name="home" item-left=""&gt;&lt;/ion-icon&gt;</p><p>                Home</p><p>            &lt;/button&gt;</p><p>            &lt;button ion-item="" (click)="onLoad(historyPage)"&gt;</p><p>                &lt;ion-icon name="home" item-left=""&gt;&lt;/ion-icon&gt;</p><p>                History</p><p>            &lt;/button&gt;</p><p>            &lt;button ion-item="" (click)="onLoad(ezetapDetailsPage)"&gt;</p><p>                &lt;ion-icon name="Home" item-left=""&gt;&lt;/ion-icon&gt;</p><p>                Ezetap Details</p><p>            &lt;/button&gt;</p><p>            &lt;button ion-item="" (click)="onLoad(logout)"&gt;</p><p>                &lt;ion-icon name="logout" item-left=""&gt;&lt;/ion-icon&gt;</p><p>                Logout</p><p>            &lt;/button&gt;</p><p>            &lt;button ion-item="" (click)="onLoad(fAQsPage)"&gt;</p><p>                &lt;ion-icon name="Home" item-left=""&gt;&lt;/ion-icon&gt;</p><p>                FAQs</p><p>            &lt;/button&gt;</p><p>            &lt;button ion-item="" (click)="onLoad(aboutPage)"&gt;</p><p>                &lt;ion-icon name="Home" item-left=""&gt;&lt;/ion-icon&gt;</p><p>                About</p><p>            &lt;/button&gt;</p><p>        &lt;/ion-list&gt;</p><p>    &lt;/ion-content&gt;</p><p>&lt;/ion-menu&gt;</p><p>&lt;ion-nav [root]="rootPage" #nav=""&gt;&lt;/ion-nav&gt;</p><p></p></div>
	</div>
</div>
		
<div class="comment" id="c_3324777671">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3324777671">23</a> (In reply to <a href="#c_3324741049">#21</a>) by Raymond Camden
		posted on 5/25/2017 at 8:32 PM
		</div>
		<div class="comment_text"><p>Did you literally try just moving it to the home page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3324822342">
	<div>
		<img src="https://disqus.com/api/users/avatars/akarshapurvachar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3324822342">24</a> (In reply to <a href="#c_3324777671">#23</a>) by Akarsha Purvachar
		posted on 5/25/2017 at 9:01 PM
		</div>
		<div class="comment_text"><p>No i tried to include this code in component template with ` ` codes...<br>i don't know what i'm missing... its not working</p></div>
	</div>
</div>
		
<div class="comment" id="c_3325746806">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3325746806">25</a> (In reply to <a href="#c_3324822342">#24</a>) by Raymond Camden
		posted on 5/26/2017 at 1:03 PM
		</div>
		<div class="comment_text"><p>You tried - but didn't say how it failed. Try making a test on codepen so we can see, and run, what you tried. I can't write this for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3329837369">
	<div>
		<img src="https://disqus.com/api/users/avatars/akarshapurvachar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3329837369">26</a> (In reply to <a href="#c_3325746806">#25</a>) by Akarsha Purvachar
		posted on 5/29/2017 at 10:49 AM
		</div>
		<div class="comment_text"><p>Hi, i fixed it... i was going wrong in linking the pages.</p><p>Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3330136086">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3330136086">27</a> (In reply to <a href="#c_3329837369">#26</a>) by Raymond Camden
		posted on 5/29/2017 at 3:17 PM
		</div>
		<div class="comment_text"><p>Glad you got it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3334197409">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_a9WJVA54ai.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3334197409">28</a> (In reply to <a href="#c_3330136086">#27</a>) by Chris
		posted on 5/31/2017 at 10:24 PM
		</div>
		<div class="comment_text"><p>For anyone else who came across this hunting for a solution to a menu on a sub page (and not on any other pages) - you still put the &lt;ion-menu&gt; and &lt;ion-nav&gt; components in app.html (not in the sub page as Raymond is suggesting) and just control whichever you need from the sub page component. See <a href="http://disq.us/url?url=http%3A%2F%2Fionicframework.com%2Fdocs%2Fapi%2Fcomponents%2Fapp%2FMenuController%2F%3A2dVVAqnaIToSdzZvcbDLDrGYERg&amp;cuid=3321886" rel="nofollow noopener" title="http://ionicframework.com/docs/api/components/app/MenuController/">http://ionicframework.com/d...</a> 'Multiple Menus on the Same Side' for more info. But thanks Raymond for all the great articles... : )</p></div>
	</div>
</div>
		
<div class="comment" id="c_3334198965">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3334198965">29</a> (In reply to <a href="#c_3334197409">#28</a>) by Raymond Camden
		posted on 5/31/2017 at 10:25 PM
		</div>
		<div class="comment_text"><p>Ah, that *does* make sense - sorry for leading folks down the wrong path here. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3334215389">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_a9WJVA54ai.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3334215389">30</a> (In reply to <a href="#c_3334198965">#29</a>) by Chris
		posted on 5/31/2017 at 10:37 PM
		</div>
		<div class="comment_text"><p>If you just want a menu for one page (like in my case a layers list for a map page) It makes more sense for it to be defined on the sub page component because you want to to be able to hook into any menu item events from the sub page component, not from the app component e.g. if you have an &lt;ion-item (click)="doSomething()"&gt; in the menu then you'll need the doSomething() method in the app component, not the sub page component... which is a bit of a pain.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3334225279">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_a9WJVA54ai.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3334225279">31</a> (In reply to <a href="#c_3334215389">#30</a>) by Chris
		posted on 5/31/2017 at 10:45 PM
		</div>
		<div class="comment_text"><p>...but is perhaps best handled using Events (<a href="http://disq.us/url?url=http%3A%2F%2Fionicframework.com%2Fdocs%2Fapi%2Futil%2FEvents%2F%29%3As-33bZOGLUdnmgRzy_CodIYbIxY&amp;cuid=3321886" rel="nofollow noopener" title="http://ionicframework.com/docs/api/util/Events/)">http://ionicframework.com/d...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3334250535">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_a9WJVA54ai.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3334250535">32</a> (In reply to <a href="#c_3087384093">#1</a>) by Chris
		posted on 5/31/2017 at 11:05 PM
		</div>
		<div class="comment_text"><p>See answer on stackoverflow...</p></div>
	</div>
</div>
		
<div class="comment" id="c_3507565911">
	<div>
		<img src="https://disqus.com/api/users/avatars/Alexus1211.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3507565911">33</a> by Alexandre Nakad
		posted on 9/8/2017 at 5:25 AM
		</div>
		<div class="comment_text"><p>HI,<br>how can I make the menu (side menu) fixed, i.e. showing all the time on tablets?<br>I couldn't find anything in the docs.<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_3507901028">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3507901028">34</a> (In reply to <a href="#c_3507565911">#33</a>) by Raymond Camden
		posted on 9/8/2017 at 1:05 PM
		</div>
		<div class="comment_text"><p>Look here: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fionic-team%2Fionic%2Fissues%2F6793%3A9o87wn05NnuLXqEfqsGurch5GL8&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/ionic-team/ionic/issues/6793">https://github.com/ionic-te...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3515821341">
	<div>
		<img src="https://disqus.com/api/users/avatars/prudhvirajroyaldandi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3515821341">35</a> by PrudhvirajRoyal Dandi
		posted on 9/13/2017 at 5:35 PM
		</div>
		<div class="comment_text"><p>same menu i want to use in many pages and in some pages it should be  disable like login page and signup page ..how?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3517444668">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3517444668">36</a> (In reply to <a href="#c_3515821341">#35</a>) by Raymond Camden
		posted on 9/14/2017 at 4:47 PM
		</div>
		<div class="comment_text"><p>Just not include it there?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3619840110">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_zpg2cL88qp.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3619840110">37</a> by Musa Sesay
		posted on 11/17/2017 at 12:30 AM
		</div>
		<div class="comment_text"><p><a href="https://uploads.disquscdn.com/images/bb4fb6e9b2a47c7decc52131b829fac90dfb37111390be6567bab816957e168a.png" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/bb4fb6e9b2a47c7decc52131b829fac90dfb37111390be6567bab816957e168a.png">https://uploads.disquscdn.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3619843101">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_zpg2cL88qp.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3619843101">38</a> by Musa Sesay
		posted on 11/17/2017 at 12:33 AM
		</div>
		<div class="comment_text"><p>I have some error with ionic project <br>at the constructor to create menu</p></div>
	</div>
</div>
		
<div class="comment" id="c_3619972912">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3619972912">39</a> (In reply to <a href="#c_3619843101">#38</a>) by Raymond Camden
		posted on 11/17/2017 at 2:35 AM
		</div>
		<div class="comment_text"><p>Does it say what the error is?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3647481220">
	<div>
		<img src="https://disqus.com/api/users/avatars/oliverwaterkamp.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3647481220">40</a> by Oliver Waterkamp
		posted on 12/5/2017 at 1:24 PM
		</div>
		<div class="comment_text"><p>Thank you very much for the article and the sourc-code (<a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fionic-team%2Fionic2-starter-sidemenu%29%3AHp0AufGyI4hF-5-rAMSgvxnA1pg&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/ionic-team/ionic2-starter-sidemenu)">https://github.com/ionic-te...</a>.<br>It helped me to solve the problem.<br>I missed the part with the reference to the navigation via ViewChild to navigate from the sidemenu.<br>This important part was not visible in your article (sorry I'm new in Angular and didn't know about this ViewChild reference possibility).<br>But it was very good visible within the provided source-code.<br>Thanks for helping me to solve my problem.</p><p>Regards from Zurich, Switzerland<br>Oliver</p></div>
	</div>
</div>
		
<div class="comment" id="c_3647485109">
	<div>
		<img src="https://disqus.com/api/users/avatars/oliverwaterkamp.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3647485109">41</a> (In reply to <a href="#c_3619840110">#37</a>) by Oliver Waterkamp
		posted on 12/5/2017 at 1:27 PM
		</div>
		<div class="comment_text"><p>homePage: Component --&gt; homePage:any (line 9)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3786223445">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_cR6gRweHSQ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3786223445">42</a> by Anand Raj
		posted on 3/4/2018 at 6:20 AM
		</div>
		<div class="comment_text"><p>Hi, Thnaks for your doc. I am facing one problem with menuClose in Ionic3. side-menu is not closing even after taping on the menu item multiple times.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3788102417">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3788102417">43</a> (In reply to <a href="#c_3786223445">#42</a>) by Raymond Camden
		posted on 3/5/2018 at 1:42 PM
		</div>
		<div class="comment_text"><p>Best I can suggest is creating a CodePen version of this that recreates the issue and reporting it to Ionic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3920708278">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_9V5vKmPd1D.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3920708278">44</a> by Marc Fernandez
		posted on 5/28/2018 at 12:52 PM
		</div>
		<div class="comment_text"><p>Hi. First of all, thanks for this great tutorial. I raise an issue that has arisen in an app that I am developing. I have implemented the code exactly like yours. In my homePage.html (apart from the menu) I have put several buttons to go to the different sections of the page with "&lt;button (click)=" openPage (notificationsPage) "&gt;" and in JS I have put "this.navCtrl.setRoot (page);".</p><p>The point is that if I click on any of those buttons in the homePage.html, I am well directed to the page, but the menu button to go to the homepage again does not work (but it works with any other element).</p><p>Any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3929970120">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3929970120">45</a> (In reply to <a href="#c_3920708278">#44</a>) by Raymond Camden
		posted on 6/4/2018 at 2:16 PM
		</div>
		<div class="comment_text"><p>Best I can suggest is to make a CodePen recreation of this. That will help me debug. But I'm very rusty with Ionic lately.</p></div>
	</div>
</div>
		