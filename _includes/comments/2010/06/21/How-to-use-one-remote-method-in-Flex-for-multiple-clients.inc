
<div class="comment" id="c_1713724785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724785">1</a> by Jade
		posted on 6/22/2010 at 12:58 AM
		</div>
		<div class="comment_text"><p>This may be a silly question but could you have not just assigned the text field itself to the token and rather than passing a string ('one','two','three' etc.) into the getDouble, passed the text field itself as the argument?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724798">2</a> by Raymond Camden
		posted on 6/22/2010 at 12:59 AM
		</div>
		<div class="comment_text"><p>By passing the "one", I can get the value dynamically (it's "field"+one), and I can get the result field dynamically too ("result"+one).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724799">3</a> by Joe Rinehart
		posted on 6/22/2010 at 6:26 PM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>I think what Jade was getting at was this:</p><p>&lt;!-- Text inputs changed to: --&gt;<br>&lt;mx:TextInput id="fieldone" change="getDouble( event )" /&gt;</p><p>/* GetDouble */<br>function getDouble( event : Event ) : void<br>{<br>  var input:TextInput = <a href="http://disq.us/url?url=http%3A%2F%2Fevent.target%3AvsNFkygShRHx8di7BpmwIolq7W8&amp;cuid=3321886" rel="nofollow noopener" title="event.target">event.target</a><br>  var token:AsyncToken = doubleService.double( input.text)<br>  token.input = input<br>}</p><p>/* handleResult changed to: */<br>function handleResult(resultEvent:ResultEvent):void<br>{<br>  resultEvent.token.input.text = event.result.toString()<br>}</p><p>This technique of bussing data on the token is _really_ handy when you're working with databases and need to save an instance of something you've created then use the result to update that instance with server-side information (like its ID value, etc.).</p><p>-Joe</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713724802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713724802">4</a> by Raymond Camden
		posted on 6/22/2010 at 6:32 PM
		</div>
		<div class="comment_text"><p>Ah yes - ok - that does make sense - and is simpler as well.</p></div>
	</div>
</div>
		