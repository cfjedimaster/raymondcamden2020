
<div class="comment" id="c_1713665024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665024">1</a> by Tom Mollerus
		posted on 5/11/2007 at 11:42 PM
		</div>
		<div class="comment_text"><p>Does this kind of loop have the same problem with missing indexes as you mention in your recent post, or will it correctly skip over missing indexes?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665034">2</a> by Raymond Camden
		posted on 5/11/2007 at 11:46 PM
		</div>
		<div class="comment_text"><p>I'm going to tread lightly due to NDA.</p><p>So I will say this. If it DOES have the bug, you can bet that I tested and filed a bug report since this has been in my mind the last week.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665028">3</a> by Jay McConathy
		posted on 5/12/2007 at 12:04 AM
		</div>
		<div class="comment_text"><p>Nice feature. thanks for sharing....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665026">4</a> by Patrick Tai
		posted on 5/12/2007 at 6:41 AM
		</div>
		<div class="comment_text"><p>The second example outputs the value of the index x and not the value of the array at the index x, or am I missing something ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665027">5</a> by Raymond Camden
		posted on 5/12/2007 at 10:15 AM
		</div>
		<div class="comment_text"><p>Sorry if it wasn't clear. It outputs the value of the array at index x.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665032">6</a> by William from Lagos
		posted on 5/12/2007 at 3:27 PM
		</div>
		<div class="comment_text"><p>What about the value of the index?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665033">7</a> by Patrick Tai
		posted on 5/12/2007 at 3:38 PM
		</div>
		<div class="comment_text"><p>That means if you want to know at which index you're up to, you have to create a variable and increment it at each iteration. 'x' is not the index even if in the cfloop tag the value of index attribute is 'x'... It's a bit confusing ... <br>Thanks for sharing Ray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665039">8</a> by Raymond Camden
		posted on 5/12/2007 at 4:34 PM
		</div>
		<div class="comment_text"><p>I don't see how it is confusing. It is merely a simpler way to loop over an array. If you don't need to know the numerical index, this is as simple as you can make it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665035">9</a> by hibiscusroto
		posted on 5/12/2007 at 4:50 PM
		</div>
		<div class="comment_text"><p>dig it</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665036">10</a> by Rick Root
		posted on 5/13/2007 at 6:10 AM
		</div>
		<div class="comment_text"><p>I don't like the syntax.</p><p>I guess it's the same format as a list loop, but I still wish they'd used item="foo" rather than index="foo"</p><p>Especially in this case, since thearray index is a number, and the index="x" actually assigns arrya VALUES to "x"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665029">11</a> by Patrick Tai
		posted on 5/13/2007 at 4:38 PM
		</div>
		<div class="comment_text"><p>Using "index" as the attribute name in this new implementation is not reflecting what an index should be in an array. <br>The attribute "index" is set to 'x' but the index of your array in the loop is not 'x'. I find it confusing and not intuitive. Why not using an attribute name like 'arrayVal' ? .. . Rick is probably right, to keep the same format as the list loop. Anyway I'm just happy to see that the language is getting some more "vocabulary"... even if there are a few imperfections.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665037">12</a> by Dan
		posted on 5/14/2007 at 1:45 AM
		</div>
		<div class="comment_text"><p>Ray,<br>Are we able to speak about this now?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665025">13</a> by Raymond Camden
		posted on 5/14/2007 at 1:53 AM
		</div>
		<div class="comment_text"><p>Um, what do you mean? To say more about it? I'd probably not, just to be on the safe side of the NDA.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665038">14</a> by Dan
		posted on 5/14/2007 at 2:56 AM
		</div>
		<div class="comment_text"><p>Ok,thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665030">15</a> by duncan
		posted on 5/14/2007 at 12:07 PM
		</div>
		<div class="comment_text"><p>this work with a 2D array?<br>&lt;cfloop index="x" array="#arr#"&gt;<br> &lt;cfloop index="y" array="#x#"&gt;<br>   #y#<br> &lt;/cfloop&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665041">16</a> by Ben Scott
		posted on 5/14/2007 at 1:07 PM
		</div>
		<div class="comment_text"><p>Finally, since I started using CF I've been wondering where this function was...</p><p>Next you'll be telling us there shall be a clean way to get the number of affected rows from INSERT/UPDATE/DELETE SQL statments (oh please please please).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665031">17</a> by Raymond Camden
		posted on 5/14/2007 at 2:55 PM
		</div>
		<div class="comment_text"><p>Guys, I'm not going to answer anymore as I want to be sure I stick to the NDA. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665040">18</a> by Adam Reynolds
		posted on 5/14/2007 at 7:40 PM
		</div>
		<div class="comment_text"><p>Ray,<br>I'm assuming in a 2d array it would effectively pass the reference to the second array as this is the 'value' within the array at that time.</p><p>&lt;cfloop array="#arr1#" index="arr1index" /&gt;<br>    &lt;cfloop array="#arr1index#" index="arr2index"&gt;</p><p>This then implies that any value assignment on arr2Index would actually effect the content of the array after the looping. Yes?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665043">19</a> by Adam Reynolds
		posted on 5/14/2007 at 7:53 PM
		</div>
		<div class="comment_text"><p>Ben Scott,<br>To get the number of affected rows is DB dependent feature. If you need this feature, it's very much something specific to a DB.</p><p>If you need this information, then I would suggest you write CRUDs inside stored procs.</p><p>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665042">20</a> by Scott Arbeitman
		posted on 6/5/2007 at 5:33 PM
		</div>
		<div class="comment_text"><p>I wrote a custom tag like this using &lt;cfexit method="loop" /&gt; within my custom tag template. Its quite easy to roll your own with more features.</p><p>My syntax was:</p><p>&lt;loop:array array="#myArray#" element="e" index="i"&gt;</p><p>&lt;/loop:array&gt;</p><p>Where 'e' is the variable at the current index, i. (index is optional and element defaults to 'element').</p><p>One other handy feature of my tag is when its finished looping, it removes references to the element and index when it's done, saving you from having to var scope the element and index if you were in a CFC instance. You can avoid cleanup using the cleanup="true|false" attribute.</p><p>Naturally, I did one for structures as well:<br>&lt;loop:struct struct="#myStruct#" key="k" value="v" cleanup="true"&gt;</p><p>&lt;/loop:struct&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665046">21</a> by mgwalk
		posted on 3/8/2008 at 12:25 AM
		</div>
		<div class="comment_text"><p>Thanks for the post I forgot the index, this helped!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665049">22</a> by simon
		posted on 4/21/2008 at 1:30 PM
		</div>
		<div class="comment_text"><p>I'm new to arrays, just learning the basics.  So from this, "x" doesn't actually mean anything, its just creating 'something' to put your looped arrays into?<br>just trying to work out the job of the x</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665045">23</a> by Raymond Camden
		posted on 4/21/2008 at 3:12 PM
		</div>
		<div class="comment_text"><p>Correct.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665047">24</a> by Brandon
		posted on 4/25/2008 at 3:38 AM
		</div>
		<div class="comment_text"><p>Is there a good way to go over a multi-dimensional array?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665048">25</a> by Brandon
		posted on 4/25/2008 at 3:43 AM
		</div>
		<div class="comment_text"><p>I would assume that this would do it-</p><p>&lt;cfloop array="allResults" index="i"&gt;<br>  &lt;cfoutput&gt;<br>   &lt;cfloop array="allResults[i]" index="q"&gt;</p><p>    &lt;/cfloop&gt;<br>    &lt;/cfoutput&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665053">26</a> by Unibands
		posted on 5/5/2009 at 6:32 PM
		</div>
		<div class="comment_text"><p>This syntax seems nice at first, but then you realise that you miss out on having the current index value.</p><p>It's really not that much more effort to use the standard way:</p><p>&lt;cfset local.arrayLength = arrayLen(local.array) /&gt;<br>&lt;cfloop index="local.i" from="1" to="#local.arrayLength#"&gt;<br>##local.arrayLength[local.i]#&lt;br /&gt;<br>&lt;/cfloop&gt;</p><p>At least you can see what's going on and manipulate the values whenever you like.</p><p>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665050">27</a> by aleck
		posted on 7/23/2009 at 12:51 AM
		</div>
		<div class="comment_text"><p>well more is better. Now that we have the standard way and CF8 way we can choose which one to use. Sometimes you don't need the current index value, sometimes you just need to loop over the array to do something just like what I just did, cool!</p></div>
	</div>
</div>
		