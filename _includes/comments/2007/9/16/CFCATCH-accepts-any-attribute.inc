
<div class="comment" id="c_1713671819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671819">1</a> by Gary Funk
		posted on 9/17/2007 at 1:59 AM
		</div>
		<div class="comment_text"><p>That's very interesting. I noticed his entry this morning as I was reading my mormal list of blogs. I hadn't given it much thought as I hadn't ran the code. I just thought maybe he missed the type="" when he typed it in. <br>Thanks for the insight Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671810">2</a> by Joe Mastroianni
		posted on 9/17/2007 at 4:50 AM
		</div>
		<div class="comment_text"><p>I guess it works that way to minimize cases of cfcatch throwing it's own errors.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671820">3</a> by Marko Tomic
		posted on 9/18/2007 at 6:07 AM
		</div>
		<div class="comment_text"><p>Another useful thing to know about cfcatch tag is that you can throw your own errors using cfthrow tag.  This is useful when dealing with custom tags.</p><p>For example, you can have a custom tag called parrisHilton.cfm and inside it you could have conditional cfthrows:</p><p>&lt;cfif bla&gt;</p><p>   &lt;cfthrow type="parisHilton" message="Is my hero" /&gt;</p><p>&lt;cfelse&gt;</p><p>   &lt;cfthrow type="parisHilton2" message="Is not my hero" /&gt;</p><p>&lt;/cfif&gt;</p><p>Then you could catch those errors like so:</p><p>&lt;cftry&gt;</p><p> &lt;cf_parisHilton&gt;</p><p>&lt;cfcatch type="parisHilton"&gt;&lt;/cfcatch&gt;</p><p>&lt;cfcatch type="parisHilton2"&gt;&lt;/cfcatch&gt;</p><p>&lt;/cftry&gt;</p><p>Hope, this makes sense :)</p><p>Marko</p></div>
	</div>
</div>
		