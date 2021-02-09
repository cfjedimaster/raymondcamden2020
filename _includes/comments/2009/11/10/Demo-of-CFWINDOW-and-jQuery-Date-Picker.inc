
<div class="comment" id="c_1713719562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719562">1</a> by Steve &amp;aposCutter&amp;apos Blades
		posted on 11/10/2009 at 7:29 PM
		</div>
		<div class="comment_text"><p>This is untested, but you may also be able to attach an event listener to the window's 'update' event, which is triggered after it is loaded/reloaded with remote content:</p><p>function showDateWindow() {<br>    ColdFusion.Window.create('dateWin','Title', '/test5.cfm',{x:100,y:100,height:300,width:350,modal:true,closable:false, draggable:true,resizable:false,center:true,initshow:false,refreshOnShow:true});<br>    ColdFusion.Window.onShow('dateWin',doShow);<br>    ColdFusion.Window.getWindowObject('dateWin').getUpdater().on('update',function(){// now set the datepicker});<br>    <a href="http://disq.us/url?url=http%3A%2F%2FColdFusion.Window.show%3Aut5RVMiY3vZkqHf_0Bd7-NzWCNM&amp;cuid=3321886" rel="nofollow noopener" title="ColdFusion.Window.show">ColdFusion.Window.show</a>('dateWin');<br>}</p><p>Something like that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719564">2</a> by Andy Sandefer
		posted on 11/10/2009 at 11:43 PM
		</div>
		<div class="comment_text"><p>I hate to be the voice of reason and the dullard who still likes tags over about everything but what is wrong with using ColdFusion's datefield?  Is there some reason that we don't know about as to why it couldn't be used in this form?  Not trying to criticize but that would be the simplest solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719568">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719568">3</a> by Raymond Camden
		posted on 11/10/2009 at 11:47 PM
		</div>
		<div class="comment_text"><p>The heathen has profaned against the One True Way. The heathen shall be smited!</p><p>This is what I typically tell people. The built in Ajax UI controls in CF are VERY nice. If you want to do _more_ with them, and are an experienced Ajax developer, I think it makes more sense to roll your own - simply to ensure you have the control necessary over the final result. CF goes a long way to giving you hooks to stuff (see Cutter's use of getWindowObject), but at the end of the day, I'd rather do it myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719569">4</a> by John Sieber
		posted on 11/11/2009 at 12:05 AM
		</div>
		<div class="comment_text"><p>Using the datefield option requires the form type to be flash, correct? That is one reason I can think of to use JQuery UI over the datefield especially when developing for possible use on Railo or Blue Dragon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719571">5</a> by Jon Hartmann
		posted on 11/11/2009 at 12:14 AM
		</div>
		<div class="comment_text"><p>Yeah, the built in datefield uses flash, and it also looks really out of place compared a modern JS date picker. I was very sad when I saw that despite using ExtJS for layouts and things like that, CF was still using the old flash date picker...</p><p>BTW, my current LylaCaptch phrase is a word that would probably be filtered out if I put it in the comment :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719567">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719567">6</a> by Chuck Savage
		posted on 11/11/2009 at 12:59 AM
		</div>
		<div class="comment_text"><p>I tried to run this as is and get an error in IE, fireFox gives no error but neither will display the window when button is clicked on.</p><p>See it here (and its code): <a href="http://disq.us/url?url=http%3A%2F%2Fsearisen.com%2Ftest%2FtestCFWindow.cfm%3AITyKRZPqZX1X-H-lGd7OBLFkrMs&amp;cuid=3321886" rel="nofollow noopener" title="http://searisen.com/test/testCFWindow.cfm">http://searisen.com/test/te...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719572">7</a> by Raymond Camden
		posted on 11/11/2009 at 1:27 AM
		</div>
		<div class="comment_text"><p>@John: No. It CAN use Flash, but there is an Ajax/HTML version as well.</p><p>@Jon: Your wrong - kinda. ;) You can do Flash based datefields, but since CF8 we have had a pure Ext/JS one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719573">8</a> by Raymond Camden
		posted on 11/11/2009 at 1:28 AM
		</div>
		<div class="comment_text"><p>@Chuck: When I view source on your page I see nothing. Are you sure you used the code exactly as I had it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719570">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719570">9</a> by Andy Sandefer
		posted on 11/11/2009 at 1:51 AM
		</div>
		<div class="comment_text"><p>@Ray<br>You've pretty much gone from trusted adviser status to MCP.  I'm also convinced that if Adobe included a control called cfTurd and then a year later the people at jQuery came up with one called jTurd you would recommend jTurd over cfTurd hands down.  Your next tat should depict SARK and the MCP standing over a defenseless CFBot beating it with a virtual jHammer.</p><p>And by the way, I'm just kidding, I'm really starting to dig jQuery.  However, I've noticed that a lot of people are quick to pull out the nuke when a simple pistol will do the job.  If the reader was so damn intent on using the jQuery datepicker then he should've made his form in a jQuery dialog window instead of using cfwindow.  Anyway, this has kept me from falling asleep at my desk as well as allowed me to work TRON references into your blog's search engine forever; and for that - I'm grateful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719575">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719575">10</a> by Raymond Camden
		posted on 11/11/2009 at 1:55 AM
		</div>
		<div class="comment_text"><p>That is easily one of the best comments I've seen on my blog - and for the record - the MCP was the best computer villain ever. That stupid "Architect" in the Matrix was a wuss.</p><p>So to be clear - I have - and have said publicly - a HUGE amount of respect for the Ajax UI components in CF8+. I think they are wonderful. But at the same time I think they are meant more for people who are new, or not familiar with, Ajax frameworks. (And I speak specifically about the UI stuff. The plumbing stuff is great for all use cases.)</p><p>That being said, Andy, I think you make a great point. I'm not sure I'd advocate the "mix" that the developer did here. I'd either go CFAjaxUI all the way or jQuery all the way.</p><p>Personally I feel like I'm still a newbie Ajax developer. I've only been doing it for about 2.5 years now and it still feels very fresh to me. That's my way of saying I may totally disagree with this comment next year. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719589">11</a> by Andy Sandefer
		posted on 11/11/2009 at 1:57 AM
		</div>
		<div class="comment_text"><p>Aww shucks, that's a decent point.  I guess I'll get up and remove the darts from your photo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719592">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719592">12</a> by Chuck Savage
		posted on 11/11/2009 at 2:29 AM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>My site was down for apparently for a bit, not sure why HMS had it down as it checked into a problem I was having with a tag I was using to display the code.  It's up now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719591">13</a> by Raymond Camden
		posted on 11/11/2009 at 3:39 AM
		</div>
		<div class="comment_text"><p>@Chuck: If you look at your error console, you see:</p><p>Error: $("#dob").datepicker is not a function<br>Source File: <a href="http://disq.us/url?url=http%3A%2F%2Fsearisen.com%2Ftest%2FtestCFWindow.cfm%3AITyKRZPqZX1X-H-lGd7OBLFkrMs&amp;cuid=3321886" rel="nofollow noopener" title="http://searisen.com/test/testCFWindow.cfm">http://searisen.com/test/te...</a><br>Line: 50</p><p>Which means datepicker may not exist in your copy of jquery ui. Remember that you can customize the download. You may want to reget the JS and ensure you get the complete package.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719590">14</a> by Raymond Camden
		posted on 11/11/2009 at 3:41 AM
		</div>
		<div class="comment_text"><p>Woah - no - your link to jqueryui isn't valid. You either used the wrong url or didn't download the file at all. :) FYI, Firebug showed me this in two seconds - just use the Net tab, All.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719595">15</a> by Josh Knutson
		posted on 11/11/2009 at 5:00 AM
		</div>
		<div class="comment_text"><p>In a few projects we tried going with the built in datepicker that uses the yui library but it has issues with hiding under form fields in IE so we ended up switching it out with a jQuery one or a home built one. And there was issues with having the datepicker initializing correctly in modal windows in IE</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719593">16</a> by Pritesh
		posted on 11/11/2009 at 9:59 AM
		</div>
		<div class="comment_text"><p>I don't know this one is good option or not but I am generally using this method in such case.<br> function showDateWindow() {<br>      ColdFusion.Window.create('dateWin','Title', 'test5.cfm');<br>      ColdFusion.navigate("test5.cfm",'dateWin',winLoaded);<br>  }<br>I am using ColdFusion.navigate method which allow us to configure callbackhandler function which will automatically call when test5.cfm is loaded in cfwindow and it doesn't require any ajaxonload function call on test5.cfm page. This will useful when test5.cfm is called from different pages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719597">17</a> by Jon Hartmann
		posted on 11/12/2009 at 12:13 AM
		</div>
		<div class="comment_text"><p>@Ray: Really? I could swear that the last time I tried to do a &lt;cfform/&gt; for HTML with a date field, it still came up as a flash based date picker. I guess I'll have to look at that one again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719596">18</a> by Raymond Camden
		posted on 11/12/2009 at 12:38 AM
		</div>
		<div class="comment_text"><p>Make sure you specify format=html in the form tag. Or type=html. Whatever - you get the idea. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719598">19</a> by Jody Fitzpatrick
		posted on 11/12/2009 at 6:11 AM
		</div>
		<div class="comment_text"><p>I have a question</p><p>I have a feature on my site that loads a Youtube video VIA CFWINDOW. The only problem that I am facing is the video continues to play even thou the window is closed. Is there anyway to clear the CFWINDOW once the window is closed?</p><p>Thanks a million</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719643">20</a> by Raymond Camden
		posted on 11/12/2009 at 6:16 AM
		</div>
		<div class="comment_text"><p>You may want to use ColdFusion.Window.destroy. This function is documented in the 801 release notes PDF, but unfortunately missing from the CF9 reference manual.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719644">21</a> by nikitul
		posted on 10/17/2011 at 5:31 PM
		</div>
		<div class="comment_text"><p>Thank's Raymond for this tip. <br>For me (in CF9) it worked only if I used <br>div.ui-datepicker {<br>	z-index: 9999 !important;<br>	font-size:10px;<br>}<br>But there's still a problem and I can't figured out how to deal with it. In IE 9, if I use datepicker like this:<br>	$("#innerdob").datepicker({ <br>		dateFormat: 'dd/mm/yy' <br>		, changeMonth: true<br>		, changeYear: true<br>		, yearRange: '1950:2012'<br>		, minDate: new Date(1950, 01, 01)<br>		, maxDate: new Date(2012, 12, 31)<br>	});<br>the changeMonth and changeYear does not appear. Is there a way to make this fixed?<br>Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719646">22</a> by Raymond Camden
		posted on 10/17/2011 at 6:38 PM
		</div>
		<div class="comment_text"><p>Best thing I can recommend is filing a bug report on it. Since IE9 wasn't out when CF9 came out, it probably wasn't tested.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719647">23</a> by nhoel
		posted on 11/18/2013 at 12:24 PM
		</div>
		<div class="comment_text"><p>hi, a demo page might be too much to ask but can you please at least include a downloadable working templates?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719645">24</a> by Raymond Camden
		posted on 11/19/2013 at 1:39 AM
		</div>
		<div class="comment_text"><p>I don't know where the original source files are - this post is now four years old - but if you use "View Plain" you can copy and paste.</p></div>
	</div>
</div>
		