
<div class="comment" id="c_1714084137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084137">1</a> by Adam Cameron
		posted on 10/9/2014 at 3:22 PM
		</div>
		<div class="comment_text"><p>What if you pass a NAME value in the options struct (third arg)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084138">2</a> by Raymond Camden
		posted on 10/9/2014 at 3:28 PM
		</div>
		<div class="comment_text"><p>No change, and doesn't seem to do anything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084140">3</a> by Ed Andrade
		posted on 10/9/2014 at 5:36 PM
		</div>
		<div class="comment_text"><p>As I recall ACF does the same/simular thing when you use "new query()" in cfscript as well, althought at least there you can specify a name.  The name becomes real important if you are using query caching if I remember correctly and where I discovered this behavior.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084143">4</a> by Raymond Camden
		posted on 10/9/2014 at 5:58 PM
		</div>
		<div class="comment_text"><p>The more I think about this, the more it bugs me. The person who wrote the code *knew* they were doing something bad, hence the attempt at a name that wouldn't conflict. But why in the heck was it even necessary? queryExecute should run Java code to do whatever and simply return the result to the variable, like *every other* CF function does.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084144">5</a> by Scott Jibben
		posted on 10/10/2014 at 2:00 PM
		</div>
		<div class="comment_text"><p>I would think that Adam is correct, that by putting the name in the last argument struct (queryOptions) would clear it up:</p><p>qryTest = queryExecute('SELECT * FROM art', {}, {datasource="cfartgallery", name="myresult"});</p><p>As you noted it doesn't work!</p><p>My line of thinking is that the query is executed in the queryExecute() function before the results get assigned back to qryTest, the debug output wouldn't know about qryTest yet.  I would think that there should be something in the queryOptions argument that "names" the query for debug output.</p><p>BTW, Adam your blog post on queryExecute() saved me a lot of time getting started with script coding vs tag coding.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084145">6</a> by Adam Cameron
		posted on 10/10/2014 at 2:12 PM
		</div>
		<div class="comment_text"><p>Scott: you're dead right. Ray seems to be positioning this as</p><p>qryTest = queryExecute()</p><p>being analogous to</p><p>[cfquery name="qryTest"]</p><p>But it's not. The inner workings of queryExecute() haven't (and shouldn't have) any idea about what happens on the other side of that assignment statement, and accordingly what variable its result ultimately gets assigned to. That makes no sense. Would one expect the inner workings of listAppend() to know that ultimately its result gets assigned to a variable "myList"? Why is that actually relevant to anything?</p><p>With cfquery, the name attribute value is both a label for the query debug output, plus the name of the variable to assign in the "caller scope" (to use custom tag vernacular). But that is a coincidence of convenience as much as anything else.</p><p>This is why I thought providing the function an option "name" might mitigate the situation (if Adobe were thinking about how debugging ought to work), but no. And I think it's not unreasonable for them to have overlooked this.</p><p>Ray is perhaps thinking that when the CFML is parsed by the java compiler, then the "qryTest = queryExecute()" statement can be rejigged to indicate that qryTest needs to be the "name" of the query as well, but that would mean a special parsing except for queryExecute() to do that, and building exceptions in like that are a bit grim. Not the way to resolve this.</p><p>Having thought about it, I'm not actually sure there is an issue here. I have not decompiled the code, but I would imagine the label being seen in the debug output is simply that: a label. Not a variable which might collide with something else, or cause thread-safety issues?</p><p>The one issue then is it's convenient to look through debug for a specifically-named query debug output, so having the ability to provide queryExecute() a label makes some sense, I guess.</p><p>Thoughts?</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084147">7</a> by Raymond Camden
		posted on 10/10/2014 at 2:48 PM
		</div>
		<div class="comment_text"><p>"Why is that actually relevant to anything?"<br>My point was this, Adam. We have multiple BIFs, right? In no other case do we have a problem where CF needs to make a temporary variable in the Variables scope.</p><p>When I do: x = now(); CF doesn't need to get the now value, assign it temporarily, and *then* copy it to Variables. To Scott's point, since the query is synchronous, execution has stopped and the value of my left hand variable is waiting for the query to end. That's the way I see it anyway. I honestly don't see why you think now() is any different than queryExecute()? (Outside of one being more complex of course. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714084146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084146">8</a> by Scott Jibben
		posted on 10/11/2014 at 3:28 AM
		</div>
		<div class="comment_text"><p>The "name" of the query is just a convenience for me.  It is pretty quick to find the debug output for a query if it can be unique.</p><p>I suspect that having internal queries that all have the same name could cause some threading issues as you've discovered.</p><p>If the "name" attribute of the query can't be set, wouldn't it have made sense from Adobe's perspective to create a variable that included a CreateUUID()-type unique id?</p></div>
	</div>
</div>
		