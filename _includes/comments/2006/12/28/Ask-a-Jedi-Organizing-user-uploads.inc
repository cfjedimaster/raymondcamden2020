
<div class="comment" id="c_1713660843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660843">1</a> by Teddy R Payne
		posted on 12/28/2006 at 7:49 PM
		</div>
		<div class="comment_text"><p>I would also recommend putting the uploaded files in a folder on the server that is not in the webroot.  You can use cffile and cfcontent to serve up the files.</p><p>This removes the ability to directly invoke a file from outside your website.</p><p>As for naming conventions, I like the user name as the folder.  This is typical of unix/linux based systems.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660852">2</a> by Chad
		posted on 12/28/2006 at 7:55 PM
		</div>
		<div class="comment_text"><p>I have used the current date for the subfolders.  like \username\12-28-2006</p><p>It gives you a little more organization.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660850">3</a> by DK
		posted on 12/28/2006 at 8:33 PM
		</div>
		<div class="comment_text"><p>I like using the user id for sub foldering for a few reasons like Ray pointed out. I'd never thought to use a catalog but I also never thought about upper folder limit!</p><p> Anyhow another couple reasons to organize by user name/id is obviously several users could have text.txt or w/e without making you rename it to text89.txt which if someone downloads it, would no longer match the name the author says to open (in the case of multiple files all self referencing like in a suite of documents).</p><p> Another cool usage is for admin reporting. Using cfdirectory/cffile etc you can report what users are potentially abusing file uploads by getting counts and estimated sizing. Contrarily you can see what users are not taking advantage of it (which may meet a need depending on the application) and report that to an admin as well.</p><p> A last use is if you maybe had a user control panel they could one click see a list of every file they've ever uploaded by one cfdirectory then loop. There would be no database interaction really required (depending on your application).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660857">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660857">4</a> by Sid Wing
		posted on 12/28/2006 at 9:35 PM
		</div>
		<div class="comment_text"><p>&lt;p&gt;I have built a number of varying-scale, document library/file library style, applications over the last few years.  I use Ray's "catalog" approach for storing the files.  I, also, use the "accept" attribute of CFFILE along with some other error checking code I have written to insure that the files are of only a given type (.txt, .zip, .pdf).&lt;/p&gt;  <br>&lt;p&gt;I have locked it down those types as most of the Office (MS Office) documents can execute code imbedded in themselves.&lt;/p&gt;  <br>&lt;p&gt;I am working on a way to call the command-line AVG Virus scanner to scan a given file when upload completes.  The file would upload to a quarantine area, be scanned, and then moved to the actual catalog area on a successfully completed scan.&lt;/p&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660861">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660861">5</a> by BlowToad
		posted on 12/28/2006 at 9:45 PM
		</div>
		<div class="comment_text"><p>to get past the issue where the user gets a different filename than expected (as noted in DK's comment), we use code like this and the browser saves the file as the right name.</p><p>&lt;cfheader name="content-disposition" value="filename=#qFileData.OrigFileName#"&gt; <br>&lt;cfcontent type="#qFileData.MIMEType#" file=#qFileData.ServerFileName#&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660856">6</a> by Joe Zack
		posted on 12/28/2006 at 9:48 PM
		</div>
		<div class="comment_text"><p>I worked for a company that setup folders based on username, and every time someone updated their username we had to create a new directory, move all their files, and then delete the old folder which was a pain so I would recommend using the primary key of the table, or hashing/generating a UUID and storing the foldername.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660859">7</a> by Raymond Camden
		posted on 12/28/2006 at 9:59 PM
		</div>
		<div class="comment_text"><p>Joe, why didn't you just rename the directory? One line of code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660858">8</a> by TJ Downes
		posted on 12/28/2006 at 10:13 PM
		</div>
		<div class="comment_text"><p>On a NTFS volume you can have as many files as you like in a single folder, there is no limit, up to a total of 4,294,967,295 files per NTFS volume.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660854">9</a> by Raymond Camden
		posted on 12/28/2006 at 10:31 PM
		</div>
		<div class="comment_text"><p>Cool TJ. Although - I'd probably NOT put even close to that many files in one folder. I'd imagine a simple cfdirectory call would take forever.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660855">10</a> by TJ Downes
		posted on 12/28/2006 at 10:45 PM
		</div>
		<div class="comment_text"><p>LOL, id not recommend it either. Simple calculations based upon 10ms per file write, it would take close to 2 years to write that many files to a disk. This is assuming your server will only take 10ms to write each file to the disk :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660865">11</a> by Joshua Cyr
		posted on 12/28/2006 at 10:52 PM
		</div>
		<div class="comment_text"><p>I recently had a project that created and read hundreds of thousands of cached files.  Putting them all in one directory results in VERY long cfdirectory call time, at about 10k files it starts to bog down.  Surprisingly it was only a handful of seconds for 200k + files.  I broke it down similar to how Ray describes and each folder (about 11k folders) had far fewer files and the speeds were back to what I would consider normal.  I opted to have my folder structure by the name of the catalog data and not a numerical ID.  Mostly for search engine optimization as the text would help with google and whatnot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660862">12</a> by TJ Downes
		posted on 12/28/2006 at 11:23 PM
		</div>
		<div class="comment_text"><p>im not so sure if I had to deal with thousands of files id want to use cfdirectory for each user request anyway. Id likely setup a directory watcher gateway (Ray has a post here somewhere) and make the gateway add each new file to a table of files, or delete them as necessary. Then users would just be querying a table, which is many many times faster.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660864">13</a> by Joe Zack
		posted on 12/29/2006 at 12:43 AM
		</div>
		<div class="comment_text"><p>re: Joe, why didn't you just rename the directory? One line of code.</p><p>I actually oversimplified the example and didn't realize that it mooted my point, the folder structure was actually first letter of username followed by the username like so:</p><p>"/userFiles/j/joe"</p><p>Which was silly from the get-go.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660863">14</a> by DK
		posted on 12/29/2006 at 12:59 AM
		</div>
		<div class="comment_text"><p>@ blowtoad - does that mean you are also storing in a db somewhere the original file name along with an entry on the uploaded file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660867">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660867">15</a> by Justice
		posted on 12/29/2006 at 1:02 AM
		</div>
		<div class="comment_text"><p>I have about 10 million documents in my system, and I use something like this:  \cabinetName\YYYY\MM\DD\filename.blah</p><p>I just store who owns the document in the database instead of the filesystem, and I store the file size in the DB so I can just query size by user.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660866">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660866">16</a> by Peter Bell
		posted on 12/29/2006 at 2:15 AM
		</div>
		<div class="comment_text"><p>Benefit of directory per user is that if necessary you can provide subset of users with FTP access if they need to upload hundreds of files, etc. Also easier to look at directory structure and for it to be meaningful. For same reason I tend to upload files keeping their name, just doing a rename on nameconflict - anything else is making it harder to pull that information together which to me makes the system a little more fragile.</p><p>I also prefer to use a business key (such as username) rather than something like a user ID as again the directory system itself is more meaningful without the database and writing a publish script to edit directory name on changing of username is no big deal. Only issue with this is if you make the directories web accessible - user changes username and then all their URLs break.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660871">17</a> by Biggz
		posted on 12/29/2006 at 3:05 AM
		</div>
		<div class="comment_text"><p>Simply put, using directories to manage user content should be the obvious decision. Not only do you benefit from simple organization, but you also take advantage of the OS's ability to manage those directories in special ways, such as symbolic links, mount points, NT junctions, etc.</p><p>In an ideal situation, such as a VPS or dedicated environment, two locations should be used, one referenced by the application with nothing more than junctions/symbolic links to the actual data, stored on a separate volume. This way you can change your layout - say add a new drive, simply by updating the links.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660870">18</a> by Kevin Sargent
		posted on 12/29/2006 at 3:53 AM
		</div>
		<div class="comment_text"><p>THANK YOU!</p><p>First, thanks to ray and everyones comments I can now move forward with confidence that what I am doing is at least accepted by you guys as a good way to do it. That makes me feel better!</p><p>I have in the past used the cataloged approach, like Ray talked about (/a/alex/, /b/bob/), and it was pretty straight forward to implement. I only had about 3K users - so I was always wondering if it was a safe technique. As a rule, I do not allow username changes in my applications, so that avoids the moving files issue. Too bad CFDIRECTORY doesn't have a MOVE action. A directory or file move on the same volume does not move the data, just updates the file system records of where that file is located - and is fast.</p><p>I don't think that I need to worry about cfdirectory results taking a long time. I can't see a reason to use cfdirectory in the front end or members area back end. I know the path for each user based on data stored in the DB, so I call it directly if/when needed. All the file info is stored in the DB also.</p><p>About storing the files off webroot, great idea. Again something that I have done in the past to control hot linking.</p><p>Well, Thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660868">19</a> by Sid Wing
		posted on 12/29/2006 at 4:59 AM
		</div>
		<div class="comment_text"><p>@kevin - <br>We implemented the "outside of webroot" storage for uploaded files as part of our team's "Best Practices" book.</p><p>Also, yes, CFDIRECTORY is WAY too slow for use for filename searching/listing/etc.  We (like you) use the DB to handle that SORT of thing (pun intended).</p><p>As for the username-file/directory move scenario, I am with you on that score as well.  We simply do not allow the users to "change" their username once their account is created.</p><p>As with anything, a little foresight in the design phase can save a multitude of heartache in the usage phase :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660869">20</a> by Dave
		posted on 1/2/2007 at 4:54 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>  In my experience I have never created directories based on the user them selves.  I have always created a general storage structure in conjunction with a database to store the files.  I did not store the files in the db but merely stored in the db where the file was.  The reasoning behind it was because I did not want a "power user" who uploaded 10x what everyone else did to mess anything up.  My approach allowed me to control the number of files in each directory so that there was no overload on the system while trying to read the contents of the directories.  It also allowed me to use the database to get directory information instead of using cfdirectory to examine the directories.</p><p>Just my 2 cents.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660842">21</a> by Kevin
		posted on 1/2/2007 at 6:46 AM
		</div>
		<div class="comment_text"><p>Exactly: The db contains locations of files and file info. Cfdirectory will never be needed except in maintenance scenarios.</p><p>breaking the site into sub folders of user names will prevent a single HUGE directory, and allow each user to use any filename.</p></div>
	</div>
</div>
		