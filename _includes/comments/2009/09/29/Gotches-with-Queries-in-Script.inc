
<div class="comment" id="c_1713718759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718759">1</a> by Steve &amp;aposCutter&amp;apos Blades
		posted on 9/29/2009 at 6:21 PM
		</div>
		<div class="comment_text"><p>Trust you to find the fringe issues;) (that really aren't that fringe.) Thanks for the post and the updated cfc, this should help alleviate some issues.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718764">2</a> by Ben Nadel
		posted on 9/29/2009 at 9:58 PM
		</div>
		<div class="comment_text"><p>Yeah, the parsing of queries in CFScript is rather junky. I can't believe that using the same name twice breaks it :) crazy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718761">3</a> by ZHU, Jia
		posted on 7/28/2010 at 3:54 PM
		</div>
		<div class="comment_text"><p>Hi Ray, thanks for the fix!</p><p>We also run into those problems and I'm just as surprised that not more people are reporting this?</p><p>For the second issue, I debugged into Adobe code and <br>it only happens when there are single quoted EMPTY strings involved, this is because of the way the function replaceDelimsWithMarkers  in CustomTags/com/adobe/coldfusion/query.cfc works - it splits the statement by single quote using listtoarray, and only processes even numbered elements, which is *supposed* to be the single quoted content.</p><p>BUT, in case of empty string, ListToArray ignore the empty fields (empty strings) by default, this screws up the content interpretation.</p><p>All it takes to fix it is to use the attribute "includeEmptyFields" in the call of ListToArray function in CustomTags/com/adobe/coldfusion/query.cfc.</p><p>Line 345, change<br>var sqlArray = listtoarray(arguments.sql,"'");</p><p>to<br>var sqlArray = listtoarray(arguments.sql,"'", true, false);</p><p>This way empty content is not ignored.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718762">4</a> by Raymond Camden
		posted on 7/31/2010 at 9:08 PM
		</div>
		<div class="comment_text"><p>@Zhu - I'd file this as a bug (<a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%29%3Ad8vKuZNtVt9w46JKqr9ncROWCso&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html)">http://cfbugs.adobe.com/cfb...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718766">5</a> by ZHU, Jia
		posted on 8/2/2010 at 11:01 AM
		</div>
		<div class="comment_text"><p>Ray, thanks for reminding me, I meant to do it all along but got distracted along the way;-)</p><p>Now that it's filed as a bug, I think we can expect this to be fixed at next release!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718765">6</a> by Alexei Martchenko
		posted on 7/11/2012 at 10:41 PM
		</div>
		<div class="comment_text"><p>From all objects Adobe created to behave as tags, query is the worse and cumbersome one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718763">7</a> by Raymond Camden
		posted on 7/11/2012 at 11:16 PM
		</div>
		<div class="comment_text"><p>Have you done queries in other script based languages? To be honest, this is about the same.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718767">8</a> by Sean A
		posted on 1/23/2014 at 6:33 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I am using application.cfm that stores all the database username and password.</p><p>I am unable to define the #dsn# #username# or #password#</p><p>I tried <br>q.setDatasource("dsn");<br>q.setUsername("username");<br>q.setpassword("password");</p><p>(also tried q.setDatasource("application.dsn");) and<br>(also tried q.setDatasource("#dsn#");)</p><p>Nothing seems to be working for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718760">9</a> by Raymond Camden
		posted on 1/23/2014 at 6:49 AM
		</div>
		<div class="comment_text"><p>q.setDatasource('dsn') will not work as you are passing the literal value, dsn. If you have dsn as an application variables, then you need to either do</p><p>q.setDatasource(application.dsn)<br>or<br>q.setDatasource("#application.dsn#");</p><p>The first version is better imo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2731908020">
	<div>
		<img src="https://disqus.com/api/users/avatars/LinkWorxSeo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2731908020">10</a> by Link Worx Seo
		posted on 6/15/2016 at 11:26 AM
		</div>
		<div class="comment_text"><p>Why are you placing the: new com.adobe.coldfusion in front of the new query?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2731979780">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2731979780">11</a> (In reply to <a href="#c_2731908020">#10</a>) by Raymond Camden
		posted on 6/15/2016 at 12:26 PM
		</div>
		<div class="comment_text"><p>I believe because I didn't have a customtag path pointing to the folder where CF stored those CFCs. Plus I like it being obvious where it comes from.</p><p>As an FYI, you shouldn't be using these CFCs anymore if you use a CF version that supports queryExecute.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2732904005">
	<div>
		<img src="https://disqus.com/api/users/avatars/LinkWorxSeo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2732904005">12</a> (In reply to <a href="#c_2731979780">#11</a>) by Link Worx Seo
		posted on 6/15/2016 at 9:01 PM
		</div>
		<div class="comment_text"><p>I'm not using those anymore. I am scripting the information and today when doing a writeDump(); I noticed the same thing shown. Answered mu own question today. Guess I did not notice it before when doing writeDump(); or I just forgot. I know petty question.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3251767654">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3251767654">13</a> by Charles Robertson
		posted on 4/11/2017 at 11:40 PM
		</div>
		<div class="comment_text"><p>Also, Ray, if you try and use:</p><p>q.addParam(name=“someTable.someColumn”,value=“foo”,cfsqltype=“cf_sql_varchar”);</p><p>It throws a wobbly in Railo, but is fine in ACF. Grrrrrrrrrrrr!</p><p>For some reason, Railo gets muddled by table column prefixes, amongst many other things. Railo, seriously need to polish up their regex on this tag. There are numerous issues, which Adam Cameron has also highlighted...</p><p>My solution is just to use positional parameters:</p><p>q.addParam(value=“foo”,cfsqltype=“cf_sql_varchar”);<br>q.addParam(value=“bar”,cfsqltype=“cf_sql_varchar”);<br></p></div>
	</div>
</div>
		
<div class="comment" id="c_3251904497">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3251904497">14</a> (In reply to <a href="#c_3251767654">#13</a>) by Raymond Camden
		posted on 4/12/2017 at 1:29 AM
		</div>
		<div class="comment_text"><p>Now I'd just use queryExecute. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3252380075">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3252380075">15</a> (In reply to <a href="#c_3251904497">#14</a>) by Charles Robertson
		posted on 4/12/2017 at 11:26 AM
		</div>
		<div class="comment_text"><p>Ray. Thanks for the heads up.</p><p>I see that queryExecute() uses non named params, so this equates to:</p><p>queryService.addParam(value="bar",cfsqltype="cf_sql_varchar");</p><p>Which is perfect.</p><p>In fact, I am not totally sure what the point of named params is?<br>I am glad CF has removed this, because it creates unnecessary ambiguity.</p><p></p></div>
	</div>
</div>
		
<div class="comment" id="c_3252387008">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3252387008">16</a> (In reply to <a href="#c_3252380075">#15</a>) by Raymond Camden
		posted on 4/12/2017 at 11:33 AM
		</div>
		<div class="comment_text"><p>Nope, it supports it. And as to why - named parameters let you provide more context to your code, so instead of having to remember a particular order, you can use names to refer to values. This also makes it easier to update your SQL later w/o worrying about changing the order of bound params.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3252387642">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3252387642">17</a> (In reply to <a href="#c_3252387008">#16</a>) by Raymond Camden
		posted on 4/12/2017 at 11:34 AM
		</div>
		<div class="comment_text"><p>See reference here: <a href="https://disq.us/url?url=https%3A%2F%2Fhelpx.adobe.com%2Fcoldfusion%2Fcfml-reference%2Fcoldfusion-functions%2Ffunctions-m-r%2Fqueryexecute.html%3ANWgKlqFm0Z9vLwiO5x3MkVotzeI&amp;cuid=3321886" rel="nofollow noopener" title="https://helpx.adobe.com/coldfusion/cfml-reference/coldfusion-functions/functions-m-r/queryexecute.html">https://helpx.adobe.com/col...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3253186087">
	<div>
		<img src="https://disqus.com/api/users/avatars/charlesrobertson.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3253186087">18</a> (In reply to <a href="#c_3252387008">#16</a>) by Charles Robertson
		posted on 4/12/2017 at 8:07 PM
		</div>
		<div class="comment_text"><p>Ray. Thanks for this information.<br>OK. That makes sense with respect to named parameters.</p><p>I didn't see the named parameter example, when I originally looked at the documentation for QueryExecute().</p><p>With this in mind, it maybe that the Railo 'table column prefix bug', affects  QueryExecute(), as well.<br>I will test this later, and submit a bug report, if necessary.</p><p>I think that QueryExecute() is a better, more compact implementation than queryService.execute(), so I may start using it...</p></div>
	</div>
</div>
		