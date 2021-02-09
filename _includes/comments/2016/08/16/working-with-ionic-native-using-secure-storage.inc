
<div class="comment" id="c_3080396890">
	<div>
		<img src="https://disqus.com/api/users/avatars/quentinng.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3080396890">1</a> by Quentin Ng
		posted on 1/3/2017 at 6:14 AM
		</div>
		<div class="comment_text"><p>have you had any issues running this with IOS?<br>I'm having issues when I try and set, get the created storage it errors.</p><p>The only error I get back is  the following:<br>{"line":71,"column":45,"sourceURL":"http://192.168.1.3:8100/plugins/cordova-plugin-secure-storage/www/securestorage.js"}</p></div>
	</div>
</div>
		
<div class="comment" id="c_3080759108">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3080759108">2</a> (In reply to <a href="#c_3080396890">#1</a>) by Raymond Camden
		posted on 1/3/2017 at 1:53 PM
		</div>
		<div class="comment_text"><p>You don't see anything else in the console? You said it errors, so therefore the error must show up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3080792634">
	<div>
		<img src="https://disqus.com/api/users/avatars/quentinng.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3080792634">3</a> (In reply to <a href="#c_3080759108">#2</a>) by Quentin Ng
		posted on 1/3/2017 at 2:19 PM
		</div>
		<div class="comment_text"><p>Error message is "Failure in SecureStorage.set() - Refer to SecBase.h for description"<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2FCrypho%2Fcordova-plugin-secure-storage%2Fissues%2F48%3A-Z51iMmFtjBN0OeWNNKViMCYqqo&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/Crypho/cordova-plugin-secure-storage/issues/48">https://github.com/Crypho/c...</a> I think it's related to emulator issue. I'll have to try and test out on a real device and see if I reproduce.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3080820172">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3080820172">4</a> (In reply to <a href="#c_3080792634">#3</a>) by Raymond Camden
		posted on 1/3/2017 at 2:39 PM
		</div>
		<div class="comment_text"><p>Ok - and if you can - you should file that w/ the plugin repo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3083302899">
	<div>
		<img src="https://disqus.com/api/users/avatars/quentinng.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3083302899">5</a> (In reply to <a href="#c_3080820172">#4</a>) by Quentin Ng
		posted on 1/4/2017 at 10:25 PM
		</div>
		<div class="comment_text"><p>Yep confirmed it's a bug in the emulator. Was able to progress when deployed to a real device.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3120615740">
	<div>
		<img src="https://disqus.com/api/users/avatars/vishnurapposol.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3120615740">6</a> by Vishnu Rapposol
		posted on 1/26/2017 at 5:07 AM
		</div>
		<div class="comment_text"><p>It doesn't works on some devices like HTC , Samsung. But working on Asus. What I do?<br>my code is<br>this.secureStorage.create('storeroom')<br>          .then(<br>            ()=&gt;{<br>                  this.secureStorage.set('userId',this.username)<br>                  .then(<br>                    data=&gt;{<br>                      loading.dismiss();</p><p>                      },<br>                    error=&gt;{<br>                      loading.dismiss();<br>                      console.log('Your device issue');<br>                    }<br>                  )</p><p>            },<br>            error=&gt;{<br>              loading.dismiss();<br>              console.log(error.error);<br>            }<br>          );</p></div>
	</div>
</div>
		
<div class="comment" id="c_3121023013">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3121023013">7</a> (In reply to <a href="#c_3120615740">#6</a>) by Raymond Camden
		posted on 1/26/2017 at 12:13 PM
		</div>
		<div class="comment_text"><p>Report it as a bug to the plugin author.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3332584468">
	<div>
		<img src="https://disqus.com/api/users/avatars/kingsleysimon.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3332584468">8</a> by Kingsley Simon
		posted on 5/31/2017 at 12:45 AM
		</div>
		<div class="comment_text"><p>Question what is the main difference between ionic native storage and ionic secure storage?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3333997284">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3333997284">9</a> (In reply to <a href="#c_3332584468">#8</a>) by Raymond Camden
		posted on 5/31/2017 at 8:06 PM
		</div>
		<div class="comment_text"><p>There is no Ionic Native Storage. Ionic Native is a group name for plugins that have been 'wrapped' and made more 'Angular friendly'.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3337495468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3337495468">10</a> by Vaibhav Sharma
		posted on 6/2/2017 at 7:01 PM
		</div>
		<div class="comment_text"><p>Can we see encrypted data in console ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3337602622">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3337602622">11</a> (In reply to <a href="#c_3337495468">#10</a>) by Raymond Camden
		posted on 6/2/2017 at 7:58 PM
		</div>
		<div class="comment_text"><p>Did you try?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3337702767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3337702767">12</a> (In reply to <a href="#c_3337602622">#11</a>) by Vaibhav Sharma
		posted on 6/2/2017 at 8:42 PM
		</div>
		<div class="comment_text"><p>No, I can't see because when I try to get data using this.secureStorage.get(.......) then it returns me decrypted data.<br>So how we can see encrypted data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3337753650">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3337753650">13</a> (In reply to <a href="#c_3337702767">#12</a>) by Raymond Camden
		posted on 6/2/2017 at 9:13 PM
		</div>
		<div class="comment_text"><p>I'd ask the plugin author - I believe it is stored in a platform specific manner. But yea - check on the plugin site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3337755651">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3337755651">14</a> (In reply to <a href="#c_3337753650">#13</a>) by Raymond Camden
		posted on 6/2/2017 at 9:13 PM
		</div>
		<div class="comment_text"><p>I just looked and the plugin docs talk about this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3337785117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3337785117">15</a> (In reply to <a href="#c_3337755651">#14</a>) by Vaibhav Sharma
		posted on 6/2/2017 at 9:31 PM
		</div>
		<div class="comment_text"><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3468692274">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3468692274">16</a> by Nicolas
		posted on 8/15/2017 at 8:55 AM
		</div>
		<div class="comment_text"><p>Thanks for the nice blog</p><p>ive got the problem, when try to login, then ive got a runtime error<br>with Cannot read proberty 'set' of undefindet</p><p>the same happens if i typ the wrong pass, but then i got insteadt of 'set' 'remove'</p><p>TypeError: Cannot read property 'set' of undefined<br>    at SafeSubscriber._next (http://localhost:8100/build/main.js:146:30)<br>    at SafeSubscriber.__tryOrSetError (http://localhost:8100/build/vendor.js:15697:16)<br>    at <a href="http://disq.us/url?url=http%3A%2F%2FSafeSubscriber.next%3AJrHKnpN7mM4c2438PH937630PqI&amp;cuid=3321886" rel="nofollow noopener" title="SafeSubscriber.next">SafeSubscriber.next</a> (http://localhost:8100/build/vendor.js:15637:27)<br>    at Subscriber._next (http://localhost:8100/build/vendor.js:15575:26)<br>    at <a href="http://disq.us/url?url=http%3A%2F%2FSubscriber.next%3A3AEIhwLmfa7R-dMagKaRC6uF-G4&amp;cuid=3321886" rel="nofollow noopener" title="Subscriber.next">Subscriber.next</a> (http://localhost:8100/build/vendor.js:15539:18)<br>    at ArrayObservable._subscribe (http://localhost:8100/build/vendor.js:28853:28)<br>    at ArrayObservable.Observable._trySubscribe (http://localhost:8100/build/vendor.js:211:25)<br>    at ArrayObservable.Observable.subscribe (http://localhost:8100/build/vendor.js:199:27)<br>    at HomePage.webpackJsonp.227.HomePage.login (http://localhost:8100/build/main.js:143:63)<br>    at Object.eval [as handleEvent] (ng:///AppModule/HomePage.ngfactory.js:517:24)<br>Ionic Framework: 3.6.0<br>Ionic App Scripts: 2.1.3<br>Angular Core: 4.1.3<br>Angular Compiler CLI: 4.1.3<br>Node: 6.11.2<br>OS Platform: Windows 10<br>Navigator Platform: Win32<br>User Agent: Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/60.0.3112.90 Safari/537.36</p></div>
	</div>
</div>
		
<div class="comment" id="c_3469236098">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3469236098">17</a> (In reply to <a href="#c_3468692274">#16</a>) by Raymond Camden
		posted on 8/15/2017 at 4:23 PM
		</div>
		<div class="comment_text"><p>Not sure I understand. You type the wrong password for my login service?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3470359167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3470359167">18</a> (In reply to <a href="#c_3469236098">#17</a>) by Nicolas
		posted on 8/16/2017 at 5:37 AM
		</div>
		<div class="comment_text"><p>i mean, in your example, you coded the password to 'password'</p><p>so if i write anything other then 'passwort' i get the error with 'remove'</p></div>
	</div>
</div>
		
<div class="comment" id="c_3470636961">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3470636961">19</a> (In reply to <a href="#c_3470359167">#18</a>) by Raymond Camden
		posted on 8/16/2017 at 11:21 AM
		</div>
		<div class="comment_text"><p>What remove call though? If you put in a bad password it should keep you on the login page, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3470637909">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3470637909">20</a> (In reply to <a href="#c_3470636961">#19</a>) by Raymond Camden
		posted on 8/16/2017 at 11:22 AM
		</div>
		<div class="comment_text"><p>Oh wait - I think I see the issue. My logic assumes that you had already logged in once. So this is a bug in my code. It should say (in pseudo-code)</p><p>if login failed, AND if I had stored info before, then remove it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3564491812">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_7Q1ZdzVYJL.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3564491812">21</a> by Ranjana
		posted on 10/12/2017 at 7:53 PM
		</div>
		<div class="comment_text"><p>how to create storage instance just once?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3564658633">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3564658633">22</a> (In reply to <a href="#c_3564491812">#21</a>) by Raymond Camden
		posted on 10/12/2017 at 9:48 PM
		</div>
		<div class="comment_text"><p>I believe (stress, BELIEVE) the create API only makes it once and after that it's just opened.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3733221875">
	<div>
		<img src="https://disqus.com/api/users/avatars/andrewradulescu.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3733221875">23</a> (In reply to <a href="#c_3564658633">#22</a>) by Andrew Radulescu
		posted on 1/30/2018 at 10:22 AM
		</div>
		<div class="comment_text"><p>Of course, but the documentation is too light and doesn't specify it</p></div>
	</div>
</div>
		
<div class="comment" id="c_3733445418">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3733445418">24</a> (In reply to <a href="#c_3733221875">#23</a>) by Raymond Camden
		posted on 1/30/2018 at 1:45 PM
		</div>
		<div class="comment_text"><p>Then I'd file a bug report so they know the docs are lacking in this regard.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3994610660">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_awzF24JwCm.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3994610660">25</a> by Alex Mayer
		posted on 7/18/2018 at 11:08 AM
		</div>
		<div class="comment_text"><p>Hi, thanks for the good summary!</p><p>Do you have any idea how to properly unit test this. <br>Is there a way I can run automated tests to make sure my credentials are saved securely?</p><p>Thanks in advance :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3994997058">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3994997058">26</a> (In reply to <a href="#c_3994610660">#25</a>) by Raymond Camden
		posted on 7/18/2018 at 3:40 PM
		</div>
		<div class="comment_text"><p>Sorry - I haven't used this in a while.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4584819254">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_9qV6tqo41M.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4584819254">27</a> (In reply to <a href="#c_3121023013">#7</a>) by Dominique Francois
		posted on 8/20/2019 at 7:10 AM
		</div>
		<div class="comment_text"><p>what solve this issue, same issue</p></div>
	</div>
</div>
		
<div class="comment" id="c_4586428070">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4586428070">28</a> (In reply to <a href="#c_4584819254">#27</a>) by Raymond Camden
		posted on 8/21/2019 at 2:17 PM
		</div>
		<div class="comment_text"><p>I'd offer the same advice, to report it to the plugin.</p></div>
	</div>
</div>
		