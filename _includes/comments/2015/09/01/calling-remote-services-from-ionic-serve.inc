
<div class="comment" id="c_2230515000">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2230515000">1</a> by Raymond Camden
		posted on 9/1/2015 at 7:31 PM
		</div>
		<div class="comment_text"><p>I considered mentioning this in the blog entry itself, but decided against it at the last minute. I thought I'd mention it here though. Chrome let's you pass a startup flag to allow for remote XHR requests: <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F17679399%2Fdoes-disable-web-security-work-in-chrome-anymore%3ARJ1vreh1DyF98t1dmhOJq27Pbwo&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/17679399/does-disable-web-security-work-in-chrome-anymore">http://stackoverflow.com/qu...</a>. You would need to ensure you did that before you ran ionic serve though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2231857359">
	<div>
		<img src="https://disqus.com/api/users/avatars/dmastag.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2231857359">2</a> by Julian
		posted on 9/2/2015 at 2:04 PM
		</div>
		<div class="comment_text"><p>Recently I found the <a href="http://disq.us/url?url=http%3A%2F%2Fcrossorigin.me%3AmleicBkDjLnKSkxxHMI6GM24LZw&amp;cuid=3321886" rel="nofollow noopener" title="crossorigin.me">crossorigin.me</a> website which I think is worth mentioning. I usually use a variable named baseURL and make the value be <a href="http://disq.us/url?url=http%3A%2F%2Fcrossorigin.me%2Fhttp%3A%2F%2Ftarget.web.site%3Afc7CYLCGCVcmhd957cn1tNUP0Aw&amp;cuid=3321886" rel="nofollow noopener" title="http://crossorigin.me/http://target.web.site">http://crossorigin.me/http:...</a> and change that during production.</p><p>Sadly it does not work for POST.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2231982530">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2231982530">3</a> (In reply to <a href="#c_2231857359">#2</a>) by Raymond Camden
		posted on 9/2/2015 at 3:15 PM
		</div>
		<div class="comment_text"><p>That's a pretty cool service. Thank you for sharing it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2647135168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2647135168">4</a> (In reply to <a href="#c_2231857359">#2</a>) by Hemal Gondaliya
		posted on 4/28/2016 at 11:55 AM
		</div>
		<div class="comment_text"><p>but with this proxy when i trying to get image file if shows me internal server error 500, and its return type is always document</p></div>
	</div>
</div>
		
<div class="comment" id="c_2647242690">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2647242690">5</a> (In reply to <a href="#c_2647135168">#4</a>) by Raymond Camden
		posted on 4/28/2016 at 1:19 PM
		</div>
		<div class="comment_text"><p>The proxy was meant for data-centric APIs. You should file a bug/ER with Ionic to suggest they support binary data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2757116144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2757116144">6</a> by ali
		posted on 6/29/2016 at 6:18 PM
		</div>
		<div class="comment_text"><p><a href="https://disq.us/url?url=https%3A%2F%2Fcrossorigin.me%2F%3A3jLNl9Q0N3IC9wPXGExLsadpJYE&amp;cuid=3321886" rel="nofollow noopener" title="https://crossorigin.me/">https://crossorigin.me/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3206792543">
	<div>
		<img src="https://disqus.com/api/users/avatars/narayannyaupane.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3206792543">7</a> (In reply to <a href="#c_2230515000">#1</a>) by Narayan Nyaupane
		posted on 3/16/2017 at 8:21 AM
		</div>
		<div class="comment_text"><p>I have used proxies in my project in this way <br>ionic.project:<br>{<br>  "name": "UNDP-App",<br>  "app_id": "",<br>  "proxies":[<br>    {<br>    "path":"/api",<br>    "proxyUrl":"http://192.168.0.109/urautodeals/public/api"<br>  }<br>  ]<br>}<br>but when I run the command : ionic serve --lab<br>It does not load the proxy as shown in figure <a href="https://uploads.disquscdn.com/images/0c3c82ca7f91cbd170fc038836375a950cdb1bac204f6cab8e92822511f79e23.jpg" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/0c3c82ca7f91cbd170fc038836375a950cdb1bac204f6cab8e92822511f79e23.jpg">https://uploads.disquscdn.c...</a> <br>What may be the problem??</p></div>
	</div>
</div>
		
<div class="comment" id="c_3207179382">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3207179382">8</a> (In reply to <a href="#c_3206792543">#7</a>) by Raymond Camden
		posted on 3/16/2017 at 2:33 PM
		</div>
		<div class="comment_text"><p>Not sure. Ensure you are running the most recent version of the CLI, and if it still doesn't work, report the bug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3242530197">
	<div>
		<img src="https://disqus.com/api/users/avatars/narayannyaupane.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3242530197">9</a> (In reply to <a href="#c_3207179382">#8</a>) by Narayan Nyaupane
		posted on 4/6/2017 at 8:14 AM
		</div>
		<div class="comment_text"><p>ok thanks Raymond Camden</p></div>
	</div>
</div>
		