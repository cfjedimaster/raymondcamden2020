
<div class="comment" id="c_1713667898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667898">1</a> by Dave Ross
		posted on 7/1/2007 at 7:40 PM
		</div>
		<div class="comment_text"><p>I take credit in instigating that one ;)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.d-ross.org%2Findex.cfm%3Fobjectid%3D7DADADEF-1143-D861-4D62CCC08AB955CB%3A2HCmKheXSac1bkC3LiGcQ9ILths&amp;cuid=3321886" rel="nofollow noopener" title="http://www.d-ross.org/index.cfm?objectid=7DADADEF-1143-D861-4D62CCC08AB955CB">http://www.d-ross.org/index...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667905">2</a> by Raymond Camden
		posted on 7/1/2007 at 8:54 PM
		</div>
		<div class="comment_text"><p>It is all your fault! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667904">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667904">3</a> by Daniel Budde II
		posted on 7/2/2007 at 7:07 PM
		</div>
		<div class="comment_text"><p>Jared made me do it.  I had to find out why the code idea I got from him no longer worked.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.web-relevant.com%2Fblogs%2Fcfobjective%2Findex.cfm%3Fmode%3Dentry%26entry%3DBD613BAF-BDB9-5320-E7F02F683C0421A1%3A0pgRv239Zx6NzwuBYGumscQG_g0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.web-relevant.com/blogs/cfobjective/index.cfm?mode=entry&amp;entry=BD613BAF-BDB9-5320-E7F02F683C0421A1">http://www.web-relevant.com...</a></p><p>Anyway, it does sound like a very positive change.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667909">4</a> by Tom Jordahl
		posted on 7/2/2007 at 9:59 PM
		</div>
		<div class="comment_text"><p>Its not undocumented.</p><p>This change will be in the ColdFusion 8 final documentation and the release notes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667907">5</a> by Raymond Camden
		posted on 7/2/2007 at 10:07 PM
		</div>
		<div class="comment_text"><p>I noticed you said "will be", so that implies it is undocumented _now_, right? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667906">6</a> by Ali
		posted on 7/3/2007 at 10:45 PM
		</div>
		<div class="comment_text"><p>So what would be the work around?</p><p>Currently I have developed a couple of apps for my employer that reply on the Content of gethttprequestdata().</p><p>My employer receives XML feeds from their partners, and we have a CF page that uses gethttprequestdata(), and then I parse out the content.</p><p>Would this stop working in CF8?</p><p>Ali</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667908">7</a> by Charlie Arehart
		posted on 8/29/2007 at 6:57 AM
		</div>
		<div class="comment_text"><p>Ali, did you find that indeed things stopped working for you? The change Ray discusses is about file uploads (CFFILE Action="upload"). It doesn't sound like your XML feed processing should be affected. But do let us know. If you find that it does, you can change CF8 back to the CF7 way of working (for this feature) by setting the java system property "coldfusion.markResetForMulitPart" to "true".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667911">8</a> by James Moberg
		posted on 11/2/2013 at 3:44 AM
		</div>
		<div class="comment_text"><p>Ray, I'm running into an issues with the formFieldAsArray UDF from CFLib and GetHTTPRequestData() when a form is submitted with an encoding type of "multipart/form-data" (using ColdFusion 10).  The error is "ByteArray objects cannot be converted to strings."<br><a href="http://disq.us/url?url=http%3A%2F%2Fcflib.org%2Fudf%2FformFieldAsArray%3AI2ostKxkjSCFAJCSFa66bpQTjpg&amp;cuid=3321886" rel="nofollow noopener" title="http://cflib.org/udf/formFieldAsArray">http://cflib.org/udf/formFi...</a></p><p>I thought the Adobe thread would be good to read and would assist me in fixing this, but the link doesn't work anymore. (I tried accessing <a href="http://disq.us/url?url=http%3A%2F%2Farchive.org%3AqNv0_GhIOAcCKU-oy7OBeEuLA8g&amp;cuid=3321886" rel="nofollow noopener" title="archive.org">archive.org</a>, but the page didn't exist their either.)</p><p>I know that you've questioned why StackOverflow doesn't allowing links to websites as answers... well, this is one of those reasons. While your blog post is helpful, the information that it links to is non-existent.  (I know it's from 2007 &amp; related to ColdFusion 8 which is no longer supported, but that doesn't mean that their forum posts should simply disappear. I see posts regarding CF 5 from 2006. I wonder why this one is unavailable.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667938">9</a> by Raymond Camden
		posted on 11/5/2013 at 8:50 AM
		</div>
		<div class="comment_text"><p>Most likely the UDF just needs to be updated.</p></div>
	</div>
</div>
		