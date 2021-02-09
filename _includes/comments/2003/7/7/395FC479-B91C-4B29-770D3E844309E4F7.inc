
<div class="comment" id="c_1713614707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614707">1</a> by Jim Console
		posted on 9/3/2008 at 5:47 PM
		</div>
		<div class="comment_text"><p>Ray,<br>Awesome, I am also using my queries in this fashion. My only problem is that I do not yet understand how to use a variable in the [col] part of q[col][n] syntactically. How would you do that?</p><p>THX - JJC</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614705">2</a> by Raymond Camden
		posted on 9/4/2008 at 6:50 AM
		</div>
		<div class="comment_text"><p>I'm not quite sure I get your question - but are you asking how to dynamically get a particular col/row in a query? If so, the syntax is q (the query) [col] (the name of column) and [row] the row obviously.</p><p>So if the query Q had a column, age, and you wanted the 3rd row, you would use:</p><p>&lt;cfoutput&gt;#q["age"][3]#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614708">3</a> by David Levin
		posted on 6/30/2009 at 11:09 PM
		</div>
		<div class="comment_text"><p>I think Jim might be asking how to use a variable instead of specifying an actual column name.</p><p>So you could use something like:<br>&lt;cfset mycolumn = "age"&gt;<br>&lt;cfoutput&gt;#q[myColumn][3]#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614709">4</a> by Reuben
		posted on 6/30/2014 at 7:33 PM
		</div>
		<div class="comment_text"><p>Is this true in all versions of coldfusion or is there a cf configuration that will override this?<br>I'm asking because on my workspace server, I am not using the row number and I'm not getting the _Complex object types cannot be converted to simple values._ error ( like I was on my live site) - which was solved with you advice of adding the row number....?</p><p>Thanks,<br>Reuben</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614711">5</a> by Raymond Camden
		posted on 7/1/2014 at 12:15 AM
		</div>
		<div class="comment_text"><p>Not sure. Personally I just like being anal and putting in the row number so it is explicit. :)</p></div>
	</div>
</div>
		