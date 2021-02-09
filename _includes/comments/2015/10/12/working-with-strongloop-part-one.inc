
<div class="comment" id="c_2303132079">
	<div>
		<img src="https://disqus.com/api/users/avatars/jakerella.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2303132079">1</a> by Jordan Kasper
		posted on 10/12/2015 at 3:52 PM
		</div>
		<div class="comment_text"><p>Really nice work here! Thanks for the write up. A couple notes:<br>* I'd probably use "POST" instead of "PUT" for REST API resource creation<br>* The sweet explorer interface is actually swagger-ui! LoopBack exports a swagger spec that the UI can consume, which is awesome because it means you can use that swagger spec elsewhere, and you can even build your API from an existing swagger spec!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2303135393">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2303135393">2</a> (In reply to <a href="#c_2303132079">#1</a>) by Raymond Camden
		posted on 10/12/2015 at 3:54 PM
		</div>
		<div class="comment_text"><p>Thanks for adding this, Jordan. Sometimes the relationship between so many different products can be confusing. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2303452554">
	<div>
		<img src="https://disqus.com/api/users/avatars/rszehnder.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2303452554">3</a> by Robert Zehnder
		posted on 10/12/2015 at 6:40 PM
		</div>
		<div class="comment_text"><p>Dang it Ray, I just signed up for an account. Another few weeks down the rabbit hole....</p></div>
	</div>
</div>
		
