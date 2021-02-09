
<div class="comment" id="c_4971005427">
	<div>
		<img src="https://disqus.com/api/users/avatars/pixelastic.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4971005427">1</a> by Tim Carry
		posted on 6/27/2020 at 10:36 PM
		</div>
		<div class="comment_text"><p>Hey, great article. As I'm linked in it, I though I could add a few remarks that might bring some light on some questions you had:</p><p>First, when it comes to indexing "large" textual content like blog posts, it is better to split the content into smaller chunks (like one paragraph = one record), and then group them in the results using the `distinct` option of Algolia (which is similar to a GROUP BY in SQL). The relevance will be waaaay better that way when searching for multiple words than if you search into the whole text at once.</p><p>Unfortunately, doing so will increase even more the number of records you will need, and in your case it will definitely not fit in a free plan.</p><p>You can definitely keep HTML in your records as Algolia will simply ignore it when searching. But it's a good practice to remove it anyway: makes records smaller, more explicit about what is indexed, and can avoid issues with malformed tags and highlighting (which is handled by wrapping matching text in &lt;mark&gt; tags)</p><p>Algolia does not gives more importance to text in a h1 than in a p by default. It's just text for the engine. But if we go back to what I said above of splitting large text into smaller chunk, then it's something you can definitely implement. One record for each h1, h2, h3 or p of text, and you can give more weight to the h1 than to the p. This is actually how the jekyll-algolia plugin (that I used to maintain) works.</p><p>And you're right, I should stop saying algolia-indexing is in beta. I've been using it in production for a couple of years now, it's stable :)</p><p>Now, regarding InstantSearch, I really think you should give it a try. You don't have to use all the widgets to build a fancy UI, you can pick only the searchbar and the hits widget. It will connect your searchbar to the list of results to display. It abstract all the complexity of dealing with concurrent events (keyboard typing and API requesting; what happens when you start deleting characters and the previous request didn't complete, what happens if a request is too slow, etc). Basically you define a template function on the hits widget and this template function gets called with the results automatically. You just have to tweak the display as you need. And if you need more (filtering by tag, ordering by date, pagination, etc) you just add new widgets. Oh, and it handles highlighting out of the box as well :)</p><p>I built search UIs both with the raw API client and InstantSearch and using InstantSearch is really a time saver in the long run. Also, I think there is a Vue-ready version.</p><p>Note that you can define the attributesToRetrieve as part of the index settings, so you don't have to specify them in the front-end. You'll still be able to see them from the dashboard for debugging, but they will never be sent to the client. Pretty useful if you have "secret" information you use for ranking but don't want to expose.</p><p>As for your last problem, regarding the duplicated 6k records. There is technically a solution to that. I actually wanted to implement it in algolia-indexing initially but lost interest as I didn't really need it myself. Instead of duplicating the index and applying the diff on the duplicated index, we could apply the diff on the live index. This would work, but has some important drawbacks.</p><p>First, it will mean the update is not atomic. If the number of changes is important, it will proceed in stages, and then there could be a time window where the data returned to your user is inconsistent (a request at time n will give some results, but the same at n+1 will give other results because the index is being updated in real time). Also, if anything goes wrong during the indexing, your index data is corrupted and in a half-updated state. The current "fullAtomic" implementation does not have those drawbacks: either it is updated or it isn't (but instead, you need a potentially very large plan for the duplicate index).</p><p>So, I would be very happy for a Pull Request that implements this of course. We already had very interesting discussion and a RFC in progress in the issues, but I don't plan on implementing this any time soon, unfortunately.</p></div>
	</div>
</div>
		
<div class="comment" id="c_5123974133">
	<div>
		<img src="https://disqus.com/api/users/avatars/dizid.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5123974133">2</a> by Marc de Ruyter
		posted on 10/25/2020 at 6:39 AM
		</div>
		<div class="comment_text"><p>hi Raymond,<br>A half-baked compromise to get the index size within limits might be to just index the tags of posts older then, say, 3 years.</p></div>
	</div>
</div>
		
<div class="comment" id="c_5125429252">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_5125429252">3</a> (In reply to <a href="#c_5123974133">#2</a>) by Raymond Camden
		posted on 10/26/2020 at 1:19 PM
		</div>
		<div class="comment_text"><p>Yep, but I really wanted everything. :)</p></div>
	</div>
</div>
		