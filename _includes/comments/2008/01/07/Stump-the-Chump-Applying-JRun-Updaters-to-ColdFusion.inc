
<div class="comment" id="c_1713675940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675940">1</a> by Big Mad Kev
		posted on 1/8/2008 at 12:51 AM
		</div>
		<div class="comment_text"><p>As far as I know Updater 7 is accumulative and thus you can install on any JRun 4 Server.</p><p>As for updates for ColdFusion, I think updater 7 is required for CF8.</p><p>But by rule of thumb, I tend to update dev, test, qa, staging and then live environments with every update as they come out.</p><p>Security on JRun affects CF in that CF is sitting on top of it. If you get what I mean?</p><p>Better safe then sorry, all pen testing reports I have seen say patch to the latest level.</p><p>HTH</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675929">2</a> by Raul Riera
		posted on 1/8/2008 at 1:03 AM
		</div>
		<div class="comment_text"><p>Why did you used it for Leopard? runs just fine on mine, I have to manually start it via terminal, but everything runs great from there</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675951">3</a> by Raymond Camden
		posted on 1/8/2008 at 1:06 AM
		</div>
		<div class="comment_text"><p>@Rual - I forget why - but I know it isn't supported. It's one of the things mentioned for the next CF update, along with 64 bit support.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675939">
	<div>
		<img src="https://disqus.com/api/users/avatars/aaronlongnion.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675939">4</a> by Aaron Longnion
		posted on 1/8/2008 at 3:43 AM
		</div>
		<div class="comment_text"><p>If you haven't already, look closely at the release notes in <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fsupport%2Fdocumentation%2Fen%2Fjrun%2F4%2Fupdater7%2Freleasenotes_4_updater7.pdf%3AYuKfblQ8fo_cohyG8f1D_R2WUMQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/support/documentation/en/jrun/4/updater7/releasenotes_4_updater7.pdf">http://www.adobe.com/suppor...</a> and <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fsupport%2Fdocumentation%2Fen%2Fjrun%2F4%2Freleasenotes_4_updater6.html%3AZ5vyKs_II6TIoHsxqmj5lbOmxG0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/support/documentation/en/jrun/4/releasenotes_4_updater6.html">http://www.adobe.com/suppor...</a></p><p>If any of the fixes/enhancements are important to your environment, then you should put together a plan to apply the updater and then regression test your applications (especially look for issues where the updater had made changes that could affect your particular app).  Next, as Big Mad points out, it's best to test in dev and staging/test for at least a few weeks before deploying to production.  Best wishes!</p></div>
	</div>
</div>
		