<div class="comment" id="c_2303906082">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_3aFRxbaiOF.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2303906082">4</a> by Andrew Curry
		posted on 10/12/2015 at 10:29 PM
		</div>
		<div class="comment_text"><p>Excellent post! As a Rails developer getting into Node.js, I started using Strongloop recently and I've liked everything I've seen so far. I really like the JSON schema for model definitions - very easy to reason about validations &amp; associations between models.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2304347367">
	<div>
		<img src="https://disqus.com/api/users/avatars/danskaggs.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2304347367">5</a> by Dan Skaggs
		posted on 10/13/2015 at 2:59 AM
		</div>
		<div class="comment_text"><p>Very timely post. I created a NodeJS API using HapiJS for the NCDevCon session Sharon DiOrio and I did because I'd heard good things about it (and because I was looking for a totally free solution). Just today I was reading some about StrongLoop and thinking maybe this is something to check out at my "day job" as we're starting to research what the replacement tech stack for CFML is going to look like.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2326351655">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_XULXbZ1faV.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2326351655">6</a> by Justin James
		posted on 10/25/2015 at 7:58 PM
		</div>
		<div class="comment_text"><p>Had to add --msvs_version=2015 to the npm install -g strongloop command to get it working since I had multiple version of the C++ redistributable install.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2326778579">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2326778579">7</a> (In reply to <a href="#c_2326351655">#6</a>) by Raymond Camden
		posted on 10/26/2015 at 2:12 AM
		</div>
		<div class="comment_text"><p>Boggle - I love npm but when it goes weird, it really goes weird.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2960367392">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_hSIRomjL9m.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2960367392">8</a> by Eduardo
		posted on 10/20/2016 at 3:31 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, how are you, and need do a question !!!</p><p>I m doing a remoteMethod, ahd It must received a json.</p><p>	MyUser.remoteMethod (<br>		'loginAuth0',<br>		{<br>			http: {path:'/loginAuth0', verb:'post'},<br>			accepts:{arg:'user', type:'object'},<br>			returns:{arg:'MyUser', type:'MyUser'}<br>		}<br>	);</p><p>	MyUser.beforeRemote('loginAuth0', function( ctx, MyUser, next) {<br>		console.log('calling '+ JSON.stringify(ctx.methodString));<br>		console.log('calling '+ <a href="http://disq.us/url?url=http%3A%2F%2FMyUser.email%3AKmWGjjHQEmjV3mWyyBeTSmP8LgU&amp;cuid=3321886" rel="nofollow noopener" title="MyUser.email">MyUser.email</a>);<br>		console.log(1);<br>		next();<br>	});</p><p>When I call this method, I send the followed:</p><p>{<br>	"email":"emazzu@gmail.com",<br>	"password":"9000",<br>	"username":"emazzu"<br>}</p><p>But from beforeRemote, I dont know, how can access to json data sending ??</p><p>Could you help me ?<br>Regards<br>eduardo <a href="https://uploads.disquscdn.com/images/f0e1d045c5dfd09e2c33bcaa12678699c8ea59f132e13576e1b5c659873f4c08.png" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/f0e1d045c5dfd09e2c33bcaa12678699c8ea59f132e13576e1b5c659873f4c08.png">https://uploads.disquscdn.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2968068344">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2968068344">9</a> (In reply to <a href="#c_2960367392">#8</a>) by Raymond Camden
		posted on 10/25/2016 at 3:00 PM
		</div>
		<div class="comment_text"><p>Are you asking how to access the data? It should be in ctx. I forget where, just console.log it to terminal and check it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2968077277">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_hSIRomjL9m.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2968077277">10</a> (In reply to <a href="#c_2968068344">#9</a>) by Eduardo
		posted on 10/25/2016 at 3:06 PM
		</div>
		<div class="comment_text"><p>I have resolved this, Thanks for your aswser</p></div>
	</div>
</div>
		
<div class="comment" id="c_3023774819">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_toktuUrjYD.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3023774819">11</a> (In reply to <a href="#c_2968077277">#10</a>) by Abhijeet Sharma
		posted on 11/28/2016 at 9:46 AM
		</div>
		<div class="comment_text"><p>I have created UI for login and singup can you tell me how get singup and login using this UI in Strongloop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3024039963">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3024039963">12</a> (In reply to <a href="#c_3023774819">#11</a>) by Raymond Camden
		posted on 11/28/2016 at 2:33 PM
		</div>
		<div class="comment_text"><p>I have a complete demo of this that will be published on the StrongLoop Blog here, <a href="https://disq.us/url?url=https%3A%2F%2Fstrongloop.com%2Fstrongblog%2F%3AJ706vqs3-MHiEpE5GDXHzLMFLIE&amp;cuid=3321886" rel="nofollow noopener" title="https://strongloop.com/strongblog/">https://strongloop.com/stro...</a>. It isn't live yet, but will be this week I believe. You can find the code for it here: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcfjedimaster%2FStrongLoopDemos%2Ftree%2Fmaster%2Fsimpleauthdemo%3Ayp6ugZRqGd1128mirZzLb5vhLko&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cfjedimaster/StrongLoopDemos/tree/master/simpleauthdemo">https://github.com/cfjedima...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3575938467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3575938467">13</a> by Anthony
		posted on 10/20/2017 at 7:02 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I am trying out loopback.  It seems to be very easy to create CRUD APIs.  However there doesn't seem to be a way to modify the APIs so that only the GET operations is exposed?  Further more, how do I go about customizing the APIs to take different parameters?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3575947392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3575947392">14</a> (In reply to <a href="#c_3575938467">#13</a>) by Anthony
		posted on 10/20/2017 at 7:17 AM
		</div>
		<div class="comment_text"><p>Ok, so I can add additional APIs through remote method.</p><p>But I still don't see in the loopback documentation on how to disable to the out of the box CRUD API.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3576196999">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3576196999">15</a> (In reply to <a href="#c_3575947392">#14</a>) by Raymond Camden
		posted on 10/20/2017 at 12:39 PM
		</div>
		<div class="comment_text"><p>Did you see the disableRemoteMethod API? <a href="https://disq.us/url?url=https%3A%2F%2Floopback.io%2Fdoc%2Fen%2Flb2%2FExposing-models-over-REST.html%3AH9VOWD7esikU4C-UDHEVNqikP_Y&amp;cuid=3321886" rel="nofollow noopener" title="https://loopback.io/doc/en/lb2/Exposing-models-over-REST.html">https://loopback.io/doc/en/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3576757939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3576757939">16</a> (In reply to <a href="#c_3576196999">#15</a>) by Anthony
		posted on 10/20/2017 at 6:41 PM
		</div>
		<div class="comment_text"><p>This is exactly what I am looking for.</p><p>Thank you.</p></div>
	</div>
</div>
		