
<div class="comment" id="c_1713666878">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666878">1</a> by todd sharp
		posted on 6/9/2007 at 9:59 PM
		</div>
		<div class="comment_text"><p>How about a third parameter in search() for caseSensitive?  Either that or just make the dang thing insensitive...I hate that about QofQ.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666875">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666875">2</a> by Raymond Camden
		posted on 6/10/2007 at 1:04 AM
		</div>
		<div class="comment_text"><p>Actually, that is what I wanted and I just forgot. So by default it will be case insensitive, and I'll allow you to make it sensitive.</p><p>You know how do to that yourself, right? Without waiting for me I mean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666876">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666876">3</a> by todd sharp
		posted on 6/10/2007 at 3:14 AM
		</div>
		<div class="comment_text"><p>I do.  I also have a few other mods in progress if you'd like me to share.</p><p>PS - not getting any emails from comments here on the blog.  And I'm sure I subscribed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666859">4</a> by todd sharp
		posted on 6/10/2007 at 4:31 AM
		</div>
		<div class="comment_text"><p>Another issue:  If the feed is malformed or errors out in some way we have an issue.  You have a catch where you look for thread.entries and if it doesn't exist you create an empty query - but your [date] column bombs out:</p><p>Error:</p><p>The following information is meant for the website developer for debugging purposes.</p><p>Error Occurred While Processing Request  <br>The column name [date] is invalid.  <br>Column names must be valid variable names. They must start with a letter and can only include letters, numbers, and underscores.</p><p>The error occurred in C:\inetpub\wwwroot\test\agg\aggregator.cfc: line 84</p><p>82 : 				&lt;cfset results["result_#x#"] = thread.entries&gt;<br>83 : 			&lt;cfelse&gt;<br>84 : 				&lt;cfset results["result_#x#"] = queryNew(variables.collist)&gt;<br>85 : 			&lt;/cfif&gt;<br>86 : 		&lt;/cfloop&gt;</p><p>Surrounding the reserved word 'date' with brackets is a fix for when you are using variables.collist for the QofQ - but the brackets won't work in queryNew().</p><p>Probably best to name it pubdate or something else...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666879">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666879">5</a> by Raymond Camden
		posted on 6/10/2007 at 7:51 PM
		</div>
		<div class="comment_text"><p>Good catch there. I escape it for search, I need to escape it there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666877">6</a> by Raymond Camden
		posted on 6/10/2007 at 7:52 PM
		</div>
		<div class="comment_text"><p>Hey - if you want to send those mods todya, please do. I'd like to release this up on RIAForge (and yes, I know I've said in the past that individual CFCs don't really belong on RIAForge, but oh well :)</p></div>
	</div>
</div>
		