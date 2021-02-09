
<div class="comment" id="c_1713727356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727356">1</a> by Mark Andrachek
		posted on 11/3/2010 at 10:41 PM
		</div>
		<div class="comment_text"><p>I work on an ajax heavy cf8 application.  We needed json compatible with extjs, we needed it to be very fast, and we needed it to not munge our data.</p><p>The problem with most of these approaches is that there is generally a performance tradeoff.</p><p>Enter Jackson (http://<a href="http://disq.us/url?url=http%3A%2F%2Fjackson.codehaus.org%2F%29%3AQK25e0pTQjvLXpr1_JJD8NtnaLE&amp;cuid=3321886" rel="nofollow noopener" title="http://jackson.codehaus.org/)">http://jackson.codehaus.org/)</a>.</p><p>Jackson is a java json encoding/decoding library.  It's very fast. With about 500 lines of custom java code, we have a query converter that rivals the native json encoding in terms of performance, doesn't munge our data, and allows us to flexibly alter additional metadata, so we can implement things like paging easier.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727355">2</a> by Gary F
		posted on 11/3/2010 at 10:51 PM
		</div>
		<div class="comment_text"><p>I craft the json response by hand. If you know the response will always consist of a query with 3 columns, for example, then I code this:<br>&lt;cfsavecontent variable="json"&gt;<br>{"myData": [<br>&lt;cfoutput query="result"&gt; ["#firstname#","#lastname#",#id#], &lt;/cfoutput&gt;<br> ]}<br>&lt;/cfsavecontent&gt;<br>&lt;!--- output saved content and remove the final unnecessary comma ---&gt;<br>&lt;cfoutput&gt;#Reverse(Replace(Reverse(json),",","","one"))#&lt;/cfoutput&gt;</p><p>It's minimalistic and I have to customise it to each ajax request, but it works very well. Of course I add a bit of code to handle errors and empty queries, but it's compatible with older versions of CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727360">3</a> by johans
		posted on 11/3/2010 at 10:54 PM
		</div>
		<div class="comment_text"><p>One mentioned by Barney Boisvert from:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.json.org%2Fjava%2Findex.html%3AJWAFBjdO1WwaqiNo8shRp2bHXDk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.json.org/java/index.html">http://www.json.org/java/in...</a></p><p>myStruct = {<br> a = "to serialize",<br> b = 4,<br> c = [ 1, "two", "3" ]<br>};<br>json = createObject("java", "org.json.JSONObject").init(myStruct).toString();</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727353">4</a> by Gary F
		posted on 11/3/2010 at 11:01 PM
		</div>
		<div class="comment_text"><p>Mark touched on two good points. I add JSStringFormat() around data that could contain non-alphanumeric characters and do a replace() on quotes to escape them. I never get munged data.</p><p>I add another column in the json response to carry the total number of records in the query so my favourite jquery data table plugin (called DataTables funnily enough) can format it automatically in a table and page through the results. Nothing else is needed in the json response to achieve that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713727352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713727352">5</a> by Dave Merrill
		posted on 4/27/2011 at 9:21 PM
		</div>
		<div class="comment_text"><p>@Mark Andrachek: Mark, is your Jackson-based serializer an available thing that other people can use? I assume it also handles other data types, yes? I've modified jsonutil to do what we need, but a java solution is likely to perform better.</p><p>Thanks</p></div>
	</div>
</div>
		