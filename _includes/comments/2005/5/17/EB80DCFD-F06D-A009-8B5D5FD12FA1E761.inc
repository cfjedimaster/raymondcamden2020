
<div class="comment" id="c_1713618456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618456">1</a> by david
		posted on 5/17/2005 at 11:27 PM
		</div>
		<div class="comment_text"><p>Installation is as simple as over writing the original blog.cfc file?  I have done that and receive an error.</p><p>Error:<br>Unknown column 'tblblogentries.allowcomments' in 'field list'</p><p>42S22</p><p>Error Executing Database Query. <br>1054</p><p>MySQL is the database.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618460">2</a> by Raymond Camden
		posted on 5/17/2005 at 11:31 PM
		</div>
		<div class="comment_text"><p>No, you must update the database. Sorry if that wasn't clear. There is a new tblBlogSubscribers table, and a new column in tblBlogEntries, allowcomments. You can look at the install scripts for details.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618454">3</a> by Ian Winter
		posted on 5/17/2005 at 11:40 PM
		</div>
		<div class="comment_text"><p>You got a typo as well "You can no subscribe", you can now subscribe maybe :)</p><p>Otherwise, great release as ever.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618466">4</a> by Raymond Camden
		posted on 5/17/2005 at 11:47 PM
		</div>
		<div class="comment_text"><p>Fixed. Thanks. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618467">5</a> by Ryan Guill
		posted on 5/17/2005 at 11:50 PM
		</div>
		<div class="comment_text"><p>Ray, is there any way you could give a link beside comments to subscribe to a thread without posting in it?  So even if you don't have something to say but still are interested in what others are saying about a specific post they can still get an email with every new post?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618464">6</a> by Raymond Camden
		posted on 5/17/2005 at 11:52 PM
		</div>
		<div class="comment_text"><p>I could do it - but it will require a db change. Right now the subscription is based on your email being in the comments table. I'd have to move subscription info out of there then.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618450">7</a> by Ryan Guill
		posted on 5/17/2005 at 11:56 PM
		</div>
		<div class="comment_text"><p>I understand, just an idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618462">8</a> by Raymond Camden
		posted on 5/17/2005 at 11:58 PM
		</div>
		<div class="comment_text"><p>It would actually be smart since it would cut down on the replication of data, although I'm just replicating one bit. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618455">9</a> by Jeff Coughlin
		posted on 5/18/2005 at 12:56 AM
		</div>
		<div class="comment_text"><p>I'm getting an error in index.cfm saying that the local variable "allowcomments" is undefined.</p><p>I've got all the DB updates (MSSQL) and file updates (I'm pretty sure I'm not missing anything).</p><p>What did I miss?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618451">10</a> by Raymond Camden
		posted on 5/18/2005 at 1:01 AM
		</div>
		<div class="comment_text"><p>Did you refresh the cache? Adding reinit=1 to the URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618459">11</a> by Jeff Coughlin
		posted on 5/18/2005 at 1:01 AM
		</div>
		<div class="comment_text"><p>Nevermind.  I forgot to refresh the cache :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618461">12</a> by Jeff Coughlin
		posted on 5/18/2005 at 1:04 AM
		</div>
		<div class="comment_text"><p>Wierd timing (we both posted that at the same time), but yeah it was the cache.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618465">13</a> by Ian Winter
		posted on 5/18/2005 at 6:44 PM
		</div>
		<div class="comment_text"><p>With the DB updates, can I simply add the fields to my existing DB and set with the defaults values? Don't want to drop it all and migrate the data, or, is there another way?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618463">14</a> by Raymond Camden
		posted on 5/18/2005 at 6:48 PM
		</div>
		<div class="comment_text"><p>Yes - WARNING - when you add AllowComments, be sure to default to yes. I did that though and I had to also write a quick SQL statement to update the old data. I think maybe I said null was ok so it didn't default. Anyway, be sure to set all your old entries to 1 or no one will be able to comment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618468">15</a> by IRz
		posted on 5/19/2005 at 7:38 PM
		</div>
		<div class="comment_text"><p>With MSACCESS Database test</p><p>Error Executing Database Query.  <br>[Macromedia][SequeLink JDBC Driver][ODBC Socket][Microsoft][ODBC Microsoft Access Driver] Too few parameters. Expected 5.</p><p>The error occurred in F:\CMSTags\com\blog.cfc: line 543<br>Called from F:\RayCamdenblogCFC 3.7\client\includes\pods\calendar.cfm: line 53<br>Called from F:\RayCamdenblogCFC 3.7\client\tags\layout.cfm: line 77<br>Called from F:\RayCamdenblogCFC 3.7\client\login.cfm: line 33<br>Called from F:\RayCamdenblogCFC 3.7\client\Application.cfm: line 60<br>Called from F:\CMSTags\com\blog.cfc: line 543<br>Called from F:\RayCamdenblogCFC 3.7\client\includes\pods\calendar.cfm: line 53<br>Called from F:\RayCamdenblogCFC 3.7\client\tags\layout.cfm: line 77<br>Called from F:\RayCamdenblogCFC 3.7\client\login.cfm: line 33<br>Called from F:\RayCamdenblogCFC 3.7\client\Application.cfm: line 60</p><p>541 : 	<br>542 : 	&lt;cffunction name="getCategories" access="remote" returnType="query" output="false"&gt;<br>543 : 		&lt;cfset var getC = ""&gt;<br>544 : 		<br>545 : 		&lt;cfquery name="getC" datasource="#instance.dsn#"&gt;</p><p>--------------------------------------------------------------------------------</p><p>SQL    select distinct datepart(dd, posted) as posted_day from tblblogentries where posted &gt;= (param 1) and posted &lt;= (param 2) and blog = (param 3) and posted &lt; (param 4)  <br>DATASOURCE   blogdev <br>VENDORERRORCODE   -3010 <br>SQLSTATE   07002</p><p>Please try the following:</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618469">16</a> by Raymond Camden
		posted on 5/19/2005 at 8:46 PM
		</div>
		<div class="comment_text"><p>You forgot to change the dbtype in the ini file to msaccess, or you did, and you forgot to refresh the cache.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618471">17</a> by O?uz Demirkap?
		posted on 5/22/2005 at 2:14 PM
		</div>
		<div class="comment_text"><p>Default charset for mysql script is again "latin1". I just informed before that it must be "utf8" for having unicode support.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618478">18</a> by O?uz Demirkap?
		posted on 5/23/2005 at 5:35 PM
		</div>
		<div class="comment_text"><p>In layout.cfm file we also need "&lt;cfprocessingdirective pageencoding="utf-8"&gt;" for Unicode support.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618473">19</a> by O?uz Demirkap?
		posted on 5/23/2005 at 5:36 PM
		</div>
		<div class="comment_text"><p>And my name is still not correct in your blog Ray.</p><p>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618474">20</a> by Raymond Camden
		posted on 5/23/2005 at 6:31 PM
		</div>
		<div class="comment_text"><p>Added the cfproc tag to layout.cfm. Will have to wait till next release though. Will update the mysql scripts again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618476">21</a> by Kevin Graeme
		posted on 5/23/2005 at 7:17 PM
		</div>
		<div class="comment_text"><p>I'd recommend using H1-H6 tags for the things like the entry titles instead of using DIVs. This will help significantly for search engine optimization. It's easy enough to fix in the display page, but many people are just going to use it as is.</p><p>Cheers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618477">22</a> by Brian
		posted on 5/24/2005 at 10:09 AM
		</div>
		<div class="comment_text"><p>Question...maybe a stupid one, I'd like to allow multiple users to have login names. I've adden the users to the db(MSACCESS) and can only login w/ admin..Probably stupid, I'm sleepy but I think I'm stuck...</p><p>Please help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618475">23</a> by Raymond Camden
		posted on 5/24/2005 at 6:17 PM
		</div>
		<div class="comment_text"><p>You need to edit the ini file and specify which users have access to the blog. The idea is that if you have N blogs in one db, you need to specify which user has access to what blog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618480">24</a> by Brian
		posted on 5/24/2005 at 6:34 PM
		</div>
		<div class="comment_text"><p>Thanks Ray!</p><p>I finally figured that out...I think I was too tired last night to be working actually! I'm putting this blog together for a local ISP organization we belong to and I'm going to have all the members chip in an get you something from your wish list when we're done!</p><p>See I need to allow multiple contributers to this one blog (9 users to be exact from the board of directors).</p><p>Another question...How hard would it be to only allow a user to edit posts created by them and not by other contributers?</p><p>Thanks again for a great product!</p><p>Brian</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618481">25</a> by Raymond Camden
		posted on 5/24/2005 at 7:07 PM
		</div>
		<div class="comment_text"><p>Note the code that detects if designmode is on and then prints an edit link next to each entry. Modify that to check the ... um user field - I forget what I called it - but anyway, compare _that_ value to getAuthUser(), and if they are the same, then show the edit link. To be anal, you would also need to edit the second security check in edit.cfm, but you probably don't have to worry about that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618479">26</a> by Andy Clark
		posted on 5/26/2005 at 9:49 PM
		</div>
		<div class="comment_text"><p>I'm having an intermittent problem on moving to the new version<br>at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.paulmartinsblog.com%3ADtiouWnG3JiH192sYV9oTR4KSso&amp;cuid=3321886" rel="nofollow noopener" title="http://www.paulmartinsblog.com">http://www.paulmartinsblog.com</a></p><p> Element ROOT is undefined in APPLICATION.</p><p>The error occurred in D:\INETPUB\premiersoccerstats\CanadasPM\client\includes\pods\about.cfm: line 3<br>Called from D:\INETPUB\premiersoccerstats\CanadasPM\client\tags\layout.cfm: line 93<br>Called from D:\INETPUB\premiersoccerstats\CanadasPM\client\login.cfm: line 33<br>Called from D:\INETPUB\premiersoccerstats\CanadasPM\client\Application.cfm: line 60</p><p>1 : &lt;cfsetting enablecfoutputonly=true&gt;<br>2 : &lt;cfprocessingdirective pageencoding="utf-8"&gt;<br>3 : &lt;cfmodule template="/#application.root#/tags/podlayout.cfm" title="About"&gt;<br>4 :  &lt;cfoutput&gt;</p><p>If I try reinit= , I get the same error</p><p>If I then revert to the old version I had up previously, likewise accessing in designmode=1, I get the login fields followed by error</p><p> The error occurred in D:\INETPUB\premiersoccerstats\CanadasPM\client\tags\layout.cfm: line 78<br>Called from D:\INETPUB\premiersoccerstats\CanadasPM\client\login.cfm: line 33<br>Called from D:\INETPUB\premiersoccerstats\CanadasPM\client\Application.cfm: line 59</p><p>76 : 		<br>77 : 		<br>78 : 		&lt;cfinclude template="/#application.root#/includes/pods/about.cfm"&gt; <br>79 :</p><p>Then when I try reinit=1 the page processes correctly</p><p>Switching back to the new version ( by renaming directory) I get the allowcomments error but on reinit=1 everythin gi s fine.<br>However when I try and access the site again some time later the same problem recurs</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618482">27</a> by Raymond Camden
		posted on 5/26/2005 at 9:56 PM
		</div>
		<div class="comment_text"><p>Any - the pods no longer use application.root, actually nothing does. You will need to change your code in your pods to match how they are written now.</p><p>As for allowcomments, the DB has been updated. You need to modify your tables per the SQL files in the install folder.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618484">28</a> by Andy Clark
		posted on 5/26/2005 at 11:55 PM
		</div>
		<div class="comment_text"><p>Thanks Ray<br>Changing the code in the old pods seems to have solved the problem.</p><p>I had already amended the DB tables so that error was prob occurring as the old version did not refer to them</p><p>Thanks as usual</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618483">29</a> by Jason Sheedy
		posted on 6/5/2005 at 1:33 PM
		</div>
		<div class="comment_text"><p>Hi Ray, I finally got around to upgrading my blog. Lot's of great updates in there .. For your reference I've posted my experience on my blog.. I've included the mysql update script in there if anyone's interested.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.jmpj.net%2Fjason%2Findex.cfm%3Fmode%3Dentry%26entry%3D4BA36491-CF1D-76B8-AE4D56A8AAD20B7C%3AK9RNowKeEvVX2zsmKk2u3VFCLYA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.jmpj.net/jason/index.cfm?mode=entry&amp;entry=4BA36491-CF1D-76B8-AE4D56A8AAD20B7C">http://www.jmpj.net/jason/i...</a></p><p>- Jason</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618485">30</a> by Andy Clark
		posted on 6/6/2005 at 12:29 AM
		</div>
		<div class="comment_text"><p>You'ld think I'd have made every mistake I could but attempting to create a new blog I have run into this error</p><p> Data source deafblog could not be found.</p><p>Error occurred in blog.cfc line 526</p><p>I have attempted to copy the procedure succesfully undertaken before but have slipped up somewhere along the line</p><p>in blog.ini<br>[deaf]<br>dsn=deafblog<br>blogDBType=MSACCESS</p><p>database name deafblog</p><p>in application.cfm<br>&lt;cfset blogname = "Deaf"&gt; "deaf" also does not work<br>I also tried changing the cfapplication name without success</p><p>mapping<br>physical site path points to client folder (cf other blogs) named logical path deafblog - you suggest naming org not surewhy as I havent done that before</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618487">31</a> by Jeff Coughlin
		posted on 6/6/2005 at 2:13 AM
		</div>
		<div class="comment_text"><p>Andy,</p><p>Sorry if this sounds obvious, but do you have a datasource name setup called "deafblog" that points to an Access databse file?  Your configuration is setup that way and the error you're getting says that it can't find the datasource.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618486">32</a> by Raymond Camden
		posted on 6/6/2005 at 6:40 PM
		</div>
		<div class="comment_text"><p>Jeff is right - check to make sure you actually have a DSN called that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618489">33</a> by Andy Clark
		posted on 6/6/2005 at 9:39 PM
		</div>
		<div class="comment_text"><p>Ouch</p><p>That will teach me for not playing baseball with the kids longer on a Sunday</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618490">34</a> by Andy Clark
		posted on 6/9/2005 at 4:51 PM
		</div>
		<div class="comment_text"><p>Anyone come across problem with comment subscribing when using Firefox but not IE?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618488">35</a> by Raymond Camden
		posted on 6/9/2005 at 4:55 PM
		</div>
		<div class="comment_text"><p>I use Firefox to test and not IE - so I definitely haven't seen it. Do you mean subscribing to the blog in general, or subscribe to a comment thread? If you have a place where I can test this, I'll be glad to.</p></div>
	</div>
</div>
		