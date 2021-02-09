
<div class="comment" id="c_1713726003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726003">1</a> by SuperAlly
		posted on 8/14/2010 at 5:31 AM
		</div>
		<div class="comment_text"><p>This is great Ray.  Thanks!  I had wondered about and been asked about that myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726006">2</a> by SuperAlly
		posted on 9/1/2010 at 8:06 AM
		</div>
		<div class="comment_text"><p>I finally got a chance to take a better look at this and when I try to "Upload Mah Filez!" nothing happens (using the code as shown).</p><p>I've only ever used cffileupload once and it was pretty much standard use via the docs, so it's entirely possible I missed the plot entirely!!</p><p>As I said, I didn't change anything, was just trying to get started with the example.  Any thoughts on what I might have done wrong?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726015">3</a> by Raymond Camden
		posted on 9/1/2010 at 8:09 AM
		</div>
		<div class="comment_text"><p>Right after</p><p>$("#uploadBtn").click(function() {</p><p>add</p><p>console.log("CLICK HANDLER RUN");</p><p>This will only work if you have Firebug, or Google Chrome (and ensure the JavaScript console is open).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726004">4</a> by SuperAlly
		posted on 9/1/2010 at 8:23 AM
		</div>
		<div class="comment_text"><p>Works perfectly in Chrome and Firefox after adding that line!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726016">5</a> by SuperAlly
		posted on 9/1/2010 at 9:20 AM
		</div>
		<div class="comment_text"><p>I apologize for the double post, I just wanted to correct myself a little and expand on that last statement...<br>The page works fine with or without the extra line in either Firefox or Chrome (although I did get a 'console' is undefined error in Firefox the first time I tried it before adding the line - Been fine since, even with it removed again) and does log the click under both when added.<br>The page does not work for me in Safari 5 (Mac).<br>Hope that clears up any confusion that I may have caused.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726010">6</a> by Raymond Camden
		posted on 9/1/2010 at 3:54 PM
		</div>
		<div class="comment_text"><p>It does clear things up a bit - enough for me to test on my Mac.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726007">7</a> by Raymond Camden
		posted on 9/1/2010 at 3:57 PM
		</div>
		<div class="comment_text"><p>I just tried it and it works fine. Let's try this. Keep the console message in and open up Safari's JS console. Also add a console.log("doc ready") after the document ready line. That should run on startup, and the other msg should run when you click. Please confirm that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726008">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726008">8</a> by SuperAlly
		posted on 9/1/2010 at 6:54 PM
		</div>
		<div class="comment_text"><p>Looks like there is an error:<br>TypeError: Result of expression '_650.getSelectedFileArray' [undefined] is not a function. ... cffileupload_swf.js:245<br>Didn't see this before, but it doesn't mean much to me unfortunately.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726011">9</a> by Raymond Camden
		posted on 9/1/2010 at 6:59 PM
		</div>
		<div class="comment_text"><p>So if you do a console.log before and after  ColdFusion.FileUpload.getSelectedFiles('myfiles')</p><p>you can see it breaks right there, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726013">10</a> by SuperAlly
		posted on 9/1/2010 at 7:04 PM
		</div>
		<div class="comment_text"><p>That is correct, yes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726005">11</a> by Raymond Camden
		posted on 9/1/2010 at 7:06 PM
		</div>
		<div class="comment_text"><p>Hmm. Unfortunately that's Adobe shipped code, I can't help with that. It is odd that I don't get it with my Safari though. Is your code online where I can hit it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726009">12</a> by SuperAlly
		posted on 9/1/2010 at 7:20 PM
		</div>
		<div class="comment_text"><p>I don't have a copy anywhere online right now, no.<br>It's just a word for word copy of your demo right now though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726017">13</a> by Raymond Camden
		posted on 9/1/2010 at 7:22 PM
		</div>
		<div class="comment_text"><p>The reason I want to see is that maybe something on your server is wrong. If you use FIrebug, or Google net tools, or Safar's, but I'm not sure where - maybe you see a JS library not being loaded right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726019">14</a> by SuperAlly
		posted on 9/2/2010 at 1:10 AM
		</div>
		<div class="comment_text"><p>Sorry to pester you again with this, but I was able to get an example online, with the console commands added.<br>Doesn't work in Safari, Chrome or Firefox at this url. <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfdevshack.com%2Ftest%2Ftest.cfm%3AyiylOFaxiAjcG80aK_mGzjv06Aw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfdevshack.com/test/test.cfm">http://www.cfdevshack.com/t...</a> <br>Works locally as is.  Debugging is not turned on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726018">15</a> by Daren Valentine
		posted on 9/2/2010 at 1:52 AM
		</div>
		<div class="comment_text"><p>I know this sounds crazy, but I can't get a basic cffileupload to display.  Accessing the page from the server while inside the firewall and everything is beautiful.  Using the same version of Firefox from outside the firewall, and the area where the control should be is blank.  The source code view shows the exact same code.</p><p>any thoughts???</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726020">16</a> by Raymond Camden
		posted on 9/2/2010 at 1:59 AM
		</div>
		<div class="comment_text"><p>Something on your network is blocking /CFIDE files. Check there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726021">17</a> by Raymond Camden
		posted on 9/2/2010 at 2:01 AM
		</div>
		<div class="comment_text"><p>@Daren: Are you using 901? This API is 901 only I believe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726022">18</a> by SuperAlly
		posted on 9/2/2010 at 2:17 AM
		</div>
		<div class="comment_text"><p>901 would likely explain my issue.  I will have to check the live version.<br>I know the standard cffileupload works in it's place but If this version only works under 901 though, that is probably the cause of my problem.  Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726023">19</a> by Daren Valentine
		posted on 9/2/2010 at 3:02 AM
		</div>
		<div class="comment_text"><p>Will check the firewall to see what is going on!  Works internal and in from the DMZ, just not from external.  BTW tried to load the 9.0.1 update and it crashed my installation last week.  Had to recover from an virtual server image.</p></div>
	</div>
</div>
		