
<div class="comment" id="c_1713660778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660778">1</a> by DK
		posted on 12/28/2006 at 12:27 AM
		</div>
		<div class="comment_text"><p>the addition of custom columns was enough for me to convince a client to switch their reporting to being mostly spry driven. When I showed them the custom highlighting and calculations and then the speed increase from using an xml file vs adhoc querying every time (p.s. re sorting the columns was re-hitting the db WITHOUT caching in place :O ) they love me now :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660802">2</a> by Dan
		posted on 3/9/2007 at 11:49 PM
		</div>
		<div class="comment_text"><p>You say that it's best to make the changes to the XML server side if possible which makes sense. What if I'm pulling a query with datestamps from a MySQL database, should I modify the query before running it through toXML and sending it to Spry? It probably makes sense to do the dateFormat during the conversion from Query to XML.</p><p>I could also have the database format the date, but I doubt that I should be hard coding the date/time formats into the queries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660805">3</a> by Raymond Camden
		posted on 3/10/2007 at 12:08 AM
		</div>
		<div class="comment_text"><p>I do that Dan. I've tried to do date formatting in JS, and it's SO much easier in CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660803">4</a> by Dan
		posted on 3/10/2007 at 12:25 AM
		</div>
		<div class="comment_text"><p>Kind of replying to my own comment...</p><p>I'm having one of those days where I am really hoping to find, "The Most Obvious Way" and just get my project completed. But this post just got me thinking that date formatting can be done anywhere along the line with SQL, CF, or Javascript and there seems to be pros and cons to each. It's even more confusing when you're trying to stay within the confines of MVC. (And I'll bet we'll have a way to do it in CSS in a few years as well. ;-)</p><p>Following MVC, the date formatting should probably be done in the Javascript template, but that's going to be the slowest and most cumbersome method. You're right that it's easier in CF (or even SQL), and it's probably faster since the formatting can be cached.</p><p>But, your point here was just to show that it could be done in Spry/Javascript, which is great. It's good to be knowledgeable about and to consider the different methods.</p><p>So thank you for sharing this info. I'll continue looking for "The Most Obvious Way" with the rest of the project. ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660800">5</a> by Sergey
		posted on 1/25/2008 at 3:31 AM
		</div>
		<div class="comment_text"><p>We are just going to use ColdFusion at our company (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.munsoft.com%2F%29%3AhAG1fvfmEe87Bmbx78zuGFzZQlc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.munsoft.com/)">http://www.munsoft.com/)</a> but thank you for post.</p></div>
	</div>
</div>
		