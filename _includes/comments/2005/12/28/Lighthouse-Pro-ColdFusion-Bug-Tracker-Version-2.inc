
<div class="comment" id="c_1713623684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623684">1</a> by Critter
		posted on 12/29/2005 at 11:14 AM
		</div>
		<div class="comment_text"><p>yeah.. i dig flash forms as well.. but they just don't seem practical for most apps...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623683">2</a> by Critter
		posted on 12/29/2005 at 11:24 AM
		</div>
		<div class="comment_text"><p>is your mssql script missing the update for the attachments column?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623687">3</a> by Raymond Camden
		posted on 12/29/2005 at 5:22 PM
		</div>
		<div class="comment_text"><p>Critter - it shouldn't be. I remember adding it and running it in mysql-front.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623685">4</a> by Critter
		posted on 12/29/2005 at 6:33 PM
		</div>
		<div class="comment_text"><p>it's in the mysql scripts.. just not the sqlserver one..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623688">5</a> by Raymond Camden
		posted on 12/29/2005 at 7:30 PM
		</div>
		<div class="comment_text"><p>Oops. Yep. Will update later today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623689">6</a> by Gary Fenton
		posted on 12/29/2005 at 7:55 PM
		</div>
		<div class="comment_text"><p>Cheers Ray! Not sure if it's me, but in IE the History textarea is disabled (why is it yellow?) and I can't scroll it if there's lots of text in there.</p><p>Would still love a permanent memory for filters and table column ordering.</p><p>Cosmetic suggestions: Name of issue in main table should be more readable - how about black instead of light brown? Justified formatting makes it harder to read too due to large gaps between words and possibly the underlining doesn't help. My 2c.</p><p>Thanks for pointing RSS links directly to the issue form page. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623692">7</a> by Raymond Camden
		posted on 12/29/2005 at 8:02 PM
		</div>
		<div class="comment_text"><p>History is meant to be disabled. You add to it by using Notes. However, scrolling SHOULD work. I'll look into it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623696">8</a> by maxx
		posted on 12/29/2005 at 8:45 PM
		</div>
		<div class="comment_text"><p>FYI to those upgrading:</p><p>You can run this script to add the "attachment" field with out loosing data.</p><p>ALTER TABLE dbo.issues ADD<br>	attachment nvarchar(255) NOT NULL CONSTRAINT DF_issues_bob DEFAULT ''</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623693">9</a> by Gary Fenton
		posted on 12/29/2005 at 9:15 PM
		</div>
		<div class="comment_text"><p>Ray, I think you need to use "readonly" rather than the "disable" attribute. IE will literally disable the form object while Firefox doesn't. But in IE readonly will enable the scrollbar while preventing users from editing the content which I believe is the desired result.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623694">10</a> by Raymond Camden
		posted on 12/29/2005 at 9:19 PM
		</div>
		<div class="comment_text"><p>Shoot, I forgot to check that in this mornings build. Will quickly check it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623686">11</a> by Raymond Camden
		posted on 12/29/2005 at 9:28 PM
		</div>
		<div class="comment_text"><p>Zip updated again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623690">12</a> by Phillip Senn
		posted on 8/30/2006 at 7:26 PM
		</div>
		<div class="comment_text"><p>So I guess format="flash" was a flash in the pan?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623691">13</a> by Raymond Camden
		posted on 8/30/2006 at 7:26 PM
		</div>
		<div class="comment_text"><p>Nah. I still like them. I think I just went a bit too far in LHP. :)</p></div>
	</div>
</div>
		