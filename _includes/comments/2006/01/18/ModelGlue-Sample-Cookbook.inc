
<div class="comment" id="c_1713649299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649299">1</a> by Gus
		posted on 1/18/2006 at 8:11 PM
		</div>
		<div class="comment_text"><p>Thanks Ray!<br>Now I'd like to announce two new products I am releasing:<br>The Rabid_ModelGlue framework and The Rabid_Cookbook.</p><p>It'll take me about 20 minutes to strip out any references to the actual creators, and encrypt the files, but then these incredible NEW products will be available at my website.</p><p>Oh.. and don't forget to make a donation to me for honoring your work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649307">2</a> by Raymond Camden
		posted on 1/18/2006 at 8:14 PM
		</div>
		<div class="comment_text"><p>Heh - ok folks - I know everyone loves to pick on him - but if you don't mind, I'd rather this all just stop, ok?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649305">3</a> by Dan G. Switzer, II
		posted on 1/18/2006 at 8:29 PM
		</div>
		<div class="comment_text"><p>You might want to rename the kill.cfm template on your website--or at least protect the file (maybe you have.)</p><p>You probably don't want people deleting comments at will. Also, I'd probably put all those special files into a protected sub-directory and not include those with the source file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649304">4</a> by Raymond Camden
		posted on 1/18/2006 at 8:46 PM
		</div>
		<div class="comment_text"><p>Ah - but I use UUIDs. ;) If a person can guess a UUID for a comment, more power to em. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649302">5</a> by Michael White
		posted on 1/18/2006 at 11:50 PM
		</div>
		<div class="comment_text"><p>You are a STUD, Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649306">6</a> by doug sims
		posted on 1/19/2006 at 12:56 AM
		</div>
		<div class="comment_text"><p>Is this code set up to use friendly urls by default or something? if so, i dont think it is working (in my configuration).</p><p>After figuring out what tables to create, i was able to get the main page to come up fine, but the navigation links were wacked out.<br>to get past this I had to edit the navagation tabs to insert the ?event= into the url</p><p> if not, the href pointed to folders that didn't exist like /FAQ</p><p>anyone else have a simular problem?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649312">7</a> by Raymond Camden
		posted on 1/19/2006 at 1:03 AM
		</div>
		<div class="comment_text"><p>Wow - I wasn't actually thinking people would _run_ it. I thought they would just look at it. But yes, it is meant to use SES urls. If you have Apache, you can just use the following:</p><p>RewriteEngine on<br>RewriteRule /categories /\?event=categories [PT]<br>RewriteRule /faq /\?event=faq [PT]<br>RewriteRule /submit /\?event=submitform [PT]<br>RewriteRule /category/([0-9]+)/.* /\?event=showentries&amp;id=$1 [PT]<br>RewriteRule /entry/([0-9]+)/.* /\?event=showentry&amp;id=$1 [PT]<br>RewriteRule /search /\?event=search [PT]<br>RewriteRule /rss /\?event=rss [PT]<br>RewriteRule /downloadwithcomments /\?event=download&amp;comments=true [PT]<br>RewriteRule /download /\?event=download [PT]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649310">8</a> by Vishnuprasad
		posted on 2/8/2006 at 12:23 PM
		</div>
		<div class="comment_text"><p>Hi</p><p>i am newbi to model-glue application</p><p>i have downloaded the modelglue sample application , from where can i get the database scripts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649311">9</a> by Raymond Camden
		posted on 2/8/2006 at 7:54 PM
		</div>
		<div class="comment_text"><p>Vishnu - It wasn't my intent per se that folks would take this code and actually run it. That's why I didn't include the db scripts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649313">10</a> by vishnuprasad
		posted on 3/29/2007 at 11:35 AM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>Can you provide me the SQL Script for the cookbook. so that i can try to run and learn  how it is implemented</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649315">11</a> by Raymond Camden
		posted on 4/4/2007 at 10:58 PM
		</div>
		<div class="comment_text"><p>Not sure how well it will paste, but here goes nothing:</p><p>SET ANSI_NULLS ON<br>GO<br>SET QUOTED_IDENTIFIER ON<br>GO<br>IF NOT EXISTS (SELECT * FROM dbo.sysobjects WHERE id = OBJECT_ID(N'[dbo].[comments]') AND OBJECTPROPERTY(id, N'IsUserTable') = 1)<br>BEGIN<br>CREATE TABLE [dbo].[comments](<br>	[id] [int] IDENTITY(1,1) NOT NULL,<br>	[entryidfk] [int] NOT NULL,<br>	[name] [nvarchar](255) NOT NULL,<br>	[emailaddress] [nvarchar](255) NOT NULL,<br>	[comment] [ntext] NOT NULL,<br>	[created] [datetime] NOT NULL,<br>	[token] [nvarchar](35) NOT NULL,<br> CONSTRAINT [PK_comments] PRIMARY KEY CLUSTERED <br>(<br>	[id] ASC<br>) ON [PRIMARY]<br>) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]<br>END<br>GO<br>SET ANSI_NULLS ON<br>GO<br>SET QUOTED_IDENTIFIER ON<br>GO<br>IF NOT EXISTS (SELECT * FROM dbo.sysobjects WHERE id = OBJECT_ID(N'[dbo].[authors]') AND OBJECTPROPERTY(id, N'IsUserTable') = 1)<br>BEGIN<br>CREATE TABLE [dbo].[authors](<br>	[id] [int] IDENTITY(1,1) NOT NULL,<br>	[name] [nvarchar](255) NOT NULL,<br>	[emailaddress] [nvarchar](255) NOT NULL,<br>	[website] [nvarchar](255) NOT NULL,<br> CONSTRAINT [PK_authors] PRIMARY KEY CLUSTERED <br>(<br>	[id] ASC<br>) ON [PRIMARY]<br>) ON [PRIMARY]<br>END<br>GO<br>SET ANSI_NULLS ON<br>GO<br>SET QUOTED_IDENTIFIER ON<br>GO<br>IF NOT EXISTS (SELECT * FROM dbo.sysobjects WHERE id = OBJECT_ID(N'[dbo].[categories]') AND OBJECTPROPERTY(id, N'IsUserTable') = 1)<br>BEGIN<br>CREATE TABLE [dbo].[categories](<br>	[id] [int] IDENTITY(1,1) NOT NULL,<br>	[name] [nvarchar](255) NOT NULL,<br>	[description] [nvarchar](4000) NOT NULL,<br> CONSTRAINT [PK_categories] PRIMARY KEY CLUSTERED <br>(<br>	[id] ASC<br>) ON [PRIMARY]<br>) ON [PRIMARY]<br>END<br>GO<br>SET ANSI_NULLS ON<br>GO<br>SET QUOTED_IDENTIFIER ON<br>GO<br>IF NOT EXISTS (SELECT * FROM dbo.sysobjects WHERE id = OBJECT_ID(N'[dbo].[entries]') AND OBJECTPROPERTY(id, N'IsUserTable') = 1)<br>BEGIN<br>CREATE TABLE [dbo].[entries](<br>	[id] [int] IDENTITY(1,1) NOT NULL,<br>	[authoridfk] [int] NOT NULL,<br>	[question] [nvarchar](4000) NOT NULL,<br>	[answer] [ntext] NOT NULL,<br>	[created] [datetime] NOT NULL,<br>	[lastupdated] [datetime] NOT NULL,<br> CONSTRAINT [PK_entries] PRIMARY KEY CLUSTERED <br>(<br>	[id] ASC<br>) ON [PRIMARY]<br>) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]<br>END<br>GO<br>SET ANSI_NULLS ON<br>GO<br>SET QUOTED_IDENTIFIER ON<br>GO<br>IF NOT EXISTS (SELECT * FROM dbo.sysobjects WHERE id = OBJECT_ID(N'[dbo].[entries_categories]') AND OBJECTPROPERTY(id, N'IsUserTable') = 1)<br>BEGIN<br>CREATE TABLE [dbo].[entries_categories](<br>	[entryidfk] [int] NOT NULL,<br>	[categoryidfk] [int] NOT NULL<br>) ON [PRIMARY]<br>END<br>GO<br>SET ANSI_NULLS ON<br>GO<br>SET QUOTED_IDENTIFIER ON<br>GO<br>IF NOT EXISTS (SELECT * FROM dbo.sysobjects WHERE id = OBJECT_ID(N'[dbo].[textblocks]') AND OBJECTPROPERTY(id, N'IsUserTable') = 1)<br>BEGIN<br>CREATE TABLE [dbo].[textblocks](<br>	[id] [int] IDENTITY(1,1) NOT NULL,<br>	[label] [nvarchar](255) NOT NULL,<br>	[body] [ntext] NOT NULL,<br> CONSTRAINT [PK_textblocks] PRIMARY KEY CLUSTERED <br>(<br>	[id] ASC<br>) ON [PRIMARY]<br>) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]<br>END</p></div>
	</div>
</div>
		