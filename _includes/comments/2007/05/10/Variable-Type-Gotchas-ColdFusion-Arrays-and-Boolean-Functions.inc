
<div class="comment" id="c_1713664983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664983">1</a> by Raymond
		posted on 5/10/2007 at 5:53 PM
		</div>
		<div class="comment_text"><p>What's the difference between using duplicate() and just doing</p><p>&lt;cfset newArr = arr&gt;?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664989">2</a> by Martijn
		posted on 5/10/2007 at 6:05 PM
		</div>
		<div class="comment_text"><p>On the matter of CF Arrays. How do you sort more dimensional arrays. I know have a very complicated function to do this, but I can imagine there are some standard features to do this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664988">3</a> by DK
		posted on 5/10/2007 at 6:09 PM
		</div>
		<div class="comment_text"><p>sometimes I've used:</p><p>cfif not arraySort(myarray, "numeric")</p><p>to set and test. if it trips the if I kick it out or try to remediate the problem. It acts flaky sometimes though I've found.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664990">4</a> by Raymond Camden
		posted on 5/10/2007 at 6:16 PM
		</div>
		<div class="comment_text"><p>@Raymond - if the array isn't simple, this creates a pointer. Safest to just duplicate.</p><p>@Martijn - I'd either use a custom sort, or use structs which has a more complex structSort func.</p><p>@DK - thats my question - WHEN does it return false?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664991">5</a> by DK
		posted on 5/10/2007 at 10:43 PM
		</div>
		<div class="comment_text"><p>I can say confidently in two years I've never seen one entry for the 2 areas I've used this in at about 100 users online during business hours.</p><p>Sorry don't know the answer =\</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664987">6</a> by Rob Wilkerson
		posted on 5/10/2007 at 11:53 PM
		</div>
		<div class="comment_text"><p>I have to admit that the boolean return value thing has completely *kicked my ass* a few times.  I learned my lesson so well that now I regularly find myself doing stuff like this:</p><p>&lt;cfset listAppend ( myList, myvalue ) /&gt;</p><p>Argh.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664992">7</a> by Haun in Tampa
		posted on 5/11/2007 at 4:18 PM
		</div>
		<div class="comment_text"><p>Great tip Ray!  I always wrote &lt;cfset temp = ArraySort(yadda, "yadda") /&gt;  Now I can shave off 0.77 seconds of coding with &lt;cfset ArraySort(yadda, "yadda") /&gt;</p><p>Woo hoo!</p></div>
	</div>
</div>
		