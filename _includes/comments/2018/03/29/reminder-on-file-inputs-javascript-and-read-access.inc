
<div class="comment" id="c_3830184232">
	<div>
		<img src="https://disqus.com/api/users/avatars/simevidas.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3830184232">1</a> by Šime Vidas
		posted on 3/29/2018 at 5:29 PM
		</div>
		<div class="comment_text"><p>Luckily, while the web app does have access to the first-selected file permanently (i.e., even after the user selects a different file or clears the file input), that file is only a copy of the original file on the user’s disk.</p><p>For example, if you select an image via a file input and then edit the image locally, the web app will not have access to that updated image, but only to the version of the image at the time when you selected it in the web app (I checked [1]).</p><p><strong>Update:</strong> Wait a second, In Chrome it actually does. What?! The web app has access to the latest version of the file on the user’s disk, regardless of the value of the file input. This is not good!</p><p>[1]: <a href="https://disq.us/url?url=https%3A%2F%2Fcodepen.io%2Fsimevidas%2Fpen%2FZxrNWE%3Feditors%3D0010%3AxZgv8TF-VW5rbErOBAfoE1N7upM&amp;cuid=3321886" rel="nofollow noopener" title="https://codepen.io/simevidas/pen/ZxrNWE?editors=0010">https://codepen.io/simevida...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3830200960">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3830200960">2</a> (In reply to <a href="#c_3830184232">#1</a>) by Raymond Camden
		posted on 3/29/2018 at 5:39 PM
		</div>
		<div class="comment_text"><p>What happens if I select foo.gif, edit it locally, then select it again the file input? (Although as we discussed before, it won't fire a change event, so pretend we selected goo.gif on the second time, and foo on the third).</p></div>
	</div>
</div>
		
<div class="comment" id="c_3830201755">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3830201755">3</a> (In reply to <a href="#c_3830200960">#2</a>) by Raymond Camden
		posted on 3/29/2018 at 5:39 PM
		</div>
		<div class="comment_text"><p>Sorry - didn't see your update. But if FF does what you say, then I'd be interested in knowing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3830290409">
	<div>
		<img src="https://disqus.com/api/users/avatars/simevidas.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3830290409">4</a> (In reply to <a href="#c_3830200960">#2</a>) by Šime Vidas
		posted on 3/29/2018 at 6:32 PM
		</div>
		<div class="comment_text"><p>When I select the same file repeatedly in Firefox (Nightly), the change event fires and I get the latest (edited) version. In Chrome, if I select a different file and then the first file again, I also get the edited version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3830316855">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3830316855">5</a> (In reply to <a href="#c_3830290409">#4</a>) by Raymond Camden
		posted on 3/29/2018 at 6:48 PM
		</div>
		<div class="comment_text"><p>Cool. If you store a variable for each instance (like I did in my CodePen), are they all pointers to the *final* version or do they stay as they were when read?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3830336251">
	<div>
		<img src="https://disqus.com/api/users/avatars/simevidas.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3830336251">6</a> (In reply to <a href="#c_3830316855">#5</a>) by Šime Vidas
		posted on 3/29/2018 at 7:00 PM
		</div>
		<div class="comment_text"><p>From my testing, in Firefox the file reference points to a copy of the file (in Firefox’s memory, I presume) which was created at the moment the user selected it (so, it’s *not* the edited version), whereas in Chrome the reference points directly the the file on the user’s disk (via a proxy object, I guess), since you can access the latest version of the file at any time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3830374492">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3830374492">7</a> (In reply to <a href="#c_3830336251">#6</a>) by Raymond Camden
		posted on 3/29/2018 at 7:24 PM
		</div>
		<div class="comment_text"><p>Thank you for investigating this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3830376134">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3830376134">8</a> (In reply to <a href="#c_3830336251">#6</a>) by Raymond Camden
		posted on 3/29/2018 at 7:25 PM
		</div>
		<div class="comment_text"><p>Thinking randomly here. What if the front end passed the variable to a service worker. Could then the browser "watch" the file even when you aren't on the page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3831032019">
	<div>
		<img src="https://disqus.com/api/users/avatars/simevidas.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3831032019">9</a> (In reply to <a href="#c_3830376134">#8</a>) by Šime Vidas
		posted on 3/30/2018 at 3:20 AM
		</div>
		<div class="comment_text"><p>I haven’t started testing with service workers yet, but I’m going to assume yes :) (<code>postMessage</code> supports <code>File</code> objects—the passed file would be a deep clone, but it should still be linked to the same file on the user’s disk).</p></div>
	</div>
</div>
		