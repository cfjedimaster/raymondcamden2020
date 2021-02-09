
<div class="comment" id="c_1713710793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710793">1</a> by Patrick
		posted on 12/17/2008 at 5:17 AM
		</div>
		<div class="comment_text"><p>Not sure this is directly related but is it possible to reset a div or cfdiv back to what was originally in it without it behind saved/bound in another file? For example I have a button that when you click it changes MYDIV to be bound to another page, but I also want to have a reset button that changes MYDIV back to its original contents, ie: &lt;cfdiv id="mydiv"&gt;stuff that was originally here&lt;/cfdiv&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710791">2</a> by Francois Levesque
		posted on 12/17/2008 at 5:40 PM
		</div>
		<div class="comment_text"><p>Patrick,</p><p>If you don't want to save the original contents in a file, you can always assign it's html content in a javascript variable.</p><p>i.e: var oldContents = document.getElementById( "booger" ).innerHTML;</p><p>or, with jQuery: var oldContents = $( "#booger" ).html();</p><p>then, with your reset, you could just reassign the contents to your div</p><p>document.getElementById( "booger" ).innerHTML = oldContents;</p><p>or</p><p>$( "#booger" ).html( oldContents );</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710789">3</a> by Yaron Kohn
		posted on 12/18/2008 at 12:31 AM
		</div>
		<div class="comment_text"><p>Wow...I actually knew something before Ray did. I shall remember this day....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710787">4</a> by Raymond Camden
		posted on 12/18/2008 at 12:34 AM
		</div>
		<div class="comment_text"><p>I actually knew this four years ago, I was just holding on to it until I had a slow blog day.</p><p>:P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710792">5</a> by Thiago Mambretti
		posted on 8/25/2009 at 10:54 PM
		</div>
		<div class="comment_text"><p>Ray, need your help!</p><p>I have a &lt;script&gt; on the page I'm loading using ColdFusion.navigate but it seems CF just ignore it when it posts the content on the containert I specified on the ColdFusion.navigate.</p><p>Is this the normal behavior? Is there a workaround? Or it's just me doing something wrong?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710794">6</a> by Raymond Camden
		posted on 8/26/2009 at 6:26 PM
		</div>
		<div class="comment_text"><p>Most likely you are running into the issue with Ajax-loaded content and JS. You can't define functions using function syntax on a page that is loaded via Ajax. You must create functions using this syntax:</p><p>foo = new function() { ..... }</p></div>
	</div>
</div>
		