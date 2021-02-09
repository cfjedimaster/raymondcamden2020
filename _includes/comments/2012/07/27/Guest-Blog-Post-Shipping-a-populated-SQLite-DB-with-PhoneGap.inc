
<div class="comment" id="c_1713742253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742253">1</a> by Vitgas
		posted on 8/2/2012 at 2:38 PM
		</div>
		<div class="comment_text"><p>May you upload some screenshots showing how your proyect is organized and those changes you remark?<br>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742252">2</a> by Scott
		posted on 8/3/2012 at 11:19 PM
		</div>
		<div class="comment_text"><p>Vitgas, feel free to email me directly and I'd be glad to help.  I'll have Ray update the blog after I understand your questions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742262">3</a> by Scott Buckel
		posted on 8/9/2012 at 12:32 AM
		</div>
		<div class="comment_text"><p>Here's an updated version on how I did this.  Thanks to Ray for all of his help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742261">4</a> by Raymond Camden
		posted on 8/9/2012 at 12:34 AM
		</div>
		<div class="comment_text"><p>Did you mean to post a link?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742263">5</a> by Raymond Camden
		posted on 8/9/2012 at 12:36 AM
		</div>
		<div class="comment_text"><p>Here is the link he meant: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.corporatezen.com%2Fshipping_prepopulated_database_with_phonegap%3Ax2P9k6RKvMD3Au16aNEaUpR_7qM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.corporatezen.com/shipping_prepopulated_database_with_phonegap">http://www.corporatezen.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742254">6</a> by Jeremy
		posted on 9/30/2012 at 6:53 PM
		</div>
		<div class="comment_text"><p>Thanks so much for this post! It helped point me in the right direction for my own project. For any iOS developers, I found the linked instructions in <a href="http://disq.us/url?url=http%3A%2F%2Fgauravstomar.blogspot.com%2F2011%2F08%2Fprepopulate-sqlite-in-phonegap.html%3ALujl77Kx4-3rswnJdwAXngpYAfM&amp;cuid=3321886" rel="nofollow noopener" title="http://gauravstomar.blogspot.com/2011/08/prepopulate-sqlite-in-phonegap.html">http://gauravstomar.blogspo...</a> to be a little out of date.</p><p>When using the Cordova-SQLitePlugin, it looks in the Documents directory, and Gaurav Tomar's instructions refers to WebKit/Databases directory (which I believe is no longer used because of an iOS 5.1 change).</p><p>I found the following works instead:</p><p>NSString *databaseName = @"Database.db";</p><p>NSArray *documentPaths = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);<br>NSString *databasePath = [documentPaths objectAtIndex:0];</p><p>NSString *databaseFile = [databasePath stringByAppendingPathComponent:databaseName];<br>NSString *databasePathFromApp = [[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent:databaseName];</p><p>NSFileManager *fileManager = [NSFileManager defaultManager];</p><p>if ([fileManager fileExistsAtPath:databaseFile] == NO) {<br>	[fileManager copyItemAtPath:databasePathFromApp toPath:databaseFile error:nil];<br>	[fileManager release];<br>}</p><p>Thanks again for pointing me in the right direction!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742257">7</a> by Steve Husting
		posted on 10/6/2012 at 1:17 AM
		</div>
		<div class="comment_text"><p>You can use the working steps here to create prepopulated databases with PhoneGap:<br><a href="http://disq.us/url?url=http%3A%2F%2Fiphonedevlog.wordpress.com%2F2012%2F10%2F05%2Finstalling-the-slqite-plugin-into-cordova-2-1-0-in-ios%2F%3Apb_kb_fDfGngJUPh3UgD-vGQ39k&amp;cuid=3321886" rel="nofollow noopener" title="http://iphonedevlog.wordpress.com/2012/10/05/installing-the-slqite-plugin-into-cordova-2-1-0-in-ios/">http://iphonedevlog.wordpre...</a><br>or <br><a href="http://disq.us/url?url=http%3A%2F%2Fiphonedevlog.wordpress.com%2F2012%2F08%2F21%2Fprepopulated-database-using-phonegap-storage-api-cordova-2-0-0%2F%3AmYmSg_s7XyFb1f1Ixbs8umZfV3c&amp;cuid=3321886" rel="nofollow noopener" title="http://iphonedevlog.wordpress.com/2012/08/21/prepopulated-database-using-phonegap-storage-api-cordova-2-0-0/">http://iphonedevlog.wordpre...</a></p><p>Regards,<br>Steve Husting</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742258">8</a> by Vaibhav
		posted on 1/22/2013 at 11:07 PM
		</div>
		<div class="comment_text"><p>What is the best way to use this data to create knockout JS bindings on the underlying HTML. do i need to create separate JSON object first with the data that i get from the queries or is there an easier way to integrate this with knockout.js?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742260">9</a> by Raymond Camden
		posted on 1/22/2013 at 11:39 PM
		</div>
		<div class="comment_text"><p>Unfortunately, I have not had a chance yet to play with Knockout. Therefore, I've definitely not used it with PhoneGap either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742270">10</a> by Kristen
		posted on 2/14/2013 at 12:46 AM
		</div>
		<div class="comment_text"><p>Wow!  Thank you so much!  I have been trying to get this working forever.  Your example worked like a charm and I'm finally up and running.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742272">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742272">11</a> by M. K.
		posted on 3/8/2013 at 3:52 PM
		</div>
		<div class="comment_text"><p>Wow from me too!! We got this sorted via this post. Thanks a bunch guys!! :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742269">12</a> by Iszuddin Ismail
		posted on 4/8/2013 at 9:26 AM
		</div>
		<div class="comment_text"><p>Correct me if I am wrong (haven't really tested the code), but the example here would overwrite the database with the preshipped version everytime the app loads. Is that right? If we are building an app with persistent storage, should we check to see if the database files already exist before doing this.copy(...) or perhaps modify this.copy()?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742271">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742271">13</a> by John Gag
		posted on 4/25/2013 at 2:32 AM
		</div>
		<div class="comment_text"><p>If anyone is looking to use a pre populated db with iOS here is updated plugin SQLitePlugin-iOS. You dont need to do any of the steps above. All you need to do is put your db in the root of your XCode project and it does everything for you. Android you still need to do the steps above.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fjarlehansen%2FPhoneGap-SQLitePlugin-iOS%3AoJamX5XdIjPPa_40Q7kpVyRzTGA&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/jarlehansen/PhoneGap-SQLitePlugin-iOS">https://github.com/jarlehan...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742275">14</a> by Rahul Kadukar
		posted on 4/25/2013 at 5:26 PM
		</div>
		<div class="comment_text"><p>This is how my <a href="http://disq.us/url?url=http%3A%2F%2FMyPhoneGapActivity.java%3A4muVWXdVnBg3dBKlh3FsduPK1hk&amp;cuid=3321886" rel="nofollow noopener" title="MyPhoneGapActivity.java">MyPhoneGapActivity.java</a> looks like</p><p>package com.rkadukar.database;</p><p>import org.apache.cordova.DroidGap;<br>import android.os.Bundle;</p><p>public class MyPhoneGapActivity extends DroidGap {<br>	@Override<br>	public void onCreate(Bundle savedInstanceState) {<br>		super.onCreate(savedInstanceState);<br>		super.loadUrl("file:///android_asset/www/index.html");<br>	}<br>}</p><p>where do I add the code from Gaurav Tomar's site after I make the changes suggested by you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742276">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742276">15</a> by Raymond Camden
		posted on 4/25/2013 at 5:31 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing that John.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742273">16</a> by shashank dwivedi
		posted on 5/6/2013 at 1:58 PM
		</div>
		<div class="comment_text"><p>How can I use this with phonegap build? Any idea.....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742274">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742274">17</a> by Raymond Camden
		posted on 5/6/2013 at 4:34 PM
		</div>
		<div class="comment_text"><p>You can't. PGB supports a limited set of plugins only.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742277">18</a> by Iszuddin
		posted on 5/6/2013 at 4:55 PM
		</div>
		<div class="comment_text"><p>I've successfully implement this on a simple POS app. Now I have a different requirement -- nothing to do with the previous POS app.</p><p>Is there a way for me to download a SQLite file and do SQL operations on that SQLite database file? Here's why I need that. My app will be downloading a huge document, and for searching purpose, I am thinking of implementing the index using the SQLite database file.</p><p>Got ideas on how I can do this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742278">19</a> by vikas.s
		posted on 6/12/2013 at 3:04 PM
		</div>
		<div class="comment_text"><p>i get error as cordova not defined in SQLiteplugin.js</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742279">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742279">20</a> by Naresh Ramoliya
		posted on 7/15/2013 at 3:35 PM
		</div>
		<div class="comment_text"><p>I have some issue in installation of SQLite Plugin for both Android and iOS. I have followed exactly given steps but somehow i am not able to run correctly. so Please help me in configuration of SQLite plugin</p><p>I am using Cordova 2.9.0 for phonegap.</p><p>Regards,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742280">21</a> by Steve
		posted on 7/15/2013 at 5:13 PM
		</div>
		<div class="comment_text"><p>@Naresh,</p><p>You did not tell us what error you are receiving, What part is not working correctly? At what step does it fail?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742281">22</a> by William
		posted on 7/22/2013 at 3:41 PM
		</div>
		<div class="comment_text"><p>I have the question as Iszuddin Ismail asked.<br>I didn't get it, cause each time I turn off my app and reopen it.<br>Then the database got cleaned up.</p><p>So what can I do to prevent my database be cleaned up?<br>Thanks~</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742282">23</a> by jeff
		posted on 7/23/2013 at 6:00 AM
		</div>
		<div class="comment_text"><p>Following <a href="http://disq.us/url?url=http%3A%2F%2Fgauravstomar.blogspot.com%2F2011%2F08%2Fprepopulate-sqlite-in-phonegap.html%2Calready%3AMzsxEKXGormExm2CTWqwuJAOqpg&amp;cuid=3321886" rel="nofollow noopener" title="http://gauravstomar.blogspot.com/2011/08/prepopulate-sqlite-in-phonegap.html,already">http://gauravstomar.blogspo...</a> copy sqlite db to assets folder, where is "data/data" in my application? is the 'databases' folder automatically created?</p><p>This is what I wrote<br>String pName = this.getClass().getPackage().getName();<br>   this.copy("aaa.db","/data/data/"+pName+"/databases/");		         this.copy("aaa.db","/data/data/"+pName+"/databases/file__0/");</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742283">24</a> by William
		posted on 7/25/2013 at 10:03 AM
		</div>
		<div class="comment_text"><p>Hi Jeff,<br>    The data/data folder is at the system root.<br>    I found the folder from eclipse's window.</p><p>    I turn on the DDMS (window &gt; open perspective &gt; DDMS) and there is a <br>   File Explorer tab. When you run your app, you can find the data/data folder <br>   here.</p><p>   And the folder will be created, cause the copy method check if the directory exist. And create it if not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742285">25</a> by Marco
		posted on 8/6/2013 at 2:43 PM
		</div>
		<div class="comment_text"><p>For me does not work :(.<br>I wrote in my Activity:<br>try {<br>String pName = this.getClass().getPackage().getName();<br>this.copy("dbname.db", "/data/data/" + pName + "/databases/");<br>} catch (IOException e) {<br>e.printStackTrace();<br>}<br>and the db is copy correctly!!!<br>But when I open DB,(this is the javascript code):<br>var db = window.sqlitePlugin.openDatabase("dbname.db", "1.0", "PhoneGap Demo", 200000); <br>(I tried also with no db extension "dbname")<br>For me DB not found?<br>Where is the problem? :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742287">26</a> by Jeff
		posted on 8/27/2013 at 3:11 PM
		</div>
		<div class="comment_text"><p>I copied source from here <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fk4ml%2Fhalal-android%3AbtszxTJ2s-XNCkKRYHFTNnU1-jk&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/k4ml/halal-android">https://github.com/k4ml/hal...</a>, its working... my concern now is whenever I use  the application  from my smartphone, any database transaction I made is gone when I open it again. I know it can write to the sqlite db, I think it somehow overwrite the sqlite file everytime I launch the application. Anyone have solution for this?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742289">27</a> by velissariouc
		posted on 9/8/2013 at 7:13 PM
		</div>
		<div class="comment_text"><p>@ Jeff<br>" I think it somehow overwrite the sqlite file everytime I launch the application"</p><p>You are right. The "halal" example always copies the original database from assets to data.<br>The code should be like this (replace "mydb" with your database name):<br>try <br>	    {<br>	        File dbFile = getDatabasePath("mydb.db");<br>	        if(!dbFile.exists()){<br>	            this.copy("mydb.db",dbFile.getAbsolutePath());<br>	        }<br>	     } <br>	     catch (Exception e)<br>	     {<br>	     e.printStackTrace();<br>	     };</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742290">28</a> by Shafi
		posted on 11/4/2013 at 10:40 AM
		</div>
		<div class="comment_text"><p>Hi Raymond<br>I tried to use prepopulated db in iOS using phonegap 2.7,3 and 3.1 but all showed same database undefined error. As per instructions (from your source and from the others) i tried to put some native code in to mainviewcontroller.m but the database is still cannot be opened i think.. Please help me</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742292">29</a> by Raymond Camden
		posted on 11/5/2013 at 5:13 PM
		</div>
		<div class="comment_text"><p>As I said - this is not something I did myself. I was just passing on the tip. This post is now over a year old so it may not apply anymore.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742291">30</a> by Vessie
		posted on 11/29/2013 at 9:51 PM
		</div>
		<div class="comment_text"><p>Thanks for all your posts. They are very helpful.</p><p>I'm trying to use phonegap/cordova3 with SQLite plugin from <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Flite4cordova%2FCordova-SQLitePlugin%3AlB12ykhuqtOgE3x8kAuv6YncsPY&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/lite4cordova/Cordova-SQLitePlugin">https://github.com/lite4cor...</a> but I have hard time making this work. The plugin seems to be written for cordova 3 but when  I run it with the emulator it says "something is missing". It's crashing on crodova.exec.</p><p>Anybody successfully used SQLitePlugin with cordova 3? I also read some posts that the plugin is part of cordova 3 but not sure....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742293">31</a> by Scott Buckel
		posted on 11/29/2013 at 10:07 PM
		</div>
		<div class="comment_text"><p>Vessie,</p><p>I think that this post is about a year and a half old now, so a lot of the methods might not apply.  This was written for PhoneGap 1.8 or 2.0 (I forget), so it might not be relevant anymore.</p><p>You'll probably have to figure out on your own how to do this in the latest PhoneGap 3.0+.  Could you please post a comment here after you figure it out?</p><p>Ray--you should probably put a comment on this blog that it's outdated.</p><p>Thanks!<br>-Scott Buckel</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742295">32</a> by Vessie
		posted on 11/30/2013 at 9:31 PM
		</div>
		<div class="comment_text"><p>I realized this is an old post but just wondered if somebody got this work with the latest phonegap/cordova 3. I will post a comment if I figure out (so far no luck). <br>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742294">33</a> by Raymond Camden
		posted on 12/1/2013 at 6:57 PM
		</div>
		<div class="comment_text"><p>@Scott: I tend to believe that people are smart enough to pay attention to the date and understand that the older entries may not be relevant/applicable. Maybe I assume too much. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742296">34</a> by Leo
		posted on 1/6/2014 at 7:28 AM
		</div>
		<div class="comment_text"><p>I invented a sqlite js library, would you like to take a look? <br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fleotsai%2Fhtml5sqlite%3AAf8xP1cVnFUIjFJF_uH5bzD1_fE&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/leotsai/html5sqlite">https://github.com/leotsai/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742297">35</a> by Navya Kooram
		posted on 2/14/2014 at 1:00 AM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>I used Gaurav's post to pre-populate my SQLite database and it worked well in iOS and Android platforms using Phonegap 2.8 to 3.3 versions. But it isn't working with Android Kitkat SDK. The app doesn't work for Android 4.4 and above. It looks like the data folder is empty when running on those devices and emulators. Did you face such problems? Does Kitkat handle folder/file permissions differently??</p><p>Thanks and Regards,<br>Navya</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742299">36</a> by Raymond Camden
		posted on 2/22/2014 at 7:24 PM
		</div>
		<div class="comment_text"><p>You may be running into FileSystem changes. See: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2014%2F2%2F17%2FCordova-File-System--Important-Update%3AEjgU0B16RVmCjON7akNV2AtUfiM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2014/2/17/Cordova-File-System--Important-Update">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742298">37</a> by David Guerra
		posted on 3/11/2014 at 5:01 PM
		</div>
		<div class="comment_text"><p>Hi Raymond I have the same problem of Navya.<br>For 2 years this solution works like a charm but after Android 4.4 the APP give me this error:<br>"Error was could not prepare statement (1 no such table reservation) (code 5) "<br>I suppose Android create an empty DB instead of copy it... so did not found the table.<br>Any idea about it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742302">38</a> by Raymond Camden
		posted on 3/11/2014 at 5:04 PM
		</div>
		<div class="comment_text"><p>Unfortunately no - as I mentioned - this was a guest post - not something I did myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742303">39</a> by Ram Gurung
		posted on 4/29/2014 at 3:33 PM
		</div>
		<div class="comment_text"><p>I have following issue. Please help me to get out of it.<br><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F23363263%2Fhow-to-populate-database-using-sqliteplugin-cordova-in-android%3ApUv8fkIGQnzbIB60uCDAvuKxY50&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/23363263/how-to-populate-database-using-sqliteplugin-cordova-in-android">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742300">40</a> by Rahul
		posted on 9/11/2014 at 9:59 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I have created this plugin for copying the db, hope it will help somebody -</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fan-rahulpandey%2Fcordova-plugin-dbcopy%3AuuNDZVuESpcwkKqqynCIdMdXcKU&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/an-rahulpandey/cordova-plugin-dbcopy">https://github.com/an-rahul...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742304">41</a> by Valerio
		posted on 11/7/2014 at 12:53 AM
		</div>
		<div class="comment_text"><p>Thank you so much!!!<br>I've spent almost 3 days in get this things working!!!</p></div>
	</div>
</div>
		