
<div class="comment" id="c_3888841848">
	<div>
		<img src="https://disqus.com/api/users/avatars/antoinemoulin.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3888841848">1</a> by Antoine Moulin
		posted on 5/6/2018 at 10:49 PM
		</div>
		<div class="comment_text"><p>Hi. It's great. But how can you get the id of film ?<br>I tryed v-bind={id=<a href="http://disq.us/url?url=http%3A%2F%2Ffilm.id%3AhAQ9LEzTbgUABoIkjvUXuAz4s00&amp;cuid=3321886" rel="nofollow noopener" title="film.id">film.id</a>, nom=film.nom) in option but v-model of input don't catch bind of option</p></div>
	</div>
</div>
		
<div class="comment" id="c_3889558601">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3889558601">2</a> (In reply to <a href="#c_3888841848">#1</a>) by Raymond Camden
		posted on 5/7/2018 at 2:15 PM
		</div>
		<div class="comment_text"><p>Unfortunately, datalists are tied to a text field which can only hold string information. You would want to use it in cases where you *know* the label (film title for ex) is 100% unique. You could then do a look up to get the ID.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4332751608">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_LjTKrsc1py.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4332751608">3</a> by NM
		posted on 2/11/2019 at 7:56 PM
		</div>
		<div class="comment_text"><p>Thanks for making this tutorial. Unfortunately, it looks like we can't use hyperlinks in the datalist options? I wanted to not only show the data, but also make them clickable to their respect pages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4332761785">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4332761785">4</a> (In reply to <a href="#c_4332751608">#3</a>) by Raymond Camden
		posted on 2/11/2019 at 8:02 PM
		</div>
		<div class="comment_text"><p>See the comment below - the values can only be strings and since the selected values go into an input box, you can't have rendered HTML there. I'd look for more of a Vue autocomplete type control.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4445523907">
	<div>
		<img src="https://disqus.com/api/users/avatars/tufftruth.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4445523907">5</a> by TuffTruth
		posted on 5/1/2019 at 6:53 PM
		</div>
		<div class="comment_text"><p>Didn't work for me. As soon as I bound the model to the input control, the autocomplete stopped working</p></div>
	</div>
</div>
		
<div class="comment" id="c_4445528383">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4445528383">6</a> (In reply to <a href="#c_4445523907">#5</a>) by Raymond Camden
		posted on 5/1/2019 at 6:57 PM
		</div>
		<div class="comment_text"><p>Can you share the URL so I can try?</p></div>
	</div>
</div>
		
<div class="comment" id="c_5072376725">
	<div>
		<img src="https://disqus.com/api/users/avatars/exetico.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5072376725">7</a> (In reply to <a href="#c_4445523907">#5</a>) by exetico
		posted on 9/16/2020 at 6:27 AM
		</div>
		<div class="comment_text"><p>Use <a href="https://disq.us/url?url=https%3A%2F%2Fswapi.dev%2Fapi%2Ffilms%2F%3AsDTTdq57WMpwLOJ29zw1sYo_WPU&amp;cuid=3321886" rel="nofollow noopener" title="https://swapi.dev/api/films/">https://swapi.dev/api/films/</a> instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_5072642441">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5072642441">8</a> (In reply to <a href="#c_5072376725">#7</a>) by Raymond Camden
		posted on 9/16/2020 at 12:58 PM
		</div>
		<div class="comment_text"><p>CodePen is updated. Blog post is updated but will need about 5 more minutes before live. Thanks.</p></div>
	</div>
</div>
		