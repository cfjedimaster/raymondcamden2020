
<div class="comment" id="c_3649397338">
	<div>
		<img src="https://disqus.com/api/users/avatars/simon_macdonald.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3649397338">1</a> by Simon MacDonald
		posted on 12/6/2017 at 3:39 PM
		</div>
		<div class="comment_text"><p>If you like Cordova and Vue you can get started quickly with 3 ready made templates that combine Cordova+Vue+Framework7:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fphonegap%2Fphonegap-template-vue-f7-blank%3AUtuLyLEk1ddUcrwQu4MTAaPvN-I&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/phonegap/phonegap-template-vue-f7-blank">https://github.com/phonegap...</a><br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fphonegap%2Fphonegap-template-vue-f7-tabs%3AOqIXyKoBxJfTkaN9rL0lKSpEgN4&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/phonegap/phonegap-template-vue-f7-tabs">https://github.com/phonegap...</a><br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fphonegap%2Fphonegap-template-vue-f7-split-panel%3AexlQyDfQLvNB2QvCHAgkODRY-5w&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/phonegap/phonegap-template-vue-f7-split-panel">https://github.com/phonegap...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3649501929">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3649501929">2</a> (In reply to <a href="#c_3649397338">#1</a>) by Raymond Camden
		posted on 12/6/2017 at 4:44 PM
		</div>
		<div class="comment_text"><p>I’m on my phone so I can’t test - but when you run that locally via npm - does the code handle faking the deviceready event?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3649604598">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3649604598">3</a> (In reply to <a href="#c_3649397338">#1</a>) by Raymond Camden
		posted on 12/6/2017 at 5:45 PM
		</div>
		<div class="comment_text"><p>So looking at the first template, I don't see any use of a deviceready event listener. Is that right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3650100522">
	<div>
		<img src="https://disqus.com/api/users/avatars/tommycarloswilliams.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3650100522">4</a> (In reply to <a href="#c_3649604598">#3</a>) by Tommy-Carlos Williams
		posted on 12/6/2017 at 10:31 PM
		</div>
		<div class="comment_text"><p>Correct. More and more plugins are starting to sunset. The templates don't even have any plugins by default that need it.</p><p>It's really an exercise for the user... It *would* be good to have at last an example of its use, probably. I'll look into it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3650104110">
	<div>
		<img src="https://disqus.com/api/users/avatars/tommycarloswilliams.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3650104110">5</a> (In reply to <a href="#c_3649501929">#2</a>) by Tommy-Carlos Williams
		posted on 12/6/2017 at 10:33 PM
		</div>
		<div class="comment_text"><p>No deviceready shim in the templates. I believe there is one in the browser platform... so you could have that functionality in that way.</p><p>You should totally raise some issues if you find anything you think would be good to have in there... I'd be happy to add them in.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3650386230">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3650386230">6</a> (In reply to <a href="#c_3650100522">#4</a>) by Raymond Camden
		posted on 12/7/2017 at 2:28 AM
		</div>
		<div class="comment_text"><p>I have to say... even with plugins beginning to sunset... this feels a bit premature. Are most Cordova folks now skipping deviceready? It seems like it would still be required. I mean shoot - if I can't use the web by itself and I have to use Cordova, it seems like it's going to be because I need a plugin of some sorts, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3650386638">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3650386638">7</a> (In reply to <a href="#c_3650104110">#5</a>) by Raymond Camden
		posted on 12/7/2017 at 2:28 AM
		</div>
		<div class="comment_text"><p>Well see my above comment. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3650412183">
	<div>
		<img src="https://disqus.com/api/users/avatars/tommycarloswilliams.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3650412183">8</a> (In reply to <a href="#c_3650386230">#6</a>) by Tommy-Carlos Williams
		posted on 12/7/2017 at 2:54 AM
		</div>
		<div class="comment_text"><p>...or you need to package for an app store like iOS... but I get your point. I was not trying to say that devs don't need deviceready, just that the functionality of the templates as they stand don't... so it wasn't included. Like I said, it might be worth having in there as an example of how you might use it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3650428255">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3650428255">9</a> (In reply to <a href="#c_3650412183">#8</a>) by Raymond Camden
		posted on 12/7/2017 at 3:10 AM
		</div>
		<div class="comment_text"><p>I guess what's taking me back is that it almost feels like heresy to not include it. ;) I mean I get that there are cases where it would not be needed, but it seems odd to not include it by default and maybe have one example where it *isn't* used.</p><p>I'm not as deep into the Cordova world as I used to be. Do a majority of people *not* use the event anymore?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4534700926">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_CAc4uQL4R1.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4534700926">10</a> by Trav
		posted on 7/10/2019 at 8:49 PM
		</div>
		<div class="comment_text"><p>Any chance you would know how to make cordova plugins work with capacitor and vue? I can't find anything online. The capacitor api's work like a charm. But I can't seem to get ionic native and cordova plugins to work. <br><a href="https://disq.us/url?url=https%3A%2F%2Fionicframework.com%2Fdocs%2Fnative%2Fcontacts%3Ay1bCNSFug_FRKEgqtjj4HPKL2Dc&amp;cuid=3321886" rel="nofollow noopener" title="https://ionicframework.com/docs/native/contacts"> Url to plugin</a> <br>If you have the knowledge it would probably be a great article. Thans</p></div>
	</div>
</div>
		
<div class="comment" id="c_4534773089">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4534773089">11</a> (In reply to <a href="#c_4534700926">#10</a>) by Raymond Camden
		posted on 7/10/2019 at 9:48 PM
		</div>
		<div class="comment_text"><p>Sorry - I think this post was one of the last few times I used Cordova.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4534794583">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_CAc4uQL4R1.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4534794583">12</a> (In reply to <a href="#c_4534773089">#11</a>) by Trav
		posted on 7/10/2019 at 10:08 PM
		</div>
		<div class="comment_text"><p>No worries I found some of the information valuable in this article regardless. Tanks</p></div>
	</div>
</div>
		