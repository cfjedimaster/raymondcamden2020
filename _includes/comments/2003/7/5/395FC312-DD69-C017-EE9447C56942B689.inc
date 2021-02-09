
<div class="comment" id="c_1713614684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614684">1</a> by William Dent
		posted on 7/6/2003 at 5:46 PM
		</div>
		<div class="comment_text"><p>Thanks again for the update! Haven't used your blog publicaly anywhere, but plan to one day.  I installed this and got a few errors you might want to check.  It seems you have one hardcoded instance of dsn in the application.cfm file.  However after I updated that I still get error messages that say "name can&amp;apos;t be empty" on line 370 blog.cfc.  Strange.  Anyways I thought you might want to know about the Application.cfm file.  Cheers!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614688">2</a> by Jacob Reider
		posted on 7/7/2003 at 7:12 AM
		</div>
		<div class="comment_text"><p>Hmmm<br>I also got an error on line 370 of the cfc initially .. but it's not from hardcoding (#dsn# on line 370) .. its a problem with the .ini settings .. users should be sure to leave default-camden and [camden] ... or change them to wahtever they would like.. but they must tbe the same.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614693">3</a> by Raymond Camden
		posted on 7/7/2003 at 3:13 PM
		</div>
		<div class="comment_text"><p>1) Hard coded dsn in application.cfm: This is used by the authenticate udf, which is not directly part of the blog. Maybe it should be actually.</p><p>2) line 370? My line 370 doesn't mention anything about name. You sure you have all the new files? Ah, just read Jacob's post. Yes, right now we kind of assume that your ini file is set up 100% right. I'm going to add a 'verify' style function later that might check for stuff like that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614694">4</a> by Jacob Reider
		posted on 7/7/2003 at 4:14 PM
		</div>
		<div class="comment_text"><p>Yeh ... I am now having a problem with the &lt;cfquery name="q" datasource="#application.dsn#"&gt; on line 113 of the application udf (called from line 19 of application.cfm) since the application.dsn gets set above as "camdenblog"  ... so .. I would agree that this needs to be dynamically set from the .ini file ..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614700">5</a> by William Steiner
		posted on 7/7/2003 at 4:17 PM
		</div>
		<div class="comment_text"><p>Looking at the new version am I correct that multiple blogs would still need their own dsns?</p><p>I can think of some cases where allowing multiple blogs to share the same dsn would be beneficial.  Some examples would be a personal blog and a programming blog.  Or a user group allowing it's "board members" to have blogs on the user group's site.</p><p>Does anyone else see this as a plus?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614695">6</a> by Jacob Reider
		posted on 7/7/2003 at 11:36 PM
		</div>
		<div class="comment_text"><p>Yeh ... I am now having a problem with the &lt;cfquery name="q" datasource="#application.dsn#"&gt; on line 113 of the application udf (called from line 19 of application.cfm) since the application.dsn gets set above as "camdenblog"  ... so .. I would agree that this needs to be dynamically set from the .ini file ..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614696">7</a> by Raymond Camden
		posted on 7/7/2003 at 11:38 PM
		</div>
		<div class="comment_text"><p>I'm a bit confused... I know it's hard coded, but can't you just edit it? Or are you saying it's a problem in that you have to modify application.cfm? I guess I'm saying, I know I need to look into it, but you _do_ have stuff running, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614697">8</a> by Nathan Dintenfass
		posted on 7/8/2003 at 2:19 AM
		</div>
		<div class="comment_text"><p>Any plans to create SourceForge project and start managing this from there?  Might be nice to have CVS, release management, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614698">9</a> by William Dent
		posted on 7/8/2003 at 4:17 PM
		</div>
		<div class="comment_text"><p>OK.  My error in the ini file.  You didn't see the [camden] above the configuration inforamation.  Sometimes the obvious is often overlooked!  Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614703">10</a> by Peter Tilbrook
		posted on 7/9/2003 at 6:19 AM
		</div>
		<div class="comment_text"><p>The script for SQL Server appears to be corrupted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614699">11</a> by Raymond Camden
		posted on 7/9/2003 at 1:23 PM
		</div>
		<div class="comment_text"><p>Nathan - no, no plans. I want to maintain control over the codebase, so I don't see how a sourceforge project would help. Do you think it would?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614702">12</a> by Raymond Camden
		posted on 7/9/2003 at 1:24 PM
		</div>
		<div class="comment_text"><p>Peter, what do you mean? It looks ok to me. If you mean the wierd spacing, I think that's something you can ignore.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614701">13</a> by Raymond Camden
		posted on 7/9/2003 at 1:30 PM
		</div>
		<div class="comment_text"><p>Guys, I posted another blog update. Please check the new entry.</p></div>
	</div>
</div>
		