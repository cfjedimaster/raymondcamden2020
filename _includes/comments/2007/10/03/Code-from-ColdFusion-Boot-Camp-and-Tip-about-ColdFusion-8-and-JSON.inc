
<div class="comment" id="c_1713672778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672778">1</a> by Justin
		posted on 10/4/2007 at 6:53 AM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>What a coincidence, I've been trying to get JSON working with a few problems. The XML version is working fine.</p><p>&lt;cfsprydataset name="pubs" type="json" bind="CFC:pubs.getAllPubs()"&gt; (function returns a query)</p><p>My spry region isn't putting out any of the data and I'm not getting any errors.</p><p>Isn't cfsprydataset supposed to handle all of the conversion of coldfusion objects to JSON SPRY datasets automatically?</p><p>I just tried using your code and got a SPRY error:<br>Caught exception in JSONDataSet.loadDataIntoDataSet: SyntaxError: invalid flag after regular expression</p><p>Hope you are living every geeks dream.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672761">2</a> by Justin
		posted on 10/4/2007 at 7:01 AM
		</div>
		<div class="comment_text"><p>Hmm, after playing with that URL queryFormat=column vs. row and looking at the JSON string I see some /r/n characters coming from the Database.</p><p>Crap, that might be the problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672782">3</a> by Justin
		posted on 10/4/2007 at 8:06 AM
		</div>
		<div class="comment_text"><p>On a final note.</p><p>AHHHHHHHHHHHHHHHHHHHHHHHHHHHH</p><p>ColdFusion debugging was messing up my cfc call results! Perhaps this is well known, but I didn't realize that the json string continued into the debugging output. Bleh. Oh, even after turning it off, without 'whitespace management' enabled, the /r/r/r/r/r/r at the top of the page was messing it up (firebug showed that).</p><p>Anyhow, if it weren't for you giving me motivation to play with the URL params, I never would have got it. Well, that and firebug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672780">4</a> by Raymond Camden
		posted on 10/4/2007 at 4:46 PM
		</div>
		<div class="comment_text"><p>If your cfc method has output=false, you should get no whitespace unless you add some yourself, by doing like &lt;cfoutput&gt;  space   &lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672781">5</a> by Justin
		posted on 10/4/2007 at 5:18 PM
		</div>
		<div class="comment_text"><p>I didn't have whitespace management turned on in my DEV box.</p><p>I'd really like to see a demo of using cfsprydataset that uses JSON and acceses a Query.</p><p>Although I see the the data is being returned just fine, because it always uses the default of queryFormat=row, I'm not sure how I can actually use the data in a spry region unless I manipulate it in JS first. This seems wrong since the tag is supposed to simplify things.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672779">6</a> by Raymond Camden
		posted on 10/5/2007 at 8:03 PM
		</div>
		<div class="comment_text"><p>So as we discussed on cf-talk, you can't use CFC: for your bind, you must use URL:</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672786">7</a> by Justin
		posted on 10/5/2007 at 8:33 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Could you verify one thing for me? Is Spry assigning your rows  rowIDs (ds_RowID)? All of my rows are coming out with ds_RowIDs of zero.</p><p>When using this style that you provided above:<br>var mydata = new Spry.Data.JSONDataSet("/presentations/cfspry/product.cfc?method=getProducts&amp;returnFormat=json&amp;queryFormat=column",<br>{path:"DATA", pathIsObjectOfArrays:true});</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672788">8</a> by Raymond Camden
		posted on 10/5/2007 at 11:25 PM
		</div>
		<div class="comment_text"><p>I don't have my laptop in front of me so I can't test the code I wrote earlier. Can I see your code onlne somewhere?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672789">9</a> by Justin
		posted on 10/6/2007 at 12:53 AM
		</div>
		<div class="comment_text"><p>Sorry, it's all privatized. Take your time though, I won't be looking at it again until Tuesday.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672762">10</a> by Thomas
		posted on 10/31/2007 at 6:37 PM
		</div>
		<div class="comment_text"><p>Ray, I'm lost with this stuff. Trying to get a return from a real basic cfc that requires a db name, username and password.</p><p>I tried the regular<br>Spry.Data.XMLDataSet</p><p>and the<br>Spry.Data.JSONDataSet</p><p>but cant get any data from the cfc</p><p>&lt;cfcomponent&gt;<br>	&lt;cffunction name="UserFaves" access="remote" returntype="query"&gt;  	<br>        &lt;cfargument name="DBname" required="yes"&gt;<br>        &lt;cfargument name="DBuser" required="yes"&gt;<br>        &lt;cfargument name="DBpass" required="yes"&gt;<br>        &lt;cfargument name="DBsub" required="yes"&gt;      <br>        &lt;cfset var qCurrentFaves=""&gt;	<br>          &lt;cfquery name="qCurrentFaves" <br>          datasource="#DBname#" <br>          username="#DBuser#" <br>          password="#DBpass#" <br>          cachedwithin="#CreateTimeSpan(0,0,0,0)#"&gt;<br>			SELECT Title, URL<br>            from #DBsub#.QuickLinks</p><p>		  &lt;/cfquery&gt;  <br>		&lt;cfreturn qCurrentFaves&gt;    <br>	&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672764">11</a> by Raymond Camden
		posted on 10/31/2007 at 7:06 PM
		</div>
		<div class="comment_text"><p>Well first off - if you want to use a CFC method that does NOT return XML, you MUST use CF8, and returnFormat=json. As that will tell CF to convert your query to JSON. First change to that. In my zip, the 4th example is the one you want to look at.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672765">12</a> by Michael Damian
		posted on 4/29/2008 at 3:29 PM
		</div>
		<div class="comment_text"><p>Raymond, please help. I love (and need) spry, but it seems to have some bad habits or maybe it's me. Adapting your Dynamic4 example to my own requirements, I get the error:</p><p>Caught exception in JSONDataSet.loadDataIntoDataSet: [object Error]</p><p>My code is below.</p><p>It's weird cos I built other master details using JSON and, at first, it output some db rows but not others (as if it didn't like what was in certain fields), then suddenly it output nothing and gave the above error. So, I tried your example, and the error repeated. I'm pretty sure I haven't changed any settings or anything that might be causing the weirdness.</p><p>jsoncfc.cfm<br>-----------<br>&lt;html&gt;<br>&lt;head&gt;<br>&lt;title&gt;Cars&lt;/title&gt;<br>&lt;script type="text/javascript" src="../SpryAssets/includes/xpath.js" &gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="../SpryAssets/includes/SpryData.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="../SpryAssets/includes/SpryJSONDataSet.js"&gt;&lt;/script&gt;</p><p>&lt;script type="text/javascript"&gt;<br>var mydata = new Spry.Data.JSONDataSet("cars.cfc?method=getCars&amp;returnFormat=json&amp;queryFormat=column",<br>{path:"DATA", pathIsObjectOfArrays:true});<br>mydata.setColumnType("picFront","image");<br>&lt;/script&gt;<br>&lt;/head&gt;</p><p>&lt;body&gt;</p><p>&lt;div spry:region="mydata"&gt;</p><p>&lt;table&gt;<br>	&lt;tr&gt;<br>		&lt;th onClick="mydata.sort('make','toggle');" style="cursor: pointer;"&gt;Make&lt;/th&gt;<br>		&lt;th onClick="mydata.sort('model','toggle');" style="cursor: pointer;"&gt;Model&lt;/th&gt;<br>		&lt;th onClick="mydata.sort('year','toggle');" style="cursor: pointer;"&gt;Year&lt;/th&gt;<br>	&lt;/tr&gt;<br>	&lt;tr spry:repeat="mydata" onClick="mydata.setCurrentRow('{ds_RowID}');" spry:select="red" spry:hover="hot"&gt;<br>		&lt;td style="cursor: pointer;"&gt;{make}&lt;/td&gt;<br>		&lt;td style="cursor: pointer;"&gt;{model}&lt;/td&gt;<br>		&lt;td style="cursor: pointer;"&gt;{year}&lt;/td&gt;<br>	&lt;/tr&gt;<br>&lt;/table&gt;	<br>&lt;/p&gt;	<br>&lt;/div&gt;</p><p>&lt;span spry:detailregion="mydata"&gt;<br>&lt;h2&gt;{make}&lt;/h2&gt;<br>Model: {model}&lt;br&gt;<br>Year: {year}&lt;br&gt;<br>Description:&lt;br&gt;<br>{comments}<br>&lt;/span&gt;</p><p>&lt;/body&gt;<br>&lt;/html&gt;</p><p>cars.cfc<br>=========</p><p>&lt;cfcomponent output="false"&gt;</p><p>&lt;cffunction name="getCars" returnType="query" access="remote" output="false"&gt;<br>	&lt;cfset var q = ""&gt;</p><p>	&lt;cfquery name="q" datasource="#dsn#"&gt;<br>	select	*<br>	from	cars<br>	order by make asc<br>	&lt;/cfquery&gt;</p><p>	&lt;cfreturn q&gt;<br>&lt;/cffunction&gt;</p><p>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672766">13</a> by Raymond Camden
		posted on 4/29/2008 at 5:23 PM
		</div>
		<div class="comment_text"><p>Not to sound like a broken record - but have you tested with Firefox to see what the response really was?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672769">14</a> by Michael Damian
		posted on 4/30/2008 at 1:38 PM
		</div>
		<div class="comment_text"><p>I think I have Justin's issues. It all sounds exactly the same. Pain in the ass.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672767">15</a> by Michael Damian
		posted on 4/30/2008 at 1:57 PM
		</div>
		<div class="comment_text"><p>I, too, have the \r\n\r\n's in the JSON output. I can't figure out from comments whether this is an issue or not. What exactly is not allowed to be returned in the JSON output?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672770">16</a> by Tankerbell
		posted on 5/16/2008 at 1:04 AM
		</div>
		<div class="comment_text"><p>FYI...I had the same error as Michael:</p><p>Caught exception in JSONDataSet.loadDataIntoDataSet: [object Error]</p><p>I got the error in both IE and Firefox.  Turns out I had my workstation signed up for Debugging in CF Administrator.  As soon as I removed my IP from the "Debugging IP Addresses" list it worked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672768">17</a> by Tankerbell
		posted on 5/16/2008 at 9:43 PM
		</div>
		<div class="comment_text"><p>Another FYI...I got the second issue too.  The data was being returned (I could see it in Firefox), but it was not displaying.  The table was expanding to the 200 rows from my database, but they where blank rows.  Turns out that the variables are case sensitive.  I changed all the field names from lower to upper case and the data displayed.</p><p>So here's what I did to make this work:  <br>Used the dynamic4 example.<br>Re-pathed the links to the spry js files.<br>Re-pathed the URL in the Spry.Data.JSONDataset line (pointed to where I had put the product.cfc).<br>Changed the getProducts query to point to a database I had (just changed the cfquery SQL statements).<br>Changed all the variable references to match the fields from my database (for example changed {name} to {SERIALNUM}).  Note the upper case here, if I used lower case I got a table with blanks.  <br>Make sure that CF debugging is off.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672771">18</a> by Chad Fraser
		posted on 6/17/2008 at 1:12 AM
		</div>
		<div class="comment_text"><p>Just a follow up for "Tankerbell"...</p><p>In your spry region be sure to use ALL CAPS when naming your columns or your data will not be displayed:</p><p>INSTEAD OF {name} use {NAME} etc..</p><p>JSON must by default generate column names in ALL CAPS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672772">19</a> by Raymond Camden
		posted on 6/17/2008 at 1:14 AM
		</div>
		<div class="comment_text"><p>@Chad: Note that it depends on how you generate your JSON.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672773">20</a> by Chad Fraser
		posted on 6/17/2008 at 2:06 AM
		</div>
		<div class="comment_text"><p>This may help the cfsprydataset (CF8) question for JSON:</p><p>&lt;cfsprydataset name="mydata" type="JSON" <br>bind="URL:/presentations/cfspry/product.cfc?method=getProducts&amp;returnFormat=json&amp;queryFormat=column"<br>options='{path:"DATA", pathIsObjectOfArrays: "true"}'&gt;</p><p>Hope it helps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672774">21</a> by Scott Jibben
		posted on 3/21/2010 at 6:33 AM
		</div>
		<div class="comment_text"><p>Append this "&amp;_cf_nodebug=true" to your bind URL to eliminate the debugging output.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672775">22</a> by Phillip Senn
		posted on 9/7/2011 at 11:07 PM
		</div>
		<div class="comment_text"><p>I think you can put cfparam name="url.queryformat" default="column" at the top of your cfc, just like you can with url.returnformat.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672777">23</a> by Raymond Camden
		posted on 9/7/2011 at 11:14 PM
		</div>
		<div class="comment_text"><p>I'm sure you could.</p></div>
	</div>
</div>
		