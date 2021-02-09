
<div class="comment" id="c_1713685112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685112">1</a> by Andy Sandefer
		posted on 8/18/2008 at 7:30 PM
		</div>
		<div class="comment_text"><p>@Ray<br>I know that this question was probably not the point of your example and that you were trying to do this in a simple fashion so that everyone would understand - so please excuse me - but it is an important question to me.  If you had set a callback handler then the result returned from the cfc would've actually been sent to the callback function right - and not sent back to getData()?  I only point this out because I've really been making an effort of late to set error and callback handlers on all things proxy and to never write a query without a cfqueryparam ever again.  All that being said, I've had really odd things happen when I call a js function from a form button and I need to perform custom error checking and other stuff before the submit gets called.  This usually happens when I chain function calls meant to perform a series of validation checks and or database lookups before I actually call ColdFusion.Ajax.submitForm.</p><p>Thanks in advance for any insight.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685108">2</a> by Raymond Camden
		posted on 8/18/2008 at 7:45 PM
		</div>
		<div class="comment_text"><p>Yes. The way my code is written now it is synchronous. I believe it HAS to be, since the grid demands an immediate respond to the bind.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685109">3</a> by Steve
		posted on 3/14/2009 at 2:23 AM
		</div>
		<div class="comment_text"><p>Ray:</p><p>Thanks for the nice cfajaxproxy example.</p><p>I realize your example has been on the web for quite a while but ...</p><p>The way you used two lines in your javascript function with a separate 'return result; line got me thinking.</p><p>Would the javascript function be able to access the query result and say, massage some of the column data before passing along to the grid?</p><p>Thanks,</p><p>Steve</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685110">4</a> by Raymond Camden
		posted on 3/14/2009 at 2:27 AM
		</div>
		<div class="comment_text"><p>I believe so, yes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685111">5</a> by Jeffrey Cookle
		posted on 8/27/2010 at 7:40 PM
		</div>
		<div class="comment_text"><p>This saved our project.  We had been running into memory issues with the CFGrid(html format) and errors with the URI being too large.   This method appears to decrease the amount of memory issues and allowed us to change to post.    I had two open Cases with Adobe on this.   They still need to fix the bind to a cfc memory issue, but helps us out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685113">6</a> by Erol Layiktez
		posted on 10/8/2013 at 8:41 PM
		</div>
		<div class="comment_text"><p>Hello Raymond,<br>I recently upgraded from CF8 to CF10 and having problems with the cfgrid to load. The grid actually loads but the refresh keeps spinning and no data comes. There is a cfc: bind and I can see that the ajax call returns back data but the data is not being displayed in the grid somehow. This was perfectly working in CF8.<br>Here is the code:<br>the cfc:<br>[EDITED]</p><p>the ajax returns data like this:</p><p>c64 a7a {"QUERY" [EDITED]</p><p>'the only difference I see is : "c64 a7a" in teh beginning CF8 was not returning those but can not figure out where they are coming from...</p><p>any ideas?<br>Thank you much!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685114">7</a> by Raymond Camden
		posted on 10/8/2013 at 9:42 PM
		</div>
		<div class="comment_text"><p>@Erol: In the future, please do not post code to the blog. I edited your comment to strip out most of the code.</p><p>It looks like your server has "Secure JSON Prefix" enabled. Can you check that in the CF Admin?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685116">8</a> by Erol Layiktez
		posted on 10/8/2013 at 10:18 PM
		</div>
		<div class="comment_text"><p>Raymond,<br>Thank you  so much for your reply. Sure and I apologize that I did no see your warning before posting.<br>I checked under settings and "Prefix serialized JSON with \\" was not checked. I added &lt;cfset this.secureJSON = "false"&gt;  to my application.cfc but I still have the same problem after restarting the application with that setting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685117">9</a> by Raymond Camden
		posted on 10/8/2013 at 10:20 PM
		</div>
		<div class="comment_text"><p>Hmm, not sure then. Is it online where I can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685118">10</a> by Erol Layiktez
		posted on 10/9/2013 at 12:42 AM
		</div>
		<div class="comment_text"><p>Unfortunaltely, it is secure and firewalled. I will keep looking into it, I last tried this:<br><a href="http://disq.us/url?url=http%3A%2F%2Fblogs.coldfusion.com%2Fpost.cfm%2Fjson-backward-compatibility-flag-to-enable-cf8-behavior%3ApXd4zgX0rxy1of4G6wOGS1aqpBQ&amp;cuid=3321886" rel="nofollow noopener" title="http://blogs.coldfusion.com/post.cfm/json-backward-compatibility-flag-to-enable-cf8-behavior">http://blogs.coldfusion.com...</a><br>and added  -Djson.numberasdouble=true. to jvm.config but that did not do the trick. If I get the data directly through a query with no binding and ajax then the grid works.<br>I will post if I figure it out.<br>Thank you much Raymond!</p></div>
	</div>
</div>
		