
<div class="comment" id="c_1713721426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721426">1</a> by Brad Wood
		posted on 1/23/2010 at 10:51 PM
		</div>
		<div class="comment_text"><p>It's worth noting caching a method's output as a function of its parameters will only work for deterministic methods.  A non-deterministic method is not based solely on the arguments, but external sources.  For instance, a method that accepted a date and returned a time span based on a dateDiff calculation using now().</p><p>I do like your idea of using serializeJSON.  I generally have just concatenated and hashed the arguments (assuming they are simple values) but serializeJSON is a bit less code and I could still hash it just to cut down on the sheer size of the cache key.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721437">2</a> by Raymond Camden
		posted on 1/23/2010 at 10:54 PM
		</div>
		<div class="comment_text"><p>Good points. Yeah, the hash would make it cleaner. Although in JSON form, I can still "read" it. I wouldn't expect a non-tech person to be able to read it, but then again, a non tech person wouldn't be examining the cache probably. Of couse, in JSON form, you could do some more deep reporting on the cache items, since you can deserialize it to examine how the method was used.</p><p>You know - ignore cache for a minute. It could be kinda useful to just log the serialized args in general. You would want to use ColdSpring though and an... aspect (may be wrong on the term there) so you aren't littering your model.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721442">3</a> by Henry Ho
		posted on 1/23/2010 at 11:40 PM
		</div>
		<div class="comment_text"><p>hmm.. would SerializeJSON() guarantee the order of arguments though? Argument scope is weird 'cause it behaves like an array and a struct at the same time.  What happen if someone pass in an ArgumentCollection?  Will there be a chance that the JSON string have the same arguments, but in different order?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721441">4</a> by Raymond Camden
		posted on 1/23/2010 at 11:43 PM
		</div>
		<div class="comment_text"><p>The order will be consistent if the caller is consistent. In a typical MVC app that means everything goes to the service via the controller.</p><p>If not, then your results may vary. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721438">5</a> by Tyler Clendenin
		posted on 1/24/2010 at 2:37 AM
		</div>
		<div class="comment_text"><p>Can a hash method be used on a Coldfusion structure?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721439">6</a> by Brad Wood
		posted on 1/24/2010 at 2:46 AM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfquickdocs.com%2Fcf8%2F%23Hash%3Ar3Rkcm_c02F7qYP6ER4Q38Eenkg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfquickdocs.com/cf8/#Hash">http://www.cfquickdocs.com/...</a><br>Input is a string.</p><p>That is why you would need to turn the struct into a string with a function such as serializeJSON.</p><p>Watch out for complex arguments like an object with references to your framework.  That could get interesting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721444">7</a> by Ben Nadel
		posted on 1/24/2010 at 6:20 AM
		</div>
		<div class="comment_text"><p>As someone who is a super fan of hash()ing values to get KEYs, I think this approach is really cool. Way to think outside the box.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721445">8</a> by Raymond Camden
		posted on 1/24/2010 at 6:21 AM
		</div>
		<div class="comment_text"><p>To be honest, I've been on a huge JSON kick lately. I also love it for logging too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721443">9</a> by Brad Wood
		posted on 1/24/2010 at 7:19 AM
		</div>
		<div class="comment_text"><p>Well in the past our only real option for representing complex variables as a string was wddx.  JSON just seems to much more lightweight and I think it's easier to eyeball values out of too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721448">10</a> by Mike Kelp
		posted on 1/26/2010 at 2:25 AM
		</div>
		<div class="comment_text"><p>Have you considered Java's hashCode() method?</p><p>See JavaDocs for java.util.HashMap as my comment was flagged as spam with the link in it.</p><p>You could potentially use this to store an identifier for the different combinations of arguments in the whole arguments structure, or make a small structure of just the arguments you care about. Under the hood, CF structures / scopes implement java.util.HashMap and I've used this before to compare de-dupe structures of data pulled from xml services for instance. It's also intended for this type of comparison, with the hash function being designed for wide variance in even slightly different input.</p><p>Ultimately though, a hash by definition can have collisions so I would only suggest doing this in cases where you expect relatively few combinations like a finite argument set. If the cache arguments can vary to a massive degree because of id's, search strings, etc. it isn't a great idea to cache them all anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721447">11</a> by Tyler Clendenin
		posted on 1/26/2010 at 4:01 AM
		</div>
		<div class="comment_text"><p>Though it is true that a hash can have collisions, the likelihood of that happening is very very very slim.  Almost as slim as a GUID not being unique within the next 50 years.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721446">12</a> by Brad Wood
		posted on 1/26/2010 at 4:19 AM
		</div>
		<div class="comment_text"><p>Did you know every time you reply on Ray's blog his comment table burns a perfectly good GUID that will never get to be re-used.  For goodness sake people, GUIDs aren't a renewable resource, we need to conserve them!<br>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721450">13</a> by Raymond Camden
		posted on 1/26/2010 at 4:29 AM
		</div>
		<div class="comment_text"><p>Hahahahah - nice. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721451">14</a> by Ryan Stille
		posted on 8/11/2012 at 12:38 AM
		</div>
		<div class="comment_text"><p>Interesting idea, I was thinking along the same lines... but then realized you can't use cache keys with commas in them since the caching functions take a comma separated list.</p><p>You could use something like<br>cacheKey = Replace(SerializeJSON(arguments),",","","all")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721452">15</a> by Raymond Camden
		posted on 8/11/2012 at 12:47 AM
		</div>
		<div class="comment_text"><p>Sorry - what? cachePut/Get take an ID value that is just an id. So "a,b" as an ID should be legal.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721456">16</a> by Ryan Stille
		posted on 8/11/2012 at 1:01 AM
		</div>
		<div class="comment_text"><p>Serialized JSON (as suggested above) will contain commas. You can't use commas in your cache keys. Take this code for example:</p><p>&lt;cfset cacheKey = "test,or serialized JSON here"&gt;<br>&lt;cfset cachePut(cacheKey,"foo") /&gt;<br>&lt;cfset cacheRemove(cacheKey) /&gt;<br>#cacheGet(cacheKey)#</p><p>The cacheGet call will return "foo", even though I've tried to delete it on the line above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721457">17</a> by Raymond Camden
		posted on 8/11/2012 at 1:03 AM
		</div>
		<div class="comment_text"><p>Wow. I'd call that a bug then. Or at least it should throw an error. If I use key a,b and it stores it as A w/o warning, that's bad. Making a test case and will write a bug report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721458">18</a> by Raymond Camden
		posted on 8/11/2012 at 1:04 AM
		</div>
		<div class="comment_text"><p>I'm not able to reproduce this using this code:</p><p>&lt;cfset cachePut("foo,moo", 1)&gt;<br>&lt;cfdump var="#cacheGetAllIds()#"&gt;<br>&lt;cfset v = cacheGet("foo,moo")&gt;</p><p>&lt;cfoutput&gt;#v#&lt;/cfoutput&gt;</p><p>I'll try with yours.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721459">19</a> by Raymond Camden
		posted on 8/11/2012 at 1:05 AM
		</div>
		<div class="comment_text"><p>Ok, to me, the bug is in cacheRemove. It fails to remove the key. So you can use commas for put/get, you just can't delete it. Can you confirm that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721460">20</a> by Ryan Stille
		posted on 8/11/2012 at 1:08 AM
		</div>
		<div class="comment_text"><p>Yes thats exactly what I was seeing. It gets placed into the cache, but it can't be removed. My guess is this is because cacheRemove() accepts a comma separated list of IDs to remove.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721461">21</a> by Raymond Camden
		posted on 8/11/2012 at 1:08 AM
		</div>
		<div class="comment_text"><p>Even odder - if you use</p><p>cacheRemove(cachekey, true)</p><p>it throws an error, even though true is supposed to be the default.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721462">22</a> by Raymond Camden
		posted on 8/11/2012 at 1:12 AM
		</div>
		<div class="comment_text"><p>Filing two bug reports.</p><p>One - inability to remove a key with commas when you are allowed to set it.</p><p>Two - if I do cacheRemove(.., true) it acts differently, which doesn't mesh with the docs that say exact=true is the default.</p></div>
	</div>
</div>
		