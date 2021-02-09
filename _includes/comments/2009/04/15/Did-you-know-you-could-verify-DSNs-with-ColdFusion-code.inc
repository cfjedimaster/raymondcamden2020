
<div class="comment" id="c_1713714656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714656">1</a> by Louis Muloka
		posted on 4/15/2009 at 9:23 PM
		</div>
		<div class="comment_text"><p>This is really cool / helpful.  Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714659">2</a> by Edward Beckett
		posted on 4/15/2009 at 9:24 PM
		</div>
		<div class="comment_text"><p>I tried it on my dev box and when invoking the admin login ...</p><p>   "adminObj.login("admin");"</p><p>I'm getting</p><p>ErrorCode: CFACCESSDENIED<br>Message: The current user is not authorized to invoke this method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714662">3</a> by Raymond Camden
		posted on 4/15/2009 at 9:26 PM
		</div>
		<div class="comment_text"><p>Is 'admin' your pssword?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714667">4</a> by Edward Beckett
		posted on 4/15/2009 at 9:42 PM
		</div>
		<div class="comment_text"><p>Uhhh ...</p><p>Yeah ...</p><p>Sure ...</p><p>Hey ... It Works Now!</p><p>;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714661">5</a> by Rick Hellewell
		posted on 4/15/2009 at 9:54 PM
		</div>
		<div class="comment_text"><p>Here's a challenge for you (which you may have already done; haven't done a search yet).</p><p>I am creating a new server with CF8 and moving content from CFMX. About 20 databases defined in CFMX.</p><p>Assuming the same folder/file structure on both servers, is there a quick way to get the databases defined in CF8 -- an 'export' of some type of the data sources from the CFMX server and then an import into CF8? That would save a lot of time in setting up the new server.</p><p>Probably related to that is a way to document data sources into a text file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714658">6</a> by Raymond Camden
		posted on 4/15/2009 at 9:55 PM
		</div>
		<div class="comment_text"><p>CARS. Feature built into CF since CFMX. Allows you to backup/restore settings. Not sure if it will work from 6 to 8, but you can try.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714665">7</a> by Rick Hellewell
		posted on 4/15/2009 at 10:02 PM
		</div>
		<div class="comment_text"><p>CARS sounds interesting, but down at the bottom of the CARS screen when you create a new one: "ODBC Datasources cannot be included in J2EE archives". And since the 'developers' (the quotes are intentional....) around here use Access databases, CARS won't work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714664">8</a> by Raymond Camden
		posted on 4/15/2009 at 10:10 PM
		</div>
		<div class="comment_text"><p>Ouch. Guess you are out of luck. Sorry. I've heard you can copy the XML file that contains the dns info, but... that kinda concerns me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714660">9</a> by Barney
		posted on 4/15/2009 at 10:15 PM
		</div>
		<div class="comment_text"><p>Verification just runs a query, so not sure that there's any difference between using that method (which requires the admin password) and try..catch with a SELECT 1 query in it (which anyone can do).</p><p>I believe that some of the driver config screens actually let you specify the SQL used for the verification query, but I might be remembering incorrectly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714663">10</a> by Raymond Camden
		posted on 4/15/2009 at 10:19 PM
		</div>
		<div class="comment_text"><p>Interesting. Yep, I see verification sql in advanced settings, although it is blank. I wonder what SQL it uses then. Perhaps some default 'get tables' type thing that is guaranteed to work in the db being used.</p><p>Well, still, good tip I think. You know it will always work no matter what tables you end up in there. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714668">11</a> by Andy Sandefer
		posted on 4/15/2009 at 10:25 PM
		</div>
		<div class="comment_text"><p>@Ray<br>Thanks for this one - a cool and quick trick!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714666">12</a> by shag
		posted on 4/16/2009 at 12:16 AM
		</div>
		<div class="comment_text"><p>I'm sure it's making some sort of meta request that is specific to the DB running rather than if the table space is actually available.  Our DBA takes our table space offline to do cold backups in our dev environment, so even though the db was alive, the app would bomb when trying to write data to the table.</p><p>In our java app, we run a select * from tablename where 1=0 which actually hits the table, but returns nothing without any cost.  You can throw some error handling in there, but we felt this was more graceful code wise.</p><p>A long story short, I would recommend using a query that hits a table intended for the app instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714670">13</a> by JC
		posted on 4/16/2009 at 1:44 AM
		</div>
		<div class="comment_text"><p>I'm trying to think of where this would be useful at the same time that you'd actually have an admin password.</p><p>I could totally see using it with a nice friendly installer script of some kind, testing to see if the DSN is in place before attempting to use it... but that probably wouldn't have the admin password.</p><p>Maybe if you were creating DSNs on the fly? I know I was working on a script the other day to basically automate a fresh CF install to meet our security standards... turning off stuff we don't use, requiring username &amp; password, setting complex password for admin, creating individual users for all the developers, creating DSNs and mappings and so on... I suppose I could use something like that after the case to test &amp; see if the DSN was successfully added.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714669">14</a> by JC
		posted on 4/16/2009 at 1:45 AM
		</div>
		<div class="comment_text"><p>...and then I reread the first line and realize you're not really testing to see if it exists, but how to handle it if it's currently *down* for some reason... and things make more sense.</p><p>Ignore me. No coffee today. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714672">15</a> by Miles Jordan
		posted on 4/16/2009 at 4:42 AM
		</div>
		<div class="comment_text"><p>Though it probably uses the same underlying methods, you can use the java class to get the same result:</p><p>dsService = CreateObject("java", "coldfusion.server.ServiceFactory").DataSourceService;<br>res = dsService.verifyDatasource("vegemiteisgoodalso");</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714671">16</a> by Robert Burns
		posted on 4/16/2009 at 6:54 AM
		</div>
		<div class="comment_text"><p>Been using this for awhile...surprised you don't need the admin password for it.</p><p>&lt;cfset dsService = CreateObject("java", "coldfusion.server.ServiceFactory").DataSourceService /&gt;<br>&lt;cfset dataSources = dsService.getDataSources() /&gt;</p><p>&lt;cfloop list="#structKeyList(dataSources)#" index="ds"&gt;<br>&lt;cfset datasource = dataSources[ds] /&gt;<br>&lt;cfoutput&gt;<br>#<a href="http://disq.us/url?url=http%3A%2F%2Fdatasource.name%3ArooD2QZ7k6ZeuPmocgEfqL1RJII&amp;cuid=3321886" rel="nofollow noopener" title="datasource.name">datasource.name</a># : #datasource.username# (#datasource.password#)&lt;br /&gt;<br>&lt;/cfoutput&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714673">17</a> by Miguel Ulloa
		posted on 4/16/2009 at 5:57 PM
		</div>
		<div class="comment_text"><p>I was wondering if there is equivalent code for Railo.  I looked around and all that may be possible is to instatiate "com.microsoft.jdbc.sqlserver.SQLServerDriver".  I may be totally wrong, but has anybody ported this code to Railo?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714674">18</a> by Louis Muloka
		posted on 4/16/2009 at 6:26 PM
		</div>
		<div class="comment_text"><p>I'm curious if there's any way to pass in an encrypted password into the adminObj.login() method instead of it being simply plain text.</p><p>When I do a cfdump var="#adminObj.login#" it returns the list of arguments that the method takes, and one of them is salt.</p><p>Does anyone have any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714676">19</a> by JC
		posted on 4/16/2009 at 8:09 PM
		</div>
		<div class="comment_text"><p>well, there's always #decrypt(MyEncryptedPassword,crypto.key,crypto.method,"hex",crypto.ivector)#</p><p>At least then you don't have a password sitting in your code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714682">20</a> by Adam Bellas
		posted on 4/17/2009 at 6:15 AM
		</div>
		<div class="comment_text"><p>I'm looking forward to seeing how I can wrangle this verifyDSN() into a monitoring solution of sorts.  Putting this code somewhere that gets hit by the CF scheduler every few minutes might be a halfway-decent way of setting a flag in the server scope, which in turn tells all the applications running on the server "don't bother trying that DSN!"</p><p>Thanks again for your help on this, it really got my wheels turning!</p><p>Cheers,<br>"The Guy Who Was Next To You"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714678">21</a> by Jon Woodroof
		posted on 5/2/2013 at 9:49 PM
		</div>
		<div class="comment_text"><p>Can anyone tell me what my problem is?<br>I can call/use createObject(), but I'm not able to call VerifyDSN() or setMSAccessUnicode().  I get the error "The current user is not authorized to invoke this method."  I'm using ColdFusion 8.  It works on my local machine, but not on my server</p><p>&lt;cfset datasourceService = createObject("component", "CFIDE.adminapi.datasource")&gt;<br>	&lt;cfif datasourceService.VerifyDSN(datasource_name) eq false&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714679">22</a> by Raymond Camden
		posted on 5/2/2013 at 9:52 PM
		</div>
		<div class="comment_text"><p>I assume you did the login portion first, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714680">23</a> by Thomas Grobicki
		posted on 5/9/2013 at 11:19 PM
		</div>
		<div class="comment_text"><p>Previously working code has stopped working when using the cfide "datasource" feature with the same error about "user not authorized". I suspect one of the recent security hotfixes has broken something. I tried several different variations including creating a users specifically for API calls, also adding the "admin" username but nothing helped. I think this is just a bug that was introduced in the hotfix.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714681">24</a> by Raymond Camden
		posted on 5/10/2013 at 7:22 AM
		</div>
		<div class="comment_text"><p>I'd encourage you to file a bug report if you can.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714684">25</a> by Martin Parry
		posted on 7/6/2013 at 10:17 AM
		</div>
		<div class="comment_text"><p>I was experiencing the "The current user is not authorized to invoke this method" error this morning and have spent an hour or so to finally find out what caused it to not work in my case.</p><p>I use a common code set which includes the Application.cfc from a CF Mapping - So, in the application.cfc in the actual website I do this:-</p><p>&lt;cfinclude template="/UberDirectory/Application.cfc"&gt;</p><p>Then, in the /UberDirectory/Application.cfc, I was initialising a CFC which checks if the datasource was created for the website. The datasource checking code attempts to log into the Admin API and check &amp; create if necessary the datasource.</p><p>This has previously worked without fail for me - But in this instance it failed!! I was doing two things wrong - Firstly, the CFC should only be called in the Application.cfc in the onRequestStart section as the Application had to be initialised first - This is maybe because I've invoked the application.cfc in a "non-standard" manner.</p><p>Secondly, once I'd moved the CFC invocation into oNRequestStart I saw the following error:-<br>The string COOKIE.CFAUTHORIZATION_uber-directory is not a valid ColdFusion variable name.</p><p>I had this as the app name .... &lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a> = 'uber-directory'&gt;</p><p>Changedthe dash to an underscore and I was away and could once again check the datasources</p><p>Hope it helps</p><p>Martin</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714683">26</a> by Raymond Camden
		posted on 7/6/2013 at 7:17 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing that, Martin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714685">27</a> by Martin Parry
		posted on 7/7/2013 at 6:18 AM
		</div>
		<div class="comment_text"><p>No probs</p></div>
	</div>
</div>
		