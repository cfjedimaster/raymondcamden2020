
<div class="comment" id="c_1713726123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726123">1</a> by John McC
		posted on 10/25/2012 at 11:07 PM
		</div>
		<div class="comment_text"><p>I have a form page with the kind of code you suggest and a post page. The form page sends the field "selected" and it send the correct number of values according to the multirowselect number of checked rows, but the values are all "undefined" whereas they should be ID integers. I include the script, grid code, and debugging info:</p><p>&lt;!-- <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2010%2F8%2F28%2FCF901-CFGRIDs-new-multirowselect-feature%3AEGO5qjTMojcUwByH_MTHVr8Zq7s&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2010/8/28/CF901-CFGRIDs-new-multirowselect-feature">http://www.raymondcamden.co...</a> --&gt;<br>&lt;script&gt;<br>function fixMe() {<br>    obj = ColdFusion.Grid.getSelectedRows('chron_grid_master');<br>    var selected = "";<br>    for(var i=0; i&lt;obj.length; i++) {<br>        if(selected == "") selected = obj[i].HistoryMasterID;<br>        else selected += "," + obj[i].HistoryMasterID;<br>    }<br>    document.getElementById('selected').value = selected;<br>    return true;<br>}<br>&lt;/script&gt;</p><p>&lt;table class="tableelements" width="100%" align="center" cellpadding="5" border="0"&gt;<br>&lt;tr&gt;<br>&lt;td align="center"&gt;<br>&lt;cfform action="chron_action_finishgrid.cfm" method="post" onSubmit="return fixMe()"&gt;<br>&lt;cfgrid name="chron_grid_master" query="McCVersion" rowheight="20" width="720" colheaderalign="center" collapsible="true" groupfield="ColumnName" fontsize="14" format="html" title="Grouping of Historical Events (collapsible)" multirowselect="Yes"&gt;<br>    &lt;cfgridcolumn name="HistoryMasterID" display="no"&gt;<br>    &lt;cfgridcolumn name="EventYear" header="year" width="40"&gt;<br>    &lt;cfgridcolumn name="MonthText" header="month" width="45"&gt;<br>    &lt;cfgridcolumn name="ColumnName" header="focus" bold="yes" width="50"&gt;<br>    &lt;cfgridcolumn name="CategoryShortName" header="group" width="45"&gt;<br>    &lt;cfgridcolumn name="ChronEvent" header="Albany event" headerbold="yes" width="500"&gt;<br>&lt;/cfgrid&gt;<br>&lt;/td&gt;<br>&lt;/tr&gt;<br>&lt;tr&gt;<br>&lt;td align="center"&gt;<br>&lt;cfinput type="hidden" name="selected" id="selected"&gt;<br>&lt;input name="submit" type="submit" value="Submit"&gt;<br>&lt;/cfform&gt;<br>&lt;/td&gt;<br>&lt;/tr&gt;<br>&lt;/table&gt;</p><p>Form Fields:<br>CHRON_GRID_MASTER=<br>FIELDNAMES=SELECTED,SUBMIT,__CFGRID__CFFORM_2__CHRON_GRID_MASTER<br>SELECTED=undefined,undefined,undefined<br>SUBMIT=Submit<br>__CFGRID__CFFORM_2__CHRON_GRID_MASTER=</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726122">2</a> by Raymond Camden
		posted on 10/29/2012 at 5:57 AM
		</div>
		<div class="comment_text"><p>It looks right to me. Try this.<br>After the "for" statement, add:</p><p>console.dir(obj[i])</p><p>and look in your JavaScript console. Tell me what you see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726128">3</a> by John McClintock
		posted on 10/29/2012 at 10:49 PM
		</div>
		<div class="comment_text"><p>If I place console.dir(obj[i]) within the script, I lose the submission of undefined, undefined, etc. in "selected" If I put it outside the script, I get a page error "console undefined." So I added a piece of script I found on Stackoverflow. In all cases (because Java workings are new to me) I cannot get the Java Console to stay open or to stick in the system tray to report on fixMe(). Here is the script at present:</p><p>&lt;script type="text/javascript"&gt;<br>function fixMe() {<br>    obj = ColdFusion.Grid.getSelectedRows('chron_grid_master');<br>    var selected = "";<br>	for (var i=0; i&lt;obj.length; i++) {<br>        if(selected == "") selected = obj[i].HistoryMasterID;<br>        else selected += "," + obj[i].HistoryMasterID;<br>	}<br>	document.getElementById('selected').value = selected;<br>	return true;<br>}<br>// <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F3767924%2Fjs-override-console-log-if-not-defined%3AYXWh7-mh9JWK2WVNAjZh8WSeGcc&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/3767924/js-override-console-log-if-not-defined">http://stackoverflow.com/qu...</a><br>// entry by AndyE<br>if (typeof console == "undefined") {<br>    window.console = {<br>        log: function () {}<br>    };<br>}<br>console.log("fixMe");<br>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726125">4</a> by Raymond Camden
		posted on 10/29/2012 at 11:07 PM
		</div>
		<div class="comment_text"><p>The console undefined message means you are using a browser that does not support the JavaScript console. You should switch, at least temporarily, to one that does. Any modern Firefox, Chrome, Safari, or IE9 and higher will be fine. You also want to add a return false right after. That stops the form from submitting and allowing you to see what was printed to the console.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726121">5</a> by John McClintock
		posted on 10/30/2012 at 12:12 AM
		</div>
		<div class="comment_text"><p>Switched from IE 8 to Firefox 16.0.1<br>No longer getting page error "console not defined"<br>Submission string for selected still "undefined, undefined, etc.<br>Java Console stays open. Logging set to true.<br>Nothing recorded in console upon page submission. Script is now:<br>&lt;script&gt;<br>function fixMe() {<br>    obj = ColdFusion.Grid.getSelectedRows('chron_grid_master');<br>    var selected = "";<br>    for(var i=0; i&lt;obj.length; i++) {<br>        if(selected == "") selected = obj[i].HistoryMasterID;<br>        else selected += "," + obj[i].HistoryMasterID;<br>    }<br>    document.getElementById('selected').value = selected;<br>    console.dir(obj[i])<br>    return true;<br>}<br>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726126">6</a> by Raymond Camden
		posted on 10/30/2012 at 1:38 AM
		</div>
		<div class="comment_text"><p>Change the last return true to false. This will temporarily stop the form from submitting, but you will see something in the JavaScript console.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726124">7</a> by John McClintock
		posted on 10/30/2012 at 5:23 PM
		</div>
		<div class="comment_text"><p>Actually, return true or return false, nothing is written to the Java console, whether it is open or closed. Perhaps there is a problem in the environment (XP) or CF settings that I don't see or understand. We can let it drop unless you would like to see the whole page or have another diagnostic tool I could try.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726127">8</a> by Raymond Camden
		posted on 10/30/2012 at 5:40 PM
		</div>
		<div class="comment_text"><p>To be clear, are you using the JavaScript Console? That is not the same as the "Java" Console.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726130">9</a> by John McClintock
		posted on 10/30/2012 at 6:23 PM
		</div>
		<div class="comment_text"><p>No, I was using Java console. I opened Javascript Console, got the key, inserted the key into the page, edited the function  return to false, updated the page, called it, pressed submit, got confirmation of connection, and here is the log:<br>remote console.loglink<br>undefined</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726132">10</a> by Raymond Camden
		posted on 10/30/2012 at 6:30 PM
		</div>
		<div class="comment_text"><p>JOhn, I have no idea what you are talking about in terms of 'key'. These posts may help:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2011%2F6%2F15%2FExample-of-using-Chrome-Dev-tools-to-solve-Ajax-issues%3A0Oam2aUdjw1HG-Xj0pmr_x0B_7U&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2011/6/15/Example-of-using-Chrome-Dev-tools-to-solve-Ajax-issues">http://www.raymondcamden.co...</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.developria.com%2F2009%2F06%2Fquick-video-example-of-firebug.html%3A2Z7d9MEt3xq2qW1w_BZvv2lzAFU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.developria.com/2009/06/quick-video-example-of-firebug.html">http://www.developria.com/2...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726131">11</a> by John McClintock
		posted on 10/30/2012 at 9:49 PM
		</div>
		<div class="comment_text"><p>referring to your line 23:<br>&lt;input type="hidden" name="selected" id="selected"&gt;</p><p>Is "selected" defined in your CSS?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726136">12</a> by Raymond Camden
		posted on 10/30/2012 at 11:05 PM
		</div>
		<div class="comment_text"><p>It's a hidden form field simply used to store data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726135">13</a> by John McClintock
		posted on 10/31/2012 at 6:17 PM
		</div>
		<div class="comment_text"><p>No, I actually was wondering to what the id="selected" was referring within the line: &lt;input type="hidden" name="selected" id="selected"&gt;</p><p>BUT, using Firebug [thank you for that tip], I have pinpointed the problem for me within the function fixMe()</p><p>1) getSelectedRows works fine<br>2) obj[i] shows correctly in this line:<br>if(selected == "") selected = obj[i].HistoryMasterID;<br>AS the column names and data of the selected rows and shows IN THE ROWS the two HistoryMasterIDs with their exact values in those selected rows.<br>3) however, the second part of obj[i].HistoryMasterID in that same line, namely the HistoryMasterID, shows "undefined"<br>4) so, for some reason, the function gets the rows and shows the correct column names and values, but does not pluck the value from obj[i].HistoryMasterID</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726137">14</a> by John McClintock
		posted on 10/31/2012 at 9:09 PM
		</div>
		<div class="comment_text"><p>Issue solved. In Lines <br>if(selected == "") selected = obj[i].HistoryMasterID;<br>else selected += "," + obj[i].HistoryMasterID;</p><p>HISTORYMASTERID must be in all caps<br>"selected" then has the primary key values I wanted and they are sucessfully posted to the action page.</p><p>Many many thanks for this fixMe() script</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726138">15</a> by Raymond Camden
		posted on 10/31/2012 at 10:10 PM
		</div>
		<div class="comment_text"><p>In terms of IDs, it is a way to uniquely identify a part of the DOM. It doesn't relate to anything else. Consider this HTML:</p><p>&lt;div id="region1"&gt;&lt;/div&gt;<br>&lt;div id="region2"&gt;&lt;/div&gt;</p><p>The ID values must be (should be) unique and not repeated. The ID then gives me an easy way to "address" it via JavaScript.</p></div>
	</div>
</div>
		