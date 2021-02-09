
<div class="comment" id="c_1713623558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623558">1</a> by Ryan Guill
		posted on 12/20/2005 at 12:11 AM
		</div>
		<div class="comment_text"><p>Its funny you mention this, we just had a (looong) discussion about this on cf-talk just last week I think:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.houseoffusion.com%2Fcf_lists%2Fmessages.cfm%2Fforumid%3A4%2Fthreadid%3A43621%3AY9MtS4l7iU8RfMo4TD51Ifajqb0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.houseoffusion.com/cf_lists/messages.cfm/forumid:4/threadid:43621">http://www.houseoffusion.co...</a></p><p>It has to do with rounding errors that are inherit to all software languages and the conversion to binary and back again.</p><p>This should work as expected i believe: &lt;cfset vat = int(vat*100)/100&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623537">2</a> by Beth
		posted on 12/20/2005 at 12:31 AM
		</div>
		<div class="comment_text"><p>Here's a workaround I used in days of old:</p><p>&lt;cfset cost="199"&gt; <br>&lt;cfset vat=(cost * 0.175)&gt; <br>&lt;cfset vatrounded = int( (vat + 0.005) * 100 ) / 100 /&gt;<br>&lt;cfset vatrounded = NumberFormat(vatrounded, "__.__")&gt;<br>testvalue: #vat# rounded: #vatrounded#&lt;br /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623546">3</a> by Joe Rinehart
		posted on 12/20/2005 at 1:16 AM
		</div>
		<div class="comment_text"><p>This'll fix it, too:</p><p>&lt;cfset cost = "199"&gt; <br>&lt;cfset vat = (cost * 0.175) &gt; <br>&lt;cfset vat = javacast("float", vat) /&gt;<br>&lt;cfset vatrounded=NumberFormat(vat, "__.__")&gt;</p><p>#vat# #vatrounded#</p><p>-Joe</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623543">4</a> by Barneyb
		posted on 12/20/2005 at 1:18 AM
		</div>
		<div class="comment_text"><p>If you're interested, add this line:</p><p>&lt;br /&gt;#(vat - 34.825) * 100000000000000#</p><p>Just after the #vat# #vatrounded# line in the original example.  It'll show the error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623545">5</a> by Brandon Harper
		posted on 12/20/2005 at 9:57 AM
		</div>
		<div class="comment_text"><p>Yeah, that's ironic.. I wrote a post about this a few days before it showed-up on CF-Talk:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdevnulled.com%2Fcontent%2F2005%2F12%2Fcoldfusion-comparison-of-large-integers-gotcha%2F%3AM0EIxaW6rkbmVjlSnOfMTaHFPdI&amp;cuid=3321886" rel="nofollow noopener" title="http://devnulled.com/content/2005/12/coldfusion-comparison-of-large-integers-gotcha/">http://devnulled.com/conten...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623540">6</a> by Raymond Camden
		posted on 12/20/2005 at 5:25 PM
		</div>
		<div class="comment_text"><p>Geeze, it must be something in the air then. ;) Well, this is precisely the kind of thing that probably should be repeated. It needs to be something people don't forget about.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623552">7</a> by Daniel D
		posted on 12/20/2005 at 9:24 PM
		</div>
		<div class="comment_text"><p>Also remember that float/doubles are not 100% accurate in how they hold decimals.  See Sean's post <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.corfield.org%2Fblog%2Findex.cfm%2Fdo%2Fblog.entry%2Fentry%2FMore_on_Floating_Point%3A3sc8U4V43nEoOeyRhgAZO12ZPig&amp;cuid=3321886" rel="nofollow noopener" title="http://www.corfield.org/blog/index.cfm/do/blog.entry/entry/More_on_Floating_Point">http://www.corfield.org/blo...</a><br>and the detailed article he links to in his post. <br><a href="http://disq.us/url?url=http%3A%2F%2Fblogs.msdn.com%2Fericlippert%2Farchive%2F2005%2F01%2F13%2F352284.aspx%3AqMC_vOqoZYSDRBw_kESUWDvsTuc&amp;cuid=3321886" rel="nofollow noopener" title="http://blogs.msdn.com/ericlippert/archive/2005/01/13/352284.aspx">http://blogs.msdn.com/ericl...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713623551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713623551">8</a> by Akos
		posted on 11/12/2009 at 5:49 PM
		</div>
		<div class="comment_text"><p>The post written by Beth containing:<br>&lt;cfset vatrounded = int( (vat + 0.005) * 100 ) / 100 /&gt;<br>has saved my life and job toooooo...<br>Thank you soooo much.....</p></div>
	</div>
</div>
		