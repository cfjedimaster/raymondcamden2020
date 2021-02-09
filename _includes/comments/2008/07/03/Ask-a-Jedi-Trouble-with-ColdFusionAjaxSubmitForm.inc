
<div class="comment" id="c_1713682613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682613">1</a> by Rick Smith
		posted on 7/3/2008 at 8:55 PM
		</div>
		<div class="comment_text"><p>I can't say how hard I laughed at the link to "programming languages"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682611">2</a> by Chris Schofield
		posted on 7/3/2008 at 9:39 PM
		</div>
		<div class="comment_text"><p>Great information, Ray! Thanks for asking Andy! And not to take away from the post itself, but ditto on Rick's comment. Classic!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682617">3</a> by Andy Sandefer
		posted on 7/3/2008 at 9:58 PM
		</div>
		<div class="comment_text"><p>LOLOLOLOL<br>The PHP link made me chuckle but the Lohan reference was the real comedy here folks!</p><p>Thanks a bunch!<br>Andy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682620">4</a> by Joshua Curtiss
		posted on 7/16/2008 at 2:04 AM
		</div>
		<div class="comment_text"><p>Thanks for the link to my post, Ray! The code view plugin for WordPress apparently gobbled up the backslashes in the trim function code and I overlooked that after posting it. It's fixed now. That's what I get for using a PHP-based blogging engine.  ;-D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682616">5</a> by Edward Beckett
		posted on 10/20/2008 at 3:38 AM
		</div>
		<div class="comment_text"><p>This is the exact problem I'm also having ... I have two CFSelects bound to functions in a CFC to populate the option values asynch. NP there ... However, I'm trying to submit the form to a CFWindow through ColdFusion.Ajax.submitForm and the results don't populate to the destination window.</p><p>Here's some code .... The originating form page ...</p><p>  showIt = function() {<br>	ColdFusion.Window.create("gotopage","Find a Location","gotopage.cfm",{center:true,modal:true,draggable:true,width:550,height:375})<br>}</p><p> 	submitForm = function() {<br>	console.log('running...');  ColdFusion.Ajax.submitForm("stateLookUp","gotopage.cfm",showIt);<br>	console.log('done...');<br>	 return false; <br>	}</p><p>&lt;cfform name="stateLookUp" id="stateLookUp" onSubmit="return submitForm()" method="post"&gt; <br>&lt;div id="stateContainer" &gt;<br>&lt;div align="center"&gt;&lt;h3 style="margin-right:150px;"&gt;Please Select a State&lt;/h3&gt;&lt;/div&gt;<br>  &lt;cfselect name="state" id="state" bind="cfc:blog.com.bindFcns.getstates()" bindonload="true" value="#form.state#" &gt;<br>    &lt;option name="0"&gt;State&lt;/option&gt;<br>    &lt;/cfselect&gt;<br>      &lt;cfselect name="city" id="city" bind="cfc:blog.com.bindFcns.getcities({state})" value="#<a href="http://disq.us/url?url=http%3A%2F%2Fform.city%3ARx_jo6SVPVmuPGoZiy8jqIF9juE&amp;cuid=3321886" rel="nofollow noopener" title="form.city">form.city</a>#"&gt;<br>      &lt;option name="0"&gt;City&lt;/option&gt;<br>      &lt;/cfselect&gt;<br>    &lt;cfinput type="submit" name="submit" value="Submit" id="Submit"  /&gt;<br>&lt;/div&gt;<br>&lt;/cfform&gt;</p><p>-----------------<br>The Window Page ... <br>-----------------<br>&lt;cfparam name="form.state" default=""&gt;<br>&lt;cfparam name="<a href="http://disq.us/url?url=http%3A%2F%2Fform.name%3A8L59kUUruK3jhxCyq6Z5hBRsbPU&amp;cuid=3321886" rel="nofollow noopener" title="form.name">form.name</a>" default=""&gt;<br>&lt;cfparam name="<a href="http://disq.us/url?url=http%3A%2F%2Fform.city%3ARx_jo6SVPVmuPGoZiy8jqIF9juE&amp;cuid=3321886" rel="nofollow noopener" title="form.city">form.city</a>" default=""&gt;</p><p>&lt;cfoutput&gt; <br>&lt;p&gt;<br>The State Submitted &amp;##187; &lt;cfoutput&gt;#form.state#&lt;/cfoutput&gt; &lt;br&gt; &lt;br&gt;<br>The City Submitted &amp;##187; &lt;cfoutput&gt;#<a href="http://disq.us/url?url=http%3A%2F%2Fform.city%3ARx_jo6SVPVmuPGoZiy8jqIF9juE&amp;cuid=3321886" rel="nofollow noopener" title="form.city">form.city</a>#&lt;/cfoutput&gt;<br>&lt;/p&gt;<br>&lt;/cfoutput&gt;</p><p>Result ... Nada ... Got a clue? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682614">6</a> by Andy Sandefer
		posted on 10/20/2008 at 8:30 PM
		</div>
		<div class="comment_text"><p>@Edward<br>You really don't need to have the submit button and call submitForm() like that.  Take the post and the onSubmit out of there and just call submitForm in the onClick of a button.  It probably doesn't matter but you also don't need id and name values for the inputs - just use name and let CF do the rest (I doubt if this is causing any problems but it never hurts to simplify your code).<br>I really don't understand what's going on here but I haven't really seen the entire thing in action so I'll just add that Ajax.submitForm is typically called to pass form data to a handler/script page that interacts with the database.  Do you really need to post this stuff?  If not then get the values of the selects and send them as URL params through your cfwindow function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682615">7</a> by Edward Beckett
		posted on 10/20/2008 at 8:45 PM
		</div>
		<div class="comment_text"><p>@Andy ... <br>"Ajax.submitForm is typically called to pass form data to a handler/script page"</p><p>I'm attempting to send the form data to open in a CFWindow ...</p><p>My code's probably not the cleanest I'm sure ... sometimes I'm unsure what is and isn't necessary for a specific scenario and I end up just throwing in everything to "get it working" :)</p><p>I think my main problem is in the CallBack ... (showIt) But, I'm not sure ... thanks for your input.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682618">8</a> by Andy Sandefer
		posted on 10/20/2008 at 8:54 PM
		</div>
		<div class="comment_text"><p>If this is some kind of step by step form entry then you can just save it in session vars and then load the page or you can use js to get the values and pass them as URL vars in the showIt function you invoke the cfwindow.  You're trying to post to a page and then pull up the same instance of the page that you're posting to in a window object and I don't think that you can do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682621">9</a> by Chris
		posted on 12/2/2008 at 9:58 PM
		</div>
		<div class="comment_text"><p>Can you use ColdFusion.Ajax.submitForm with a cfform format= flash?<br>&lt;cfsavecontent variable="doThis"&gt;<br>   getURL("javascript:submitFilterFormOff()");<br>&lt;/cfsavecontent&gt;<br>&lt;script language="javascript"&gt;<br>   function submitFilterFormOff() {<br>        ColdFusion.Ajax.submitForm('filterForm', 'set_ind_filter_cookies.cfm', callbackac,<br>            errorHandlerb);<br>    }</p><p>    function callbackac(text)<br>    {<br>				ColdFusion.navigate('user_offline_assign_ind_filter_resultsnc_panel.cfm', 'divFilterResultsOff');<br>				return<br>    }</p><p>    function errorHandlerb(code, msg)<br>    {<br>        alert(msg);<br>    }<br>&lt;/script&gt;</p><p>I get the javascript to fire but then get an alert saying form ID not found</p><p>Thanks for any help</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682625">10</a> by Raymond Camden
		posted on 12/2/2008 at 10:04 PM
		</div>
		<div class="comment_text"><p>No idea, but once again I'll echo my recommendation to avoid Flash Forms and just use 'real' Flex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682624">11</a> by Gavy
		posted on 12/17/2008 at 11:24 AM
		</div>
		<div class="comment_text"><p>Hi Ray! I am using the Same Stuff as you but i did get any relevant output.</p><p>does this console.log works only with firefox or with all browsers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682622">12</a> by Andy Sandefer
		posted on 12/17/2008 at 7:39 PM
		</div>
		<div class="comment_text"><p>You need firebug (A very awesome firefox add-on)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fgetfirebug.com%2F%3AdSd7qcQ0D8jlLJmB5-CpQXU5pmA&amp;cuid=3321886" rel="nofollow noopener" title="http://getfirebug.com/">http://getfirebug.com/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682623">13</a> by Ray Meade
		posted on 4/27/2010 at 7:28 PM
		</div>
		<div class="comment_text"><p>Ray, is there full Flex support in CF8 and if so, how difficult would it be for me to learn Flex after using CF for a few years? I too have had many issues (albeit minor ones) using flash forms in CF, particularly with alignment (I have a small area that contains a photo of the member and some links and everything's pushed to the left and if I try to narrow the area to bring the right side in, it drops everything down instead) and form submission. (our people here are really annoyed that they can't just hit "Enter" to submit a form)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682626">14</a> by Ray Meade
		posted on 4/27/2010 at 7:36 PM
		</div>
		<div class="comment_text"><p>Oh and I almost forgot...can I develop Flex apps. totally from within CF or do I need a Flex SDK or something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682627">15</a> by Raymond Camden
		posted on 4/30/2010 at 7:30 AM
		</div>
		<div class="comment_text"><p>"Flex support in CF8" can mean many things. They are completely different technologies. CF is a server side program, Flex generates Flash. Now they can definitely speak to each other. Flash and CF can communicate in multiple ways - the best being Flash Remoting.</p><p>I think Flex is easy to learn - but I find the latest Flex to be a bit harder to grok.</p><p>Ignore Flash Forms. Don't bother with em. Learn Flex instead. :)</p><p>You do not need CF to develop Flex apps. Period. All you need is the Flex SDK.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682628">16</a> by Bryan
		posted on 7/16/2012 at 5:30 PM
		</div>
		<div class="comment_text"><p>OK I know this is an old post but this was the best description of how to solve this problem I found except for ONE SMALL POINT and that only concerns they way my pages work.</p><p>This example works great if your form action page refers to itself.  In my case the action page is a different CF page where some heavy duty processing occurs.</p><p>So here's how I got my process to work:<br>From the initiating page the button that starts everything off:<br>&lt;cfinput type="button" label="Save" value="Save" name="Save" onClick="assign();"/&gt;</p><p>The java script:<br>function assignTheExaminer () {<br>  ColdFusion.Ajax.submitForm('frmAssign', 'act_assign.cfm', callback, errorHandler);<br>}</p><p>My action page now does its thing with this addition which is the bit I want to return to the javascript:<br>&lt;cfoutput&gt;#res#&lt;/cfoutput&gt;&lt;!--- res is the result I want to return to the javascript---&gt;</p><p>Now my call back function in the javascript:</p><p>function callback(result){<br>	if (result &lt; 0) {alert('A problem occurred.');}<br>}//test the value to see if an error condition occurred.</p><p>I only had to handle the &lt;cfoutput&gt; tag in the action page to make it work.</p><p>Thanks, Ray for work you did 4 years ago.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682630">17</a> by Bryan
		posted on 7/16/2012 at 5:33 PM
		</div>
		<div class="comment_text"><p>Yes - I see the typo in the name of the js function. Sorry.  I was trying to be less detailed.</p></div>
	</div>
</div>
		