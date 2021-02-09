
<div class="comment" id="c_1713681666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681666">1</a> by Michael White
		posted on 6/11/2008 at 12:45 AM
		</div>
		<div class="comment_text"><p>was your output on the cfc set to no?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681663">2</a> by Raymond Camden
		posted on 6/11/2008 at 12:47 AM
		</div>
		<div class="comment_text"><p>Yep. To be clear, the output from the CFC did show up. I just didn't have the nice loading msg while it waited.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681665">3</a> by Todd Rafferty
		posted on 6/11/2008 at 2:32 AM
		</div>
		<div class="comment_text"><p>If I had to guess.  bind="cfc:" is probably using ajaxproxy and is going straight to the cfc, where-as the bind="url:" is probably using a javascript http call and is actually waiting for a response?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681664">4</a> by Raymond Camden
		posted on 6/11/2008 at 5:09 AM
		</div>
		<div class="comment_text"><p>Well, even when using ajaxproxy, it is still HTTP calls. It has to be. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681667">5</a> by Hammo
		posted on 11/6/2008 at 7:04 PM
		</div>
		<div class="comment_text"><p>Did you ever learn more about this Ray?  I like the loading graphic and would like it to appear when I bind to a CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681670">6</a> by Raymond Camden
		posted on 11/6/2008 at 7:22 PM
		</div>
		<div class="comment_text"><p>Nope, sorry. We ended up switching to jQuery anyway. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681669">7</a> by Brian O.
		posted on 12/24/2008 at 2:56 AM
		</div>
		<div class="comment_text"><p>I've struggled with the loading icon bug related to cfgrid for awhile and have submitted a bug to Adobe as well as posted on the Adobe Forums without any success and little response. Not sure if this might help your thoughts, but in trying to get the icon to work on the cfgrid I used the sample that Adobe provides with CF and have stripped it down here, but the issue seems to be with the CSS. The div-based example below works, but when I try to get it to work with a cfgrid, no go.</p><p>----------------</p><p>&lt;!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fhtml4%2Fstrict.dtd%3ABTibGk-Jeuo7vXMEg1gtZWbHPIE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/html4/strict.dtd">http://www.w3.org/TR/html4/...</a>"&gt;<br>&lt;html&gt;<br>&lt;head&gt;<br>&lt;meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1"&gt;<br>&lt;title&gt;Paging Grid Example&lt;/title&gt;</p><p>&lt;link rel="stylesheet" type="text/css" href="file:///C|/ColdFusion8/wwwroot/CFIDE/scripts/ajax/ext/resources/css/ext-all.css" /&gt;<br>&lt;script type="text/javascript" src="file:///C|/ColdFusion8/wwwroot/CFIDE/scripts/ajax/ext/adapter/ext/ext-base.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="file:///C|/ColdFusion8/wwwroot/CFIDE/scripts/ajax/ext/ext-all.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="file:///C|/ColdFusion8/wwwroot/CFIDE/scripts/ajax/ext/examples/grid/paging.js"&gt;&lt;/script&gt;<br>&lt;/head&gt;<br>&lt;body&gt;<br>&lt;div id="topic-grid" style="border:1px solid #99bbe8;overflow: hidden; width: 665px; height: 300px;position:relative;left:0;top:0;"&gt;&lt;/div&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681668">8</a> by abhijit
		posted on 9/15/2009 at 9:43 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>  Just I want ot know like in what using js we generally load the dynamic content on ajax call in side a div id.Basically we pass div ids and urls in the javascript function and then load the contents.</p><p>Is there any way we can do it through cf8 ajax features,so afr as i have seen is cf8 only gives the ajax control.</p></div>
	</div>
</div>
		