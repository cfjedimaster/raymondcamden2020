
<div class="comment" id="c_1714082546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082546">1</a> by Laurence
		posted on 4/3/2014 at 8:24 PM
		</div>
		<div class="comment_text"><p>I think you can just chain a click() event to your link attribute setting.<br>$link.attr("href",'data:Application/octet-stream,'+encodeURIComponent(csv)).click();<br><a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2FL54tm%2F%3AENHmsVyi4ofxH76_nNZz9RvnX4I&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/L54tm/">http://jsfiddle.net/L54tm/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082553">2</a> by Laurence
		posted on 4/3/2014 at 9:04 PM
		</div>
		<div class="comment_text"><p>Never mind. I just realized that I copied document.ready into the fiddle twice, but the second one was off screen so didn't see it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082545">3</a> by Ty Whalin
		posted on 4/3/2014 at 9:46 PM
		</div>
		<div class="comment_text"><p>Nice work Ray. Can definitely find some use of this snippet of code you created. Not sure just when yet, but I am sure I can think of something to make use of this code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082557">4</a> by Raymond Camden
		posted on 4/3/2014 at 10:26 PM
		</div>
		<div class="comment_text"><p>@Laurence: So are you saying there IS a better way for my hack or there isn't?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082551">5</a> by Laurence
		posted on 4/3/2014 at 10:42 PM
		</div>
		<div class="comment_text"><p>I thought just adding .click() to the end of your $link call was working but then realized I had the call $(document).ready() twice and the second instance still referenced your fakeClick() function, and so I what I though was working was not.</p><p>So I played around with the code a bit more and if you change to the following, it seems to work (at least in Chrome and FF)</p><p>$link.attr("href", 'data:Application/octet-stream,' + encodeURIComponent(csv))[0].click();</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2FL54tm%2F8%2F%3AxcB9XdBUSsZokvJ0oAIJQthzmcM&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/L54tm/8/">http://jsfiddle.net/L54tm/8/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082562">6</a> by Raymond Camden
		posted on 4/3/2014 at 10:49 PM
		</div>
		<div class="comment_text"><p>Damn tootin - yeah - that worked. Will update the post now.</p><p>Then I'll delete your comments, block anyone with your name, take credit, sell to Facebook, become rich, AND BUY SHARKS WITH LASER BEAMS!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082555">7</a> by Laurence
		posted on 4/3/2014 at 11:10 PM
		</div>
		<div class="comment_text"><p>This is not the comment you are looking for ;-) Call off the sharks. You're still referencing fakeClick() in the code above, the demo looks correct. Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082549">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082549">8</a> by Raymond Camden
		posted on 4/3/2014 at 11:37 PM
		</div>
		<div class="comment_text"><p>Oops, fixed for reals this time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082552">9</a> by matharoo
		posted on 4/5/2014 at 9:01 AM
		</div>
		<div class="comment_text"><p>thats a sleek solution for csv files via jquery.. small and powerful.. thanks for sharing! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082550">10</a> by Ty Whalin
		posted on 4/7/2014 at 6:15 AM
		</div>
		<div class="comment_text"><p>Get some pet dolphins if you need to call off the sharks. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082548">11</a> by Gaurav Mishra
		posted on 8/11/2014 at 9:31 AM
		</div>
		<div class="comment_text"><p>Not working in IE</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082560">12</a> by Raymond Camden
		posted on 8/11/2014 at 2:44 PM
		</div>
		<div class="comment_text"><p>What version of IE? When you open up IE's dev tools, what error do you see? If no error, use debugging and figure out where it is failing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082556">13</a> by ahsan
		posted on 9/10/2014 at 4:32 PM
		</div>
		<div class="comment_text"><p>what if i want to run that code on android device</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082559">14</a> by Raymond Camden
		posted on 9/10/2014 at 6:10 PM
		</div>
		<div class="comment_text"><p>Did you try it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082569">15</a> by Mohsen
		posted on 10/6/2014 at 9:47 AM
		</div>
		<div class="comment_text"><p>Can we use this code in phonegap?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082570">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082570">16</a> by Raymond Camden
		posted on 10/6/2014 at 2:30 PM
		</div>
		<div class="comment_text"><p>Yes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082579">17</a> by Mohsen
		posted on 10/8/2014 at 9:32 PM
		</div>
		<div class="comment_text"><p>This code work well in browsers, but in phonegap nothing happended. I used :</p><p>&lt;a href=# class="ui-btn" id="save"&gt; Save to a text file &lt;/a&gt;<br>&lt;a href="" id="dataLink" download="data.csv"&gt;&lt;/a&gt;<br>in index.html file of www folder, and:<br>$("#save").on ("tap", function (event)<br>{<br>var $link = $("#dataLink");<br>var csv = "";</p><p>db.transaction (function (transaction) <br>{<br>var sql = "SELECT * FROM datastorage";<br>transaction.executeSql (sql, undefined, <br>	function (transaction, result)<br>	{<br>	if (result.rows.length)<br>	{<br>		for (var i = 0; i &lt; result.rows.length; i++) <br>		{<br>		var row = result.rows.item (i);<br>		var id = <a href="http://disq.us/url?url=http%3A%2F%2Frow.id%3Ab8uJxUmt-ShUN34vScwgCxo9G_M&amp;cuid=3321886" rel="nofollow noopener" title="row.id">row.id</a>;<br>		var data = <a href="http://disq.us/url?url=http%3A%2F%2Frow.data%3A6xJSgzOmZ025TWeT4lEcsox2XGM&amp;cuid=3321886" rel="nofollow noopener" title="row.data">row.data</a>;<br>		var book = <a href="http://disq.us/url?url=http%3A%2F%2Frow.book%3A7t2pehhf6z6rfb0WnbuOsD7mWhA&amp;cuid=3321886" rel="nofollow noopener" title="row.book">row.book</a>;<br>		var page = <a href="http://disq.us/url?url=http%3A%2F%2Frow.page%3AsHSQvYrgLEYXqzLZCvj30xLRdI0&amp;cuid=3321886" rel="nofollow noopener" title="row.page">row.page</a>;</p><p>	csv += id + "," + data + "," + book + "," + page + "\n";	<br>		}<br>	console.log(csv);<br>	$link.attr("href", 'data:Application/octet-stream,' + encodeURIComponent(csv))[0].click();<br>		}<br>	}, error);<br>});<br>});<br>in a .js file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082571">18</a> by Raymond Camden
		posted on 10/8/2014 at 9:57 PM
		</div>
		<div class="comment_text"><p>Did you see anything when you debugged? Use Remote Debugging.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082573">19</a> by sarika
		posted on 10/13/2014 at 10:18 AM
		</div>
		<div class="comment_text"><p>if this workes in mobile app?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082577">20</a> by Raymond Camden
		posted on 10/13/2014 at 2:26 PM
		</div>
		<div class="comment_text"><p>Yes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082580">21</a> by sarika
		posted on 10/13/2014 at 4:23 PM
		</div>
		<div class="comment_text"><p>As i tried in my App ,its working Great on Browser But not downloading any file in App.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082581">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082581">22</a> by Raymond Camden
		posted on 10/13/2014 at 6:30 PM
		</div>
		<div class="comment_text"><p>When you check with remote debugging, do you see anything in the console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082578">23</a> by Raymond Camden
		posted on 10/13/2014 at 6:40 PM
		</div>
		<div class="comment_text"><p>Ok, so I tested in both Android/iOS, and it doesn't work. Of course, if you use Cordova/PhoneGap you could easily save it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082582">24</a> by Mohsen
		posted on 10/14/2014 at 1:17 PM
		</div>
		<div class="comment_text"><p>Excuse me for delay,<br>I tested my app (created by phonegap) in an android 4.2.2 device. Chrome Remote Debugging is used with an Android 4.4 device. I should test the app again with this device.<br>Thank you a lot,<br>Mohsen</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082584">25</a> by Raymond Camden
		posted on 10/14/2014 at 2:08 PM
		</div>
		<div class="comment_text"><p>You don't really need to - it fails. :) But in PhoneGap I'd just use the FileSystem API.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082583">26</a> by Mohsen
		posted on 10/16/2014 at 12:12 AM
		</div>
		<div class="comment_text"><p>Hello,</p><p>I test the app with File plugin for phonegap. It works well.</p><p>code:<br>$("#save").on ("tap", function (event)<br>{<br>/*var $link = $("#dataLink");*/<br>var csv = "";</p><p>db.transaction (function (transaction) <br>{<br>var sql = "SELECT * FROM datastorage";<br>transaction.executeSql (sql, undefined, <br>function (transaction, result)<br>{<br>if (result.rows.length)<br>{<br>for (var i = 0; i &lt; result.rows.length; i++) <br>{<br>var row = result.rows.item (i);<br>var id = <a href="http://disq.us/url?url=http%3A%2F%2Frow.id%3Ab8uJxUmt-ShUN34vScwgCxo9G_M&amp;cuid=3321886" rel="nofollow noopener" title="row.id">row.id</a>;<br>var data = <a href="http://disq.us/url?url=http%3A%2F%2Frow.data%3A6xJSgzOmZ025TWeT4lEcsox2XGM&amp;cuid=3321886" rel="nofollow noopener" title="row.data">row.data</a>;<br>var book = <a href="http://disq.us/url?url=http%3A%2F%2Frow.book%3A7t2pehhf6z6rfb0WnbuOsD7mWhA&amp;cuid=3321886" rel="nofollow noopener" title="row.book">row.book</a>;<br>var page = <a href="http://disq.us/url?url=http%3A%2F%2Frow.page%3AsHSQvYrgLEYXqzLZCvj30xLRdI0&amp;cuid=3321886" rel="nofollow noopener" title="row.page">row.page</a>;</p><p>csv += id + "," + data + "," + book + "," + page + "\n";	<br>}<br>console.log(csv);<br>/*$link.attr("href", 'data:Application/octet-stream,' + encodeURIComponent(csv))[0].click();*/</p><p>// request the persistent file system<br>	window.requestFileSystem(LocalFileSystem.PERSISTENT, 0, gotFS, fail);<br>	function gotFS(fileSystem) {<br>	console.log(<a href="http://disq.us/url?url=http%3A%2F%2FfileSystem.name%3AzP-AcoadK37Z9h4YnLjHSzmc6R4&amp;cuid=3321886" rel="nofollow noopener" title="fileSystem.name">fileSystem.name</a>);<br>	fileSystem.root.getFile("data.csv", {create: true, exclusive: false, append: true}, gotFileEntry, fail);<br>	}</p><p>	function gotFileEntry(fileEntry) {<br>	fileEntry.createWriter(gotFileWriter, fail);<br>	}</p><p>	function gotFileWriter(writer) {<br>	writer.onwriteend = function(evt) {<br>	console.log("write success");<br>	};<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fwriter.seek%3AKgpsPOCYGnHwPtkrYr-4VkXHkZM&amp;cuid=3321886" rel="nofollow noopener" title="writer.seek">writer.seek</a>(writer.length);<br>	writer.write(csv);<br>	}</p><p>	function fail(error) {<br>	console.log(error.code);<br>	alert (error.code);<br>	}</p><p>	}<br>}, error);<br>});<br>});</p><p>Thank you,<br>Mohsen</p></div>
	</div>
</div>
		
<div class="comment" id="c_1721639118">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_N9tUD1NeFZ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1721639118">27</a> by Manish
		posted on 12/2/2014 at 9:52 AM
		</div>
		<div class="comment_text"><p>Hey Raymond, I have been trying this code but seems to be working ONLY in Chrome and Firefox, it doesnt work in Internet Explorer. I verified in the Developer Tools and found the below error message:</p><p>"The data area passed to a system call is too small."</p><p>Do you have any suggestions or any sample on fiddle that works with IE, would appreciate if you can share.</p><p>Thanks in advance!!</p><p>Regards,<br>Manish</p></div>
	</div>
</div>
		
<div class="comment" id="c_1721712918">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1721712918">28</a> (In reply to <a href="#c_1721639118">#27</a>) by Raymond Camden
		posted on 12/2/2014 at 11:37 AM
		</div>
		<div class="comment_text"><p>Where did that call come from? In other words, where exactly does it break down?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4226188503">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_zl83TQyNOb.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4226188503">29</a> by rio
		posted on 12/5/2018 at 11:36 AM
		</div>
		<div class="comment_text"><p>hey Raymond...thank you for the code.i got some link..but Im trying to add some more input fields at that time i got stucked ..please give me some hint...</p></div>
	</div>
</div>
		
<div class="comment" id="c_4228150007">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4228150007">30</a> (In reply to <a href="#c_4226188503">#29</a>) by Raymond Camden
		posted on 12/6/2018 at 4:36 PM
		</div>
		<div class="comment_text"><p>I'm sorry - can you provide a bit more detail?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4229017770">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_zl83TQyNOb.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4229017770">31</a> by rio
		posted on 12/7/2018 at 3:38 AM
		</div>
		<div class="comment_text"><p>Hello..actually I want to create dynamic table and save that table to csv file</p></div>
	</div>
</div>
		
<div class="comment" id="c_4231138755">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4231138755">32</a> (In reply to <a href="#c_4229017770">#31</a>) by Raymond Camden
		posted on 12/8/2018 at 4:15 PM
		</div>
		<div class="comment_text"><p>Ok I still need more details though. What did you try, what happened, etc.</p></div>
	</div>
</div>
		