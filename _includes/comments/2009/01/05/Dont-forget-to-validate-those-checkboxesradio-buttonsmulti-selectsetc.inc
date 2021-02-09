
<div class="comment" id="c_1713711255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711255">1</a> by ike
		posted on 1/5/2009 at 7:36 PM
		</div>
		<div class="comment_text"><p>That's actually the reason why I never use true/false for a boolean checkbox or radio button input. Instead I use 0 and 1 so that on the pages where the value is submitted instead of checking for isBoolean() I just reset the value</p><p>&lt;cfparam name="attributes.bool" default="0" /&gt;<br>&lt;cfset attributes.bool = val(attributes.bool) /&gt;</p><p>I've also noticed that when saving a blog entry, the category input seems to be required only if the entry was previously saved. If it's a new entry it seems to allow me to create it with no category though. It's funny because then if I edit that entry I notice that I never categorized it because it tells me I can't save the edit until I categorize it. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711260">2</a> by Raymond Camden
		posted on 1/5/2009 at 7:39 PM
		</div>
		<div class="comment_text"><p>Um, that's a feature. Really. (Duck...)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711253">3</a> by Tom K
		posted on 1/5/2009 at 7:48 PM
		</div>
		<div class="comment_text"><p>Cheers Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711249">4</a> by Kumar
		posted on 1/5/2009 at 8:14 PM
		</div>
		<div class="comment_text"><p>@ike, blogCFC is giving me an error when trying to save a new Entry without a category.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711264">5</a> by Rick Hopper
		posted on 1/5/2009 at 9:05 PM
		</div>
		<div class="comment_text"><p>I use the following to put it into a single line of code.  If it's not Boolean, it will evaluate to false.  If it is Boolean, it will then take the true/false value of the form.subscribe field.</p><p>&lt;cfset form.subscribe = (isBoolean(form.subscribe) AND form.subscribe)&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711257">6</a> by ike
		posted on 1/5/2009 at 11:42 PM
		</div>
		<div class="comment_text"><p>@ray - oh well that's a horse of a different color then. :)</p><p>@kumar - it may have already been fixed. I'm using the copy that runs the RIAForge blogs, which I think Ray had to modify to swap out the db for different projects and such... probably a few other things... and I don't think it gets upgraded to new versions of BlogCFC very often because of the merging issue.</p><p>Incidentally, the aforementioned merging issue is negated when using the onTap framework to develop applications. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711262">7</a> by Martijn van der Woud
		posted on 1/5/2009 at 11:45 PM
		</div>
		<div class="comment_text"><p>@Rick: elegant!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711258">8</a> by Aaron West
		posted on 1/5/2009 at 11:56 PM
		</div>
		<div class="comment_text"><p>Ray, thanks for posting this. I started getting these error messages over the weekend and was like: "What the crap!" I haven't had time to look into the error emails and now I don't have to! I just need to apply the fix to my super old version of BlogCFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711259">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711259">9</a> by Dipak
		posted on 1/6/2009 at 4:01 AM
		</div>
		<div class="comment_text"><p>Also, cfparam can enforce the data type to be boolean ONLY.</p><p>&lt;cfparam name="form.subscribe" default="false" type="boolean" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711254">10</a> by ike
		posted on 1/6/2009 at 11:53 AM
		</div>
		<div class="comment_text"><p>@Dipak - the reason why I avoid using type="boolean" on a cfparam when the variable is in the form scope, is because it gives you no control over the error handling. It simply throws up a big ole' ugly error message that's completely meaningless to the user. It's a pretty message for us because we're programmers, but to the user it's trash-city, this website blows, I'm going somewhere else!</p><p>This will only ever cause problems, because the best case scenario is that you get a bunch more tech-support calls asking you what's wrong with the page. The worst case scenario is that you don't get any tech support calls on it.</p><p>So I always opt for an alternative that either gracefully ignores the fact that the user typed the value "sandwich" into a bolean parameter in the url, or if that's not possible at all then I will switch to a pretty, user-friendly message that says, "I'm sorry, I don't understand what you want me to do with this 'sandwich'." and then provides them with an explanation of how to resolve the problem and continue.</p><p>If the param is on a variable in some other scope like custom tag attributes, then I'm all for specifying it as a boolean.</p></div>
	</div>
</div>
		