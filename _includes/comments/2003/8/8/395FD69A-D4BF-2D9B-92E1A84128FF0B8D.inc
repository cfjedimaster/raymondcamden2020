
<div class="comment" id="c_1713614836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614836">1</a> by Dan G. Switzer, II
		posted on 8/9/2003 at 4:38 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>I suspect this may have something to do w/your cache options. I bet if you configure your cache not to re-request a page on each hit, the problem goes away.</p><p>I agree, it's a bug though. It shouldn't be re-requesting the document--that actually seems to defeat the purpose of viewing the source code to me (since you could technically be viewing completely different source code than what was used to generate the current page.)</p><p>-Dan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614839">2</a> by Chris Johnston
		posted on 8/11/2003 at 3:11 PM
		</div>
		<div class="comment_text"><p>I have noticed the same bug when I go backwards through the history. This is most noticable on internet forums. I will click on a thread to view and when I hit the back arrow (or alt-left arrow) the thread that I just viewed will be tagged as read. This can only happen if Mozilla has rerequested the page.</p><p>The odd thing is that this only happens intermittently. As far as I can remember it has been happening since Mozilla 1.3.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614840">3</a> by Dennis
		posted on 8/11/2003 at 6:12 PM
		</div>
		<div class="comment_text"><p>I am using a recent Mozilla Firebird nightly and I am not having that problem.  I am viewing a remote  page on a development site where I output the GetTickCount() and compared the two.   The (wonderful) Live HTTP Headers extension also indicates that nothing is happening over the network.</p><p>I turned up these bugs:<br><a href="http://disq.us/url?url=http%3A%2F%2Fbugzilla.mozilla.org%2Fshow_bug.cgi%3Fid%3D166786%3A0jOMwwM_tkLxGhvJnYHcPtUJq6o&amp;cuid=3321886" rel="nofollow noopener" title="http://bugzilla.mozilla.org/show_bug.cgi?id=166786">http://bugzilla.mozilla.org...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fbugzilla.mozilla.org%2Fshow_bug.cgi%3Fid%3D212650%3A7QfWbLjHr8eThz71j24vJRu1uhI&amp;cuid=3321886" rel="nofollow noopener" title="http://bugzilla.mozilla.org/show_bug.cgi?id=212650">http://bugzilla.mozilla.org...</a></p><p>Not exactly what you're seeing.  I just tested on the 20030811 Mozilla 1.5b nightly and also didn't see that problem.  I agree it would be a huge problem.  Perhaps it was fixed recently.</p></div>
	</div>
</div>
		