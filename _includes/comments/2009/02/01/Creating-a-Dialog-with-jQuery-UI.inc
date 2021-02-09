
<div class="comment" id="c_1713711859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711859">1</a> by Raymond Camden
		posted on 2/2/2009 at 2:56 AM
		</div>
		<div class="comment_text"><p>Forgive me posting a comment to my own blog post. You may notice that if you close one of the dialogs, it won't reopen. That's a bug in how I used the dialog. I've got a fix for that, but figure it should be it's own blog entry instead. So I'll do a follow up later tonight. (Depending on how much fun I have during the Superbowl, 'later tonight' might be tomorrow morning.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711860">2</a> by Scott Jehl
		posted on 2/2/2009 at 2:59 AM
		</div>
		<div class="comment_text"><p>Thanks Ray. Glad to hear 1.6 made it easier. <br>We'll get this all documented and tutorialized on the UI site once 1.6 final is released.</p><p>Also, there are a bunch of resources available that can help minimize confusion for those getting started with jQuery UI. Check the articles, blogs and feeds listed on the UI site's support page: <a href="http://disq.us/url?url=http%3A%2F%2Fjqueryui.com%2Fsupport%3AAEvuUrksialJhO4qVeWhEaF-tMU&amp;cuid=3321886" rel="nofollow noopener" title="http://jqueryui.com/support">http://jqueryui.com/support</a></p><p>Cheers!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711857">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711857">3</a> by Raymond Camden
		posted on 2/2/2009 at 2:59 AM
		</div>
		<div class="comment_text"><p>For folks who want to see a fix (in regards to my last comment), please see: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fjqueryuitest2%2Ftest4.html%3A9BDNutFhqj9R3DwXDNgRYUcC0MA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/jqueryuitest2/test4.html">http://www.coldfusionjedi.c...</a></p><p>You will also see the theme: Swanky Purse, a name I just absolutely love. Anyway, view source to see what I changed, and I promise a follow up post later.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711856">4</a> by Akira
		posted on 2/2/2009 at 7:13 PM
		</div>
		<div class="comment_text"><p>I've got a fix for the dialog not reopening too. The thing I've noticed is that it is being closed and not destroyed. I had to change the close to an actual remove:</p><p>close: function(ev, ui) {<br>  $(this).remove();<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711858">5</a> by Joel Cox
		posted on 2/2/2009 at 7:46 PM
		</div>
		<div class="comment_text"><p>It's possible to bind the javascript event to the anchor tag directly with jQuery and reduce this to a single function call:</p><p>&lt;script&gt;</p><p>$(document).ready(function() {<br>	$("#example").dialog({autoOpen:false});	<br>	$("#opener").click(function(event){<br>		event.preventDefault();<br>		$("#example").dialog("open");<br>	});	<br>});</p><p>&lt;/script&gt;<br>&lt;/head&gt;<br>&lt;body&gt;<br>&lt;p&gt; &lt;a href="javascript:;" id="opener"&gt;Show the Dialog&lt;/a&gt; &lt;/p&gt;<br>&lt;div style="display: none;" id="example" title="This is my title"&gt;I'm in a dialog!&lt;/div&gt;</p><p>I had some issues with IE6 (Windows) not functioning correctly when binding to an anchor tag without adding the event.preventDefault() function call.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711862">6</a> by Raymond Camden
		posted on 2/2/2009 at 7:48 PM
		</div>
		<div class="comment_text"><p>Interesting, I'd like you guys to compare this to my solution - but can we wait till I post it? (Soon I promise.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711863">7</a> by Ralph Whitbeck
		posted on 2/2/2009 at 9:21 PM
		</div>
		<div class="comment_text"><p>the jQuery team is the best for being approachable and willing to help other users out that have problems.  I haven't seen another project that has had willing support people help out in a pinch.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711861">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711861">8</a> by Rey Bango
		posted on 2/2/2009 at 9:26 PM
		</div>
		<div class="comment_text"><p>@Ray: Glad to see you got it working well. 1.6rc6 is really solid</p><p>@Ralph: Thank you for the kind words. The jQuery &amp; jQuery UI teams are all about community. We're glad to help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711865">9</a> by Seth
		posted on 2/2/2009 at 9:42 PM
		</div>
		<div class="comment_text"><p>There are additional options within the dialog() function. The autoOpen: 'false' will make the dialog not appear on load. IMO, it is better to utilize the functions options, than use the CSS to do the work that the function does on it's own.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711866">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711866">10</a> by Raymond Camden
		posted on 2/2/2009 at 9:56 PM
		</div>
		<div class="comment_text"><p>@Seth: Seth, I covered this in the blog entry I wrote this morning: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2009%2F2%2F2%2FCreating-a-Dialog-with-jQuery-UI-2%3AnaKIKzPorjhCuQxUhM6--gBNR0U&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2009/2/2/Creating-a-Dialog-with-jQuery-UI-2">http://www.coldfusionjedi.c...</a></p><p>Well, I didn't cover _all_ the options, but you get the idea. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711867">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711867">11</a> by Susan
		posted on 3/26/2009 at 11:49 AM
		</div>
		<div class="comment_text"><p>It's very helpful..Thanks a lot ^^</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711869">12</a> by Jerry
		posted on 4/22/2009 at 2:33 PM
		</div>
		<div class="comment_text"><p>Is it possible to pass the value of a link to jQuery dialog window.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711870">13</a> by Raymond Camden
		posted on 4/22/2009 at 3:53 PM
		</div>
		<div class="comment_text"><p>What do you mean by pass the value of a link? Do you simply mean: When I click on a link in the greater window, I want to load the contents in the dialog instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711868">14</a> by Mikee
		posted on 5/14/2009 at 9:37 AM
		</div>
		<div class="comment_text"><p>This solution still limits you to only change the style and the features of the dialog box via themeRoller, which is somewhat restricting.</p><p>There's a better solution here in which you can enable the box to open multiple times AND pass events and options within the dialog() function's parameters:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.nemikor.com%2Fcategory%2Fjquery-ui%2Fjquery-ui-dialog%2F%3AONEmWI68hTbfulN7h8Z2ZIfW1ZE&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.nemikor.com/category/jquery-ui/jquery-ui-dialog/">http://blog.nemikor.com/cat...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711872">15</a> by thaianhduc
		posted on 5/14/2009 at 12:34 PM
		</div>
		<div class="comment_text"><p>Hi guys,<br>I had small problem with the dialog. I had a table to nest my stuff and a div to show as a dialog. Everything seems work fine except that, the dialog was opened under the table. It looked terrible.<br>Here is the code:</p><p>    &lt;div id="viewBookDialog" title="Chi tiet book"&gt;<br>    chi tiet ve sach herer test first<br>    &lt;/div&gt;<br>    &lt;table style="width:100%;"&gt;<br>....stuff here ....<br>    &lt;/table&gt;<br>The viewBookDialog is support to show the dialog.<br>Instantate dialog:<br>  $("#viewBookDialog").dialog({<br>      bgiframe: true,<br>      autoOpen: false,<br>      height: 300,<br>      modal: true,<br>      position: 'top'<br>   });</p><p>Does anyone have any clue? Please help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711871">16</a> by Raymond Camden
		posted on 5/14/2009 at 3:39 PM
		</div>
		<div class="comment_text"><p>This online where we can see it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711874">17</a> by thaianhduc
		posted on 5/15/2009 at 6:34 AM
		</div>
		<div class="comment_text"><p>Sorry Raymond, it is my stupid to forget include all stylesheet needed. By looking at detail using FireBug addon, i fixed the problem already. I lacked of adding ui.core.css :(<br>Thank for your consideration.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711875">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711875">18</a> by Henrik
		posted on 10/21/2009 at 2:57 PM
		</div>
		<div class="comment_text"><p>Hi - thanks for this, I ran into the problem of my dialog not re-opening; your fix worked great!</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711876">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711876">19</a> by Amy
		posted on 11/8/2009 at 3:54 AM
		</div>
		<div class="comment_text"><p>Thanks, I was having trouble figuring this out myself, as a beginner to javascript and jQuery. But I got it working after reading this post!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711873">20</a> by Indialike
		posted on 1/20/2010 at 5:33 PM
		</div>
		<div class="comment_text"><p>Very nice and useful tutorials for web designers,<br>Thanks for posting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711877">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711877">21</a> by qamar
		posted on 5/31/2010 at 10:32 AM
		</div>
		<div class="comment_text"><p>u dont have to hide the dialog by setting css properties, you just can do it from dialog itself, just put the following lines in ur jscript while initializing the dialog box<br>$(foo).dialog({ autoOpen: false })</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711878">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711878">22</a> by brijesh jain
		posted on 9/8/2011 at 9:11 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I am writing a dialog popup to perform some task through it. Popup is opening up fine for the first time but its not showing up for the second click. Here is the code I am using to open the popup, Can you please let me know whats wrong here?</p><p>$(document).ready( function() { <br>	$( "#ALERT_POPUP" ).dialog({<br>		autoOpen: false, <br>		height:400, <br>		width:900, <br>		modal:true, 	<br>		show: 'slide', <br>		hide: 'slide',<br>		close: function(ev, ui) {$(this).remove();}<br>	});<br>});</p><p>$( "#alertPopup").click(function() { <br>	$.ajax({<br>        url: "<a href="http://disq.us/url?url=http%3A%2F%2FalertAction.do%3FreqCode%3DalertSearch%3AkNERrPTPC_HFpDpc7FvvYkmEzSY&amp;cuid=3321886" rel="nofollow noopener" title="alertAction.do?reqCode=alertSearch">alertAction.do?reqCode=aler...</a>",<br>       	success: function(returnedData){<br>			$('#ALERT_POPUP').empty().append(returnedData).dialog('open');<br>			return false;<br>   		}             <br>	}); <br>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711887">23</a> by Raymond Camden
		posted on 9/10/2011 at 1:55 AM
		</div>
		<div class="comment_text"><p>Not sure. What do Chrome Dev Tools or Firebug report? You may have an error being thrown.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711885">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711885">24</a> by falak
		posted on 9/28/2011 at 10:42 AM
		</div>
		<div class="comment_text"><p>Whenever I click on an element in the drawing area, its properties window will open. I wanted to create this properties window using this dialog box. Is it possible?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711883">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711883">25</a> by Raymond Camden
		posted on 9/28/2011 at 4:58 PM
		</div>
		<div class="comment_text"><p>What drawing area are you talking about?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711886">26</a> by Falak
		posted on 10/6/2011 at 9:00 PM
		</div>
		<div class="comment_text"><p>I have a canvas from RaphaelJS (the Raphael paper) that is my drawing area. I can drawing rectangles, circles, ellipses and images etc. Now if I click any of these object, their properties window will open up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711888">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711888">27</a> by Raymond Camden
		posted on 10/7/2011 at 6:16 AM
		</div>
		<div class="comment_text"><p>I'm sorry - but your comments are not even making sense here. I really don't see where your questions match up with the topic at hand.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711884">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711884">28</a> by Vikram
		posted on 1/25/2012 at 2:17 AM
		</div>
		<div class="comment_text"><p>awesome! thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711889">29</a> by Paul
		posted on 2/24/2012 at 5:07 PM
		</div>
		<div class="comment_text"><p>Thanks for this. I notice most of the examples are fairly simple one-page examples. How could this be applied, for example, to the following situation:<br>1) Click a link to a page requiring login.<br>2) Hit that page, but immediately popup the dialog requiring login<br>3) Once logged in, destroy the dialog and display the page</p><p>Alternatively, popup the login dialogue BEFORE hitting the page, and redirect once logged in. I'm not sure which is better or more appropriate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711890">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711890">30</a> by Raymond Camden
		posted on 2/24/2012 at 5:16 PM
		</div>
		<div class="comment_text"><p>What you want to do _could_ be done but _should not_ be done. Since I can dismiss a jQuery UI dialog via JS, I'd simply use my console to dismiss it and see the page. If you want something to stay secure (or behind a login), you _can't_ return it and just hide it with a client side dialog. That isn't secure at all. Also, if your secure page is based on a user id, like maybe it shows "Hi Ray", you would have ot update all the dynamic content after you login.</p><p>As to your second question - it is possible, in theory. Imagine your home page has a link to Profile, you can use jQuery to notice that click and pop up a dialog to log you in first. Again though you shouldn't rely on JUST JavaScript to to do this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711891">31</a> by sheir
		posted on 4/7/2012 at 2:21 AM
		</div>
		<div class="comment_text"><p>Wondering if I am asking the impossible, if I am, forgive me as I am new to mvc3, jquery.<br>I just posted my question on stackoverflow.</p><p>Basically how can I get my Controller (in MVC3/razor) to return a popup when the user types in a url that goes to my application; without loading up my application.</p><p>The url would have querystring params which would magically get converted to my view model which is a param in my Controller method.  I then want a popup to be displayed.</p><p>Is that impossible to do??</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F10049848%2Fmvc3-controller-action-method-returns-a-popup%3AmoQbSWgCF-33sJEs0_ErPUijesA&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/10049848/mvc3-controller-action-method-returns-a-popup">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711892">32</a> by Raymond Camden
		posted on 4/9/2012 at 6:20 PM
		</div>
		<div class="comment_text"><p>Sorry man - no idea what you mean. It sounds like:</p><p>I have a text field. If the user enters a particular URL, I do a popup.</p><p>If so - you would listen to the keyup event (there are others) and check the value. When the value == what you care about, do a popup.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711895">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711895">33</a> by Mohammad
		posted on 5/10/2012 at 10:25 AM
		</div>
		<div class="comment_text"><p>I get "$.widget is not a function" error when page loads</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711894">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711894">34</a> by Raymond Camden
		posted on 5/10/2012 at 3:55 PM
		</div>
		<div class="comment_text"><p>Check to ensure all your JS libraries properly loaded.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711893">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711893">35</a> by Bhushan
		posted on 3/21/2013 at 6:32 PM
		</div>
		<div class="comment_text"><p>Hi,<br>I seen your links for dialog box(below links),   <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fjqueryuitest2%2Ftest1.html%3AvSWZWLw3ednjDlb-Ag4GGllr8Cg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/jqueryuitest2/test1.html">http://www.coldfusionjedi.c...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2Fjqueryuitest2%2Ftest2.html%3AdVOrdLlexHjkZ8MOBme-Sbqb5jA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/jqueryuitest2/test2.html">http://www.coldfusionjedi.c...</a></p><p>!st time its working fine. when we click on second time, the dialog box was not show.</p><p>can you provide any solution for this, I'm facing same problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711896">36</a> by Raymond Camden
		posted on 3/21/2013 at 7:05 PM
		</div>
		<div class="comment_text"><p>The answer is here: <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F12046475%2Fjquery-ui-dialogs-wont-reopen%3AgxleiMDgdFk93ndQNcvEewOzeFc&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/12046475/jquery-ui-dialogs-wont-reopen">http://stackoverflow.com/qu...</a></p><p>Basically, my code is doing it wrong. ;) But the SO answer explains it exactly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711897">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711897">37</a> by Bhushan
		posted on 3/22/2013 at 5:36 PM
		</div>
		<div class="comment_text"><p>Thanks for your reply. its not clear for me.</p><p>can you please provide any JSfiddle link for this example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711898">38</a> by Raymond Camden
		posted on 3/22/2013 at 5:43 PM
		</div>
		<div class="comment_text"><p>If you are asking me to write an example of jQuery UI, I'd ask you to instead please visit their site to read the docs there. It doesn't make sense for me to just repeat their documentation for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711899">39</a> by Ranjeet
		posted on 5/3/2013 at 11:43 AM
		</div>
		<div class="comment_text"><p>it's not working on second time.<br>After refreshing working, it s not a good</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711900">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711900">40</a> by Raymond Camden
		posted on 5/3/2013 at 2:48 PM
		</div>
		<div class="comment_text"><p>Ranjeet, please read the comments above yours. This is covered.</p></div>
	</div>
</div>
		