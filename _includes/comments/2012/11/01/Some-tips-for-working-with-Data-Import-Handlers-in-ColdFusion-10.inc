
<div class="comment" id="c_1713743720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743720">1</a> by CF Stumped
		posted on 2/22/2014 at 2:34 AM
		</div>
		<div class="comment_text"><p>Ray - know this is an older post so hope you will still respond to it.  I followed your instructions and was able to get this to work with a MS SQL database.  My collection is being populated and if I do a cfsearch without a criteria results are returned.  If I add a criteria no results are returned.Here is the cfsearch I am using:  Do you have any suggestions on how to resolve this?</p><p>cfsearch <br>name = "mySearch" <br>collection = "FORD OEM" <br>maxRows="200"<br>criteria="window"<br>type="dismax"</p><p>Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743719">2</a> by CF Stumped
		posted on 2/22/2014 at 5:50 AM
		</div>
		<div class="comment_text"><p>Ray</p><p>I was able to make some progress and found if I do searches like this where I specify the column name in the criteria they return results</p><p>cfsearch <br>name = "mySearch" <br>collection = "FORD OEM" <br>maxRows="200"<br>criteria="description:window"<br>type="standard"</p><p>I was not able to get results from any of the examples found on <a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F10.0%2FDeveloping%2FWS82937B1B-240F-4850-B376-5FD9F911E5E5.html%3AFIK4Svw-fWZSvIyKqlTDfm1E_iA&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/10.0/Developing/WS82937B1B-240F-4850-B376-5FD9F911E5E5.html">http://help.adobe.com/en_US...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743721">3</a> by Raymond Camden
		posted on 2/22/2014 at 6:26 PM
		</div>
		<div class="comment_text"><p>Going by memory, if you do not provide a field, I think it is hitting contents. Do you have a line like this: &lt;field column="body" name="contents"/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743722">4</a> by CF Stumped
		posted on 2/23/2014 at 3:47 AM
		</div>
		<div class="comment_text"><p>Ray</p><p>Thanks for the response.  No I do not have a line like the one you mentioned.  Will add that on Monday and see what happens.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743723">5</a> by CF Stumped
		posted on 2/25/2014 at 12:25 AM
		</div>
		<div class="comment_text"><p>Ray thanks for helping me out the lack of contents was the problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743725">6</a> by Raymond Camden
		posted on 2/25/2014 at 12:25 AM
		</div>
		<div class="comment_text"><p>Glad it was that easy - the rest of DIH isn't. ;)</p></div>
	</div>
</div>
		