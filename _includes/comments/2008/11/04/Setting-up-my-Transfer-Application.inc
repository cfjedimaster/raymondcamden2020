
<div class="comment" id="c_1713709630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709630">1</a> by Phillip Senn
		posted on 11/5/2008 at 8:47 AM
		</div>
		<div class="comment_text"><p>Transfer is change we need.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709636">2</a> by Raymond Camden
		posted on 11/5/2008 at 8:53 AM
		</div>
		<div class="comment_text"><p>Nice... ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709638">3</a> by Mat Evans
		posted on 11/5/2008 at 3:10 PM
		</div>
		<div class="comment_text"><p>Really looking forward to the rest of this series!</p><p>btw congrats on your new president, good choice :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709641">4</a> by Francois Levesque
		posted on 11/5/2008 at 5:26 PM
		</div>
		<div class="comment_text"><p>Great post, Ray. I think going through installing/using Transfer in baby steps like you're planning will be great for those interested in trying it out but afraid it's more complicated than it actually is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709639">5</a> by Geoff
		posted on 11/5/2008 at 7:55 PM
		</div>
		<div class="comment_text"><p>Ray. You said "Because my database uses a different name for the table (employees) I have to tell Transfer what the table name is."</p><p>Have you already made your database tabes? I thought Transfer would make the tables for you?</p><p>Unless I'm missing something...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709650">6</a> by Raymond Camden
		posted on 11/5/2008 at 7:57 PM
		</div>
		<div class="comment_text"><p>Geoff, I kinda skipped over that - and I _knew_ that was a mistake, but I was hoping to get back to it tonight.</p><p>As a writer, I should have learned by now - trust my instincts.</p><p>No - Transfer will NOT make your tables for you. Hibernate does, and that is _extremely_ cool, but in this case, I had to make the table myself.</p><p>In tonight's blog entry, I'm discussing basic CRUD operations, and I'll be sure to cover this (not everyone reads the comments).</p><p>Cool?</p><p>Thanks for calling me out on that!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709647">7</a> by Fred Anderson
		posted on 11/5/2008 at 8:35 PM
		</div>
		<div class="comment_text"><p>Great idea Ray, looking forward to the entire series.<br>If anyone is too impatient, like myself, to wait for the next post, here is the script for making the table in MySql.<br>-- ----------------------------<br>CREATE TABLE `employees` (<br>  `id` int(11) default NULL,<br>  `firstname` varchar(50) default NULL,<br>  `lastname` varchar(50) default NULL,<br>  `dob` date default NULL,<br>  `email` varchar(255) default NULL,<br>  `phone` varchar(50) default NULL<br>) ENGINE=MyISAM DEFAULT CHARSET=latin1;<br>-- ----------------------------</p><p>just make a db, create this table and then point a cf dsn named 'employeedirectory' at it.<br>Good luck.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709648">8</a> by Aaron West
		posted on 11/5/2008 at 11:01 PM
		</div>
		<div class="comment_text"><p>@Geoff - I believe your question about whether Transfer creates tables or not (and the question behind the question) is one of the reasons Ray is starting this series.</p><p>Some folks don't believe Transfer is a true ORM since it will not create (or update) your database based on your objects. You can read more about the different perspectives on this topic in the following blog posts and comments:</p><p>Joe Rinehart:&lt;br/&gt;<br><a href="http://disq.us/url?url=http%3A%2F%2Ffiremoss.com%2Fpost.cfm%2Fdoes-coldfusion-have-no-real-orm-frameworks%3Cbr%2F%3E%3A7zmHmrV2gZPCnoQSYg9bVWrTclQ&amp;cuid=3321886" rel="nofollow noopener" title="http://firemoss.com/post.cfm/does-coldfusion-have-no-real-orm-frameworks<br/>">http://firemoss.com/post.cf...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.firemoss.com%2Fpost.cfm%2Fwhat-makes-a-framework-an-orm%3AmqfGJ5TPmnVLxJGVHjQx-d7WfDM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.firemoss.com/post.cfm/what-makes-a-framework-an-orm">http://www.firemoss.com/pos...</a></p><p>Brian Kotek:&lt;br/&gt;<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.briankotek.com%2Fblog%2Findex.cfm%2F2008%2F11%2F3%2FJoe-Rinehart-Stirs-the-ObjectRelational-Mapping-ORM-Frameworks-Pot%3AOAMMuIzmoViAB4rGtLJBQR8oVdc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.briankotek.com/blog/index.cfm/2008/11/3/Joe-Rinehart-Stirs-the-ObjectRelational-Mapping-ORM-Frameworks-Pot">http://www.briankotek.com/b...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709624">9</a> by Raymond Camden
		posted on 11/5/2008 at 11:28 PM
		</div>
		<div class="comment_text"><p>@AW: Well technically no. That's not why I started the series. If you see the first entry (see Related Entries above), I definitely talk about those articles by Joe and Brian, but my main intent here is to help others learn Transfer, and to help myself get a better understanding as well. (I'm most interested in the Event stuff. I have no idea how it's used so I'm looking forward to that.)</p><p>I think Joe's article is a good one. It certainly helped me. But this series main goal is more on the practical side.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709644">10</a> by Chris
		posted on 11/6/2008 at 12:27 AM
		</div>
		<div class="comment_text"><p>Anyone having trouble running the code on Railo 3?  I keep getting "invalid component definition, can't find transfer.TransferFactory" but my mappings look correct.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709627">11</a> by Raymond Camden
		posted on 11/6/2008 at 12:31 AM
		</div>
		<div class="comment_text"><p>Right before the createObject, do a cfoutput on expandPath("/transfer"), and ensure that a) it points to the right file, and b) that folder has TransferFactory.cfc in it it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709649">12</a> by Chris
		posted on 11/6/2008 at 12:36 AM
		</div>
		<div class="comment_text"><p>Yup, checked both before and looks correct.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709629">13</a> by Raymond Camden
		posted on 11/6/2008 at 12:38 AM
		</div>
		<div class="comment_text"><p>@Chris - if you get rid of my fancy this.mappings (well, don't get rid of it, remove the line for transfer) and make a 'real' CF mapping, does it work?</p><p>I'd also encourage you to post to the Railo listserv. They are typically fairly good with this kinda stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709625">14</a> by Chris
		posted on 11/6/2008 at 12:41 AM
		</div>
		<div class="comment_text"><p>Well, I removed the mappings and went to the railo admin and set the mappings there (A little different than CF8).  Still nothing.  I will try posting there too and post what I find.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709626">15</a> by Pete
		posted on 11/12/2008 at 5:06 PM
		</div>
		<div class="comment_text"><p>Any help with this error?</p><p>The XMLFILEREADER argument passed to the init function is not of type transfer.com.io.XMLFileReader.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709628">16</a> by Raymond Camden
		posted on 11/12/2008 at 5:10 PM
		</div>
		<div class="comment_text"><p>That's a new one on me. Maybe a typo in your XML? Unless you used the exact same XML from the zip. Worse comes to worse, try the mailing list: <a href="http://disq.us/url?url=http%3A%2F%2Fgroups.google.com%2Fgroup%2Ftransfer-dev%2F%3AYYNLVtdyNv_E_YHDjXldi79W0RA&amp;cuid=3321886" rel="nofollow noopener" title="http://groups.google.com/group/transfer-dev/">http://groups.google.com/gr...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709632">17</a> by Pete
		posted on 11/12/2008 at 5:42 PM
		</div>
		<div class="comment_text"><p>I had a copy of the \Transfer folder in the employeedirectory.  I removed it and everything is fine.  Thanks</p></div>
	</div>
</div>
		