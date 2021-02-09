
<div class="comment" id="c_1713671986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671986">1</a> by Mike Benner
		posted on 9/25/2007 at 7:35 AM
		</div>
		<div class="comment_text"><p>I am so glad to see Coldfusion embrace JSON.  It is my preferred format of choice for data in JS.  Can't wait to start using some of these features more regularly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672007">2</a> by Andrew Scott
		posted on 9/26/2007 at 10:17 AM
		</div>
		<div class="comment_text"><p>I would also like to add that this might not be that benefical to CF8, but for those wanting to have some JSON in there previous CF instances.</p><p>CFJsonService on RiaForge is worth a look at too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672006">3</a> by Don Li
		posted on 3/20/2008 at 12:07 AM
		</div>
		<div class="comment_text"><p>I like the data rendering speed aspect of the SerializeJSON function, however, I'm concerned about business logic implementation within the data output stream with this method, the js code would be a mess to read vs. cf code for the data output part.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672009">4</a> by Raymond Camden
		posted on 3/20/2008 at 12:11 AM
		</div>
		<div class="comment_text"><p>Don Li - this example was a mash up so I could get everything on one page. Normally you would have a page request the JSON via an Ajax request.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672018">5</a> by Michael Damian
		posted on 6/9/2008 at 10:58 AM
		</div>
		<div class="comment_text"><p>How do you reformat the date to something any normal person would want to see, e.g. mm/dd/yyy?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672015">6</a> by Raymond Camden
		posted on 6/9/2008 at 3:16 PM
		</div>
		<div class="comment_text"><p>You can do it in JS, but it can be a pain. I'd just do it server side with dateFormat.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672017">7</a> by Michael Damian
		posted on 6/9/2008 at 3:59 PM
		</div>
		<div class="comment_text"><p>Thanks. Could we get a quick snippet of that in action please?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672016">8</a> by Raymond Camden
		posted on 6/9/2008 at 4:02 PM
		</div>
		<div class="comment_text"><p>dateformat? Please see the CF reference. It's pretty easy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672014">9</a> by Michael Damian
		posted on 6/9/2008 at 4:09 PM
		</div>
		<div class="comment_text"><p>Yes, we all know how easy dateformat is to use. But how do you weld it into this JSON pallava. Just a quick example would do wonders and gain my utmost gratitude. Come on, it won't kill you:-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672022">10</a> by Raymond Camden
		posted on 6/9/2008 at 4:12 PM
		</div>
		<div class="comment_text"><p>But that's the thing - it doesn't need a quick example. If your query is being serialized into json, you would just use dateFormat on the query -before- your serialize it. Really - dateFormat is _extremely_ simple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672020">11</a> by Michael Damian
		posted on 6/12/2008 at 3:04 PM
		</div>
		<div class="comment_text"><p>Yes, Raymond, dateformat is easy for simple date outputs in a different format sans JSON. Anyway, I've figured out how to weld it into your JSON example. Will post some code shortly for others needing an example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672021">12</a> by Raymond Camden
		posted on 6/12/2008 at 3:17 PM
		</div>
		<div class="comment_text"><p>Be sure to post a url here. I think I may be missing something as I don't see the need - so once you blog it will probably make more sense to me. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672026">13</a> by David Levin
		posted on 8/18/2009 at 11:52 PM
		</div>
		<div class="comment_text"><p>Is it possible to serialize a query to JSON and then deserialize it back to a query object again?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672024">14</a> by Raymond Camden
		posted on 8/18/2009 at 11:56 PM
		</div>
		<div class="comment_text"><p>Yes, it is possible. When you deserialize it though, ensure strictMapping (second optional arg) is set to false.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672025">15</a> by David Levin
		posted on 8/19/2009 at 12:36 AM
		</div>
		<div class="comment_text"><p>Ah... nice.</p><p>Here is an example that worked:</p><p>&lt;cfset myQuery = QueryNew("ID,Name","INTEGER,VARCHAR")&gt;<br>&lt;cfset temp = QueryAddRow(myQuery)&gt;<br>&lt;cfset temp = QuerySetCell(myQuery,"ID","1")&gt;<br>&lt;cfset temp = QuerySetCell(myQuery,"Name","Dave")&gt;</p><p>&lt;cfset myJSON = SerializeJSON(myquery)&gt;<br>&lt;cfset myNewResult = DeSerializeJSON(myJSON,false)&gt;</p><p>&lt;cfdump var="#myNewResult#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672028">16</a> by Larry Lee
		posted on 9/28/2009 at 9:19 PM
		</div>
		<div class="comment_text"><p>Ray,<br>You mention at the top of this blog entry that this is a non-ajax example.  <br>This helped open up a world of options for writing custom ajax renderers and validators and I just want to share one 'gotcha' I ran into after wresting with  the AJAX version of this for a while.<br>When returning the JSON object from an AJAX call to a cfc, &lt;cfreturn SerializeJSON(...) did not return the data in a format I needed for a column.   The answer was to use returnformat="JSON".<br>After that subtle difference, I could parse the JSON string with a column map.<br>Here's a snippet of sample code from the javascript side:</p><p>                           var grid = ColdFusion.Grid.getGridObject("busforecast");	   			   			   		   			   <br>			   var gridFoot = grid.getView().getFooterPanel(true);<br>			   var gridFoot = grid.getView().getFooterPanel().setVisible(true); //false to remove paging TMS 9626 LLee 12/24/08			   <br>		 	   var ds = grid.getDataSource();<br>			   var forecastObj = new CFCs.ajaxForecastDAO;	<br>				&lt;cfoutput&gt;<br>			   	var getBusmgrSummaryForecastAJAX = forecastObj.getBusmgrSummaryForecastAJAX('#dsn#','#curFY#',#S_OID#, '#qryBusmgrInitialForecast.forecast_level#',1,1);						<br>			   &lt;/cfoutput&gt;				   			 <br>			   var mydata = getBusmgrSummaryForecastAJAX;			   <br>			   var colMap = new Object();</p><p>				    //find my columns<br>				    for(var i = 0; i &lt; getBusmgrSummaryForecastAJAX.COLUMNS.length; i++) {<br>				        colMap[getBusmgrSummaryForecastAJAX.COLUMNS[i]] = i;        <br>				    }				    <br>				    for(var i = 0; i &lt; getBusmgrSummaryForecastAJAX.DATA.length; i++) {				       <br>						var prioractual = getBusmgrSummaryForecastAJAX.DATA[i][colMap["PRIORACTUAL"]];<br>						var priorcert = getBusmgrSummaryForecastAJAX.DATA[i][colMap["PRIORCERT"]];						<br>						var estimatedusage = getBusmgrSummaryForecastAJAX.DATA[i][colMap["ESTIMATEDUSAGE"]];<br>						var actualusage = getBusmgrSummaryForecastAJAX.DATA[i][colMap["ACTUALUSAGE"]];<br>						var fullyearprojection = getBusmgrSummaryForecastAJAX.DATA[i][colMap["FULLYEARPROJECTION"]];<br>						var acctmgrforecast = getBusmgrSummaryForecastAJAX.DATA[i][colMap["ACCTMGRFORECAST"]];						<br>						var forecast = getBusmgrSummaryForecastAJAX.DATA[i][colMap["FORECAST"]];</p><p>//later in the script I add the var values to a 2nd footer of the grid using Ext.DomHelper.append..</p><p>//On the cfc side just use the usual access="remote" returntype="any" but be sure to add returnformat="JSON".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672027">17</a> by viky
		posted on 12/20/2009 at 12:56 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>  I am using  a dynamic java script table which accepts data in json format....I was able to loop through the query object in cfm code and then arrange my data in json like format.......I didnt loop through the object in javavscript nor did I used serialisejson.But my problem is for  pagination I am unable to fetch the correct data.Since I am using inline JavaScript and then on click for pagination I am calling the same page but this JavaScript table is not loaded at all........I cannot write this code in external js as I need to use the cold fusion variable in the javascript function....Please advise</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672030">18</a> by Raymond Camden
		posted on 12/20/2009 at 9:25 PM
		</div>
		<div class="comment_text"><p>That doesn't really make much sense to me. I guess if I could see it it would.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672029">19</a> by viky
		posted on 12/20/2009 at 10:28 PM
		</div>
		<div class="comment_text"><p>Hi ,<br>  I ahve modigied my code.<br>  Please have a look at the below code.</p><p>  Initially I am showing 30 records.</p><p>  I used serializejson in an inline javascript.<br>&lt;cfparam name="mxrow" default="30"&gt;<br>        &lt;cfquery name="myquery" datasource="testdsn" maxrows=#mxrow#&gt;<br>      select * from emp<br>&lt;/cfquery&gt;<br>&lt;cfoutput&gt;<br>     &lt;script&gt;<br>        var getQuery=#serializejson(myquery) #;<br>alert(getQuery);<br>//I plan to write a java script table here below<br> dynamicTableLoad();<br>    &lt;/script&gt;<br>&lt;/cfoutput&gt;<br>Alert is giving me the correct set of values for the query.</p><p>Now if wish to seethe next 30 records i.e from 31 to 60,<br>I intend to write a JavaScript function which again calls the same page through ajax.</p><p> But on ajax call the javascript is not loaded at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672032">20</a> by Raymond Camden
		posted on 12/22/2009 at 1:09 AM
		</div>
		<div class="comment_text"><p>I'm sorry - I just don't quite get what you are doing here. Your front end code should be making a request to load data to the server. The server returns the data serialized in JSON. It should include information about the total # of results and the current page of results. Your code there isn't enough, nor should it be running any actual JS. It should just return JSON.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672033">21</a> by John Manoah
		posted on 5/11/2010 at 7:10 PM
		</div>
		<div class="comment_text"><p>Another quick way is to run the response through an eval function and then parse it according to the column names.</p><p>For e.g.</p><p>var objdata = eval('('+responseFromServer+')');<br>(where responseFromServer is the JSON serialized query object in the cfc file)</p><p>Now, objdata.DATA.[column_name] would return the respective data.</p><p>For e.g. objdata.DATA.INTUSERID, objdata.DATA.STRFIRSTNAME etc (CAPS are essential since JSON in ColdFusion converts the names to all caps!)</p><p>Please note: This works only when you set the 'serializeQueryByColumns' in the SerializeJSON to "TRUE".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672031">22</a> by vasu polepalle
		posted on 9/18/2010 at 1:19 AM
		</div>
		<div class="comment_text"><p>would you plz explain what the following line is doing (inside the first for look). To me it looks like its assigning int to an object.</p><p>colMap[myData.COLUMNS[i]]=i;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672036">23</a> by Raymond Camden
		posted on 9/18/2010 at 1:24 AM
		</div>
		<div class="comment_text"><p>The variable myData.COLUMNS[i] is one column. It is a string, like Name. i is the index.</p><p>What this does is create a mapping by where the _name_ of the column has a value of the index.</p><p>I can then use that to get data by name and not index.</p><p>So imagine that AGE was the 3rd column. Instead of doing</p><p>data[3]</p><p>I can do</p><p>data[colMap.AGE]</p><p>Make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672035">24</a> by Cindi
		posted on 8/8/2013 at 10:40 PM
		</div>
		<div class="comment_text"><p>We wrote a wrapper service to handle date formatting when converting query results to JSON string. Instead of using serializeJSON() function, we have a custom encode()function that will fix that dates is isDate(value) is true. Loop over the values and format them with a private formatting function - something like this:</p><p>private any function format(val) {<br>	var value = arguments.val;<br>	// escape certain characters in strings...<br>	value = replace(value,'\','\\','all');<br>	value = replace(value,'"','\"',"all");<br>	value = replace(value,'/','\/',"all");<br>	value = replace(value,"#chr(13)#","\r","all");<br>	value = replace(value,"#chr(10)#","\n","all");<br>	value = replace(value,"#chr(9)#","\t","all");<br>	var newvalue = '"#value#"';<br>	if (isNumeric(value)) {<br>		if (variables.quotedNumbers == false) {<br>			newvalue = value;<br>		}<br>	}<br>	//if (value == 0 || value == 1) {<br>	//	newvalue = value;<br>	//	}<br>	if (value == 'yes' || value == 'no' || value == 'true' || value == 'false' ) {<br>		if (variables.convertBoolean == true) {<br>			if (value == 'yes') { newvalue = true;}<br>			if (value == 'no') { newalue = false; }<br>		}<br>		else {<br>			if (value != 1 &amp;&amp; value != 0 ) {<br>				newvalue = '"#value#"';<br>				}<br>		}<br>	}<br>	if (isDate(value) &amp;&amp; isNumeric(value) == 'NO' &amp;&amp; variables.fixDates == true) {<br>		newvalue = '"#dateFormat(value,"mmmm dd, yyyy ") &amp; timeFormat(value,"hh:mm:ss")#"';<br>		}<br>	return newvalue;<br>	}</p></div>
	</div>
</div>
		
<div class="comment" id="c_2575061137">
	<div>
		<img src="https://disqus.com/api/users/avatars/zydanielson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2575061137">25</a> by Zy Danielson
		posted on 3/17/2016 at 6:06 PM
		</div>
		<div class="comment_text"><p>Hi Raymond. I know you wrote this article 9 years ago, but it is still doing good work to this day. I wanted to thank you. For months, literally, I've been trying to figure out how to use AJAX to get data from a ColdFusion server and process it in the browser in JavaScript. Sounds like it should be so easy, and yet, for some reason it isn't. Or wasn't, until I read your article.</p><p>The one stumbling block for me, after getting rid of whitespace problems first, is that my AJAX call returned a string that looked exactly like what you started with in your article (in terms of structure). The problem, of course, was that what I got back wasn't a complex JavaScript object, it was a simple JSON string:</p><p>{"COLUMNS":["JID","NAME"],"DATA":[[13,"B2I"],[14,"B2II"],[15,"B2III"]]}</p><p>To get it from string to object was simply the use of JSON.parse().</p><p>Here is how I adapted your article to my AJAX call:</p><p></p><pre><code><br>$.ajax({<br>    type: "POST",<br>    url: "ajax/getJobs.cfm?jcid="+jobClassID,<br>    timeout: 100000,<br>    success: function(data) {<br>        var mydata = JSON.parse(data);<br>        var colMap = new Object();<br>        for (var i = 0; i &lt; mydata.COLUMNS.length; i++) {<br>            colMap[mydata.COLUMNS[i]] = i; <br>        }<br>        for (var i = 0; i &lt; mydata.DATA.length; i++) {<br>            var str = "Job ID " + mydata.DATA[i][colMap["JID"]] + " Job Name " + mydata.DATA[i][colMap["NAME"]];<br>            document.write(str + "&lt;br&gt;");<br>        }<br>    }<br>})<br></code></pre><p></p><p>I just thought I'd post in case there is someone else out there who, like me, has been having trouble figuring out how to actually make that AJAX call and then do something with it.</p><p>If anyone is interested, I can leave another comment showing the server side of it too, since getting rid of that excess whitespace can be tricky.</p><p>In any case, thanks Raymond. Your words of 9 years ago are still alive and teaching today!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2575106052">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2575106052">26</a> (In reply to <a href="#c_2575061137">#25</a>) by Raymond Camden
		posted on 3/17/2016 at 6:30 PM
		</div>
		<div class="comment_text"><p>I'm happy this is still useful for you. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3468016654">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3468016654">27</a> (In reply to <a href="#c_3468010022">#0</a>) by Raymond Camden
		posted on 8/14/2017 at 9:43 PM
		</div>
		<div class="comment_text"><p>Glad this helped - I see it is a bit ugly formatting wise - going to fix now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4054675396">
	<div>
		<img src="https://disqus.com/api/users/avatars/ericjpeterson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4054675396">28</a> by Eric J. Peterson
		posted on 8/22/2018 at 8:57 PM
		</div>
		<div class="comment_text"><p>Almost 11 years later, and I too have found this article very helpful. A nice, simple explanation. Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4055816409">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4055816409">29</a> (In reply to <a href="#c_4054675396">#28</a>) by Raymond Camden
		posted on 8/23/2018 at 1:39 PM
		</div>
		<div class="comment_text"><p>Happy to help!</p></div>
	</div>
</div>
		