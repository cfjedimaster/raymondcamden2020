
<div class="comment" id="c_1713742813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742813">1</a> by Rob
		posted on 8/30/2012 at 5:19 PM
		</div>
		<div class="comment_text"><p>Express also supports Jade as a template engine. Was there something about it that didn't work for you too? I am just trying to get started with Node/Express and if there is some reason why Jade didn't work for you, it would be useful to know. Also, did you give any consideration to MongoDB? It seems like it would be a good fit for something as document-centric as a blog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742814">2</a> by Danny
		posted on 8/30/2012 at 5:22 PM
		</div>
		<div class="comment_text"><p>Great entry.</p><p>My team is currently in the process of switching over our Coldfusion site to the NodeJS platform, it's quite the experience!</p><p>Express is the framework we also have chosen (it's great and there's really no better choice for a web app).</p><p>As for a templating engine, we're using Jade (<a href="http://disq.us/url?url=http%3A%2F%2Fjade-lang.com%2F%29%3ADV_fptsPhvd8g0d74lJizJBw0bk&amp;cuid=3321886" rel="nofollow noopener" title="http://jade-lang.com/)">http://jade-lang.com/)</a>, which is working well (our designer LOVES it).  With a little bit of tweaking we were able to get it functioning with our Backbone based front-end as well which is extremely helpful.</p><p>I think a good post would be an example of how to use package.json and npm to setup your dependencies.</p><p>Finally, here are a couple of great modules we're been using (Listing them by their name in npm)</p><p>async - Great library for keeping yourself out of "callback hell".  As you dive deeper into Node, you'll find yourself loving this one IMHO.</p><p>config - Very simple module for setting up easy config files, supports js, json or yaml configs</p><p>node-cache - Quick and simple node in memory caching solution</p><p>mongoose - I believe this is the goto MongoDB driver.  Like you mentioned with MySQL and RSS, there are a bunch of choices but this one appears to be the most robust.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742817">3</a> by Danny
		posted on 8/30/2012 at 5:32 PM
		</div>
		<div class="comment_text"><p>Small side note.  For the json viewer part.</p><p>With express you can just use:<br>res.json(rows);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742815">4</a> by Raymond Camden
		posted on 8/30/2012 at 5:58 PM
		</div>
		<div class="comment_text"><p>@Rob: I absolutely despise Jade. It is a purely personal thing. Therefore I didn't even try. (To be clear, I hate the syntax, not the project. You get what I mean.)</p><p>MongoDB: The reason I didn't use it was because my datasource already existed. It's the same one I use for this blog (well, a local copy).</p><p>@Danny: re: package.json - I only "kinda" get it which is why I didn't spend a lot of time on it here in the post. Actually, I had difficulty finding documentation for it! (Although I didn't spend a lot of time.) I get the basics of it, and appreciate its power.</p><p>re: async: I'll have to check it out. I was thinking maybe I'd just use jQuery and Deferreds, but a) it seems a bit wasteful to load all of jQuery just for that and b) I'm not even sure if it can run server side.</p><p>config: It seemed like Express had good config stuff built in. Was it not good enough?</p><p>node-cache: Cool, I'll have to check it out.</p><p>res.json: Any reason why I'd use that over JSON.stringify? Sure it is a bit smaller - but it seems so simple I'm not sure why I'd use a wrapper?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742816">5</a> by Danny
		posted on 8/30/2012 at 6:19 PM
		</div>
		<div class="comment_text"><p>Using res.json is purely a preference thing but it allows you to skip res.end() and res.writeHead() res.json automatically sets the content-type to application/json and you can also specify the status code in it:</p><p>IE res.json(500,{errorMessage: 'oh noes!'});</p><p>As for config, we just found it to be a very clean way for setting up defaults and different configs for development/production servers.</p><p>I.E. Load dev.yaml on server1 and prod.yaml on server2, then require('config').defaults.path_to_solr</p><p>We didn't quite find that level built right into express, but it's possible we didn't dig deep enough.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742820">6</a> by Raymond Camden
		posted on 8/30/2012 at 6:25 PM
		</div>
		<div class="comment_text"><p>Ah - ok - that sounds like a perfect reason to use that instead. Thanks Danny.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742818">7</a> by Danny
		posted on 8/30/2012 at 6:26 PM
		</div>
		<div class="comment_text"><p>On the subject of jQuery server.  Yes, it does run serverside in Node and you can install it via NPM.</p><p>You're right that it's pretty wasteful though because the bulk of jQuery is the selectors and DOM manipulation.</p><p>We've found that underscore (coupled with underscore.string sometimes) on the serverside is a stronger choice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742821">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742821">8</a> by TuTone
		posted on 8/31/2012 at 3:23 AM
		</div>
		<div class="comment_text"><p>I wish I could get express to install on Mac Lion, can't get it to work using 'npm install express'....</p><p>Could really use someone's help, there's chatter of forums that NPM may be down at the moment....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742819">9</a> by Raymond Camden
		posted on 8/31/2012 at 5:02 AM
		</div>
		<div class="comment_text"><p>Check the error. When I did it in OSX, the error said to run as Admin. When I did sudo npm install express, it worked fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742823">10</a> by steve
		posted on 9/5/2012 at 6:51 PM
		</div>
		<div class="comment_text"><p>I've been toying through the tutorials of node.  I saw you posted this.</p><p>Is there any chance you have the entire project available for share anywhere?</p><p>I know all the modules are downloadable through npm but I'm interested in seeing the structure and layout for something more advanced then "hello world".</p><p>Also, have you done anything with MSSQL?  I've been browsing around and everything seems to be half working, abandoned, and the microsoft seems to be dependant on having 5 other things installed and Node running on windows!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742822">11</a> by Raymond Camden
		posted on 9/5/2012 at 9:45 PM
		</div>
		<div class="comment_text"><p>Steve: I could share my blog demo. It wouldn't be terribly useful w/o the database, but if it would help, I'd share it.</p><p>And no - I haven't done anything with Node and MSSQL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742824">12</a> by Steve
		posted on 9/5/2012 at 10:11 PM
		</div>
		<div class="comment_text"><p>Thanks for the reply.</p><p>I've been searching and coming across a lot of blogs this morning that have pushed me closer to the right direction.  I installed mysql and have figured out how to query one of their sample db's, sending variables, etc....</p><p>I'm also trying to figure out how you incorporate templating like jade or ejs, but I am reading that there are commands that generate a skeleton app for you to get started with.</p><p>every DB thing I've ever done in CF has been on sql 7-2008, so my hopes were to tie into one of those. but I think until I get the rest down for now, I'll play around with th mysql db's.</p></div>
	</div>
</div>
		