
<div class="comment" id="c_1713741509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741509">1</a> by SuperAlly
		posted on 6/6/2012 at 7:52 PM
		</div>
		<div class="comment_text"><p>Thanks Ray.  Great presentation.  Much appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741518">2</a> by Roy Hansen
		posted on 6/6/2012 at 8:37 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>Solid Presentation as usual. I asked a question toward the end and essentially wanted to know how I could use Jquery directly in the message handler function so I didn't need to use getElementByID and innerHTML. Naming the message handler function within Jquery's ready function seems to work. Is there anything wrong with this code:</p><p>&lt;cfwebsocket name="mysock" onmessage="$.handleMessage"&gt;<br>&lt;html&gt;<br>&lt;head&gt;<br>	&lt;script src="<a href="http://disq.us/url?url=http%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F1.7.1%2Fjquery.min.js%3AujceDgxBsI0L7im9OJ6m7EyvfZY&amp;cuid=3321886" rel="nofollow noopener" title="http://ajax.googleapis.com/ajax/libs/jquery/1.7.1/jquery.min.js">http://ajax.googleapis.com/...</a>"&gt;&lt;/script&gt;<br>	&lt;script&gt;<br>		$(document).ready(function(){<br>			$.handleMessage = function(objMessage){<br>				var message = ColdFusion.JSON.encode(objMessage);<br>				$("#divout").html(message);<br>			}<br>		});<br>	&lt;/script&gt;<br>&lt;/head&gt;	<br>&lt;body&gt;<br>&lt;div id="divout"&gt;<br>&lt;/div&gt;	<br>&lt;/body&gt;	<br>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741517">3</a> by Raymond Camden
		posted on 6/6/2012 at 8:43 PM
		</div>
		<div class="comment_text"><p>Um... well, I don't like the name (grin), but, I think it is ok. Except for one thing. You should not be encoding the message. The handler handles decoding JSON for you and gives you a 'native' JS object.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741519">4</a> by Roy Hansen
		posted on 6/6/2012 at 9:04 PM
		</div>
		<div class="comment_text"><p>Thanks. It looked and felt strange to me but it worked. On the encoding thing - that was used in Adobe Doc examples, I presume because they were just dumping the text into the div, so I left that in.</p><p>I have noticed a strange issue though with messages (whether using jquery or not). If I create an input field and just publish the text typed into it, typing the following characters or words throws a JSON parse error:</p><p>test, a, e, f, l, n, r, s, t, u</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741520">5</a> by Raymond Camden
		posted on 6/6/2012 at 9:20 PM
		</div>
		<div class="comment_text"><p>That doesn't make sense to me. Can you make a zip file for me to download and play with here?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741521">6</a> by Roy Hansen
		posted on 6/6/2012 at 9:39 PM
		</div>
		<div class="comment_text"><p>I don't have a good place to throw the zip up at the moment, but the code is short and basic. Words like: fun, fear, lane, test throw errors. Whereas words like: testing, funny do not.</p><p>In Application.cfc I only have:</p><p>this.wschannels = [{name="testchannel"}];</p><p>And in test.cfm:</p><p>&lt;cfwebsocket name="mysock" onmessage="$.handleMessage" subscribeTo="testchannel"&gt;<br>&lt;html&gt;<br>&lt;head&gt;<br>	&lt;script src="<a href="http://disq.us/url?url=http%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F1.7.1%2Fjquery.min.js%3AujceDgxBsI0L7im9OJ6m7EyvfZY&amp;cuid=3321886" rel="nofollow noopener" title="http://ajax.googleapis.com/ajax/libs/jquery/1.7.1/jquery.min.js">http://ajax.googleapis.com/...</a>"&gt;&lt;/script&gt;<br>	&lt;script&gt;<br>		$(document).ready(function(){<br>			$.handleMessage = function(objMessage){<br>				console.log(objMessage.type);<br>				if (objMessage.type == "data"){<br>					$("#divout").html(<a href="http://disq.us/url?url=http%3A%2F%2FobjMessage.data%3AgjxPztNEt1VK2dmbgz9Nru9RGkI&amp;cuid=3321886" rel="nofollow noopener" title="objMessage.data">objMessage.data</a>);<br>				}<br>				//var message = ColdFusion.JSON.encode(objMessage);<br>				//$("#divout").html(objMessage);<br>			}<br>			$("#sendMessage").click(function(){<br>				var myText = $("#myMessage").val();<br>				mysock.publish("testchannel",myText);<br>			});<br>		});<br>	&lt;/script&gt;<br>&lt;/head&gt;	<br>&lt;body&gt;<br>&lt;input type="text" id="myMessage"&gt;<br>&lt;input type="button" id="sendMessage" value="Send"&gt;<br>&lt;div id="divout"&gt;<br>&lt;/div&gt;</p><p>&lt;/body&gt;	<br>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741524">7</a> by Raymond Camden
		posted on 6/6/2012 at 9:41 PM
		</div>
		<div class="comment_text"><p>Holy smokes - you are right. Digging.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741523">8</a> by Raymond Camden
		posted on 6/6/2012 at 9:44 PM
		</div>
		<div class="comment_text"><p>Ugh. I see this in my demos too. Looks like certain short messages cause it. This could be serious.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741528">9</a> by Roy Hansen
		posted on 6/6/2012 at 9:51 PM
		</div>
		<div class="comment_text"><p>Yeah. I was thinking that too. There seemed to be no rhyme or reason why certain words failed and others didn't. I thought maybe the javascript on the backend was having namespace collisions or something? It's not clear. And I'd hate to create some variable/object name and pass it into/out of a cfc only to have the data throw an error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741526">10</a> by Raymond Camden
		posted on 6/6/2012 at 9:54 PM
		</div>
		<div class="comment_text"><p>I've been able to trace it to what appears to be a bug in the code that handles some JSON stuff. I've forwarded on my details to the engineers. Hopefully this can be fixed quickly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741525">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741525">11</a> by Raymond Camden
		posted on 6/6/2012 at 10:01 PM
		</div>
		<div class="comment_text"><p>By the way Roy - excellent find there. Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713741527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713741527">12</a> by Marty
		posted on 6/7/2012 at 12:45 AM
		</div>
		<div class="comment_text"><p>Thanks Ray for all the material. It was really great.</p></div>
	</div>
</div>
		