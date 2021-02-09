
<div class="comment" id="c_1713713750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713750">1</a> by Chad
		posted on 3/17/2009 at 10:37 PM
		</div>
		<div class="comment_text"><p>Timely post Ray... i have a project I am working on and one of the things i need to do is load up the Color's that are available for a product.  It will be nice to use jQuery to go query for the Colors and display them on the page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713755">2</a> by Dan G. Switzer, II
		posted on 3/17/2009 at 11:15 PM
		</div>
		<div class="comment_text"><p>As Raymond said, there are many ways to accomplish the same task, however if all you want to do is load a chunk of HTML to the browser, you can simplify this function:</p><p>function loadQuery() {<br>   $.get('data.cfm',{},function(data){<br>      $("#content").html(data)<br>   })<br>   return false<br>}</p><p>to:</p><p>$("#content").load('data.cfm');</p><p>The load() method basically handles the AJAX operation and the injection of the response into the DOM for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713757">3</a> by Raymond Camden
		posted on 3/17/2009 at 11:17 PM
		</div>
		<div class="comment_text"><p>Duh. When I was working on test1.html and got it done, I tried a one line approach, and I _knew_ there was a way, but I was trying to do it with (selector).get, I forgot .load. As I said, duh. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713759">4</a> by Tim Brown
		posted on 3/17/2009 at 11:38 PM
		</div>
		<div class="comment_text"><p>Thanks for the post.</p><p>If you retrieve that data via a cfc call can you use a mapping in the get or getJSON function's first argument</p><p>$.getJSON('/myAppLevelMapping/myPackage/allUsers.cfc',{method : "getUsers"}},function(data)</p><p>is the syntax used here correct for referencing the method/path? what does the syntax look like for passing in arguments to the cfc.</p><p>Once i can retrieve the data from the cfc one other task I would like to be able to do with the returned data is to return data into the table with proper column headers (change the table's column name from UserName into something like User Name easily. Ideally it would be great to be able to reference another query that stores a reference of a column name to a column display label and as it is looping through the json use the proper display label. (i guess in my query i could write it to say</p><p>SELECT UserName as User_Name FROM users WHERE 0=0</p><p>and then in my loop i guess i could do a split on the _ as a delimiter.</p><p>Any ideas on how to be accomplish this would be awesome. Thanks again for this code it will help out a lot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713760">5</a> by Kit Brandner
		posted on 3/17/2009 at 11:38 PM
		</div>
		<div class="comment_text"><p>Seems kind of related, jCFC was released this morning:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjcfc.riaforge.org%2F%3A6-JZ4Z7VdcMqdgNdpnoVdJ8ebrs&amp;cuid=3321886" rel="nofollow noopener" title="http://jcfc.riaforge.org/">http://jcfc.riaforge.org/</a></p><p>Invoking CFC methods via JavaScript, pretty nice. Although, personally I hate formatting result sets with JavaScript. Isn't there a better way to do this, like using some kind of template or something? Otherwise, the only practical use of returning JSON structures to JavaScript I can see is things like populating select boxes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713753">6</a> by Matt Williams
		posted on 3/17/2009 at 11:54 PM
		</div>
		<div class="comment_text"><p>I've gone back and forth on the return html vs. data too. In some cases I've found I can have a .cfm page that gets reused: once as an include on the first time viewing and again whenever the ajax call hits it.</p><p>One really interesting part of the code sample is that 3 out of 4 of Raymond's friends are named Scott.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713752">7</a> by David McGuigan
		posted on 3/17/2009 at 11:59 PM
		</div>
		<div class="comment_text"><p>There are actually all kinds of things you can do with CFC method call results and jQuery. CFC methods can return generated XHTML just as easily as .cfm files can.</p><p>jCFC simplifies all of your jQuery CFC calls to a tight, easy-to-read syntax like this:</p><p>$.cfc( 'cfcName', 'method', { arguments }, { callback } );</p><p>It handles everything else, including JSON deserialization of the results, invisibly for you.</p><p>Instead of a file path to the cfc, you pass it a dot-delimited-path without the .cfc extension, which coincidentally lets you leverage mappings the way that Tim mentioned wanting to.</p><p>One really cool thing you can do with jCFC is to design your HTML interface, and then pop out the parts that change (the TR cells of a table of search results for example) into a CFC method and then just make a call like this to have live updating:</p><p>onKeyUp = $.cfc( 'cfcName', 'returnTRResults', grabFormValues( ), function( results ){ $.('#table').html( results ); });</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713756">8</a> by Raymond Camden
		posted on 3/18/2009 at 12:02 AM
		</div>
		<div class="comment_text"><p>@TimB:</p><p>1) Yes, I believe that would work, but normally I'd do it in the url, '.../some.cfc?method=getUsers'. Technically method is one more argument, but it is a special argument when calling CFCs.</p><p>2) To pass in more args, add more crap to the {} block:</p><p>{foo:'ray',zoo:'may'}</p><p>etc.</p><p>3) Your last item was real confusing to me. If you want to make column names dynamic, well, I guess you could return it. You are allowed to return anything you want in the json, including multiple queries. So you could return a query of your data, and another query for formatting informatio.</p><p>@Kit: jQuery has a Template doohicky plugin, but I've not played with it. This is one area where Adobe Spry really shines. I disagree though about your comment about JSON only being good for populating select boxes. JSON is a very good 'data' transport. It is very slim compared to XML or HTML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713758">9</a> by Raymond Camden
		posted on 3/18/2009 at 12:12 AM
		</div>
		<div class="comment_text"><p>@Davide: I assume jCFC uses a proxy CFM on the server to allow you to use mappings?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713754">10</a> by David McGuigan
		posted on 3/18/2009 at 12:14 AM
		</div>
		<div class="comment_text"><p>It sure does.</p><p>One other thing I'll mention is that jCFC can do a slew of other things too, like:</p><p>Connecting to application-scoped singletons instead of files.</p><p>Connecting to application-scoped UDFs.</p><p>Configurationless proxy objects, in case you like this syntax:</p><p>var myProx = $.cfc( 'User' );<br>    myProxy.backflip( );</p><p>It's worth downloading and reading through the documentation PDF which gives you a quick feel for what it can do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713761">11</a> by David McGuigan
		posted on 3/18/2009 at 12:23 AM
		</div>
		<div class="comment_text"><p>Two corrections:</p><p>1. It uses a proxy .cfc not .cfm<br>2. Typo. Corrected:</p><p>var myProxy = $.cfc( 'User' );<br>myProxy.backflip( );</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713762">12</a> by Phillip Senn
		posted on 3/18/2009 at 12:37 AM
		</div>
		<div class="comment_text"><p>According to <a href="http://disq.us/url?url=http%3A%2F%2Fwww.dynamicdrive.com%2Fforums%2Fblog.php%3Fbt%3D15%3Ayj_eHuaJpidpX_DQPoYRn6ibxPc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.dynamicdrive.com/forums/blog.php?bt=15">http://www.dynamicdrive.com...</a></p><p>When accessing jQuery dynamically using Google's Ajax API, you must use google.setOnLoadCallback() instead of the venerable jQuery(document).ready() function to execute any code once the document's DOM has become available. That's because jQuery is now being dynamically loaded, and only by using google.setOnLoadCallback() can you reliably know when jQuery has fully loaded (including access to jQuery(document).ready()).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713765">13</a> by Raymond Camden
		posted on 3/18/2009 at 12:40 AM
		</div>
		<div class="comment_text"><p>@PSenn: I'm not using google.load. I'm using the script style. It does not require google.setOnLoadCallback().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713763">14</a> by Chris
		posted on 3/18/2009 at 1:05 AM
		</div>
		<div class="comment_text"><p>Perfect timing on the article!  I was just trying to figure out how to do this with a login screen.  I wanted to update the "loginResponse" div on my page to show "success" or "failure"</p><p>Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713764">15</a> by Raymond Camden
		posted on 3/18/2009 at 1:06 AM
		</div>
		<div class="comment_text"><p>Would folks want an example like that? Login form. Click to login. Auth via ajax. If bad, show error. If good, go to new page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713766">16</a> by Chris
		posted on 3/18/2009 at 1:19 AM
		</div>
		<div class="comment_text"><p>@Ray:  Sure, seeing your prototype compared with the way I would have done it, would be a nice, "ahhh that's a better way of doing it" situation for me :)</p><p>The other thing was, I was trying to do a modal login screen with nyromodal plugin for jQuery.  However, I couldn't get the modal to not go to the next page.  I wanted the login form to stay modal.  So I gave up (due to time) and went to the normal HTML route.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713770">17</a> by Raymond Camden
		posted on 3/18/2009 at 1:20 AM
		</div>
		<div class="comment_text"><p>Did you check out jQuery UI for their modal window? I've got a blog entry on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713767">18</a> by Steve W
		posted on 3/18/2009 at 1:54 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>All samples, all the time.  I am just getting into jQuery and this post couldn't have come at a better time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713768">19</a> by Fred
		posted on 3/18/2009 at 2:09 AM
		</div>
		<div class="comment_text"><p>JQuery... hmm. Why do I need JQuery at all for doing simple little Ajax stuff when my existing 5 year old JavaScript routines for doing Ajax calls works fine...?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713771">20</a> by Raymond Camden
		posted on 3/18/2009 at 2:13 AM
		</div>
		<div class="comment_text"><p>Why use any framework, Fred? Typically because the shortcuts are... well, exactly that, a shortcut. As I said in the presentation I gave last week, Ajax isn't anything new per se. It's 1999 technology. But anything that makes it easier to use is a good thing in my book. Also, jQuery does a heck of a lot more than just Ajax.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713775">21</a> by Chris
		posted on 3/18/2009 at 2:58 AM
		</div>
		<div class="comment_text"><p>@Ray: That's great.  Didn't know that was there until now.  Thanks.  However...(didn't you see that coming?), the modal with form shows how to pull in a form that's embedded within the page.  Do know of a way to pull in a cfm/html page instead of embedding it within the page?</p><p>Also, I'm finding that I have to click the close button (x) 2x to get the dialog and modal to disappear. First click seems to remove a layer of modality, 2nd click removes everything.  I'm using FF 3.0.7.  Anyone else seeing this? This happens with all modals on my browser.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713777">22</a> by Amal
		posted on 3/18/2009 at 5:29 AM
		</div>
		<div class="comment_text"><p>A quick and elegant way to substitute CF's cfdiv that adds more to the requests. This post just hit right at the time!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713778">23</a> by Amal
		posted on 3/18/2009 at 5:34 AM
		</div>
		<div class="comment_text"><p>I shoved off couple requests of 50KB after I found out this cool post. Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713776">24</a> by Chris
		posted on 3/18/2009 at 8:14 AM
		</div>
		<div class="comment_text"><p>I've created a small .ajax() routine just like Ray's but with a login form.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.christopherchin.com%2Fblog%2Fdemos%2Fjquery%2Fjqueryajaxtest.html%3AlCoFzmXRX1nz-QUtD2GIoklFi28&amp;cuid=3321886" rel="nofollow noopener" title="http://www.christopherchin.com/blog/demos/jquery/jqueryajaxtest.html">http://www.christopherchin....</a></p><p>Pretty rudimentary, but you get the gist of it. Comments are appreciated.  I'll be blogging about this soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713779">25</a> by William FISK
		posted on 3/18/2009 at 2:00 PM
		</div>
		<div class="comment_text"><p>jCFC looks very interesting.  I was just wondering if it could be used with ColdFusion 7?  What features of ColdFusion 8 does it require?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713780">26</a> by Francois Levesque
		posted on 3/18/2009 at 3:09 PM
		</div>
		<div class="comment_text"><p>@Kit, Ray,</p><p>I use Ben's templates "plugin" for generating html content from JSON. It works really great. I'm not sure if he's released it anywhere, but the code is available on his site:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F1393-Creating-jQuery-Templates-Plug-in-Using-Textarea-Elements-Thanks-Kurt-Bonnet-.htm%3AnKQNQBlF52oocoL65bwtobEYQxA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/1393-Creating-jQuery-Templates-Plug-in-Using-Textarea-Elements-Thanks-Kurt-Bonnet-.htm">http://www.bennadel.com/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713781">27</a> by Raymond Camden
		posted on 3/18/2009 at 3:46 PM
		</div>
		<div class="comment_text"><p>Shoot, Chris, how am I supposed to do a blog post on it now? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713782">28</a> by Michael Brennan-White
		posted on 3/18/2009 at 8:56 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I still think a documentation of a login form would be useful.</p><p>I also think an example with the jqGrid to display the returned data would be awesome (especially if text fields can be bound to the selected value from the grid)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713783">29</a> by db
		posted on 3/18/2009 at 9:09 PM
		</div>
		<div class="comment_text"><p>for viewing your returned data in a familiar format, this can be helpful:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.netgrow.com.au%2Ffiles%2Fjavascript_dump.cfm%3AqtQIUDLI1QaWXmPvwt9Yt5Rbba4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.netgrow.com.au/files/javascript_dump.cfm">http://www.netgrow.com.au/f...</a></p><p>another thing that might be useful if you're debugging ajax calls is jquery's $.ajax error option. $.get and $.post don't return the error text, but using $.ajax, you can view the cf error page with this:</p><p>$.ajax({<br> type	: 'GET'<br> ,url	: 'data2.cfm'<br> ,success: function( data ){<br> dump( data );<br> }<br> ,error	: function( event, textStatus, errorThrown ){ <br> $('&lt;div/&gt;').html( event.responseText.split(/&lt;\/?body&gt;/)[1] ).prependTo('body');<br> }<br>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713784">30</a> by Phillip Senn
		posted on 3/18/2009 at 9:46 PM
		</div>
		<div class="comment_text"><p>I played around with the ajax callback functions a while back.  Here's some code I wrote to see what all it was doing:<br>I was inspired by Learning jQuery pg. 129.</p><p>(function($) { <br>$().ajaxStart(function() { <br>	$('#busy').slideDown();<br>});</p><p>$().ajaxSend(function(myEvent, request, settings) {<br>	$('#debug').append(myEvent.type+'&lt;br /&gt;');<br>	$('#debug').append('readyState:'+request.readyState+'&lt;br /&gt;');<br>	$('#debug').append('multipart:'+request.multipart+'&lt;br /&gt;');<br>	$('#debug').append('type:'+settings.type+'&lt;br /&gt;');<br>	$('#debug').append('url:'+settings.url+'&lt;br /&gt;');<br>});</p><p>$().ajaxSuccess(function(myEvent, request, settings) {<br>	$('#debug').append(myEvent.type+'&lt;br /&gt;');<br>	$('#debug').append('readyState:'+request.readyState+'&lt;br /&gt;');<br>	$('#debug').append('status:'+request.status+'&lt;br /&gt;');<br>	$('#debug').append('responseText:'+request.responseText+'&lt;br /&gt;');<br>	$('#debug').append('type:'+settings.type+'&lt;br /&gt;');<br>	$('#debug').append('url:'+settings.url+'&lt;br /&gt;');<br>});<br>$().ajaxComplete(function(myEvent, request, settings) {<br>	$('#debug').append(myEvent.type+'&lt;br /&gt;');<br>	$('#debug').append('readyState:'+request.readyState+'&lt;br /&gt;');<br>	$('#debug').append('multipart:'+request.multipart+'&lt;br /&gt;');<br>	$('#debug').append('status:'+request.status+'&lt;br /&gt;');<br>	$('#debug').append('type:'+settings.type+'&lt;br /&gt;');<br>	$('#debug').append('url:'+settings.url+'&lt;br /&gt;');<br>});</p><p>$().ajaxStop(function() {<br>	$('#busy').slideUp("slow");<br>});</p><p>$().ajaxError(function(myEvent, request, settings, thrownError) {<br>	$('#debug').append(myEvent.type+'&lt;br /&gt;');<br>	$('#debug').append('readyState:'+request.readyState+'&lt;br /&gt;');<br>	$('#debug').append('multipart:'+request.multipart+'&lt;br /&gt;');<br>	$('#debug').append('status:'+request.status+'&lt;br /&gt;');<br>	$('#debug').append('type:'+settings.type+'&lt;br /&gt;');<br>	$('#debug').append('url:'+settings.url+'&lt;br /&gt;');<br>});<br>})(jQuery);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713787">31</a> by Kit Brandner
		posted on 3/18/2009 at 11:04 PM
		</div>
		<div class="comment_text"><p>This thread has generated some great discussion. I originally said something like "jCFC is only good for populating select boxes" - I may have been taken out of context, here. It was just an example. I like coding very object-oriented, so concatenating strings to produce HTML using JavaScript just seems like a hack to me. But that's mostly a matter of coding style, and to each their own.</p><p>@Ray - I was going to mention something about Spry being a great framework for formatting AJAX data with templates, but I thought it was a bit of an offshoot in a jQuery thread. In hindsight, it may have been relevant.</p><p>@Francois - seeing Ben's utilization of a TEXTAREA for templates is great, but it made me think about loading templates dynamically. I guess that over-complicates things, two AJAX requests for each call. Have you seen anything like this done well before?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713788">32</a> by David McGuigan
		posted on 3/19/2009 at 12:04 AM
		</div>
		<div class="comment_text"><p>@Will Fisk:<br>I was actually just getting started with CF towards the CF8 beta, so I'm not really sure. My guess would be it uses some 8-only syntax ( ++ maybe? ) and the JSON handling and returnFormat="JSON" functionality, which could be handled inside of the single method of jCFC.cfc in 7. Let me know if you end up getting it work on 7 and I'll update the source.</p><p>@Kit:<br>Well, in a way it does feel very hacky. The primary reason you'd want to concatenate strings to generate HTML is optimization. Generating the interface on the client instead of server, offloading that work to a browser and minimizing your transfer size.</p><p>As a note, you can easily author the html normally as you would in a .cfm file and plug it into a cfsavecontent in a cfc method to get the same effect. You can also easily write a single CFC dynamic content distributor method that just takes a URL argument and will cfinclude and return the .cfm files you want and letting you leave them as .cfms while still able to take full advantage of the simplicity and rapid development of jCFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713786">33</a> by David McGuigan
		posted on 3/19/2009 at 12:06 AM
		</div>
		<div class="comment_text"><p>Oh, also if certain features of cflock or getMetadata or getComponentMetadata changed from 7 to 8. I think that's probably everything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713790">34</a> by Laura Norris
		posted on 3/19/2009 at 9:58 PM
		</div>
		<div class="comment_text"><p>Could you give an example of using jQuery and AJAX to save form data?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713789">35</a> by Raymond Camden
		posted on 3/20/2009 at 7:10 AM
		</div>
		<div class="comment_text"><p>I can. It is a good idea. I've actually got a few simple examples in a list now for me to write.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713791">36</a> by Chad
		posted on 3/21/2009 at 8:25 PM
		</div>
		<div class="comment_text"><p>The links to the test code are broken.  I copied your code from the first example and it wont run in IE.  I thought your test files did work in IE when i tried them a while back.</p><p>I get:<br>Line: 13<br>Character: 11149<br>Code: 0<br>Error Message: Object required</p><p>A question: how would i execute the code when a user changes a select form object instead of a click like in your example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713794">37</a> by Raymond Camden
		posted on 3/21/2009 at 9:34 PM
		</div>
		<div class="comment_text"><p>I moved servers and probably forgot to move the folder. Will do so later today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713792">38</a> by Raymond Camden
		posted on 3/22/2009 at 11:36 PM
		</div>
		<div class="comment_text"><p>I fixed the demo Chad.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713793">39</a> by Hal Helms
		posted on 3/24/2009 at 3:46 PM
		</div>
		<div class="comment_text"><p>I've started a series for beginners to jQuery at <a href="http://disq.us/url?url=http%3A%2F%2Fhalhelms.com%2Fblog%3A2WYn0ikMBKO6cct7cKPUYBBBtwY&amp;cuid=3321886" rel="nofollow noopener" title="halhelms.com/blog">halhelms.com/blog</a>. It will concentrate on how to use jQuery with ColdFusion and may be helpful for newbies.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713795">40</a> by Gary Fenton
		posted on 4/3/2009 at 4:55 PM
		</div>
		<div class="comment_text"><p>@David McGuigan, the JCFC entry at RiaForge doesn't exist anymore. Have you pulled it down? Also your home page (linked via your comments here) says it's "gone private - au revour". Is JCFC dead or has it been moved elsewhere? Please advise. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713799">41</a> by chad
		posted on 4/9/2009 at 11:52 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>On the top example, once the CFM page results are placed into the div tag is it part of the page and you can call more jQuery against it's contents?</p><p>For example I want to make a page that a user selects a product via a drop down box.</p><p>I run jquery to go get all of that products colors and place them in the color picker DIV.</p><p>Now i want the user to choose a color and hide the color picker DIV and show what color the user picked in another div.</p><p>Then add the item to their shopping cart.</p><p>Doable?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713797">42</a> by Rob
		posted on 4/10/2009 at 5:19 PM
		</div>
		<div class="comment_text"><p>I was looking for jCFC today as well, curious to see it. As noted elsewhere, it's not on RIAforge anymore. What's up with that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713796">43</a> by Raymond Camden
		posted on 4/10/2009 at 5:28 PM
		</div>
		<div class="comment_text"><p>The developer asked me (fyi, I manage RIAForge, for folks who may not know) to remove it. He had his reasons, but I'll let him speak up if he wants.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713798">44</a> by Raymond Camden
		posted on 4/10/2009 at 5:57 PM
		</div>
		<div class="comment_text"><p>@chad: Yes, the content is injected into the DOM and is 'reachable' by normal means.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713803">45</a> by Chris Stewart
		posted on 5/1/2014 at 10:28 PM
		</div>
		<div class="comment_text"><p>How would I set this up so I am refreshing query results every 2 seconds via jquery?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713805">46</a> by Raymond Camden
		posted on 5/1/2014 at 10:42 PM
		</div>
		<div class="comment_text"><p>JavaScript provides a few different ways to do things in intervals.</p><p>window.setTimeout<br>window.setInterval<br>window.requestAnimationFrame</p><p>Most likely you want setTimeout. You can't use an interval because one ajax request may be slowed down do to network conditions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713806">47</a> by Chris Stewart
		posted on 5/1/2014 at 11:24 PM
		</div>
		<div class="comment_text"><p>Thanks for getting back to me. What element on the page should I apply this to? A DIV with the cfquery inside?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713804">48</a> by Raymond Camden
		posted on 5/1/2014 at 11:26 PM
		</div>
		<div class="comment_text"><p>I don't think it matters. You don't apply an interval to a div. An interval is just that - a timed called. Your logic, the one run at the particular time, THAT would update a div.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713809">49</a> by Chris Stewart
		posted on 5/1/2014 at 11:40 PM
		</div>
		<div class="comment_text"><p>Any chance of you posting a small example of this? I'm having trouble visualizing how it would work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713810">50</a> by Raymond Camden
		posted on 5/2/2014 at 2:03 AM
		</div>
		<div class="comment_text"><p>Which portion exactly? I mean, given it is easy to do Aajx w/ jQuery</p><p>$.get(some ul, function() {<br>//handle result here<br>});</p><p>The general way of doing this would be:</p><p>function doAjax() {<br>  $.get(some url, handler);<br>};</p><p>function handler(res) {<br>//im the code that handles the result<br>//when done, request a new ajax call in 2 seconds<br>window.setTimeout(doAjax, 2000);<br>});</p><p>//fire immediately<br>doAjax();</p><p>Does that logic make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713811">51</a> by Chris Stewart
		posted on 5/2/2014 at 2:43 AM
		</div>
		<div class="comment_text"><p>Ahhh I see now. Thanks! That makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713814">52</a> by Phillip Senn
		posted on 5/2/2014 at 6:33 PM
		</div>
		<div class="comment_text"><p>Thanks Ray!<br>I rarely use anonymous functions any more. I think you posted something a while back that expanded out the syntax like the one above and it really helped me.</p><p>Naming is really hard in programming, and I consider the naming of functions self-documentation.  By extracting the 2 handlers (which I call "done" and "fail"), then it more plainly shows the nature of the async operation.  Speaking of naming, I came across a post where someone called the variable coming back from the call as the "response" variable.   Wow that really helped me too!  I always say "return result" but in the calling routine, it would be function done(response).  It's just a little naming convention that has really helped me keep thing straight.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713813">53</a> by Chris Stewart
		posted on 5/29/2014 at 6:52 PM
		</div>
		<div class="comment_text"><p>One more question. I have this working now and refreshing every 2 seconds. It is returning the query data that I want. Does this only return output data or can it return form fields?</p><p>What I need to do is set the value of a cfselect option to an id number i am returning from the jquery refresh. I am trying to either bring the whole cfselect back or just the option tag with the id value and nothing seems to happen.</p><p>When I change my data.cfm page to just output the id number that is returned.</p><p>Is there something different you have to do to return something like this via the jquery examples in this thread?</p><p> &lt;option value="#id#"&gt;#name_last# #name_first#&lt;/option&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713812">54</a> by Raymond Camden
		posted on 5/29/2014 at 7:00 PM
		</div>
		<div class="comment_text"><p>"Does this only return output data or can it return form fields?"<br>I'm not quite sure I understand what you mean. When you make an Ajax request, you can get anything back really. It can be JSON data. It can be HTML - and that HTML could include form fields.</p><p>"What I need to do is set the value of a cfselect option to an id number i am returning from the jquery refresh. I am trying to either bring the whole cfselect back or just the option tag with the id value and nothing seems to happen. "<br>Oh, well if the drop down is already rendered, ie visible in the browser, all you really need back is the ID. Then you use JS to set the appropriate item as selected. I recommend against cfselect and would just use a regular select tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713817">55</a> by Chris Stewart
		posted on 5/29/2014 at 8:31 PM
		</div>
		<div class="comment_text"><p>Thanks for the help Ray. Here is how I have it set up:</p><p>I have a query that is only ever going to return either 1 record or zero results. Currently I have a cfselect that displays the results if any with a value of an ID number. I then have 10 other cfinputs that bind to the option value which is a unique ID number.</p><p>I am trying to figure out the best way to auto refresh that select option every couple of seconds so that when it sees a query result it updates the ID number value then all of the other cfinputs would bind and update thier info.</p><p>Does that make sense?</p><p>So I won't really need to set anything as selected since the recordcount will always be 1 or 0.</p><p>Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713816">56</a> by Raymond Camden
		posted on 5/29/2014 at 8:35 PM
		</div>
		<div class="comment_text"><p>I dont quite understand why you are using a cfselect then. If the idea is to put nothing in it, or one ID, it should be a text input, not a drop down.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713815">57</a> by Chris Stewart
		posted on 5/29/2014 at 9:00 PM
		</div>
		<div class="comment_text"><p>Yes I see your point. It could be a text input.</p><p>So I guess what I am wondering is if I am binding 10 cfinputs to one cfinput that is a driver input with a value of #ID# what is the best way to refresh the value of that driver input so that when there is a query recordcount update the ID value which in turn would update the other fields through the binds.</p><p>What I am doing is scanning a drivers license and OCRing the text fields/capturing the image. I am inserting all of that info into a DB table. So essentially when the scan happens I want all of that data to be displayed on the screen. Once the user fills out the rest of the fields and submits the record it will go back to an entry page with blank fields until the next scan. I have it all working how I want except for the 2 second refresh waiting for the next scan.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713818">58</a> by Raymond Camden
		posted on 5/29/2014 at 9:46 PM
		</div>
		<div class="comment_text"><p>Well your service could return 0 when there is no update and X where there is an ID, X beig the ID. The client side code would handle it appropriately.</p><p>Again though - I recommend against using cfinput.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713820">59</a> by Chris Stewart
		posted on 5/29/2014 at 9:50 PM
		</div>
		<div class="comment_text"><p>Thanks Ray. I'll play around with this a bit and see if I can work something out. I've already switched over to inputs by the way. I seem to be having better results than with cfinputs.</p></div>
	</div>
</div>
		