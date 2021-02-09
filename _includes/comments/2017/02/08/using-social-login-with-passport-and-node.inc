
<div class="comment" id="c_3480065497">
	<div>
		<img src="https://disqus.com/api/users/avatars/youssef_ait_haddouch.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3480065497">1</a> by youssef ait-haddouch
		posted on 8/21/2017 at 8:49 PM
		</div>
		<div class="comment_text"><p>Hi great work!<br>I m not using angular js in the client side, i have tried to call the “/auth/facebook” from inside my static html file with get method but it didnt work, can you please provide more details about the call from the client side.<br>Thanks a lot!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3480302061">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3480302061">2</a> (In reply to <a href="#c_3480065497">#1</a>) by Raymond Camden
		posted on 8/21/2017 at 11:54 PM
		</div>
		<div class="comment_text"><p>How didn't it work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3502479605">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_uQdqVczVoN.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3502479605">3</a> by David Smith
		posted on 9/5/2017 at 3:18 AM
		</div>
		<div class="comment_text"><p>Thank you Raymond for your great tutorial. Could you please provide the code for the views: { index, login, error }?. I was following your tutorial and I think I got stuck on that with the calls to: "res.render(&lt;view&gt;, &lt;data&gt;);"</p></div>
	</div>
</div>
		
<div class="comment" id="c_3502957405">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3502957405">4</a> (In reply to <a href="#c_3502479605">#3</a>) by Raymond Camden
		posted on 9/5/2017 at 1:39 PM
		</div>
		<div class="comment_text"><p>I'm honestly unsure where I put this demo. The error one was empty as I hadn't done error handling yet.</p><p>Index just had links to login and stuff:</p><p>{{#if loggedIn}}<br>	</p><p><br>	You are logged in.<br>	</p><p><br>{{else}}<br>	</p><p><br>	You are not logged in.<br>	</p><p><br>{{/if}}</p><p>login had the links for social login:</p><p>&lt;a href="/auth/twitter"&gt;Login with Twitter&lt;/a&gt;<br>&lt;a href="/auth/facebook"&gt;Login with Facebook&lt;/a&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_3544125931">
	<div>
		<img src="https://disqus.com/api/users/avatars/Zarathus73.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3544125931">5</a> by Zarathus73
		posted on 9/30/2017 at 6:55 PM
		</div>
		<div class="comment_text"><p>When I point my browser to http://localhost:3000/auth/facebook, I get the following error in the console:</p><p>Error: passport.initialize() middleware not in use</p><p>I found a few older (possibly outdated) resources that deal with this error but their solutions didn't work for me.</p><p>Any ideas how to get around this problem?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3545093867">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3545093867">6</a> (In reply to <a href="#c_3544125931">#5</a>) by Raymond Camden
		posted on 10/1/2017 at 2:26 PM
		</div>
		<div class="comment_text"><p>Are you using my code exactly? Do you have this? app.use(passport.initialize());</p></div>
	</div>
</div>
		
<div class="comment" id="c_3545388327">
	<div>
		<img src="https://disqus.com/api/users/avatars/Zarathus73.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3545388327">7</a> (In reply to <a href="#c_3545093867">#6</a>) by Zarathus73
		posted on 10/1/2017 at 5:56 PM
		</div>
		<div class="comment_text"><p>I strayed from your code somehow.  I got it to work.</p><p>Thanks for putting this together!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3545420749">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3545420749">8</a> (In reply to <a href="#c_3545388327">#7</a>) by Raymond Camden
		posted on 10/1/2017 at 6:18 PM
		</div>
		<div class="comment_text"><p>I'm here to help. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3553214323">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_pBkhFgxTUI.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3553214323">9</a> by Sathish P
		posted on 10/6/2017 at 12:08 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, what happens finally? You go to facebook, authenticate, your app gets the emails and persists, then what happens? Does your app/service issue it's own token to the client/browser/app which is then used to manage a session? How is that token issued? Does passport issue it? If yes in what way - cookie, token, something else? A http request/response trace of the whole flow would make this article complete. Thanks for the great work</p></div>
	</div>
</div>
		
<div class="comment" id="c_3553244189">
	<div>
		<img src="https://disqus.com/api/users/avatars/1p0.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3553244189">10</a> by 1p0
		posted on 10/6/2017 at 12:35 PM
		</div>
		<div class="comment_text"><p>Passport JS seems to be a dead project, almost zero activity and is modified several years ago. Any other idea for a moder authentication system? I found this one below, but I'm new to node so I'm not sure if there is something more standard.<br><a href="https://disq.us/url?url=https%3A%2F%2Fwww.npmjs.com%2Fpackage%2Fsimple-oauth2%3A2T6irc9saS-FlR8q5tbDIaKkuKI&amp;cuid=3321886" rel="nofollow noopener" title="https://www.npmjs.com/package/simple-oauth2">https://www.npmjs.com/packa...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3553280230">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3553280230">11</a> (In reply to <a href="#c_3553244189">#10</a>) by Raymond Camden
		posted on 10/6/2017 at 1:04 PM
		</div>
		<div class="comment_text"><p>Eh? Look at the GitHub repo - activity in the past few months.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3553410655">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3553410655">12</a> (In reply to <a href="#c_3553214323">#9</a>) by Raymond Camden
		posted on 10/6/2017 at 2:38 PM
		</div>
		<div class="comment_text"><p>Woah that's a lot of questions. I'll try to answer.</p><p>So you have to manage your own session. That's easy enough in Node. All Passport is doing is authenticating my identity.</p><p>I think that's answering your questions - did it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3553583941">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_pBkhFgxTUI.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3553583941">13</a> (In reply to <a href="#c_3553410655">#12</a>) by Sathish P
		posted on 10/6/2017 at 4:20 PM
		</div>
		<div class="comment_text"><p>Somewhat. Can you write a few lines on how passport manages sessions in your sample? It's heartening to know i can do it myself - i'll do my research tomorrow but if you can write a few lines on how i could it, it would be a great way to complete a terrific article. Sorry if i'm asking too much - i can try it myself and post it here sometime</p></div>
	</div>
</div>
		
<div class="comment" id="c_3555520479">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3555520479">14</a> (In reply to <a href="#c_3553583941">#13</a>) by Raymond Camden
		posted on 10/7/2017 at 3:16 PM
		</div>
		<div class="comment_text"><p>I honestly don't remember - I know that on every request it is able to use your user ID (this is Mongo specific) to fetch the user record. I don't quite remember how Passport stores to the session itself though. For working with sessions in general in Node, I'd read the chapter on it here - <a href="http://disq.us/url?url=http%3A%2F%2Fshop.oreilly.com%2Fproduct%2F0636920032977.do%3AD3pN2iGmfUoXCRMW3YHK0K0C_8I&amp;cuid=3321886" rel="nofollow noopener" title="http://shop.oreilly.com/product/0636920032977.do">http://shop.oreilly.com/pro...</a>. You don't have to buy a book of course you can just google for the topic, but I highly recommend the book for Node dev in general.</p></div>
	</div>
</div>
		