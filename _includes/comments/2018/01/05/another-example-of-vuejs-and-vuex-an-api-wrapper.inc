
<div class="comment" id="c_3697490847">
	<div>
		<img src="https://disqus.com/api/users/avatars/chevilnonis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3697490847">1</a> by Che Vilnonis
		posted on 1/8/2018 at 2:50 PM
		</div>
		<div class="comment_text"><p>Hello Ray. I'm new to Vue.js and have been following all of your Vue.js posts. I've never used Openwhisk/IBM or anything 'serverless'. Am I correct in assuming that your Openwhisk/IBM setup is handling OAuth with the Goodreads API and the parsing of the XML to JSON? Does it do anything else? How would your example change if you weren't using Openwhisk/IBM? Thanks, CV</p></div>
	</div>
</div>
		
<div class="comment" id="c_3697592854">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3697592854">2</a> (In reply to <a href="#c_3697490847">#1</a>) by Raymond Camden
		posted on 1/8/2018 at 3:59 PM
		</div>
		<div class="comment_text"><p>Hey Che! First off, let me say that I have a large number of OpenWhisk/Serverless blog posts you could read if you want to learn more. Just click on "OpenWhisk" in the tags above to see them. If you click the "About" link on top, I've also got a link to my *free* ebook on OpenWhisk.</p><p>Now specifically to your question - Goodreads supports a key based system for API calls when you do not need to know about the current user - so that's all I did, use a key. The key is "hidden" in the serverless code so you can't get it if you view source in the client-side app. Of course, my API is 100% open so you can still "abuse" my key, but I've only exposed the two things I need.</p><p>You could bypass OpenWhisk and just hit their API directly too if you want - they support CORS so it would work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3697657816">
	<div>
		<img src="https://disqus.com/api/users/avatars/chevilnonis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3697657816">3</a> (In reply to <a href="#c_3697592854">#2</a>) by Che Vilnonis
		posted on 1/8/2018 at 4:38 PM
		</div>
		<div class="comment_text"><p>Thanks! So, do you primarily use OpenWhisk as a scalable "microservice" that passes on the heavy lifting and the obfuscation of specific snippets of code you wish to execute or to build/host entire apps? Or both? :) I ask b/c I've always thought that it was a best practice to limit the number of external http calls (JS/CSS/API) when possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3697741392">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3697741392">4</a> (In reply to <a href="#c_3697657816">#3</a>) by Raymond Camden
		posted on 1/8/2018 at 5:29 PM
		</div>
		<div class="comment_text"><p>Well, serverless is a big concept and has *many* uses. My user here as basically an API "proxy" (convert XML to JSON, return slimmer results, hide a key) is *one* use of serverless.</p><p>Your last question about best practices doesn't really involve serverless at all. Whether or not I was hitting GoodReads directly or OpenWhisk, I'm still making network calls. Yes, it *does* matter how many network calls you make of course.</p><p>I suppose, technically, my user of a proxy here doubles the network calls. My client is making the same amount of calls, but there are more involved since OpenWhisk is calling out to GoodReads. However, I think the benefits outweigh that. I could also add my own caching at the OpenWhisk level. I could even completely rip out GoodReads and replace it with Amazon services too, and my front end would never know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3697773067">
	<div>
		<img src="https://disqus.com/api/users/avatars/chevilnonis.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3697773067">5</a> (In reply to <a href="#c_3697741392">#4</a>) by Che Vilnonis
		posted on 1/8/2018 at 5:47 PM
		</div>
		<div class="comment_text"><p>Thanks! The more I read about OpenWhisk, the more interested I become. Keep up the Vue.js posts!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3704572212">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_71vdTSk0Kv.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3704572212">6</a> by Marc Friedman
		posted on 1/12/2018 at 4:44 PM
		</div>
		<div class="comment_text"><p>Ray thanks for all of the great posts on Openwhisk as well as Vue.js. I have found them quite helpful. I also downloaded your 'Developing Serverless Applications' book which was a great intro and got me up to speed quickly. I appreciate your efforts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3704872653">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3704872653">7</a> (In reply to <a href="#c_3704572212">#6</a>) by Raymond Camden
		posted on 1/12/2018 at 7:27 PM
		</div>
		<div class="comment_text"><p>Thank you!</p></div>
	</div>
</div>
		