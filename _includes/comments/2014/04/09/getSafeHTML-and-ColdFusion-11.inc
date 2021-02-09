
<div class="comment" id="c_1714082601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082601">1</a> by Henry Ho
		posted on 4/10/2014 at 11:57 PM
		</div>
		<div class="comment_text"><p>I hope getSafeHTML() doesn't use xmlSearch() to parse the "very complex XML file" on each call, otherwise it may not be thread safe: <a href="http://disq.us/url?url=http%3A%2F%2Fcfmlblog.adamcameron.me%2F2014%2F04%2Fye-olde-xmlsearche-bugge.html%3A29du-FU9Dd0vhfVU1hPpVywAepU&amp;cuid=3321886" rel="nofollow noopener" title="http://cfmlblog.adamcameron.me/2014/04/ye-olde-xmlsearche-bugge.html">http://cfmlblog.adamcameron...</a></p><p>Does the CF instance need a restart to pick up the changes made to the XML?</p><p>Thanks Ray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082598">2</a> by Raymond Camden
		posted on 4/11/2014 at 12:03 AM
		</div>
		<div class="comment_text"><p>I modified the XML file and the change was picked up immediately.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082600">3</a> by Markus
		posted on 4/21/2014 at 1:10 PM
		</div>
		<div class="comment_text"><p>Thanks for writing about this. <br>Would this function also check for user generated Content that contains JavaScript and checks for potentionaly harmful JavaScript functions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082599">4</a> by Raymond Camden
		posted on 4/21/2014 at 5:31 PM
		</div>
		<div class="comment_text"><p>I haven't tested it with JS, but I'd have to imagine the default is to strip ALL js. I can't imagine a scenario where you would want to allow JS. As an example, this blog lets you fake bold/italics for comments, which I think makes sense for user generated content. But I'd never allow JS here.</p><p>Of course - you *could* test this yourself and report back. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082602">5</a> by Markus
		posted on 4/21/2014 at 7:20 PM
		</div>
		<div class="comment_text"><p>Thanks for responding. I guess i'll have to Setup a box and test it :)</p><p>In a blog etc it would not make much sense to allow JS. But sites like "ebay" etc allow users to upload very complex html desciption for products that include js for e.g. nice Image switching etc. For that a good filter would be great to allow some js but not all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082604">6</a> by Raymond Camden
		posted on 4/21/2014 at 7:28 PM
		</div>
		<div class="comment_text"><p>Based on what I saw - it looks like the XML format for AntiSamy is VERY powerful, but I'd be shocked if it let you support JS and only certain functions. As it stands, in JS you can generate a function via a string, so if you blocked alert in the input string, I could still execute an alert by generating a function by hand.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082603">7</a> by Markus
		posted on 4/21/2014 at 7:45 PM
		</div>
		<div class="comment_text"><p>Right. That s what i am thinking.</p><p>Looking for something that could help me with the Task of securing JS in user generated Content ... ... Would have been to easy to have a function like getSaveHTML to solve my Problems *g</p></div>
	</div>
</div>
		