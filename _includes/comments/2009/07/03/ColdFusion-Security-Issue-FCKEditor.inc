
<div class="comment" id="c_1713716624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716624">1</a> by Chad
		posted on 7/3/2009 at 8:55 PM
		</div>
		<div class="comment_text"><p>Any idea if a standard install of FCKeditor is venerable?</p><p>I have it installed on the root of some web sites /FCKeditor/ and what i am reading i should probably put this code in a password protected folder to help avoid people directly accessing the file upload code in it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716623">2</a> by Raymond Camden
		posted on 7/3/2009 at 9:40 PM
		</div>
		<div class="comment_text"><p>No idea at all - sorry. I don't use FCKEditor myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716625">3</a> by David Hammond
		posted on 7/3/2009 at 10:58 PM
		</div>
		<div class="comment_text"><p>Thanks for the heads up!  I had an ASP.Net site compromised via FCKEditor a few months ago, but it never occurred to me that CF sites that don't even use the rich text editor could be vulnerable.</p><p>To answer Chad's question, older versions of FCKEditor have definitely been vulnerable.  Not sure if it's better now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716630">4</a> by Rakshith
		posted on 7/4/2009 at 1:18 PM
		</div>
		<div class="comment_text"><p>Also please refer to this important post <a href="http://disq.us/url?url=http%3A%2F%2Fblogs.adobe.com%2Fpsirt%2F2009%2F07%2F%3AC7YOvjR1wq62x-qJnAhCWACZ7cM&amp;cuid=3321886" rel="nofollow noopener" title="http://blogs.adobe.com/psirt/2009/07/">http://blogs.adobe.com/psir...</a> from Adobe Product Security Incident Team. A fix from Adobe will be out shortly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716626">5</a> by John
		posted on 7/6/2009 at 6:28 AM
		</div>
		<div class="comment_text"><p>One thing I'm not seeing mentioned much, if at all, on the blogs about this is that the hackers seem to be expoliting JSP support in ColdFusion Enterprise to do all their damage. They can completely get around sandboxing, attack every site on the box, do all kind of damage to the server. Why is this enabled by default, and why are there not clearer warnings from Adobe about it?? If a hacker manages to get a file onto a site, whatever means that might be, it seems they should not be able to cause so much mischief so easily. It seems this is every bit as much of the issue as the vulnerable install of the editor. Or am I missing something??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716629">6</a> by Doug
		posted on 7/6/2009 at 7:19 PM
		</div>
		<div class="comment_text"><p>For those that use FCKeditor outside of CF, a new patch can be downloaded as of today:  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.fckeditor.net%2F%3Ap3iTGrVA79ppjMvQx-d-E-3VcjA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.fckeditor.net/">http://www.fckeditor.net/</a></p><p>I assume it's in response to all these postings lately, but there has been no explanation for that patch yet.</p><p>It is supposedly possible to upgrade the CF version of FCKeditor, but I've never tried it myself.  I use FCKeditor as a custom tag instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716627">7</a> by JC
		posted on 7/7/2009 at 6:41 PM
		</div>
		<div class="comment_text"><p>While you're fixing settings, remember that it's not just CFM pages that can be uploaded... JSP can execute as well, and if you're on a windows server, possibly ASP... see the post on coldfusion muse for some files<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionmuse.com%2Findex.cfm%2F2009%2F4%2F21%2FIframe.Followup.IIS.Config%3AHh485l6dpd8ZqEUmiZs6NQHc4y8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionmuse.com/index.cfm/2009/4/21/Iframe.Followup.IIS.Config">http://www.coldfusionmuse.c...</a></p></div>
	</div>
</div>
		