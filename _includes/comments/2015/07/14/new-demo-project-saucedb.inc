
<div class="comment" id="c_2136226462">
	<div>
		<img src="https://disqus.com/api/users/avatars/adamtuttle.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2136226462">1</a> by Adam Tuttle
		posted on 7/14/2015 at 5:28 PM
		</div>
		<div class="comment_text"><p>I've used CloudAnt in the past and will be very happy to use it again in the future when I need something where CouchDB would be a good fit. Their product is great (it's like CouchDB on crack!) and their support is awesome.</p><p>I will throw out a cautionary tale though: Don't put the photos into your DB. NPM uses CouchDB for the registry data and until (fairly) recently they also stored binaries in there too... which turned out to be a terrible idea. Keep binary data (like your photos) on something more like Amazon S3 ~ don't know if IBM has an offering like that or not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2136245417">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2136245417">2</a> (In reply to <a href="#c_2136226462">#1</a>) by Raymond Camden
		posted on 7/14/2015 at 5:38 PM
		</div>
		<div class="comment_text"><p>Oh yeah, I definitely wasn't thinking about storing it as a blob. I was just not sure if Cloudant maybe had something baked in to help w/ binary files. S3 is definitely an option and i just used it recently with Node.</p></div>
	</div>
</div>
		