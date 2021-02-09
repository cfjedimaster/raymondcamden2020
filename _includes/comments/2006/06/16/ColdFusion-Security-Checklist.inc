
<div class="comment" id="c_1713654241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654241">1</a> by Steve Bryant
		posted on 6/16/2006 at 5:04 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks for providing this resource.</p><p>I am curious about your thoughts on keeping the username/password out of the DSN. I understand the purpose is so that someone needs to know more than just your DSN to access your database.</p><p>In my experience, I am either on shared hosting where that option isn't available or on a dedicated machine where the issue doesn't seem to apply. What am I missing?</p><p>You might also want to add that you shouldn't use the sa user in SQL Server for your ColdFusion DSN.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654237">2</a> by Raymond Camden
		posted on 6/16/2006 at 5:39 PM
		</div>
		<div class="comment_text"><p>Steve, that was the idea. Having the U/P in the dsn means anyone can use it, if you aren't using sand boxes.</p><p>To be honest, I may remove this item. It has caused the most contention.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654249">3</a> by Michael White
		posted on 6/16/2006 at 5:53 PM
		</div>
		<div class="comment_text"><p>do you have links to separate presentations/articles you may have given/written on validation? I presume you have an enormous repository somewhere... perhaps in the central computer on coruscant?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654254">4</a> by Raymond Camden
		posted on 6/16/2006 at 5:57 PM
		</div>
		<div class="comment_text"><p>Actually, it occured to me last night that I do not have a list of presentations. It is on my TODO list.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654246">5</a> by Terrence Ryan
		posted on 6/16/2006 at 6:39 PM
		</div>
		<div class="comment_text"><p>Ray, for what it's worth, I really agree with not putting the password in the DSN.</p><p>There are other reasons for doing so in addition to security. In our environment we have many multiple applications with their own database in only a few servers. (So many databases, few servers) By not putting the database info in the DSN we only have one DSN per database server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654247">6</a> by Adam Cameron
		posted on 6/17/2006 at 12:51 PM
		</div>
		<div class="comment_text"><p>Terrence, is there a reason that only having one DSN per database server is actually a significant consideration?</p><p>Does this mean you have a bunch of DB usernames and pwds being stored in plain-text somewhere, so they can be used as arguments in &lt;cfquery&gt; parameters?</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654234">7</a> by Terrence Ryan
		posted on 6/17/2006 at 9:09 PM
		</div>
		<div class="comment_text"><p>Absolutely.</p><p>Before, you tell me how bad an idea that is, understand that my environment may be very different from yours.  We host our own machines. Only people from my company have access to the development and staging boxes.  No developers have access to production boxes, except through a code publisher. All SQL accounts are given out with the only read write access. Our datasources don't allow grant, drop, add (and in some cases they are only able to call stored procs.)</p><p>In my environment, our setup allows us a lot of flexibility with a little bit of risk.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654236">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654236">8</a> by Adam Cameron
		posted on 6/17/2006 at 11:58 PM
		</div>
		<div class="comment_text"><p>Hi Terrence.<br>I wasn't suggesting anything was bad.  I was asking... [well: read my posting, it's clear waht I was asking].</p><p>You don't seem to have answered by questions.  Or I'm not understanding how your response answers my questions, anyhow.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654240">9</a> by Terrence Ryan
		posted on 6/20/2006 at 11:45 PM
		</div>
		<div class="comment_text"><p>I'm sorry Adam. I got sidetracked.</p><p>I like having only datasource per database server because we usually have one database per application, and about 50 separate applications per server, across 3 distinct development environments.</p><p>So that at one datasource per application, it would be around 150, as opposed to the 10 we actually have. (two SQL development servers, two SQL production servers, then some various for apps on servers I don't control.)</p><p>So managment of all of those datasources is much less work, when it is  1 per server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654242">10</a> by Adam Cameron
		posted on 7/6/2006 at 1:43 PM
		</div>
		<div class="comment_text"><p>Hi Terrence.<br>I think what you say is fair enough for your environment (although I don't exactly know what additional management there is as far as setting up a DSN or setting up a user in the DB, but anyway).  And I still question whether the potential security holes you're creating are worth the "convenience" to you of not having to set up DSNs.  Mileage varies, though, so let's agree to disagree.</p><p>Your situation hardly describes the "most common situation" though, does it?  And surely that's the audience that Ray's doc would be targetted at?</p><p>I think *generally* (ie: in most scenarios where one site = one DSN), it is Very. Poor. Advice. to suggest what Ray is suggesting.</p><p>I - respectfully - ask Ray to remove that advice from his document, which is otherwise spot on.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654239">11</a> by Raymond Camden
		posted on 7/6/2006 at 5:18 PM
		</div>
		<div class="comment_text"><p>Adam, to be clear, you object to the moving of the u/p out of the DSN and into cfquery?</p><p>This is definitely a contenious point for most of the readers. I think it's about 50/50 which may be as good as we get.</p><p>I do think I address the concerns in the entry, so I think it's ok as is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654230">12</a> by Adam Cameron
		posted on 7/6/2006 at 6:19 PM
		</div>
		<div class="comment_text"><p>Sorry, yes you do.</p><p>I didn't (re-)read the entire paragraph.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		