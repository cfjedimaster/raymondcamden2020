
<div class="comment" id="c_1713672465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672465">1</a> by Shane Zehnder
		posted on 9/27/2007 at 1:24 AM
		</div>
		<div class="comment_text"><p>I will give it a whirl.  Is the download link going to be updated on riaforge?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672478">2</a> by Raymond Camden
		posted on 9/27/2007 at 1:27 AM
		</div>
		<div class="comment_text"><p>No. I will update RIAForge when Galleon 2 Final is ready.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672480">3</a> by Shane Zehnder
		posted on 9/27/2007 at 1:33 AM
		</div>
		<div class="comment_text"><p>Sorry Ray, just realized it was attached to the post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672483">4</a> by David Low
		posted on 9/27/2007 at 2:30 AM
		</div>
		<div class="comment_text"><p>I downloaded it for a wee test run.  The MySQL script wouldn't work with all the GO statements (running it via MySQL Query Analyser) but I fixed that soon enough.</p><p>Can't seem to log into the admin section now though - it shows me as logged in at the top of the screen, but any attempt to get to /admin simply redirects back to the start.</p><p>This is on Railo 2 by the way...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672482">5</a> by Steve Walker
		posted on 9/27/2007 at 3:45 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Loaded it and ran into four MSSQL errors.  It was trying to add two galleon_forum tables (galleon_threads is missing), reserved word group and right were missing [], and it was tryning to constrain and existing PK in the conferences table.  I can e-mail you the modified script, but I don't know what the galleon_threads table is supposed to look like.</p><p>Front end is "functional" but admin erea throws and error because it cannot find the threads table.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672481">6</a> by Steve Walker
		posted on 9/27/2007 at 3:51 AM
		</div>
		<div class="comment_text"><p>... and apparently I need to learn how to type.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672485">7</a> by Steve Walker
		posted on 9/27/2007 at 4:33 AM
		</div>
		<div class="comment_text"><p>The threads table was defined in the MySQL script and I added it to the MSSQL script.  Threads are still causing errors (more to follow).</p><p>When trying to add a user through the admin I get the following error "Element AVATAR is undefined in ARGUMENTS".  Trying to join from the front I get General DB Error.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.swphoto.net%2Fg2%3AKtYSffgRFpI6yd5n-Cs2JqOM__0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.swphoto.net/g2">http://www.swphoto.net/g2</a> if you want to take a look.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672486">8</a> by Nathan Smith
		posted on 9/27/2007 at 4:34 AM
		</div>
		<div class="comment_text"><p>congrats Ray!  As always, thanks for sharing via Open Source.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672484">9</a> by Steve Walker
		posted on 9/27/2007 at 4:45 AM
		</div>
		<div class="comment_text"><p>Problem with threads was the timestamp field.  Changed the datatype to datetime and all is functioning.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672461">10</a> by Steve Walker
		posted on 9/27/2007 at 4:57 AM
		</div>
		<div class="comment_text"><p>Related to the user, it sends a confirmation e-mail before it adds it to the database.  I can't register because of the General DB error, but a few moments later I get a confirmation e-mail that doesn't work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672462">11</a> by Steve Walker
		posted on 9/27/2007 at 5:02 AM
		</div>
		<div class="comment_text"><p>typo line 40 of conferences_edit.cfm and lines 100, 116, and 161 of conference.cfc should be "Conference" and not "Conferfence"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672463">12</a> by Steve Walker
		posted on 9/27/2007 at 7:44 AM
		</div>
		<div class="comment_text"><p>User error is:</p><p>[empty string] Element AVATAR is undefined in ARGUMENTS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672464">13</a> by Will Swain
		posted on 9/27/2007 at 2:02 PM
		</div>
		<div class="comment_text"><p>Just downloading it now, and will report back with any findings. Nice logo BTW.</p><p>Thanks Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672466">14</a> by Ben Garrett
		posted on 9/27/2007 at 2:03 PM
		</div>
		<div class="comment_text"><p>Hi Ray, my version of MySQL (5.11.1) didn't like your mysql.sql script all.</p><p>Firstly all the SQL queries required a semicolon ; at the end of their enclosing brackets</p><p>Also there are a few MySQL reserved words being used as column names that need `escaping` ..<br>group .. in the galleon_groups table<br>right .. in the galleon_rights table<br>password .. in the galleon_users table</p><p>I.e.<br>CREATE TABLE galleon_groups ( <br>	Id   	varchar(35) NOT NULL,<br>	`group`	varchar(50) NOT NULL <br>	);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672467">15</a> by Joel
		posted on 9/27/2007 at 4:57 PM
		</div>
		<div class="comment_text"><p>Regarding Ben's post above, I think I tried to do an Oracle port of this once and ran into the same issue. Oracle refuses to allow columns to be named with SQL reserved words like 'select', 'update', and in this case, 'group'. Otherwise you could end up with weird SQL like</p><p>select count(*), group from galleon_groups group by group</p><p>'group_id' or similar would be a better choice for a column name, IMHO.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672469">16</a> by Raymond Camden
		posted on 9/27/2007 at 5:15 PM
		</div>
		<div class="comment_text"><p>I want to thank everyone for the posts above. I'm going to try to get a new build out tonight with fixes. Joel - as for Oracle - I know I had an unsupported mod for Oracle in the past. I don't think I'm going to try to support Oracle for 2.0. I may try for 2.1, where I wanted to also add Derby support.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672470">17</a> by Raymond Camden
		posted on 9/27/2007 at 5:58 PM
		</div>
		<div class="comment_text"><p>MySQL Users:</p><p>Please download:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdownoads%2Fgalleon2.sql%3AbY9X_yTHCyQM_MgnGL7SN_4_jdg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/downoads/galleon2.sql">http://www.coldfusionjedi.c...</a></p><p>I confirmed it worked ok here, but if you guys can confirm, I will copy over into zip.</p><p>Note - the MySQL script included ranks. I've removed that. Galleon doesn't ship (shouldn't ship) with default ranks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672472">18</a> by Raymond Camden
		posted on 9/27/2007 at 6:42 PM
		</div>
		<div class="comment_text"><p>SQL Server users:</p><p>Please download:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdownloads%2Fmysql.sql.txt%3ApCODJ75RUmXRZw2vb7sPzRmg7nM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/downloads/mysql.sql.txt">http://www.coldfusionjedi.c...</a></p><p>This script was done by Shane Zehnder.</p><p>As before, if you can confirm this fixes, I'll update the zip.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672468">19</a> by Raymond Camden
		posted on 9/27/2007 at 6:49 PM
		</div>
		<div class="comment_text"><p>User edit bug is fixed. <br>Typos fixed.</p><p>Will be in next zip. Next zip will be after I get confirmations on the new install scripts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672471">20</a> by Shane Zehnder
		posted on 9/27/2007 at 6:52 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdownloads%2Fmssql.sql.txt%3A-oq0dnwRsktHWWY2MS5bBtqnbeQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/downloads/mssql.sql.txt">http://www.coldfusionjedi.c...</a></p><p>It's still pretty early in the morning. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672474">21</a> by Raymond Camden
		posted on 9/27/2007 at 7:03 PM
		</div>
		<div class="comment_text"><p>OOps - thanks. I've got mysql on the brain.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672473">22</a> by Steve Walker
		posted on 9/27/2007 at 7:32 PM
		</div>
		<div class="comment_text"><p>MSSQL script still has two CREATE TABLE [dbo].[galleon_forums] entries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672477">23</a> by Raymond Camden
		posted on 9/27/2007 at 7:46 PM
		</div>
		<div class="comment_text"><p>Shane sent me a fix and I reuploaded.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672476">24</a> by Shane Zehnder
		posted on 9/27/2007 at 7:47 PM
		</div>
		<div class="comment_text"><p>I removed the extra galleon_forums table from the mssql script.  Just waiting for the file to be updated in downloads.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672490">25</a> by Raymond Camden
		posted on 9/27/2007 at 8:04 PM
		</div>
		<div class="comment_text"><p>It already is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672492">26</a> by Shane Zehnder
		posted on 9/28/2007 at 3:52 AM
		</div>
		<div class="comment_text"><p>Well, I have been playing with the forums and talking to myself a lot and everything appears to be working fine.  One thing I have noticed is user rank does not appear to be appearing while viewing posts.  I went back through quickly and checked my settings, but I may have missed something.</p><p>I've been watching the galleon_threads table and I have had no problems with it or errors thrown on the board.  Hopefully no one else has had any problems.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672488">27</a> by Raymond Camden
		posted on 9/28/2007 at 6:44 PM
		</div>
		<div class="comment_text"><p>Shane - do you have ranks defined in the admin? Ranks won't show unless you create some.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672489">28</a> by Raymond Camden
		posted on 9/28/2007 at 6:48 PM
		</div>
		<div class="comment_text"><p>VERY IMPORTANT:</p><p>Zip has been updated. Includes fixes and new SQL files.</p><p>Please retest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672487">29</a> by Shane Zehnder
		posted on 9/28/2007 at 8:08 PM
		</div>
		<div class="comment_text"><p>It was my fault.  I didn't have a minpost set to 0 for "Noobs" so when they were below the threshhold for the first rank it was correctly returning a blank string.  Not one of my brighter moments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672494">30</a> by Steve Walker
		posted on 9/29/2007 at 3:19 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Deleted all the files and the database tables.  Still getting the "General DB error" when I try to register on the public side and "Element AVATAR is undefined in ARGUMENTS." when I try to add a user from the admin.</p><p>I was able to edit the admin user without errors.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672491">31</a> by Raymond Camden
		posted on 9/29/2007 at 5:40 AM
		</div>
		<div class="comment_text"><p>Crap - I didn't test new user on the front side. But the admin DID work. Are you sure you refreshed cache?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672493">32</a> by Steve Walker
		posted on 9/29/2007 at 3:22 PM
		</div>
		<div class="comment_text"><p>I didn't clear the form cache, now that I have, all is functioning correctly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672496">33</a> by Raymond Camden
		posted on 10/6/2007 at 6:24 PM
		</div>
		<div class="comment_text"><p>Need help guys!</p><p>Please download this zip:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdownloads%2Fgalleon2upd.zip%3Ag0LjQjkZX25MzqFB_9tj2JbKwCs&amp;cuid=3321886" rel="nofollow noopener" title="www.coldfusionjedi.com/downloads/galleon2upd.zip">www.coldfusionjedi.com/down...</a></p><p>It contains a migration guide and a CFM that will update your database. It doesn't add the columns, but after you have done it manually, it will update the new metadata columns.</p><p>PLEASE BACK UP FIRST!</p><p>As a general FYI, this is what is left to do:</p><p>1) Update main docs<br>2) Update design (I've seen it - it kicks major butt)<br>3) Update all files - this is just a reset of the code headers for v2. <br>4) Update readme.</p><p>2 is being done by an outside firm. I'll probably do 1 tonight. We are really, really close now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672495">34</a> by Raymond Camden
		posted on 10/6/2007 at 6:31 PM
		</div>
		<div class="comment_text"><p>Hmm my link above is wrong. Just go here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdownloads%2Fgalleon2upd.zip%3Ag0LjQjkZX25MzqFB_9tj2JbKwCs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/downloads/galleon2upd.zip">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672497">35</a> by Simon
		posted on 5/5/2010 at 3:48 AM
		</div>
		<div class="comment_text"><p>I love this forum script. However one of the suggestions would be to add a block of statistics under the forums section such as how many active users ther are, newest member, now online, total topics, total posts and total members.</p><p>just a suggestion anyway.</p><p>cheers,<br>Simon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672580">36</a> by Raymond Camden
		posted on 5/5/2010 at 8:14 AM
		</div>
		<div class="comment_text"><p>Why not file an ER at <a href="http://disq.us/url?url=http%3A%2F%2Fgalleon.riaforge.org%3F%3AILASH1_thkLH8Oi6VoD2vlvVQcQ&amp;cuid=3321886" rel="nofollow noopener" title="galleon.riaforge.org?">galleon.riaforge.org?</a> :)</p></div>
	</div>
</div>
		