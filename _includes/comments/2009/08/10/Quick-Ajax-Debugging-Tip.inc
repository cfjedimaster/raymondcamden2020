
<div class="comment" id="c_1713717614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717614">1</a> by Sean Coyne
		posted on 8/11/2009 at 12:23 AM
		</div>
		<div class="comment_text"><p>What I have done is onRequestStart delete the onError method if its an ajax request.  This way if an error is thrown you can use your javascript error handlers.  If onError catches the error, your JavaScript doesnt see it as an error.  It sees it as success and the data returned is your output from your error handler.  So if you are using cfajaxproxy and an errorHandler callback it will never fire.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717627">2</a> by Gerald Guido
		posted on 8/11/2009 at 12:44 AM
		</div>
		<div class="comment_text"><p>Another way to do it is right click on the URL in FB and select "open in new tab".</p><p>Huh... now that I look FB has a tab called HTML next to the Response tab that renders the HTML....</p><p>Very cool.  Firebug V 1.42  BTW. It must be a recent update because I have never seen it before.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717623">3</a> by Raymond Camden
		posted on 8/11/2009 at 12:47 AM
		</div>
		<div class="comment_text"><p>Yep, I've seen that, but it seems to only work with certain content types in the response.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717625">4</a> by Will B.
		posted on 8/11/2009 at 1:36 AM
		</div>
		<div class="comment_text"><p>Another couple thoughts.<br>1.  My Firebug has a JSON tab in the little tabs that go with the Net request area.  Can't beat that!  Looks like a CF dump of a struct.  (I also return the exact same structure all the time:  success (boolean), message (string) and data (depends on what's going on, like a record set).  Assuming your return is JSON, I guess Firebug detects that.<br>2.  If you *happen* to be using jQuery's ajax calls (can't imagine living w/o them), there is a header on the Coldfusion side that will contain something like:<br>   headers['X-Requested-With'] eq 'XMLHttpRequest'<br>(I use Coldbox, so I have that in one of my interceptors, that then sets rc.isAjax = true, which is then available throughout my request.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717620">5</a> by Raymond Camden
		posted on 8/11/2009 at 1:38 AM
		</div>
		<div class="comment_text"><p>@WillB: Yep, I mentioned x-requested-with in the linked too article - and it's not just jQuery. Other frameworks do it too - which is kind of nice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717622">6</a> by Andrew Scott
		posted on 8/11/2009 at 2:18 AM
		</div>
		<div class="comment_text"><p>It should also be noted that this would be a great example on when to use line debugging, setting a break point would actually help locate the offending code as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717621">7</a> by Raymond Camden
		posted on 8/11/2009 at 2:27 AM
		</div>
		<div class="comment_text"><p>@Andrew - true - but in most cases, this mod would show me the error right away and remove the need to add a break point. ;) Again - this was meant as a 'quicky' debug, not a deep debug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717624">8</a> by Andrew Scott
		posted on 8/11/2009 at 4:39 AM
		</div>
		<div class="comment_text"><p>@Ray - True, just wanted to let others know that there is another option. And now that CFBuilder is out in the wild, they might like to experiment with that option as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717626">9</a> by Raymond Camden
		posted on 8/11/2009 at 5:01 AM
		</div>
		<div class="comment_text"><p>Yeah, and you know what - not enough people make use of the Debugger. I don't for sure. Thanks for bringing it up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717628">10</a> by Gary Fenton
		posted on 8/11/2009 at 6:06 AM
		</div>
		<div class="comment_text"><p>In Firebug 1.4.2, from the Net tab you can right-click on the ajax called URL and select "open response in new tab". This opens a *cached* and html rendered page showing the CFML generated error message, cfdumps, etc.</p><p>You can't refresh that tab after fixing the error because it's just a cached copy of the response from the server. Firebug just gets better and better!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717630">11</a> by Pritesh
		posted on 10/10/2009 at 7:55 AM
		</div>
		<div class="comment_text"><p>Generally what I am doing is right click on URL and open in new tab and it works for me. In case I have as post variable then right click on URL in FB and "Copy URL with parameters" and paste it into URL but in this case in target page I generally append URL variables to POST using structAppend(form,URL,true) at top of the page.</p></div>
	</div>
</div>
		