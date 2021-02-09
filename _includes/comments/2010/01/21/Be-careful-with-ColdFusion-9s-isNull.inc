
<div class="comment" id="c_1713721405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721405">1</a> by Jim Teelar
		posted on 1/22/2010 at 10:44 AM
		</div>
		<div class="comment_text"><p>That is why I code with a lot of whitespace (line breaks and line statements).  Makes it much easier to spot the typos.</p><p>Honestly how many times did you read over that and see (panels) :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721407">2</a> by Martijn van der Woud
		posted on 1/22/2010 at 1:35 PM
		</div>
		<div class="comment_text"><p>This is why working with type-safe languages can be nicer sometimes. ;) In Java, for instance, the typo would have been caught at compile time. That said, CFML is way more flexible and easier to work with, especially for GUI code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721408">3</a> by Tyler Clendenin
		posted on 1/22/2010 at 2:44 PM
		</div>
		<div class="comment_text"><p>Oh I cant tell you the amount of legacy code with copy and pasted misspellings that I created over the years.  "Urses", "Affliations", "Lables".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721409">4</a> by Justice
		posted on 1/22/2010 at 7:43 PM
		</div>
		<div class="comment_text"><p>Then be careful with ColdFusion's IsNull, StructKeyExists, CFParam, etc.</p><p>The solution to this naming issue in languages like ColdFusion is comprehensive unit testing or even test-driven development.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721401">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721401">5</a> by Raymond Camden
		posted on 1/22/2010 at 9:36 PM
		</div>
		<div class="comment_text"><p>I'd argue that structkeyexists, cfparam tests would have fleshed out the issue more clearly. For example, if I CFPARAMed url.di instead of id, I'd get an error as soon as I use it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721404">6</a> by Alan McCollough
		posted on 1/22/2010 at 10:00 PM
		</div>
		<div class="comment_text"><p>That truly is strange. One would expect that other than "isDefined", any other "is" function would die if the variable passed to it doesn't exist. But then, 'null' is just weird. It's like having a sealed container which is not only just empty, but has even had the air vacuumed out of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721402">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721402">7</a> by Justice
		posted on 1/22/2010 at 10:13 PM
		</div>
		<div class="comment_text"><p>IsNull is not a function. It is a ColdFusion language construct that just happens to look like a function to the casual observer.</p><p>Yes, you get errors if you make programming mistakes. That's the way it works. But the question is, what strategies do you have for dealing with and even preventing these mistakes? Do you have a strong type system? Do you have static analysis? Do you practice test-driven development? Do you test your code manually after writing it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721403">8</a> by Raymond Camden
		posted on 1/22/2010 at 10:19 PM
		</div>
		<div class="comment_text"><p>The answer is yes... mostly. ;)</p><p>Seriously though - I was just trying to point out a small thing here - not start a larger discussion on best practices. What you say is absolutely true of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721411">9</a> by Justice
		posted on 1/22/2010 at 10:23 PM
		</div>
		<div class="comment_text"><p>Cool. And I agree - in most dynamic languages, since there is very little of an intrinsic safety mechanism against misspelling variable names, you simply have to be careful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721410">10</a> by Neil Moncur
		posted on 1/22/2010 at 10:25 PM
		</div>
		<div class="comment_text"><p>Lookin at you, "varaibles"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721406">11</a> by Doug
		posted on 1/23/2010 at 1:08 AM
		</div>
		<div class="comment_text"><p>Lookin at you, "arguements"</p><p>(Dammit why do I keep adding an E in there!?!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721412">12</a> by Mike
		posted on 1/23/2010 at 2:22 AM
		</div>
		<div class="comment_text"><p>@Doug - I do the exact same thing.  To correct myself, I know always say to myself 'Ar-goo-ments' while typing it.  I then leave out the 'e'.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721413">13</a> by Leigh
		posted on 1/23/2010 at 9:09 AM
		</div>
		<div class="comment_text"><p>Hmm.. so IsNull() is basically !IsDefined(..), without the quotes. I am having a ParameterExists() flashback here ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721414">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721414">14</a> by Martijn van der Woud
		posted on 1/23/2010 at 1:28 PM
		</div>
		<div class="comment_text"><p>I found this nice blog entry by Ben Nadel: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F1654-Learning-ColdFusion-9-IsNull-And-Working-With-NULL-Values.htm%3AMo3zTVB2hFoLj3wdcgotl_eFS0M&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/1654-Learning-ColdFusion-9-IsNull-And-Working-With-NULL-Values.htm">http://www.bennadel.com/blo...</a></p><p>He has written a very thorough (hey, it's Ben, what do you expect! ;)) explanation of how the isNull() function operates in different contexts. Highly recommended.</p><p>On a personal note, I find the IsNull() function utterly useless for a language that does not even implement the concept of NULL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721415">15</a> by Raymond Camden
		posted on 1/23/2010 at 8:03 PM
		</div>
		<div class="comment_text"><p>Utterly useless? I completely disagree. Many of the ORM functions can return isNull, and I find using isNull much more convenient then isDefined.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721416">16</a> by Ben Nadel
		posted on 1/24/2010 at 5:58 AM
		</div>
		<div class="comment_text"><p>I happen to like IsNull() a  lot. Not because it doesn't much of anything different than StructKeyExists()... but mostly because I like the way it looks. This might the most superficial, shallow decision making ever, but hey, what can you do. I just think this:</p><p>isNull( <a href="http://disq.us/url?url=http%3A%2F%2Frequest.foo%3AJVNlJxdAjCSTX5h4xXY8IUzmsZE&amp;cuid=3321886" rel="nofollow noopener" title="request.foo">request.foo</a> )</p><p>... looks nicer, and perhaps is easier to understand than:</p><p>!structKeyExists( request, "foo" )</p><p>... not to mention must less typing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721417">17</a> by Leigh
		posted on 1/24/2010 at 6:43 AM
		</div>
		<div class="comment_text"><p>When interacting with say java objects (that do have the concept of null) the name IsNull() does feel more intuitive. I agree it is also less code than some of the alternatives.</p><p>But that said, in a lot of basic cf code there is not much practical difference between a variable that has not been defined, and one that was set to null, such as with javacast(). So it seems less useful to me in that context.</p><p>Granted, I have not delved into ORM much.  So perhaps there is a stronger selling point from the ORM viewpoint.</p></div>
	</div>
</div>
		