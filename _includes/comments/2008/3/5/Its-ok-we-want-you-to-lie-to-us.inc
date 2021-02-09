
<div class="comment" id="c_1713677796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677796">1</a> by Tom Mollerus
		posted on 3/5/2008 at 10:33 PM
		</div>
		<div class="comment_text"><p>Perhaps they figure that somehow, some day, the URL for their API will make its way into the indexes for major spiders, leading to a lot of requests to their API that aren't valid. If they ask the developers who want to purposefully use the API to change the UA string, then they can filter traffic more efficiently at the network level instead of at the application level. It could save their API servers some significant portion of overhead.</p><p>That's one theory, at least.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677814">2</a> by Rick O
		posted on 3/6/2008 at 1:12 AM
		</div>
		<div class="comment_text"><p>Google and a couple of other search engines have done this for years.  (Try doing a Google search for "movies 90036" with cfhttp.)</p><p>It's pure speculation, but I've always ascribed this to the Rick's Roller Coaster Height Limit Theorem.  That is, it's an entry bar -- if you can figure out how to munge your User Agent string, you're marginally smarter than someone who can't, and thus that much less likely to do something offensive or stupid.  It's got to be easier to block bot UAs on a sitewide level than it is for particular apps or specific pages.</p><p>Think about the CAPTCHA breaks in the news.  If you ran a site where 0.0001% of the hits were from bot UAs, but you couldn't tell that 0.0001% from the 0.0001% that is also trying to do do nasty things ... why would you NOT block them and make the 0.0001% try that much harder?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677818">3</a> by Sammy Larbi
		posted on 3/6/2008 at 4:56 AM
		</div>
		<div class="comment_text"><p>If it were for blocking nasty bots, wouldn't the botmakers just fake a user agent too?</p><p>What gets me - what if I wanted to make my own browser and get on Yahoo - they wouldn't let me unless I spoofed?  I have to use a Yahoo approved browser?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713677819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713677819">4</a> by Tom Mollerus
		posted on 3/8/2008 at 7:06 PM
		</div>
		<div class="comment_text"><p>Of course botmakers who wanted to abuse Yahoo's API could just change their bot's UA string to gain access. So, it stands to reason to say that &lt;em&gt;Yahoo can't be doing it to block abuse.&lt;/em&gt;</p><p>So why would they do it? There must be some reasonable explanation. Who are the parties who have non-browser UA's and &lt;em&gt;wouldn't&lt;/em&gt; want to change them? My answer to that question would be: legitimate spiders.</p></div>
	</div>
</div>
		