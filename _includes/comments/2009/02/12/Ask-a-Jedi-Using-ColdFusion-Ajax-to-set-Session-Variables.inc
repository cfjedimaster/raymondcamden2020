
<div class="comment" id="c_1713712905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712905">1</a> by James Brown
		posted on 2/13/2009 at 8:50 AM
		</div>
		<div class="comment_text"><p>Ray, thank you so much!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712911">2</a> by Glyn Jackson
		posted on 2/13/2009 at 3:16 PM
		</div>
		<div class="comment_text"><p>on the same sort of wave length 'but the other way around' if you need to get server side data via Javascript for example a query inside a CFC you can create the CFC as a JavaScript object e.g. <br>&lt;cfajaxproxy cfc="components.something" jsclassname="callsomething"/&gt;</p><p>this has been my life saver over the last few weeks, I love ColdFusion!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712910">3</a> by Eric  Belair
		posted on 2/13/2009 at 7:19 PM
		</div>
		<div class="comment_text"><p>Are there any security concerns with this logic? I know this example simply uses a "name" variable, but, it doesn't seem safe to be setting session or client variables with a URL param. Would it be possible/safer to use a CFC with arguments to do this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712906">4</a> by Raymond Camden
		posted on 2/13/2009 at 7:21 PM
		</div>
		<div class="comment_text"><p>Using a CFC would be no safer at all. It would just be a different way to do it. It would be no safer than switching to using a form either. By the same token, it is no less safe. Any session/client variable that you let someone set should be secured if it needs to be. There is no need to worry about someone setting their favorite color, for example. Letting them set their discount for a shopping cart would be a problem though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712912">5</a> by Glyn Jackson
		posted on 2/13/2009 at 7:48 PM
		</div>
		<div class="comment_text"><p>Security in both cases would only be as good as the developers code. a CFC would have to be access remote for this to work, but anything passed to the server needs to be checked and cleaned regardless of the methoud being used.</p><p>In the case of a shopping cart, I have used a CFC as a Javascript object, but nothing gets written to the cart directly using the object, everything is checked against the a database so price and description have to match also its cleaned from injection etc... but the same goes for anything like cfhttp calls etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712907">6</a> by Eric  Belair
		posted on 2/13/2009 at 7:51 PM
		</div>
		<div class="comment_text"><p>Yes, it makes sense now. I forgot that in order for AJAX to call a CFC, it would have to be remote. I should know that, because that's what I've been doing for my Flex apps for the past two years.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712908">7</a> by BrianO
		posted on 2/14/2009 at 2:45 AM
		</div>
		<div class="comment_text"><p>I wouldn't have thought of that list trick with "&amp;{btn@click}". I would have thought that would have returned some value like 1. Cool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712909">8</a> by Sam
		posted on 4/2/2009 at 7:07 PM
		</div>
		<div class="comment_text"><p>I have recently had CF8 installed and now trying to get to grips with the news features.</p><p>When i try the script above and click the 'set' button, I get a big popup error saying 'Error parsing JSON response:' followed by the HTML of the page.</p><p>Any idea where I'm going wrong?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712913">9</a> by Raymond Camden
		posted on 4/2/2009 at 7:09 PM
		</div>
		<div class="comment_text"><p>Use Firebug and take a look at what CF returned. It is probably an error and it will tell you more about what went wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712914">10</a> by Sam
		posted on 4/2/2009 at 7:26 PM
		</div>
		<div class="comment_text"><p>Wowza, super fast response thanks Raymond.</p><p>I will start a topic in the forum about this, so I don't pollute the comments area here.</p><p>I'm having trouble working this out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712916">11</a> by Dishika
		posted on 10/8/2009 at 4:35 PM
		</div>
		<div class="comment_text"><p>I created a similar script as above and added an onsuccess attribute to perform a javascript function if the bind is successful. But the bind was not performed. My code is as follows:</p><p>File temp.cfm<br>  function test1()<br>   {<br>   alert("hello");<br> }</p><p> &lt;form&gt;<br>set name : &lt;input type="text" name="name" /&gt;&lt;input type="button" id="btn" /&gt;<br>&lt;/form&gt;</p><p>  &lt;cfajaxproxy bind="url:test.cfm?name={name@none}&amp;{btn@click}" onSuccess = "test1();"&gt;</p><p>File test.cfm</p><p>&lt;cfset session.temp = "<a href="http://disq.us/url?url=http%3A%2F%2Furl.name%3A3WK0Vfelwgeh85IlQQuWNU70c_s&amp;cuid=3321886" rel="nofollow noopener" title="url.name">url.name</a>"&gt;</p><p>But it not working as the variable session is being set <a href="http://disq.us/url?url=http%3A%2F%2Furl.name%3A3WK0Vfelwgeh85IlQQuWNU70c_s&amp;cuid=3321886" rel="nofollow noopener" title="url.name">url.name</a> and not the value from the input.</p><p>Please help as it is very important</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712915">12</a> by Raymond Camden
		posted on 10/8/2009 at 4:52 PM
		</div>
		<div class="comment_text"><p>Your button uses an ID of "btn". Switch that to name="btn".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712917">13</a> by El
		posted on 4/26/2010 at 5:03 PM
		</div>
		<div class="comment_text"><p>Ray! YOu are a lifesaver!!!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712920">14</a> by Jim Papaleo
		posted on 5/11/2010 at 11:27 PM
		</div>
		<div class="comment_text"><p>Ray,  I'm using jqGrid and I want use CFwindow to pop a modal window to display dynamic data.  I'm having trouble passing the value of the grid to my window.</p><p>How do I bind to a non form object?</p><p>Thanks,  Jim</p><p>This is what I have.</p><p>&lt;cfajaxproxy bind="url:ShipDetail.cfm?thisSN={SN}"&gt;  &lt;!--- my bind ---&gt;</p><p>// my grid event<br>onCellSelect: function(rowid,iCol,cellcontent){<br>       var SN = +cellcontent;   // trying to set the bind here<br> if (iCol == 0) {<br>    <a href="http://disq.us/url?url=http%3A%2F%2FColdFusion.Window.show%3Aut5RVMiY3vZkqHf_0Bd7-NzWCNM&amp;cuid=3321886" rel="nofollow noopener" title="ColdFusion.Window.show">ColdFusion.Window.show</a>('Shipments');  // display my cfwindow<br>   }<br> },</p><p>My cfwindow:<br>  &lt;cfwindow name="Shipments"<br>	title="Shipments"<br>	modal="true"<br>	resizable="true"<br>	center="true"<br>	initshow="false"<br>	source="ShipDetail.cfm"&gt;        &lt;/cfwindow&gt;</p><p>ShipDetail.cfm contains the cfc and code to display value based on   thisSN, which is what I'm trying to bind.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712921">15</a> by Raymond Camden
		posted on 5/12/2010 at 6:44 AM
		</div>
		<div class="comment_text"><p>I wouldn't. Remember there is a JS api to create/manipulate CFWINDOWs. Just use that.</p></div>
	</div>
</div>
		