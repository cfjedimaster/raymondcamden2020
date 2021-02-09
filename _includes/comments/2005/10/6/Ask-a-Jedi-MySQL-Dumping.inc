
<div class="comment" id="c_1713621239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621239">1</a> by Grant Gelinas-Brown
		posted on 10/6/2005 at 9:10 PM
		</div>
		<div class="comment_text"><p>I second this recommendation.</p><p>We actually use MySQLDUMP to backup over 30 MySQL production databases each night. We dump them to a file, then copy these files to an external device.</p><p>I have had the pleasure of using these backups for a Disaster Recovery restore, and it worked well.</p><p>Grant</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621241">2</a> by Barneyb
		posted on 10/6/2005 at 11:17 PM
		</div>
		<div class="comment_text"><p>Dumping the whole database is a good way to get a snapshot, but if you DB is of any sort of size, it can be very time consuming to do.  Couple that with the fact that you need to take the database offline in order to get a consistent snapshot, and you're looking at a nearly useless technique.  However, MySQL has two tools that are very helpful in solving the problem.</p><p>First is the binary log.  It's a log that contains all the modifications done to the databases on the server.  So if you have to servers with identical data, and then run a bunch of stuff on one of them, you can take the binary log from the first server and play it back on the second, and return the two servers to their synchronized status.  For backup, the same thing applies, but the problem comes with getting the that initial state of synchronization (I'll come back to this).</p><p>Second is replication.  MySQL has built-in capabilities to replicate databases (using the binary log) across multiple servers.  Not going to go into detail, but it works really well, and can even be passed over an SSL-encrypted connection for doing replication across an untrusted network.</p><p>For doing backups with the binary log, you need a point in time where you have the full database, and then you can just back up the binary logs every night, and if you need to recover, you load that full database, and play back the binary logs to update it to the last backed-up state.  As you might imagine, playing back a lot of binary logs is time consuming, so it's advantageous to have your full database snapshot be fairly recent, but I outlined the problems with taking a full database snapshot above.</p><p>The solution is a replication server.  It doesn't need to be beefy, since it won't have any load, and it can be offsite.  When you need a full backup, you take that server down and make the backup, rather than affecting the production server.  You can also harvest the binary logs for backup from this machine, and basically never touch your production machine at all.</p><p>We use this scheme and it works very well.  Full backups off the non-production slave ever 1st and 15th of the month, and daily backups of the binary logs.  In a disaster recovery scenario, we'd restore the latest full backup, and then play back the subsequent binary logs.  On average, that'll be 7-9 days worth.  We've done it a few times (for getting back data users deleted, not disaster recovery) and it worked flawlessly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621237">3</a> by Raymond Camden
		posted on 10/6/2005 at 11:20 PM
		</div>
		<div class="comment_text"><p>Thanks, as always, for the info Barney (even though you said my solution was useless. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621243">4</a> by Barneyb
		posted on 10/6/2005 at 11:45 PM
		</div>
		<div class="comment_text"><p>Yeah, I didn't word it very well.  It's usefulness is inversely proportional to both your DB size, and the importance of uptime.  For small personal sites, it's more than adequate.  For smaller commercial sites, it's still quite reasonable, but for anything that can't go down for a couple minutes (or more) every night it's not a good choice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621244">5</a> by Raymond Camden
		posted on 10/6/2005 at 11:50 PM
		</div>
		<div class="comment_text"><p>No worries. This is exactly the kind of feedback I wanted since I'm just a noob with mysql.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621245">6</a> by Dave Livingston
		posted on 10/7/2005 at 2:47 AM
		</div>
		<div class="comment_text"><p>One trick I have used in the past is to request the info from the backup machine. So your back up or receiving server would run a command like this:</p><p>mysqldump -Q --verbose --allow-keywords --quote-names --compress --all --host=59.59.59.68 --user=yourusername  --port=3306 --add-drop-table  --databases courses managed medtran | mysql --host=localhost</p><p>This will grab the info from your live db and pipe it to the local mysql installation. Its also good for dumping to your local dev machine. One note you have to add permission for the requesting boxes IP and user to connect.</p><p>Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621238">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621238">7</a> by Mark
		posted on 10/7/2005 at 4:02 AM
		</div>
		<div class="comment_text"><p>Heya</p><p>Agree with the disclaimer about not being incredibly robust, etc.. but useful none the less.</p><p>Here are the generic options that we use:</p><p>mysqldump -c -C --opt --set-variable=net_buffer_length=10KB</p><p>-c : complete inserts (include column names)<br>-C : compress information between the client and the server (useful if exporting from a remote server)<br>--opt : does a bunch of useful stuff (on by default in 4.1)<br>--set-variable=net_buffer_length=XKB : as a side effect of --opt mysqldump will try to insert all the data in a table in a single INSERT statement, I've had mysql hang on a number of occasions when doing this with bigger tables. net_buffer_length forces mysql to start a new INSERT statement every X KB.</p><p>hth</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621240">8</a> by Scott Stroz
		posted on 10/7/2005 at 7:38 AM
		</div>
		<div class="comment_text"><p>The first time I set up replication in MySQL I had earmarked the entire day to get it running.  This was based on the debacle we encountered when we tried to get replication working for SQl Server.</p><p>Anyway, I sat down at about 9:00 AM to start.  After backing up the primary server, restoring it to the secondary server, modifying the config files on each of the servers and rstarting the MySQL service on each machine, replication was up and running by 9:30 AM. (Probably more like 9:15)</p><p>Another cool thing, though it may be differnt in larger deployments, replicatoin is near real-time.</p></div>
	</div>
</div>
		