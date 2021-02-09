
<div class="comment" id="c_1713615351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615351">1</a> by Brian
		posted on 2/2/2004 at 10:26 PM
		</div>
		<div class="comment_text"><p>Less carbs, lol. Recently saw a low carb bread. How can you have low carb carbs? Reminds me of low fat fat...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615360">2</a> by Kerry
		posted on 2/3/2004 at 3:39 PM
		</div>
		<div class="comment_text"><p>testing it and a blank database causes errors.<br>even after doing what you said.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615352">3</a> by Raymond Camden
		posted on 2/3/2004 at 5:37 PM
		</div>
		<div class="comment_text"><p>Kerry, can you tell me _what_ errors you are getting?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615350">4</a> by Sung
		posted on 2/3/2004 at 6:14 PM
		</div>
		<div class="comment_text"><p>Blog on Atkins!  Wow...does that mean it'll trim useless messages like this one by 30 per &lt;snip&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615354">5</a> by Kerry
		posted on 2/3/2004 at 8:55 PM
		</div>
		<div class="comment_text"><p>Raymond rocks! You answered my queries with lightning speed. Solved my problems. Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615355">6</a> by Paul Gilpatrick
		posted on 2/4/2004 at 5:40 AM
		</div>
		<div class="comment_text"><p>Brand new install, just calling the design mode for the first time and receiving this error.</p><p>Thanks.</p><p>Macromedia][SequeLink JDBC Driver][ODBC Socket][Microsoft][ODBC Microsoft Access Driver] Too few parameters. Expected 3.</p><p>The error occurred in D:\WebDocs\ScrapBookPortal\blog\org\camden\blog\blog.cfc: line 368<br>Called from D:\WebDocs\ScrapBookPortal\blog\includes\pods\calendar.cfm: line 50<br>Called from D:\WebDocs\ScrapBookPortal\blog\tags\layout.cfm: line 56<br>Called from D:\WebDocs\ScrapBookPortal\blog\index.cfm: line 148<br>Called from D:\WebDocs\ScrapBookPortal\blog\org\camden\blog\blog.cfc: line 368<br>Called from D:\WebDocs\ScrapBookPortal\blog\includes\pods\calendar.cfm: line 50<br>Called from D:\WebDocs\ScrapBookPortal\blog\tags\layout.cfm: line 56<br>Called from D:\WebDocs\ScrapBookPortal\blog\index.cfm: line 148</p><p>366 : 			where <br>367 : 				posted &gt;= &lt;cfqueryparam value="#dtMonth#" cfsqltype="CF_SQL_DATE"&gt;<br>368 : 				and posted &lt;= &lt;cfqueryparam value="#dtEndOfMonth#" cfsqltype="CF_SQL_DATE"&gt;<br>369 : 		&lt;/cfquery&gt;<br>370 :</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615353">7</a> by Raymond Camden
		posted on 2/4/2004 at 5:43 AM
		</div>
		<div class="comment_text"><p>Paul, you are using MS Access, did you remember to update the ini file and set the db type to MSACCESS?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615365">8</a> by Kerry
		posted on 2/4/2004 at 9:39 AM
		</div>
		<div class="comment_text"><p>Hey Paul that was the first error I got when I installed it for the first time.<br>I deleted the whole thing, restarted the server placed everything back. Reedited the INI file.<br>Raymond put me on the right track. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615361">9</a> by Jeff Yokum
		posted on 2/4/2004 at 9:40 AM
		</div>
		<div class="comment_text"><p>noticed in the comments of blog.cfc the following line:<br>lower cased table names for mysql issue on linux (rkc 2/1/04)</p><p>I had to go update all the table names in blog.cfc to match the database. Lower case table names were causing errors. Was this supposed to be fixed? I'm running MySql on Linux</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615362">10</a> by Raymond Camden
		posted on 2/4/2004 at 3:37 PM
		</div>
		<div class="comment_text"><p>Jeff, yes, it should be fixed. I double checked and the blog.cfc uses all lowercase table names. Are you sure you got the latest zip?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615364">11</a> by Sung
		posted on 2/4/2004 at 6:35 PM
		</div>
		<div class="comment_text"><p>Raymond -- this is my first time trying to get your blog to work.  I'm having a tough time trying to figure out how to integrate my own login system (which is simple a SQL table lookup + session variables) with your blog.  I'm guessing people have asked you this a million times...I couldn't possibly be the first, right?  In any case, any help would be greatly appreciated.  - Sung</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615366">12</a> by rob vander giessen-reitsma
		posted on 2/4/2004 at 9:40 PM
		</div>
		<div class="comment_text"><p>i was trying to install the blog on my server, but my provider hasn't updated to mx yet.  is there any way i could get an older version of the blog that doesn'nt use tags specific to mx (like the cflogin tag).</p><p>thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615363">13</a> by Raymond Camden
		posted on 2/4/2004 at 9:43 PM
		</div>
		<div class="comment_text"><p>Rob - the Blog has always used CFCs so it always needs MX. The latest version needs MX 6.1.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615359">14</a> by rob vander giessen-reitsma
		posted on 2/4/2004 at 9:49 PM
		</div>
		<div class="comment_text"><p>then i guess i'll need to put some pressure on my provider . . .</p><p>thank you for responding so quickly!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615357">15</a> by Paul
		posted on 2/6/2004 at 7:31 AM
		</div>
		<div class="comment_text"><p>I also got the [ODBC Microsoft Access Driver] Too few parameters. Expected 3. The same problem as the other Paul. Could Access have trouble with the dateStr format?</p><p>Thanks Raymond for your contributions to the ColdFusion community.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615358">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615358">16</a> by Raymond Camden
		posted on 2/6/2004 at 5:42 PM
		</div>
		<div class="comment_text"><p>Both Pauls: First Paul, I notice you were using the sequelink driver, which is the ODBC Socket connection. In general, I think you should instead be using the normal MS Access driver. However, as Paul 2 has shown, this throws an error for him. Paul 2 - I'll try my MS Access tests here again, although it may be a day or two.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615356">17</a> by Raymond Camden
		posted on 2/6/2004 at 5:47 PM
		</div>
		<div class="comment_text"><p>Just tested and I don't have any problems. Paul2, maybe you can send me your database and a zip of your blog install pls?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615368">18</a> by Raymond Camden
		posted on 2/6/2004 at 5:53 PM
		</div>
		<div class="comment_text"><p>Sung - sorry - I missed your post. When you attempt to logon the blog client app calls authenticate() on the blog.cfc. All you need to do is change that logic to point to some other cfc, or do a simple database lookup. Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615367">19</a> by Paul #1
		posted on 2/6/2004 at 6:23 PM
		</div>
		<div class="comment_text"><p>Thanks for all of the help folks.  I ultimately gave up on Access and used MS SQL. I also reinstalled from scratch.  Some of the things I did differently:</p><p>1) when editing the the blog.ini, I removed the unused sections, and used datasource here.<br>2) In the application.cfm, for the &lt;cfset application.root = "scrapbookportal_blog"&gt; entry, make sure this is your mapping name and not the datasource.<br>3) RESTART CF or even the server. This is a must as the incorrect mapping will be kept in cache until this done.</p><p>Ultimately, I think #2 &amp; #3 were causing my problems, as it was confused as to where things were located.  I even got this after working SQL, as I hadn't cleared it.  I did not go back and try Access (ran out of time, and I'd rather use SQL anyway...).</p><p>Hope this helps.  Start fresh, make sure your mappings and datasources are straightend out, and reboot!</p><p>Paul #1</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615369">20</a> by Paul #1
		posted on 2/6/2004 at 6:28 PM
		</div>
		<div class="comment_text"><p>Oops, now that I've spoken, what would cause the blog entries to only show up if you're in design mode? There's only one entry.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.scrapbookportal.com%2Fblog%2Findex.cfm%3AAwfJAj8yUqvLZhhNHEmH3I7oBEs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.scrapbookportal.com/blog/index.cfm">http://www.scrapbookportal....</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.scrapbookportal.com%2Fblog%2Findex.cfm%3Fdesign%3D1%3AyePlu0RKsUcOtEEJp6XtiqJ2FyE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.scrapbookportal.com/blog/index.cfm?design=1">http://www.scrapbookportal....</a></p><p>Thanks.  Almost there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615370">21</a> by Raymond Camden
		posted on 2/6/2004 at 6:34 PM
		</div>
		<div class="comment_text"><p>We use caching when designmode is false, HOWEVER, when you add a new entry, we should be clearing the cache. Tell me, if you restart CF, do the entries show up?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615374">22</a> by Paul #1
		posted on 2/6/2004 at 6:41 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, that did the trick, we're up.  I'm glad, as I need to stop restarting the server!  Looks like we're good to go, thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615373">23</a> by Raymond Camden
		posted on 2/6/2004 at 6:47 PM
		</div>
		<div class="comment_text"><p>Paul - please note that you should NOT need to restart CF everytime you post. If you find this to be the case, please let me know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615371">24</a> by Paul #1
		posted on 2/6/2004 at 6:51 PM
		</div>
		<div class="comment_text"><p>No, I understand, I already have my own blog running 2.0 and have been for months. I feel comfortable that I'm ok now, It was just getting through the initial install period.  Thanks again.  By the way, are you keeping a list of blogs using your code?  Would be interesting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615372">25</a> by Kerry
		posted on 2/6/2004 at 7:09 PM
		</div>
		<div class="comment_text"><p>Raymond, I had to restart my CF MX 6.1 server the first time as well. No matter how many times I deleted the code, re-inserted it the same errors happened. After restarting, the fixes you told me to do, finally worked. This restarting may be a point to note.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615375">26</a> by Paul Gilpatrick
		posted on 2/7/2004 at 12:27 AM
		</div>
		<div class="comment_text"><p>Raymond, sorry to be a pain, but I continue to not have the most current post show up at default.  I have two entries (one for the 5th and one for the 6th).  When you arrive for the first time, you see the 5th entry, and until you click on he 6th date (even though it's highlighted), or click on the listed "Recent Entry" you don't see the 6th's entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615376">27</a> by Raymond Camden
		posted on 2/7/2004 at 12:31 AM
		</div>
		<div class="comment_text"><p>No worries about being a pain. Tell me, if you restart CF does the issue go away and does the blog act correctly (if you don't add anything new that is).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615377">28</a> by Paul Gilpatrick
		posted on 2/7/2004 at 12:51 AM
		</div>
		<div class="comment_text"><p>Yes a CF restart fixes the problem.  Is it a caching issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615379">29</a> by Raymond Camden
		posted on 2/7/2004 at 1:09 AM
		</div>
		<div class="comment_text"><p>Ok, there is a caching issue then. Do this, go to /tags/scopecache.cfm. Line 76 should be:</p><p>	cfset structClear(ptr["scopeCache"])</p><p>If it's not, stop and tell me. If it is, right after it, add a cfoutput and display, HEY I WAS CALLED TO CLEAR THE CACHE. Then add a cfabort.</p><p>Add a new entry. You _should_ see the msg and the editor window will not close. Check the blog in the browser after you have logged in. Is the entry there? Also, make _sure_ your browser isn't caching.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615380">30</a> by Paul Gilpatrick
		posted on 2/7/2004 at 2:50 AM
		</div>
		<div class="comment_text"><p>Yes, the entry is there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615378">31</a> by Raymond Camden
		posted on 2/7/2004 at 11:07 PM
		</div>
		<div class="comment_text"><p>Paul, I'm confused - you said the entry shows up - but I thought it wasn't showing up? If you logout does it still not show up? Also, if possible email me and if I can have RDS access I can take a closer look.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615381">32</a> by william
		posted on 2/16/2004 at 6:08 PM
		</div>
		<div class="comment_text"><p>so i'm liking this bloc.cfc and modifying as much as i can figure out. and it's also teaching me alot in the process about cfc's. this is a great teaching tool. thanks!</p><p>so a question: i would like to edit the dates of individual entries without having to go to the database. how would you recommend one could go about adding this feature to editor.cfm?</p><p>again, thanks for doing this!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615382">33</a> by Raymond Camden
		posted on 2/16/2004 at 6:10 PM
		</div>
		<div class="comment_text"><p>Right now you have to either edit the editor.cfm or go straight to ethe db. The best solution is to edit editor.cfm. If people think this is important enough, I'll add it to the next release.</p></div>
	</div>
</div>
		