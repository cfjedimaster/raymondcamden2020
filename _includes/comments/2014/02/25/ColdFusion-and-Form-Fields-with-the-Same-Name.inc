
<div class="comment" id="c_1714082169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082169">1</a> by Gareth Arch
		posted on 2/25/2014 at 7:23 PM
		</div>
		<div class="comment_text"><p>Yeah, that doesn't make sense.  There *is* data for the 2nd form field, it's just [empty string].  No need to remove that from what is passed, let the user handle what should be done with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082171">2</a> by Phillip Senn
		posted on 2/25/2014 at 8:41 PM
		</div>
		<div class="comment_text"><p>I'm not surprised because in ColdFusion<br>#Listlen('a,b,,d')# is equal to 3.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082177">3</a> by Dan G. Switzer, II
		posted on 2/25/2014 at 8:45 PM
		</div>
		<div class="comment_text"><p>I voiced my opinion in the bug to back you up. Hopefully if they hear enough people tell them they're wrong, they'll rethink things.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082170">4</a> by Raymond Camden
		posted on 2/25/2014 at 8:48 PM
		</div>
		<div class="comment_text"><p>@Phillip: It was - but CF added the ability to count null items back in 8 I believe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082172">5</a> by Ryan Stille
		posted on 2/25/2014 at 11:33 PM
		</div>
		<div class="comment_text"><p>I didn't think getParameterMap() worked in CF10? I know CF10 broke some of my stuff that used it. I think even in CF9 it didn't work on forms that were multipart/form-data encoded.</p><p>I wrote a function that will return form field values as an array, it works on CF10 (probably most other versions too) and it works on either form encoding: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.stillnetstudios.com%2Fcoldfusion-formfield-as-array-cf10%2F%3A_IJQD9YvCIGqsguNuP7uXyK8F6g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.stillnetstudios.com/coldfusion-formfield-as-array-cf10/">http://www.stillnetstudios....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082180">6</a> by Ryan Stille
		posted on 2/25/2014 at 11:51 PM
		</div>
		<div class="comment_text"><p>More on getParameter() and getParameterMap() being broken in CF10. Adobe closed the bug and said they aren't going to fix it.<br><a href="https://disq.us/url?url=https%3A%2F%2Fbugbase.adobe.com%2Findex.cfm%3Fevent%3Dbug%26id%3D3222889%3AP8JLLVRAvAz5gu_uagrWt032I8g&amp;cuid=3321886" rel="nofollow noopener" title="https://bugbase.adobe.com/index.cfm?event=bug&amp;id=3222889">https://bugbase.adobe.com/i...</a></p><p>Railo had the same issue, but they had it fixed within hours of the bug report being filed. ARG.<br><a href="https://disq.us/url?url=https%3A%2F%2Fissues.jboss.org%2Fbrowse%2FRAILO-2622%3ANQ-WBWMkfXUkNQg2J10CjfENcTE&amp;cuid=3321886" rel="nofollow noopener" title="https://issues.jboss.org/browse/RAILO-2622">https://issues.jboss.org/br...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082174">7</a> by Scott Busche
		posted on 2/26/2014 at 12:45 AM
		</div>
		<div class="comment_text"><p>Wouldn't the easiest solution/workaround be to make the field names unique? e.g. name1, name2, name3? Guess I've always worked under the assumption they needed to be unique and have never ran into this issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082185">8</a> by Raymond Camden
		posted on 2/26/2014 at 12:46 AM
		</div>
		<div class="comment_text"><p>That is a solution as well, but it makes parsing a bit more complex imo. The thing is - this (the addition of the sameFormFieldsAsArray) was *supposed* to make this easier. :\</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082176">9</a> by Raymond Camden
		posted on 2/28/2014 at 5:27 PM
		</div>
		<div class="comment_text"><p>Well, Good news/bad news. It looks like it IS going to be fixed, but if I had to guess it would be CF11 only. We will see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082178">10</a> by Derek
		posted on 9/22/2014 at 5:36 PM
		</div>
		<div class="comment_text"><p>The last comment by Adobe said "Yes, we will make it available in the next update for CF 10." Can anyone confirm this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082175">11</a> by Derek
		posted on 9/22/2014 at 5:53 PM
		</div>
		<div class="comment_text"><p>I can confirm that it is still not fixed in CF10. I updated the bug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2785402697">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_zqY1WGJlYY.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2785402697">12</a> by Robin
		posted on 7/15/2016 at 7:52 PM
		</div>
		<div class="comment_text"><p>Do you know if this was resolved in CF11?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2785865298">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2785865298">13</a> (In reply to <a href="#c_2785402697">#12</a>) by Raymond Camden
		posted on 7/16/2016 at 1:17 AM
		</div>
		<div class="comment_text"><p>I linked to the bug report - you can see yourself. :)</p></div>
	</div>
</div>
		