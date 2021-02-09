
<div class="comment" id="c_1713735853">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735853">1</a> by Dave Ferguson
		posted on 10/20/2011 at 6:53 PM
		</div>
		<div class="comment_text"><p>Curious... In terms of security is it better to store sensitive data in this manner or to use the HTML 5 web storage? I am concerned about someone being able to look at the data outside the application.</p><p>Thanks,</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735851">2</a> by Raymond Camden
		posted on 10/20/2011 at 7:16 PM
		</div>
		<div class="comment_text"><p>Hmm. This is a guess:</p><p>SQLite uses a 'real' file. Therefore, someone should be able to find the file and get to it. In AIR you can encrypt the DB. I do not see that option here.</p><p>For LocalStorage, it is tied to the browser instance and the domain. LocalStorage should still work fine w/n PhoneGap, and I'd _assume_ be tied to the Application name (since there is no domain). My gut says it should be more secure - but I wouldn't put any money on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735850">3</a> by Phillip Senn
		posted on 10/20/2011 at 9:01 PM
		</div>
		<div class="comment_text"><p>Great timing Raymond, as usual.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735852">4</a> by Alirio Boquin A.
		posted on 10/20/2011 at 10:09 PM
		</div>
		<div class="comment_text"><p>In my experience SQLite in Adobe AIR (Apollo) was one of highlights in Adobe System aspirations to access the desktop, I  remember buying a book on Amazon to start learning (Beginning Adobe AIR). Now with PhoneGap I hope to have the time to use these products!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735854">5</a> by Jihane
		posted on 3/1/2012 at 4:36 PM
		</div>
		<div class="comment_text"><p>Hello Sir, thank you so much for this tut, it did hel me a lot, but i am wondering where the database is? i can't find it, even after opening the DDMS perspective, on Eclipse, and i navigate to the app folder, but i am enable to find it,</p><p>Please help, i need to find that database</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735855">6</a> by Raymond Camden
		posted on 3/1/2012 at 4:49 PM
		</div>
		<div class="comment_text"><p>See this: <a href="http://disq.us/url?url=http%3A%2F%2Fgauravstomar.blogspot.com%2F2011%2F08%2Fprepopulate-sqlite-in-phonegap.html%3ALujl77Kx4-3rswnJdwAXngpYAfM&amp;cuid=3321886" rel="nofollow noopener" title="http://gauravstomar.blogspot.com/2011/08/prepopulate-sqlite-in-phonegap.html">http://gauravstomar.blogspo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735858">7</a> by Jihane
		posted on 3/1/2012 at 5:00 PM
		</div>
		<div class="comment_text"><p>Thank's a lot for the reply, except, that in my case, and after that i did implemented the example from your blog, i'am not able to generate the DataBase, even if the interface shwos that notes are added, but i just can't find the generated dataBase.</p><p>thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735860">8</a> by Raymond Camden
		posted on 3/1/2012 at 5:34 PM
		</div>
		<div class="comment_text"><p>Well, for now, I'd say let's ignore your inability to find the database. Let's focus on your inability to use dbs at all.</p><p>So your saying that when you work with a db, it shows notes being saved, but when you restart the app you see no notes?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735862">9</a> by Jihane
		posted on 3/1/2012 at 7:21 PM
		</div>
		<div class="comment_text"><p>hi again, <br>i am able to add notes on the graphic interface, and when in restart the app i do find the saved notes, but the problem is that i can't find the database(i want to see, and consult the saved data)</p><p>Thank you .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735865">10</a> by Raymond Camden
		posted on 3/1/2012 at 7:51 PM
		</div>
		<div class="comment_text"><p>Oh, ok, so then I'm out of luck. That blog entry I posted is the only one I know discussing the physical location of the db.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735864">11</a> by Jihane
		posted on 3/1/2012 at 7:54 PM
		</div>
		<div class="comment_text"><p>all right then, but thanks so much an i keep looking for a solution, <br>Thank you :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735863">12</a> by jeff
		posted on 4/9/2012 at 1:31 PM
		</div>
		<div class="comment_text"><p>I encountered a problem saving the notes, can i copy your version of phonegap.jar im using cordova1.5.jar. here's the error: <br>Web Console(544): Uncaught TypeError: Cannot call method 'transaction' of undefined at file:///android_asset/www/js/main.js:56</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735867">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735867">13</a> by Raymond Camden
		posted on 4/9/2012 at 4:28 PM
		</div>
		<div class="comment_text"><p>Are you using the exact same version, except you used cordova1.5.jar instead of phonegap.jar?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735869">14</a> by amarjit
		posted on 5/18/2012 at 9:51 AM
		</div>
		<div class="comment_text"><p>I want to use database file as such in the code because data is huge and adding that data to database is hard. I implemented same in Flex application but here i get "no such table" error. My code is:</p><p>db = openDatabase("testdata.db","1.0","Apps Sample Database",5*1024*1024);<br>db.transaction(function(tx){<br>			tx.executeSql("select * from test",[],function(t,res){<br>			var len=res.rows.length;				<br>			for(var i=0;i&lt;len;i++){</p><p>						$('#select-choice-b').append('&lt;option val='+res.rows.item(i)['a']+"'&gt;"+res.rows.item(i)['b']+"&lt;/option&gt;");		<br>						}</p><p>		}, function(tx,error)<br>		{<br>			alert("database error:" +error.message); <br>		});</p><p>here testdata.db is altready ctreated and have table test with data in it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735868">15</a> by Raymond Camden
		posted on 5/18/2012 at 4:06 PM
		</div>
		<div class="comment_text"><p>I believe you want to follow this: <a href="http://disq.us/url?url=http%3A%2F%2Fgauravstomar.blogspot.com%2F2011%2F08%2Fprepopulate-sqlite-in-phonegap.html%3ALujl77Kx4-3rswnJdwAXngpYAfM&amp;cuid=3321886" rel="nofollow noopener" title="http://gauravstomar.blogspot.com/2011/08/prepopulate-sqlite-in-phonegap.html">http://gauravstomar.blogspo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735871">16</a> by Ganesh
		posted on 5/23/2012 at 2:46 PM
		</div>
		<div class="comment_text"><p>could you explain me with sample code for connect the MySQl database in phonegap for android project</p><p>   Thanks in Advance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735870">17</a> by Raymond Camden
		posted on 5/23/2012 at 3:10 PM
		</div>
		<div class="comment_text"><p>You can't run MySQL on a device. It would need to be on a remote server. You can then use JavaScript/Ajax to hit it via something on the server, like ColdFusion, to handle the connection.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735872">18</a> by Ganesh
		posted on 5/24/2012 at 12:43 PM
		</div>
		<div class="comment_text"><p>Than you for your response!Actually  i trying for an android app using phone gap which one used for the tracking the bus <a href="http://disq.us/url?url=http%3A%2F%2Froutes.so%3Ac8rudg2tj5bH_lDk55ooL_VUR18&amp;cuid=3321886" rel="nofollow noopener" title="routes.so">routes.so</a> for that purpose i have to connect the database or any existing server.i tried with java script and php .but i did n't get success .could you please suggest with some useful code to me.its very use full me.</p><p>      A great thanks in advance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735873">19</a> by Raymond Camden
		posted on 5/24/2012 at 6:52 PM
		</div>
		<div class="comment_text"><p>Well, it depends on what went wrong. :)</p><p>FIrst off - are you sure your PHP code is right? I'd test that without PhoneGap. You need a PHP script that can respond to remote requests and return database information in JSON format. You can do this w/o touching PhoneGap at all and it will make testing easier.</p><p>At that point, you switch back to your PhoneGap app and see if the Ajax calls work now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735874">20</a> by venkata
		posted on 5/28/2012 at 4:00 PM
		</div>
		<div class="comment_text"><p>HI.i really lot of things learn t from this blog.thank you providing this extraordinary  blog for us. i am new to phone gap.and i want use web services  in android app.can any one give detail information about it and any .js or jar files to copy into project?and if you give sample code to me a grateful thanks to you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735877">21</a> by Raymond Camden
		posted on 5/28/2012 at 5:00 PM
		</div>
		<div class="comment_text"><p>Are you talking about the formal definition of Web Services, ie those that use SOAP? If so, you will need to find a JavaScript library that works well with it. SOAP is just XML, but it is very verbose and very stringent on how you use it. If at all possible, I'd recommend a service that uses JSON instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735878">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735878">22</a> by Abraham
		posted on 10/3/2012 at 2:12 AM
		</div>
		<div class="comment_text"><p>Hi, I´ve been working with phonegap retrieven a ws user data, but for some weird reason when they update info, or anything in the ws response, the app keeps on sending the old response; the only way to get the new response is by uninstalling and installing again the app.</p><p>Any ideas why this could be happening?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735881">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735881">23</a> by Raymond Camden
		posted on 10/3/2012 at 2:42 PM
		</div>
		<div class="comment_text"><p>I'd have to see more of your code to figure out why it isn't working. SInce your issue really isn't on topic for this blog post, please use my Contact form to send me some details.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735880">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735880">24</a> by Miguel
		posted on 10/21/2012 at 2:12 PM
		</div>
		<div class="comment_text"><p>Nice tutorial, Thanks a lot. Ive got a question.<br>Do i have to write this: <br>var db = window.openDatabase("DDB", "1.0", "DDB", 200000);</p><p>everytime i want to do a query to the database?</p><p>Because when i try to do a query from another html i got nothing I think</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735882">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735882">25</a> by Miguel
		posted on 10/22/2012 at 2:32 AM
		</div>
		<div class="comment_text"><p>I did it no worries to answer the prevoius question.<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735884">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735884">26</a> by Anne Spalding
		posted on 10/29/2012 at 4:56 AM
		</div>
		<div class="comment_text"><p>This was not working in IOS because the code  <br>$("#editPage").live("pageshow", function() {<br>   var loc = window.location.hash;</p><p>was not retrieving the url parameter.  I found another of your blogs (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F2%2F24%2FGetting-URL-parameters-in-a-jQuery-Mobile-page%29%3A1HEk3zLi4sY2xDktw5CkpU3TpjY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/2/24/Getting-URL-parameters-in-a-jQuery-Mobile-page)">http://www.raymondcamden.co...</a>  which used the data attribute and that fixed the code for me.  Just change the var loc line.</p><p>$("#editPage").live("pageshow", function() {<br> var loc = $(this).data("url");</p><p>Perhaps this warrants an update to the code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735883">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735883">27</a> by Raymond Camden
		posted on 10/29/2012 at 5:34 AM
		</div>
		<div class="comment_text"><p>Thanks Anne. I added a small note towards the end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735887">28</a> by ad
		posted on 11/9/2012 at 10:45 AM
		</div>
		<div class="comment_text"><p>my error is "Uncaught TypeError: Cannot call method 'transaction' of undefined at file:///android_asset/www/js/main.js:60". so help me... how to slove this error..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735886">29</a> by Raymond Camden
		posted on 11/9/2012 at 6:00 PM
		</div>
		<div class="comment_text"><p>@Ad: I'd need more data. It seems like your variable isn't being used correctly. Can you please post your version of main.js to <a href="http://disq.us/url?url=http%3A%2F%2Fgist.github.com%3AuxkMX1Y2zvqZXafD26qzK0KBcBg&amp;cuid=3321886" rel="nofollow noopener" title="gist.github.com">gist.github.com</a> or pastebin?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735885">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735885">30</a> by ad
		posted on 11/10/2012 at 12:11 PM
		</div>
		<div class="comment_text"><p>i am new in phonegap.. so i can't get the version of main.js but i am use phonegap-1.1.0.js. i will post my hole main.js to you.. <br>Thank you to reply me...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735890">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735890">31</a> by Aniruddha
		posted on 1/9/2013 at 10:49 PM
		</div>
		<div class="comment_text"><p>Thank you for this tutorial Sir.</p><p>I am just curious as to will it affect performance if we have to execute lots of queries in the table and get their results on app initialization.<br>If is it so, is there a better way to counter that.<br>I am looking at SQLLite, <a href="http://disq.us/url?url=http%3A%2F%2Fdatabase.com%3AoKu_nhp8eoMlOlB0HHZjdRC9blQ&amp;cuid=3321886" rel="nofollow noopener" title="database.com">database.com</a> and PhoneGap storage. Trying to figure out which one suits the best when size of database might cause issues.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735888">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735888">32</a> by Raymond Camden
		posted on 1/10/2013 at 7:57 AM
		</div>
		<div class="comment_text"><p>Do you really need to execute all those queries on the first load? Maybe some could wait until later - like when some other part of the app is loaded for the first time. That's what I'd do first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735889">33</a> by Aniruddha
		posted on 1/11/2013 at 10:47 PM
		</div>
		<div class="comment_text"><p>I was thinking on how those jokes/ meme app were created. They get random jokes. Hence, if they have 1000 jokes in record they may be fetching it from DB. <br>So, if something on same lines have to be thought for Phonegap, either we will create a DB with those 1000 entries at some point in our application or fetch from already created DB. (Hope I'm assuming right).<br>In case if we are loading wouldn't that slow down the mobile app for user, else we are getting from DB, do you have any suggestions on which one works best.</p><p>My apologies for the long comment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735891">34</a> by Raymond Camden
		posted on 1/12/2013 at 12:33 AM
		</div>
		<div class="comment_text"><p>Well, you could try shipping the data with the app (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F7%2F27%2FGuest-Blog-Post-Shipping-a-populated-SQLite-DB-with-PhoneGap%29%3A5kS_QMBPX8RYFcNgA-e8AdWwvck&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/7/27/Guest-Blog-Post-Shipping-a-populated-SQLite-DB-with-PhoneGap)">http://www.raymondcamden.co...</a>. Also keep in mind that 1k entries would probably insert pretty darn quickly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735892">35</a> by Aniruddha
		posted on 1/12/2013 at 1:02 AM
		</div>
		<div class="comment_text"><p>Thank you Sir for that wonderful entry.</p><p>I will use that plugin to work on some demo examples and will see if I could update DB based on user inputs accordingly...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735893">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735893">36</a> by Phillip Senn
		posted on 3/12/2013 at 1:45 AM
		</div>
		<div class="comment_text"><p>I think you can fake a synchronous executeSql by using a setTimeout loop and have the success and error callbacks do a clearTimeout. Maybe setInterval would even make sense in this scenario because you're just waiting 1 of the 2 callbacks to be called.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735894">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735894">37</a> by Raymond Camden
		posted on 3/12/2013 at 1:47 AM
		</div>
		<div class="comment_text"><p>Not sure I'd want to do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735898">38</a> by pullak
		posted on 3/16/2013 at 4:43 PM
		</div>
		<div class="comment_text"><p>Hi raymond,<br>i am new to phonegap. i am using phonegap's cloud build.  As u suggest i went through docs about storage. I just want to know, how to give permissions and get started with cloud build ? One Example will be fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735896">39</a> by Raymond Camden
		posted on 3/18/2013 at 3:33 AM
		</div>
		<div class="comment_text"><p>Sorry, are you about PhoneGap Build? If so, you don't need 'permissions', you just need to register for an account on the site. To get started, read this guide:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fbuild.phonegap.com%2Fdocs%2Fstart%3AlRwO0n8pw9AcU0QjzApAD91EvKE&amp;cuid=3321886" rel="nofollow noopener" title="https://build.phonegap.com/docs/start">https://build.phonegap.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735899">40</a> by ET
		posted on 5/1/2013 at 11:43 PM
		</div>
		<div class="comment_text"><p>Can you tell me what is the max size of database I can create on IOS device? I read on something like 50MB. Is that correct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735897">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735897">41</a> by Raymond Camden
		posted on 5/1/2013 at 11:47 PM
		</div>
		<div class="comment_text"><p>I'm not sure actually. I can say that if you are wanting to store large things, you may wish to use the file system API instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735901">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735901">42</a> by Jim
		posted on 6/20/2013 at 9:18 AM
		</div>
		<div class="comment_text"><p>Hi, i try to work with phonegap and android sdk, but i have a problem. when i launch my application to my device, samsung Galaxy ace, my app trough a exception.... Uncaught TypeError: Transaction error callback must be of valid type.</p><p>my framework said that the problem occur in the line 75 of my index.html and in this line i do this.</p><p>transaction: function(fn,err,suc){<br>				if(self.connection==null){<br>				self.openDataBase();<br>				}<br>				self.connection.transaction(fn,err,suc);<br>			}<br>connection is my var where i assig to the database connection.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735900">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735900">43</a> by Raymond Camden
		posted on 6/20/2013 at 6:19 PM
		</div>
		<div class="comment_text"><p>All I can think of is to ensure that err is really a function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735902">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735902">44</a> by jim
		posted on 6/21/2013 at 2:21 AM
		</div>
		<div class="comment_text"><p>is that right, <br> self.connection.transaction(fn,err,suc)......in this invocation i have three function that will pass when used the transaction... i dont know hwat happen, but whe i try the app with the browser, all is right, i can open data base, i can do a select, but when i install the app in my galaxy samsug ace i found this problem, Uncaught TypeError: Transaction error callback must be of valid type.<br> do Raymond Camden # have some idea, what is the problem?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735903">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735903">45</a> by Jim
		posted on 6/21/2013 at 6:35 AM
		</div>
		<div class="comment_text"><p>thanks for all :) i found the error is my fault</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735904">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735904">46</a> by Shafi
		posted on 7/30/2013 at 1:14 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>We are using a set of insert query transactions during a phonegap application launch. Which Takes considerable amount of time. Since all data are in server and that gets frequently updated, we can go for the choice to providing local database file along with the app</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735905">47</a> by Shafi
		posted on 7/30/2013 at 1:15 PM
		</div>
		<div class="comment_text"><p>Hi<br>We are using a set of insert query transactions during a phonegap application launch. Which Takes considerable amount of time. Since all data are in server and that gets frequently updated, we can go for the choice to providing local database file along with the app</p><p>Is there any better solution that the this? Please help</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735906">48</a> by realtebo
		posted on 8/14/2013 at 6:12 PM
		</div>
		<div class="comment_text"><p>Hi ! thanks for this post !</p><p>I'd like you could write a tutorial only about handle db transaction from one version to one other.</p><p>Example: after 1 year of development, and in-production, I need to add a column to a table. So my db now is v.2, before was v.1. I'm not able to understand how to handle this .. <br>- What happens if my customer download the app from the first time? I suppose I need to init the db directly with v2 code<br>- What I a customer had the v1 and after update the db need to be updated to v2 ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735907">49</a> by Raymond Camden
		posted on 8/14/2013 at 7:03 PM
		</div>
		<div class="comment_text"><p>I was writing an answer and this turned out to be more complex then I imagined. Working up a demo for you in a new blog post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735909">50</a> by Raymond Camden
		posted on 8/14/2013 at 8:25 PM
		</div>
		<div class="comment_text"><p>Please see my follow up here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2013%2F8%2F14%2FUpdating-PhoneGap-Databases%3A5GZEwKoDbdqkjAbUIg0NjEPod_A&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2013/8/14/Updating-PhoneGap-Databases">http://www.raymondcamden.co...</a></p><p>If you have any questions, please post the comment there, not here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735908">51</a> by Idris Adamu
		posted on 9/16/2013 at 2:20 AM
		</div>
		<div class="comment_text"><p>Hello Sir, am new to phonegap but i can use dreamweaver, mysql, php and jquery please Sir i need yur advice on the tools i will need if i want to develop a mobile app to compile using phonegape. infact my major problem is the DBMS engine to use and the server script language kindly provide me with some tips thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735910">52</a> by Raymond Camden
		posted on 9/16/2013 at 5:18 AM
		</div>
		<div class="comment_text"><p>Idris, I think you are asking about the tools you need to use PhoneGap. To be clear, there is nothing you *have* to use. You can use Dreamweaver, Notepad, Brackets, etc. Whatever editor helps you write code is fine for PhoneGap.</p><p>As for the DBMS and server side, PhoneGap doesn't care. My primary experience is with ColdFusion so I've done plenty of blog posts showing CF as the back end, but as I said, PhoneGap doesn't care.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735912">53</a> by Idris Adamu
		posted on 9/16/2013 at 10:00 AM
		</div>
		<div class="comment_text"><p>Thanks Sir.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735911">54</a> by armando
		posted on 10/10/2013 at 12:38 AM
		</div>
		<div class="comment_text"><p>Great article; I get an "error loading page" when I submit (save) a note;  did anybody fix this issue? thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735914">55</a> by Raymond Camden
		posted on 10/10/2013 at 1:06 AM
		</div>
		<div class="comment_text"><p>If you test in Chrome, do you see a better error message?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735913">56</a> by armando
		posted on 10/10/2013 at 7:19 PM
		</div>
		<div class="comment_text"><p>thanks Raymond; I will take a look at it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735917">57</a> by jeff
		posted on 10/11/2013 at 10:07 AM
		</div>
		<div class="comment_text"><p>I encountered the same problem because there was an error in my javascript. Copy and paste your code to Dreamweaver to check you syntax.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735919">58</a> by Jeff
		posted on 10/12/2013 at 7:59 PM
		</div>
		<div class="comment_text"><p>How can I use the results of an executeSql SELECT and Insert them to another executeSql within the same function? I've tried two db.transactions but it seem that the results are not yet known by the last db.transactions  even if I assign the results in  global variables.</p><p>here's my code:<br>function addme(){<br>var   reni_energy=0;<br>var reni_iron=0;<br>   var db = window.sqlitePlugin.openDatabase('des', '2.0', 'DES DB', 2 * 1024 * 1024);<br>   var sql = "SELECT * FROM  reni WHERE groupo='" + group + "'";</p><p>   db.transaction(function (tx) {tx.executeSql(sql, [], function (tx, results) {<br>       len = results.rows.length;</p><p>       if(len==1){<br> 	       reni_energy = results.rows.item(0).energy;<br>	       reni_iron =results.rows.item(0).iron;<br>       }</p><p>	})</p><p>       });</p><p>    var db = window.sqlitePlugin.openDatabase('des', '2.0', 'DES DB', 2 * 1024 * 1024);   <br>    db.transaction( function(tx) {<br>        var query="INSERT INTO fooditems (energy,iron) VALUES (?,?);";<br>        tx.executeSql(query,[reni_energy,reni_iron],[],[]);</p><p>    });</p><p>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735918">59</a> by Raymond Camden
		posted on 10/15/2013 at 10:54 PM
		</div>
		<div class="comment_text"><p>The callbacks are asynchronous which is why it isn't working for you. You would need to do the insert call inside the callback handler of the select.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735921">60</a> by kasun wickramanayake
		posted on 10/24/2013 at 4:23 PM
		</div>
		<div class="comment_text"><p>Thank u for ur nice tutorial.But i get Following error when i run this programme</p><p>10-24 18:10:52.162: E/Web Console(2974): Uncaught TypeError: Cannot call method 'transaction' of undefined at file:///android_asset/www/js/main.js:60</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735920">61</a> by Raymond Camden
		posted on 10/24/2013 at 5:20 PM
		</div>
		<div class="comment_text"><p>Keeping in mind this post is now 2 years old - are you using the latest PG? What is line 60 for you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735923">62</a> by kasun wickramanayake
		posted on 10/25/2013 at 7:52 AM
		</div>
		<div class="comment_text"><p>Yeah i use phone gap 2.9.0.(Codrova 2.9.0).<br>Line 60=	dbShell.transaction(function(tx) {<br>		if (<a href="http://disq.us/url?url=http%3A%2F%2Fnote.id%3AbzX-4acJJ35DT8damm9ETndsbjQ&amp;cuid=3321886" rel="nofollow noopener" title="note.id">note.id</a> == "")<br>			tx.executeSql("insert into notes(title,body,updated) values(?,?,?)", [note.title, note.body, new Date()]);<br>		else<br>			tx.executeSql("update notes set title=?, body=?, updated=? where id=?", [note.title, note.body, new Date(), <a href="http://disq.us/url?url=http%3A%2F%2Fnote.id%3AbzX-4acJJ35DT8damm9ETndsbjQ&amp;cuid=3321886" rel="nofollow noopener" title="note.id">note.id</a>]);<br>	}, dbErrorHandler, cb);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735924">63</a> by Aravinth
		posted on 11/19/2013 at 7:55 PM
		</div>
		<div class="comment_text"><p>it always shows "cannot call method 'transaction' of undefined" in saveData and getEntries.<br>i spend full day but this is not solved.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735927">64</a> by Raymond Camden
		posted on 11/20/2013 at 3:14 AM
		</div>
		<div class="comment_text"><p>Aravinth: That means the db variable wasn't set right. I'd look into that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735926">65</a> by Aravinth
		posted on 11/20/2013 at 10:58 AM
		</div>
		<div class="comment_text"><p>Hi Raymond ,</p><p>Thanks for your reply and nice tutorial . i solved that issue it is my fault phonegap version problem so i got that error.</p><p>But now i got another one problem when i click the list view for edit it always empty that is the " window,location.hash" shows empty . Can you tell me what can i do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735928">66</a> by Suraj
		posted on 11/20/2013 at 1:41 PM
		</div>
		<div class="comment_text"><p>Hi Raymond ,</p><p>I am new in phonegap . I use your example in my application. when I tested on device "add notes" is working fine but I try to edit existing notes its shows a message "error loading page"<br>Please help me.</p><p>Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735929">67</a> by Raymond Camden
		posted on 11/29/2013 at 1:11 AM
		</div>
		<div class="comment_text"><p>@Aravinth: See if this comment helps: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2011%2F10%2F20%2FExample-of-PhoneGaps-Database-Support%23cA435E0AE-B9F8-5539-415C9E70E6806AEA%3Av235rUT6iih9kZkdTQicroiRxoY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2011/10/20/Example-of-PhoneGaps-Database-Support#cA435E0AE-B9F8-5539-415C9E70E6806AEA">http://www.raymondcamden.co...</a></p><p>@Suraj: You will need to debug to see what the issue is. Try using Weinre and get the line number of the error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735930">68</a> by Ram
		posted on 12/3/2013 at 4:39 PM
		</div>
		<div class="comment_text"><p>hi sir,</p><p>am developing an phonegap app,the problem am facing is database is created and inserted in all  ios and android devices,but  not in android 2.3 gingerbread <a href="http://disq.us/url?url=http%3A%2F%2Fversion.is%3Awyy-LJLUOs0qyhHAB0E15Y5FonU&amp;cuid=3321886" rel="nofollow noopener" title="version.is">version.is</a> any other possible way to create it?please help me.</p><p>am wating for your reply.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735931">69</a> by Raymond Camden
		posted on 12/3/2013 at 4:52 PM
		</div>
		<div class="comment_text"><p>What error do you see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735932">70</a> by Ram
		posted on 12/4/2013 at 11:04 AM
		</div>
		<div class="comment_text"><p>hi sir,<br>am having the following error in android gingerbeard.And also i tried the storage example from the phonegap docs.</p><p>E/Web Console(11914): Uncaught TypeError: Transaction callback must be of valid type. at file:///android_asset/www/index.html:531</p><p>looking for your feed back sir.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735933">71</a> by Raymond Camden
		posted on 12/4/2013 at 4:10 PM
		</div>
		<div class="comment_text"><p>Can you show us that line, 531?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735934">72</a> by Ram
		posted on 12/4/2013 at 4:22 PM
		</div>
		<div class="comment_text"><p>sir,</p><p>following is the line which showned in line 531.<br>here i  pass two parameters for the function parseval which is  going to hit api.</p><p> db.transaction(parseval(results.rows.item(k).currentstatus,tx));</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735938">73</a> by Raymond Camden
		posted on 12/4/2013 at 4:31 PM
		</div>
		<div class="comment_text"><p>That doesn't look valid to me. The first argument in transaction should be an inner function. Please see the WebSQL documentation (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fwebdatabase%2F%29%3A5jmo7pjmIa86bazNtUNSOknVw4g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/webdatabase/)">http://www.w3.org/TR/webdat...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735936">74</a> by vijay
		posted on 12/13/2013 at 10:59 AM
		</div>
		<div class="comment_text"><p>I have doubt  in passing the query result to a variable and displaying that in text box .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735937">75</a> by Raymond Camden
		posted on 12/13/2013 at 4:58 PM
		</div>
		<div class="comment_text"><p>Sorry, do you have a question?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735939">76</a> by suraj kumar gorai
		posted on 12/16/2013 at 12:18 PM
		</div>
		<div class="comment_text"><p>Thanks  Raymond Camden ,<br>This time its work perfectly . I need one more help from you .</p><p>I want to know how can I run phonegap application in the background when I click back button.</p><p>Please help me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735940">77</a> by Raymond Camden
		posted on 12/17/2013 at 4:53 PM
		</div>
		<div class="comment_text"><p>Um - I honestly don't know. I think the OS handles putting an app to sleep based on its logic of how much priority an app needs. I know you have event handlers in PhoneGap you can use (pause/resume), but that's about it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735942">78</a> by Sandroid
		posted on 1/20/2014 at 2:58 PM
		</div>
		<div class="comment_text"><p>I want to use the UPDATE-Statement in my phonegap application.<br>But it doesn't work, i don't know why:</p><p>transaction.execSql("UPDATE PROFILES SET name='SandroidXXX' WHERE id='2'");</p><p>Error 0; The SQLTransactionCallback was null or threw an exception.</p><p>Do you know what the cause of this could be?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735941">79</a> by Raymond Camden
		posted on 1/20/2014 at 8:17 PM
		</div>
		<div class="comment_text"><p>Not off hand - can you show a bit more of your code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735943">80</a> by Aravinth
		posted on 3/10/2014 at 11:34 AM
		</div>
		<div class="comment_text"><p>Hi raymond i have one doubt i googled but didn't find any solution . Please tell me if you know.<br>// main.js<br>function onDeviceReady(){<br>	var query = "select * from DEMO";<br>	transction(query,processPersonsResponse);<br>}<br>function processPersonsResponse(response){<br>	alert(response);<br>}</p><p>i called the transaction from another JS file like above and i want the return results.<br>my another JS file is like:</p><p>function transction(query,a){<br>	db = window.openDatabase("Database", "1.0", "PhoneGap Demo", 200000);<br>	 db.transaction(<br>			 function(tx){<br>				 tx.executeSql(query,[],successCB);<br>	 },errorCB);</p><p>}<br>function errorCB(e){<br>	alert("error"+e.message);<br>}<br>function successCB(tx,results){<br>	alert(results.rows.length+" db ");<br>	a(results);<br>}</p><p>but i got error like "the statement callback raised anexception or statement error call back".<br>Please tell me any idea how to do this.<br>Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735944">81</a> by Raymond Camden
		posted on 3/10/2014 at 3:16 PM
		</div>
		<div class="comment_text"><p>I'd have to see it completely to help. Nothing sticks out really.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735946">82</a> by Dina
		posted on 5/25/2014 at 4:47 PM
		</div>
		<div class="comment_text"><p>How could I know if my update statement success or not find the condition and no records updated.<br>example:<br>UPDATE CUSTOMERS SET customerName= "Tom" WHERE customerId= 1;<br>if there is no customerId=1 there will not be any rows affected.</p><p>How could I know the affected rows number in  sqlite phonegap cordova 3.4?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735945">83</a> by Raymond Camden
		posted on 5/25/2014 at 7:17 PM
		</div>
		<div class="comment_text"><p>The SQLResultSet object supports a property (insertId) for a new ID (if doing an insert) as well as records affected property (rowsAffected). You could use this to determine if data was updated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735947">84</a> by Dina
		posted on 5/25/2014 at 10:33 PM
		</div>
		<div class="comment_text"><p>could you give me example with update statement ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735950">85</a> by Raymond Camden
		posted on 5/26/2014 at 3:11 AM
		</div>
		<div class="comment_text"><p>The executeSql command lets you specify the call back function to run and the SQLResetSet is passed to it. That should be enough to get you going.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735951">86</a> by Dina
		posted on 6/20/2014 at 11:26 PM
		</div>
		<div class="comment_text"><p>How to display the value of the max id.<br>var sql = 'SELECT max(id) FROM CONTACTS';<br>var db = window.openDatabase("Database", "1.0", "Demo", 200000);<br>db.transaction(function(tx){<br>    	tx.executeSql(sql,[],function(ax,res){<br>              maxId= res.rows.length;<br>        }<br>it alerts "1" and in table the maximum id =5 <br>What is the error?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735952">87</a> by Raymond Camden
		posted on 6/20/2014 at 11:31 PM
		</div>
		<div class="comment_text"><p>You used the number of rows. It will always be 1 because your SQL returns one row. You want the value of that row, not the number of rows. Try using select max(id) as topId. That will give a name to your column.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735949">88</a> by Dina
		posted on 6/20/2014 at 11:59 PM
		</div>
		<div class="comment_text"><p>could you explain more by my example</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735953">89</a> by Raymond Camden
		posted on 6/21/2014 at 12:28 AM
		</div>
		<div class="comment_text"><p>I told you what to do. I'm not sure what else I can tell you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735954">90</a> by Dina
		posted on 6/21/2014 at 3:38 AM
		</div>
		<div class="comment_text"><p>OK i got it <br>Many Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735958">91</a> by nehuen
		posted on 7/9/2014 at 12:02 AM
		</div>
		<div class="comment_text"><p>hi, i download you app and works fine, but i need the config.xml file for compile my version for testing, you cand publish it? (I form argentina, sorry for my bad english)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735955">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735955">92</a> by Raymond Camden
		posted on 7/9/2014 at 3:41 AM
		</div>
		<div class="comment_text"><p>Why do you think you need that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735956">93</a> by Digvijay
		posted on 8/1/2014 at 11:37 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Thanks for nice tutorial. I tried your code in my android Samsung tab it's not working it was not executing .dbShell = window.openDatabase("SimpleNotes", 2, "SimpleNotes", 1000000);</p><p>Can you please guide it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735957">94</a> by Raymond Camden
		posted on 8/1/2014 at 6:06 PM
		</div>
		<div class="comment_text"><p>What error do you get?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735960">95</a> by Alex Jolig
		posted on 10/20/2014 at 1:44 PM
		</div>
		<div class="comment_text"><p>Hey Raymond. Thanks for your great tutorial. I tried your example and beside that weird error you've mentioned, after I click on "Save Note" button and getting that error. I don't see my added note in the ListView.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735959">96</a> by Raymond Camden
		posted on 10/25/2014 at 2:27 AM
		</div>
		<div class="comment_text"><p>@Alex: "that error" - what error?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1945421318">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_FwQhNqXuR6.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1945421318">97</a> by Bhagat
		posted on 4/4/2015 at 6:08 AM
		</div>
		<div class="comment_text"><p>Please tell me required files for this example, i want use database.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1947148724">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1947148724">98</a> (In reply to <a href="#c_1945421318">#97</a>) by Raymond Camden
		posted on 4/5/2015 at 11:05 AM
		</div>
		<div class="comment_text"><p>The download link was broken - it is fixed now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2218273964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2218273964">99</a> by oscar
		posted on 8/26/2015 at 2:55 PM
		</div>
		<div class="comment_text"><p>link dead</p></div>
	</div>
</div>
		
<div class="comment" id="c_2219939207">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2219939207">100</a> (In reply to <a href="#c_2218273964">#99</a>) by Raymond Camden
		posted on 8/26/2015 at 9:47 PM
		</div>
		<div class="comment_text"><p>Fixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2471278024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2471278024">101</a> by Brijesh Bosamiya
		posted on 1/22/2016 at 5:12 AM
		</div>
		<div class="comment_text"><p>download link is not working.. when i click on that.. it gives page not found.. plz check and update link.. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_2471774092">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2471774092">102</a> (In reply to <a href="#c_2471278024">#101</a>) by Raymond Camden
		posted on 1/22/2016 at 2:00 PM
		</div>
		<div class="comment_text"><p>Please use this new download link: <a href="http://disq.us/url?url=http%3A%2F%2Fstatic.raymondcamden.com%2Fenclosures%2FSimpleNote.zip%3A1WCdl9iLyb-MJjbD9b5KhV3e0aY&amp;cuid=3321886" rel="nofollow noopener" title="http://static.raymondcamden.com/enclosures/SimpleNote.zip">http://static.raymondcamden...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2565668008">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2565668008">103</a> by Jonathan
		posted on 3/12/2016 at 2:32 PM
		</div>
		<div class="comment_text"><p>APP NOT WORKING -.-</p></div>
	</div>
</div>
		
<div class="comment" id="c_2565721575">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2565721575">104</a> (In reply to <a href="#c_2565668008">#103</a>) by Raymond Camden
		posted on 3/12/2016 at 3:12 PM
		</div>
		<div class="comment_text"><p>OK</p></div>
	</div>
</div>
		
<div class="comment" id="c_2606723723">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_eMlwysJqrK.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2606723723">105</a> by Umesh Yadav
		posted on 4/5/2016 at 6:35 AM
		</div>
		<div class="comment_text"><p>example is not working</p></div>
	</div>
</div>
		
<div class="comment" id="c_2607211353">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2607211353">106</a> (In reply to <a href="#c_2606723723">#105</a>) by Raymond Camden
		posted on 4/5/2016 at 1:24 PM
		</div>
		<div class="comment_text"><p>You mean the download code or something else? And how is it not working?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2681935463">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_CC6Wg4D80k.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2681935463">107</a> by Subin Babu
		posted on 5/18/2016 at 12:26 PM
		</div>
		<div class="comment_text"><p>download link shows 404 error</p></div>
	</div>
</div>
		
<div class="comment" id="c_2681948560">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2681948560">108</a> (In reply to <a href="#c_2681935463">#107</a>) by Raymond Camden
		posted on 5/18/2016 at 12:35 PM
		</div>
		<div class="comment_text"><p>You can find it here: <a href="https://disq.us/url?url=https%3A%2F%2Fstatic.raymondcamden.com%2Fenclosures%2FSimpleNote.zip%3A_9EoEPJ-U4avi8uuZj5-RCGxRX0&amp;cuid=3321886" rel="nofollow noopener" title="https://static.raymondcamden.com/enclosures/SimpleNote.zip">https://static.raymondcamde...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2681949474">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_CC6Wg4D80k.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2681949474">109</a> (In reply to <a href="#c_2681948560">#108</a>) by Subin Babu
		posted on 5/18/2016 at 12:36 PM
		</div>
		<div class="comment_text"><p>Thank you</p><p>Thanks and Regards ,</p><p>*SUBIN BABU*</p><p>p : +1 (703) 972-2401</p><p>m: +91-9895657271</p><p>e : subin@artificerstechnologies.com</p><p>w : <a href="http://disq.us/url?url=http%3A%2F%2Fwww.artificerstechnologies.com%3AEieKVlB3zU4Xt9HPbDW7XeiqT1E&amp;cuid=3321886" rel="nofollow noopener" title="www.artificerstechnologies.com">www.artificerstechnologies.com</a></p><p>This Artificer's Technologies email, along with any attachments, is considered confidential or otherwise protected from disclosure.  If you have received it in error, you are on notice of its status, please notify us immediately by reply email and delete this email and its attachments from your system.  Dissemination, distribution or copying of any erroneously received Artificer's Technologies email, along with any attachments, use of it for any purpose, or disclosure of its contents to any person(s) other than the person(s) to whom it was intended is prohibited. Thank you for your cooperation.</p></div>
	</div>
</div>
		