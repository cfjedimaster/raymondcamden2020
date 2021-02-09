
<div class="comment" id="c_3709468194">
	<div>
		<img src="https://disqus.com/api/users/avatars/cschweda.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3709468194">1</a> by cschweda
		posted on 1/15/2018 at 8:30 PM
		</div>
		<div class="comment_text"><p>Question: does Loopback 4 require typescript? I love Loopback 3 -- but Loopback 4 looks like quite a departure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3709476563">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3709476563">2</a> (In reply to <a href="#c_3709468194">#1</a>) by Raymond Camden
		posted on 1/15/2018 at 8:35 PM
		</div>
		<div class="comment_text"><p>I am not as well versed in LB4 as I am in LB3. It is so early in dev right now I'm kinda waiting for things to firm up a bit more before I play. Let me ask in our Slack real quick.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3709503894">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3709503894">3</a> (In reply to <a href="#c_3709476563">#2</a>) by Raymond Camden
		posted on 1/15/2018 at 8:52 PM
		</div>
		<div class="comment_text"><p>Looks like the answer is no - it will not *require* TypeScript. (But it will probably be recommended.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3711097144">
	<div>
		<img src="https://disqus.com/api/users/avatars/juancarlosmigliavacca.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3711097144">4</a> by Juan Carlos Migliavacca
		posted on 1/16/2018 at 7:28 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, congratulations for your new course, just saw it. How can i implement JWT (oauth) in loopback? i read the documentation but didnt find any example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3711214772">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3711214772">5</a> (In reply to <a href="#c_3711097144">#4</a>) by Raymond Camden
		posted on 1/16/2018 at 8:37 PM
		</div>
		<div class="comment_text"><p>I haven't gotten there yet - but I'll add it to my queue. It's a topic I've needed to cover.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3723778740">
	<div>
		<img src="https://disqus.com/api/users/avatars/juancarlosmigliavacca.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3723778740">6</a> (In reply to <a href="#c_3711214772">#5</a>) by Juan Carlos Migliavacca
		posted on 1/24/2018 at 12:44 PM
		</div>
		<div class="comment_text"><p>I have annother question. How can i specify an admin and make sure that this user is the only one who can create new users?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3723855539">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3723855539">7</a> (In reply to <a href="#c_3723778740">#6</a>) by Raymond Camden
		posted on 1/24/2018 at 1:38 PM
		</div>
		<div class="comment_text"><p>ACLs in LoopBack allow you to lock down by role. So if you lock down to role=admin, then a user would have to be in that role in order to do whatever.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3772452498">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_LjTKrsc1py.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3772452498">8</a> by NM
		posted on 2/23/2018 at 2:24 PM
		</div>
		<div class="comment_text"><p>Absolutely loved the clarity of your LB3 course on <a href="http://disq.us/url?url=http%3A%2F%2FLynda.com%3ATPz3dgmgOqHT_7X_Z6RS4XU4CiE&amp;cuid=3321886" rel="nofollow noopener" title="Lynda.com">Lynda.com</a>, Raymond. Please make a "part 2". However, I do have a question: I am a little unclear on how to actually deploy the Rest APIs to a cloud server. Do I have to use Bluemix or can I use something like Pivotal Cloud Foundry? Further, do I need to purchase API Connect for production or can I still use LB3 stand-alone? Confused. My office is trying to push Apigee/Swagger but I found LB3 so much more fun and easier to use. This is all new stuff to me as I come from a design/front-end background, but i love the power of being able to create my own Rest APIs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3772667712">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3772667712">9</a> (In reply to <a href="#c_3772452498">#8</a>) by Raymond Camden
		posted on 2/23/2018 at 4:46 PM
		</div>
		<div class="comment_text"><p>Thank you for the kind words. I'll try to answer them.</p><p>1) "Do I have to use Bluemix or can I use something like Pivotal Cloud Foundry?"<br>I really should have showed an example of this. You can deploy it ANYWHERE you can deploy a Node app. There is nothing special about it in that regards.</p><p>2) "Further, do I need to purchase API Connect for production or can I still use LB3 stand-alone?"<br>LB is 100% open source and free. You don't have to pay for it. APIC has a cost, but also a very generous free tier. You don't need to use APIC. Look at your needs and determine if an API gateway makes sense. You can also use another company's API gateway too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3772673495">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_LjTKrsc1py.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3772673495">10</a> (In reply to <a href="#c_3772667712">#9</a>) by NM
		posted on 2/23/2018 at 4:50 PM
		</div>
		<div class="comment_text"><p>Thanks! That clears up some things. Although I have successfully deployed LB3 onto PCF, I can't seem to get my Postgresql database hooked to it. I suspect it has something to do with the environment variables on the cloud server. I'll have to keep at it. Thanks.</p></div>
	</div>
</div>
		