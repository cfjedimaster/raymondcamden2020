
<div class="comment" id="c_1713619197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619197">1</a> by justin
		posted on 7/21/2005 at 8:52 PM
		</div>
		<div class="comment_text"><p>that was me with the bug...</p><p>I'm amazed by the speed on this, made me laugh out loud in my office. Thanks again, Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619195">2</a> by O?uz Demirkap?
		posted on 7/21/2005 at 11:29 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>RSS Unicode problem is occurs on-fly XML show. But When I write created XML feed on blog.cfc at line 555 with following code, I get XML file as it must be.</p><p>&lt;cfset XMLText=ToString(rssStr)&gt;<br>		&lt;cffile action="write" addnewline="yes" charset="utf-8" file="#myblogroot#\rss_full.xml" output="#XMLText#" fixnewline="no"&gt;</p><p>I think we need to find a solution for on-fly XML feed for Unicode problems.</p><p>PS: I was in holiday, I will answer your other questions today. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619201">3</a> by O?uz Demirkap?
		posted on 7/21/2005 at 11:34 PM
		</div>
		<div class="comment_text"><p>And as I guess you are using MS SQL Server.</p><p>I do not have any problem for Unicode support on DB level while I am using MySQL 4.1.x as DB.</p><p>But for MS SQL users, there must be a general solution for Unicode support including you.</p><p>Here is the general solution on ColdFusion:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.macromedia.com%2Fcfusion%2Fknowledgebase%2Findex.cfm%3Fid%3Dtn_18331%3AZRXaBA1TzZCz5CvaTdc9gYaOLj4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.macromedia.com/cfusion/knowledgebase/index.cfm?id=tn_18331">http://www.macromedia.com/c...</a></p><p>I would suggest to use this method in your codes. Than you can see my name as it is. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619200">4</a> by Raymond Camden
		posted on 7/21/2005 at 11:34 PM
		</div>
		<div class="comment_text"><p>Oguz - I would love it if you could try something. Get rid of your mod, and add this line to the top of rss.cfm:</p><p>&lt;cfprocessingdirective pageencoding="utf-8"&gt;</p><p>Tell me if this helps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619198">5</a> by Raymond Camden
		posted on 7/21/2005 at 11:42 PM
		</div>
		<div class="comment_text"><p>Oguz - are you sure that is necessary? I do not do any "straight" SQL as the KB article shows, instead I use cfqueryparam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619204">6</a> by O?uz Demirkap?
		posted on 7/22/2005 at 12:08 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>&lt;cfprocessingdirective pageencoding="utf-8"&gt; does not help.</p><p>And there were some other problems before.</p><p>- blog.cfc line 496: It must be utf-8 not iso.<br>- rss.cfm has no BOM for Unicode.</p><p>I will try some other possibilities that I know. I will let you know.</p><p>For MS SQL &amp; Unicode support, I think explanation in KB is a must be. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619207">7</a> by O?uz Demirkap?
		posted on 7/22/2005 at 12:31 AM
		</div>
		<div class="comment_text"><p>and I think I have found problem for RSS feed.</p><p>rss.cfm line 39: &lt;cfcontent type="text/xml"&gt; must be as &lt;cfcontent type="text/xml; charset=utf-8"&gt;</p><p>But I do not understand this code generates blank page. I am still looking for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619206">8</a> by O?uz Demirkap?
		posted on 7/22/2005 at 1:04 AM
		</div>
		<div class="comment_text"><p>Hi again,</p><p>I think this is a bug on CFMX.</p><p>Ray you can check Merrimack list for detail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619208">9</a> by Raymond Camden
		posted on 7/22/2005 at 1:40 AM
		</div>
		<div class="comment_text"><p>Oguz - Paul H suggested this link:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.sustainablegis.com%2Fblog%2Fcfg11n%2Findex.cfm%3Fmode%3Dentry%26entry%3DF9553D86-20ED-7DEE-2A913AFD8651643F%3AbSNApKD0btHx7A4-GNm0z8BQlgw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.sustainablegis.com/blog/cfg11n/index.cfm?mode=entry&amp;entry=F9553D86-20ED-7DEE-2A913AFD8651643F">http://www.sustainablegis.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619210">10</a> by O?uz Demirkap?
		posted on 7/22/2005 at 1:57 AM
		</div>
		<div class="comment_text"><p>As I understand, when we activate  "String Format -- Enable Unicode for data sources configured for non-Latin characters" on CF Admin DB settings, cfqueryparam saves as Unicode.</p><p>Great!</p><p>I am not home and I do not have any MS SQL Server here to test. I can test it tomorrow in office.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619199">11</a> by Rob Cawte
		posted on 7/22/2005 at 9:48 AM
		</div>
		<div class="comment_text"><p>Hi Ray and All,</p><p>I am really enjoying tinkering with your blog app.  It is for a Japanese language site, and I am having no problems with MSSQL and Unicode - setting the String Format in the Advanced Settings for the data source was the key... I don't know if it's possible to use Unicode hinting with cfqueryparams.</p><p>Adding the utf-8 processingdirective to each page (and include) is a good thing, and we do it for all sites.</p><p>Dates, however, are a problem, as the format of the date being presented on the entry form was breaking the round trip.  The more I looked into how this was happening, the more I wanted to go to the beach :), so I have put a hack in place for now.</p><p>One other problem was Japanese in the blog.ini file.  Couldn't do it.  This may be a limitation of the classes used in the getProfileString functions.</p><p>About RSS feeds ... I get blank page in MSIE, but they display fine in an RSS reader.</p><p>Finally, I added optional support for trackbacks to 3.0.  Still have to test it in the wild, but if you'd like it once it's done, please let me know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619203">12</a> by Rob Brooks-Bilson
		posted on 7/22/2005 at 10:17 AM
		</div>
		<div class="comment_text"><p>Mmm - Trackbacks.  Yes!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619209">13</a> by Raymond Camden
		posted on 7/22/2005 at 4:30 PM
		</div>
		<div class="comment_text"><p>rob cawte: The latest build has the cfproc tag on all pages now. Dates: Are you just displaed with how they appear on the front end? I've had an old request to do date mods for some time, but haven't gotten around to it. RSS - it is normal to get a blank page in IE I think - if you view source you should see the XML. I believe only Firefox nicely shows you the xml by default.</p><p>trackbacks... I've been against this due to the amount of spam problems it has. BlogCFC has been very lucky in that spam isn't much of a problem for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619202">14</a> by Rob Cawte
		posted on 7/23/2005 at 7:59 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>The problem I was having with dates was that when updating a post, the entry date would be updated to some time in 2012 or similar ... sorry I didn't carefully note the details.</p><p>I think it is caused by me not understanding your implementation of locale functionality.  I started to look through the code, but hard coding a date mask in the edit form fixed it for me, so I didn't delve further.</p><p>I'll follow up your comment about trackbacks in the Galleon forum.</p></div>
	</div>
</div>
		