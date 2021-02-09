
<div class="comment" id="c_2166576368">
	<div>
		<img src="https://disqus.com/api/users/avatars/jefftennenbaum.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2166576368">1</a> by Jeff Tennenbaum
		posted on 7/31/2015 at 4:39 AM
		</div>
		<div class="comment_text"><p>Another awesome post.  Recently when attempting to call an MFP adapter following your approach I noticed that when I called the adapter I was receiving</p><p> TypeError: <br>Cannot use 'in' operator to search for 'SUPPORT_OAUTH' in null<br>    at Object.WL.EnvProfile.isEnabled (worklight.js:4426).</p><p> I was able to get past this issue by bootstrapping angular in my wlCommonInit function:</p><p>console.log("Bootstrapping angular");<br>	angular.element(document).ready(function() {<br>		angular.bootstrap(document, ['myMFPApp']);<br>	});</p><p>and removing the ng-app directive in the &lt;body&gt; tag.  Not sure if this was just a one-off, but in case anyone else hits this I figured I'd share.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2170563145">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2170563145">2</a> (In reply to <a href="#c_2166576368">#1</a>) by Raymond Camden
		posted on 8/2/2015 at 4:33 PM
		</div>
		<div class="comment_text"><p>I've modified my approach to Ionic+MFP a few times, but in general, I now lean on my coworker Carlos' Github templates for it, <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcsantanapr%2Fmfp-ionic-templates%3ANGtd6nPbdFE7MoWei_YUnZv8uXY&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/csantanapr/mfp-ionic-templates">https://github.com/csantana...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2594973728">
	<div>
		<img src="https://disqus.com/api/users/avatars/kamedan.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2594973728">3</a> by kamedan
		posted on 3/29/2016 at 3:30 PM
		</div>
		<div class="comment_text"><p>is there a full example using a backend service with GET, POST, PUT and DELETE methods ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2596724103">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2596724103">4</a> (In reply to <a href="#c_2594973728">#3</a>) by Raymond Camden
		posted on 3/30/2016 at 1:15 PM
		</div>
		<div class="comment_text"><p>Not aware of one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3412521786">
	<div>
		<img src="https://disqus.com/api/users/avatars/veeravel.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3412521786">5</a> by veeravel
		posted on 7/12/2017 at 6:33 AM
		</div>
		<div class="comment_text"><p>can u please tell me how to use this in ionic 1 ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3417309675">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3417309675">6</a> (In reply to <a href="#c_3412521786">#5</a>) by Raymond Camden
		posted on 7/14/2017 at 11:11 PM
		</div>
		<div class="comment_text"><p>I'm pretty sure I used Ionic 1 in this demo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3749900100">
	<div>
		<img src="https://disqus.com/api/users/avatars/chakriamar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3749900100">7</a> by chakri amar
		posted on 2/9/2018 at 6:34 AM
		</div>
		<div class="comment_text"><p>Is there any example for POST methods?..</p></div>
	</div>
</div>
		
<div class="comment" id="c_3750250488">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3750250488">8</a> (In reply to <a href="#c_3749900100">#7</a>) by Raymond Camden
		posted on 2/9/2018 at 2:07 PM
		</div>
		<div class="comment_text"><p>Sorry - I haven't used MobileFirst in years.</p></div>
	</div>
</div>
		