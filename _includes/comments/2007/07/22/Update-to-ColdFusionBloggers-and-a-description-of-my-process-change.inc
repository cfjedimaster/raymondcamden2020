
<div class="comment" id="c_1713668941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668941">1</a> by Justin Lewis
		posted on 7/23/2007 at 10:47 AM
		</div>
		<div class="comment_text"><p>I'm not sure the exact workings of &lt;cffeed but if it involves xmlParse() in any way it can take down a server pretty fast if you are parsing the amount of stuff that you are.</p><p>I think any amount of "breaking up" or threading the xmlParse part of the operation will help out alot. One thing, you could do a manual &lt;cfhttp of the filecontent of each feed and save it as a flat file then do a &lt;cffile read and a reFind or some plain text funciton to determine a new url and IF there is something new then perform the &lt;cffeed. I know it seems drastic but xmlParse destroys JVM memory like nothing else. Granted I haven't tried it with &lt;cfthread (I smell little test!) but if there is something I would like more than anything else is for CF to do some sort of 'Line by Line' xml parsing and action instead of having to parse an entire doc into memory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668945">2</a> by George Bridgeman
		posted on 7/23/2007 at 4:34 PM
		</div>
		<div class="comment_text"><p>Justin's comments brought back my nightmare of using xmlParse in the past. If cffeed uses a DOM parser (which is likely, given the task) it's going to eat memory like there's no tomorrow if you're processing nearly 300 feeds with it.</p><p>I wrote a proof of concept SAX parser for CF a while ago and I've been tinkering with it lately, providing it as example code to accompany job applications. It's a wonderful, wonderful alternative to xmlParse if you're trying to keep memory consumption low. If I can find some time today I'll plug it into the CFBloggers code today and let you know how I get on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668944">3</a> by Raymond Camden
		posted on 7/23/2007 at 5:20 PM
		</div>
		<div class="comment_text"><p>Interesting. I could store the result of CFHTTP into RAM. It's just a string. Not a small one, but 290 of them shouldn't be too bad. I would then only parse if the string had changed. I need to check and see if CFFEED allows you to pass in a plain string instead of a URL.</p><p>Shoot - it only accept filenames or URLs. That kinda stinks. I'll have to file an ER on that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668946">4</a> by Justice
		posted on 7/23/2007 at 5:38 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Why not just hash the result of the page request as text, then DB check the prior hash?  If changed, re-parse.  You could even store the prior page has in application scope memory to eliminate a db check, and hash() should run tons faster than xmlParse!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668947">5</a> by Raymond Camden
		posted on 7/23/2007 at 5:44 PM
		</div>
		<div class="comment_text"><p>Right - but the issue is that I'd have to save the file to the file system. By itself that isn't too bad - but I tend to have a fear of writing stuff out to the file system, especially in a case like this. But.... most likely in my 290 feeds only a small portion are updated.</p><p>Let me say this. Let's see how well my current change runs and see if we need to make this change as well.</p><p>Oh - the hash. I don't think I need to hash. I mean, won't hash make the string even bigger?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668949">6</a> by Justice
		posted on 7/23/2007 at 5:49 PM
		</div>
		<div class="comment_text"><p>Well, I thought you were storing the entire article in memory between pulls and comparing the new pull to the old.  I was just thinking that storing a hash in memory (which would be tiny compared to a whole page of text) and comparing the hash of the new page request would allow a very fast check to see if you need to parse the xml and re-process for new posts. The largest type of hash would only generate an 88 character text string to compare.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668948">7</a> by Raymond Camden
		posted on 7/23/2007 at 5:55 PM
		</div>
		<div class="comment_text"><p>I didn't know that. Hashes don't get bigger than 88 chars?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668951">8</a> by Justice
		posted on 7/23/2007 at 5:59 PM
		</div>
		<div class="comment_text"><p>Yup, check it (I'm sure you have already, but here anyways)<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfquickdocs.com%2F%23Hash%3AFRN0ssctmPZBnTeh0deojmZOqz8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfquickdocs.com/#Hash">http://www.cfquickdocs.com/...</a></p><p>I use hashes for quite a bit, even uuEncoding a binary image file and hashing it to ensure it has not been tampered with =)  Its a great fixed size.  The 88 char hash is the largest one, I use the default most of the time which is only 32 characters I think.  This would at least tell you if the page needs to be processed further, as if the return request is identical the hashes would match.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668953">9</a> by Justice
		posted on 7/23/2007 at 6:00 PM
		</div>
		<div class="comment_text"><p>sorry, here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfquickdocs.com%2F%23Hash%3FgetDoc%3DHash%3A7HzBzpIx-Xt6hGL5aPqItkbuRXE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfquickdocs.com/#Hash?getDoc=Hash">http://www.cfquickdocs.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668952">10</a> by Dan Wilson
		posted on 7/23/2007 at 6:48 PM
		</div>
		<div class="comment_text"><p>@Justice,</p><p>You are right to say the hash will not necessarily be as long or longer than the text being hashed. Though it seems that the documentation is incorrect about the sizes of the various algorithms. According to the comments in the documentation:</p><p>The docs are wrong about how big the returned strings are. I ran the following code below and these are the results I got.</p><p>Hash("This is a string to hash", "MD5") - 32 characters<br>Hash("This is a string to hash", "SHA") - 40 characters<br>Hash("This is a string to hash", "SHA-256") - 64 characters<br>Hash("This is a string to hash", "SHA-384") - 96 characters<br>Hash("This is a string to hash", "SHA-512") - 128 characters</p><p>DW</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669032">11</a> by Jake Munson
		posted on 7/23/2007 at 10:54 PM
		</div>
		<div class="comment_text"><p>A bit off topic, but I have a suggestion for the site.  One thing that bothers me a lot about most aggregators that I've used, is the duplication of entries.  Specifically, the reposting of old entries.  This happens a lot on mxna, when somebody does something like upgrade their copy of blogCFC.  All of a sudden the aggregator reposts their last 40 entries (this doesn't happen when I upgrade my blog, but that's a different topic).  It would be AWESOME if you could always check a post against the blog's entire list of entries, and filter reposts.  You might be doing this already...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669029">12</a> by Raymond Camden
		posted on 7/23/2007 at 11:44 PM
		</div>
		<div class="comment_text"><p>My logic checks the blog id, title, and link, so unfortunately if you change your host, it will reget, but only the last items in your RSS.</p><p>I _could_ just check blog ID and title and date actually. That is unique enough. Of course, then if you change your timezone settings it will all be new to it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669025">13</a> by Justin Lewis
		posted on 7/24/2007 at 9:16 AM
		</div>
		<div class="comment_text"><p>thanks for tip about hash. oh wait, we are talking about CF? But really, for some reason It never occured to me to use hash to compare changes for xml files....</p><p>learn something new everyday !</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669027">14</a> by Doug
		posted on 7/25/2007 at 6:13 AM
		</div>
		<div class="comment_text"><p>To be a well-behaved RSS consumer, shouldn't you check for an etag or last modified date by the headers first so you don't have to 1) download and 2) process the entire feed. How often do you check each feed? I was working on a similar project and set up a staggered schedule to checking the feeds to offset the load. So basically, you run the task every few minutes but only check X number of feeds, keeping track of which ones have been checked each time and putting them at the end of the queue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669031">15</a> by Raymond Camden
		posted on 7/25/2007 at 6:50 AM
		</div>
		<div class="comment_text"><p>Doug - I don't believe CFFEED supports that. But if I do switch to a CFHTTP approach then I could check that - if the remote feed supports it of course.</p><p>I'm currently checking every 5 minutes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669026">16</a> by Doug
		posted on 7/25/2007 at 8:11 AM
		</div>
		<div class="comment_text"><p>Right, I forgot this is more a proof of concept of CFFEED, but since you packaged it up as an app and people are obviously using it, it would make sense to put in a CFHTTP call for headers before executing the CFFEED. Actually downloading someone's feed every 5 minutes without even checking for freshness is very bad behavior. I would certainly ban you from my feed :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669034">17</a> by Doug
		posted on 7/25/2007 at 8:14 AM
		</div>
		<div class="comment_text"><p>It would save you LOTS of overhead on processing those needlessly downloaded feeds too. The hash compare might be ok at best, but if a user made one tiny change to an article, the hash compare will fail and you'll still have to compare the feed content.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669028">18</a> by Raymond Camden
		posted on 7/25/2007 at 3:13 PM
		</div>
		<div class="comment_text"><p>Once every 5 minutes is too much? Thats not a lof of traffic. I'd hate to get banned for that. ;)</p><p>So right now my plans are to keep things as is - because I'm monitoring the memory use in general. After a week or so, I'm then going to look into rewriting it.</p><p>I do have an issue with the header check though - for feeds that don't support it I'd have to grab it twice. Although the header get should be small. I'm surprised HTTP doesn't support a GETIF type operation where you pass in a date field as a header. If the remote url was updated after your ate, you get a full result. If not you get just the headers.</p></div>
	</div>
</div>
		