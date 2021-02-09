
<div class="comment" id="c_1713621596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621596">1</a> by Ryan Guill
		posted on 10/26/2005 at 11:08 PM
		</div>
		<div class="comment_text"><p>Can I make one suggestion?  The searches in the stats are nice, but they would be a lot more useful if you could make them a link so I could go and see that someone else searched this blog for x, and then with one click I could see the results they got.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621597">2</a> by Raymond Camden
		posted on 10/26/2005 at 11:13 PM
		</div>
		<div class="comment_text"><p>Done. I will be refreshing the zip in a little while - as I think I found a bug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621599">3</a> by Martin Baur
		posted on 10/27/2005 at 4:12 AM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>Did you spend some thoughts about the date-format, i.e. did you allow for specifying the date mask for a new entry?</p><p>You remember, I reported that in German/Swiss notation the date always got misinterpreted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621601">4</a> by Martin Baur
		posted on 10/27/2005 at 4:15 AM
		</div>
		<div class="comment_text"><p>BTW: search is nice ... but, how about marking the hits? I did a search for "trackback", deliberately. I expected some, got lots of articles. Seeing what is relevant, i.e. my search keyword would be a great enhancement .. I think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621600">5</a> by Raymond Camden
		posted on 10/27/2005 at 3:24 PM
		</div>
		<div class="comment_text"><p>Martin: Nope, no work on date formats. Post 4.0. Showing the hits - well, I could do that - the slow way would be to do a search each time and then cache. A bit too much work for something so small though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621603">6</a> by Raymond Camden
		posted on 10/27/2005 at 7:48 PM
		</div>
		<div class="comment_text"><p>Someone else pinged me on it - so it is in my mind. Definitely post 4.0. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621604">7</a> by O?uz Demirkap?
		posted on 11/2/2005 at 4:00 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I could find a bit time to checn new beta and here are my notes.</p><p>Errors:</p><p>- MySQL script has latin1 for database create processes. They must be changed as utf8 for MySQL 4.1.x and 5.x. (Otherwise error at line 684 on blog.cfc)<br>- When I try to add a new entry after login, it asks second time login information on popup screen.<br>- Error at line 1050 on blog.cfc. I think in "tblblogsubscribers" tabel there must be a field as "blog".<br>- Error at line 180 on editor.cfm. "form.categories" is not defined when there is no category selected while entering a new category. This is problem while adding a new category with a new entry wtihout selecting one of the old categories.<br>- I was at dinner and back again. My session is expired after some test and I got following error.<br> Invalid list index 3.<br>In function ListGetAt(list, index [, delimiters]), the value of index, 3, is not a valid as the first argument (this list has 2 elements). Valid indexes are in the range 1 through the number of elements in the list.</p><p>The error occurred in E:\SERVER\Apache2\htdocs\blogbeta\index.cfm: line 176<br>Called from E:\SERVER\Apache2\htdocs\blogbeta\index.cfm: line 136<br>Called from E:\SERVER\Apache2\htdocs\blogbeta\index.cfm: line 99<br>Called from E:\SERVER\Apache2\htdocs\blogbeta\index.cfm: line 83<br>Called from E:\SERVER\Apache2\htdocs\blogbeta\index.cfm: line 1</p><p>174 : 		&lt;cfif len(username)&gt;#application.resourceBundle.getResource("postedby")# : #username# | &lt;/cfif&gt;<br>175 : 		&lt;cfloop index="x" from=1 to="#listLen(categoryNames)#"&gt;<br>176 : 		&lt;a href="#application.rooturl#/index.cfm?mode=cat&amp;catid=#listGetAt(categoryIDs,x)#"&gt;#listGetAt(categoryNames,x)#&lt;/a&gt;&lt;cfif x is not listLen(categoryNames)&gt;,&lt;/cfif&gt;<br>177 : 		&lt;/cfloop&gt;<br>178 : 		&lt;cfif allowcomments&gt;| &lt;a href="javaScript:launchComment('#id#')"&gt;#application.resourceBundle.getResource("comments")# (&lt;cfif commentCount is ""&gt;0&lt;cfelse&gt;#commentCount#&lt;/cfif&gt;)&lt;/a&gt;&lt;/cfif&gt;</p><p>Would be nice:</p><p>- A Unicode supported configuration file such as an XML file etc. While we can not use Unicode chars direct in blog.ini file such as blog name etc. <br>- Unicode support for MSSQL also. There are still problem for Unicoe when MSSQL has been selected as DB.<br>- A web based admin interface insteda of ini file would be nice. I would suggest Andrea Veggiani's AVBlog  admin features. (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.veggiani.it%2Fprojects%2Favblog%2F%29%3AlCt1j7rjAZCyP9dS-KlzLajhdP0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.veggiani.it/projects/avblog/)">http://www.veggiani.it/proj...</a>.<br>- Category sort opportunity would be nice. We can decide order of categories etc.<br>- A preview feature for comments would be nice.<br>- I want to write my name correct in your blog Ray! :)</p><p>I hope these helps for a better version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621605">8</a> by O?uz Demirkap?
		posted on 11/2/2005 at 4:04 AM
		</div>
		<div class="comment_text"><p>Ah. I have forgotten.</p><p>I have tested on following system.</p><p>- Win MCE2005 OS<br>- ColdFusion 7.0.1 &amp; hotfixes<br>- Apache 2.0.55<br>- MySQL 5.0.15<br>- mysql-connector-java-3.1.11</p><p>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621714">9</a> by Raymond Camden
		posted on 11/2/2005 at 5:01 PM
		</div>
		<div class="comment_text"><p>1) Can this be fixed by just changing set latin1 to set utf8?<br>2) I'm not seeing this. I can logon, post, and don't get prompted.<br>3) Your db must be old. The install scripts should have the right value. Ahah! MySQL is missing the blog column. Added.<br>4) Fixed.<br>5) Hmm. That one doesn't make sense. The code looping over the list categoryNames, which should have the same length as categoryIDs. Take a closer look at your blog entry and see if anything is wierd with it.</p><p>I'll post a new build in a few minutes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621717">10</a> by O?uz Demirkap?
		posted on 11/2/2005 at 11:12 PM
		</div>
		<div class="comment_text"><p>1) Yes. <br>2) Same in every try.<br>3) :)<br>4) ok.<br>5) I will test again with new beta when it is available.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621716">11</a> by Steven Ross
		posted on 11/5/2005 at 2:38 AM
		</div>
		<div class="comment_text"><p>this might not be the best place for this but, I couldn't tell if my question went through on your "submit your question" section of your site.</p><p>Just wondering if you could go over when to stick a cfc in the application scope. I have been looking at your code for blogCFC because I am trying to write a free email marketing/newsletter app and I'm trying to figure out some "best practices" and if my app should be built like you built blogCFC (completely encapsulated by one CFC).</p><p>your thoughts?</p><p>-Steven</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621715">12</a> by Raymond Camden
		posted on 11/5/2005 at 3:00 AM
		</div>
		<div class="comment_text"><p>I would say you should always cache the CFC. It is like any other piece of application data. If it only needs to made once, than make it once.</p></div>
	</div>
</div>
		