
<div class="comment" id="c_1713662814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662814">1</a> by Matt Osbun
		posted on 3/5/2007 at 6:18 PM
		</div>
		<div class="comment_text"><p>Recently ran into a problem like that myself.  An Ajax function didn't appear to be working.  Tracking it back, it made the request properly, and the requested CFC performed properly, but the target DIV wasn't updating.  Turned out that the DIV's ID was set by another CFC, and there was about 5 lines of whitespace in the ID attribute.  The HTML looked something like this:</p><p>&lt;DIV ID="</p><p>DivID"&gt;</p><p>Oddly enough, this was enough to break functionality in IE7, but not in Firefox.  Adding output="false" fixed the problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662813">2</a> by Christopher Wigginton
		posted on 3/5/2007 at 8:47 PM
		</div>
		<div class="comment_text"><p>Using the CFXML tag in a CFC will preserve the whitepace indentation, so if you follow a standard indentation programming style, you could end up with unwanted whitespace there as well.</p><p>You also have to turn off output on the following, depending on which type of Application management you use.</p><p>Application.cfm<br>OnRequestEnd.cfm</p><p>or<br>Application.cfc<br>onRequestStart function<br>onRequestEnd function</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662812">3</a> by Michael Brennan-White
		posted on 3/5/2007 at 9:49 PM
		</div>
		<div class="comment_text"><p>Please excuse the stupid question but if you set the output to false for the cfcomponent will that block output from the individual cffunctions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662815">4</a> by Raymond Camden
		posted on 3/5/2007 at 9:52 PM
		</div>
		<div class="comment_text"><p>Nope. output=false in the cfcomponent tag JUST refers to stuff outside cffunction tags.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662816">5</a> by Ed
		posted on 3/5/2007 at 9:55 PM
		</div>
		<div class="comment_text"><p>...and if your CFC extends another CFC, check the parent class(es) too...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662817">6</a> by Michael Brennan-White
		posted on 3/5/2007 at 11:17 PM
		</div>
		<div class="comment_text"><p>Thanks for clearing that up.  White Space is something I haven't really addressed so far but I know I should</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662818">7</a> by xavier
		posted on 3/21/2007 at 5:54 AM
		</div>
		<div class="comment_text"><p>When i try to do a test I get a blank page. view source on the  blank page shows 41 blank lines. I am not sure  if this is causing the page not to work. Below is the sample code and the cfc downloaded from this site, that I am using:<br>CFM page:<br>&lt;cfsetting showdebugoutput="no" enablecfoutputonly="true"&gt;<br>&lt;!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fxhtml1%2FDTD%2Fxhtml1-transitional.dtd%3AlsD79NC9EpzB4LCkih033Se6Csw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">http://www.w3.org/TR/xhtml1...</a>"&gt;<br>&lt;html xmlns="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2F1999%2Fxhtml%3AA6NInarpbzWm6HKZDXlFrwZefzc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/1999/xhtml">http://www.w3.org/1999/xhtml</a>" xmlns:spry="<a href="http://disq.us/url?url=http%3A%2F%2Fns.adobe.com%2Fspry%3A0EUJPQwcPdEoFcLHHCdKdxPWbb8&amp;cuid=3321886" rel="nofollow noopener" title="http://ns.adobe.com/spry">http://ns.adobe.com/spry</a>"&gt;<br>&lt;head&gt;<br>&lt;meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" /&gt;<br>&lt;title&gt;sprytest&lt;/title&gt;<br>&lt;script type="text/javascript" src="includes/xpath.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="includes/SpryData.js"&gt;&lt;/script&gt;<br>&lt;script&gt;<br>	var dsTeams = new Spry.Data.XMLDataSet("xml.cfc?method=getTeams", "baseball/teams");<br>&lt;/script&gt;<br>&lt;/head&gt;<br>&lt;body&gt;<br>&lt;div spry:region="dsTeams"&gt;<br>	&lt;table&gt;<br>		&lt;tr&gt;<br>			&lt;th&gt;&amp;nbsp;&lt;/th&gt;<br>			&lt;th&gt;&lt;a href="javascript:;" onclick="dsTeams.sort('team')"&gt;Team&lt;/a&gt;&lt;/th&gt;<br>			&lt;th&gt;&lt;a href="javascript:;" onclick="dsTeams.sort('mascot')"&gt;Mascot&lt;/a&gt;&lt;/th&gt;<br>		&lt;/tr&gt;<br>		&lt;tr spry:repeat="dsTeams"&gt;<br>			&lt;td&gt;{ds_RowID}&lt;/td&gt;<br>			&lt;td&gt;{team}&lt;/td&gt;<br>			&lt;td&gt;{mascot}&lt;/td&gt;<br>		&lt;/tr&gt;<br>	&lt;/table&gt;<br>&lt;/div&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p><p>CFC:<br>&lt;cfcomponent name="Baseball" output="false"&gt;</p><p>   &lt;cffunction name="getTeams" access="remote" returntype="xml" output="false"&gt;<br>      &lt;cfset var teams = "" /&gt;<br>      &lt;cfset var tmp = "" /&gt;<br>      &lt;cfset var xmlObj = "" /&gt;</p><p>      &lt;!---<br>         Create a new query object and populate 5 rows with data. In most cases<br>         your application will be retrieving data from a database via &lt;cfquery&gt; tag.<br>      ---&gt;<br>      &lt;cfset teams = queryNew("Team, Mascot", "varchar, varchar") /&gt;      <br>      &lt;cfset tmp = queryAddRow(teams, 5) /&gt;      <br>      &lt;cfset tmp = querySetCell(teams, "Team", "Boston", 1) /&gt;<br>      &lt;cfset tmp = querySetCell(teams, "Mascot", "Red Sox", 1) /&gt;<br>      &lt;cfset tmp = querySetCell(teams, "Team", "New York", 2) /&gt;<br>      &lt;cfset tmp = querySetCell(teams, "Mascot", "Yankees", 2) /&gt;<br>      &lt;cfset tmp = querySetCell(teams, "Team", "Baltimore", 3) /&gt;<br>      &lt;cfset tmp = querySetCell(teams, "Mascot", "Orioles", 3) /&gt;<br>      &lt;cfset tmp = querySetCell(teams, "Team", "Toronto", 4) /&gt;<br>      &lt;cfset tmp = querySetCell(teams, "Mascot", "Blue Jays", 4) /&gt;<br>      &lt;cfset tmp = querySetCell(teams, "Team", "Tampa Bay", 5) /&gt;<br>      &lt;cfset tmp = querySetCell(teams, "Mascot", "Devil Rays", 5) /&gt;</p><p>      &lt;!---<br>         Loop through the query and create XML formatted text, which we will then convert to an XML document object. <br>		 You could also use Ray Camden's toxml.cfc component to accomplish this.<br>      ---&gt;<br>      &lt;cfset xmlObj = "&lt;baseball&gt;" /&gt;      <br>      &lt;cfoutput query="teams"&gt;      <br>         &lt;cfset xmlObj = xmlObj &amp; "&lt;teams&gt;" /&gt;            <br>         &lt;cfset xmlObj = xmlObj &amp; "&lt;team&gt;" /&gt;<br>         &lt;cfset xmlObj = xmlObj &amp; "#team#" /&gt;<br>         &lt;cfset xmlObj = xmlObj &amp; "&lt;/team&gt;" /&gt;<br>         &lt;cfset xmlObj = xmlObj &amp; "&lt;mascot&gt;" /&gt;<br>         &lt;cfset xmlObj = xmlObj &amp; "#mascot#" /&gt;<br>         &lt;cfset xmlObj = xmlObj &amp; "&lt;/mascot&gt;" /&gt;<br>         &lt;cfset xmlObj = xmlObj &amp; "&lt;/teams&gt;" /&gt;<br>      &lt;/cfoutput&gt;      <br>      &lt;cfset xmlObj = xmlObj &amp; "&lt;/baseball&gt;" /&gt;</p><p>      &lt;!---<br>         Convert the XML formatted text to an XML document object.<br>      ---&gt;<br>      &lt;cfset xmlObj = xmlParse(xmlObj) /&gt;</p><p>      &lt;!---<br>         Spry will not recognize the returned XML without this line. Thanks to Bruce Phillips (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.brucephillips.name%3AOXNzTe-ERS4Vdc6gouCIVyl0p6E&amp;cuid=3321886" rel="nofollow noopener" title="www.brucephillips.name">www.brucephillips.name</a>) for this tip.<br>      ---&gt;<br>      &lt;cfcontent type="application/xml; charset=UTF-8"&gt;</p><p>      &lt;cfreturn xmlObj /&gt;</p><p>   &lt;/cffunction&gt;</p><p>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662819">8</a> by vaughn lanter
		posted on 4/26/2007 at 7:46 AM
		</div>
		<div class="comment_text"><p>I've been fighting the Spry autosuggest for days now. I finally came across your comments and eliminated those nasty not-well-formed errors. But, I still can't get the suggest list to come up. Any chance you could take a look?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662820">9</a> by Raymond Camden
		posted on 4/27/2007 at 11:33 PM
		</div>
		<div class="comment_text"><p>Not this week. Been hell. But - the #1 recommendation I can make is Firebug. It will let you ee your AJAX requests and help debug the issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662821">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662821">10</a> by Andrew Mercer
		posted on 4/29/2007 at 12:46 AM
		</div>
		<div class="comment_text"><p>Thanks Ray,</p><p>been pulling my hair out over this one - didn't know about output attribute for the component.</p><p>But my spry page is still not working :-(<br>If I save the output in my broswer from the cfc call into an xml file and point spry at that it works.</p><p>I am running it through apache proxy url as the cfc is on a differnent domain. I will try a local cfc and see what happends.</p><p>Any other suggestions anyone?</p><p>TIA</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662823">11</a> by Raymond Camden
		posted on 4/29/2007 at 12:55 AM
		</div>
		<div class="comment_text"><p>Again - try Firebug. See what it seems. Also try turning on debuggin for Spry.</p><p>Spry.Data.Region.debug = true;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662822">12</a> by Andrew Mercer
		posted on 4/29/2007 at 6:51 AM
		</div>
		<div class="comment_text"><p>found the solution here<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.brucephillips.name%2Fblog%2Findex.cfm%2F2006%2F11%2F11%2FUse-ColdFusion-Function-Return-Type-of-XML-to-Provide-XML-to-Both-Spry-and-Flex%3AP2Rmg-V3gueKt7jaER8bqJp_yuU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.brucephillips.name/blog/index.cfm/2006/11/11/Use-ColdFusion-Function-Return-Type-of-XML-to-Provide-XML-to-Both-Spry-and-Flex">http://www.brucephillips.na...</a></p><p>Spry needs this<br>&lt;cfcontent type="application/xml; charset=UTF-8"&gt;</p><p>I put it the line before cfreturn</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662824">13</a> by Calvert Acklin
		posted on 12/27/2007 at 9:54 AM
		</div>
		<div class="comment_text"><p>I had this same problem and it was until I disabled debugging,  either in CF Admin or using the enableDisableDebugging(what):</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cflib.org%2Fudf.cfm%3Fid%3D1142%26enable%3D1%3AeACXnNsKp1SBFoX7PXsmf00BheA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cflib.org/udf.cfm?id=1142&amp;enable=1">http://www.cflib.org/udf.cf...</a></p><p> UDF, that I was able to finally get past my remaining XML issue.</p><p>~Calvert</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662825">14</a> by Scott Jibben
		posted on 8/13/2008 at 7:57 AM
		</div>
		<div class="comment_text"><p>Try appending "&amp;_cf_nodebug=true" to your URL's that request data/xml.  It turns off debug output on CF 8.  I'm not sure if it helps on CF 7 or not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662828">15</a> by Chris
		posted on 1/16/2009 at 11:14 AM
		</div>
		<div class="comment_text"><p>@Scott:  Thank you for that little tidbit.  I was having trouble with my xml output for my flex app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662829">16</a> by Bob R
		posted on 2/13/2009 at 7:56 AM
		</div>
		<div class="comment_text"><p>Thanks for this post, it really helped. Thought I would mention one thing in case someone else runs into this. I was using a cfc to generate a xml file and keep getting an extra return at the beginning of the document and could not figure out why. Used the methods describe in this post and still no luck. I tried everything. I even just put my entire function on one line, which fixed my problem but was not very easy to read. Finally I added output=false to my cffunction as well as the as well as the cfcomponet and that did the trick.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662830">17</a> by Raymond Camden
		posted on 2/13/2009 at 8:00 AM
		</div>
		<div class="comment_text"><p>Actually I did mention that in the post. "He had used output=false in the method." But 'method' may not have been obvious as cffunction. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662832">18</a> by Nikhil Kudtadkar
		posted on 4/16/2010 at 2:32 PM
		</div>
		<div class="comment_text"><p>Hey Raymond,</p><p>I have written a web service in Cold fusion where I am trying to retrieve some data from the database. I am able to fetch the data and in the end i am converting the data to xml format with the help of XMLParse function. I need to pass this data to INFOPATH tool which is a MICROSOFT  tool where it only requires xml,uDDI type of data. but the data that has been sent from the web service is xml string data. I am using the returntype as "string" if I use the returntype as xml I get the error.</p><p>Could you please help me out for the same.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662831">19</a> by Raymond Camden
		posted on 4/16/2010 at 3:18 PM
		</div>
		<div class="comment_text"><p>Help you with what? You want the return type to be xml? Your returning a string, right - a string that just so happens to be XML.</p></div>
	</div>
</div>
		