
<div class="comment" id="c_1713720379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720379">1</a> by Dan Vega
		posted on 12/8/2009 at 10:00 PM
		</div>
		<div class="comment_text"><p>Awesome tip. As you stated its an incredible waste of resources to grab a list of members based on the group and then count them, this is much better. Thank You!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720359">2</a> by Sam Farmer
		posted on 12/9/2009 at 1:36 AM
		</div>
		<div class="comment_text"><p>Pretty much what Dan said.  Cool tip.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720380">3</a> by John Allen
		posted on 12/9/2009 at 3:43 AM
		</div>
		<div class="comment_text"><p>Sharp.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720381">4</a> by Ben Nadel
		posted on 12/9/2009 at 4:25 AM
		</div>
		<div class="comment_text"><p>It's going to be interesting to see if people start writing HQL more than they write SQL? I guess once you start playing with HQL, it becomes more second nature.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720385">5</a> by Sam Farmer
		posted on 12/9/2009 at 5:17 AM
		</div>
		<div class="comment_text"><p>@Ben I've been using more HQL as it returns objects not a query recordset.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720384">6</a> by Ben Nadel
		posted on 12/9/2009 at 6:14 PM
		</div>
		<div class="comment_text"><p>@Sam,</p><p>Oooh right; I forgot that HQL returns objects :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720386">7</a> by Raymond Camden
		posted on 12/9/2009 at 7:01 PM
		</div>
		<div class="comment_text"><p>No, HQL _can_ return objects. If you ask for specific columns, you get structs. In both cases the core result is an array, EXCEPT when you specify unique result.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720374">8</a> by Sam Farmer
		posted on 12/9/2009 at 9:11 PM
		</div>
		<div class="comment_text"><p>Oh.  Interesting.  I just tried getting columns in HQL and got an array of arrays...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720375">9</a> by Raymond Camden
		posted on 12/9/2009 at 9:37 PM
		</div>
		<div class="comment_text"><p>Ah sorry, not array of structs. You are right. So you have to remember what position your select statement uses for each column.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720377">10</a> by Sam Farmer
		posted on 12/11/2009 at 2:39 AM
		</div>
		<div class="comment_text"><p>Yeah, the array of array's is the first thing I've come across with ORM that I don't like so far...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720376">11</a> by Jon Hartmann
		posted on 12/12/2009 at 1:19 AM
		</div>
		<div class="comment_text"><p>This looks like the answer to one of the questioned I posted on my blog back near Thanksgiving. Basically, I found some relatively simple database tasks that just stumped me when trying to figure out how to do them with the ORM/HQL system. Now if only you can solve to other ones :)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.jonhartmann.com%2Findex.cfm%2F2009%2F11%2F25%2FHow-Do-You-Do-This-with-ColdFusion-9-ORM-%3ARNZYwnz7-VtFzLNUklumvdFP3k4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.jonhartmann.com/index.cfm/2009/11/25/How-Do-You-Do-This-with-ColdFusion-9-ORM-">http://www.jonhartmann.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720378">12</a> by Jon Hartmann
		posted on 12/12/2009 at 1:20 AM
		</div>
		<div class="comment_text"><p>Err, link got mangled: <a href="http://disq.us/url?url=http%3A%2F%2Ftiny.cc%2F550DQ%3AiYGvIibIhFm-prkxQANoIKVKIjw&amp;cuid=3321886" rel="nofollow noopener" title="http://tiny.cc/550DQ">http://tiny.cc/550DQ</a></p><p>I figure that this count could could be abstracted into a reusable method on the entity itself... I'll have to look into that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720382">13</a> by Scott Stroz
		posted on 2/12/2012 at 12:05 AM
		</div>
		<div class="comment_text"><p>I am likely doing something wrong, but I am unable to get this to work.</p><p>If there are no related items (in my case I have an 'Account' object that can have multiple Users). If an account has no users, the result of my HQL is an empty array.</p><p>Another issue that may arise is that this will only work on persisted objects. If I add a user to an account and then try this method without persisting the account, I get the same results.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720383">14</a> by Scott Stroz
		posted on 2/12/2012 at 12:09 AM
		</div>
		<div class="comment_text"><p>Just tested...if I persist the Account object, the result of the HQL is what I expect - a array with one element who's value is '0'.</p><p>Carry on...nothing more to see here.....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720387">15</a> by Laura Hansen
		posted on 1/17/2013 at 1:20 AM
		</div>
		<div class="comment_text"><p>How would you go about adding a condition for the items you are wanting to count?</p><p>Say you want to find how many members in the group are female?</p><p>you can't just go:<br>Where g.members.gender = 'female'</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720388">16</a> by Raymond Camden
		posted on 1/17/2013 at 1:58 AM
		</div>
		<div class="comment_text"><p>I don't think you're going to do that in _one_ HQL statement. But it shouldn't be hard to do manually, and even easier to add a bit of caching to it. Unfortunately, I haven't used CF ORM in a while. I'm rusty.</p></div>
	</div>
</div>
		