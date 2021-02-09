
<div class="comment" id="c_1714081886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081886">1</a> by Jay
		posted on 3/17/2014 at 3:47 AM
		</div>
		<div class="comment_text"><p>Nice post.<br>What about restore that data to webSql?<br>Can you help me? thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081885">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081885">2</a> by Raymond Camden
		posted on 3/19/2014 at 3:39 PM
		</div>
		<div class="comment_text"><p>The process would be: Download the data, iterate over it and do inserts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081887">3</a> by MM
		posted on 4/23/2014 at 12:12 AM
		</div>
		<div class="comment_text"><p>Is there a way to export websql to csv and store it locally on a device?  Could you point me in the right direction?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081893">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081893">4</a> by Raymond Camden
		posted on 4/23/2014 at 12:16 AM
		</div>
		<div class="comment_text"><p>"Is there a way to export websql to csv and store it locally on a device? "<br>Yes, instead of just creating a JSON version, you would create a CSV version. If you Google for JS and CSV, you will see examples of this. It isn't difficult. Here is one example: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2014%2F4%2F3%2FDynamically-Creating-CSV-Files-on-the-Client%3AiWWK_IfEs3IctWsCvYH8NTTTJ-8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2014/4/3/Dynamically-Creating-CSV-Files-on-the-Client">http://www.raymondcamden.co...</a></p><p>As for storing it on the device... well on iOS, you can't really just download via the web browser. With PhoneGap though you could use the FileTransfer API.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081894">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081894">5</a> by MM
		posted on 4/23/2014 at 3:19 PM
		</div>
		<div class="comment_text"><p>I am using PhoneGap for iOS and I'm really struggling with this.  I have a multi-table websql database and I can't seem to find an efficient way to export the whole database as a CSV file and then download it to the device locally.  As for accessing the file that is a different matter as iOS devices don't give you access to downloaded files</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081890">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081890">6</a> by MM
		posted on 4/23/2014 at 3:23 PM
		</div>
		<div class="comment_text"><p>and to add to the above, you say use the FileTransfer API, but my app is purely client side so I don't think FileTransfer would support this</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081892">7</a> by Raymond Camden
		posted on 4/23/2014 at 5:58 PM
		</div>
		<div class="comment_text"><p>MM, you first say you are using a PhoneGap app and then say 'purely client side' - I don't know what you mean by this. PhoneGap apps support the FileTransfer API.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081895">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081895">8</a> by MM
		posted on 4/23/2014 at 6:08 PM
		</div>
		<div class="comment_text"><p>Sorry, I meant that I'm not using a server of any kind, the app is all local</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081898">9</a> by Raymond Camden
		posted on 4/23/2014 at 6:09 PM
		</div>
		<div class="comment_text"><p>Well then you would just use the FileSystem API to write it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081897">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081897">10</a> by MM
		posted on 4/23/2014 at 6:12 PM
		</div>
		<div class="comment_text"><p>Alright thanks, one more thing, sorry to bother you.  Once the file is on the device's file system.  Are there any ways to access it in iOS devices or is this impossible to do?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081899">11</a> by Raymond Camden
		posted on 4/23/2014 at 6:15 PM
		</div>
		<div class="comment_text"><p>Well, your PhoneGap app can read it of course. If you store the file in a location accessible to other apps, then they would be able to as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081896">12</a> by MM
		posted on 4/23/2014 at 6:21 PM
		</div>
		<div class="comment_text"><p>Right, I see.  My initial goal was to export as CSV and then users could manually access the file and attach it to an e-mail, for example and then the CSV file could be opened on Excel on their desktop computer.  Thanks for the help I'll look into the FileSystem API</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081902">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081902">13</a> by Rakesh Gaur
		posted on 9/12/2014 at 12:15 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>My requirement is</p><p>1.Create database using websql<br>2.Insertdata in tables<br>3.Whlie inserting data in tables at the same time I need to write the same data in Accessdatabase in Local system for backup so that if user will delete history then I can restore the same data in websql database</p><p>Please help me in 3rd ponit</p><p>Thanks<br>Rakesh Gaur</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081903">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081903">14</a> by Raymond Camden
		posted on 9/12/2014 at 3:13 PM
		</div>
		<div class="comment_text"><p>What do you mean by "local system" - you cannot run Access on the device. If you mean server, then you would use Ajax to send the data to your server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081904">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081904">15</a> by rakesh gaur
		posted on 9/13/2014 at 10:29 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Local system means any device or computer.ok if access database will not work on device then</p><p>1.I want to write data in json format on any device or computer while inserting data in websql tables.</p><p>Or if you have better suggestion please guide me</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081905">16</a> by Raymond Camden
		posted on 9/13/2014 at 5:23 PM
		</div>
		<div class="comment_text"><p>I'm not quite sure what you are asking. Yes, you can generate JSON in JavaScript and send it to a server, but you need *some* server to integrate with your database. If you have never used an app server like PHP, ColdFusion, etc before, then you need to do some research in that area. Or consider a solution like <a href="http://disq.us/url?url=http%3A%2F%2FParse.com%3AHOqUIwVjL-3eSnTAceIxxeYWB48&amp;cuid=3321886" rel="nofollow noopener" title="Parse.com">Parse.com</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081906">17</a> by Rakesh Gaur
		posted on 9/13/2014 at 5:57 PM
		</div>
		<div class="comment_text"><p>Hi,<br>I am writing complete problem for which I am struggling for solution.<br>I am creating complete offline application in html5 for the b2b client.<br>Suppose one user named ‘John’ is logged in to the application using his laptop and inserts some entries into web sql db and logged out. After sometime, he logged in to the same application using his tab, then I want DB in both i.e. in Laptop as well as tab should be synchronized.</p><p>1.	If user will delete browser history then data should be restore from backup (either json file ) in websql db<br>2.	If there would be no internet connectivity then all data modification and new data would be maintained in websql as well on device as a backup so that if user will delete history then we can restore data from backup which is stored on device. When internet would be available then all modified data would be synchronized with database.</p><p>Thanks<br>Rakesh Gaur</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081908">18</a> by Raymond Camden
		posted on 9/13/2014 at 8:55 PM
		</div>
		<div class="comment_text"><p>What you want isn't possible using just WebSQL. WebSQL is client side - so the data on the laptop is ONLY on the laptop. If you synced with a central server, then both the laptop and the mobile app could share the same data.</p><p>As for *building* that, I can't tell you how to do that in a simple blog comment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081910">19</a> by Rakesh
		posted on 9/14/2014 at 4:37 PM
		</div>
		<div class="comment_text"><p>what do  say  about <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Forbitaloop%2FWebSqlSync%3ArrM1s-me2gYyA07XLZ2JgVwX4bk&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/orbitaloop/WebSqlSync">https://github.com/orbitalo...</a> for sync ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081909">20</a> by Raymond Camden
		posted on 9/14/2014 at 4:49 PM
		</div>
		<div class="comment_text"><p>Haven't tried it myself. I say give it a shot and let us know here. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081912">21</a> by GG
		posted on 10/7/2014 at 3:44 PM
		</div>
		<div class="comment_text"><p>Have you tried the problem statment which Rakesh asking.If possible please write a blog for this kind of problem statement which will help to lots of new beginers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082088">22</a> by Raymond Camden
		posted on 10/7/2014 at 3:48 PM
		</div>
		<div class="comment_text"><p>GG, no, I haven't. No plans to at the moment. I still encourage folks who want to try to share their experience here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082107">23</a> by Rakesh
		posted on 10/29/2014 at 12:56 PM
		</div>
		<div class="comment_text"><p>have a requirement to build a web sales app that must be available offline. The app needs to allow the sales team to create a sales quote at a customer site. They may or may not have internet access. I was originally going to build a windows forms application, but then uncovered information about HTML5 Offline Mode. I'm thinking this is a very viable option, but not sure how to handle the database (or not). When online the app should use the database on the server, but when offline it should use the local copy (or xml or disconnected recordset, or ?). I could either manually keep the 2 in sync or use something like Microsoft Sync Framework.</p><p>I'm looking for any input you can give as I'm just starting this project. I think this is going to be a fun and cool project with room to learn a ton.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082167">24</a> by Raymond Camden
		posted on 11/2/2014 at 12:34 AM
		</div>
		<div class="comment_text"><p>Well, it is kind of a broad question. You can store data locally using a number of methods: Local Storage, Web SQL, IndexedDB, and you can sync it to a server by using logic. By "logic" I mean code that looks at what is local that hasn't been pushed to the server and then processes it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2496976262">
	<div>
		<img src="https://disqus.com/api/users/avatars/sdesalas.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2496976262">25</a> by Steven de Salas
		posted on 2/5/2016 at 3:01 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Thanks for this simple and elegant example. I got a library on Github <a href="http://disq.us/url?url=http%3A%2F%2Fgithub.com%2Fsdesalas%2Fwebsqldump%3A_u58Uj6UVWhbKCFdwg-qCVeYVsc&amp;cuid=3321886" rel="nofollow noopener" title="http://github.com/sdesalas/websqldump">http://github.com/sdesalas/...</a> but after seeing how easy you made this look - particularly around using promises - I think I'm going to pinch a couple of ideas from you if you don't mind.</p><p>Just wanted to expand a bit on your mention of WebSQL being a 'Dead Spec Walking'. In my view the situation here is that the W3G working group was bit immature pulling off the plug just because they couldn't work out a middle ground between vendors.</p><p>WebSQL is by far the most useful of client-side storage technology (IndexDB is powerful too but the complexity of the API provides a major hurdle to its use) and it IS supported in all main WebKit-based browsers (which really means most of the market - including IOS and Android apps thanks to Cordova).</p><p>It is a pity to see such a failure to compromise, but having said that I doubt that support will/can be withdrawn at such an advanced stage and really hope that the W3G guys (particularly Mozilla - who is carrying on their own agenda by pusing IndexDB instead) can start behaving like adults and agree to keep working on it. I might put a petition together sometime when I get a chance.</p><p>All the best and thanks for the post!!<br>Steven</p></div>
	</div>
