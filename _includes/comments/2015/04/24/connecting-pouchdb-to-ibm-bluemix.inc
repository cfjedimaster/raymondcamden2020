
<div class="comment" id="c_1986955243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1986955243">1</a> by Jeff
		posted on 4/25/2015 at 4:10 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>I have been reading your blog for a while and really find the information useful and practical. I am trying to build a cordova application with Ionic/AngularJS using pouch for persistence. Most of my data would be coming in from API sources such as Soundcloud, Vimeo and Flickr. What would be the best way to sync the data from the api with a cloudant Couchdb instance? Cron tasks with insert/update?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1989633544">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1989633544">2</a> (In reply to <a href="#c_1986955243">#1</a>) by Raymond Camden
		posted on 4/27/2015 at 10:48 AM
		</div>
		<div class="comment_text"><p>Not sure I can say what is best here. It sounds like you are saying you want to hit an API, but store the results in your own db. If you want to do this even w/o user intervention, then yes, you could set up a Node.js server that runs a task every N hours to fetch and store data. That way when the browsers run the app, they get the latest.</p><p>Does that answer your question?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1997909449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1997909449">3</a> (In reply to <a href="#c_1989633544">#2</a>) by jeffrey
		posted on 5/1/2015 at 4:19 PM
		</div>
		<div class="comment_text"><p>Yep. Thanks !</p></div>
	</div>
</div>
		
<div class="comment" id="c_2457702393">
	<div>
		<img src="https://disqus.com/api/users/avatars/vmendoza.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2457702393">4</a> by Victor Mendoza
		posted on 1/14/2016 at 4:05 PM
		</div>
		<div class="comment_text"><p>Great! looking forward to use PouchDb and Cloudant on Bluemix. Actually your videos and posts help a lot to demystify what really Bluemix is. The info in the website does help too much to understand for folks like me that are not very familiar with cloud platforms concepts like containers, instances, droplets and so on.</p><p>Doesn't seems quite daunting after all and it seems it is not pricey for small-mid size projects!</p><p>"(And yes, I know other solutions exist too – and I’m going to explore this area more.)"</p><p>Does CouchDB (Cloudant) and PouchDB couple are still one of the most adequate solutions out there for an offline first approach for an hybrid app (with ionicframework), any other worthy options to explore?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2459759946">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2459759946">5</a> (In reply to <a href="#c_2457702393">#4</a>) by Raymond Camden
		posted on 1/15/2016 at 4:15 PM
		</div>
		<div class="comment_text"><p>Afaik Pouch is the best out there for doing syncing. For *just* client-side storage, you've got a lot of options. See my new book. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2460461184">
	<div>
		<img src="https://disqus.com/api/users/avatars/vmendoza.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2460461184">6</a> (In reply to <a href="#c_2459759946">#5</a>) by Victor Mendoza
		posted on 1/15/2016 at 8:47 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond! Yesterday I started to play around with pouchDB for a small ionic app that need to develop in order to store some app config settings, with no sync need (no real need to use PouchDB there  but I was excited to use it).</p><p>The app works ok on the browser but when I tested on iOS device the data was only stored for the current app session. If I close and restart the app the data get lost, I read a lot about potential issues, tweaked the app, added some recommended cordova plugins, etc, but no results. Not sure if there are problems with PouchDB and iOS 9 and latest cordova. After several hours of frustration I decided to give it a try later and though "I think I will get Raymond's new book for client-side storage to apply it for this app".</p></div>
	</div>
</div>
		
<div class="comment" id="c_2461708890">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2461708890">7</a> (In reply to <a href="#c_2460461184">#6</a>) by Raymond Camden
		posted on 1/16/2016 at 5:32 PM
		</div>
		<div class="comment_text"><p>Let me know how the book works for you. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2717365349">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2717365349">8</a> by Akash Pal
		posted on 6/7/2016 at 7:30 PM
		</div>
		<div class="comment_text"><p>Hi, I have been been using PouchDb with Cloudant in cordova and the syringing is very fast.</p><p>PouchDb FAQ Says:<br>-------------------------<br>PouchDB cant sync with MongoDB/MySQL/my current non-CouchDB database<br>as  backend needs to speak the CouchDB replication protocol.</p><p>However there is a way to replicate the changes made in couchDb with mysql <a href="https://disq.us/url?url=https%3A%2F%2Fwww.npmjs.com%2Fpackage%2Fcouchdb-to-mysql%3AF3K98ShaVhE0Xcwp0GwiVNsLBHQ&amp;cuid=3321886" rel="nofollow noopener" title="https://www.npmjs.com/package/couchdb-to-mysql">https://www.npmjs.com/packa...</a></p><p>My Question is; Is there a way to replicate the changes made in mysql to replicate within couchDb? <br>Here <br><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fcfaulkingham%2F1097796%3AATI3abXiV3t7_x58m2d4prvyvoc&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/cfaulkingham/1097796">https://gist.github.com/cfa...</a> <br>is an implementation but am not sure whether this will work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2718594230">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2718594230">9</a> (In reply to <a href="#c_2717365349">#8</a>) by Raymond Camden
		posted on 6/8/2016 at 1:11 PM
		</div>
		<div class="comment_text"><p>No idea. I didn't do replication between CouchDB and MySQL. That's a bit - well - a lot - off topic for this blog post. I'd post on the PouchDB support site (assuming they have one, or StackOverflow).</p></div>
	</div>
</div>
		
<div class="comment" id="c_2798712426">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_MKgmqCOZaB.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2798712426">10</a> (In reply to <a href="#c_2717365349">#8</a>) by Tuba Khan
		posted on 7/23/2016 at 6:53 AM
		</div>
		<div class="comment_text"><p>Hey if you can share your code of Syncing Data with PouchDB and Cloudant in Ionic, I'd be really grateful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3207107232">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_dREIhcnN1R.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3207107232">11</a> by MB
		posted on 3/16/2017 at 1:47 PM
		</div>
		<div class="comment_text"><p>Hi <a data-dsq-mention="cfjedimaster:disqus" href="https://disqus.com/by/cfjedimaster/" rel="nofollow noopener" title="https://disqus.com/by/cfjedimaster/">Raymond Camden</a>,<br>I was wondering if there is another hosting service for couchDB!? and I don't if it is possible to host CouchDB to my own server?</p><p>thanks <br>Milad</p></div>
	</div>
</div>
		
<div class="comment" id="c_3209453340">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3209453340">12</a> (In reply to <a href="#c_3207107232">#11</a>) by Raymond Camden
		posted on 3/17/2017 at 7:54 PM
		</div>
		<div class="comment_text"><p>Best I can suggest is what I'd do - Google it. :) I'm 99.99% sure you can run Couch locally though.</p></div>
	</div>
</div>
		