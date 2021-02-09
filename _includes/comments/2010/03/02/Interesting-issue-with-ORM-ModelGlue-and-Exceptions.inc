
<div class="comment" id="c_1713722296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722296">1</a> by Dan Wilson
		posted on 3/3/2010 at 1:26 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Would you clarify the role of Model-Glue in this circumstance?</p><p>DW</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722306">2</a> by Raymond Camden
		posted on 3/3/2010 at 2:31 AM
		</div>
		<div class="comment_text"><p>I believe - stress - believe - the trace/auto dump was part of the problem. There was the dump in the trace code as well as the dump in the exception view.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722307">3</a> by brian
		posted on 3/4/2010 at 8:01 AM
		</div>
		<div class="comment_text"><p>That tracks with something i saw after upgrading to M-G 3.x (ColdFusion 8)  I had a process that sent dumps via email -- normally no bigger than 1MB.  After the upgrade, my email box overflowed -- each email was 15MB worth of dump.  I knew what app was generating them, and just stopped sending the dumps -- didn't really take the time to analyze why so big.  When I have access tomorrow or Friday, I'll see if I can recreate.  I just remember thinking WOW, M-G 3.x sure has increased it's footprint in the application/session/catch space.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722303">4</a> by Gabriel
		posted on 3/4/2010 at 10:02 PM
		</div>
		<div class="comment_text"><p>I experienced the same in as part of dumping the exception in an email. Top="3" mitigates the issue. Thank you.</p><p>- Gabriel</p></div>
	</div>
</div>
		