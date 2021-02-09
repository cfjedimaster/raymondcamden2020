
<div class="comment" id="c_1713744688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744688">1</a> by xavier
		posted on 2/22/2013 at 9:47 PM
		</div>
		<div class="comment_text"><p>Thans Ray for this post.  How about data movement in the other direction? My app requires that data from an existing SQL database is first uploaded on to Parse before the Mobile users can consume it. I tried to do this using the Javascript examples from your other posts and was not successful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744689">2</a> by Raymond Camden
		posted on 2/22/2013 at 9:51 PM
		</div>
		<div class="comment_text"><p>When I say they have full support in the REST API, I really mean it. :) Full CRUD (create, read, update, delete). Check the docs - but it should be pretty simple, right? If you want me to craft a CF example of adding an object, just let me know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744692">3</a> by xavier
		posted on 2/23/2013 at 1:14 AM
		</div>
		<div class="comment_text"><p>Parse gives an example of a batch POST:<br>curl -X POST \<br>  -H "X-Parse-Application-Id: eQ9oV6e3Suy9TQbmhsulOT5pB3Gd3lRfYfnk05gu" \<br>  -H "X-Parse-REST-API-Key: zBDlX1eXV8WGxoBbPhm42djWEOzjgrB65fn43gJT" \<br>  -H "Content-Type: application/json" \<br>  -d '{<br>        "requests": [<br>          {<br>            "method": "POST",<br>            "path": "/1/classes/GameScore",<br>            "body": {<br>              "score": 1337,<br>              "playerName": "Sean Plott"<br>            }<br>          },<br>          {<br>            "method": "POST",<br>            "path": "/1/classes/GameScore",<br>            "body": {<br>              "score": 1338,<br>              "playerName": "ZeroCool"<br>            }<br>          }<br>        ]<br>      }' \<br>  <a href="https://disq.us/url?url=https%3A%2F%2Fapi.parse.com%2F1%2Fbatch%3AXvFVVurN5XxrVWCPmuvNCian3LQ&amp;cuid=3321886" rel="nofollow noopener" title="https://api.parse.com/1/batch">https://api.parse.com/1/batch</a></p><p>I tried to do this using coldFusion CFHTTP  tag and got "unathorized" error. I also tested to make sure that i can read an existing record, just to confirm that my Parse IDs are good.  My CF code looks like this:</p><p>&lt;cfset dataString = "{ requests: ["&gt;<br>&lt;cfloop query="myQ"&gt;<br>  	&lt;cfif myQ.currentRow NEQ 1&gt;<br>  		&lt;cfset dataString &amp;= ', '&gt;<br>  	&lt;/cfif&gt;<br>  	&lt;cfset dataString &amp;= '{ method: "POST", "path": "/1/classes/myParseObject", "body": {'&gt;<br>	&lt;cfset dataString &amp;= '"userid":' &amp; myQ.userId &amp; ', "firstName":' &amp;  myQ.firstName &amp; ', "lastName":' &amp;  myQ.lastName &amp; '}}'&gt;<br>&lt;/cfloop&gt;<br>&lt;cfset dataString &amp;= ' ] }'&gt;</p><p>&lt;cfset parseAppId = "myParseAppId_here"&gt;<br>&lt;cfset parseRestId = "myParseRestId_here"&gt; <br>&lt;cfset dataUrl = "<a href="https://disq.us/url?url=https%3A%2F%2Fapi.parse.com%2F1%2Fclasses%2FmyParseObject%3A4zwv6gKgMchIAg1z9F-ZmN5P1b8&amp;cuid=3321886" rel="nofollow noopener" title="https://api.parse.com/1/classes/myParseObject">https://api.parse.com/1/cla...</a>"&gt;<br>&lt;cfhttp method="Post" url="#dataUrl#"&gt;<br>	&lt;cfhttpparam type="Formfield" name="X-Parse-Application-Id" value="#parseAppId#"&gt;<br>	&lt;cfhttpparam type="Formfield" name="X-Parse-REST-API-Key" value="#parseRestId#"&gt;<br>	&lt;cfhttpparam type="Formfield" name="Content-Type" value="application/json"&gt;<br>	&lt;cfhttpparam type="Formfield" name="data" value="#dataString#"&gt;<br>&lt;/cfhttp&gt;<br>&lt;cfdump var="#deserializeJSON(cfhttp.filecontent)#"&gt;</p><p>I suspect the line where i am passing the data is where the problem is.</p><p>Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744693">4</a> by Raymond Camden
		posted on 2/23/2013 at 1:27 AM
		</div>
		<div class="comment_text"><p>I didn't test batch, but your content-type has the wrong type - it should be type=header. See this working example:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fcfjedimaster%2F5016327%3AeYS4M36gxZSdjBL1cooUJyd-Xko&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/cfjedimaster/5016327">https://gist.github.com/cfj...</a></p><p>Note, CF insisted on converting my "9" to 9 which broke with parse because it wanted it to be a string (even though it is a number ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744691">5</a> by Raymond Camden
		posted on 2/23/2013 at 1:27 AM
		</div>
		<div class="comment_text"><p>Also, you don't pass the data as a formfield, but as a "body" type.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744694">6</a> by xavier
		posted on 2/23/2013 at 2:41 AM
		</div>
		<div class="comment_text"><p>Getting an invalid json error. Tried your example also and got the same results:</p><p>struct<br>code	 107<br>error	 invalid json: "{\"comments\":\"From CF\",\"howdangerous\":\"3\",\"numcows\":\"99\"}"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744695">7</a> by Raymond Camden
		posted on 2/23/2013 at 2:44 AM
		</div>
		<div class="comment_text"><p>Not sure what to say - it just worked for me. Obviously my data model is not the same as yours so you can't use the exact same data. If you want to send me your app/rest api info and a snapshot of your data model (from the Parse dashboard), I can try it myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2138895859">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_tqwH1VZ8z3.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2138895859">8</a> by James Ramsey
		posted on 7/16/2015 at 1:59 AM
		</div>
		<div class="comment_text"><p>Do you have any examples of how to use the Rest API to upload an image?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2139472941">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2139472941">9</a> (In reply to <a href="#c_2138895859">#8</a>) by Raymond Camden
		posted on 7/16/2015 at 12:08 PM
		</div>
		<div class="comment_text"><p>Sorry, no.</p></div>
	</div>
</div>
		