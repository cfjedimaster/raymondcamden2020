
<div class="comment" id="c_1713708710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708710">1</a> by Neil Bailey
		posted on 9/22/2008 at 10:57 PM
		</div>
		<div class="comment_text"><p>Maybe an array of queries...  then, loop from="1" to="#arrayLen(arguments.aQueries)#" index='x'........?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708716">2</a> by Raymond Camden
		posted on 9/22/2008 at 11:05 PM
		</div>
		<div class="comment_text"><p>Neil, my issue with that is you would need to package up the queries into an array first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708714">3</a> by Neil Bailey
		posted on 9/22/2008 at 11:19 PM
		</div>
		<div class="comment_text"><p>you would, but you would never need to worry about the number of arguments - it would always be one arguments.  You would even be able to pass different TYPES of objects (queries, arrays, structs, whatever) and deal w/ each on individually.  But yes, you would need to package them up to begin w/.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708715">4</a> by Raymond Camden
		posted on 9/22/2008 at 11:20 PM
		</div>
		<div class="comment_text"><p>Ah - well, I'd rather put the onus on the UDF to handle N arguments, as opposed to make the call package things up into an array. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708717">5</a> by Edward Beckett
		posted on 9/23/2008 at 12:11 AM
		</div>
		<div class="comment_text"><p>Thanks for the great example Ray ...</p><p>I learned a lot here :)</p><p>EB</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708724">6</a> by ike
		posted on 9/23/2008 at 12:26 AM
		</div>
		<div class="comment_text"><p>The array of queries as the first argument has the advantage of making it easier to add other arguments as needed. The downside is that it makes you build the array before passing it to the function. Granted that's easier in CF8 with the new implicit arrays syntax. :)</p><p>@Ray - the download for toXML is on the left-hand side rather than the right... Damn you, CSS flexiblity! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708719">7</a> by ike
		posted on 9/23/2008 at 12:27 AM
		</div>
		<div class="comment_text"><p>Guess I had this sitting in my browser for a while -- should have refreshed before I commented. :P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708723">8</a> by shakti
		posted on 9/23/2008 at 1:47 AM
		</div>
		<div class="comment_text"><p>thanks heaps ray! this certainly helps me out a lot. got my thing working by coding the function like u showed. cheers mate..(the toxml component is really cool as well)</p></div>
	</div>
</div>
		