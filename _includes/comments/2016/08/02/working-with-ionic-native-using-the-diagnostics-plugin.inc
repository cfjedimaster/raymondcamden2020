
<div class="comment" id="c_2819717837">
	<div>
		<img src="https://disqus.com/api/users/avatars/Heshyo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2819717837">1</a> by Heshyo
		posted on 8/4/2016 at 12:47 AM
		</div>
		<div class="comment_text"><p>This is nice to have, and indeed the name "diagnostic" may not be that appropriate. Reading the title of your post, I thought it were about debugging performance issues!</p><p>The info on whether push notifications are enabled or not is nice, but iOS only.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2876074114">
	<div>
		<img src="https://disqus.com/api/users/avatars/runfastwebmaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2876074114">2</a> by Runfast Webmaster
		posted on 9/4/2016 at 5:34 PM
		</div>
		<div class="comment_text"><p>Sorry Raymond but the plugin does not open the settings.<br>We get a error in typescript saying: Property 'switchToSettings' does not exist on type 'typeof Diagnostic'.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2876099193">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2876099193">3</a> (In reply to <a href="#c_2876074114">#2</a>) by Raymond Camden
		posted on 9/4/2016 at 5:52 PM
		</div>
		<div class="comment_text"><p>Two things - either the Ionic Native plugin is broken in it's "wrapping" of the Diagnostics plugin, or the Diagnostics plugin itself is broken. Dig a bit deeper, find which it is, and then report the bug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2876190840">
	<div>
		<img src="https://disqus.com/api/users/avatars/runfastwebmaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2876190840">4</a> (In reply to <a href="#c_2876099193">#3</a>) by Runfast Webmaster
		posted on 9/4/2016 at 7:01 PM
		</div>
		<div class="comment_text"><p>I've already check the ts file and the file is very short, no trace of the switchTosettings function..</p></div>
	</div>
</div>
		
<div class="comment" id="c_2877276516">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2877276516">5</a> (In reply to <a href="#c_2876190840">#4</a>) by Raymond Camden
		posted on 9/5/2016 at 2:18 PM
		</div>
		<div class="comment_text"><p>Then it appears to be a bug in Ionic Native, so file a bug in their repo please.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2877805800">
	<div>
		<img src="https://disqus.com/api/users/avatars/runfastwebmaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2877805800">6</a> (In reply to <a href="#c_2877276516">#5</a>) by Runfast Webmaster
		posted on 9/5/2016 at 8:03 PM
		</div>
		<div class="comment_text"><p>I did it..<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fdriftyco%2Fionic-native%2Fissues%2F530%3A6_WMNqP6zLZIfg5t6TR2LfUGVcM&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/driftyco/ionic-native/issues/530">https://github.com/driftyco...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2878168147">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2878168147">7</a> (In reply to <a href="#c_2877805800">#6</a>) by Raymond Camden
		posted on 9/6/2016 at 12:46 AM
		</div>
		<div class="comment_text"><p>Good job. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3318303093">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_GDGO3DD4MT.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3318303093">8</a> by Web Expert
		posted on 5/22/2017 at 3:40 AM
		</div>
		<div class="comment_text"><p>Hello Raymond<br>I'd like to use custom plugin ionic native plugin doesn't have.<br>e.g. <br><a href="https://disq.us/url?url=https%3A%2F%2Fwww.npmjs.com%2Fpackage%2Fcordova-plugin-baidupush%3At9QRgOfF7oLW3WudluIlb_U9x9A&amp;cuid=3321886" rel="nofollow noopener" title="https://www.npmjs.com/package/cordova-plugin-baidupush">https://www.npmjs.com/packa...</a><br>Is there any helpful tip for this?<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_3318620730">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3318620730">9</a> (In reply to <a href="#c_3318303093">#8</a>) by Raymond Camden
		posted on 5/22/2017 at 11:29 AM
		</div>
		<div class="comment_text"><p>Ionic Native basically provides a 'nice way' to use these plugins. It is *not* required. You can still add the plugin to your code and reference the plugin in your JS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3369567610">
	<div>
		<img src="https://disqus.com/api/users/avatars/nosakhareendurance.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3369567610">10</a> by Nosakhare Endurance
		posted on 6/19/2017 at 3:05 PM
		</div>
		<div class="comment_text"><p>Hey Raymond can you please do that for asking GPS location??</p></div>
	</div>
</div>
		
<div class="comment" id="c_3369700167">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3369700167">11</a> (In reply to <a href="#c_3369567610">#10</a>) by Raymond Camden
		posted on 6/19/2017 at 4:28 PM
		</div>
		<div class="comment_text"><p>I'm not really doing a lot of Ionic demos right now - sorry.</p></div>
	</div>
</div>
		