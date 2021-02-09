
<div class="comment" id="c_4910338679">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_JtIfjto6FP.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4910338679">1</a> by Matt
		posted on 5/12/2020 at 1:17 AM
		</div>
		<div class="comment_text"><p>You can also set custom delimiters for VueJS</p><p>App.js:<br></p><pre><code><br>const app = new Vue({<br>  delimiters: ["${", "}"],<br>  el: "#app",<br>  data: {<br>    time: "to rock",<br>  },<br>});<br></code></pre><p></p><p>In template:<br></p><pre><code><br>&lt;div id="app"&gt;<br>  The time is ${ time }<br>&lt;/div&gt;</code></pre></div>
	</div>
</div>
		
<div class="comment" id="c_4910862690">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4910862690">2</a> (In reply to <a href="#c_4910338679">#1</a>) by Raymond Camden
		posted on 5/12/2020 at 1:21 PM
		</div>
		<div class="comment_text"><p>Yep, good suggestion!</p></div>
	</div>
</div>
		