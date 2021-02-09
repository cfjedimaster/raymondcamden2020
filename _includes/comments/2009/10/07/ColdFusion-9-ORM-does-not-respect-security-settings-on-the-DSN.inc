
<div class="comment" id="c_1713718871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718871">1</a> by Don
		posted on 10/7/2009 at 7:50 PM
		</div>
		<div class="comment_text"><p>I always thought that permissions were better handled at the database level anyway so the restrictions applied no matter how a user accessed the database.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718859">2</a> by Gary Gilbert
		posted on 10/7/2009 at 9:44 PM
		</div>
		<div class="comment_text"><p>Im honestly not surprised by this, since the dsn security settings are meant to be applied to cfquery operations and the ORM is really a complete other layer where, I would bet, no cfqueries are used.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718873">3</a> by Adam Cameron
		posted on 10/7/2009 at 11:58 PM
		</div>
		<div class="comment_text"><p>I agree with Gary that it's not surprising, but disagree about the rationale, as it requires a bit of a retcon to make sense.  Obviously those settings didn't consider the ORM integration previously (only considering CFQUERY and CFSTROEDPROC), because the ORM integration didn't exist when they were implemented.</p><p>However now the ORM integration is there, and it's tied to the DSN so it should respect the settings of the DSN.</p><p>I would say this is an oversight on the part of the Adobe dev team, not the result of a specific decision being made.  And I think it's a bug.</p><p>And, lastly: well-spotted, Ray!</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718857">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718857">4</a> by JC
		posted on 10/8/2009 at 12:18 AM
		</div>
		<div class="comment_text"><p>The DSN security stuff has never worked well. Set a select only DSN, then execute a query with multiple parts.. it'll only stop you if the first action the query takes isn't a select. Much safer to have multiple DSNs with different users and only use the higher permission level DSNs where the code actually requires it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718858">5</a> by Adam Cameron
		posted on 10/8/2009 at 12:40 AM
		</div>
		<div class="comment_text"><p>Probably good grounds for raising an enhancement request / bug fix, I'd say: <a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%3A_X3SytQfggPoTF_n55sEsA7v1EA&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html">http://cfbugs.adobe.com/cfb...</a></p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718863">6</a> by Amy
		posted on 10/8/2009 at 11:15 AM
		</div>
		<div class="comment_text"><p>Thanks Ray, I'll update my co-worker who asked that!  Good to know..</p><p>Thanks again for a great presentation of CF and ORM!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718865">7</a> by Kevin Benore
		posted on 10/9/2009 at 7:51 AM
		</div>
		<div class="comment_text"><p>Not to nitpick but the last sentence uses the acronym DNS instead of DSN.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718870">8</a> by Raymond Camden
		posted on 10/9/2009 at 7:56 AM
		</div>
		<div class="comment_text"><p>Fixed. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718867">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718867">9</a> by Adam Cameron
		posted on 10/9/2009 at 2:32 PM
		</div>
		<div class="comment_text"><p>Not to nitpick, but neither "DSN" or "DNS" are acronyms.</p><p>But I'm sure your nitpick had more value than this one here ;-)</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718869">10</a> by Kevin Benore
		posted on 10/9/2009 at 6:26 PM
		</div>
		<div class="comment_text"><p>@Adam. I agree your are correct. But also note, that definition has altered since I was a kid (and perhaps you). It is now an open debate. So I may be correct too. Some view acronyms and initialisms as synonymous. The best example of this is &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.merriam-webster.com%2Fdictionary%2Facronym%3AmCk8e6qkPnJmpC20NN8gB5ZaXok&amp;cuid=3321886" rel="nofollow noopener" title="http://www.merriam-webster.com/dictionary/acronym">http://www.merriam-webster....</a>" target="_blank"&gt;Webster's&lt;/a&gt; definition. Wikipedia also describes the debate. But boy, now we are way off original topic.  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718868">11</a> by Kevin Benore
		posted on 10/9/2009 at 6:27 PM
		</div>
		<div class="comment_text"><p>I guess I forgot how to format a link in blog comments ... see here <a href="http://disq.us/url?url=http%3A%2F%2Fwww.merriam-webster.com%2Fdictionary%2Facronym%3AmCk8e6qkPnJmpC20NN8gB5ZaXok&amp;cuid=3321886" rel="nofollow noopener" title="http://www.merriam-webster.com/dictionary/acronym">http://www.merriam-webster....</a> .</p></div>
	</div>
</div>
		