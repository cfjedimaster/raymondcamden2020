
<div class="comment" id="c_4410535744">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4410535744">1</a> by Tarık
		posted on 4/5/2019 at 11:00 AM
		</div>
		<div class="comment_text"><p>Hi, How can we get the values?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4410745040">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4410745040">2</a> (In reply to <a href="#c_4410535744">#1</a>) by Raymond Camden
		posted on 4/5/2019 at 2:18 PM
		</div>
		<div class="comment_text"><p>You mean values passed to the components? The same you do in any other component.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4433681336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4433681336">3</a> (In reply to <a href="#c_4410745040">#2</a>) by Tarık
		posted on 4/22/2019 at 6:01 PM
		</div>
		<div class="comment_text"><p>How can I reach the values we entered when submitting the form. Can I assign these values to the model we have defined?<br>such as:<br><code><br>const app = new Vue({<br>  el:'#app',<br>  data() {<br>    return {<br>      fields:[...],<br>      values:[]<br>    }<br>  },<br>methods:{<br>  submit(){<br>    this.values = // Get all values<br>  }<br>}<br>})<br></code></p></div>
	</div>
</div>
		
<div class="comment" id="c_4433710715">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4433710715">4</a> (In reply to <a href="#c_4433681336">#3</a>) by Raymond Camden
		posted on 4/22/2019 at 6:24 PM
		</div>
		<div class="comment_text"><p>In your component, you can do @change to run an method that will emit the new value. Let me mock up an example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4434637159">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4434637159">5</a> (In reply to <a href="#c_4433681336">#3</a>) by Raymond Camden
		posted on 4/23/2019 at 1:03 PM
		</div>
		<div class="comment_text"><p>Check out this version - <a href="https://disq.us/url?url=https%3A%2F%2Fcodepen.io%2Fcfjedimaster%2Fpen%2Fmgjzzb%3AG_IGQ7yOyxoVt1zIFpQ5mI9F9aM&amp;cuid=3321886" rel="nofollow noopener" title="https://codepen.io/cfjedimaster/pen/mgjzzb">https://codepen.io/cfjedima...</a>. Basically I v-model to a value field in the fields array (only the first two have that), and then emit an input event so the v-model knows when the value has changed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4437460006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4437460006">6</a> (In reply to <a href="#c_4433710715">#4</a>) by Tarık
		posted on 4/25/2019 at 12:51 PM
		</div>
		<div class="comment_text"><p>Thanks for the help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4549788316">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Y8DnY0AIxu.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4549788316">7</a> by Anil
		posted on 7/23/2019 at 12:53 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I am amazed to look it working in my real form in one of my project. Thanks. But I do not see a way an don't know how to show pre selected values in select box and radios. I mean typically when user select field and saves value and reservists the form for editing it the other day. How can I show the values one had selected earlier.</p><p>Say for example user inputs the following:</p><p>name: ray<br>email: ray2@email<br>Movies: Bb<br>Food: Cc</p><p>Then How to Show a form populated by the earlier selected fields.<br>Thanks in advance.</p><p>Regards<br>Anil</p></div>
	</div>
</div>
		
<div class="comment" id="c_4554732362">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4554732362">8</a> (In reply to <a href="#c_4549788316">#7</a>) by Raymond Camden
		posted on 7/26/2019 at 6:49 PM
		</div>
		<div class="comment_text"><p>I got close. The only thing not working is the INITIAL value for the radio selection. After you select it seems to bind fine.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fcodepen.io%2Fcfjedimaster%2Fpen%2FKONpJP%3Feditors%3D1111%3ApvvXsjPCQ15z7c_tzP4uPTqdnW8&amp;cuid=3321886" rel="nofollow noopener" title="https://codepen.io/cfjedimaster/pen/KONpJP?editors=1111">https://codepen.io/cfjedima...</a></p><p>Based on this doc - <a href="https://disq.us/url?url=https%3A%2F%2Fvuejs.org%2Fv2%2Fguide%2Fcomponents.html%23Using-v-model-on-Components%3Ae7rKL5use8lC9V6AD-0JBIDhgAw&amp;cuid=3321886" rel="nofollow noopener" title="https://vuejs.org/v2/guide/components.html#Using-v-model-on-Components">https://vuejs.org/v2/guide/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_4555391253">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Y8DnY0AIxu.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4555391253">9</a> (In reply to <a href="#c_4554732362">#8</a>) by Anil
		posted on 7/27/2019 at 9:49 AM
		</div>
		<div class="comment_text"><p>Now, this is working perfectly well!</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fcodepen.io%2Fmtech2008%2Fpen%2FzgodYa%3AY03Q1reQOLeQXJKTCJ0Bof_5wzc&amp;cuid=3321886" rel="nofollow noopener" title="https://codepen.io/mtech2008/pen/zgodYa">https://codepen.io/mtech200...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_4557669649">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4557669649">10</a> (In reply to <a href="#c_4555391253">#9</a>) by Raymond Camden
		posted on 7/29/2019 at 12:49 PM
		</div>
		<div class="comment_text"><p>Woot! Great job!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4668433551">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_0my0woSdsJ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4668433551">11</a> by jason b
		posted on 10/28/2019 at 9:02 AM
		</div>
		<div class="comment_text"><p>This is awesome, thank-you so much for sharing.<br>Have been scratching my head for hours trying to work out how to dynamically assign a component type while looping through an array ....... discovered your post &amp; BOOM!<br>Now onto working out how to use compute to with this technique to assign the component based on some conditional logic ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4668656488">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4668656488">12</a> (In reply to <a href="#c_4668433551">#11</a>) by Raymond Camden
		posted on 10/28/2019 at 1:53 PM
		</div>
		<div class="comment_text"><p>Glad it helped you!</p></div>
	</div>
</div>
		