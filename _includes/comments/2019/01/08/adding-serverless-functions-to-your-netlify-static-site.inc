
<div class="comment" id="c_4278569590">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_QETW8Pfo8V.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4278569590">1</a> by Richard Herbert
		posted on 1/10/2019 at 1:04 PM
		</div>
		<div class="comment_text"><p>It seems like I came to some of the same conclusions as you but a day or so earlier so it's good to see that I'm not alone in my opinions.</p><p>First off, I come at this from zero knowledge of serverless and "<i>modern javascipt</i>" so it's been a tough few days getting my head around all this.</p><p>So, like I said, my conclusions are mostly the same as yours and I've captured the code and examples on Github/Netlify - <a href="https://disq.us/url?url=https%3A%2F%2Fnetlify-lambda-functions.netlify.com%2F%3A0z0qsaPb-h_KJ2uZPYwLXU0tFqM&amp;cuid=3321886" rel="nofollow noopener" title="https://netlify-lambda-functions.netlify.com/">https://netlify-lambda-functions.netlify.com/</a> - and the following are my extra observations.</p><p>* I've found the <code>Netlify &gt; Settings &gt; Functions &gt; Deploy Settings &gt; Function directory:</code> didn't seem to work for me so I moved all my config into to a <code>netlify.toml</code> file which I think also helps to keep configuration in code, makes it more transparent and portable<br>* That said, it appears that the value of the <code>functions</code> key can be anything but it has to exist<br>* If you have any node dependencies, such as <code>axios</code>, in your function you'll need to have a <code>package.json</code> file to install those. In that case you'll need to include a command key/value in your <code>netlify.toml</code> to call your build script<br>* Your build script can have several parts. One will be invoking the <code>netlify-lambda</code> dependency with the path to the source files specified. Another could be spinning up your static site generator (SSG) which in my case is <code>Jekyll</code>. To support that I've added a publish key/value pair to point to the standard <code>_site/</code> location.<br>* Talking of <code>Jekyll</code>, I've added <code>src</code> to my exclusions in my <code>_config.yml</code> file to stop that code being generated into the public site</p><p>By no means do I think these observations and suggestions are perfect and fault free. They come from a lot of trial and error combined with reading as much as I can find on the subject of Netlify functions. I do think this service has a lot potential and, like you I plan work further in this area, especially around hiding API keys which is one issue with SSG that I've been struggling with.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4278893950">
	<div>
		<img src="https://disqus.com/api/users/avatars/cschweda.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4278893950">2</a> by cschweda
		posted on 1/10/2019 at 4:45 PM
		</div>
		<div class="comment_text"><p>Great article! This prompted me to start messing around with serverless on Netlify.</p><p>A couple things I've discovered:</p><p>- If you're using Vue -- and the Vue CLI 3 -- there's a super-net Netlify lambda plugin. Install it, and it automatically sets up a `src/lambda` directory and a Netlify .toml file -- plus it proxies requests to port 9000 for easy local dev. It installs all the netlify npm packages as part of the plugin install. The only thing I realized -- and you mention it above -- is that I have to restart the dev server (via the command line or the Vue UI CLI) if you add a new function. But once you restart, it will build the function automatically and rebuild when the source changes.</p><p>- I deploy all my sites to Netlify, but I've been running my own nodemailer server on a Digital Ocean droplet for email (using Mailgun). I'm assuming I can just deploy a relatively similar setup as a serverless function -- and then just have my static site hit the endpoint when the site's user submits a comment email. I like the idea of deploying everything on Netlify in a single deploy. Really, really cool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4278897378">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4278897378">3</a> (In reply to <a href="#c_4278893950">#2</a>) by Raymond Camden
		posted on 1/10/2019 at 4:47 PM
		</div>
		<div class="comment_text"><p>This is a quick reply to your last note - I'll reply more later - but Netlify has a form processing service built in. If you just have a comment form I'd use that. (I don't use it here cuz I was using my current solution before I moved here.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4278908362">
	<div>
		<img src="https://disqus.com/api/users/avatars/cschweda.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4278908362">4</a> (In reply to <a href="#c_4278897378">#3</a>) by cschweda
		posted on 1/10/2019 at 4:54 PM
		</div>
		<div class="comment_text"><p>Ah! I forgot about Netlify's forms. That's a great idea. Thanks!</p><p>(Although, I'm still gonna fiddle with the serverless nodemailer -- just because it's pretty cool. :))</p></div>
	</div>
</div>
		
<div class="comment" id="c_4279221504">
	<div>
		<img src="https://disqus.com/api/users/avatars/cschweda.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4279221504">5</a> (In reply to <a href="#c_4278908362">#4</a>) by cschweda
		posted on 1/10/2019 at 8:02 PM
		</div>
		<div class="comment_text"><p>Quick followup: I ditched the Vue CLI plugin because I couldn't figure out a way to view errors generated by the lamda during development via the console. (Maybe I missed this -- but the plugin seems to run the npm start:lambda as a child process -- so I couldn't figure out where errors were getting displayed.) Plus, it wasn't rebuilding everytime I made a change. *shrug*</p><p>Anyway, I added all the npm stuff manually -- and then added a proxy for localhost: 9000 in vue.config.js. It proxies  '/.netlify/functions/&lt;your_lambda_name&gt;' in development to http://localhost:9000.</p><p>My question, though: as I understand it, there are *two* builds needed for each deploy to Netlify, right? The application build (if the lambda is part of an app) and the lambda build. I wasn't sure what's the correct way to do this, so I simply did a 'deploy' command in my package.json with 'yarn build &amp;&amp; yarn build:lambda" as the script.</p><p>And then in my netlify.toml, I just do a 'yarn deploy' to build the app and the lambda(s). It works fine -- but maybe there's a better way?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4280373636">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4280373636">6</a> (In reply to <a href="#c_4279221504">#5</a>) by Raymond Camden
		posted on 1/11/2019 at 3:01 PM
		</div>
		<div class="comment_text"><p>I'm not quite sure how to answer. What you said about two builds - well I'd call it two folders. The build process generates the functions from the source. Um, I don't know what else to add. :)</p></div>
	</div>
</div>
		