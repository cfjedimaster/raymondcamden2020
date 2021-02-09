
<div class="comment" id="c_1713709795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709795">1</a> by Brian
		posted on 11/11/2008 at 6:08 PM
		</div>
		<div class="comment_text"><p>"I can't see me needing to get employees for a benefit."</p><p>There is a case, my boss just called and it is budget cutting time.  We need to see a list of who has each benefit to determine if it is worth keeping it.</p><p>Would you have to write a regular query at this point?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709783">2</a> by Raymond Camden
		posted on 11/11/2008 at 7:25 PM
		</div>
		<div class="comment_text"><p>Brian, afaik, yes, or use TQL. But as you know, I'm also learning as well, so there is a chance I'm missing some feature.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709796">3</a> by Josh Grauer
		posted on 1/23/2009 at 12:42 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I've been going through your Transfer series of posts and they are excellent.  I wanted to post one snag I ran into -- you mention this in your post:</p><p>"We begin with the manytomany tag. I give it a name and a table name. As with other declarations, the table name is optional if it matches the name."</p><p>I ran into an error when I didn't declare the table parameter.  I got back a validation error saying that table was required per the transfer.xsd.  I'm not sure if you would still get the error if you weren't linking to the xsd, but I thought I would mention it.  I'm using Transfer 1.1.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709799">4</a> by Jeff
		posted on 1/24/2009 at 1:19 AM
		</div>
		<div class="comment_text"><p>Son of a (&amp;$@, uh, Gun.<br>I was having fun and learning too and you went and snuck in a CFMX8'ism, that using an array as an attribute to a CFLOOP tag at line 24 of the Index.cfm file.</p><p>Now I have to stop and think how I'm going to convert the array back to a list, and have to include that code for each new download...</p><p>Still, thanks, this kind of progressive build-up of an application using Transfer is just what I needed and hadn't found till you started it. and as an aside, I'm trying to get Transfer under my belt to be able to have a hope of coming up to speed on ColdBox, my next learning curve to climb!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709803">5</a> by Raymond Camden
		posted on 1/24/2009 at 1:22 AM
		</div>
		<div class="comment_text"><p>You don't have to convert it to a list. Change</p><p>&lt;cfloop index="b" array="#benes#"&gt;<br>      &lt;cfset oldbenelist = listAppend(oldbenelist, b.getID())&gt;<br>   &lt;/cfloop&gt;</p><p>to</p><p>&lt;cfloop index="x" from="1" to="#arrayLen(benes)#"&gt;<br>      &lt;cfset b = benes[x]&gt;<br>      &lt;cfset oldbenelist = listAppend(oldbenelist, b.getID())&gt;<br>  &lt;/cfloop&gt;</p><p>ColdBox? Don't you mean Model-Glue? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709801">6</a> by Raymond Camden
		posted on 1/24/2009 at 1:25 AM
		</div>
		<div class="comment_text"><p>@Josh: Hmpth. The docs say it is optional. Let me ping Mr. Transfer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709804">7</a> by Jeff
		posted on 1/24/2009 at 2:23 AM
		</div>
		<div class="comment_text"><p>OK, I over-reacted. Looked at the code and all I had to do to get it work under CFMX7 was re-write the loop:<br>&lt;code&gt;<br>&lt;cfloop index="b" from="1" to="#arrayLen(benefits)#"&gt;<br>&lt;li&gt;#Benefits[b].getName()#&lt;/li&gt;<br>&lt;/cfloop&gt;<br>&lt;/code&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709805">8</a> by Mark Mandel
		posted on 1/24/2009 at 3:25 AM
		</div>
		<div class="comment_text"><p>Looking at the docs, <br><a href="http://disq.us/url?url=http%3A%2F%2Fdocs.transfer-orm.com%2Fwiki%2FTransfer_Configuration_File.cfm%23manytomany%3Au47x9ep1uE9rG2gEKtr00aefHVo&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.transfer-orm.com/wiki/Transfer_Configuration_File.cfm#manytomany">http://docs.transfer-orm.co...</a></p><p>It doesn't say that it is optional, but it probably should be.</p><p>I'll log it as an enhancement.</p></div>
	</div>
</div>
		