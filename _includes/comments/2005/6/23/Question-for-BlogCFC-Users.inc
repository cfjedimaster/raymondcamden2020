
<div class="comment" id="c_1713618910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618910">1</a> by Brian Rinaldi
		posted on 6/24/2005 at 2:10 AM
		</div>
		<div class="comment_text"><p>The second format (YYYY/MMMM/TITLE_WITH_UNDERSCORES) seems to make much more sense. I think accommodating people who might have two entries with the same name on the same day seems like adding unecessary complexity to meet a highly unlikely scenario. As always, thanks for your hard work on this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618917">2</a> by Raymond Camden
		posted on 6/24/2005 at 2:11 AM
		</div>
		<div class="comment_text"><p>Yeah I'm _really_ leaning toward that option.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618914">3</a> by Raymond Camden
		posted on 6/24/2005 at 2:12 AM
		</div>
		<div class="comment_text"><p>Of course, I'm also listening to very loud trance music which tends to make me over excited and not think clearly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618911">4</a> by Malcolm
		posted on 6/24/2005 at 2:24 AM
		</div>
		<div class="comment_text"><p>"YYYY/MMMM/TITLE_WITH_UNDERSCORES</p><p>Now, there is one problem with this format. If you have 2 entries on the same day with the same title, we can only serve up one."</p><p>Wouldn't this be a problem if you had any entries with the same title in the same month? as I don't see the day specified in the URL</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618918">5</a> by Raymond Camden
		posted on 6/24/2005 at 2:50 AM
		</div>
		<div class="comment_text"><p>Yep, you are right. Still a rare use case, but it can happen. For those who are curious, I have this almost 100% done on my local copy. My problem now is the darn titles. It's easy enough to say, replace spaces with underscores. Problems occur when you have a ? in the title, and I'm sure other characters would barf as well. Let me see if a simple URL encode works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618913">6</a> by Raymond Camden
		posted on 6/24/2005 at 2:58 AM
		</div>
		<div class="comment_text"><p>Barnacles. So it looks like when people do the title format, they strip out all non a-z1-9 and change spaces to _. That is super easy to do. What is NOT easy to do is to take that string and try to find it in the blog. Now, obviously, I can save that SES title when the blog entry is updated. But I'm trying to do this w/o changing the blog. I know SQL allows some fancy crap. I know I could do this style match in SQL Server for sure, but I got to make this run in 2 other DBs as well.</p><p>On the other hand - it has been a LONG time since I modified the DB.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618919">7</a> by Ryan Stewart
		posted on 6/24/2005 at 3:10 AM
		</div>
		<div class="comment_text"><p>I'm with Brian, the percentage of users who would have posts with the same title in the same month has to be miniscule.</p><p>I'd love to have the friendlier url format, so if that's the easiest way to implement it, then I say go for it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618921">8</a> by Jason Dowdell
		posted on 6/24/2005 at 7:44 AM
		</div>
		<div class="comment_text"><p>The simple workaround for duplicate entries using the "YYYY/MMMM/TITLE_WITH_UNDERSCORES" format is to append another underscore at the end of the line that corresponds to the timestamp.  That's how blogger handles it and it's fairly straightforward. I do however recommend using "-" instead of "_" since dashes are known delimiters in Google and underscores are not.  Meaning: words separated by underscores are treated as a really long string and words separated by dashes are all looked at individually from a keyword density perspective in the url.</p><p>That's my 2 cents. btw, I was going to speak at CFUnited but have had to get Pete Freitag to step in for me due to some circumstances beyond my control but I will be at the conference if you want to discuss this in more detail at that time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618912">9</a> by Raymond Camden
		posted on 6/24/2005 at 7:57 AM
		</div>
		<div class="comment_text"><p>Jason, I'm afraid you lost me completely. Can you show me an example?</p><p>As for dashes - I did notice a site doing that. Dashes it is.</p><p>As it stands - it looks like this update is going to require a DB update. I'm going to have to store the 'stripped' title in the db. I'll include a script to update old content though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618916">10</a> by Brian Rinaldi
		posted on 6/24/2005 at 8:01 AM
		</div>
		<div class="comment_text"><p>ok..its getting late, so forgive me if this is a lame idea, but...you are already filtering by the date in the yyyy/mm/dd portion of the url. It would seem to me that in many cases you may have already filtered the recordset down to 1 at that point, but even if you haven't, you probably have pared it down to a manageable number to handle finding the specific record by the title using a udf of some sort in CF. Someone who has a large number of records for their blog on a single day may notice a slight performance hit (though this seems a rare case), but in the case that their is only 1 record posted that day (which seems quite common) this should be faster than handling it within the database.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618915">11</a> by tony of the weeg clan
		posted on 6/24/2005 at 9:01 AM
		</div>
		<div class="comment_text"><p>ray i like the idea, and the final version of the url encoding... good ideas.</p><p>this is cool stuff.</p><p>ill beta test with ya, if it doesnt change my layout :)</p><p>tw</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618923">12</a> by Laura
		posted on 6/24/2005 at 1:18 PM
		</div>
		<div class="comment_text"><p>Hi,<br>I've been using friendlier URLs for some time now and it has certainly helped the indexing of the site. <br>I use IIS rewrite and I store the dashed title in the alias field so I didn't have to modify the db. I automatically generate the alias from the title, stripping anything that is not a-z1-9 as you mentioned, replacing it with the dashes. A tipical entry url looks like this: /entry/the-title-of-my-post<br>I also check for duplicate alias, just in case there are two entries with the same title (or start with the same title, since I chop it at a maximum length).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618925">13</a> by Raymond Camden
		posted on 6/24/2005 at 4:11 PM
		</div>
		<div class="comment_text"><p>Laura: Now that's interesting. I didn't think about using the alias field, but it makes perfect sense. Even better - while I can write a script for folks to update their old entries w/o aliases, folks wouldn't _need_ to run it. Their old links would continue to be ugly, and new links would be nicer.</p><p>I think that may be the solution. So, now I'm thinking this format:</p><p>root/index.cfm/yyyy/mm/title-with-dashes-as-alias</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618924">14</a> by Lars-o-matic
		posted on 6/24/2005 at 4:59 PM
		</div>
		<div class="comment_text"><p>Ray, Laura - yes, I like the (existing) alias field for this. Having a helper script to replace empty aliases with strings generated from title, etc. would be useful.</p><p>As an experiment, I tried creating duplicate aliases in existing Blog and hitting:</p><p>.../index.cfm?mode=alias&amp;alias=the_dupe</p><p>and just got the 2 entries, with their comments, one after the other.</p><p>If the intended behaviour is to map exactly one entry to the URL, this would count as a bug, but it struck me more like an undocumented feature, for grouping or threading entries.</p><p>I don't know if this would break RSS - must there be exactly one entry? - but it may be that enforcing uniqueness per entry in a SES URL schema removes a (potentially) interesting feature.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618922">15</a> by Raymond Camden
		posted on 6/24/2005 at 5:08 PM
		</div>
		<div class="comment_text"><p>Aliases were, unintentionally, allowed to be not unique. Since it seems like a smart idea, I'll pretend to have intended it.</p><p>As for this new feature, the idea is to link to -one- url only. I'm not concerned about SES links for category or date filters, so for now, it's going to assume you want the first link you find. I could, I suppose, do YYYY/MM/DD, which lets you have a bit more freedom as well.</p><p>I need to think about it. Now that I know I'm using an alias, I may be able to make it work so that if you have one result, it shows up right, and if you have 2, both show up. This is considered different views though. When one item is shown, you get the "full" entry. Ie, if the blog has a more field, you see it all, and the comments are inline. If N entries are on the page, you get the short view.</p><p>So I need to play. And I need to be quick since Monday is my last day to work for quite some time.  But I just finished my new DRK app (shhh, it's code named Harlan), so I can maybe work on it tonight.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618928">16</a> by Raymond Camden
		posted on 6/24/2005 at 6:59 PM
		</div>
		<div class="comment_text"><p>Just an FYI - I think I figured out a sytem where you don't need the import scripts. I mean update scripts. It simply uses "old style" links for old entries. I may make the script as well.</p><p>Either way - the zip will be ready soon and will be a 'beta' for folks to play with.</p><p>I was not able to get it working to allow for N titles with the same name in one month, but that should be a RARE problem if at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618931">17</a> by rd
		posted on 6/24/2005 at 7:14 PM
		</div>
		<div class="comment_text"><p>I say pick a format and run with it, I don't need it to be configurable. Also, it's kinda cool to be able to tell who is running your blog software via a signature like this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618929">18</a> by Jason Dowdell
		posted on 6/24/2005 at 7:27 PM
		</div>
		<div class="comment_text"><p>I'll connect with you at the conference and give you the pros and cons of every method mentioned above from a technical and functional perspective to ensure all bases are covered.  Either way, I'd recommend holding off on making any changes til after the conference.  You're going to need some time to ensure you know the pros and cons of all methods previously mentioned and options that have yet to be mentioned.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618933">19</a> by Raymond Camden
		posted on 6/24/2005 at 7:31 PM
		</div>
		<div class="comment_text"><p>Ok - I'm still going to release the zip - but as I said, it will be marked as a beta, and I'll be sure to let people know that it will be changed. I'm also going to deploy it here to see how it runs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618934">20</a> by Raymond Camden
		posted on 6/24/2005 at 8:06 PM
		</div>
		<div class="comment_text"><p>FYI - the new version is up now. I'll be zipping and posting soon. I didn't bother updating my old content, but I did refresh THIS entry, and it has the SES url now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618932">21</a> by tony of the weeg clan
		posted on 6/24/2005 at 8:27 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Findex.cfm%2F2005%2F6%2FQuestion-for-BlogCFC-Users%3ArOxMaF9cq78JAEHejmfiv88zxgg&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/index.cfm/2005/6/Question-for-BlogCFC-Users">http://ray.camdenfamily.com...</a></p><p>VERY COOL!</p><p>you sure did, and it works great.</p><p>tw</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618935">22</a> by Adam Howitt
		posted on 6/24/2005 at 9:16 PM
		</div>
		<div class="comment_text"><p>Ray,<br>Another approach is to maintain a translation file such that each post adds a new entry of name value pairs.  It is also stored in memory for quick reference but contains mappings from index.cfm?t=my_exciting_blog_entry to index.cfm?mode=entry&amp;entry=AAFDB316-A...</p><p>Each time the blog is reinit'd you simply reload the current mapping file and each time you post it requires a unique name.<br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618938">23</a> by Jason Dowdell
		posted on 6/25/2005 at 5:41 AM
		</div>
		<div class="comment_text"><p>Providing the dynamic version of the link on the homepage and creating another link that's properly formatted is going to incur the duplicate content penalty in all major search engines.  Again, we can talk more about this at CFUnited.  Sorry for the short comment, I'm coming down with the flu.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618939">24</a> by Raymond Camden
		posted on 6/25/2005 at 6:36 AM
		</div>
		<div class="comment_text"><p>Jason, that's not how it works. If a short URL is possible, we use it, if not, we use the old url. But one blog entry will only have one style of link to it.(If not, let me know.)</p></div>
	</div>
</div>
		