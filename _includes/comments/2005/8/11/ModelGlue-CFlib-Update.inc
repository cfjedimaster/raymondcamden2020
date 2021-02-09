
<div class="comment" id="c_1713619904">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619904">1</a> by Peter J. Farrell
		posted on 8/11/2005 at 7:46 PM
		</div>
		<div class="comment_text"><p>Lookin' good Ray.  I have a comment about the submit form. When you return the validation errors, they are out of order - which causes me to hunt around to find the problem field.  It's probably because you're holding the errors in a struct?  That's why I built an errorHandler object that I set errors to.  It keeps the data in a struct, but also keeps track of the order they were set in an array that hold the struct key name. I then send my errorHandler to a message display object to display them.</p><p>It could be simpler - does your validation block check those fields out of order?</p><p>Sorry for nit-pickin', but this is one of those areas for me.  Good luck figuring it all out.</p><p>Best,<br>.Peter</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619905">2</a> by Raymond Camden
		posted on 8/11/2005 at 7:50 PM
		</div>
		<div class="comment_text"><p>I use an array actually. The order is based on the validation in the bean. I'll see if I can re-order the validation in the bean to match the order of the form. Normally I wouldn't want that kind of cohesiveness, but it's not really cohesive per se.</p><p>FYI, I forgot the download link. You can download the source code at: <a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Fdownloads%2Fbeta.cflib.org.zip%3AgexkYqp1aC1E7GXPvX6ouRkOJMo&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/downloads/beta.cflib.org.zip">http://ray.camdenfamily.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619906">3</a> by Peter J. Farrell
		posted on 8/11/2005 at 7:56 PM
		</div>
		<div class="comment_text"><p>Yea, there is some cohesiveness there...but things have to validated in some linear fashion.  In the end, it's all user usability.  For that, I'll hit a "hit" on the cohesiveness factor.  The other way is to conditionally check for the error in a &lt;cfif&gt; so they are displayed in the correct order.  I guess I'm just lazy on that front.</p><p>.Peter</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619908">4</a> by Dan G. Switzer, II
		posted on 8/11/2005 at 11:24 PM
		</div>
		<div class="comment_text"><p>I'd love see you use qForms for validation--it should fit in beautifully with your validation beans and provide you complete seperation from your form. I'm curious as to how well ModelGlue and qForms play together--I'd imagine they'd go together extremely well.</p><p>- Dan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619909">5</a> by Raymond Camden
		posted on 8/11/2005 at 11:30 PM
		</div>
		<div class="comment_text"><p>Are you INSANE, Dan?!?! Two new things at once?? I'd go crazy. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619907">6</a> by Douglas Cranston
		posted on 10/26/2006 at 9:51 PM
		</div>
		<div class="comment_text"><p>Sir..</p><p>Quick question... This Blog entry</p><p>Model-Glue CFlib Update<br>Posted At : August 11, 2005 9:04 AM</p><p>referenced a link to <a href="http://disq.us/url?url=http%3A%2F%2Fmg.cflib.org%2F%3AKH2SDMxxPCiQfrn1ZmDo6NWi0QM&amp;cuid=3321886" rel="nofollow noopener" title="http://mg.cflib.org/">http://mg.cflib.org/</a></p><p>However that is a forbidden link when I have tried it.</p><p>Has that been posted to another location that may be accessible?</p><p>Would appreciate it.</p><p>Thanks in advance.</p><p>Doug Cranston</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619911">7</a> by Raymond Camden
		posted on 10/27/2006 at 9:40 AM
		</div>
		<div class="comment_text"><p>Sorry - the MG site is down and will be staying down until I actually finish it and replace <a href="http://disq.us/url?url=http%3A%2F%2FCFLib.org%3AWOdcErJNG97LPvefvtc2ezLtDsI&amp;cuid=3321886" rel="nofollow noopener" title="CFLib.org">CFLib.org</a>. :)</p></div>
	</div>
</div>
		