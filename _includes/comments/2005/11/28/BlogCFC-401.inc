
<div class="comment" id="c_1713623027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623027">1</a> by Dave Carabetta
		posted on 11/29/2005 at 7:27 AM
		</div>
		<div class="comment_text"><p>Hey Ray, small issue with the new release. print.cfm wasn't updated to reflect the changed render() to renderEntry() method. Once I did that, I was able to integrate your mods.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623025">2</a> by Raymond Camden
		posted on 11/29/2005 at 7:35 AM
		</div>
		<div class="comment_text"><p>Fixed. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623029">3</a> by Cole Barksdale
		posted on 11/29/2005 at 7:41 AM
		</div>
		<div class="comment_text"><p>Hi Ray.</p><p>I'm not sure if this is an issue on my end or BlogCFC. When I try to view blog entries either at the site or via an RSS reader, I get:</p><p>The requested URL //&lt;year&gt;/&lt;date&gt;/&lt;entry alias&gt; was not found on this server</p><p>Note the double slash marks in fron of &lt;year&gt;. I'm using 4.0 on this blog, but my other blogs use BlogCFC 3 and I have no issues with those.</p><p>Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623026">4</a> by Rob Gonda
		posted on 11/29/2005 at 7:59 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Make sure you update the <a href="http://disq.us/url?url=http%3A%2F%2Fblog.zip%3Ajv3oe85pIMLMbZhgqID3FfTAdGM&amp;cuid=3321886" rel="nofollow noopener" title="blog.zip">blog.zip</a> with the renderEntry() issue. I just downloaded the file and it still applies render().</p><p>Cheers</p><p>-Rob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623030">5</a> by Rob Gonda
		posted on 11/29/2005 at 8:01 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Make sure you update the <a href="http://disq.us/url?url=http%3A%2F%2Fblog.zip%3Ajv3oe85pIMLMbZhgqID3FfTAdGM&amp;cuid=3321886" rel="nofollow noopener" title="blog.zip">blog.zip</a> with the renderEntry() issue. I just downloaded the file and it still applies render().</p><p>Cheers</p><p>-Rob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623033">6</a> by Raymond Camden
		posted on 11/29/2005 at 8:04 AM
		</div>
		<div class="comment_text"><p>Rob, please check agtain. I just looked and I see it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623032">7</a> by Raymond Camden
		posted on 11/29/2005 at 8:04 AM
		</div>
		<div class="comment_text"><p>Cole, post your blog.ini file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623037">8</a> by Cole Barksdale
		posted on 11/29/2005 at 8:12 AM
		</div>
		<div class="comment_text"><p>[default]<br>dsn=[protected]<br>owneremail=[protected]<br>blogURL=<a href="http://disq.us/url?url=http%3A%2F%2Fwww.maddisonbarksdale.com%2F%3A97sLBLkSXgUFIKhwXGhiBJ8OfAQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.maddisonbarksdale.com/">http://www.maddisonbarksdal...</a><br>unsubscribeURL=<a href="http://disq.us/url?url=http%3A%2F%2Fwww.maddisonbarksdale.com%2Funsubscribe.cfm%3A0Xy11tZ1tR_DKRozHKu2UtvcHdM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.maddisonbarksdale.com/unsubscribe.cfm">http://www.maddisonbarksdal...</a><br>blogTitle=Maddison Barksdale<br>blogDescription=Blog of Maddison Barksdale<br>blogItemURLPrefix=mode=entry&amp;entry=<br>blogDBType=MYSQL<br>locale=en_US<br>users=maddison<br>commentsFrom=<br>mailserver=<a href="http://disq.us/url?url=http%3A%2F%2Fmail.maddisonbarksdale.com%3Apcc2P_O-otTvEzunTUfE_tY-NvA&amp;cuid=3321886" rel="nofollow noopener" title="mail.maddisonbarksdale.com">mail.maddisonbarksdale.com</a><br>mailusername=[protected]<br>mailpassword=[protected]<br>pingurls=<br>offset=-1<br>allowtrackbacks=1<br>trackbackspamlist=phentermine,searchterra,<a href="http://disq.us/url?url=http%3A%2F%2Fbolobomb.com%3AA3D6YZXBTKD3xToHn_bgzJngQAE&amp;cuid=3321886" rel="nofollow noopener" title="bolobomb.com">bolobomb.com</a>,<a href="http://disq.us/url?url=http%3A%2F%2Fdate.inter.by%3AsiNuUh9ERgYFczFfGftKaE4cMTQ&amp;cuid=3321886" rel="nofollow noopener" title="date.inter.by">date.inter.by</a>,cialis,propecia,viagra,tramadol,<a href="http://disq.us/url?url=http%3A%2F%2Fsearchear.biz%3AEGXLOzRw1aKgRZAPtPg6s3ZSFlw&amp;cuid=3321886" rel="nofollow noopener" title="searchear.biz">searchear.biz</a>,pills and tablets,abrevaonline,flomax,glucophag,best links for home,best earning,soma,<a href="http://disq.us/url?url=http%3A%2F%2Fspam.com%3ATEljqSzl65hYg1JZvSU9Yy9LgWA&amp;cuid=3321886" rel="nofollow noopener" title="spam.com">spam.com</a>,zyban,amoxil,best tablets,hoodia,prozac,testanchor,<a href="http://disq.us/url?url=http%3A%2F%2F4allfree.com%3Al-fcBBeIMP_Sjnr583lKfIPkg1o&amp;cuid=3321886" rel="nofollow noopener" title="4allfree.com">4allfree.com</a>,lipitor,actonel,acidophilus</p><p>Hope this helps.</p><p>Thanks!</p><p>Cole</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623034">9</a> by Rob Gonda
		posted on 11/29/2005 at 8:18 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>It's there now. Thanks!</p><p>Cola,</p><p>Your blogURL is missing index.cfm. I missed it too :) ... the word document clearly states that it must be included for the SES to work.</p><p>cheers</p><p>-Rob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623035">10</a> by Rob Gonda
		posted on 11/29/2005 at 8:19 AM
		</div>
		<div class="comment_text"><p>Cole,</p><p>My apologies ... didn't mean to misstype your name :)</p><p>Cheers</p><p>-Rob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623036">11</a> by Raymond Camden
		posted on 11/29/2005 at 8:21 AM
		</div>
		<div class="comment_text"><p>Your blogurl is wrong. It needs to include the /index.cfm at the end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623039">12</a> by Cole Barksdale
		posted on 11/29/2005 at 8:21 AM
		</div>
		<div class="comment_text"><p>Wow, thanks Rob! I guess I skipped over that part. Anyway, thanks and don't worry about the mistyping. :)</p><p>Cole</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623031">13</a> by John
		posted on 12/3/2005 at 8:08 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Had V3 running well - installed 4.0.1 and keep getting the following error:</p><p>blogKeywords is not a valid property</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623038">14</a> by Raymond Camden
		posted on 12/3/2005 at 8:35 AM
		</div>
		<div class="comment_text"><p>It's in the release notes. :) You need a blogkeywords= property in your ini file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623043">15</a> by jeff gladnick
		posted on 12/9/2005 at 12:03 AM
		</div>
		<div class="comment_text"><p>My CF administrator debugging doesn't work for BlogCFC. It just seems to be "shut off" on this section only.</p><p>Any idea why this is happening?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623042">16</a> by Raymond Camden
		posted on 12/9/2005 at 12:10 AM
		</div>
		<div class="comment_text"><p>BlogCFC uses a cfsetting to force debugging off. This is done as a security measure. You will need to edit application.cfm to allow debugging info to show up.</p></div>
	</div>
</div>
		