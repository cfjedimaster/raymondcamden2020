
<div class="comment" id="c_1713667934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667934">1</a> by todd sharp
		posted on 7/2/2007 at 7:29 PM
		</div>
		<div class="comment_text"><p>I like that CFJSON lets you specify upper/lower.  That's one thing I think that's missing from CF 8's JSON stuff.  Of course there are workarounds, but they require you to use the "old way" to create the struct/array.</p><p>For example - if I have a struct:</p><p>&lt;cfset foo = {key="value"} /&gt;</p><p>serializeJSON would covert the key to all upper.</p><p>The workaround is to use associate array notation:</p><p>&lt;cfset foo["key"] = "value" /&gt;</p><p>Which will leave the key all lowercase - but I don't like that I can't use impicit creation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667912">2</a> by Raymond Camden
		posted on 7/2/2007 at 7:33 PM
		</div>
		<div class="comment_text"><p>That's a good one Todd. Did you file a ER for that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667915">3</a> by todd sharp
		posted on 7/2/2007 at 7:42 PM
		</div>
		<div class="comment_text"><p>I will.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667903">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667903">4</a> by Chris H
		posted on 7/4/2007 at 7:27 PM
		</div>
		<div class="comment_text"><p>just to let you know Ray, "application/json" is not a valid mime-type.<br>i used it for my JSON data and ended up with it not being utf-8 encoded, thus not showing my special characters correctly.<br>you don't have to specify a cfcontent type at all actually, since "text/html" with utf-8 encoding is the default and works fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667916">5</a> by Raymond Camden
		posted on 7/5/2007 at 3:02 AM
		</div>
		<div class="comment_text"><p>Weird - I know I saw it somewhere else.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667917">6</a> by Troy Allen
		posted on 11/7/2007 at 10:56 PM
		</div>
		<div class="comment_text"><p>Did the CFJSON authors ever respond to your recommendation to convert the string handling in their CFC to Java StringBuffers? The latest version of CFJSON does not use SBs, but are they thinking about doing it for a future release?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667914">7</a> by Raymond Camden
		posted on 11/8/2007 at 12:17 AM
		</div>
		<div class="comment_text"><p>I don't believe so. They have have and I forgot.</p></div>
	</div>
</div>
		