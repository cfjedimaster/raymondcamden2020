
<div class="comment" id="c_3215304175">
	<div>
		<img src="https://disqus.com/api/users/avatars/viccekvenich.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3215304175">1</a> by Vic Cekvenich
		posted on 3/21/2017 at 4:31 PM
		</div>
		<div class="comment_text"><p>I have deployed a few static sites. Mostly it means you fetch data and bind. So API. Securing API is more work. <br>ps: Some ex, WIP <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Ftopseed%2Ftopseed-bp%3AqLyyI2VQkXXz-LlOmUPtSUwgstA&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/topseed/topseed-bp">https://github.com/topseed/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3215309189">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3215309189">2</a> (In reply to <a href="#c_3215304175">#1</a>) by Raymond Camden
		posted on 3/21/2017 at 4:34 PM
		</div>
		<div class="comment_text"><p>Ah good point. I did mention third party 'services', which are APIs of course, but I should have specifically called out APIs as well. You may have a static site on <a href="http://disq.us/url?url=http%3A%2F%2Falpha.foo.com%3AnPhhuk5o1e9U6XV1uvMs_rT-TvE&amp;cuid=3321886" rel="nofollow noopener" title="alpha.foo.com">alpha.foo.com</a> using an API you have running on <a href="http://disq.us/url?url=http%3A%2F%2Fbeta.foo.com%3AAnASwsePC-OtsyMJSYYGS088uhM&amp;cuid=3321886" rel="nofollow noopener" title="beta.foo.com">beta.foo.com</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3215394134">
	<div>
		<img src="https://disqus.com/api/users/avatars/sequoiamcdowell.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3215394134">3</a> by Sequoia M.
		posted on 3/21/2017 at 5:12 PM
		</div>
		<div class="comment_text"><p>What form processing tool do you use and how could that be an attack vector?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3215417686">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3215417686">4</a> (In reply to <a href="#c_3215394134">#3</a>) by Raymond Camden
		posted on 3/21/2017 at 5:17 PM
		</div>
		<div class="comment_text"><p>I'm using Formspree. Right now they validate by the referer and email address being sent to. That seems reasonably secure to me. But I at least thought about it before using it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3215427691">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3215427691">5</a> (In reply to <a href="#c_3215417686">#4</a>) by Raymond Camden
		posted on 3/21/2017 at 5:20 PM
		</div>
		<div class="comment_text"><p>I can see one way I could abuse this though. Formspree (and other form services) also allow for Ajax submissions. I'm not using that now, but imagine I was. I could then use the browser console to manipulate the function to *attempt* to send hundreds of emails to myself. Not sure what they (Formspree, etc) would do when that occurs, but its one way a person could attack.</p><p>Or heck - just script a Selenium thingy to run form fillers and submit a bunch. If I were paying per a certain level of responses, that would cost me $$.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3218101200">
	<div>
		<img src="https://disqus.com/api/users/avatars/viccekvenich.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3218101200">6</a> (In reply to <a href="#c_3215309189">#2</a>) by Vic Cekvenich
		posted on 3/22/2017 at 10:13 PM
		</div>
		<div class="comment_text"><p>Even running on same subdomain... you have to secure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3228817890">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3228817890">7</a> by jesse650
		posted on 3/29/2017 at 4:04 AM
		</div>
		<div class="comment_text"><p>Security should be built it. It should *not* be a checklist item.<br>If anything, the security items should be check at the start of a project.<br>If "security" is in the middle of the process, it is likely to be missed.<br>Any doubts on this last statement, them remember all the times you've<br>mis-spelt a word, and had to go back an correct it... sometimes months later.<br>Now exchange "word" with "security item".</p><p>On Unix/Linux/BSD systems you ALLWAYS need to check your file permissions.<br>If you have a collaborator, then 0664 else 0644.<br>On Windows/OSX it is a bit more labourious. Remember the issue is<br>who can and cannot edit the "flat file".</p><p>Database injections is but one vector of attach. If you require<br>dynamic data, a DBaaS (DataBase as a Service) works. Many LAMP and WAMP<br>systems work this way. There is a bit more pain in using the DB,<br>but the headache of running an online DB is reduced.</p><p>LAMP - Linux Apache Mysql PHP</p><p>WAMP - Windows Apache MsSQL PHP</p><p>With *nix, if you run your own server and someone breaks-in,<br>give them an account, buy them a beer and meet them in person.</p><p>With window, if you run your own server and someone breaks-in,<br>call M$ bitch an whine - they may give an M$ Admin Cert for free.</p><p>All the Best</p></div>
	</div>
</div>
		