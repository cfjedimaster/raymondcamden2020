
<div class="comment" id="c_4790669061">
	<div>
		<img src="https://disqus.com/api/users/avatars/timothymiller.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4790669061">1</a> by Timothy Miller
		posted on 2/10/2020 at 3:42 PM
		</div>
		<div class="comment_text"><p>Nice post! 11ty also has a "Last Modified" keyword you can use to get the date that the file was last saved. Useful for this sort of thing. You can see it used here: <a href="https://disq.us/url?url=https%3A%2F%2Fwww.11ty.dev%2Fdocs%2Fdates%2F%3AMfofDNslL5r8oWNa6E1QlAlIwho&amp;cuid=3321886" rel="nofollow noopener" title="https://www.11ty.dev/docs/dates/">https://www.11ty.dev/docs/d...</a></p><p>Plenty of reasons you might want to set the date yourself, but you could always make it fall back to "last modified" if "lastEditDate" doesn't exist. Might be useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4790674900">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4790674900">2</a> (In reply to <a href="#c_4790669061">#1</a>) by Raymond Camden
		posted on 2/10/2020 at 3:47 PM
		</div>
		<div class="comment_text"><p>I should have mentioned that (I had planned to ;) - but I think it will have the same issue in a CI scenario like I use here, push to GitHub, Netlify clones, etc. It will always be the current time of the build. (I believe!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4790755210">
	<div>
		<img src="https://disqus.com/api/users/avatars/timothymiller.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4790755210">3</a> (In reply to <a href="#c_4790674900">#2</a>) by Timothy Miller
		posted on 2/10/2020 at 4:55 PM
		</div>
		<div class="comment_text"><p>Sure, makes sense! File dates do seem to be a bit fragile, but I thought it was a neat option anyway :) I'm enjoying all the 11ty posts, good work!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4790759890">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4790759890">4</a> (In reply to <a href="#c_4790755210">#3</a>) by Raymond Camden
		posted on 2/10/2020 at 4:59 PM
		</div>
		<div class="comment_text"><p>Hope you like todays. )</p></div>
	</div>
</div>
		
<div class="comment" id="c_4812881299">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_QETW8Pfo8V.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4812881299">5</a> by Richard Herbert
		posted on 2/27/2020 at 5:54 PM
		</div>
		<div class="comment_text"><p>When using Liquid you can use the <a href="https://disq.us/url?url=https%3A%2F%2Fruby-doc.org%2Fstdlib-2.7.0%2Flibdoc%2Ftime%2Frdoc%2FTime.html%23method-c-rfc2822%3Ad96JV1C1TfqzYVslGQmQm5auqEM&amp;cuid=3321886" rel="nofollow noopener" title="https://ruby-doc.org/stdlib-2.7.0/libdoc/time/rdoc/Time.html#method-c-rfc2822">strptime() formatting</a> on dates like <code>Last updated: {{ page.date | date: '%e %B %Y' }}</code></p></div>
	</div>
</div>
		
<div class="comment" id="c_4812895446">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4812895446">6</a> (In reply to <a href="#c_4812881299">#5</a>) by Raymond Camden
		posted on 2/27/2020 at 6:05 PM
		</div>
		<div class="comment_text"><p>Great point!</p></div>
	</div>
</div>
		