
<div class="comment" id="c_1713747692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747692">1</a> by Roland Collins
		posted on 7/12/2013 at 11:27 PM
		</div>
		<div class="comment_text"><p>Just out of curiosity, I did the SQL Server Profiler experiment to see what the differences would be from the database's perspective.</p><p>There is only one minor difference on SQL Server, with BLOB/CLOB support.  When they are DISABLED, the server receives the following additional command that it does not receive when the setting is enabled.</p><p>SET TEXTSIZE 64000</p><p>(64000 or whatever your text size is set to on the datasource)</p><p>TEXTSIZE has a direct effect on the amount of data that you can retrieve from binary fields and varchar fields. <a href="http://disq.us/url?url=http%3A%2F%2Fmsdn.microsoft.com%2Fen-us%2Flibrary%2Fms186238.aspx%3A8CJ3XTO22IjA_4VNp-YPODUbkgE&amp;cuid=3321886" rel="nofollow noopener" title="http://msdn.microsoft.com/en-us/library/ms186238.aspx">http://msdn.microsoft.com/e...</a></p><p>So the setting does have a minor impact if you have lots of columns that contain over 64000 bytes of data and are constantly selecting them.  But that doesn't really seem like a realistic scenario for most applications.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747694">2</a> by Misty
		posted on 7/12/2013 at 11:30 PM
		</div>
		<div class="comment_text"><p>Hi ray, This is what CF Docs Say:</p><p>CLOB</p><p>Select to return the entire contents of any CLOB/Text columns in the database for this data source. If not selected, ColdFusion retrieves the number of characters specified in the Long Text Buffer setting.</p><p>BLOB</p><p>Select to return the entire contents of any BLOB/ Image columns in the database for this data source. If not selected, ColdFusion retrieves the number of characters specified in the BLOB Buffer setting.</p><p>But i rarely enabled these in my Projects and did not seems to find any relevant answer for this, Above explanations by Charlie and Dave  makes sense, but still not fully clear</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747693">3</a> by doug
		posted on 7/15/2013 at 4:05 PM
		</div>
		<div class="comment_text"><p>Hilarious.  Seems like ever time I take a dive into something new you go off an make a blog post about it.  I was just wondering the same thing myself just a month ago, and I'm glad Adam R. thought to ask you about it.</p><p>So far in the month or so since I switched on the BLOB support I've noticed no hit to performance even though I'm transferring some large image files from the DB now.  My biggest fear was that it was some kind of security hole if I unlocked it, but just as with Adam R., I couldn't find anything warning about it with my Google-fu.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747696">4</a> by Ben
		posted on 5/22/2014 at 9:16 PM
		</div>
		<div class="comment_text"><p>Well, in my 10 years of modest CF development this is the first time I've run into this!<br>Thanks! Would be interested in expanded discussion on the "Long Text Buffer" setting as it's related to this issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713747695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713747695">5</a> by Ben
		posted on 5/22/2014 at 9:18 PM
		</div>
		<div class="comment_text"><p>Ah, sorry, missed Misty's comment above. In any case thanks again folks!</p></div>
	</div>
</div>
		