
<div class="comment" id="c_1713662613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662613">1</a> by Bruce
		posted on 2/24/2007 at 3:18 AM
		</div>
		<div class="comment_text"><p>Ray (or anyone else)</p><p>   I see how your JavaScript functions work for getting more XML formatted data from your testdata.cfm file.  However, I would really like to see an example of having the server/database return pages of data using the start/end values you create in the JavaScript.</p><p>   I use SQL Server 2000 and 2005 and wonder if there is a start and maxrows function I could use in the SQL to get a "page" of records in a sorted query.</p><p>   If no one has an answer, I'll research this further.</p><p>   I'm trying to avoid using ColdFusion to cache the query results and then using cfloop's start and end, etc...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662628">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662628">2</a> by todd sharp
		posted on 2/25/2007 at 6:46 PM
		</div>
		<div class="comment_text"><p>Bruce - let me see if I can remember my method that I whipped up for sql2k on Friday after Ray posted this:</p><p>select *<br>from tableA<br>where rowId in (select top 10 rowId from tableA where rowId &gt;= &lt;cfqueryparam value="#url.start#"&gt; order by rowId)</p><p>Technically you could do this:</p><p>where rowId between #url.start# and #url.end#</p><p>but that would not accommodate possible deletions.</p><p>This should work for fixed size chunks.  You may be able to declare a variable in sql and make the page size (top n) dynamic but I haven't tested that.</p><p>Oh yeah - this example assumes incremental auto numbered id's.  Google for sql paging and you'll find a lot of different methods.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662627">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662627">3</a> by Raymond Camden
		posted on 2/27/2007 at 3:42 AM
		</div>
		<div class="comment_text"><p>This is why I love MySQL. It makes it so easy. You just add limit m,n to your sql and you have a page of data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662609">4</a> by Duane Hardy
		posted on 5/10/2007 at 9:46 PM
		</div>
		<div class="comment_text"><p>Is there an example available anywhere that shows how to add "numeric" paging to the mix.  Something like &lt;&lt;Previous 1 2 3 4 5 ... Next&gt;&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662620">5</a> by Raymond Camden
		posted on 5/10/2007 at 10:15 PM
		</div>
		<div class="comment_text"><p>I don't have one - but will see if I can whip something up next week.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662618">6</a> by Duane Hardy
		posted on 5/10/2007 at 11:38 PM
		</div>
		<div class="comment_text"><p>I should have added to the previous request that this is based upon an xml return like 1 to 20 of 140.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662621">7</a> by Steve Glachan
		posted on 10/5/2007 at 5:07 AM
		</div>
		<div class="comment_text"><p>This is great! Thanks Ray. Working on a Real Estate site and at times when Users search an entire Region for properties they can be returned with 300+ listings. This solution will help a lot. I have not used JSON yet but from what I've read, if I do then it should speed loading times up a bit more too. As usual your examples are great! Your blog seems like the first place I come when needing ideas with SPRY and Coldfusion! Don't know where you get the time, but your blogs are very much appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662626">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662626">8</a> by Chris
		posted on 11/12/2007 at 9:18 PM
		</div>
		<div class="comment_text"><p>How can you do this with just an XML file?  I understand from="#url.start#" to="#url.end#" in your cfloop, but how can you define it if you already have an xml file created?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662624">9</a> by Raymond Camden
		posted on 11/12/2007 at 9:29 PM
		</div>
		<div class="comment_text"><p>If you have static XML, you are out of luck. Well, you could point to a CFM file that reads in the XML, and then strips out all the rows not needed for returning. But shoot - if you got CFML, you might as well not use static XML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662614">10</a> by Chris
		posted on 11/12/2007 at 9:34 PM
		</div>
		<div class="comment_text"><p>So if I generate my file using your toXML.cfc, I would have to do it in the cfquery, correct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662625">11</a> by Raymond Camden
		posted on 11/12/2007 at 9:36 PM
		</div>
		<div class="comment_text"><p>I'm not 100% sure I get you. If you generate the data, not file, then you are just fine. You point Spry to CF, CF does it's magic and outputs the proper XML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662632">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662632">12</a> by Chris
		posted on 11/12/2007 at 10:47 PM
		</div>
		<div class="comment_text"><p>Nevermind, I was able to come across this: <a href="http://disq.us/url?url=http%3A%2F%2Flabs.adobe.com%2Ftechnologies%2Fspry%2Fsamples%2Fdata_region%2FPagingSample.html%3AV6Mf28afjMoxFsPDUetKBh92gvc&amp;cuid=3321886" rel="nofollow noopener" title="http://labs.adobe.com/technologies/spry/samples/data_region/PagingSample.html">http://labs.adobe.com/techn...</a><br>and <a href="http://disq.us/url?url=http%3A%2F%2Flabs.adobe.com%2Ftechnologies%2Fspry%2Fsamples%2Fdata_region%2FSpryPagedViewSample.html%3Aps-Cxx1y_YWcu9gcgG8YDM0H4e0&amp;cuid=3321886" rel="nofollow noopener" title="http://labs.adobe.com/technologies/spry/samples/data_region/SpryPagedViewSample.html">http://labs.adobe.com/techn...</a> to help me solve my issue.  Thanks Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662619">13</a> by Raymond Camden
		posted on 11/12/2007 at 10:51 PM
		</div>
		<div class="comment_text"><p>To be clear - that is definitely a solution as well, but the point of this blog article was to focus on server side paging. You don't want to client side page if you have one million records. I hope that is clear.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662615">14</a> by Joshua Rountree
		posted on 12/8/2007 at 8:32 AM
		</div>
		<div class="comment_text"><p>Hey Ray,<br>Just curious but is there any known issues with this process being slow in firefox and fast in IE?</p><p>If not, is there any reason why it would be?  Possibly my Firefox setup or something with it?</p><p>I have it loading from a database with 32k records and in IE it's like instant when I click next but in Firefox it's ungodly slow.</p><p>Any tips would be appreciated.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662612">15</a> by Raymond Camden
		posted on 12/8/2007 at 7:03 PM
		</div>
		<div class="comment_text"><p>I can't imagine why. I only use FF, not IE, and it seemed fast enough to me. Perhaps do some debugging with Firebug to see if something is amiss.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662629">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662629">16</a> by Joshua Rountree
		posted on 12/8/2007 at 8:19 PM
		</div>
		<div class="comment_text"><p>That's the thing...I do use Firebug and in the console it's just calling the Get and it takes forever but in IE it's like instant...</p><p>Very odd!</p><p>Oh well, I'll keep digging.</p><p>Thanks,<br>Josh</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662623">17</a> by Mike
		posted on 3/4/2008 at 6:00 AM
		</div>
		<div class="comment_text"><p>this may be a little late to be joining in but seeing as I it might help someone, this is how I did the connection to a cfc and return with the results</p><p>just change the baseurl to something like</p><p>var baseurl = "sprytest.cfc?method=myFunction&amp;";</p><p>hence calling your function to of the cfc then in the server side code.</p><p>next just do a normal cfc access as remote and returntype as xml</p><p>&lt;cfcomponent&gt;<br>	&lt;cffunction name="myFunction" access="remote" returntype="xml"&gt;</p><p>set the params just like before</p><p>	&lt;cfparam name="url.start" default="1"&gt;<br>	&lt;cfparam name="url.end" default="100"&gt;</p><p>	&lt;cfset total = 1000&gt;</p><p>	&lt;cfif url.start gt total&gt;<br>    &lt;cfset url.start = total&gt;<br>	&lt;/cfif&gt;</p><p>    &lt;cfif url.end gt total&gt;<br>    &lt;cfset url.end = total&gt;<br>    &lt;/cfif&gt;</p><p>then setup our query<br>&lt;cfquery name="Getdata" datasource="data"&gt;<br>SELECT *<br>FROM data<br>&lt;/cfquery&gt;</p><p>the next part we are going to use cfxml and create xmlObject<br>and build our xml<br>&lt;cfxml variable="xmlObject" casesensitive="yes"&gt;<br>&lt;MyData&gt;<br>&lt;cfloop query="data" startrow="#url.start#" endrow="#url.end#"&gt;<br>&lt;data&gt;<br>&lt;ID&gt;&lt;cfoutput&gt;#XmlFormat(ID)#&lt;/cfoutput&gt;&lt;/ID&gt;<br>&lt;Name&gt;&lt;cfoutput&gt;#XmlFormat(name)#&lt;/cfoutput&gt;&lt;/Name&gt;<br>&lt;Location&gt;&lt;cfoutput&gt;#XmlFormat(LOCATION)#&lt;/cfoutput&gt;&lt;/Location&gt;<br>&lt;/data&gt;<br>&lt;/cfloop&gt;<br>&lt;/mydata&gt;<br>&lt;/cfxml&gt;<br>&lt;!---We then out put our xmlObject to the browser---&gt;<br> &lt;cfset xmldata = xmlObject&gt;<br> &lt;cfsetting showdebugoutput="no"&gt;</p><p>we then return it back<br>&lt;cfcontent type="text/xml"&gt;&lt;cfreturn xmldata&gt;<br>	&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p><p>hope that can help someone if they are having problems with that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662630">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662630">18</a> by Sync
		posted on 4/22/2008 at 10:55 PM
		</div>
		<div class="comment_text"><p>Well, your code must be for cold fusion MX8, as it does nothing on MX7. Do you have any MX7 code floating around? BTW: The demo link is 404.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662631">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662631">19</a> by Raymond Camden
		posted on 4/22/2008 at 11:00 PM
		</div>
		<div class="comment_text"><p>I don't think CF8 was even out when I wrote this so I doubt its CF8 only. WHat issue do you have? Also, to fix the demo link, just change <a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%3Anr8Wfzs5RNhu5OZT_80z8UhvscU&amp;cuid=3321886" rel="nofollow noopener" title="ray.camdenfamily.com">ray.camdenfamily.com</a> to <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%3ASnQdkTPhxh9LZ0EYImp7Dl7Dx-o&amp;cuid=3321886" rel="nofollow noopener" title="www.coldfusionjedi.com">www.coldfusionjedi.com</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662622">20</a> by Joshua Rountree
		posted on 7/10/2008 at 6:57 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>If the database returns null, spry returns null to the client.  How do I get it to just not say anything? or return &amp;nbsp; or something instead of the word NULL<br>It's really causing me problems...</p><p>Any ideas would be awesome!</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662611">21</a> by Raymond Camden
		posted on 7/10/2008 at 7:25 PM
		</div>
		<div class="comment_text"><p>Hmm. You could use a CASE in your sql, so that if the value is null, you return &amp;nbsp;. You could also use the new formatters in Spry 1.6.1. These allow you to format a result when displaying.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662617">22</a> by todd sharp
		posted on 7/10/2008 at 7:45 PM
		</div>
		<div class="comment_text"><p>A shortcut to CASE (in SQL Server) is the isNull() or coalesce() functions...</p></div>
	</div>
</div>
		