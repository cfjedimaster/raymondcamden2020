
<div class="comment" id="c_1713616928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616928">1</a> by Bill Rawlinson
		posted on 2/4/2005 at 9:14 PM
		</div>
		<div class="comment_text"><p>if it is auto-generated now - why get rid of it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616931">2</a> by Raymond Camden
		posted on 2/4/2005 at 9:17 PM
		</div>
		<div class="comment_text"><p>I am going to be adding new types of resources to CFLib. I'm trying to simplify the data model a bit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616925">3</a> by Steve Ray
		posted on 2/4/2005 at 9:21 PM
		</div>
		<div class="comment_text"><p>Ray, could you give us an example of the types of resources you're thinking of? My first reaction was similar to Bill's. If this stuff is there and it's useful (which it is), why get rid of it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616926">4</a> by Raymond Camden
		posted on 2/4/2005 at 9:25 PM
		</div>
		<div class="comment_text"><p>The main thing happening is that CFCZone is going to roll into CFLib. Other resources are planned, but I can't comment as of yet. I _would_ continue to store UDFDoc comments in the UDF. I would just be doing it by hand. When you view a UDF, you wouldn't see the "parameters" or return type, but you could easily see it when you View COde.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616935">5</a> by Ryan TJ
		posted on 2/5/2005 at 12:52 AM
		</div>
		<div class="comment_text"><p>As long as the description says the return type I don't mind reading the source UDF code for the rest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616930">6</a> by tony petruzzi
		posted on 2/5/2005 at 2:17 AM
		</div>
		<div class="comment_text"><p>Ray. If you are going to be adding different types to <a href="http://disq.us/url?url=http%3A%2F%2FCFLib.org%3AWOdcErJNG97LPvefvtc2ezLtDsI&amp;cuid=3321886" rel="nofollow noopener" title="CFLib.org">CFLib.org</a>, like say Tag and CFC's, then really you don't need to get rid of the autogerente, you will just need to move it.</p><p>Let me explain. From your comment, it seems that you have the autogenerate code inside the display template. What I would do is move the autogenerate code to a backend that you guys probably have to insert the UDF's into the database.</p><p>All you would have to do have is rewrite some portion of your backend that will let you pick whether the TYPE is a TAG, CFC, UDF, etc. and then the appropiate form would disply for you to enter the information. Once this for is filled out, just store the entire thing into a text (SQL SERVER) field inside the database.</p><p>I'm probably telling you stuff you already know. But from your post it sounded like you were stumped.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616924">7</a> by Andy Peters
		posted on 1/17/2009 at 6:58 PM
		</div>
		<div class="comment_text"><p>UDFDoc might be from 2005, but I would like to use it. Where can I find it 2009?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616923">8</a> by Raymond Camden
		posted on 1/17/2009 at 7:01 PM
		</div>
		<div class="comment_text"><p>No guarantee this will work: (I mean the code, the links work)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fold.cflib.org%2Fdownloads%2Fudfdoc.zip%3Aa3iM1Po1l3Ib8c3TAxXS1Vhtf1E&amp;cuid=3321886" rel="nofollow noopener" title="http://old.cflib.org/downloads/udfdoc.zip">http://old.cflib.org/downlo...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fold.cflib.org%2Fdownloads%2Fudfbrowser.zip%3AY4ThyW9XWlatTcQyybVKeB5KLDw&amp;cuid=3321886" rel="nofollow noopener" title="http://old.cflib.org/downloads/udfbrowser.zip">http://old.cflib.org/downlo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616933">9</a> by Andy Peters
		posted on 1/17/2009 at 8:26 PM
		</div>
		<div class="comment_text"><p>Thanks a lot for the quick reply...but the link does not work!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616929">10</a> by Raymond Camden
		posted on 1/17/2009 at 8:32 PM
		</div>
		<div class="comment_text"><p>Oops. Add a HOSTS entry for <a href="http://disq.us/url?url=http%3A%2F%2Fold.cflib.org%3A4rMjVtgl7oOGZGVKPu1A79EmNiQ&amp;cuid=3321886" rel="nofollow noopener" title="old.cflib.org">old.cflib.org</a>. Use ip 67.59.153.214.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616934">11</a> by Bijan Atri
		posted on 4/28/2010 at 9:52 PM
		</div>
		<div class="comment_text"><p>Hello,<br>I can not download <a href="http://disq.us/url?url=http%3A%2F%2Fudfdoc.zip%3AB65Y7O-JG0GEa5lhqU9yRObY2n0&amp;cuid=3321886" rel="nofollow noopener" title="udfdoc.zip">udfdoc.zip</a> or <a href="http://disq.us/url?url=http%3A%2F%2Fudfbrowser.zip%3AIB9ntNCK4Neafyc1XOFq_gGGUcI&amp;cuid=3321886" rel="nofollow noopener" title="udfbrowser.zip">udfbrowser.zip</a> from the url neither using FQDN or The IP provided. Could you please help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616932">12</a> by Raymond Camden
		posted on 4/28/2010 at 10:07 PM
		</div>
		<div class="comment_text"><p>Sorry - not supporting or providing those downloads anymore.</p></div>
	</div>
</div>
		