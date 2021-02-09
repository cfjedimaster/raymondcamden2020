
<div class="comment" id="c_1713742902">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742902">1</a> by jean-louis
		posted on 9/17/2012 at 2:52 AM
		</div>
		<div class="comment_text"><p>HI,<br> would you show us how to "simply" retrieve the list of ufo's names descript in an html list ?<br>thanks !<br>jl</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742903">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742903">2</a> by Raymond Camden
		posted on 9/17/2012 at 5:45 AM
		</div>
		<div class="comment_text"><p>Sure - actually - it is going to be more difficult to the UI aspect. This "app" has one form. In order to add a list, I'd need to add some form of navigation to it. The actual act of asking Parse for the stuff is much simpler than the UI.</p><p>That being said - I wanted to work on this app a bit more anyway. This gives me an opportunity too. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742906">3</a> by Raymond Camden
		posted on 9/17/2012 at 6:06 AM
		</div>
		<div class="comment_text"><p>Here is a quick example where I just wrote it as a separate HTML file:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2F3735178%3A1mU3jcaAdgOOhOWPAL_5W2975iI&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/3735178">https://gist.github.com/373...</a></p><p>It makes use of the Query API - <a href="https://disq.us/url?url=https%3A%2F%2Fparse.com%2Fdocs%2Fjs_guide%23queries%3AuJabPUGF3OBo18NumElZsDZDLa0&amp;cuid=3321886" rel="nofollow noopener" title="https://parse.com/docs/js_guide#queries">https://parse.com/docs/js_g...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742905">4</a> by jean-louis
		posted on 9/17/2012 at 8:45 PM
		</div>
		<div class="comment_text"><p>Great! Exactly what I was looking for !<br>thanks, jl</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742912">5</a> by mkhuda
		posted on 12/24/2012 at 10:56 AM
		</div>
		<div class="comment_text"><p>Thanks raymond ! its great example !<br>Actually, i want to parse data from <a href="http://disq.us/url?url=http%3A%2F%2FParse.com%3AHOqUIwVjL-3eSnTAceIxxeYWB48&amp;cuid=3321886" rel="nofollow noopener" title="Parse.com">Parse.com</a> and then store it in a local database with onclick/submit button ! How to do it?</p><p>and Thank you for the tutorial ! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742915">6</a> by Raymond Camden
		posted on 12/24/2012 at 9:19 PM
		</div>
		<div class="comment_text"><p>Well, my entries on Parse tell you how to get the data. So all you need to know is how to store it. In PhoneGap, that would be with WebSQL, their database support, and I've done a number of entries on that. Shoot, this blog entry shows you how to store into the db when you are offline - it is the exact same code to just plain store it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742910">7</a> by mkhuda
		posted on 12/25/2012 at 12:25 AM
		</div>
		<div class="comment_text"><p>this is my code,</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2F4370435%3AAXHUPvniyjaA23XajRBG_26uhYY&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/4370435">https://gist.github.com/437...</a></p><p>after I pressed the query button, I get the query does not work well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742909">8</a> by Raymond Camden
		posted on 12/25/2012 at 12:50 AM
		</div>
		<div class="comment_text"><p>Your Parse.init line should only be run once, so you want to move that out.</p><p>You say the query does not work well. What exactly does that mean? I need a firm error to help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742911">9</a> by Raymond Camden
		posted on 12/25/2012 at 12:51 AM
		</div>
		<div class="comment_text"><p>Another issue. You are trying to insert a report.body (title) property but report doesn't exist. result[i] is your current object. I believe you also want to use result[i].get("title") to get the property. Check the <a href="http://disq.us/url?url=http%3A%2F%2FParse.com%3AHOqUIwVjL-3eSnTAceIxxeYWB48&amp;cuid=3321886" rel="nofollow noopener" title="Parse.com">Parse.com</a> API docs to be clear.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742913">10</a> by mkhuda
		posted on 12/25/2012 at 1:53 AM
		</div>
		<div class="comment_text"><p>oke, this is my complete code !</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2F4370619%3A3LzYTEwHdw5efoRncsggq_AL0UI&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/4370619">https://gist.github.com/437...</a></p><p>I have 4 rows in note Class. and i have successfully storing data from Parse to local SQL with 4 rows, But only one row data is store to local SQL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742914">11</a> by Raymond Camden
		posted on 12/25/2012 at 8:52 AM
		</div>
		<div class="comment_text"><p>Do you get any errors though? Have you tried using console.log to see where things fail?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742916">12</a> by mkhuda
		posted on 12/25/2012 at 9:07 AM
		</div>
		<div class="comment_text"><p>i dont get an error, im using google chrome console..<br>and the javascript code is running well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742921">13</a> by Raymond Camden
		posted on 12/25/2012 at 9:56 AM
		</div>
		<div class="comment_text"><p>I'd add a bunch of console.log messages. If you want, you can send me your code (with the real app ids, I won't share) and I'll run it here... Wednesday.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742918">14</a> by mkhuda
		posted on 12/25/2012 at 10:55 AM
		</div>
		<div class="comment_text"><p>this is my project files:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdl.dropbox.com%2Fu%2F37749698%2Flocal.zip%3A7RqTt3xfZ8N6cjt0VtlKTgUqUoY&amp;cuid=3321886" rel="nofollow noopener" title="http://dl.dropbox.com/u/37749698/local.zip">http://dl.dropbox.com/u/377...</a></p><p>Thank you in advance for your help and your time</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742919">15</a> by Raymond Camden
		posted on 12/26/2012 at 11:01 PM
		</div>
		<div class="comment_text"><p>I just tested and it is entering data just fine. How are you testing? For me, I go into Chrome Dev Tools, Resources, Web SQL, I clicked on the db name, then click on the table name (maybe double click) and I see rows of data from the inserts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742920">16</a> by mkhuda
		posted on 12/27/2012 at 3:59 AM
		</div>
		<div class="comment_text"><p>I have 4 rows in <a href="http://disq.us/url?url=http%3A%2F%2FParse.com%3AHOqUIwVjL-3eSnTAceIxxeYWB48&amp;cuid=3321886" rel="nofollow noopener" title="Parse.com">Parse.com</a> DB.<br>this is my Parse rows:<br><a href="http://disq.us/url?url=http%3A%2F%2Fdl.dropbox.com%2Fu%2F37749698%2Frows.jpg%3A0MyxVbUap1pKbkGgp24mJp7LT1w&amp;cuid=3321886" rel="nofollow noopener" title="http://dl.dropbox.com/u/37749698/rows.jpg">http://dl.dropbox.com/u/377...</a><br>but why only the last row inserted into my local SQL ?<br>[body: mk] [title: mkhuda] counted 4 times.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742922">17</a> by Raymond Camden
		posted on 12/27/2012 at 10:36 PM
		</div>
		<div class="comment_text"><p>Ohh, yeah, this is an issue with the transactions. Here is a fixed version. Note what I commented out and how I changed it.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2F4390181%3AG0oboXHh-VtxkprYD714OEMJ8uU&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/4390181">https://gist.github.com/439...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742989">18</a> by mkhuda
		posted on 12/28/2012 at 1:15 AM
		</div>
		<div class="comment_text"><p>Wow, amazing !<br>Thank you very much !</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742990">19</a> by Anthony
		posted on 1/30/2013 at 8:24 PM
		</div>
		<div class="comment_text"><p>Hi Ray, I haven't used the Parse JS api but the IOS api has a "saveEventually" method that tries to send the object immediately to parse and if a network connection is not available the object is stored locally in an on-disk cache until it can be delivered to Parse.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742985">20</a> by Raymond Camden
		posted on 1/30/2013 at 8:39 PM
		</div>
		<div class="comment_text"><p>Just checked and it doesn't exist for JS. I bet you could add support for something like this. Just add the obs to a queue and ping the network every 5 minutes. Or listen for an online event.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742987">21</a> by xavier
		posted on 2/22/2013 at 10:00 AM
		</div>
		<div class="comment_text"><p>Thanks for the great tutorial. I am planning my mobile app in such a way that data from our main database will be pushed to Parse and the mobile app will only interact with the data in Parse and will not hit our main database. End of the day, there will be a "download" from Parse to the main database also to keep things synched.</p><p>I guess i will have to use <a href="http://disq.us/url?url=http%3A%2F%2FParse.com%3AHOqUIwVjL-3eSnTAceIxxeYWB48&amp;cuid=3321886" rel="nofollow noopener" title="Parse.com">Parse.com</a>'s Rest API for the data movement back and forth from our database to Parse. I would like to use Coldfusion queries for this. Parse has examples with Curl and Python. So, just reaching out to you for your thoughts on this.  Thanks in advance for your time</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742999">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742999">22</a> by Raymond Camden
		posted on 2/22/2013 at 4:48 PM
		</div>
		<div class="comment_text"><p>I could have sworn I had shown an example of this before, but I couldn't find it. Will make a simple demo today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742988">23</a> by xavier
		posted on 2/22/2013 at 9:09 PM
		</div>
		<div class="comment_text"><p>Thanks for your time and attention. Looking forward to it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742997">24</a> by Raymond Camden
		posted on 2/22/2013 at 9:12 PM
		</div>
		<div class="comment_text"><p>Xavier, please check out this: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2013%2F2%2F22%2FIntegrating-Parsecom-on-the-Server%3AP3xeZgPXewmLca4rYhGS5AQ6gNE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2013/2/22/Integrating-Parsecom-on-the-Server">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742993">25</a> by Mkhuda
		posted on 4/26/2013 at 10:58 AM
		</div>
		<div class="comment_text"><p>I remembered this article,<br>and I thank you for helping complete the final project in my college.</p><p>Thanks, Mr. Raymond for your teaching ! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742986">26</a> by Raymond Camden
		posted on 4/26/2013 at 2:28 PM
		</div>
		<div class="comment_text"><p>You are most welcome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742991">27</a> by muhaimin cs
		posted on 7/22/2013 at 12:52 PM
		</div>
		<div class="comment_text"><p>i just test your sample from download file. It seems your sample has created 2 same object of Web SQL. Is it bcos i refresh the page? One more thing how do i let the page know the connection to internet is ready. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743001">28</a> by Raymond Camden
		posted on 7/22/2013 at 3:39 PM
		</div>
		<div class="comment_text"><p>If you are offline and save two things then yes you will get two objects. Outside of that I may not be reading you right.</p><p>As for letting the page know a connection is ready, you can use the online/offline event handlers. My app would be improved if it noted that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742998">29</a> by muhaimin cs
		posted on 7/23/2013 at 8:01 AM
		</div>
		<div class="comment_text"><p>how about if user close the safari, will the saved data still available in Web SQL?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743002">30</a> by muhaimin cs
		posted on 7/23/2013 at 9:52 AM
		</div>
		<div class="comment_text"><p>sorry to bother you again. how about associate the entries with a photo snap on tablet?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742994">31</a> by Raymond Camden
		posted on 7/23/2013 at 3:45 PM
		</div>
		<div class="comment_text"><p>WebSQL persists, yes.<br>Your second comment doesn't make sense to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742996">32</a> by muhaimin cs
		posted on 7/25/2013 at 5:24 AM
		</div>
		<div class="comment_text"><p>thanks raymond</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743005">33</a> by Georges
		posted on 9/29/2013 at 6:58 PM
		</div>
		<div class="comment_text"><p>hey awesome post . i just have one question though.<br>if i want to load images from object how do i do it ?<br> i added this code as it is described in <a href="http://disq.us/url?url=http%3A%2F%2Fparse.com%3A9NAZCuXuWB_KfP-1b0V6Vh4y4SA&amp;cuid=3321886" rel="nofollow noopener" title="parse.com">parse.com</a> but didn't work .<br> s+= '&lt;b&gt;ID:&lt;/b&gt; '+ result.imagePlaceholder.url() + '&lt;br/&gt;';</p><p>any thoughts ? Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743004">34</a> by Raymond Camden
		posted on 10/1/2013 at 12:16 AM
		</div>
		<div class="comment_text"><p>Hmm - have you tried what I did here - <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2013%2F7%2F10%2FQuick-note-for-Parse-and-JavaScript-Users%3AhLP7bWBC70sy7xsvj7OuVI4M1Ww&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2013/7/10/Quick-note-for-Parse-and-JavaScript-Users">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742995">35</a> by joseph david
		posted on 11/12/2013 at 4:18 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>Thank you for your code. I try to send Sighting to your parse, have sightName : Joker there?</p><p>I just want try to connect database. I can not connect parse n codeigniter with javascript. Could you help me? Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742992">36</a> by Raymond Camden
		posted on 11/12/2013 at 4:27 PM
		</div>
		<div class="comment_text"><p>You should be able to check the response via your browser dev tools. If you don't see a successful response, then it didn't work.</p><p>As for CodeIgniter, I don't use it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2161275453">
	<div>
		<img src="https://disqus.com/api/users/avatars/marciokoko.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2161275453">37</a> by marciokoko
		posted on 7/28/2015 at 2:46 PM
		</div>
		<div class="comment_text"><p>Hi.  Im trying to save some data to <a href="http://disq.us/url?url=http%3A%2F%2Fparse.com%3A9NAZCuXuWB_KfP-1b0V6Vh4y4SA&amp;cuid=3321886" rel="nofollow noopener" title="parse.com">parse.com</a> without the sync to local store.  So I basically used your code and commented out the last bit referencing the db.transaction(function()).  The form submits but nothing gets saved.  Im wondering if Im using the right AP keys, ApplicationID &amp; Client Keys?  I did create a SightingObject class and the 3 respective columns.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2164365985">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2164365985">38</a> (In reply to <a href="#c_2161275453">#37</a>) by Raymond Camden
		posted on 7/30/2015 at 1:36 AM
		</div>
		<div class="comment_text"><p>Sorry - I haven't used this code in years.</p></div>
	</div>
</div>
		