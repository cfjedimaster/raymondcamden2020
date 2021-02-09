
<div class="comment" id="c_4854003417">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_M5K5oB3jTk.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4854003417">1</a> by Rlong
		posted on 3/30/2020 at 5:14 PM
		</div>
		<div class="comment_text"><p>Used this on one of my Vue components and it fixed the Async issue</p></div>
	</div>
</div>
		
<div class="comment" id="c_4854063243">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4854063243">2</a> (In reply to <a href="#c_4854003417">#1</a>) by Raymond Camden
		posted on 3/30/2020 at 5:52 PM
		</div>
		<div class="comment_text"><p>Thank you for letting me know it helped!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4897106322">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_rmhT1QsFfI.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4897106322">3</a> by m gh
		posted on 5/1/2020 at 1:20 PM
		</div>
		<div class="comment_text"><p>hi. i want to just say thank you. this issue solved my problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4897170271">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4897170271">4</a> (In reply to <a href="#c_4897106322">#3</a>) by Raymond Camden
		posted on 5/1/2020 at 2:15 PM
		</div>
		<div class="comment_text"><p>Thank you for letting me know, I really appreciate it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4972033882">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_canti.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4972033882">5</a> by Sergey Tarkhanov
		posted on 6/28/2020 at 8:56 PM
		</div>
		<div class="comment_text"><p>Photo super! Really like it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_5115892184">
	<div>
		<img src="https://disqus.com/api/users/avatars/danielgindi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5115892184">6</a> by Daniel Cohen Gindi
		posted on 10/19/2020 at 7:12 AM
		</div>
		<div class="comment_text"><p>*edit* I was mistaken, the use case here is not what I thought it was.</p><p>This is *not* the use case for $nextTick!<br>In order to know when the $refs are ready, you can set up a watch (`watch: { ['$refs.myForm']() { /* ref changed */ } }`).<br>Use $nextTick to do something after updating a value, waiting for the dom to update in response to your change.</p></div>
	</div>
</div>
		
<div class="comment" id="c_5116144714">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5116144714">7</a> (In reply to <a href="#c_5115892184">#6</a>) by Raymond Camden
		posted on 10/19/2020 at 1:25 PM
		</div>
		<div class="comment_text"><p>I'm sorry - but I don't understand your clarification. Your last sentence is exactly what I was doing. I updated a value (this.myAction). I then wanted to wait for the DOM to reflect that value. I do not see how what you are saying applies here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_5116284863">
	<div>
		<img src="https://disqus.com/api/users/avatars/danielgindi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5116284863">8</a> (In reply to <a href="#c_5116144714">#7</a>) by Daniel Cohen Gindi
		posted on 10/19/2020 at 3:20 PM
		</div>
		<div class="comment_text"><p>I’ll try to re-clarify:<br>In your example, you were not waiting for the DOM update as a consequence if the value update.<br>These are two separate things. Your value is not included in an “v-if” directive that would change the $refs.<br>And just a nextTick would not be the ultimate solution, as your method may be triggered from a button click where the $refs is already there, or it may not be there and $nextTick wont change that.<br>If you use the `watch` feature to know when your ref is available, and perform any pending action.</p></div>
	</div>
</div>
		
<div class="comment" id="c_5116287602">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5116287602">9</a> (In reply to <a href="#c_5116284863">#8</a>) by Raymond Camden
		posted on 10/19/2020 at 3:22 PM
		</div>
		<div class="comment_text"><p>How is not a DOM update? Maybe that's where I'm confused. If I have &lt;form :action="..."&gt; and I change the value for action, is that not updating the DOM?</p></div>
	</div>
</div>
		
<div class="comment" id="c_5116354696">
	<div>
		<img src="https://disqus.com/api/users/avatars/danielgindi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5116354696">10</a> (In reply to <a href="#c_5116287602">#9</a>) by Daniel Cohen Gindi
		posted on 10/19/2020 at 4:03 PM
		</div>
		<div class="comment_text"><p>Oh crap. Now I got you. For some reason I was caught on the $refs, like you were waiting for it to become available, while you were actually waiting for the action to update. My mistake. Apologizes :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_5116397216">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5116397216">11</a> (In reply to <a href="#c_5116354696">#10</a>) by Raymond Camden
		posted on 10/19/2020 at 4:35 PM
		</div>
		<div class="comment_text"><p>No worries - and I appreciate you reaching out. As it stands, I couldn't share the "original" demo and had to make a contrived version that probably didn't tell the best story.</p></div>
	</div>
</div>
		
<div class="comment" id="c_5155924993">
	<div>
		<img src="https://disqus.com/api/users/avatars/tufftruth.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5155924993">12</a> by TuffTruth
		posted on 11/18/2020 at 4:59 AM
		</div>
		<div class="comment_text"><p>Thanks. This really changed things for me!</p></div>
	</div>
</div>
		