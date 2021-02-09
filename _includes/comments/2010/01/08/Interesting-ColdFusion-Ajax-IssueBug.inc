
<div class="comment" id="c_1713721063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721063">1</a> by Scott Stroz
		posted on 1/8/2010 at 8:51 PM
		</div>
		<div class="comment_text"><p>It does not make sense that the lack of the HTTP header for the request would affect how the browser handles the response.</p><p>Is it possible that some of the built in CF AJAX stuff is somehow mucking with the response?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721066">2</a> by Raymond Camden
		posted on 1/8/2010 at 9:07 PM
		</div>
		<div class="comment_text"><p>I can't imagine why though. Adobe would have to go out of their way to break this (as far as I know).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721067">3</a> by Andy Sandefer
		posted on 1/8/2010 at 9:08 PM
		</div>
		<div class="comment_text"><p>For what it's worth I have abandoned cfdiv in favor of using the div/load combo setup with jQuery.  In limited testing, using jQuery's load is way faster and in my opinion, cleaner than my old fav (navigate).</p><p>I'm working on a blog post that combines a fairly complex shipping app that uses a multi-pannel layout (using nested cflayout tags) but changes and updates content using jQuery load rather than navigate.  The difference in speed and code simplicity with the jQuery version is notable.  All of my CF apps pretty much make use of cfgrid, cfajaxproxy and a couple of other nice to have CF AJAX features - the rest is all jQuery.</p><p>After working with CF's AJAX framework for the last two years I was initially very biased towards doing anything that was not contained within the application server out of the box.  However, I'm come to believe that jQuery is different - it's well documented and maintained and it doesn't seem to be losing steam or getting stale like lots of other AJAX frameworks that have already bit the dust.  (EXT is pretty cool to but certain things are made harder than they need to be)</p><p>Why did I resist jQuery for so long?  Perhaps I'm dumber than I had originally thought!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721071">4</a> by Scott Stroz
		posted on 1/8/2010 at 9:11 PM
		</div>
		<div class="comment_text"><p>@Ray - maybe there is some built-in event handler for CF AJAX requests that we do not see on the surface?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721068">5</a> by Andy Sandefer
		posted on 1/8/2010 at 9:18 PM
		</div>
		<div class="comment_text"><p>@Scott,<br>Why not use navigate's optional callback/error handler arguments with custom JavaScript functions to root out the problem? (I've had success doing this in the past)...<br>ColdFusion.navigate(URL [, container, callbackhandler, errorhandler, httpMethod, formId])</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721072">6</a> by Scott Stroz
		posted on 1/8/2010 at 10:36 PM
		</div>
		<div class="comment_text"><p>@Andy - My guess would be that if there is a built-in event handler (which there almost has to be, how else would the results of navigate() be populated into a div?), it would get called prior to any custom callbacks, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721070">7</a> by Brian H.
		posted on 1/9/2010 at 3:58 AM
		</div>
		<div class="comment_text"><p>Hey Ray. What'cha got against Firefox?!</p><p>-Brian</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721077">8</a> by Raymond Camden
		posted on 1/9/2010 at 4:14 AM
		</div>
		<div class="comment_text"><p>It's not Chrome. ;) Seriously though - Chrome is just zippier for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721080">9</a> by Andrea Veggiani
		posted on 1/10/2010 at 10:27 PM
		</div>
		<div class="comment_text"><p>Have you tried using ajaxonload on test2a.cfm?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721079">10</a> by Raymond Camden
		posted on 1/11/2010 at 12:41 AM
		</div>
		<div class="comment_text"><p>Why? That really isn't relevant to the problem here - unless I'm missing something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721082">11</a> by Andrea Veggiani
		posted on 1/11/2010 at 8:45 PM
		</div>
		<div class="comment_text"><p>Sorry, i've read quickly (and badly at this point) the post and it seemed only a problem about executing javascript in a page loaded by Coldfusion using XHR thus i suggested the use of ajaxonload instead of the $(document).ready.</p><p>I</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721091">12</a> by DanaK
		posted on 1/12/2010 at 9:28 PM
		</div>
		<div class="comment_text"><p>I ended up abandoning cfdiv awhile back and switching to a jquery div like andy said. I ran into all kinds of weird behaviors off and on mixing cfdiv and jquery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721090">13</a> by Andy Sandefer
		posted on 1/12/2010 at 10:23 PM
		</div>
		<div class="comment_text"><p>@DanaK<br>jQuery reminds me of Nuprin...<br>Little, Yellow, Different, Better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721093">14</a> by Andy Sandefer
		posted on 1/18/2010 at 11:20 PM
		</div>
		<div class="comment_text"><p>I know that this was a week or so ago but it happened to me again using cflayout, load and jQuery.  After much work it seems that the simplest solution is always the best...</p><p>Put this function into the Parent page (the one with the cflayout container)...<br>	toggleCustomerFilters = function(filterVal){<br>		var selected = filterVal;<br>		$("input[type=checkbox]").each(function(){<br>			if (<a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a> != 'toggleFilters'){<br>				this.checked = filterVal;<br>			}			<br>			//console.log(<a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a>);<br>		});	<br>	}</p><p>Then just add this to the loaded page...</p><p>&lt;input type="checkbox" name="toggleFilters" onclick="toggleCustomerFilters(this.checked)" checked="checked"/&gt; Select All</p><p>The only thing different up above was that I used a pseudo class on the checkboxes rather than the named checked (which is what Ray's guy was doing).  This probably had no outcome but who knows.  Another thing is the sparsely documented shortcoming that I've come to rely upon as much as windows users rely upon Ctrl+Alt+Delete...<br>If your ColdFusion code is not playing nice and you are using ANY sort of AJAX on the page then structure your function as...<br>myFunctionName = function()<br>rather than<br>function = myFunctionName()</p><p>And yes, it is not slick and I'm ready to be smote for not doing it the one true way, but it works and even your little sister and Wesley Crusher the acting Enterprise Steerer Around Guy can understand it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721095">15</a> by Keith R
		posted on 5/5/2010 at 7:38 PM
		</div>
		<div class="comment_text"><p>I know this is an old post but I wanted to throw in my thoughts.  I'm really new to jQ so I may be way off.</p><p>In my experience here is what is going on with the ColdFusion.navigate.  When using ColdFusion.navigate to load the contents into the container, the DOM is already ready.  Thus the  $(document).ready() in test2a.cfm will fire immediately as the script is loaded into the container.  $("#content") will not exist at that point therefore failing to add the listener to the element.  This also explains why changing to live fixes it.  Live "monitors" the DOM for changes then adds the listener once it is there.</p><p>The solution I have used is the ajaxonload().  Use a regular named function in place of $(document).ready() and then put a &lt;cfset AjaxOnLoad(functionName)&gt;.  I have also used &lt;cfset AjaxOnLoad(function(){foo(1,2,3);bar(4,5,6);})&gt; when I wanted to include parameters with the ajaxonload or do more than one thing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721096">16</a> by Dan Schweitzer
		posted on 1/27/2013 at 9:28 AM
		</div>
		<div class="comment_text"><p>I am experiencing an issue with cfdiv that seems to be related to this issue. I am trying to get tablesorter (<a href="http://disq.us/url?url=http%3A%2F%2Ftablesorter.com%2Fdocs%2F%29%3Aw-qwB1FPAaPevClQTiAUuhpSaZw&amp;cuid=3321886" rel="nofollow noopener" title="http://tablesorter.com/docs/)">http://tablesorter.com/docs/)</a> to work within a cfdiv. I can get it to work when not in cfdiv. I can get jQuery to alert though, so jQuery is working. I think this is related to the (document).ready or onajaxload. Any help would be much appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721097">17</a> by Raymond Camden
		posted on 1/27/2013 at 6:12 PM
		</div>
		<div class="comment_text"><p>Easiest recommendation is to stop using cfdiv. If you are already using jQuery, you don't need it. To mimic cfdiv's "load a url into this div", you can simply do this in jQuery:</p><p>$("#someid for a div").get("theurl.cfm", {}, function(res) {<br>//optional call back handler;<br>});</p></div>
	</div>
</div>
		