
<div class="comment" id="c_1713651338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651338">1</a> by Simon Horwith
		posted on 4/5/2006 at 6:55 PM
		</div>
		<div class="comment_text"><p>I assume you meant "purge"? I didn't know it was possible to "purse" a Verity collection ;)<br>I've seen Verity flake out on occasion - but no, I've never seen that exact error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651335">2</a> by Raymond Camden
		posted on 4/5/2006 at 6:59 PM
		</div>
		<div class="comment_text"><p>Oops. Um, yeah, thats purge. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651345">3</a> by Daniel Daugherty
		posted on 4/5/2006 at 7:55 PM
		</div>
		<div class="comment_text"><p>Been a long time since I worked with verity but in CF4.5 I had a site that would have to be purged and reindex from time to time.  The cause was searches happening while large indexs were occuring.  So I added locking around the index and search actions.  Not sure if this is still and issue or not in CFMX7</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651310">4</a> by Raymond Camden
		posted on 4/5/2006 at 7:58 PM
		</div>
		<div class="comment_text"><p>From what I know, locking is absolutely -not- needed in CFMX7 now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651334">5</a> by Sami Hoda
		posted on 4/5/2006 at 8:09 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Known problem.</p><p>See here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fsoftware.groupbrowser.com%2Fprintthread.php%3Ft%3D179708%3A7DUfDHd7LWRpNi-_IluChw9jBzU&amp;cuid=3321886" rel="nofollow noopener" title="http://software.groupbrowser.com/printthread.php?t=179708">http://software.groupbrowse...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fgroups.google.com%2Fgroup%2FCF-Talk%2Fbrowse_thread%2Fthread%2F4c6aa9a9ed5e00ff%2F103ea417cce13c13%3Flnk%3Dst%26q%3DVerity%2B%2522-1705%2522%26rnum%3D1%26hl%3Den%23103ea417cce13c13%3Adcbfjf7d0I6_wcFV0ZEdJVlAvh0&amp;cuid=3321886" rel="nofollow noopener" title="http://groups.google.com/group/CF-Talk/browse_thread/thread/4c6aa9a9ed5e00ff/103ea417cce13c13?lnk=st&amp;q=Verity+%22-1705%22&amp;rnum=1&amp;hl=en#103ea417cce13c13">http://groups.google.com/gr...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fgroups.google.com%2Fgroups%3Fhl%3Den%26lr%3D%26q%3DVerity%2520%2522-1705%2522%26btnG%3DSearch%26sa%3DN%26tab%3Dwg%3AaFUH2MV9cAqUrIcPwK6UYqmkVsA&amp;cuid=3321886" rel="nofollow noopener" title="http://groups.google.com/groups?hl=en&amp;lr=&amp;q=Verity%20%22-1705%22&amp;btnG=Search&amp;sa=N&amp;tab=wg">http://groups.google.com/gr...</a></p><p>Sami</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651309">6</a> by Adam Cameron
		posted on 4/5/2006 at 11:32 PM
		</div>
		<div class="comment_text"><p>Hi Ray.<br>Re your comment re locking... very interesting.</p><p>What happens if you kick off a long &lt;cfindex&gt; process, and then - shortly afterwards - kick it off again in a separate request (a Verity race condition, if you will).</p><p>I guess I could test this, but maybe you already know?</p><p>It's good news, anyhow.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651315">7</a> by Raymond Camden
		posted on 4/6/2006 at 12:01 AM
		</div>
		<div class="comment_text"><p>Again, from what I've heard by my sources, you just don't need to worry about it. I haven't tested this yet, but I'm not seeing any locking issues. THis bug was the first oneI've run into so far.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651326">8</a> by Toby Reiter
		posted on 8/9/2006 at 2:41 AM
		</div>
		<div class="comment_text"><p>Ray-<br>I'm getting the same error on one of our collections. I'd be REALLY interested in knowing if you've learned anything else about this.</p><p>We get this error pretty consistently, however.</p><p>Thanks,<br>Toby</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651325">9</a> by Raymond Camden
		posted on 8/9/2006 at 5:49 PM
		</div>
		<div class="comment_text"><p>Sorry Toby, but it never happaned again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651327">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651327">10</a> by Rich Sloan
		posted on 10/27/2007 at 12:11 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Did you ever figure out what is causing this issue? I am consistently having this issue on a couple of collections and can not find any resources on a resolution.</p><p>Thanks,</p><p>Rich</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651328">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651328">11</a> by Raymond Camden
		posted on 10/27/2007 at 12:22 AM
		</div>
		<div class="comment_text"><p>Nope. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651324">12</a> by Rich Sloan
		posted on 10/27/2007 at 12:45 AM
		</div>
		<div class="comment_text"><p>Thanks Ray. I think I may need to start looking at your Lucene library if I can't figure this out. The only thing i did find is an old post that said to change the language to englishx. I have tried that and I am waiting for the collection to finish indexing. I'll post here if I find an answer or the englishx fixes it.</p><p>Rich</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651333">13</a> by Kevin Penny
		posted on 12/10/2008 at 9:53 PM
		</div>
		<div class="comment_text"><p>Yup - Just saw it in production this morning:</p><p>Steps to fix it:</p><p>Executed a 'delete' and then a 'create' on the index.<br>And repopulated the collection with data.</p><p>We've had numerous problems with Verity - and are even running under an unreleased patch that Adobe did for us for another issue where you ask for one collection data, and receive another's.</p><p>Good luck</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651337">14</a> by David McGuigan
		posted on 5/3/2010 at 7:39 PM
		</div>
		<div class="comment_text"><p>Just had this happen out of nowhere today on some sites that had been running fine for months/years.</p><p>Deleting the indexes and recreating them didn't work with a fun new error. Has no one found a good solution to this yet? So far it looks like we'll be reinstalling the Verity stuff and recreating all of the indexes afterwards. Which takes forev.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651336">15</a> by Kevin Penny
		posted on 5/3/2010 at 11:54 PM
		</div>
		<div class="comment_text"><p>If you have a lot of records or a lot of collections - I'd recommend starting to get OFF Verity as soon as possible - the problem will only get worse - my recommendation is to use Solr instead - even if you have to roll your own implementation w/o cf9.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651342">16</a> by David McGuigan
		posted on 5/3/2010 at 11:56 PM
		</div>
		<div class="comment_text"><p>Strangely, killing the verity service ( it wouldn't restart ) and starting it back up completely fixed the issues.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651346">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651346">17</a> by Raymond Camden
		posted on 5/4/2010 at 12:11 AM
		</div>
		<div class="comment_text"><p>I'll ditto Kevin. Solr is the future for CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651347">18</a> by Rodion Bykov
		posted on 7/5/2010 at 4:35 PM
		</div>
		<div class="comment_text"><p>Was getting -1705 error from Verity after failed 'Optimize' action and when folder permissions were incorrectly set. Thinking about moving to Solr anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651348">19</a> by James
		posted on 11/23/2011 at 12:44 AM
		</div>
		<div class="comment_text"><p>This was frustrating me for a long time, no matter what I did I was getting the (-1705). Then I recreated the collection in cf admin and chose English (Advanced) for the language and it worked!</p></div>
	</div>
</div>
		