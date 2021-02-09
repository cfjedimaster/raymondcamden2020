
<div class="comment" id="c_3277407772">
	<div>
		<img src="https://disqus.com/api/users/avatars/seancorfield.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3277407772">1</a> by Sean Corfield
		posted on 4/27/2017 at 5:59 PM
		</div>
		<div class="comment_text"><p>That NPE comes from a com.adobe class that they've written to wrap JIRA -- not from JIRA itself -- so it's totally their unhandled error.</p><p>On the unused URL payloads -- if they've found that users often click through to created or voted lists, preloading them while you're reading the bug page is a reasonable optimization. That's _if_ they've measured traffic and have deliberately chosen to do this prefetch _after_ the main page has loaded. We do it for the next section of search results in an "infinite scroll" results page so we can reduce the wait as members scroll down.</p><p>But, yeah, that whole returning internal data and just not displaying it -- that's a really bad idea from a security p.o.v., not just a data transfer p.o.v.!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3277443987">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3277443987">2</a> (In reply to <a href="#c_3277407772">#1</a>) by Raymond Camden
		posted on 4/27/2017 at 6:09 PM
		</div>
		<div class="comment_text"><p>From my own personal experience, most of my usage of the tracker is viewing one issue after getting an email notification (normally for a bug I filed years ago and forgot about ;). They should definitely be using a shortened version of that data though.</p><p>Oh - get this. I start at bug X. I go home. I go to bug X again (not via changing the URL, but by click action), and they load the detail of the bug again. So even though on request one all the info was loaded, as far as I can tell, they only use it on Home. (And in a tabular form - so they really could make those results smaller.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3311278137">
	<div>
		<img src="https://disqus.com/api/users/avatars/dawesi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3311278137">3</a> (In reply to <a href="#c_3277407772">#1</a>) by dawesi
		posted on 5/17/2017 at 11:42 PM
		</div>
		<div class="comment_text"><p>not as bad as one multi-level marketing company who did same, but _without_ login... I scaped 50,000 of their members and emailed the zip to them... I scraped them 2000 at a time and had no issues... in fact, just checked and  security issue still there... makes for quite a mailing list... name, address, phone, mobile, social media, level in org (mlm) and current status... #ohdear</p></div>
	</div>
</div>
		