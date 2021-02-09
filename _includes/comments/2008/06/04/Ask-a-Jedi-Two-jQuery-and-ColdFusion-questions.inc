
<div class="comment" id="c_1713681484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681484">1</a> by Ken Dunnington
		posted on 6/4/2008 at 6:41 PM
		</div>
		<div class="comment_text"><p>I like to use events to hook up my UI, so instead of &lt;a href="..."&gt; I'd do &lt;a click="doSomethingAwesome()"&gt; and then add a 'return false' or event.preventDefault() to that function to stop the browser from going anywhere. Better yet, I will hook up as much as I can right in the $(document).ready() function so my markup doesn't have any ties to my JS code, but that can get tricky when you have lots of links and dynamic content and whatnot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681490">2</a> by Brian Swartzfager
		posted on 6/4/2008 at 6:47 PM
		</div>
		<div class="comment_text"><p>Another way you could approach the "load" example is to define a CSS class such that any hyperlink with that class will load its content into the parent container of the hyperlink.</p><p>$(document).ready(function () {</p><p>$("a[class=loadHere]").click(function() {<br>   var thisLink= $(this);    <br>   //Load the page defined in the href attribute of the link into the parent container<br>   thisLink.parent().load(thisLink.attr("href"));<br>   //Cancel the normal click action<br>   return false;<br>  });</p><p>});</p><p>...</p><p>&lt;div&gt;<br>  &lt;a class="loadHere" href="someurl.cfm"&gt;Load it like you mean it&lt;/a&gt; <br>&lt;/div&gt;</p><p>This approach works as long as the hyperlink isn't enclosed in a different container from the one you want to populate with the results of the HTTP call:  if you changed the above example and put the hyperlink inside of a &lt;p&gt;&lt;/p&gt; block, then the content would be loaded in that paragraph block instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681488">3</a> by Randy Merrill
		posted on 6/4/2008 at 7:08 PM
		</div>
		<div class="comment_text"><p>You may also want to check out the jQuery UI. They have some tab functionality in there that may do a lot of what is necessary, including tabs.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fui.jquery.com%2F%3AiTbqhe3ijYQ_LS88Wb5Vip21gI4&amp;cuid=3321886" rel="nofollow noopener" title="http://ui.jquery.com/">http://ui.jquery.com/</a></p><p>They are currently in RC1 for the 1.5 release which is going to be awesome. Their website is somewhat halfway built right now, but they are supposed to release the 1.5 on the 8th.</p><p>You can read more about the release here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjquery.com%2Fblog%2F2008%2F06%2F02%2Fjquery-ui-15-release-candidate-were-getting-excited%2F%3Agu1lV-hwsLN3lQ8HLGz7gn-9YLc&amp;cuid=3321886" rel="nofollow noopener" title="http://jquery.com/blog/2008/06/02/jquery-ui-15-release-candidate-were-getting-excited/">http://jquery.com/blog/2008...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681482">4</a> by Syed
		posted on 6/4/2008 at 8:31 PM
		</div>
		<div class="comment_text"><p>Ah, .load(someurl); is simple as it in coldfusion. I was looking into jquery myself, and it's really interesting how they have doen their framework with the ability to expand beyond their provided solutions.</p><p>Thank you Raymond!</p><p>Sorry for misspelling your name in the email.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681485">5</a> by Rey Bango
		posted on 6/5/2008 at 8:06 PM
		</div>
		<div class="comment_text"><p>@Ray: Writing less code is a jQuery complaint of yours?? Ok Ray, you've lost your mind. Next thing you know you'll be switching to .Net or PHP because CFML is less verbose. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681489">6</a> by Raymond Camden
		posted on 6/5/2008 at 8:10 PM
		</div>
		<div class="comment_text"><p>@Rey: Heh, well, I think in all things you have to have a balance. We all like short, concise code. That doesn't mean we write our code all on one line. Or do stuff like res = a(b(c(d(e(f())))). Sometimes I find jQuery a bit like that - it's so wrapped its hard to follow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681487">7</a> by Rey Bango
		posted on 6/5/2008 at 8:55 PM
		</div>
		<div class="comment_text"><p>@Ray: The cool thing is that you don't need to write jQuery in one line. Chaining is done for convenience. It can also be used in a more verbose manner so you have a lot of flexibility. This is a very common misconception. Most people though, tend to use the chaining because it's EXTREMELY easy to apply methods to selected DOM elements in that manner. Also, you can do something like this to make it easier:</p><p>$( "#actionmsg" ).html("&lt;span style='color:red;'&gt;Question deleted and data updated!&lt;/span&gt;")<br>.show()<br>.fadeIn('slow')<br>.animate({opacity: 1.0}, 3000)<br>.fadeOut('slow');</p><p>Notice how it's not all on 1 line and is very readable. You can also do this:</p><p>var myObj = $( "#actionmsg" );</p><p>myObj.html("&lt;span style='color:red;'&gt;Question deleted and data updated!&lt;/span&gt;");<br><a href="http://disq.us/url?url=http%3A%2F%2FmyObj.show%3AQxvGl2RZiqFIGawDtlTKg09XK5s&amp;cuid=3321886" rel="nofollow noopener" title="myObj.show">myObj.show</a>();<br>myObj.fadeIn('slow');<br>myObj.animate({opacity: 1.0}, 3000);<br>myObj.fadeOut('slow');</p><p>Again, you have flexibility to write it in either way.</p><p>Hope this helps. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681491">8</a> by Raymond Camden
		posted on 6/5/2008 at 8:58 PM
		</div>
		<div class="comment_text"><p>Yeah I know you can - it just seems like most examples don't use this format, and it bugs me.</p><p>So I'm being picky now - and I know it - but as a JS newbie I found this to be very unfriendly when I saw it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681486">9</a> by Sin
		posted on 10/5/2008 at 8:37 PM
		</div>
		<div class="comment_text"><p>hi does anyone know how to avoid expose 'secured' directory on ajaxlink?</p><p>example:<br>javascript:ColdFusion.navigate('/modules/payroll.cfm','pay');</p><p>where '/modules' is a secured directory.</p><p>tried cf mapping and move to 1 level above the wwwroot, but the bind attributes for cfdiv etc do not recognized maps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681493">10</a> by Raymond Camden
		posted on 10/5/2008 at 11:55 PM
		</div>
		<div class="comment_text"><p>An AJAX reqest is no different than a normal HTTP request. So if /modules is a folder protected by some security method, ColdFusion.navigate won't be able to bypass that security.</p><p>At the same time, if /modules is a CF mapping, and NOT a web server mapping, then again - because AJAX == HTTP, you won't be able to view it. Remember, if you can't open your browser and manually go to <a href="http://disq.us/url?url=http%3A%2F%2Fyoursite.com%2Fmodules%2Fpayroll.cfm%3ADdwBeEdBSsiXgKckasoMsCvgCZ4&amp;cuid=3321886" rel="nofollow noopener" title="yoursite.com/modules/payroll.cfm">yoursite.com/modules/payrol...</a>, than Ajax requests won't be able to as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681495">11</a> by Sin
		posted on 10/6/2008 at 11:21 AM
		</div>
		<div class="comment_text"><p>thanks Ray. might need to do some invalid-http-referer using Application on top of /modules.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681492">12</a> by Misty
		posted on 5/8/2012 at 12:38 AM
		</div>
		<div class="comment_text"><p>Hi ray, Have you ever tried this in cflayoutarea,</p><p>like write some code in cflayoutarea and it has paging and poging runs between the layout,</p><p>now add a jqery function to delete some data, and load the cflayout container again, it will break, any idea about it</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681497">13</a> by Raymond Camden
		posted on 5/8/2012 at 1:02 AM
		</div>
		<div class="comment_text"><p>Well, if you use function x format instead of x = function() format then it makes sense - and I think you yourself ran into that in another of my blog posts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681494">14</a> by misty
		posted on 5/8/2012 at 10:12 AM
		</div>
		<div class="comment_text"><p>it was easy, above you said, i was using it like this as said by you x=function(){}</p><p>i just passed the 'name' of the cflayoutarea and it worked</p><p>cheers</p></div>
	</div>
</div>
		