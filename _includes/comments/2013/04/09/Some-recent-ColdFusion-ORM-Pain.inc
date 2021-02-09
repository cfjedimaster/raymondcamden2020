
<div class="comment" id="c_1713745831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745831">1</a> by Jim
		posted on 4/9/2013 at 8:58 PM
		</div>
		<div class="comment_text"><p>I pretty much stopped using ORM in Coldfusion for such reasons.  I found it frustratingly difficult to figure out what an error message was telling me, or lack thereof.  I got a few things working, but it just took an incredible amount of time.   As soon as you get into more complex relationships it gets really harry.</p><p>We don't require database vendor independence so I just created my own way of doing things with queries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745832">2</a> by MikeZ
		posted on 4/9/2013 at 10:09 PM
		</div>
		<div class="comment_text"><p>I'm with Jim, though for slightly different reasons. <br>While plain Hibernate is a pure godsend in a Java environment, the ORM integration in CF can be such a pain at times that I'm also moving away from it. And don't even get me started on how useful easy access to Envers can be.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745833">3</a> by Misty
		posted on 4/9/2013 at 10:44 PM
		</div>
		<div class="comment_text"><p>Me too :),</p><p>I started building a Legder Application with ORM but have to come back to CFC and Queries due to its undoubtedly complexity</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745835">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745835">4</a> by Martijn van der Woud
		posted on 4/10/2013 at 10:33 PM
		</div>
		<div class="comment_text"><p>I agree the CF ORM integration can be difficult to work with in the beginning, but once you get the hang of it, the productivity gain is amazing.</p><p>When it comes to debugging, please remember that the actual SQL queries are not run by Hibernate until the Hibernate session is flushed. ColdFusion flushes the Hibernate session on request end by default, after the HTTP response is sent back to the client (usually a browser). I think this is why Ray did not see any error message at first. During debugging it can be helpful to flush the ORM session manually using OrmFlush(). Also, setting this.ormsetting.logsql to true in Application.cfc can be a lifesaver.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745836">5</a> by Raymond Camden
		posted on 4/11/2013 at 1:39 AM
		</div>
		<div class="comment_text"><p>Oh fascinating Martijn. So would it have been logged *anywhere* then? To be clear, I had turned on logsql. It showed nothing. Well, it showed inserts, but no errors.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745838">6</a> by Salvatore fusto
		posted on 4/11/2013 at 1:51 PM
		</div>
		<div class="comment_text"><p>Well,<br>i was just considering to move to CF ORM, from plain queries and dataMgr, but this article and comments made me turn back, so thanks very much!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745837">7</a> by Raymond Camden
		posted on 4/11/2013 at 3:54 PM
		</div>
		<div class="comment_text"><p>Well, I wouldn't avoid ORM. It just can be a bit tricky at times. Plus I'm a bit rusty. It has been - possibly - a good whole year since I used it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745839">8</a> by Salvatore fusto
		posted on 4/11/2013 at 5:21 PM
		</div>
		<div class="comment_text"><p>Neither tricky nor rusty, sir. Surely we are not the only peoples that does not like, or even hate, cf orm: there are many many others.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745842">9</a> by Jim
		posted on 4/11/2013 at 9:23 PM
		</div>
		<div class="comment_text"><p>To log the full queries and errors for ORM, see the following:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.rupeshk.org%2Fblog%2Findex.php%2F2009%2F07%2Fcoldfusion-orm-how-to-log-sql%2F%3AcYln_4A152YinRs-Dhqj7SJODkw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.rupeshk.org/blog/index.php/2009/07/coldfusion-orm-how-to-log-sql/">http://www.rupeshk.org/blog...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745841">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745841">10</a> by Raymond Camden
		posted on 4/11/2013 at 9:25 PM
		</div>
		<div class="comment_text"><p>To be clear Jim, I *was* doing this. It didn't help. (Well, outside of confirming it wasn't doing the inserts.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745845">11</a> by Martijn van der Woud
		posted on 4/11/2013 at 11:04 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>In Railo the ORM exceptions are logged in a file called orm.log. I can image it's the same for Adobe ColdFusion. Could you check that?</p><p>For me it usually gives me useful information like:</p><p>"Cannot delete or update a parent row: a foreign key constraint fails ....."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745844">12</a> by Aaron Neff
		posted on 4/14/2013 at 12:00 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Just FYI, this should also work: invoke(content, "set#li#", [data[li]]);</p><p>A benefit of the new argument array support is that unnamed arguments maintain their order, even when the function signature defines arguments but the argument array length exceeds the number of defined arguments.</p><p>Just like w/ superfluous struct keys, the entity's dynamic setter will ignore any superfluous array elements.</p><p>Thanks!,<br>-Aaron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745843">13</a> by Raymond Camden
		posted on 4/14/2013 at 7:02 PM
		</div>
		<div class="comment_text"><p>Cool, thanks for sharing that Aaron.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745847">14</a> by papichulo
		posted on 4/23/2013 at 5:28 AM
		</div>
		<div class="comment_text"><p>I got away from CF ORM and datamgr all together. Been a happy cfwheels user for two years and I've never looked back. Cfwheels has it's own ORM, and you should check out how easy you can handle nested properties <a href="http://disq.us/url?url=http%3A%2F%2Fcfwheels.org%2Fdocs%2F1-1%2Fchapter%2Fnested-properties%3A0sExonE-Sxhk6XX4LzbyxsNl9Ms&amp;cuid=3321886" rel="nofollow noopener" title="http://cfwheels.org/docs/1-1/chapter/nested-properties">http://cfwheels.org/docs/1-...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745849">15</a> by Aaron Neff
		posted on 4/24/2013 at 9:30 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>You're very welcome.  That was a very small piece of info compared to what I've learned from your blog over the years.  So I'm glad that it'll possibly help.</p><p>Thanks!,<br>-Aaron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745848">16</a> by Adam Tuttle
		posted on 9/12/2014 at 1:10 AM
		</div>
		<div class="comment_text"><p>I just ran into this issue ("coldfusion.orm.PersistentTemplateProxy cannot be cast to java.lang.String") because I was attempting to set an entity into a string column (duh). Just wanted to add that to this record for other people and probably future me. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745850">17</a> by Michael Zock
		posted on 9/12/2014 at 5:07 AM
		</div>
		<div class="comment_text"><p>Adam, there's actually a Hibernate feature along those lines: <a href="http://disq.us/url?url=http%3A%2F%2F256.com%2Fgray%2Fdocs%2Fmisc%2Fhibernate_lazy_field_access_annotations.shtml%3AAglvgdfrWB6a5ZKgvCQE3bXhq_o&amp;cuid=3321886" rel="nofollow noopener" title="http://256.com/gray/docs/misc/hibernate_lazy_field_access_annotations.shtml">http://256.com/gray/docs/mi...</a></p></div>
	</div>
</div>
		