
<div class="comment" id="c_1713748175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748175">1</a> by realtebo
		posted on 8/14/2013 at 10:39 PM
		</div>
		<div class="comment_text"><p>Thanks a lot ! All is clear, I'll take it a chance in a few days.</p><p>Just a question: where do you find this signature?<br>"db.changeVersion(oldversion, newversion, alterfunc, errorfunc, successfunc)"</p><p>In the official phonegap doc, there is no track of it. <br>[<a href="http://disq.us/url?url=http%3A%2F%2Fdocs.phonegap.com%2Fen%2Fedge%2Fcordova_storage_storage.md.html%23Database%3AfVOg_8nLuTM0AJjKcYdv9XkWqvo&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.phonegap.com/en/edge/cordova_storage_storage.md.html#Database">http://docs.phonegap.com/en...</a>]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748174">2</a> by Raymond Camden
		posted on 8/14/2013 at 10:54 PM
		</div>
		<div class="comment_text"><p>Follow the link to the Apple site. It had it documented better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748178">3</a> by Phillip Senn
		posted on 8/14/2013 at 11:40 PM
		</div>
		<div class="comment_text"><p>Slightly off-topic: I realized today that Web SQL doesn't actually use a DateTime field the way one would think it would.  As far as I know. So I've been writing functions to convert a Date object into YYYY:MM:DD HH:NN:SS:L format so that I can SELECT Max(myDateTime).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748177">4</a> by Raymond Camden
		posted on 8/14/2013 at 11:44 PM
		</div>
		<div class="comment_text"><p>I should write a blog post on that. Done. ;)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F1%2F6%2FWorking-with-dates-and-SQLite-in-PhoneGap%3AzfDT73bfZJ5w4HTLkDz7L6IBOWw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/1/6/Working-with-dates-and-SQLite-in-PhoneGap">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748179">5</a> by Marcin
		posted on 8/15/2013 at 5:06 AM
		</div>
		<div class="comment_text"><p>I've used persistence.js (<a href="http://disq.us/url?url=http%3A%2F%2Fpersistencejs.org%2F%29%3AYr7uyXkFV9V-st3lJa5W-kiFoFk&amp;cuid=3321886" rel="nofollow noopener" title="http://persistencejs.org/)">http://persistencejs.org/)</a> with a phonegap app, which is a nice bit of abstraction/ORM for WebSQL.</p><p>Persistence.js seems to support Rails style "migrations" now, which is a similar sort of thing, but I ended up rolling my own when I wrote the app over a year ago  - didn't know the changeVersion thing existed!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748182">6</a> by Pete
		posted on 8/15/2013 at 11:55 AM
		</div>
		<div class="comment_text"><p>This is actually the most useful thing I've read all year. I've been trying to sort out database updates in WebSQL for a while, my solution is far worse.</p><p>I clearly didn't read the docs properly.</p><p>Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748183">7</a> by Raymond Camden
		posted on 8/15/2013 at 2:27 PM
		</div>
		<div class="comment_text"><p>You are most welcome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748181">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748181">8</a> by John Kiernan
		posted on 8/17/2013 at 8:36 PM
		</div>
		<div class="comment_text"><p>Dear Raymond -<br>  I tried your simple notes and while it does allow entry, it does not save.  I even tried just dropping the .apk you included into my Dropbox and installed it on my Android.  No worka...</p><p>  I'm on Android 2.3.5.</p><p>  I'd love to get this to work, as I'm in need of understanding the storage system.</p><p>  Also, should I be able to get this to work on Chrome?  It doesn't work there either (thought Chrome could handle this now).</p><p>  TIA!</p><p>-- John Kiernan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748184">9</a> by Raymond Camden
		posted on 8/17/2013 at 9:07 PM
		</div>
		<div class="comment_text"><p>Did you mean to post this on another blog entry?</p><p>To your second question, yes, Chrome supports WebSQL, but if you are running my demo code for PG it is probably waiting for the deviceready event to fire, which won't in Chrome. If you want to test in Chrome, just skip that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748185">10</a> by Lorenzo Sfarra
		posted on 10/10/2013 at 11:46 PM
		</div>
		<div class="comment_text"><p>Thank you very much, I was looking for some clear article about this everywhere...found it! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748186">11</a> by Lorenzo Sfarra
		posted on 10/12/2013 at 12:12 PM
		</div>
		<div class="comment_text"><p>It seems to not work on Android 4.3</p><p>*db = window.openDatabase("happinessdiary", "",<br>  "The Happiness Diary", 200000);<br>console.log("version is: " + db.version);<br>if (db.version == "") {<br>  console.log("db version empty string");<br>  updateFinished = true; // Not an update<br>  // EMPTY STRING -&gt; VERY FIRST VISIT!<br>  db.changeVersion("", "1.0", DBObject.createDB, DBTransactionsCbks.error, function() { console.log("empty to 0.9.2 done!"); });<br>} else if (db.version == "0.9.1") {<br>  console.log("OK, changing version");<br>  //db.changeVersion(db.version, "1.0", update.init, update.error, function() { console.log("empty to 0.9.2 done!"); });<br>  db.changeVersion(db.version, "1.0", function() { console.log("here?"); })<br>} else {<br>  // Nothing to do...<br>  updateFinished = true;<br>}*</p><p>I can see _"OK, changing version"_ but it's never executed. I've tried even the 5 arguments version of changeVersion without luck.</p><p>Any hints?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748190">12</a> by Raymond Camden
		posted on 10/13/2013 at 6:13 PM
		</div>
		<div class="comment_text"><p>From what I can see, your logic is:</p><p>if no version, set to 1</p><p>I don't see it ever being set to 0.91.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748191">13</a> by Filipe
		posted on 1/3/2014 at 11:35 PM
		</div>
		<div class="comment_text"><p>Hi.</p><p>db.version does not return anything for me with the latest version of phonegap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748189">14</a> by Raymond Camden
		posted on 1/4/2014 at 9:02 PM
		</div>
		<div class="comment_text"><p>Did you test *after* the db was used?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748192">15</a> by murali
		posted on 4/10/2014 at 9:53 AM
		</div>
		<div class="comment_text"><p>Hello Sir<br>I read through all the code above. But still have some confusion.<br>Now#1  - I develop a new app now and the code for db will be</p><p>db = window.openDatabase("Database3", "", "Cordova Demo", 200000);<br>if (db.version=="")<br> {<br>        db.changeversion("","1", function(trans){<br>                          },function(e) {});<br>}</p><p>So does that mean, i do not specify version number in the window.opendatabase and then use it in if condition to test and change version and do the changes.  So if it is prepopulated i need not do anything inside this if condition.<br>---------------------------------------------------------------------------------<br>Now when i put the next version of app , i need to use same code<br>db = window.openDatabase("Database3", "", "Cordova Demo", 200000)<br> if(db.version == "1") {<br>   log('im a 1.0 user');	<br>      db.changeVersion("1", "2", <br> ..........................<br>     }</p><p>Here what does changeVersion ("1", "2" means<br>why are we referring to "1" &amp; "2"</p><p>Thanks and sorry for the long code</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748193">16</a> by Raymond Camden
		posted on 4/11/2014 at 2:22 AM
		</div>
		<div class="comment_text"><p>"So does that mean, i do not specify version number in the window.opendatabase and then use it in if condition to test and change version and do the changes. So if it is prepopulated i need not do anything inside this if condition."</p><p>Um, right. I think. Kinda hard to parse your question.</p><p>"Now when i put the next version of app , i need to use same code<br>db = window.openDatabase("Database3", "", "Cordova Demo", 200000)<br>if(db.version == "1") {"</p><p>Well, no, not exactly. Note my code still has db.version=="" for folks w/o a db at all.</p><p>"Here what does changeVersion ("1", "2" means<br>why are we referring to "1" &amp; "2""</p><p>Because the user had version 1, and now we want her to have version 2.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748195">17</a> by mohsen
		posted on 9/21/2014 at 10:33 AM
		</div>
		<div class="comment_text"><p>can we use IndexedDB in phonegap, and for android devices?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748196">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748196">18</a> by Raymond Camden
		posted on 9/21/2014 at 9:21 PM
		</div>
		<div class="comment_text"><p>See the <a href="http://disq.us/url?url=http%3A%2F%2FCanIUse.com%3AIsxmSyPL0gXc9hv3hBhVh7EU6Wo&amp;cuid=3321886" rel="nofollow noopener" title="CanIUse.com">CanIUse.com</a> stats for IndexedDB. Latest Android and latest iOS supports it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1752666085">
	<div>
		<img src="https://disqus.com/api/users/avatars/rezarahmati.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1752666085">19</a> by Reza Rahmati
		posted on 12/21/2014 at 10:59 AM
		</div>
		<div class="comment_text"><p>Awesome, you saved my day</p></div>
	</div>
</div>
		
<div class="comment" id="c_1767062645">
	<div>
		<img src="https://disqus.com/api/users/avatars/rezarahmati.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1767062645">20</a> by Reza Rahmati
		posted on 1/1/2015 at 11:41 AM
		</div>
		<div class="comment_text"><p>for the first update when db.version is empty when running the below statement I get this error</p><p>db.changeVersion("", "1",.....<br>current version of the database and `oldVersion` argument do not match</p></div>
	</div>
</div>
		
<div class="comment" id="c_1767445708">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1767445708">21</a> (In reply to <a href="#c_1767062645">#20</a>) by Raymond Camden
		posted on 1/1/2015 at 6:34 PM
		</div>
		<div class="comment_text"><p>I seem to remember an issue with this. You may want to check the version first.</p></div>
	</div>
</div>
		