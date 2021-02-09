
<div class="comment" id="c_1713667490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667490">1</a> by Daniel D
		posted on 6/20/2007 at 1:09 AM
		</div>
		<div class="comment_text"><p>I have used both options in the past.  And here is my experince with both.</p><p>File System:<br>Pros:<br>  fast<br>  designed for file access <br>  can easily be exposed directly to the web if needed<br>     native web server security can easily be applied.<br>  can be easily exposed with security via CFContect if security is needed.</p><p>Cons:<br>  requires seperate backup from DB.<br>  replication can be a pain in a windows enviroment (not needed from your statement)</p><p>DB storage for files.<br>  Pros:  <br>    All "data" in one place.<br>    Replication can be simplier if needed ( don't have to setup replication for file system)</p><p>  Cons:<br>    Most DB are not optimized for BLOB/CLOB access so this can be slower than file system.  <br>    More memory intensive for the application.  CF has to pull the file back and store in memeory befor it can be servered to the user.  Where file system it can directly stream to the user even when using CFContent.  If useing webserver only to serve the file then no extra memory use at all.  This can be a BIG issue for LARGE files.  <br>    Can greatly increase the size of your Database quickly making backups and restore processes for the DB longer.  If DB is used and a large number of files are expected that a seperate data space and backup plan be used for the files verse the rest of the application data storage.  So that the file portion of the DB can be backed up and restored seperately helping midigate this issue.  <br>    Adds additional non data processing load to the DB server.  Database are great at processing structured data that is what they are designed for.  You are now asking it do process large chuncks of unstructured data and to basicly be a file server for said data.  Not really playing to the strengths of the DB.</p><p>As with anything there are always other factors in the requirements that may lead on of these solutions to be the best solution for your problem.  But if I am just needed to store files and serve them back to the correct user(s) then file storage and little CF code is my personal preference for speed and ease of mantince.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667491">2</a> by DK
		posted on 6/20/2007 at 1:15 AM
		</div>
		<div class="comment_text"><p>One major issue to consider is how many files will you have? A lot of times, depending on the OS, you have limits per directory for file counts. This limit can be a myriad of things as simple as not allowing more files reliably to exist there OR significantly slowing down directory retrieval access. Again, that depends on the OS and in some cases is not an issue at all. Its still worth noting.</p><p> One of the main points the database storage people seem to use is server farms and the lack of needing to re-propagate the data to all the access points. I really think that is a moot point, even in a cross domain setting you can setup a trust to a dedicated file server (even easier in a single domain environment obviously).</p><p>I've always preferred file system. I've used both and even from the administration side of things the file system alternative is much cleaner in many cases. my .02 anyhow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667493">3</a> by Geoff
		posted on 6/20/2007 at 1:55 PM
		</div>
		<div class="comment_text"><p>My stuff is mostly ecommerce, but for all our help files and "flat" pages (about 50 or so), I store them in a database. I use scopecache and isapi rewrite to cache the pages and keep the urls nice.</p><p>It means users can search the page contents, and they can be edited easily via a simple back-end widget without the need for FTP.</p><p>Probably not the best solution if you've got thousands of pages however...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667489">4</a> by Phillip Senn
		posted on 6/20/2007 at 4:15 PM
		</div>
		<div class="comment_text"><p>I vote for file system because you want to keep your database as lean as possible.<br>You want to do all your filtering and sorting as quickly as possible and once the user identifies what document they want, then go get it.<br>I could see that for political reasons you may want to keep them in one system, (no chance of losing the document but still having the row in the table), but that strikes me as kind of going back to a flat mentality.<br>On the other hand, I've heard rumors in times past of Microsoft putting SQL Server into their OS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667483">5</a> by Rob Wilkerson
		posted on 6/20/2007 at 5:24 PM
		</div>
		<div class="comment_text"><p>I've used both approaches and found that even when using the database (due to a clustering requirement), I found that I needed to "cache" files on the file server for speed.  The database was just too slow and the memory requirements were too excessive.  In the end, I used the database as the "gold" copy and, if needed, pushed files to the file server when updated.</p></div>
	</div>
</div>
		