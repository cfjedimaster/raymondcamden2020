
<div class="comment" id="c_2893854234">
	<div>
		<img src="https://disqus.com/api/users/avatars/antoniogallo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2893854234">1</a> by Antonio Gallo
		posted on 9/14/2016 at 3:19 PM
		</div>
		<div class="comment_text"><p>"ionic serve" does not work anymore?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2893855266">
	<div>
		<img src="https://disqus.com/api/users/avatars/antoniogallo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2893855266">2</a> by Antonio Gallo
		posted on 9/14/2016 at 3:19 PM
		</div>
		<div class="comment_text"><p>anyway i tested PWA and looks great for "in company" apps... no more headache to go thru' the store anymore</p></div>
	</div>
</div>
		
<div class="comment" id="c_2893860216">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2893860216">3</a> (In reply to <a href="#c_2893854234">#1</a>) by Raymond Camden
		posted on 9/14/2016 at 3:22 PM
		</div>
		<div class="comment_text"><p>Sure - and you can use that - my thinking was that I'd probably want to test as 'close to the bone' as possible and that means a vanilla web server. httpster makes that trivial.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2893880857">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_C7rHm57xa6.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2893880857">4</a> by Cesar
		posted on 9/14/2016 at 3:35 PM
		</div>
		<div class="comment_text"><p>Awesome. Thanks for the info. I was wondering how this worked.</p><p>Is it possible to have both a hybrid mobile app and pwa? Keep the -w flag or is -w used if only building a pwa?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2893886495">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2893886495">5</a> (In reply to <a href="#c_2893880857">#4</a>) by Raymond Camden
		posted on 9/14/2016 at 3:38 PM
		</div>
		<div class="comment_text"><p>You could - but my gut says that's a bad idea. So for example, you could have code that says, "If I'm a hybrid app, I can read Contacts, so enable this button". But it feels like you'll have a mishmash of features imo. I don't know. I don't have a great answer for this outside of saying I'd just pick one and focus on one, even though you COULD do both at once.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2893924715">
	<div>
		<img src="https://disqus.com/api/users/avatars/donniefitz2.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2893924715">6</a> by Don (Gear Offer founder)
		posted on 9/14/2016 at 4:00 PM
		</div>
		<div class="comment_text"><p>I think the real dream is to be able to write an Angular 2 web app and share code between the web app and Ionic2. So, somehow in the build process, output the component (classes) into directories for the web and Ionic and create views for each.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2894000387">
	<div>
		<img src="https://disqus.com/api/users/avatars/christophecariou.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2894000387">7</a> by Mibinn
		posted on 9/14/2016 at 4:41 PM
		</div>
		<div class="comment_text"><p>Great Raymond!<br>We already use Ionic2 for developing web app integrated in a Liferay Portal as portlets, sharing authentication stuffs and consuming json web service exposed by the portal.<br>We used "ionic serve" to test the app outside the portal, but "gulp build/watch" give me new perspectives like autodeploying to the portal web server.<br>Christophe</p></div>
	</div>
</div>
		
<div class="comment" id="c_2894158733">
	<div>
		<img src="https://disqus.com/api/users/avatars/antoniogallo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2894158733">8</a> (In reply to <a href="#c_2893880857">#4</a>) by Antonio Gallo
		posted on 9/14/2016 at 6:05 PM
		</div>
		<div class="comment_text"><p>Yes, ionic2 blog has example about it, its just a few line of codes... however you cannot use "plugins" :-) lots of "if" in your code then :-P</p></div>
	</div>
</div>
		
<div class="comment" id="c_2894160560">
	<div>
		<img src="https://disqus.com/api/users/avatars/antoniogallo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2894160560">9</a> (In reply to <a href="#c_2893924715">#6</a>) by Antonio Gallo
		posted on 9/14/2016 at 6:06 PM
		</div>
		<div class="comment_text"><p>so far ionic2 seems to work fine on a webserver like a normal angular2 application; very different from ionic1</p></div>
	</div>
</div>
		
<div class="comment" id="c_2894165096">
	<div>
		<img src="https://disqus.com/api/users/avatars/donniefitz2.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2894165096">10</a> (In reply to <a href="#c_2894160560">#9</a>) by Don (Gear Offer founder)
		posted on 9/14/2016 at 6:08 PM
		</div>
		<div class="comment_text"><p>Yeah, it works well as a web app, but what I'd like to do is create a separate set of views for a web app. So you'd have your Ionic views for the mobile app and more website appropriate views for the web app, but use the same code. I'm going to try it on a future project.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2894641527">
	<div>
		<img src="https://disqus.com/api/users/avatars/simevidas.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2894641527">11</a> by Šime Vidas
		posted on 9/14/2016 at 10:46 PM
		</div>
		<div class="comment_text"><p>Could you explain what kind of web app (if any) you get when you go down the “hybrid mobile app” path? Is it the same one that is described in your article? I’m asking because I’m anticipating that a pure PWA + iOS app combo could be in demand in the near future.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2895138580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2895138580">12</a> by Adam
		posted on 9/15/2016 at 7:15 AM
		</div>
		<div class="comment_text"><p>Hi not sure if this is something simple, I want to offer a mobile web version of my app also, i.e actually view in a browser, (not PWA in the sense of add to home screen etc) however it seems that some of the components still use the device resolution. I.e device height, and does not factor in the normal browser status bars etc in height calculations, as such things dont display properly. any ideas?<br>In particular &lt;ion-slide&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_2895574079">
	<div>
		<img src="https://disqus.com/api/users/avatars/chandramuralis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2895574079">13</a> by chandramuralis
		posted on 9/15/2016 at 1:11 PM
		</div>
		<div class="comment_text"><p>I think you were referring to 'httpster in the last paragraph instead of 'httster'</p></div>
	</div>
</div>
		
<div class="comment" id="c_2895579470">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2895579470">14</a> (In reply to <a href="#c_2895574079">#13</a>) by Raymond Camden
		posted on 9/15/2016 at 1:13 PM
		</div>
		<div class="comment_text"><p>Thanks - will be fixed in next update.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2895582559">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2895582559">15</a> (In reply to <a href="#c_2895138580">#12</a>) by Raymond Camden
		posted on 9/15/2016 at 1:14 PM
		</div>
		<div class="comment_text"><p>I'm not entirely sure I get you. A PWA is still a web app and runs in the browser. That being said - if you are seeing issues with layout in UI items like ion-slide, your best bet is to create a reproducible example and file a bug report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2895584603">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2895584603">16</a> (In reply to <a href="#c_2894641527">#11</a>) by Raymond Camden
		posted on 9/15/2016 at 1:15 PM
		</div>
		<div class="comment_text"><p>I'm not quite sure I get your question. Are you asking what a hybrid mobile app is? I don't think so - but I don't get exactly what you are asking either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3319384120">
	<div>
		<img src="https://disqus.com/api/users/avatars/rodrigomantica.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3319384120">17</a> (In reply to <a href="#c_2894000387">#7</a>) by Rodrigo Mantica
		posted on 5/22/2017 at 7:56 PM
		</div>
		<div class="comment_text"><p>Hey mibinn could you explain how you packaged an ionic 2 app inside of a liferay portlet? I'm trying to do that on liferay 6.2 with an existing ionic 2 app and existing liferay portal. Any help would be greatly appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3321373466">
	<div>
		<img src="https://disqus.com/api/users/avatars/christophecariou.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3321373466">18</a> (In reply to <a href="#c_3319384120">#17</a>) by Mibinn
		posted on 5/23/2017 at 9:53 PM
		</div>
		<div class="comment_text"><p>Hi Rodrigo,</p><p>It's a bit late for me tonight but I will try to explain how we do that :</p><p>We do it this way :<br>- build the Ionic app for "browser"<br>- creatan empty liferay plugin (portlet)<br>- copy all build stuff to the liferay plugin, in html folder<br>- Create a simple JSP for the portlet with an iframe inside it, adressing the Ionic index.html (you should set a fixed height to your iFrame)<br>- Build the portlet, deploy it and drag on a page</p><p>Bonus :<br>- to consume liferay (web) services from the ionic app, we need to retrieve the pAuth from Liferay and use it for each http request (from ionic code). So we have added a "serveresource" method insdide the portlet class to deliver this pAuth in response of an http request coming from the Ionic app.</p><p>Other way :<br>- we also tried to include directly the root code of the ionic app ( the launcher that is in the index.html page) instead of an iframe. It works almost but we had trouble with relative positionning (x/y) of element. That's the reason why we choose to use iFrame. And iFrame is de facto asynchrous.</p><p>Architectural :<br>"Server" component : Liferay<br>Liferay service (and our own service made by service builder) are consumed by the Ionic app via the JSON Remote services.</p><p>"Client" component : Ionic App<br>Inside Ionic App we define a service layer, that make http request towards the json api of Liferay. Nothing special here, just the natural Ionic/angular2 mechanism (providers, subscribe, etc...)</p><p>And it works ! efficiently ! easier than alloyui or any javascript library.<br>And moreover : same code can be used to build a mobile app (androïd/ios) or even a desktop one (via Electron).</p><p>Regards !</p><p>Christophe (aka Mibinn)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3321688236">
	<div>
		<img src="https://disqus.com/api/users/avatars/rodrigomantica.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3321688236">19</a> (In reply to <a href="#c_3321373466">#18</a>) by Rodrigo Mantica
		posted on 5/24/2017 at 2:11 AM
		</div>
		<div class="comment_text"><p>You sir, are a life saver. I was about to rebuild the ionic app as an angular web app but your solution worked! Thank you so much :DD</p><p>EDIT: There is no CORS issue. I was just calling the wrong requests!</p><p>Thanks again and I appreciate your help</p></div>
	</div>
</div>
		
<div class="comment" id="c_3336681969">
	<div>
		<img src="https://disqus.com/api/users/avatars/christophecariou.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3336681969">20</a> (In reply to <a href="#c_3321688236">#19</a>) by Mibinn
		posted on 6/2/2017 at 8:55 AM
		</div>
		<div class="comment_text"><p>Was offline last days, but glad you had success. I have some tips about cors and auth. I'll post all about that soon ... Stay tuned!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3337438150">
	<div>
		<img src="https://disqus.com/api/users/avatars/rodrigomantica.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3337438150">21</a> (In reply to <a href="#c_3336681969">#20</a>) by Rodrigo Mantica
		posted on 6/2/2017 at 6:28 PM
		</div>
		<div class="comment_text"><p>That would be amazing :D putting the app within liferay as a portlet solved my cors issue. I'm also able to make calls as long as I have email and pass basic auth header (I don't need to include the pAuth param for some reason). What I haven't figured out is how to perform Facebook login using jsonws since I don't have a way of looking up users by their facebookId and I don't know how to create a basic auth header using a facebook response.</p><p>Any tips would be greatly appreciated!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3343931464">
	<div>
		<img src="https://disqus.com/api/users/avatars/rodrigomantica.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3343931464">22</a> (In reply to <a href="#c_3336681969">#20</a>) by Rodrigo Mantica
		posted on 6/6/2017 at 4:57 AM
		</div>
		<div class="comment_text"><p>Have you gotten deeplinks/url routing to work with ionic 3? Looks like in portal environment, liferay impedes the app from controlling the url.</p></div>
	</div>
</div>
		