
<div class="comment" id="c_1713680045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680045">1</a> by John Whish
		posted on 4/22/2008 at 1:54 PM
		</div>
		<div class="comment_text"><p>Love the call signs: iceman, maverick, and goose. Surprised you didn't use Red Leader!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680046">2</a> by CV
		posted on 4/22/2008 at 3:03 PM
		</div>
		<div class="comment_text"><p>I've seen this idea in place before on <a href="http://disq.us/url?url=http%3A%2F%2FHGTV.com%3AJuzIadfspiiEafPAgDrZFHR-vQU&amp;cuid=3321886" rel="nofollow noopener" title="HGTV.com">HGTV.com</a> and there various contest(s) and always wondered how it was done. (Cookies, JS, or Ajax.) Thanks for this excellent example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680047">3</a> by David
		posted on 4/22/2008 at 6:45 PM
		</div>
		<div class="comment_text"><p>Ray, thanks for answering my question.  Never too late.  I modified the code last night for our weather net software following your excellent tutorial, needless to say, we will save a lot of key strokes at critical times this season while we watch the weather.</p><p>Regards,</p><p>Dave<br>N9CTO</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680049">4</a> by Michael White
		posted on 4/23/2008 at 12:17 AM
		</div>
		<div class="comment_text"><p>I'm surprised he left out Viper. I'm gonna use this in my application too. Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680050">5</a> by shag
		posted on 4/23/2008 at 4:35 AM
		</div>
		<div class="comment_text"><p>@john, i was on target for that one.  i figured the license plate would be T-16 skyhopper or T-65 x-wing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680053">6</a> by BJ
		posted on 4/24/2008 at 2:21 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>  To follow up on this.  I'm also working with autosuggest where the user can search by last name.  The problem I have is when I have two last names that are the same I need the ID of the record to grab the data for the selected person.  Also I would like to show the first name on the same line. So the line might look like:<br>Ray, Terri<br>Ray, Mike<br>I've tried different things and I have also looked around for examples on how to do this. I don't really want to show the ID in the autosuggest list I just need to pass it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680055">7</a> by Raymond Camden
		posted on 4/24/2008 at 5:09 AM
		</div>
		<div class="comment_text"><p>You could work with multiple records. So if the first field is last name, and you type in Camden, and 2 rows returned, you could show them both (if you had a select box with multiple entries), or just pick the first one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680054">8</a> by BJ
		posted on 4/24/2008 at 5:44 PM
		</div>
		<div class="comment_text"><p>Oh in this case since I need more than one field so I need to just use the regular select statement and not the cfinput and autosuggest<br>thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680056">9</a> by Charles Higgins
		posted on 8/26/2008 at 10:37 PM
		</div>
		<div class="comment_text"><p>Okay, i had a similar problem on wanting to stack a Lastname and Firstname autosuggest in one box.</p><p>This seemed to work a treat, by stacking the results the user can type in Lastname then Firstname then an ID, and while they are doing it auto predicts and so shows the options; All i had to do was add a little bit of text to the standard example.</p><p>&lt;cfcomponent output="false"&gt;</p><p> &lt;!--- Lookup used for auto suggest ---&gt;<br>   &lt;cffunction name="lookupContact" access="remote" returntype="array"&gt;<br>&lt;cfargument name="search" type="any" required="false" default=""&gt;</p><p>&lt;!--- Define variables ---&gt;<br>&lt;cfset var data=""&gt;<br>&lt;cfset var result=ArrayNew(1)&gt;</p><p>&lt;!--- Do search ---&gt;<br>&lt;cfquery datasource="#application.datasrc#" name="data"&gt;<br>SELECT ContactLastName, ContactFirstname, ContactID<br>FROM Contact<br>WHERE UCase(ContactLastname) LIKE Ucase('#<a href="http://disq.us/url?url=http%3A%2F%2FARGUMENTS.search%3AqnLnzVXRjYUL6xlC86mGA1ED4b4&amp;cuid=3321886" rel="nofollow noopener" title="ARGUMENTS.search">ARGUMENTS.search</a>#%')<br>ORDER BY ContactLastname, ContactFirstname<br>&lt;/cfquery&gt;</p><p>&lt;!--- Build result array ---&gt;<br>&lt;cfloop query="data"&gt;<br>&lt;!--- this the new line, all it needed ---&gt;<br>&lt;cfset name = ' #ContactLastName#, #ContactFirstname# #ContactID#'&gt;<br>&lt;cfset ArrayAppend(result, #name#)&gt;<br>&lt;/cfloop&gt;</p><p>      &lt;!--- And return it ---&gt;<br>&lt;cfreturn result&gt;<br>   &lt;/cffunction&gt;</p><p>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680057">10</a> by Charles Higgins
		posted on 8/26/2008 at 10:40 PM
		</div>
		<div class="comment_text"><p>&lt;cfset name = ' #ContactLastName#, #ContactFirstname# #ContactID#'&gt;</p><p>Stupid me, should be...</p><p>&lt;cfset name = ' #ContactLastName# #ContactFirstname# #ContactID#'&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680058">11</a> by Gregory
		posted on 2/11/2009 at 4:53 AM
		</div>
		<div class="comment_text"><p>Can you please supply the entire code? I am running into problems.</p><p>Thanks!</p><p>Gregory</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680063">12</a> by Lyndon
		posted on 5/5/2009 at 11:24 PM
		</div>
		<div class="comment_text"><p>I'm having trouble with the example. No errors, but it does not function. Autosuggest does not even work. I'm very new to Ajax, maybe I have something out of order. Any help appreciated.</p><p>html file:<br>----------------------------------------<br>&lt;!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fhtml4%2Floose.dtd%3A4qYYiKf19GfiXUEpfUUo4KosJnM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/html4/loose.dtd">http://www.w3.org/TR/html4/...</a>"&gt;<br>&lt;html&gt;<br>&lt;head&gt;</p><p>&lt;/head&gt;<br>&lt;meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1"&gt;<br>&lt;title&gt;Untitled Document&lt;/title&gt;</p><p>&lt;br&gt;&lt;br&gt;</p><p>&lt;body&gt;<br>&lt;form&gt;<br>&lt;table&gt;<br>   &lt;tr&gt;<br>      &lt;td&gt;Call Sign:&lt;/td&gt;<br>      &lt;td&gt;&lt;input type="text" name="callsign" id="callsign" autosuggest="cfc:radioPeople.getCallSigns({cfautosuggestvalue})"&gt;&lt;/td&gt;<br>   &lt;/tr&gt;<br>   &lt;tr&gt;<br>      &lt;td&gt;First Name:&lt;/td&gt;<br>      &lt;td&gt;&lt;input type="text" name="firstname" id="firstname"&gt;&lt;/td&gt;<br>   &lt;/tr&gt;<br>   &lt;tr&gt;<br>      &lt;td&gt;Trained Spotted:&lt;/td&gt;<br>      &lt;td&gt;&lt;input type="checkbox" name="trainedspotter" id="trainedspotter"&gt;&lt;/td&gt;<br>   &lt;/tr&gt;<br>   &lt;tr&gt;<br>      &lt;td&gt;Car License Plate:&lt;/td&gt;<br>      &lt;td&gt;&lt;input type="text" name="licenseplate" id="licenseplate"&gt;&lt;/td&gt;<br>   &lt;/tr&gt;<br>&lt;/table&gt;<br>&lt;cfajaxproxy bind="javaScript:loadit({callsign})"&gt;<br>&lt;cfajaxproxy cfc="radiopeople" jsclassname="radiopeopleservice"&gt;<br>&lt;/form&gt;</p><p>&lt;/body&gt;<br>&lt;/html&gt;</p><p>&lt;script&gt;<br>var radioPeopleService = new radiopeopleservice();</p><p>function loadit(cs) {<br>   var data = radioPeopleService.getProfile(cs);<br>   if(data.FIRSTNAME != null) document.getElementById('firstname').value = data.FIRSTNAME;<br>   if(data.TRAINEDSPOTTER != null) if(data.TRAINEDSPOTTER) document.getElementById('trainedspotter').checked = true;<br>   if(data.LICENSEPLATE != null) document.getElementById('licenseplate').value = data.LICENSEPLATE;<br>   console.dir(data);<br>}<br>&lt;/script&gt;</p><p>radioPeople.cfc File:<br>-----------------------------<br>&lt;cfcomponent hint="Owner database functions"&gt;</p><p>	&lt;cffunction name="getProfile" output="false" returnType="struct" hint="I return information based on a call sign" access="remote"&gt;<br>   &lt;cfargument name="callsign" type="string" required="false" default=""&gt;<br>   &lt;cfset var result = {}&gt;</p><p>   &lt;cfswitch expression="#arguments.callsign#"&gt;<br>      &lt;cfcase value="iceman"&gt;<br>         &lt;cfset result = {firstname="Raymond",trainedspotter=false,licenseplate="XXX11"}&gt;<br>      &lt;/cfcase&gt;<br>      &lt;cfcase value="maverick"&gt;<br>         &lt;cfset result = {firstname="Tom",trainedspotter=true,licenseplate="AAA11"}&gt;<br>      &lt;/cfcase&gt;</p><p>      &lt;cfcase value="goose"&gt;<br>         &lt;cfset result = {firstname="Fred",trainedspotter=false,licenseplate="GGG11"}&gt;<br>      &lt;/cfcase&gt;</p><p>   &lt;/cfswitch&gt;</p><p>   &lt;cfreturn result&gt;   <br>&lt;/cffunction&gt;</p><p>&lt;cffunction name="getCallSigns" output="false" returnType="string" hint="I suggest call signs" access="remote"&gt;<br>   &lt;cfargument name="callsign" type="string" required="false" default=""&gt;<br>   &lt;!--- create a fake query ---&gt;<br>   &lt;cfset var q = queryNew("callsign")&gt;<br>   &lt;cfset var r = ""&gt;</p><p>   &lt;cfset queryAddRow(q)&gt;<br>   &lt;cfset querySetCell(q, "callsign", "iceman")&gt;<br>   &lt;cfset queryAddRow(q)&gt;<br>   &lt;cfset querySetCell(q, "callsign", "maverick")&gt;<br>   &lt;cfset queryAddRow(q)&gt;<br>   &lt;cfset querySetCell(q, "callsign", "goose")&gt;</p><p>   &lt;cfquery name="r" dbtype="query"&gt;<br>   select   callsign<br>   from   q<br>   where   upper(callsign) like &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#ucase(arguments.callsign)#%"&gt;<br>   &lt;/cfquery&gt;</p><p>   &lt;cfreturn valueList(r.callsign)&gt;</p><p>&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680060">13</a> by Raymond Camden
		posted on 5/6/2009 at 4:41 AM
		</div>
		<div class="comment_text"><p>What does Firebug tell you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680064">14</a> by Lyndon
		posted on 5/6/2009 at 6:14 PM
		</div>
		<div class="comment_text"><p>I found one error, html tag out of place. Fixed that and now no errors, but there is no functionality.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680059">15</a> by Raymond Camden
		posted on 5/7/2009 at 3:18 AM
		</div>
		<div class="comment_text"><p>So you see no XHR requests?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680062">16</a> by Lyndon
		posted on 5/7/2009 at 3:45 PM
		</div>
		<div class="comment_text"><p>No, the dropdown does not appear when I type in the text input and if I complete the text the other inputs do not populate. I wonder if there is some basic setup on the server that I'm not aware of.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680066">17</a> by Raymond Camden
		posted on 5/8/2009 at 2:01 AM
		</div>
		<div class="comment_text"><p>Oh wow, you will kick yourself. You used &lt;input&gt;, not &lt;cfinput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680065">18</a> by Adam
		posted on 9/29/2009 at 9:25 PM
		</div>
		<div class="comment_text"><p>I am using this method to load a list of clients for consultants to choose from.  The list loads the client lastname, firstname, email, organization, and ID.  All elements are pertinent to the consultant except ID.  I need the ID to update the database record.  How may I show all data except the ID in the autosuggest, but post only the ID when the form is submitted?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680061">19</a> by Raymond Camden
		posted on 9/30/2009 at 1:46 AM
		</div>
		<div class="comment_text"><p>You can't. On post, you would need to check the value against the db and find the related ID.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680067">20</a> by Adam
		posted on 9/30/2009 at 11:31 PM
		</div>
		<div class="comment_text"><p>I'm using a CFC similar to what Charles Higgins is using (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2008%2F4%2F21%2FAsk-a-Jedi-Extending-ColdFusions-autocomplete-feature%23c004E4024-19B9-E658-9D26EAAF95E39371%29%3AhJfVxuIQ2qQApO_RGRY3Ile5ZNw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2008/4/21/Ask-a-Jedi-Extending-ColdFusions-autocomplete-feature#c004E4024-19B9-E658-9D26EAAF95E39371)">http://www.coldfusionjedi.c...</a></p><p>My index page is calling the CFC to populate the cfinput textbox.  Do you suggest using the ID as a hidden field that is passed when the form posts?  If so, do I obtain the ID from the CFC using &lt;cfinvoke&gt; to return the ID?  I have not used CFCs before and have been examining the docs to better understand.</p><p>Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680069">21</a> by Raymond Camden
		posted on 10/1/2009 at 12:49 AM
		</div>
		<div class="comment_text"><p>If you can set it up so that your data returns IDs and labels, and can then stuff the ID in a hidden field when you select the right value in the auto complete, then sure, that would work fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680072">22</a> by Adam
		posted on 10/3/2009 at 12:25 AM
		</div>
		<div class="comment_text"><p>I'm completely in the dark and don't mean to be.  I don't understand how to obtain the ID property from the CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680068">23</a> by Raymond Camden
		posted on 10/3/2009 at 6:54 AM
		</div>
		<div class="comment_text"><p>That depends on your data. If you are selecting from a table, check the table columns and see which one is the primary key.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680070">24</a> by Terry
		posted on 12/15/2009 at 12:29 AM
		</div>
		<div class="comment_text"><p>The autosuggest is goofy with IE 8.  After entering a call sign, it works fine.  However, if I attempt to use a different call sign, then the autosuggest box sticks and the text fields do not populate with the new data..  However, it works great in FF..  Is anyone else experiencing the same thing in IE 8 or other browsers?  Is there a fix for this??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680071">25</a> by Raymond Camden
		posted on 12/15/2009 at 12:44 AM
		</div>
		<div class="comment_text"><p>I think it is the console.log messages I left in the code. That's the error I saw when I tried it in IE8. Try removing them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680073">26</a> by Anthony
		posted on 1/19/2010 at 2:08 AM
		</div>
		<div class="comment_text"><p>I am getting html in my response from the getProfile function:<br>&lt;!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fxhtml1%2FDTD%2Fxhtml1-transitional.dtd%3AlsD79NC9EpzB4LCkih033Se6Csw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">http://www.w3.org/TR/xhtml1...</a>"&gt;<br>&lt;html xmlns="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2F1999%2Fxhtml%3AA6NInarpbzWm6HKZDXlFrwZefzc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/1999/xhtml">http://www.w3.org/1999/xhtml</a>"&gt;<br>&lt;head&gt;<br>&lt;meta http-equiv="Content-Type" content="text/html; charset=utf-8" /&gt;<br>&lt;title&gt;Untitled Document&lt;/title&gt;<br>&lt;/head&gt;</p><p>&lt;body&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;<br>{maverick}</p><p>Any idea why? I posted the url directly in a browser, radiopeople.cfc?method=getProfile&amp;argumentCollection={"callsign":"m"}&amp;_cf_nodebug=true and I still get the same response.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680076">27</a> by Raymond Camden
		posted on 1/19/2010 at 10:06 AM
		</div>
		<div class="comment_text"><p>Does your Application.cfc use an onRequestStart that auto adds HTML?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680074">28</a> by Anthony
		posted on 1/19/2010 at 6:03 PM
		</div>
		<div class="comment_text"><p>No. My Application.cfc is blank...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680077">29</a> by Raymond Camden
		posted on 1/19/2010 at 6:05 PM
		</div>
		<div class="comment_text"><p>Use Firebug to note the URL of the request. Take that URL and open it in a new tab. View source. Is it the same?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680078">30</a> by Anthony
		posted on 1/19/2010 at 7:06 PM
		</div>
		<div class="comment_text"><p>Doh!! My fault... Application.cfc was not blank... It had the html in it. Sorry.... But thanks for the quick response and great blog!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680079">31</a> by Shishir Sharma
		posted on 3/1/2013 at 4:34 PM
		</div>
		<div class="comment_text"><p>Hi, I tried implementing autocomplete functionality using your autosuggest attribute of cfinput tag and a cfc. When I used it in a new page, it worked just fine, but when I included in my application I am getting this error:</p><p>window:global: 'containerCollapseEvent' is null or not an object</p><p>Did not understand this. Kindly assist.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680080">32</a> by Raymond Camden
		posted on 3/1/2013 at 5:14 PM
		</div>
		<div class="comment_text"><p>I'd have to take a guess that maybe the default JS files CF uses are not loading. Open your Chrome Dev Tools and see if you notice any 404 errors with the JS files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680081">33</a> by Andy Idema
		posted on 4/29/2013 at 6:01 PM
		</div>
		<div class="comment_text"><p>Thank you for this Ray.  Works like a charm.  The only thing I'd like to change is to get rid of the static.gif next to the autosuggest box.  When idle it just looks like a crummy image of a starish type thing.  Suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680083">34</a> by Raymond Camden
		posted on 4/29/2013 at 6:05 PM
		</div>
		<div class="comment_text"><p>There is an argument for this: showAutosuggestionLoadingIcon=true/false.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680084">35</a> by Andy Idema
		posted on 4/29/2013 at 6:17 PM
		</div>
		<div class="comment_text"><p>Yep.  Found that in the livedocs and came back to update my question... but you beat me to it!  Thanks again for this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680085">36</a> by Andy Idema
		posted on 4/29/2013 at 8:26 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>How would I make the getProfile function more dynamic so that I query a table (in my example, passengers) when the callsign field has been selected?  Here's what I attempted...</p><p>&lt;cffunction name="getProfile" returnType="struct" access="remote"&gt;</p><p>	&lt;cfargument name="callsign" type="string" required="false" default=""&gt;<br>	&lt;cfset var result = {}&gt;</p><p>	&lt;cfquery name="get_d" datasource="mydsn" maxrows="1"&gt;<br>	SELECT *<br>	FROM passengers<br>	WHERE passenger_first_name = '#arguments.callsign#'<br>	&lt;/cfquery&gt;</p><p>	&lt;cfset result = {firstname="#get_d.passenger_first_name#",trainedspotter=false,licenseplate="GGG11"}&gt;</p><p>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680086">37</a> by Raymond Camden
		posted on 4/29/2013 at 8:38 PM
		</div>
		<div class="comment_text"><p>And that didn't work for you? I notice you forgot to actually return anything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680089">38</a> by Andy Idema
		posted on 4/29/2013 at 8:41 PM
		</div>
		<div class="comment_text"><p>Ha!  Oops.  I suppose that's necessary.  Working now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680088">39</a> by Andy Idema
		posted on 5/1/2013 at 8:29 PM
		</div>
		<div class="comment_text"><p>I took this example and built it so that I can have several different rows doing the autosuggest and autopopulate.  It works well in Firefox and Chrome but in ie8... no dice.  It works on the first row in ie8, but any other rows don't autopopulate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680087">40</a> by Raymond Camden
		posted on 5/1/2013 at 10:53 PM
		</div>
		<div class="comment_text"><p>Do you see an error thrown in IE?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680090">41</a> by Raymond Camden
		posted on 5/1/2013 at 10:54 PM
		</div>
		<div class="comment_text"><p>You know, that may be an issue with IE8. Can you try a super simple autosuggest demo - like from the CF docs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680094">42</a> by Andy Idema
		posted on 5/2/2013 at 12:17 AM
		</div>
		<div class="comment_text"><p>At this point I'm almost certain it's an ie8 issue.  I've tested it successfully in Firefox and Chrome.  How irritating because this is a really slick use of cf and js.  Unfortunately they are forcing ie8 in this office so I can't use what I put together based on this tute.  It's a shame because testing in Chrome it's freegin awesome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680092">43</a> by Raymond Camden
		posted on 5/2/2013 at 1:44 AM
		</div>
		<div class="comment_text"><p>It may just be the library used by CF. You should try the jQueryUI autocomplete in IE8 and see if it is compatible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680093">44</a> by Andy Idema
		posted on 5/2/2013 at 4:19 AM
		</div>
		<div class="comment_text"><p>@Ray - I'm sorry I don't understand.  Do you mean rewrite the code using jquery instead of cf's built in autosuggest?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680095">45</a> by Raymond Camden
		posted on 5/2/2013 at 4:51 AM
		</div>
		<div class="comment_text"><p>jQuery or another vanilla JS solution.</p></div>
	</div>
</div>
		