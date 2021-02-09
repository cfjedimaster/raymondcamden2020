
<div class="comment" id="c_1713676731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676731">1</a> by Andrew
		posted on 1/31/2008 at 7:17 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>  I can follow the code for the most part, but what I'm not understanding is the instantiation of the JavaScript function.  Specifically this line:</p><p>function showDetail(r){</p><p>What does the "r" refer to and how does the JavaScript function know when to fire?  Should &lt;cfajaxproxy&gt; have an id or name equal to r?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676719">2</a> by Raymond Camden
		posted on 1/31/2008 at 7:20 PM
		</div>
		<div class="comment_text"><p>r is the result from the server. It can be anything. In my case, r is a struct (look at the CF code).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676729">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676729">3</a> by Che
		posted on 1/31/2008 at 7:31 PM
		</div>
		<div class="comment_text"><p>I'm with Andrew. Where is 'r' defined? The CFC that is bound by the cfajaxproxy tag (getArtDetail) returns a struct 's' but is not set to a variable that I can see. What am I missing?</p><p>Could you just call it 'bozo' if you wanted to instead of 'r' as long as the 'onSuccess' value matches the function name?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676730">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676730">4</a> by Raymond Camden
		posted on 1/31/2008 at 7:38 PM
		</div>
		<div class="comment_text"><p>Yes, you can call it whatever. This is no different than a UDF in CF. Imagine this simple UDF:</p><p>&lt;cfscript&gt;<br>function hi() { var msg = "Hi world"; return msg; }<br>&lt;/cfscript&gt;</p><p>&lt;cfset result = hi()&gt;</p><p>In my udf that variable is called msg, but all I really return is the data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676728">5</a> by sean
		posted on 1/31/2008 at 11:57 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Let's say you had a cfc similar to yours execpt that there was also an init() method through which you passed the dsn and placed it in variables scope, which the other methods would reference as needed. Pretty standard fare, right?</p><p>But I can't seem to get this to work using cfajaxproxy. can you initialize a cfc into memory and then bind to it? I know there's an easy answer to this and I'm going to feel really dumb...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676736">6</a> by Raymond Camden
		posted on 2/1/2008 at 12:28 AM
		</div>
		<div class="comment_text"><p>Heh, I blogged on this about 8 days ago. :)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2008%2F1%2F22%2FAsk-a-Jedi-AjaxProxy-and-Application-Scoped-CFCs%3A_1JTanVo1Wow_QSfDv22ESXtci8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2008/1/22/Ask-a-Jedi-AjaxProxy-and-Application-Scoped-CFCs">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676733">7</a> by sean
		posted on 2/1/2008 at 12:31 AM
		</div>
		<div class="comment_text"><p>Perfect - thank you, Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676735">8</a> by RDB
		posted on 2/1/2008 at 2:47 AM
		</div>
		<div class="comment_text"><p>When I tried using the &lt;cfselect&gt;s as in your example, I got the error:</p><p>The value of the QUERY attribute is invalid. The 'Query' attribute must be defined if the 'Value', 'Display', or 'Group' attributes are defined.</p><p>The &lt;cfselect&gt;s have to be pared down to include only the bind, bindonload and name parameters in order to work properly. Or am I missing something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676734">9</a> by Raymond Camden
		posted on 2/1/2008 at 2:52 AM
		</div>
		<div class="comment_text"><p>Odd, it works just fine locally. You are using CF8, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676739">10</a> by RDB
		posted on 2/1/2008 at 3:18 AM
		</div>
		<div class="comment_text"><p>Yep, and as soon as I remove the "value" and "display" parameters it works fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676732">11</a> by Raymond Camden
		posted on 2/1/2008 at 4:00 AM
		</div>
		<div class="comment_text"><p>All I can suggest is checking to ensure you don't have an older CF8. Make sure you have final.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676738">12</a> by Andrew
		posted on 2/1/2008 at 4:23 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>  You were right...you don't have to define r to use it in the function.  When I got home I read the section in CFWACK VOl II, then I tried your code and it worked, except for the fact that not all media are represented in the art table.  For those media that do not have art associated with it, I get an error.  Other than that, I now understand how the code works and look forward to the opportunity to use it in my apps when it's appropriate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676741">13</a> by Joshua Curtiss
		posted on 2/3/2008 at 10:47 AM
		</div>
		<div class="comment_text"><p>Awesome. Straightforward example that shows how powerful ajaxproxy is. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676721">14</a> by Richard Baldwin
		posted on 3/21/2008 at 9:30 PM
		</div>
		<div class="comment_text"><p>Hey Gang,</p><p>I'm trying to bind a select box to two different buttons but so that the values in the select box will update anytime either of the two buttons are pressed. The only way I could get this to work was to pass useless variables to my cfc so I could use the @click handler. Is there another way to do this without have to pass unneeded variables?</p><p>&lt;cfform name="phoneRequestForm"&gt;<br>&lt;input name="addPhoneButton" type="button" value="Add Phone" onclick="insertPhone();" /&gt;<br>&lt;input name="deletePhoneButton" type="button" value="Delete Phone" onclick="deletePhone();" /&gt;<br>&lt;cfselect id="AvailableIDs" name="AvailableIDs" bind="cfc:phoneRequestMain.SelectAvailablePhones({addPhoneButton@click},{deletePhoneButton@click})" bindonload="true" value="PhoneID" display="PhoneID" /&gt;<br>&lt;/cfform&gt;</p><p>Ray - Love the blog... it has been a great help to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676722">15</a> by Raymond Camden
		posted on 3/21/2008 at 9:37 PM
		</div>
		<div class="comment_text"><p>So wait - are you saying you want the button click to call a CFC, but you don't want to pass any data? I'd probably just use onClick, and call a JS function that makes use of AjaxProxy to call then CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676723">16</a> by Richard Baldwin
		posted on 3/21/2008 at 10:07 PM
		</div>
		<div class="comment_text"><p>Right, my other js functions (insertPhone,deletePhone) uses AjaxProxy to update the database and I want to reflect those changes in my select that is bound to a cfc that just returns a list of phones. I could update the select in the callbackhandler for insertPhone and deletePhone (by making another ajax call to my SelectAvailablePhones cfc) but I thought binding would be neater. It seems like the purpose of binding is attach an element to changing data but maybe in this case it is more for binding to other changing elements.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676725">17</a> by Howard
		posted on 4/2/2008 at 8:27 PM
		</div>
		<div class="comment_text"><p>I get an errors when i try to run this example:</p><p>Error invoking CFC /art.cfc:  The MEDIAID argument passed to the getArt funtion is not of type numeric</p><p>Error invoking CFC /art.cfc:  The ARTID argument passed to the getArt funtion is not of type numeric</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676724">18</a> by Raymond Camden
		posted on 4/2/2008 at 11:39 PM
		</div>
		<div class="comment_text"><p>Can you show me this anywhere online Howard? I know it works for most folks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676726">19</a> by siby
		posted on 4/16/2008 at 7:40 PM
		</div>
		<div class="comment_text"><p>Howard, I too get the same errors. I tried Forta's example and got the same errors.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676727">20</a> by David Neale
		posted on 5/3/2008 at 9:26 AM
		</div>
		<div class="comment_text"><p>Error invoking CFC /art.cfc: The MEDIAID argument passed to the getArt funtion is not of type numeric</p><p>Error invoking CFC /art.cfc: The ARTID argument passed to the getArt funtion is not of type numeric</p><p>I get the same error bit I have no problem with Fortas example where he converts the query result to an array.</p><p>I'm running this on my local machine so I can't show anybody but I'm using Rays' code exactly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676737">21</a> by Raymond Camden
		posted on 5/3/2008 at 6:31 PM
		</div>
		<div class="comment_text"><p>If you can find a way to get it online I'd appreciate it. Otherwise I'm not sure what to recommend.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676742">22</a> by todd
		posted on 5/15/2008 at 7:29 AM
		</div>
		<div class="comment_text"><p>I'm at a complete loss. I've stripped this code down as far as it can possibly go, and there is nothing I can do to get the onSuccess function to fire. This is the HTML in its entirety:</p><p>&lt;!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fxhtml1%2FDTD%2Fxhtml1-transitional.dtd%3AlsD79NC9EpzB4LCkih033Se6Csw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">http://www.w3.org/TR/xhtml1...</a>"&gt;<br>&lt;html xmlns="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2F1999%2Fxhtml%3AA6NInarpbzWm6HKZDXlFrwZefzc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/1999/xhtml">http://www.w3.org/1999/xhtml</a>"&gt;<br>&lt;head&gt;<br>&lt;meta http-equiv="Content-Type" content="text/html; charset=utf-8" /&gt;<br>&lt;title&gt;Untitled Document&lt;/title&gt;</p><p>&lt;script&gt;<br>function noteRefresh(theResult) { <br>	alert('noteRefresh');<br>}<br>&lt;/script&gt;<br>&lt;/head&gt;</p><p>&lt;body&gt;</p><p>&lt;cfform name="theForm"&gt;<br>&lt;cfinput src="../img/pin_green.gif" value="7" type="image" id="pin7" name="pin7" width="16" height="16" alt="Subject 7"&gt;<br>&lt;/cfform&gt;</p><p>&lt;cfajaxproxy bind="cfc:cfc.getNote({pin7.value@mouseover})" onSuccess="noteRefresh" /&gt;</p><p>&lt;/body&gt;<br>&lt;/html&gt;</p><p>The cfc, which does nothing but return a string returns its string, according to the ?CFDEBUG debugger. Yet the onSuccess does not fire. FireBug breakpoints to not trip, nothing happens. I've moved the tags around, changed everything it's possible to change and still nothing. I even put var i; i = 1; in the function so that it didn't invoke any UI, but still nothing.</p><p>Do you haven /any/ idea why?</p><p>The cfc in its entirety is:</p><p>&lt;cfcomponent&gt;</p><p>&lt;cffunction name="getNote" access="remote" &gt;<br>&lt;cfargument name="id" type="numeric" required="yes" /&gt;</p><p>&lt;cfreturn "A string returned from cfc"&gt;<br>&lt;/cffunction&gt;</p><p>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676744">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676744">23</a> by todd
		posted on 5/15/2008 at 8:00 AM
		</div>
		<div class="comment_text"><p>Holy crap! I think I found it!!!</p><p>The directory containing the cfc has an Application.cfm that has a &lt;cfajaximport&gt; and &lt;htmlhead&gt; tag in it. If I remove those two from Application.cfm, it works!</p><p>So there must be some unwritten rule about not putting those in the application.cfm?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676747">24</a> by Raymond Camden
		posted on 5/15/2008 at 5:18 PM
		</div>
		<div class="comment_text"><p>Well, I'd definitely not put the cfhtmlhead in app.cfm as it would impact all requests. ANd cfajaximport really should be on the page it is needed on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676745">25</a> by Miles
		posted on 6/3/2008 at 7:07 AM
		</div>
		<div class="comment_text"><p>Ray, in response to Richard Baldwin's question, you said,</p><p>"Are you saying you want the button click to call a CFC, but you don't want to pass any data? I'd probably just use onClick, and call a JS function that makes use of AjaxProxy to call then CFC."</p><p>Would you mind showing a small example of this? All I am doing is having a text field display thevalue returned from my cfc function when a button is clicked - so am passing the button@click value, but it seems strange to have to have a function argument that accepts this value if it isn't being used in the function.</p><p>&lt;cfinput type="text" name="next_id" bind="cfc:mycfc.getNextID({get_next_id_button@click})" /&gt;</p><p>&lt;cffunction name="getNextID" access="remote" returntype="numeric"&gt;<br>    	&lt;cfargument name="useless_cfajax_argument" required="no" /&gt;<br>        ...<br>	&lt;cfreturn nextID&gt;<br>&lt;/cffunction&gt;</p><p>Great blog, Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676746">26</a> by Raymond Camden
		posted on 6/3/2008 at 3:43 PM
		</div>
		<div class="comment_text"><p>Sorry - what do you need an example of? It sounds like you get it - but you find it odd that you don't care about the value - but since this is a button, I think that's normal. We just care that the button was clicked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676748">27</a> by Tom
		posted on 9/9/2008 at 11:51 PM
		</div>
		<div class="comment_text"><p>THANK YOU RAY!</p><p>I've been poking around the internets, trying to find a simple way to populate multiple form fields from a single function in a CFC (i.e., I don't want to bind each of the CFINPUT fields and have 10 queries running against the DB)... and you did it for me!</p><p>I'm querying an employee record based on autosuggested e-mail in the first function and then using your CFAJAXPROXY to call the second function which populates the rest of the fields on the form.</p><p>Works perfectly and saves me much work and hair pulling!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676750">28</a> by Bill
		posted on 6/29/2009 at 10:49 PM
		</div>
		<div class="comment_text"><p>Thanks Ray!</p><p>Exactly the kind of example that I was looking for - short, sweet, and to the point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676749">29</a> by Ryan
		posted on 11/17/2009 at 1:17 AM
		</div>
		<div class="comment_text"><p>Ray, this is great. I can everything to work, except the values passed to the cftext and cfinput fields. Instead, it shows "undefined." And ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676752">30</a> by Raymond Camden
		posted on 11/17/2009 at 1:53 AM
		</div>
		<div class="comment_text"><p>No idea. I'd suggest looking w/ Firebug to see what data was returned.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676753">31</a> by Jojo Serquina
		posted on 1/27/2010 at 8:41 PM
		</div>
		<div class="comment_text"><p>I just want to add that one cannot use this comment tag when using cfajaxproxy bind:</p><p>"&lt;!-- some comment --&gt;"</p><p>I had to install firebug to find that out. I wasted a few hours beforehand. Strange that the returned data included those comments. I didn't read the entire cfajaxproxy doc, must have been documented..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676754">32</a> by Raymond Camden
		posted on 1/27/2010 at 8:43 PM
		</div>
		<div class="comment_text"><p>Thats an HTML comment. Of course it is returned. If you want a CF comment, you need to use 3 dashes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676757">33</a> by Jojo Serquina
		posted on 1/27/2010 at 9:16 PM
		</div>
		<div class="comment_text"><p>That's correct. I just didn't realized it was returning those comments, too. I ran firebug - lo and behold, there they are.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676756">34</a> by David Jacobson
		posted on 5/10/2010 at 9:52 PM
		</div>
		<div class="comment_text"><p>OK Ray, it's me again.  I ran this and I an getting the correct values returned from my cfc but it isn't displaying correctly within my form.  I ran with cfdebug and Firebug and still see the values and data. Any thoughts/ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676758">35</a> by David Jacobson
		posted on 5/10/2010 at 11:18 PM
		</div>
		<div class="comment_text"><p>Ray, guess what?  I'm stupid.  :)<br>Javascript is case sensitive I was doing r.subject but the cfc was returning SUBJECT.  Do you see a difference?  Duh!  So sorry to bug you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676762">36</a> by Raymond Camden
		posted on 5/11/2010 at 5:43 AM
		</div>
		<div class="comment_text"><p>No worries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676761">37</a> by Joe
		posted on 6/22/2010 at 11:02 AM
		</div>
		<div class="comment_text"><p>I got error: Error invoking CFC/art.cfc: Error Executing database Query.</p><p>Please help me remove the popup error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676759">38</a> by Joe
		posted on 6/22/2010 at 11:03 AM
		</div>
		<div class="comment_text"><p>Every time I reload the page I got the above mentioned error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676763">39</a> by Raymond Camden
		posted on 6/22/2010 at 3:09 PM
		</div>
		<div class="comment_text"><p>You have an error in art.cfc. You need to look at your exception log to see more details about the error. Or use a tool like Firebug to see the result in detail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676766">40</a> by Len Sparks
		posted on 8/17/2010 at 1:32 AM
		</div>
		<div class="comment_text"><p>Ray,<br>    I need to do exactly what you are doing so I was very excited when I found this blog entry.  I've closely adapted your code, but I get an error on the return from the from the cfc.  Here is the error message:<br>error:bind: Bind failed for select box LocationID, bind value is not a 2D array or valid serialized query</p><p>info:LogReader: LogReader initialized</p><p>info:global: Logger initialized</p><p>Thanks in advance,</p><p>:-}<br>Len</p><p>Here is the call:<br>&lt;cfselect bind="../cfc/cfc:hierchy.getLocs()" bindonload="true" name="Loc" size="1" value="LocationID" display="LocationName"/&gt;</p><p>Here is the code in the CFC:<br>	&lt;cffunction access="remote" name="getLocs" returntype="string"&gt;<br>		&lt;cfquery name="getLocQry" datasource="PHREDsevenInternalSQL"&gt;<br>            SELECT LocationName,Bu_Grp_ID<br>            FROM Locations<br>            Where IsActive=#TruVal#<br>        &lt;/cfquery&gt;<br>		&lt;cfreturn getLocQry&gt;		<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676765">41</a> by Raymond Camden
		posted on 8/17/2010 at 2:13 AM
		</div>
		<div class="comment_text"><p>Your cffunction has returntype=string, but it's a query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676764">42</a> by Len Sparks
		posted on 8/17/2010 at 3:45 AM
		</div>
		<div class="comment_text"><p>Ray,<br>Thanks for getting back to me.  I had already found that and fixed it but it didn't change the error.<br>:-}<br>Len</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676769">43</a> by Raymond Camden
		posted on 8/18/2010 at 3:17 PM
		</div>
		<div class="comment_text"><p>Use Firebug, or Chrome Dev tools, to see the JSON response. Cut and paste it into here - or if it is too big, use Pastebin.</p></div>
	</div>
</div>
		