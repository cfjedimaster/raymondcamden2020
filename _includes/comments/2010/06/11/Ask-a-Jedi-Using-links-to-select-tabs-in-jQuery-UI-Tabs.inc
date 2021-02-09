
<div class="comment" id="c_1713724731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724731">1</a> by Simon
		posted on 6/11/2010 at 9:20 PM
		</div>
		<div class="comment_text"><p>Hi all, just a quick question, cflayout and it's various functions or jquery ? I've been using cflayout for a while but  have started using jquery and wondered if cflayout was a dying breed in the community now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724737">2</a> by Phillip Senn
		posted on 6/11/2010 at 10:57 PM
		</div>
		<div class="comment_text"><p>There is a plugin called jQueryUI Layout here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fgroups.google.com%2Fgroup%2Fjquery-ui-layout%3AwIS9wokpNTJeU1CWPD_VCUJOxEk&amp;cuid=3321886" rel="nofollow noopener" title="http://groups.google.com/group/jquery-ui-layout">http://groups.google.com/gr...</a></p><p>I feel that if you can accomplish some of what you need with jQuery UI, then use it as much as possible - not to mix cflayout in with it.<br>You should see my redesigned home page.  It now used jQuery UI.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724741">3</a> by Raymond Camden
		posted on 6/11/2010 at 11:02 PM
		</div>
		<div class="comment_text"><p>I'll ditto PSenn. Don't mix em. In general I prefer jQuery because I'm more powerful in it then the widgets that ship w/ CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724739">4</a> by johans
		posted on 6/11/2010 at 11:24 PM
		</div>
		<div class="comment_text"><p>I have not tried this but expect in your link click handler you could use a jQuery selector to select the tab and chain it with the jQuery click():</p><p>$('#tab-1').click()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724748">5</a> by Raymond Camden
		posted on 6/11/2010 at 11:28 PM
		</div>
		<div class="comment_text"><p>Interesting - if you try it johans and it works - let us know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724740">6</a> by Andy Sandefer
		posted on 6/16/2010 at 6:34 PM
		</div>
		<div class="comment_text"><p>I'm a big user of the jQuery tabs and accordions and I ran into a similar issue trying to get this type of functionality to work last week only I also had accordions set within the tabs.  In order to make those two play nice together you need to initialize the tabs after you ready the accordions like so...</p><p>        $("#accordion5").accordion();<br>		$("#accordion5").accordion("option", "animated", 'slide');<br>		$("#accordion5").accordion("option", "clearStyle", true); <br>		$("#accordion5").accordion("option", "autoHeight", false);<br>		$("#accordion5").accordion("option", "fillSpace", true);</p><p>		$("#tabsMain").tabs();</p><p>Also - here's the same thing in function form in case you roll like that and are dynamically generating your links based on database content...<br>	selectTab = function(userSelectedIndex){<br>		$("#tabsMain").tabs("select", userSelectedIndex);<br>	}</p></div>
	</div>
</div>
		