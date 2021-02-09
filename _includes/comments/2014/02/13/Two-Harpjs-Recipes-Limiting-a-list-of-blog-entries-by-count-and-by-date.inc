
<div class="comment" id="c_2581022590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2581022590">1</a> by Emma
		posted on 3/21/2016 at 10:31 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>Love your blog and learned a lot about Harp and EJS, but working with a new team of people and they use Jade, is there an easy way of converting EJS to Jade or is it not possible? Sorry for the n00b question still new to all of this :)</p><p>Keep up the fantastic work!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2581224419">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2581224419">2</a> (In reply to <a href="#c_2581022590">#1</a>) by Raymond Camden
		posted on 3/21/2016 at 1:47 PM
		</div>
		<div class="comment_text"><p>That's not a bad question, but unfortunately, there is no easy way to convert. You can *absolutely* do it by hand, in other words, there isn't something special about EJS that you would not be able to do in Jade, but you won't be able to convert automagically.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2864792423">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_jqgIYNWHKK.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2864792423">3</a> by laurent
		posted on 8/29/2016 at 5:56 AM
		</div>
		<div class="comment_text"><p>@Emma this is it !</p><p>h2 Last 10<br>Ol<br>    - var keys = Object.keys(public.articles._data);<br>    - for(var i = 0; i &lt; Math.min(10,keys.length); i++) {<br>    li: a(href="/articles/#{ keys[i] }.html")= public.articles._data[keys[i]].title<br>    - }</p><p>don't forget tabulation !</p><p><a data-dsq-mention="cfjedimaster:disqus" href="https://disqus.com/by/cfjedimaster/" rel="nofollow noopener" title="https://disqus.com/by/cfjedimaster/">Raymond Camden</a>  Thanks a lot, you made my day</p></div>
	</div>
</div>
		