
<div class="comment" id="c_1713666197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666197">1</a> by Phillip Senn
		posted on 6/2/2007 at 6:18 PM
		</div>
		<div class="comment_text"><p>This was one of the features mentioned in the 1 hour free "ColdFusion 8 Beta Preview" at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.lynda.com%3ABiCYT10cKC4PzyWnvFopu2BhKwY&amp;cuid=3321886" rel="nofollow noopener" title="www.lynda.com">www.lynda.com</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666204">2</a> by Raymond Camden
		posted on 6/2/2007 at 6:23 PM
		</div>
		<div class="comment_text"><p>Errrr.... and? Or are you just letting folks know about the free preview?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666210">3</a> by O?uz Demirkap?
		posted on 6/2/2007 at 9:33 PM
		</div>
		<div class="comment_text"><p>If you have your MySQL on a Linux box and would like to have Unicode support, you still need to use the old method to define your DSN.</p><p>This is the JDBC URL which is created by default: "jdbc:mysql://localhost:3306/mydatabase?"</p><p>It must be like "jdbc:mysql://localhost:3306/mydatabase??useUnicode=true&amp;characterEncoding=UTF-8 "</p><p>You can find detailed instructions MySQL installation as manual on page: <a href="http://disq.us/url?url=http%3A%2F%2Fhowtoforge.com%2Fcoldfusion7_mysql4.1_connection%3AZ858nJfH16sogSS_jcEg654yd9M&amp;cuid=3321886" rel="nofollow noopener" title="http://howtoforge.com/coldfusion7_mysql4.1_connection">http://howtoforge.com/coldf...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666207">4</a> by Emmet
		posted on 6/2/2007 at 9:47 PM
		</div>
		<div class="comment_text"><p>speaking of...  we recently knocked out some mysql sites on one of our servers when we did the 7.02 upgrade.  woops.  What a pain to manually upgrade each sites driver.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666205">5</a> by Lars
		posted on 6/2/2007 at 11:06 PM
		</div>
		<div class="comment_text"><p>"If you have your MySQL on a Linux box and would like to have Unicode support, you still need to use the old method to define your DSN."</p><p>Not true.  Just create a datasource with the new driver marked MySQL 4/5 and then add the options useUnicode=true&amp;characterEncoding=UTF-8 to the Connection String field.  The options automatically get appended to the JDBC URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666208">6</a> by J.J. Merrick
		posted on 6/3/2007 at 3:18 AM
		</div>
		<div class="comment_text"><p>It was one of the first things I noticed since I screwed up and deleted all my settings and had to add my DSN back... I was like YES native 4/5 support.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666209">7</a> by Roberto
		posted on 6/3/2007 at 5:54 PM
		</div>
		<div class="comment_text"><p>Support for PostgreSQL is built-in too?</p><p>Rob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666206">8</a> by Raymond Camden
		posted on 6/3/2007 at 6:02 PM
		</div>
		<div class="comment_text"><p>Yes, but wasn't it in earlier?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666211">9</a> by Roberto
		posted on 6/4/2007 at 10:36 AM
		</div>
		<div class="comment_text"><p>No, i had to 5 download the Jar driver and set up a custom DSN.</p><p>Thanks</p><p>Rob</p></div>
	</div>
</div>
		