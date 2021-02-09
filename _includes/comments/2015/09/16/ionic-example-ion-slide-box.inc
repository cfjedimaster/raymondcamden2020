
<div class="comment" id="c_2259778864">
	<div>
		<img src="https://disqus.com/api/users/avatars/joshuahutt.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2259778864">1</a> by Joshua
		posted on 9/18/2015 at 2:38 AM
		</div>
		<div class="comment_text"><p>Nice post! I like your clean, straightforward example. :)</p><p>Kind of curious why you left your appid in there -- typically, you don't want to share auth keys and the like. Someone could steal it.</p><p>Also, you can use the `$timeout` service instead of `timeout` and `$apply`:</p><p>    $timeout(function() {<br>        $ionicSlideBoxDelegate.slide(0);<br>        $ionicSlideBoxDelegate.update();<br>    });</p><p>It triggers a digest automatically.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2260253335">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2260253335">2</a> (In reply to <a href="#c_2259778864">#1</a>) by Raymond Camden
		posted on 9/18/2015 at 10:52 AM
		</div>
		<div class="comment_text"><p>When I was working w/ Mike, he actually showed me $timeout first, then setTimeout, and I preferred setTimeout since it meant one less dependency in my service. Not saying that was the right decision, but that's why I did it. :)</p><p>As for the appid, yep, that's an issue. I mention how I'd handle that in the article though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2351811387">
	<div>
		<img src="https://disqus.com/api/users/avatars/montjoile.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2351811387">3</a> by montjoile
		posted on 11/10/2015 at 2:50 PM
		</div>
		<div class="comment_text"><p>how can you dissable the slide list bar?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2352266880">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2352266880">4</a> (In reply to <a href="#c_2351811387">#3</a>) by Raymond Camden
		posted on 11/10/2015 at 7:21 PM
		</div>
		<div class="comment_text"><p>Do you mean the dots at the bottom?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2352280974">
	<div>
		<img src="https://disqus.com/api/users/avatars/montjoile.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2352280974">5</a> (In reply to <a href="#c_2352266880">#4</a>) by montjoile
		posted on 11/10/2015 at 7:30 PM
		</div>
		<div class="comment_text"><p>yes, but I already find the solution by putting: show-pager="false" in the html &gt;&gt;<br>&lt;ion-slide-box show-pager="false"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_2635017265">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_USVaRAmCg8.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2635017265">6</a> by Ali
		posted on 4/21/2016 at 9:02 AM
		</div>
		<div class="comment_text"><p>Hi there.</p><p>I've got a standard slide box setup :</p><p>&lt;ion-slide-box&gt;</p><p> &lt;ion-slide&gt;</p><p>&lt; some text and a button with ng-click="go('/a-new-html-page')"&gt;</p><p> &lt;/ion-slide&gt;</p><p> &lt;ion-slide&gt;</p><p>&lt; some more text and another button with ng-click="go('/another-new-html-page')&gt;</p><p> &lt;/ion-slide&gt;</p><p>&lt;/ion-slide-box&gt;</p><p>When I use my app, I slide to the second box and click the button to be sent to another-new-html-page. This is an options page with a list of checkbox options.The things I tick here will be shown back in the second slide box on my starting page - so  I tick one or more options and click the back button...</p><p>.. and that where I get stuck. I have returned to back to the FIRST slide box and you have to slide along to the second box to see those changes. whihc of course is not very user friendly.</p><p>Is there a way to return back to the FIRST slide box if i hit back from the "a-new-html-page" and the SECOND slide box if I hit back from the "another-new-html-page"</p><p>I'm very new to Ionic and probably making all kinds of "school boy" errors so any help would be greatly appreciated!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2635184322">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2635184322">7</a> (In reply to <a href="#c_2635017265">#6</a>) by Raymond Camden
		posted on 4/21/2016 at 12:17 PM
		</div>
		<div class="comment_text"><p>Hmm. The only thing I can think of is to remember the current slide (using on-slide-changed), and then on loading the page again, see if you weren't on slide 1 and if so - slide to the index. I don't see a way to *render immediately* with N being selected.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2635449353">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_USVaRAmCg8.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2635449353">8</a> (In reply to <a href="#c_2635184322">#7</a>) by Ali
		posted on 4/21/2016 at 3:02 PM
		</div>
		<div class="comment_text"><p>Ok so in lieu of anything better that's what i will try and do .</p><p>Really appreciate the prompt response Ray - thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2655334531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2655334531">9</a> by Piyu
		posted on 5/3/2016 at 10:56 AM
		</div>
		<div class="comment_text"><p>Great post, Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2699357684">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_yQK4Z2SPBB.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2699357684">10</a> by Grace
		posted on 5/28/2016 at 1:47 AM
		</div>
		<div class="comment_text"><p>Hi Raymond is there a way to show numbers like so 1/10 instead of the circles for page slider?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2699971914">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2699971914">11</a> (In reply to <a href="#c_2699357684">#10</a>) by Raymond Camden
		posted on 5/28/2016 at 1:23 PM
		</div>
		<div class="comment_text"><p>You can disable the built in pager and then use your own logic. Know that this control is deprecated now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2792682211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2792682211">12</a> by Eric 
		posted on 7/20/2016 at 3:43 AM
		</div>
		<div class="comment_text"><p>I am having problem each time I use more than six (6) slide tab. The page often get a white space below the content.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2793174785">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2793174785">13</a> (In reply to <a href="#c_2792682211">#12</a>) by Raymond Camden
		posted on 7/20/2016 at 12:56 PM
		</div>
		<div class="comment_text"><p>I'd suggest creating a reproduceable case (use CodePen) and then file a bug report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2824092375">
	<div>
		<img src="https://disqus.com/api/users/avatars/MoAsmar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2824092375">14</a> by Mohamad Al Asmar
		posted on 8/6/2016 at 4:48 PM
		</div>
		<div class="comment_text"><p>Thank you, you saved my day !</p></div>
	</div>
</div>
		
<div class="comment" id="c_2824144623">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2824144623">15</a> (In reply to <a href="#c_2824092375">#14</a>) by Raymond Camden
		posted on 8/6/2016 at 5:29 PM
		</div>
		<div class="comment_text"><p>You are most welcome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2904566745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2904566745">16</a> by karthick
		posted on 9/19/2016 at 11:59 AM
		</div>
		<div class="comment_text"><p>how to slide automatic</p></div>
	</div>
</div>
		
<div class="comment" id="c_2905175703">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2905175703">17</a> (In reply to <a href="#c_2904566745">#16</a>) by Raymond Camden
		posted on 9/19/2016 at 6:11 PM
		</div>
		<div class="comment_text"><p>The API supports forcing a slide - so you could do it that way - at an interval.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2961840425">
	<div>
		<img src="https://disqus.com/api/users/avatars/andreasheiner.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2961840425">18</a> by andreas heiner
		posted on 10/21/2016 at 9:21 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>thanks, yet again a great tutorial ...</p><p>The above code is for Ionic 1.3.; I'm working with Ionic 2. As I'm far from an experienced coder, how would the code look for Ionic 2?</p><p>thanks</p><p>Andreas</p></div>
	</div>
</div>
		
<div class="comment" id="c_2962534960">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2962534960">19</a> (In reply to <a href="#c_2961840425">#18</a>) by Raymond Camden
		posted on 10/21/2016 at 7:17 PM
		</div>
		<div class="comment_text"><p>I don't know - I'll have to make some time to redo it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2966880823">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2966880823">20</a> (In reply to <a href="#c_2961840425">#18</a>) by Raymond Camden
		posted on 10/24/2016 at 7:51 PM
		</div>
		<div class="comment_text"><p><a href="https://disq.us/url?url=https%3A%2F%2Fwww.raymondcamden.com%2F2016%2F10%2F24%2Fionic-example-slides%3ABQGx-MJQJG2jO19WXxUZeQSBX9U&amp;cuid=3321886" rel="nofollow noopener" title="https://www.raymondcamden.com/2016/10/24/ionic-example-slides">https://www.raymondcamden.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3157747875">
	<div>
		<img src="https://disqus.com/api/users/avatars/raulinfalcone.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3157747875">21</a> by Raulin Falcone
		posted on 2/16/2017 at 7:40 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Great tutorial. Since the code is for Ionic 1.3. How can we do the same in Ionic 1.1.0?</p><p>Thanks,<br>Raulin</p></div>
	</div>
</div>
		
<div class="comment" id="c_3157965285">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3157965285">22</a> (In reply to <a href="#c_3157747875">#21</a>) by Raymond Camden
		posted on 2/16/2017 at 12:30 PM
		</div>
		<div class="comment_text"><p>No idea. Did you try it as is?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3158091573">
	<div>
		<img src="https://disqus.com/api/users/avatars/raulinfalcone.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3158091573">23</a> (In reply to <a href="#c_3157965285">#22</a>) by Raulin Falcone
		posted on 2/16/2017 at 2:08 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I've already tried and it works. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3273102367">
	<div>
		<img src="https://disqus.com/api/users/avatars/dmitrykrychylskyy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3273102367">24</a> by Dmitry Krychylskyy
		posted on 4/25/2017 at 8:18 AM
		</div>
		<div class="comment_text"><p>Hello Raymon, <br>super tutorial, thank you,<br>but i  haw a question  - how i can get images from device for slider?<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_3273240040">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3273240040">25</a> (In reply to <a href="#c_3273102367">#24</a>) by Raymond Camden
		posted on 4/25/2017 at 11:23 AM
		</div>
		<div class="comment_text"><p>There's probably a couple of ways. You can use the Camera plugin to let a user select a picture, and then let them do that multiple times. There's also a plugin that lets you select multiple images. You can also look at the File plugin as a way to list files in a directory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3392483360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3392483360">26</a> by A.Sha
		posted on 6/30/2017 at 12:40 AM
		</div>
		<div class="comment_text"><p>image preview links are broken :( <br>Do you plan to update this article for ionic v 3 ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3393198700">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3393198700">27</a> (In reply to <a href="#c_3392483360">#26</a>) by Raymond Camden
		posted on 6/30/2017 at 1:21 PM
		</div>
		<div class="comment_text"><p>Not really. I've got a crap ton of Ionic 1 blog posts, I can't update them all. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4210100386">
	<div>
		<img src="https://disqus.com/api/users/avatars/rijwanmohmmed.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4210100386">28</a> by Rijwan Mohmmed
		posted on 11/24/2018 at 4:18 PM
		</div>
		<div class="comment_text"><p>How can we add book view slider in angular 2 . Please Help me i am in big problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4210152314">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4210152314">29</a> (In reply to <a href="#c_4210100386">#28</a>) by Raymond Camden
		posted on 11/24/2018 at 4:59 PM
		</div>
		<div class="comment_text"><p>I'm no longer using Ionic and this post is over three years old now. I'd consider StackOverflow or the Ionic forums.</p></div>
	</div>
</div>
		