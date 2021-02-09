
<div class="comment" id="c_1713709677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709677">1</a> by Tim Garver
		posted on 11/7/2008 at 8:32 AM
		</div>
		<div class="comment_text"><p>Very nice Ray..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709671">2</a> by Sean
		posted on 11/7/2008 at 8:32 AM
		</div>
		<div class="comment_text"><p>You can just do a get('Employee',<a href="http://disq.us/url?url=http%3A%2F%2Furl.id%3A0bRnXeBrI7OIqL9bKyG2zQPmmP0&amp;cuid=3321886" rel="nofollow noopener" title="url.id">url.id</a>) no need to call new if id is zero.  calling get with a non-existant ID returns an empty transferObject so its the same as calling new but without the cfif overhead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709667">3</a> by Raymond Camden
		posted on 11/7/2008 at 8:35 AM
		</div>
		<div class="comment_text"><p>@Sean: Good tip there! I didn't know that. Although to be honest, I prefer the more specific code here. On the flip side, I don't call create before my save since save does it for me - so in _that_ case I prefer the less specific code I guess. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709675">4</a> by Bob Silverberg
		posted on 11/7/2008 at 9:37 AM
		</div>
		<div class="comment_text"><p>Although it's true that transfer.get() will return an empty object if it doesn't find an existing object for a given id (which is a great feature, IMO), I'm not sure that it would be a good design decision in this case.</p><p>Transfer has no way of knowing that 0 is not a valid id, so it will query the database to find out.  By using <a href="http://disq.us/url?url=http%3A%2F%2Ftransfer.new%3AkAQHf0E4ru5fjLozbGFc4HUhAas&amp;cuid=3321886" rel="nofollow noopener" title="transfer.new">transfer.new</a>() whenever you know that you want an empty object you can avoid that database access, which seems like it would save more overhead than a simple cfif.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709681">5</a> by Sean
		posted on 11/7/2008 at 4:48 PM
		</div>
		<div class="comment_text"><p>Actually Transfer will call getIsPersisted to determine</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709672">6</a> by Bob Silverberg
		posted on 11/7/2008 at 7:16 PM
		</div>
		<div class="comment_text"><p>@Sean: I assume you're talking about how Transfer decides whether to create a new DB record or update an existing DB record when doing a save.  Yes, it is able to determine that automatically based on the state of the object.</p><p>I was talking specifically about using get() vs. new() when creating a Transfer Object.  If you run a quick test I believe you'll find that any time you call transfer.get("myclass",0) it will run a query against your database to see if 0 is a real record.  Even if you do this several times within a single request (e.g., if you want to create multiple Line Items for an Order), if you use transfer.get() instead of <a href="http://disq.us/url?url=http%3A%2F%2Ftransfer.new%3AkAQHf0E4ru5fjLozbGFc4HUhAas&amp;cuid=3321886" rel="nofollow noopener" title="transfer.new">transfer.new</a>() it will run a query against the database each and every time.</p><p>Note that my use of 0 in the above example is just an example of a value that does not correspond to a valid record.  There is nothing magical about 0 - if you do have a record in your table with an id of 0 it would simply retrieve that record, which is yet another reason to use <a href="http://disq.us/url?url=http%3A%2F%2Ftransfer.new%3AkAQHf0E4ru5fjLozbGFc4HUhAas&amp;cuid=3321886" rel="nofollow noopener" title="transfer.new">transfer.new</a>() instead of transfer.get() if you know you want an empty Transfer Object.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709737">7</a> by Sean
		posted on 11/7/2008 at 11:17 PM
		</div>
		<div class="comment_text"><p>Good point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709739">8</a> by Tim Garver
		posted on 11/8/2008 at 12:41 AM
		</div>
		<div class="comment_text"><p>Awesome stuff...</p><p>Found a few issues I can't seem to work around.</p><p>Lets say you have an existing query you want to replace with a Transfer object.<br>In the query you have several Expressions in the select list as column aliases.  <br>[code] select N.start_time + 5/24 + N.GMT_OFFSET/24 as ST,<br>N.* FROM table N where N.x=y<br>[/code]<br>How can this be accomplished via Transfer?</p><p>I have tried to make a property default but thats not allowed in the transfer.xml object.</p><p>Anybody have any ideas?</p><p>Great work Ray!!</p><p>Tim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709741">9</a> by Raymond Camden
		posted on 11/8/2008 at 12:44 AM
		</div>
		<div class="comment_text"><p>Tim, this is going to be covered later. Transfer has a kick ass feature called Decorators that can do exactly that. If you don't want to wait, just look for Decorators in the official docs.</p><p>I'm not sure when I'll cover it in this series. I'm kinda playing things out on the fly. The plan now is:</p><p>Joins (2-3 blog entries on relating data)<br>Getting Data (more advanced then get/list, TQL)<br>Decorators<br>Events<br>Conclusion</p><p>So as you can see, it may be late next week until I hit it up, and MAX will definitely slow me down.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709736">10</a> by Tim Garver
		posted on 11/8/2008 at 12:58 AM
		</div>
		<div class="comment_text"><p>ok cool,<br>i have a few of those now, but they are the basic ones my CFC Generator built for me which just has validation in them.</p><p>I tried TQL but it doesn't support <br>Aggregate functions<br>SQL Functions<br>Subselect in FROM statements.<br>Subselect in SELECT Column statements.</p><p>Still loving Transfer...</p><p>Tim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709740">11</a> by Henry Ho
		posted on 11/8/2008 at 4:45 AM
		</div>
		<div class="comment_text"><p>Code Reuse: Taking Advantage of Includes and Overwrites in Transfer</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.quackfuzed.com%2Findex.cfm%2F2008%2F11%2F7%2FCode-Reuse-Taking-Advantage-of-Includes-and-Overwrites-in-Transfer%3AS8HuHyyre_Lpvx-Zzbeb5OxRucM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.quackfuzed.com/index.cfm/2008/11/7/Code-Reuse-Taking-Advantage-of-Includes-and-Overwrites-in-Transfer">http://www.quackfuzed.com/i...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709738">12</a> by Jon Hayes
		posted on 5/20/2010 at 7:42 AM
		</div>
		<div class="comment_text"><p>Hi,<br>I need some help answering this question. <br>Does MG3 Gesture CRUD (as per the new docs wiki examples) remove the need to use Transfer ORM CRUD if one was building an app with MG3? Or would anyone still use transfer + MG3 to do this?</p></div>
	</div>
</div>
		