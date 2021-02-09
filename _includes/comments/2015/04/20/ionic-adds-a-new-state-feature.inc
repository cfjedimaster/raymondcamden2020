
<div class="comment" id="c_2402588311">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_W8OKHJl6BY.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2402588311">1</a> by Ajay Gupta
		posted on 12/10/2015 at 4:10 AM
		</div>
		<div class="comment_text"><p>@Raymond: As part of every mobile CI build within Hudson running on a Mac mini, "ionic state restore" takes a lot of time for us (about 8-10 minutes).  Is there a way it can cache the plugins somewhere and restore stuff from the cache first and only add/remove plugins that don't exist in the plugins directory to speed up the build time?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2403133277">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2403133277">2</a> (In reply to <a href="#c_2402588311">#1</a>) by Raymond Camden
		posted on 12/10/2015 at 2:41 PM
		</div>
		<div class="comment_text"><p>Hmm - you got me on that. Sorry but I have to punt. I'd ask this on the Ionic forums, and if you get a response, please let me know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2804189523">
	<div>
		<img src="https://disqus.com/api/users/avatars/sflomenb.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2804189523">3</a> by sflomenb
		posted on 7/26/2016 at 1:46 PM
		</div>
		<div class="comment_text"><p>Does 'ionic state clear' alter the package.json file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2804266147">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2804266147">4</a> (In reply to <a href="#c_2804189523">#3</a>) by Raymond Camden
		posted on 7/26/2016 at 2:32 PM
		</div>
		<div class="comment_text"><p>What happens when you try? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3102161638">
	<div>
		<img src="https://disqus.com/api/users/avatars/kingleroyg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3102161638">5</a> by LeRoy Gumede
		posted on 1/16/2017 at 1:21 PM
		</div>
		<div class="comment_text"><p>one would think cordova plugins gets installed when you run "npm install" but from experience it looks like it does not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3102192329">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3102192329">6</a> (In reply to <a href="#c_3102161638">#5</a>) by Raymond Camden
		posted on 1/16/2017 at 1:47 PM
		</div>
		<div class="comment_text"><p>Why would you think that? They aren't listed under dependencies.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3102204748">
	<div>
		<img src="https://disqus.com/api/users/avatars/kingleroyg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3102204748">7</a> (In reply to <a href="#c_3102192329">#6</a>) by LeRoy Gumede
		posted on 1/16/2017 at 1:57 PM
		</div>
		<div class="comment_text"><p>Your right (thumbsup)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3128049561">
	<div>
		<img src="https://disqus.com/api/users/avatars/claudioviola.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3128049561">8</a> by Claudio Viola
		posted on 1/30/2017 at 2:02 PM
		</div>
		<div class="comment_text"><p>Hello <a data-dsq-mention="cfjedimaster:disqus" href="https://disqus.com/by/cfjedimaster/" rel="nofollow noopener" title="https://disqus.com/by/cfjedimaster/">Raymond Camden</a> <br>Is it normal that in the package json in cordovaPlugins the version number of plugins is not stored?<br>I see stored the number version only in the config xml like this<br>&lt;plugin name="cordova-plugin-google-analytics" spec="~1.7.4"/&gt;</p><p>"~1.7.4" For my opinion in this way it's not good...<br>Because when I'll install the plugin in the future ionic'll install the latest version e not the specific. So I'm thinking to remove this "~" from config.xml<br>Or if exsist I could store the number version of plugins in package.json</p></div>
	</div>
</div>
		
<div class="comment" id="c_3128207054">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3128207054">9</a> (In reply to <a href="#c_3128049561">#8</a>) by Raymond Camden
		posted on 1/30/2017 at 3:38 PM
		</div>
		<div class="comment_text"><p>I honestly don't know. I don't think I've played with this for a while. I'd suggest filing a bug report (well, it may not be a bug, but it would be worthwhile to see if the *intent* was to store the version) on the Apache Cordova side.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3375904965">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_YB8QsZDsgK.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3375904965">10</a> by Ganesh Rajan
		posted on 6/21/2017 at 10:31 AM
		</div>
		<div class="comment_text"><p>Seems like this commands are outdated. I'm getting the below error when i try to save the state. "Unable to find command: state save"</p></div>
	</div>
</div>
		
<div class="comment" id="c_3376108220">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3376108220">11</a> (In reply to <a href="#c_3375904965">#10</a>) by Raymond Camden
		posted on 6/21/2017 at 12:33 PM
		</div>
		<div class="comment_text"><p>Always check the dates of posts - this is over two years old now. :)</p></div>
	</div>
</div>
		