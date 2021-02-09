
<div class="comment" id="c_1713721015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721015">1</a> by Phillip Senn
		posted on 1/1/2010 at 9:47 PM
		</div>
		<div class="comment_text"><p>There's no /cfloop in your second example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721018">2</a> by Raymond Camden
		posted on 1/1/2010 at 10:00 PM
		</div>
		<div class="comment_text"><p>Yes there is. Line 5. But code block 2 is just a subset.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721017">3</a> by Gary Funk
		posted on 1/1/2010 at 10:08 PM
		</div>
		<div class="comment_text"><p>What about:</p><p>&lt;cfset var renderedText = renderEntry(entry.body,false,entry.enclosure)&gt;<br>&lt;cfset var theLink = makeLink(<a href="http://disq.us/url?url=http%3A%2F%2Fentry.id%3AGYhbzzYi0bti0YV6P-u46nVBRnU&amp;cuid=3321886" rel="nofollow noopener" title="entry.id">entry.id</a>)&gt;<br>&lt;cfset var rootURL = getRootURL()&gt;</p><p>&lt;cfsavecontent variable="theMessage"&gt;<br>&lt;cfoutput&gt;<br>	&lt;h2&gt;#entry.title#&lt;/h2&gt;<br>	&lt;b&gt;URL:&lt;/b&gt; &lt;a href="#theLink#"&gt;#theLink#&lt;/a&gt;&lt;br /&gt;<br>	&lt;b&gt;Author:&lt;/b&gt; #<a href="http://disq.us/url?url=http%3A%2F%2Fentry.name%3Ap83j2mjOKlDB8JKU6JBxGOR4Ar4&amp;cuid=3321886" rel="nofollow noopener" title="entry.name">entry.name</a>#&lt;br /&gt;</p><p>	#renderedText#&lt;cfif len(entry.morebody)&gt;<br>	&lt;a href="#theLink#"&gt;[Continued at Blog]&lt;/a&gt;&lt;/cfif&gt;</p><p>	&lt;p&gt;<br>	You are receiving this email because you have subscribed to this blog.&lt;br /&gt;<br>	To unsubscribe, please go to this URL:<br>	&lt;a href="#rooturl#unsubscribe.cfm?email=#email#&amp;token=#token#"&gt;#rooturl#unsubscribe.cfm?email=#email#&amp;token=#token#&lt;/a&gt;<br>	&lt;/p&gt;<br>&lt;/cfoutput&gt;<br>&lt;/cfsavecontent&gt;<br>&lt;cfloop query="subscribers"&gt;<br>	&lt;cfif instance.mailserver is ""&gt;<br>		&lt;cfmail to="#email#" from="#instance.owneremail#" subject="#variables.utils.htmlToPlainText(htmlEditFormat(instance.blogtitle))# / #variables.utils.htmlToPlainText(entry.title)#" type="html"&gt;#theMessage#&lt;/cfmail&gt;<br>	&lt;cfelse&gt;<br>		&lt;cfmail to="#email#" from="#instance.owneremail#" subject="#variables.utils.htmlToPlainText(htmlEditFormat(instance.blogtitle))# / #variables.utils.htmlToPlainText(entry.title)#"<br>		server="#instance.mailserver#" username="#instance.mailusername#" password="#instance.mailpassword#" type="html"&gt;#theMessage#&lt;/cfmail&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721022">4</a> by Raymond Camden
		posted on 1/1/2010 at 10:10 PM
		</div>
		<div class="comment_text"><p>@Gary: Token is unique per subscriber. It allows me to unsubscribe myself from a entry thread. (Me being a subscriber.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721028">5</a> by Raymond Camden
		posted on 1/1/2010 at 10:10 PM
		</div>
		<div class="comment_text"><p>By the way - let me publicly thank Gary again. The "slow response to a new comment" issue he fixed has made me VERY happy!</p><p>p.s. Fixing to go to inlaws for a few hours so replies to comments will be delayed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721030">6</a> by Gary Funk
		posted on 1/1/2010 at 10:17 PM
		</div>
		<div class="comment_text"><p>Ah, right. I missed the token. You could still save some time and memory by putting the message in the 'theMessage' and append the link with the token in the loop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721032">7</a> by Mikkel Johansen
		posted on 1/2/2010 at 5:43 PM
		</div>
		<div class="comment_text"><p>Before it took 10-15 sec. What impact has the fix done to the performance, how many seconds does it take now ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721031">8</a> by Raymond Camden
		posted on 1/2/2010 at 7:07 PM
		</div>
		<div class="comment_text"><p>0. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721034">9</a> by Steve &amp;aposCutter&amp;apos Blades
		posted on 1/4/2010 at 3:29 AM
		</div>
		<div class="comment_text"><p>How about something like this?:</p><p>&lt;cfset var renderedText = renderEntry(entry.body,false,entry.enclosure)&gt;<br>&lt;cfset var theLink = makeLink(<a href="http://disq.us/url?url=http%3A%2F%2Fentry.id%3AGYhbzzYi0bti0YV6P-u46nVBRnU&amp;cuid=3321886" rel="nofollow noopener" title="entry.id">entry.id</a>)&gt;<br>&lt;cfset var rootURL = getRootURL()&gt;<br>&lt;!--- Let's local scope a few more variables ---&gt;<br>&lt;cfset var theMessage = ""&gt;<br>&lt;cfset var tmp = ""&gt;<br>&lt;cfset var attr = StructNew()&gt;<br>&lt;!--- Then we'll set the mail body content that doesn't change ---&gt;<br>&lt;cfsavecontent variable="theMessage"&gt;&lt;cfoutput&gt;<br>   &lt;h2&gt;#entry.title#&lt;/h2&gt;<br>   &lt;b&gt;URL:&lt;/b&gt; &lt;a href="#theLink#"&gt;#theLink#&lt;/a&gt;&lt;br /&gt;<br>   &lt;b&gt;Author:&lt;/b&gt; #<a href="http://disq.us/url?url=http%3A%2F%2Fentry.name%3Ap83j2mjOKlDB8JKU6JBxGOR4Ar4&amp;cuid=3321886" rel="nofollow noopener" title="entry.name">entry.name</a>#&lt;br /&gt;</p><p>   #renderedText#&lt;cfif len(entry.morebody)&gt;<br>   &lt;a href="#theLink#"&gt;[Continued at Blog]&lt;/a&gt;&lt;/cfif&gt;</p><p>   &lt;p&gt;<br>   You are receiving this email because you have subscribed to this blog.&lt;br /&gt;<br>   To unsubscribe, please go to this URL:<br>&lt;/cfoutput&gt;&lt;/cfsavecontent&gt;<br>&lt;!--- Then we'll set the mail attributes that come from the instance, as they won't change on each iteration ---&gt;<br>&lt;cfset attr.from = instance.owneremail&gt;<br>&lt;cfset attr.subject = variables.utils.htmlToPlainText(htmlEditFormat(instance.blogtitle)) &amp; " / " &amp; variables.utils.htmlToPlainText(entry.title)&gt;<br>&lt;cfset attr.type = "html"&gt;<br>&lt;!--- We'll add the mail server, if we need it ---&gt;<br>&lt;cfif Len(Trim(instance.mailserver))&gt;<br>	&lt;cfset attr.server = instance.mailserver&gt;<br>	&lt;cfset attr.username = instance.mailusername&gt;<br>	&lt;cfset attr.password = instance.mailpassword&gt;<br>&lt;/cfif&gt;<br>&lt;cfloop query="subscribers"&gt;<br>   &lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fattr.to%3AgTiCUj_3dDUNS6IMfsabz43rozY&amp;cuid=3321886" rel="nofollow noopener" title="attr.to">attr.to</a> = email&gt;<br>   &lt;!--- Then we'll concantonate our mail body with the subscriber specific info ---&gt;<br>   &lt;cfset tmp = theMessage &amp; "&lt;a href='#rooturl#unsubscribe.cfm?email=#email#&amp;token=#token#'&gt;#rooturl#unsubscribe.cfm?email=#email#&amp;token=#token#&lt;/a&gt;&lt;/p&gt;"&gt;<br>   &lt;!--- And use the attribute collection for the cfmail tag, mailserver or not ---&gt;<br>   &lt;cfmail attributeCollection="#attr#"&gt;#tmp#&lt;/cfmail&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721033">10</a> by Gary Funk
		posted on 1/4/2010 at 4:29 AM
		</div>
		<div class="comment_text"><p>@Steve: Seems like someone else suggested that in comment # 6.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721035">11</a> by Steve &amp;aposCutter&amp;apos Blades
		posted on 1/4/2010 at 6:39 AM
		</div>
		<div class="comment_text"><p>@Gary,</p><p>(Call me Cutter) Yeah, my feed aggregator hadn't gotten all the comments when I wrote the code block. I didn't see that when I posted.</p><p>Great minds... ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721038">12</a> by Gary Funk
		posted on 1/4/2010 at 7:50 AM
		</div>
		<div class="comment_text"><p>@Cutter: If only Ray was a programmer of our standard. LOL</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721036">13</a> by Raymond Camden
		posted on 1/4/2010 at 7:52 AM
		</div>
		<div class="comment_text"><p>Heh, I try...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721037">14</a> by Gary Funk
		posted on 1/4/2010 at 8:30 AM
		</div>
		<div class="comment_text"><p>If you are trying to match my standard, Stop It. We don't need you down here with me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721041">15</a> by MikeG
		posted on 1/5/2010 at 3:21 AM
		</div>
		<div class="comment_text"><p>taking the other suggestions into account and using the closest code sample to this post, why not a cfthread right after<br>&lt;cfloop query="subscribers"&gt;</p><p>That way, when the blog sends email to 3000 subscribers it will still run in about 0 seconds.  No need to join them back, just let them run and die</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721043">16</a> by Raymond Camden
		posted on 1/5/2010 at 3:37 AM
		</div>
		<div class="comment_text"><p>BlogCFC runs on CF6, so cfthread isn't an option. I _can_ write code CF8 stuff (I've used cfthread for Ping), but it's a bit of a pain. As it stands, it takes 1 second now, so not worth the effort. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721042">17</a> by MikeG
		posted on 1/5/2010 at 4:36 AM
		</div>
		<div class="comment_text"><p>DOH - forgot about backwards compatibility - not used to thinking about community distributions; that has got to get frustrating.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721040">18</a> by Raymond Camden
		posted on 1/5/2010 at 4:38 AM
		</div>
		<div class="comment_text"><p>BlogCFC 6 (yes, I will build it, honest, why is everyone looking at me and snickering?) will drop 6, maybe even 7.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721046">19</a> by Gary Funk
		posted on 1/5/2010 at 5:18 AM
		</div>
		<div class="comment_text"><p>If you go with CF9 you can use the new features to keep up the database.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721045">20</a> by Raymond Camden
		posted on 1/5/2010 at 5:27 AM
		</div>
		<div class="comment_text"><p>I'd _love_ to go with CF9, but I'd probably lose 99% of my customers. I've already lost a lot to Mango - don't want to lose the rest. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721047">21</a> by Gary Funk
		posted on 1/5/2010 at 6:36 AM
		</div>
		<div class="comment_text"><p>Hmm, Manog. Heard of it... naw. I like BlogCFC way too much.</p></div>
	</div>
</div>
		