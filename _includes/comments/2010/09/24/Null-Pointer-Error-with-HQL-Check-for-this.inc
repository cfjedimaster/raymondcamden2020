
<div class="comment" id="c_1713726668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726668">1</a> by Andrew Scott
		posted on 3/29/2011 at 9:44 PM
		</div>
		<div class="comment_text"><p>Have you tried it this way?</p><p>var res = ormExecuteQuery("from user u where u.eMail = :email", {email=<a href="http://disq.us/url?url=http%3A%2F%2Farguments.email%3AdEb0XjJc0-rxkMWb6bK1u-r4Ydk&amp;cuid=3321886" rel="nofollow noopener" title="arguments.email">arguments.email</a>});</p><p>HQL does require it to be written this way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726670">2</a> by Raymond Camden
		posted on 3/29/2011 at 9:47 PM
		</div>
		<div class="comment_text"><p>What in particular? Do you mean adding the table alias? If so - I disagree. I've never seen aliases required before.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726671">3</a> by Andrew Scott
		posted on 3/29/2011 at 9:52 PM
		</div>
		<div class="comment_text"><p>Interesting, every HQL example I have seen is aliased. If I try to use it without an Alias I get either this error, or I more commonly I get</p><p>Error Type: Application : [N/A]<br>Error Messages: Error while executing the Hibernate query.<br>org.hibernate.hql.ast.QuerySyntaxException: unexpected token: left near line 1, column 36 [FROM category where parent=1 order by left]</p><p>However if it is aliased it will work fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726664">4</a> by Raymond Camden
		posted on 3/29/2011 at 9:55 PM
		</div>
		<div class="comment_text"><p>Simplify a bit - just to make things easier. Remove the order by and see if you still get an error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726665">5</a> by Andrew Scott
		posted on 3/29/2011 at 10:01 PM
		</div>
		<div class="comment_text"><p>Your example or mine?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726674">6</a> by Raymond Camden
		posted on 3/29/2011 at 10:04 PM
		</div>
		<div class="comment_text"><p>Well, yours. I think you are saying that you think aliases are required. I'm saying they are not (but could be wrong). You mentioned getting an error in your last comment and I suggested making your HQL a bit simpler to see if we could figure out what the issue is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726667">7</a> by Brian Paulson
		posted on 4/7/2011 at 6:46 AM
		</div>
		<div class="comment_text"><p>Check your column name and case. I was having the same issue and the column was named paydate and I was using payDate in my query and was getting the same error and fixing the case cleared up the Null Pointer Exception.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726679">8</a> by Ron West
		posted on 3/6/2012 at 9:29 AM
		</div>
		<div class="comment_text"><p>Brian,</p><p>Your suggestion was spot on.  I was having this issue and as soon as I matched up the case from my bean - bingo.  Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726678">9</a> by Victor
		posted on 11/8/2012 at 5:16 AM
		</div>
		<div class="comment_text"><p>I came across this error. The cause is using upper case in property name. <br>I've come to conclusion that upper case shouldn't be used in ColdFusion ORM. Otherwise you can get problems later.</p></div>
	</div>
</div>
		