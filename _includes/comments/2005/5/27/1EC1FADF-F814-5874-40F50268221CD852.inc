
<div class="comment" id="c_1713618640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618640">1</a> by Brian
		posted on 6/7/2005 at 11:39 PM
		</div>
		<div class="comment_text"><p>I'm trying your blog out on a Mac running BD 6.2 and mysql. It chokes on posting an entry...</p><p>Type	Application<br>Function(s)	addEntry<br>Detail	Data not supported<br>Tag Context	CFIF: Line=77; Column=1<br>|<br>+-- CFIF: Line=129; Column=2<br>    |<br>    +-- CFIF: Line=130; Column=3<br>        |<br>        +-- CFELSE: Line=132; Column=3<br>            |<br>            +-- CFSET: Line=133; Column=4<br>                |<br>                +-- CFFUNCTION: Line=215; Column=27<br>                    |<br>                    +-- CFQUERY: Line=227; Column=3<br>                        |<br>                        +-- CFIF: Line=245; Column=8<br>                            |<br>                            +-- CFELSE: Line=247; Column=7<br>                                |<br>                                +-- CFQUERYPARAM: Line=248; Column=6<br>Source	<br>245:           &lt;cfif instance.blogDBType is not "MYSQL"&gt;<br>246:           &lt;cfqueryparam value="#arguments.allowcomments#" cfsqltype="CF_SQL_BIT"&gt;<br>247:          &lt;cfelse&gt;<br>248:           &lt;cfqueryparam value="#arguments.allowcomments#" cfsqltype="CF_SQL_TINYINT"&gt;<br>249:          &lt;/cfif&gt;<br>^ Snippet from underlying CFML source</p><p>Hope to get this going. It looks promising.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618647">2</a> by Raymond Camden
		posted on 6/7/2005 at 11:42 PM
		</div>
		<div class="comment_text"><p>Are you using the very latest build? I updated it in the last hour.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618649">3</a> by Brian
		posted on 6/8/2005 at 5:43 AM
		</div>
		<div class="comment_text"><p>Hi again. I downloaded the latest one, installed it, deleted the database and reapplied the mysql script. It still errors out at the same spot. I'm running BD 6.2, mysql 4.1.12 on OS X 10.2.8.  Has anyone else gotten it to work with this setup? I can email you the a link to my set up so you can try it, if you have the time. I just want it to work for Mac users similiar to my set up.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618651">4</a> by Raymond Camden
		posted on 6/8/2005 at 6:22 PM
		</div>
		<div class="comment_text"><p>I've confirmed the bug and will try to get it fixed asap.</p></div>
	</div>
</div>
		