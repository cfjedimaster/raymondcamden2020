
<div class="comment" id="c_1713723237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723237">1</a> by Ben Nadel
		posted on 4/6/2010 at 11:36 PM
		</div>
		<div class="comment_text"><p>It would be sweet if this functionality worked with isDefined()... as in isDefined( arr[ n ] ).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723235">2</a> by Jody Fitzpatrick
		posted on 4/7/2010 at 4:55 PM
		</div>
		<div class="comment_text"><p>Awe, com'on now Ben it's like 5 characters more :) I can't wait until ColdFusion has the feature</p><p>DoAllTheWorkForMe("ProjectName"); Then your application is done. Can't wait,... can't wait.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723240">3</a> by Raymond Camden
		posted on 4/7/2010 at 4:58 PM
		</div>
		<div class="comment_text"><p>@Jody: If we make things too easy, the PHPers and Ruby dev's will commit suicide out of jealousy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723244">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723244">4</a> by Ben Nadel
		posted on 4/7/2010 at 5:00 PM
		</div>
		<div class="comment_text"><p>@Jody,</p><p>Ha ha... but isNull() just *looks* cooler :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723242">5</a> by Raymond Camden
		posted on 4/7/2010 at 5:02 PM
		</div>
		<div class="comment_text"><p>You aren't cool unless you combine isNull with the trenary operator and DE at the same time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723243">6</a> by Ben Nadel
		posted on 4/7/2010 at 5:14 PM
		</div>
		<div class="comment_text"><p>Ha ha ha :) Might want to throw an IncrementValue() in there for good measure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723236">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723236">7</a> by Raymond Camden
		posted on 4/7/2010 at 5:44 PM
		</div>
		<div class="comment_text"><p>I smell a Friday contest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723239">8</a> by Ben Nadel
		posted on 4/7/2010 at 5:46 PM
		</div>
		<div class="comment_text"><p>Ha ha, sweeeet :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723238">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723238">9</a> by Ben Cass
		posted on 4/7/2010 at 8:15 PM
		</div>
		<div class="comment_text"><p>What would really be nice is if there were one function that could check if an element in an array of structs (or other complex objects) exists.</p><p>E.g. isDefined("my_array[n].element_foo")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723248">10</a> by Raymond Camden
		posted on 4/7/2010 at 10:41 PM
		</div>
		<div class="comment_text"><p>While it doesn't return a boolean, you can do that with structGet. It will attempt to find the variable based on a complex string path. It will even create stuff. So given your example, if my_array existed, but item N did not, and element_foo did not, it would make it.</p><p>structGet - the function no one uses! ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723246">11</a> by evan
		posted on 6/25/2010 at 5:22 PM
		</div>
		<div class="comment_text"><p>Hi.  Call me crazy, but my CF 9 implementation still seems to include the CF 8 style bug.  I had to revert back to using arraylen GTE...  Anyone else seen this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723247">12</a> by Raymond Camden
		posted on 6/28/2010 at 5:08 PM
		</div>
		<div class="comment_text"><p>Um, ok, I'm confused now too. I see the same. I swear this worked. Can anyone else check?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723260">13</a> by Raymond Camden
		posted on 6/28/2010 at 11:21 PM
		</div>
		<div class="comment_text"><p>Turns out I was on crack. I have no idea _why_ I put this blog post up when it really didn't work. I apologize folks.</p><p>The good news is that I can confirm it is fixed for CF901. You didn't hear that from me though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713723259">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713723259">14</a> by Ben
		posted on 4/26/2011 at 9:59 PM
		</div>
		<div class="comment_text"><p>Good lord, thank you! What a pain....</p></div>
	</div>
</div>
		