
<div class="comment" id="c_4799248933">
	<div>
		<img src="https://disqus.com/api/users/avatars/ryanmcgovern.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4799248933">1</a> by Ryan McGovern
		posted on 2/17/2020 at 4:57 PM
		</div>
		<div class="comment_text"><p>Isn't dragover just to prevent the file from opening in your browser window?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4799250941">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4799250941">2</a> (In reply to <a href="#c_4799248933">#1</a>) by Raymond Camden
		posted on 2/17/2020 at 4:59 PM
		</div>
		<div class="comment_text"><p>I believe so - yes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4865333440">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_vu10E1Roq6.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4865333440">3</a> by Andrew Elliott
		posted on 4/7/2020 at 11:11 PM
		</div>
		<div class="comment_text"><p>It's a good idea to use <code>const </code>instead of <code>let</code> unless you know a variable needs to be re-assigned. This helps avoid accidental re-assignment.</p><p>Also you should be able to simplify this</p><p><code> ([...droppedFiles]).forEach(f =&gt; {<br>        this.files.push(f);<br>      });</code></p><p>to this:</p><p><code><br>this.files.push(...droppedFiles)<br></code></p></div>
	</div>
</div>
		
<div class="comment" id="c_4865367223">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4865367223">4</a> (In reply to <a href="#c_4865333440">#3</a>) by Raymond Camden
		posted on 4/7/2020 at 11:44 PM
		</div>
		<div class="comment_text"><p>Thanks - I still struggle a bit w/ let versus const.</p></div>
	</div>
</div>
		
<div class="comment" id="c_5027550020">
	<div>
		<img src="https://disqus.com/api/users/avatars/uditchourasia.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5027550020">5</a> by Udit Chourasia
		posted on 8/12/2020 at 1:47 PM
		</div>
		<div class="comment_text"><p>Thank you so much! Its too good. Mainly its very simple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_5035292631">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_LjTKrsc1py.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5035292631">6</a> by NM
		posted on 8/18/2020 at 3:21 PM
		</div>
		<div class="comment_text"><p>Can't wait to give this demo a try. Just wanted to say thanks for writing it and I'll report back if I have any issues.</p></div>
	</div>
</div>
		
<div class="comment" id="c_5036386223">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_LjTKrsc1py.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5036386223">7</a> by NM
		posted on 8/19/2020 at 9:51 AM
		</div>
		<div class="comment_text"><p>This was great. Can you take it a step further and implement some kind of "preview" image before uploading? Right now it just shows file names. Then, add a spinner or progress bar. Thanks for your time!</p></div>
	</div>
</div>
		
<div class="comment" id="c_5036455442">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5036455442">8</a> (In reply to <a href="#c_5036386223">#7</a>) by Raymond Camden
		posted on 8/19/2020 at 11:37 AM
		</div>
		<div class="comment_text"><p>Does this help? <a href="https://disq.us/url?url=https%3A%2F%2Fwww.raymondcamden.com%2F2020%2F03%2F05%2Fvue-quick-shot-image-upload-previews%3AyXsTl_I3hbNbfrEcGs5hh7HTGtQ&amp;cuid=3321886" rel="nofollow noopener" title="https://www.raymondcamden.com/2020/03/05/vue-quick-shot-image-upload-previews">https://www.raymondcamden.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_5036572924">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_LjTKrsc1py.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5036572924">9</a> (In reply to <a href="#c_5036455442">#8</a>) by NM
		posted on 8/19/2020 at 1:40 PM
		</div>
		<div class="comment_text"><p>Wow! Let me check it out when able. Thanks again, Ray!</p></div>
	</div>
</div>
		