</div>
		
<div class="comment" id="c_2497644728">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2497644728">26</a> (In reply to <a href="#c_2496976262">#25</a>) by Raymond Camden
		posted on 2/5/2016 at 2:44 PM
		</div>
		<div class="comment_text"><p>I don't mind at all - borrow at will. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2870364527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2870364527">27</a> by vijay
		posted on 9/1/2016 at 7:03 AM
		</div>
		<div class="comment_text"><p>Hi,<br>How much data in MB we can store on client site using WebSQL?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2870895365">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2870895365">28</a> (In reply to <a href="#c_2870364527">#27</a>) by Raymond Camden
		posted on 9/1/2016 at 2:29 PM
		</div>
		<div class="comment_text"><p>It depends. Sorry - there is no firm answer to this. For desktop browsers, generally, it is a portion of the hard drive size, and some browsers will warn you after a threshold.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3094193545">
	<div>
		<img src="https://disqus.com/api/users/avatars/lewismutton.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3094193545">29</a> by Lewis Mutton
		posted on 1/11/2017 at 4:31 PM
		</div>
		<div class="comment_text"><p>What is this convertResults() function that you are using?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3094211902">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3094211902">30</a> (In reply to <a href="#c_3094193545">#29</a>) by Raymond Camden
		posted on 1/11/2017 at 4:42 PM
		</div>
		<div class="comment_text"><p>The code is here:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fstatic.raymondcamden.com%2Fdemos%2F2014%2Ffeb%2F24%2Fnotestrap.js%3AqMqjuHXjus1y3OXlYj_ETP-x6kg&amp;cuid=3321886" rel="nofollow noopener" title="https://static.raymondcamden.com/demos/2014/feb/24/notestrap.js">https://static.raymondcamde...</a></p><p>It basically converts a WebSQL Row object into a simple object.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3095359848">
	<div>
		<img src="https://disqus.com/api/users/avatars/lewismutton.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3095359848">31</a> (In reply to <a href="#c_3094211902">#30</a>) by Lewis Mutton
		posted on 1/12/2017 at 9:52 AM
		</div>
		<div class="comment_text"><p>That is exactly what I have been looking for - I have attempted using lodash and ramda functions but they didn't work on an iPad for some reason.... Thanks!</p></div>
	</div>
</div>
		