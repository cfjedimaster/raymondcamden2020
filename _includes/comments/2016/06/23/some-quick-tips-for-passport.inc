
<div class="comment" id="c_2747105956">
	<div>
		<img src="https://disqus.com/api/users/avatars/edm00se.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2747105956">1</a> by Eric McCormick
		posted on 6/23/2016 at 8:54 PM
		</div>
		<div class="comment_text"><p>Good info, it sounds like their documentation could use a little updating.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2747121070">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2747121070">2</a> (In reply to <a href="#c_2747105956">#1</a>) by Raymond Camden
		posted on 6/23/2016 at 9:03 PM
		</div>
		<div class="comment_text"><p>I *should* file a bug report or two.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2747213674">
	<div>
		<img src="https://disqus.com/api/users/avatars/tarabass.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2747213674">3</a> by Tarabass
		posted on 6/23/2016 at 9:48 PM
		</div>
		<div class="comment_text"><p>Hi Raymond. I ended up with almost the same, although my middleware is quite different.</p><p>Instead of checking req.user is undefined, you can also call "req.isAuthenticated()"</p><p>function requireLogin(req, res, next) {<br>         // if user is authenticated in the session, carry on<br>           if(req.isAuthenticated()) {<br>                      return next();<br>        }</p><p>           // if they aren't redirect them to the home page<br>           res.redirect('/');<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_2747508280">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2747508280">4</a> (In reply to <a href="#c_2747213674">#3</a>) by Raymond Camden
		posted on 6/24/2016 at 1:21 AM
		</div>
		<div class="comment_text"><p>Interesting - is isAuthenticated documented somewhere?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2748259217">
	<div>
		<img src="https://disqus.com/api/users/avatars/tarabass.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2748259217">5</a> (In reply to <a href="#c_2747508280">#4</a>) by Tarabass
		posted on 6/24/2016 at 1:01 PM
		</div>
		<div class="comment_text"><p>What do you think? Of course not. It's there for a long time, and still no docs for it. Even their own examples are very outdated.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fa%2F14301657%3AWt49zzv7UipsBgF05S0v5VIQAO4&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/a/14301657">http://stackoverflow.com/a/...</a><br>Switching between strategies is also a thing. I hope to see your solution for that in the next post about passport. If any? I wrote myself some code and want to compare it with your solution..</p></div>
	</div>
</div>
		
<div class="comment" id="c_2748261399">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2748261399">6</a> (In reply to <a href="#c_2748259217">#5</a>) by Raymond Camden
		posted on 6/24/2016 at 1:03 PM
		</div>
		<div class="comment_text"><p>Well shoot. I'll file a bug report for this.</p><p>And yes - I'm still working on the app. I got Twitter Auth working yesterday and it was pretty darn easy actually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2748266057">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2748266057">7</a> (In reply to <a href="#c_2748261399">#6</a>) by Raymond Camden
		posted on 6/24/2016 at 1:06 PM
		</div>
		<div class="comment_text"><p>Bug report: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fjaredhanson%2Fpassport%2Fissues%2F498%3AM31zMrCE1I_nzMsMPMmN9zWPey8&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/jaredhanson/passport/issues/498">https://github.com/jaredhan...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2748446821">
	<div>
		<img src="https://disqus.com/api/users/avatars/tarabass.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2748446821">8</a> (In reply to <a href="#c_2748266057">#7</a>) by Tarabass
		posted on 6/24/2016 at 2:56 PM
		</div>
		<div class="comment_text"><p>Good job :)<br>But why you have to do it after all those years!? Maybe I should participate more often, although I don't feel connected to the OS community very much..</p></div>
	</div>
</div>
		
<div class="comment" id="c_2748482603">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2748482603">9</a> (In reply to <a href="#c_2748446821">#8</a>) by Raymond Camden
		posted on 6/24/2016 at 3:18 PM
		</div>
		<div class="comment_text"><p>Haven't released many OS projects myself over the years, I can tell you it gets difficult to keep up. Heck, even a 5 minute mod may be hard to do when your motivation is low.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2757297593">
	<div>
		<img src="https://disqus.com/api/users/avatars/simonprickett.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2757297593">10</a> by Simon Prickett
		posted on 6/29/2016 at 8:00 PM
		</div>
		<div class="comment_text"><p>I used Passport recently on a Node project that had to use the Under Armour API which uses OAuth.  Was really simple to get going with as someone already had an off the shelf strategy plugin for Under Armour that just worked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2757318199">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2757318199">11</a> (In reply to <a href="#c_2757297593">#10</a>) by Raymond Camden
		posted on 6/29/2016 at 8:12 PM
		</div>
		<div class="comment_text"><p>It's OT I guess - but what in the heck did you use an Under Armour API for?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3275111987">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_K721n1nIsN.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3275111987">12</a> by Edgar Sanchez
		posted on 4/26/2017 at 1:20 PM
		</div>
		<div class="comment_text"><p>Paragraph #5 describes perfectly my feelings. Your fake login example saved me an hour (or more).  Examples should NOT be tied to Mongo.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3275114960">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3275114960">13</a> (In reply to <a href="#c_3275111987">#12</a>) by Raymond Camden
		posted on 4/26/2017 at 1:22 PM
		</div>
		<div class="comment_text"><p>Glad I wasn't the only one confused by this. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3684011331">
	<div>
		<img src="https://disqus.com/api/users/avatars/sherlockvilmesvicvilmes.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3684011331">14</a> by Sherlock Vilmes Vic Vilmes
		posted on 12/30/2017 at 4:13 AM
		</div>
		<div class="comment_text"><p>while the official docs are terribly written, thanks for helping out with such clear explanations.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3802521127">
	<div>
		<img src="https://disqus.com/api/users/avatars/moy2010.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3802521127">15</a> by moy2010
		posted on 3/14/2018 at 9:44 AM
		</div>
		<div class="comment_text"><p>Damn, it's hilarious to find someone else that experienced the same problem in pretty much the same way.</p><p>I was stucked on the last part (flash messages) and, after a long night, finally found your post. I cannot thank you enough for this, since I can go to sleep now thanks to you.</p><p>Thanks a lot, Raymond!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3803086026">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3803086026">16</a> (In reply to <a href="#c_3802521127">#15</a>) by Raymond Camden
		posted on 3/14/2018 at 12:54 PM
		</div>
		<div class="comment_text"><p>You are most welcome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3965096032">
	<div>
		<img src="https://disqus.com/api/users/avatars/bugler1.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3965096032">17</a> by bugler1
		posted on 6/28/2018 at 5:41 PM
		</div>
		<div class="comment_text"><p>Thank you very much.<br>Most people, specially those gurus out there, don't know how to explain things cause everything is so so easy for them that there is really nothing to expalin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3965102890">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3965102890">18</a> (In reply to <a href="#c_3965096032">#17</a>) by Raymond Camden
		posted on 6/28/2018 at 5:46 PM
		</div>
		<div class="comment_text"><p>You are very welcome. I am definitely not a guru myself!</p></div>
	</div>
</div>
		