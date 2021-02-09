
<div class="comment" id="c_1713615928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615928">1</a> by Paul Kenney
		posted on 6/30/2004 at 5:09 PM
		</div>
		<div class="comment_text"><p>Sounds like a great idea.  I know I'm not a fan of UUIDs in the urls because they're too long in emails.</p><p>So just to make sure I understand, when you create a new entry, there is another field for the "alias" that you would have to fill in. I guess that it would also check upon submission that the alias is not already in use--it acts as an alternate key for the entry.</p><p>If one of the goals is to make the urls shorter, could a shorter 'unique' value be used instead of a uuid.  If you do something akin to the following:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fentry.id%3AGYhbzzYi0bti0YV6P-u46nVBRnU&amp;cuid=3321886" rel="nofollow noopener" title="entry.id">entry.id</a> = CreateUUID().hashCode();</p><p>you will have an integer that is probably going to be unique enough for all the entries.</p><p>Anyhow, cool stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615933">2</a> by Tim
		posted on 6/30/2004 at 5:34 PM
		</div>
		<div class="comment_text"><p>Not 5 minutes ago I had an end user complain about the length of the URL's created for specific posts.  I'm a big fan of this idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615932">3</a> by PaulH
		posted on 6/30/2004 at 7:26 PM
		</div>
		<div class="comment_text"><p>if its a choice, i'd opt for the multi-user/multi-blog before doing away with UUID.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615929">4</a> by Raymond Camden
		posted on 6/30/2004 at 7:56 PM
		</div>
		<div class="comment_text"><p>Let me be clear - UUIDs are NOT going away. The "Alias" feature would simply be _another_ way to load an entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615931">5</a> by Shawn Porter
		posted on 6/30/2004 at 10:11 PM
		</div>
		<div class="comment_text"><p>I think that is an excellent idea.</p><p>Like Paul pointed out, you'd want to ensure that the alias is unique.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615934">6</a> by stylo
		posted on 7/1/2004 at 4:25 AM
		</div>
		<div class="comment_text"><p>Why don't you just use a simple sequential ID, as in "entry=421"???</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615940">7</a> by Raymond Camden
		posted on 7/1/2004 at 3:29 PM
		</div>
		<div class="comment_text"><p>I didn't use a sequential ID because I needed a simple way to get an ID when inserting a record. I could have used locks I suppose, but UUIDs were simple and allowed me to use the same code across SQL Server, MySQL, and Access.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615930">8</a> by John Farrar
		posted on 7/2/2004 at 3:28 PM
		</div>
		<div class="comment_text"><p>Why are you storing configuration in INI and not in XML? Since this blog uses CFC's, that means you have to use MX... and XML is available.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615936">9</a> by Raymond Camden
		posted on 7/2/2004 at 3:49 PM
		</div>
		<div class="comment_text"><p>I actually find ini files a bit more readable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615938">10</a> by John Farrar
		posted on 7/2/2004 at 5:49 PM
		</div>
		<div class="comment_text"><p>I can somewhat agree with that... but there is no way to create a DTD or Schema to validate the content. (Of course... just sharing perspective here, your method is fine... but these are my perspectives) You cannot nest or structure the INI details as well. If things were set up in XML... and there was a shared/multi-blog/domain ... it would be a more versitile form of structure to keep the configuration in one place. My experience is to use two files... a common file that works with declaring the primary (blog in this case) that is requested, and a configuration file for each blog. This allows the individual blogs to be updated independently.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615942">11</a> by Raymond Camden
		posted on 7/2/2004 at 10:07 PM
		</div>
		<div class="comment_text"><p>Just an FYI, I got aliases working locally and it runs fine. :) I've decided I'm going to "slipstream" this release. That means when I got alias done for mysql/access, update the word doc, I'll release it as an alpha. Then I'll add another feature, and so on, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615935">12</a> by Arindam Biswas
		posted on 7/3/2004 at 12:50 PM
		</div>
		<div class="comment_text"><p>If I did read blog.cfc correctly, the notifyEntry() function looks up the database for all those who have commented for the particular post and mails them. I'd like this to be optional, and the boolean to be defined from the .ini file. The .ini file could define the mailserver and smtpport vars to be used along with the &lt;cfmail&gt; tag. And maybe, though this is not on top of the list, the username and password attributes for the cfmail could be picked up from the database.</p><p>Just began using your blog cfc a week back and loved every moment of going thru your code and setting it up. A fan of the owner of this blog for sometime too!!! :-)</p><p>Arindam Biswas<br>Coldfusion Developer and RiA enthusiast.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615937">13</a> by Douglas Knudsen
		posted on 7/9/2004 at 3:57 PM
		</div>
		<div class="comment_text"><p>Don't forget to add the Oracle support in  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615939">14</a> by Jeff Coughlin
		posted on 7/12/2004 at 10:11 PM
		</div>
		<div class="comment_text"><p>For aliases: What about incorporating Friendly URLs (Friendly URL Servlet - link below).  I have used it for a while as a plugin to Farcry and it seems to do the job well.  The user can still use UUID links or use an alias to enable the Friendly URL links (which are google friendly as well).</p><p>Just a thought.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.spike.org.uk%2Fprojects%2Ffuservlet%2F%3AUVJeO9QYKF_uXdnrDb_mt9b5FQ8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.spike.org.uk/projects/fuservlet/">http://www.spike.org.uk/pro...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615943">15</a> by Raymond Camden
		posted on 7/13/2004 at 12:25 AM
		</div>
		<div class="comment_text"><p>Jeff, the reason is that I don't want to tie the blog to any particular solution for SES. For example, I'd much rather use Apache's rewrite since it is builtin, or IISRewrite since it is free for one site. I also want to keep the install fairly simple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615941">16</a> by Raymond Camden
		posted on 7/13/2004 at 3:33 PM
		</div>
		<div class="comment_text"><p>What is the feeling on Oracle? How many folks would use it?</p></div>
	</div>
</div>
		