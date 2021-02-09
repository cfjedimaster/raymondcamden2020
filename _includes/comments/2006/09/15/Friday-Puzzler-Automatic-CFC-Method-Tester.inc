
<div class="comment" id="c_1713657393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657393">1</a> by todd
		posted on 9/15/2006 at 5:57 PM
		</div>
		<div class="comment_text"><p>I would love to tackle this if I wasn't so busy.  I'll take a shot later today if no one has answered!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657403">2</a> by Justice
		posted on 9/15/2006 at 6:08 PM
		</div>
		<div class="comment_text"><p>I cant promise this is perfect, but I wrote this very thing a few months ago to do cfc testing.  This will get your dot notation cfc, retrieve arguments, and create the form to accept inputs, then it will execute the cfc and try and dump the results below.  Its not perfect, but it works!<br>(sorry its split into multi pages!)</p><p>Any feedback or refinement would be appreciated!</p><p>&lt;!---//  File index.cfm //---&gt;<br>&lt;script language="javascript"&gt;<br>var xmlhttp=false;<br>/*@cc_on @*/<br>/*@if (@_jscript_version &gt;= 5)<br>// JScript gives us Conditional compilation, we can cope with old IE versions.<br>// and security blocked creation of the objects.<br> try {<br>	xmlhttp = new ActiveXObject("Msxml2.XMLHTTP");<br> } catch (e) {<br>	try {<br>	 xmlhttp = new ActiveXObject("Microsoft.XMLHTTP");<br>	} catch (E) {<br>	 xmlhttp = false;<br>	}<br> }<br>@end @*/<br>if (!xmlhttp &amp;&amp; typeof XMLHttpRequest!='undefined') {<br>	xmlhttp = new XMLHttpRequest();<br>}</p><p>// function getfile will perform our request using our created xmlhttp object //<br>function doAction(div,action,urlvars) {<br>	var Current = action+"?RandomKey=" + Math.random() * Date.parse(new Date());<br>	if (urlvars.charAt(1) != " ") {<br>			var Current = Current+urlvars;<br>		}<br>	<a href="http://disq.us/url?url=http%3A%2F%2Fxmlhttp.open%3AKxbnNCbje5fFlTo9Xxaq-W1kv6s&amp;cuid=3321886" rel="nofollow noopener" title="xmlhttp.open">xmlhttp.open</a>("GET", Current, true);<br>	xmlhttp.onreadystatechange=function() {<br>		if (xmlhttp.readyState==4) {<br>		document.getElementById(div).innerHTML = xmlhttp.responseText;<br>		}<br>	}<br>	xmlhttp.send(null);<br>}</p><p>/* Function to parse through and create a string from a form of all form values */<br> function parseform(obj) {<br>    var getstr = "&amp;";<br>    for(i=0; i&lt;document.forms[0].elements.length; i++){<br>    		if(document.forms[0].elements[i].type == "checkbox") {<br>    			getstr += document.forms[0].elements[i].name + '=' + document.forms[0].elements[i].checked + '&amp;';<br>    		}<br>    		else {<br>	     		getstr += document.forms[0].elements[i].name + '=' + document.forms[0].elements[i].value + '&amp;';<br>       }<br>    	}<br>       /* finish up the url string so anything further appended is correct */<br>       getstr += '1=1';<br>    return getstr;<br> }<br>&lt;/script&gt;</p><p>&lt;BR&gt;&lt;BR&gt;&lt;BR&gt;&lt;BR&gt;<br>&lt;form name="cfc" action="javascript:void(0);" method="post" onsubmit="doAction('rslt','results.cfm',parseform(cfc)); return false;"&gt;<br>	Full CFC Name: &lt;input name="cfcname" onblur="doAction('opt','getMethods.cfm','&amp;cfc=' + this.value);"&gt; &lt;a href="javascript:void(0);" <br>		onclick="doAction('opt','getMethods.cfm','&amp;cfc=' + document.cfc.cfcname.value);"&gt;Get Methods&lt;/a&gt; &lt;BR&gt;<br>		&lt;div id="opt"&gt;<br>		CFC Method to call: <br>			&lt;select name="method"&gt;<br>					&lt;option value=""&gt;Enter a CFC first&lt;/option&gt;<br>			&lt;/select&gt;<br>			&lt;a href="javascript:void(0);" onclick="doAction('args','getArguments.cfm','&amp;cfc=' + document.cfc.cfcname.value + '&amp;method=' + document.cfc.method[document.cfc.method.selectedIndex].value)"&gt;Get Arguments&lt;/a&gt;&lt;BR&gt;<br>		&lt;/div&gt; <br>	&lt;div id="args"&gt;<br>		Select a method to populate arguments<br>	&lt;/div&gt;<br>	&lt;button type="submit" value="Submit"&gt;Submit&lt;/button&gt;<br>&lt;/form&gt;</p><p>&lt;div id="rslt"&gt;</p><p>&lt;/div&gt;<br>&lt;!---// End file index.cfm //---&gt;</p><p>&lt;!---// Begin file getMethods.cfm //---&gt;<br>&lt;cfsilent&gt;<br>	&lt;cfset messageCFC = createObject("component", "#URL.CFC#")&gt;</p><p>	&lt;cfset methods = getMetaData(messageCFC).functions&gt;</p><p>	&lt;cfset methodList = ' ' /&gt;<br>	&lt;cfloop from="1" to="#arrayLen(methods)#" index="i"&gt;<br>		&lt;cfif i eq arrayLen(methods)&gt;<br>			&lt;cfset methodList = methodList &amp; methods[i].name /&gt;<br>		&lt;cfelse&gt;<br>			&lt;cfset methodList = methodList &amp; methods[i].name &amp; ',' /&gt;<br>		&lt;/cfif&gt;	<br>	&lt;/cfloop&gt;</p><p>	&lt;cfset sortedList = listSort(methodList, "textnocase", "asc", ',') /&gt;<br>&lt;/cfsilent&gt;</p><p>&lt;cfoutput&gt;<br>CFC Method to call: <br>&lt;select name="method"&gt;<br>	&lt;option value=""&gt;Select Method&lt;/option&gt;<br>&lt;cfloop from="1" to="#listLen(sortedList, ",")#" index="i"&gt;<br>	&lt;option value="#listGetAt(sortedList, i)#"&gt;#listGetAt(sortedList, i)#&lt;/option&gt;<br>&lt;/cfloop&gt;<br>&lt;/select&gt;&lt;a href="javascript:void(0);" onclick="doAction('args','getArguments.cfm','&amp;cfc=' + document.cfc.cfcname.value + '&amp;method=' + document.cfc.method[document.cfc.method.selectedIndex].value)"&gt;Get Arguments&lt;/a&gt;&lt;BR&gt;<br>&lt;/cfoutput&gt;</p><p>&lt;!---// End file getMethods.cfm //---&gt;</p><p>&lt;!---// Begin file getAtguments.cfm //---&gt;<br>&lt;cfsilent&gt;<br>	&lt;cfset messageCFC = createObject("component", "#URL.CFC#")&gt;</p><p>	&lt;cfset arguments = getMetaData(messageCFC[URL.Method]).parameters&gt;</p><p>&lt;/cfsilent&gt;</p><p>&lt;cfoutput&gt;<br>	&lt;cfloop from="1" to="#ArrayLen(arguments)#" index="i"&gt;<br>		#Arguments[i].Name# &lt;input name="Arg_#arguments[i].Name#"&gt; &lt;cfif arguments[i].required&gt;&lt;font color="red"&gt;Required&lt;/font&gt;&lt;/cfif&gt;&lt;BR&gt;<br>	&lt;/cfloop&gt;<br>&lt;/cfoutput&gt;<br>&lt;!---// End file getArguments //---&gt;</p><p>&lt;!---// Begin file results.cfm //---&gt;<br>&lt;!---// Look at the URL scope for variables starting with ARG_ //---&gt;</p><p>&lt;cfset arguments = 'blank' /&gt;<br>&lt;cfset values = '0' /&gt;</p><p>&lt;cfloop collection="#URL#" item="URLVar"&gt;<br>	&lt;cfif Left(URLVar, 4) eq 'ARG_'&gt;<br>		&lt;cfset arguments = arguments &amp; ',' &amp; Replace(URLVar, 'ARG_', '') /&gt;<br>		&lt;cfset values = values &amp; ',' &amp; URL[URLVar] /&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfloop&gt;</p><p>&lt;!---// Delete our seed records from the lists //---&gt;<br>&lt;cfset arguments = listDeleteAt(arguments, 1, ',') /&gt;<br>&lt;cfset values = listDeleteAt(values, 1, ',') /&gt;</p><p>&lt;BR&gt;<br>Request Time: &lt;cfdump var="#TimeFormat(now(), "HH:MM:SS")#"&gt;&lt;BR&gt;<br>Arguments: &lt;cfdump var="#Arguments#"&gt;&lt;BR&gt;<br>Values: &lt;cfdump var="#Values#"&gt;&lt;BR&gt;&lt;BR&gt;<br>Return:&lt;BR&gt;</p><p>&lt;cfinvoke component="#url.cfcname#" method="#url.method#" returnvariable="Return"&gt;<br>	&lt;cfloop from="1" to="#ListLen(Arguments, ",")#" index="i"&gt;<br>		&lt;cfinvokeargument name="#listGetAt(arguments, i, ",")#" value="#listGetAt(values, i, ",")#"&gt;<br>	&lt;/cfloop&gt;<br>&lt;/cfinvoke&gt;</p><p>&lt;cfdump var="#return#"&gt;<br>&lt;!---// End file results.cfm //---&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657407">3</a> by todd
		posted on 9/15/2006 at 6:22 PM
		</div>
		<div class="comment_text"><p>Justice - how does your form handle argument inputs?  Does it handle different types?  I was thinking of something that evaluates data types and creates an appropriate form element per that type (I.E. Checkboxes for booleans...)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657404">4</a> by Justice
		posted on 9/15/2006 at 6:38 PM
		</div>
		<div class="comment_text"><p>Yea, I was thinking the same thing as I was looking through my code again, and a lot like you, I dont have a ton of time today to go through it.</p><p>Right now, my code wants the user to enter the right data types. =)  It definitly needs some refinement, and I think it would be pretty slick build the whole thing into a flex or cfform with all the code in a cfc using flash remoting.  Then we could build either a form or a data-grid asking for  arguments and enforce the typing there.</p><p>I will work up a new one and see what I can do, maybe this weekend.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657405">5</a> by todd
		posted on 9/15/2006 at 6:52 PM
		</div>
		<div class="comment_text"><p>This one definitely has my wheels spinning.  It's gonna be tough to handle some data types.  For structs I was thinking of a textarea that allows for key=value pairs to be input on separate lines.  That could be easily parsed into a struct and passed.  For queries, maybe a text area that allows an sql statement that is parsed into a query with a helper method and then passed?  One dimensional arrays could be handled like structs, but what about multi-dimensional?  What about XML, etc.  I can picture a bunch of helper functions that parse the data, but some things can be difficult to accept in a form.  Maybe for xml we allow for an upload of an external xml file to be passed?</p><p>Am I overthinking?  This could get complex.  I'd love to collaborate with you on this Justice, since I think a Flex version would kick ass.  I think this could be a good open source tool.  I'll be on vacation next week, but if you want some help the following week let me know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657408">6</a> by Kyle Hayes
		posted on 9/15/2006 at 8:08 PM
		</div>
		<div class="comment_text"><p>I am game for it of course....ah man....I'm working :-(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657409">7</a> by JAlpino
		posted on 9/15/2006 at 10:08 PM
		</div>
		<div class="comment_text"><p>To expand on todd's thoughts of handling different argument types,  what about handling types like 'any' or a component instance?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657410">8</a> by Raymond Camden
		posted on 9/15/2006 at 10:18 PM
		</div>
		<div class="comment_text"><p>I would say don't worry about it Jalpino - I'm imaging this tool being used for more simple testing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657411">9</a> by Michael White
		posted on 9/17/2006 at 11:37 PM
		</div>
		<div class="comment_text"><p>this seems like it would be a very useful utility... like maybe an entire contest instead of just a one-day thing</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657413">10</a> by Raymond Camden
		posted on 9/18/2006 at 5:40 PM
		</div>
		<div class="comment_text"><p>Hey, all power to you or anyone who wants to do this. As I'm in the middle of a contest now I can't start a  new one. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713657412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713657412">11</a> by Stephen Moretti
		posted on 9/18/2006 at 6:40 PM
		</div>
		<div class="comment_text"><p>You could probably do this all remotely using AJAX, Flash CFForm or Flex using a facade cfc.  Using the facade would mean that it didn't matter if the requested component and method didn't have remote access.</p><p>The facade cfc would take the component name and pass back a set of methods that it knows can be rendered by the form eg. simple datatypes; bool, date, guid, numeric, string, uuid and possibly xml.  That list of methods would populate a drop down which would send another request for the parameters of the user selected method.</p><p>Using the params you could probably relatively easily generate a set of form fields.  Completing the generated form would return you a dump of the result set.  I guess the "dump" would vary depending on the returntype of the method.</p><p>I don't think you could simply automatically post the generated form.  Randomising strings and dates, while they might be ok for testing invalid data, doesn't really allow for submitting valid test cases.</p><p>Anyway... just toying with ideas....</p></div>
	</div>
</div>
		