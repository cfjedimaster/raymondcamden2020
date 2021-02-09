
<div class="comment" id="c_2695200381">
	<div>
		<img src="https://disqus.com/api/users/avatars/rszehnder.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2695200381">1</a> by Robert Zehnder
		posted on 5/25/2016 at 7:44 PM
		</div>
		<div class="comment_text"><p>That being said, they probably should avoid my blog like the plague.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2695202732">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2695202732">2</a> (In reply to <a href="#c_2695200381">#1</a>) by Raymond Camden
		posted on 5/25/2016 at 7:45 PM
		</div>
		<div class="comment_text"><p>Heh!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2718790942">
	<div>
		<img src="https://disqus.com/api/users/avatars/sydbarrettBR.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2718790942">3</a> by sydbarrett
		posted on 6/8/2016 at 3:16 PM
		</div>
		<div class="comment_text"><p>Hi, so I checked this, but I still don't get it. (yes I'm still crawling in coding). In the other form you add &lt;input type="hidden" name="_next" value=""&gt; so to forward the page to the "Thanks" page after sending. But here you didn't. So when you said: "You would modify the code to set the values to "" and not forward the page away."<br>I add the input hidden, with both value "" and value "thankyouBlock" but it still forwarded it to a new page. Can you help me out? Sorry if I'm pushing your good will</p></div>
	</div>
</div>
		
<div class="comment" id="c_2718943213">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2718943213">4</a> (In reply to <a href="#c_2718790942">#3</a>) by Raymond Camden
		posted on 6/8/2016 at 3:50 PM
		</div>
		<div class="comment_text"><p>Ok so a few things. You do not want a form field called _next. That tells FormSpree where to go.</p><p>First - are you asking how to set values to ""? If so - I'd get a bit familiar with jQuery as this is basic usage type stuff. The general way is this:</p><p>$("#foo").val("");</p><p>where foo is the ID of a form field. You would do that one per field.</p><p>Next - I was a bit mistaken on the other blog post where I said my code 'forwarded' you on. I forgot my demo here simply hides content and shows content to thank the user.</p><p>Ok so far?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2718949454">
	<div>
		<img src="https://disqus.com/api/users/avatars/sydbarrettBR.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2718949454">5</a> (In reply to <a href="#c_2718943213">#4</a>) by sydbarrett
		posted on 6/8/2016 at 3:54 PM
		</div>
		<div class="comment_text"><p>Ok, so far so good. </p></div>
	</div>
</div>
		
<div class="comment" id="c_2718953711">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2718953711">6</a> (In reply to <a href="#c_2718949454">#5</a>) by Raymond Camden
		posted on 6/8/2016 at 3:56 PM
		</div>
		<div class="comment_text"><p>Cool. That's pretty much it I think. Try it and see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2725866274">
	<div>
		<img src="https://disqus.com/api/users/avatars/formspree.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2725866274">7</a> by Formspree
		posted on 6/12/2016 at 3:33 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, cool post! It's gratifying to see people digging into our advanced features and helping others along! (Also, your jQuery looks good to me!)</p><p>One suggestion: You shouldn't need to include _replyto and email-- either one will set the reply-to email headers so you can reply with a click. (We should probably be more clear about that in our docs). Thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2726259332">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2726259332">8</a> (In reply to <a href="#c_2725866274">#7</a>) by Raymond Camden
		posted on 6/12/2016 at 12:38 PM
		</div>
		<div class="comment_text"><p>You are absolutely right, and frankly, the docs are pretty darn clear. I've updated the blog post with a note about my mistake. Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2744490065">
	<div>
		<img src="https://disqus.com/api/users/avatars/jamesjosephfinn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2744490065">9</a> by James Joseph Finn
		posted on 6/22/2016 at 2:24 PM
		</div>
		<div class="comment_text"><p>Do you know how to get @Formspree to set the "Reply To Name" header? Setting the "reply to email" header is great, but it'd be nice to have a name also. Do you know how?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2744494052">
	<div>
		<img src="https://disqus.com/api/users/avatars/jamesjosephfinn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2744494052">10</a> (In reply to <a href="#c_2744490065">#9</a>) by James Joseph Finn
		posted on 6/22/2016 at 2:27 PM
		</div>
		<div class="comment_text"><p>Currently, for me, the:</p><p>name="name"</p><p>input value gets sent in the body of the formspree email, but I'd like to have this data sent in the header as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2744503281">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2744503281">11</a> (In reply to <a href="#c_2744494052">#10</a>) by Raymond Camden
		posted on 6/22/2016 at 2:33 PM
		</div>
		<div class="comment_text"><p>I think it is a good idea - but you would need to raise it to Formspree directly. I could see this being something they charge for though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3183041563">
	<div>
		<img src="https://disqus.com/api/users/avatars/jensgeffken.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3183041563">12</a> by Jens Geffken
		posted on 3/2/2017 at 6:15 PM
		</div>
		<div class="comment_text"><p>great post, exactly what i was looking for, thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_3492260947">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_KeN7hC1ldz.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3492260947">13</a> by disqus_KeN7hC1ldz
		posted on 8/29/2017 at 1:10 PM
		</div>
		<div class="comment_text"><p>Fantastic post. I really understand what you're saying and have struggled with the best way to communicate an idea. Make no apologies, you're helping people and the critics aren't.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3492263751">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3492263751">14</a> (In reply to <a href="#c_3492260947">#13</a>) by Raymond Camden
		posted on 8/29/2017 at 1:12 PM
		</div>
		<div class="comment_text"><p>Thank you - I don't even remember the post before this that garnered the attack. I had another one last week, but in general, I'm average a "slam" about once a year, so that's probably pretty good. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3494133413">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_hZr79sjciz.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3494133413">15</a> by Dave Poole
		posted on 8/30/2017 at 2:44 PM
		</div>
		<div class="comment_text"><p>Just want to say thanks for the effort taken to capture the learning process you went through.  The journey teaches more than the destination.</p><p>I don't know what trolls think they are achieving.  Technology blogging is not a  "only superheroes need apply" activity.  Constructive criticism is helpful even if it stings a bit.  The sting being proportional to the skill of the critic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3494177063">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3494177063">16</a> (In reply to <a href="#c_3494133413">#15</a>) by Raymond Camden
		posted on 8/30/2017 at 3:11 PM
		</div>
		<div class="comment_text"><p>You are most welcome. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3760419513">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_65VIeXLZf1.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3760419513">17</a> by Akash Sethi
		posted on 2/15/2018 at 11:47 PM
		</div>
		<div class="comment_text"><p>Fantastic post !<br>This code was working fine on localhost but after hosting my website i was not receiving emails from formspree.<br>I was facing this error because my emailaddress and new domain / page link was not verified with formspree.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3761264452">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3761264452">18</a> (In reply to <a href="#c_3760419513">#17</a>) by Raymond Camden
		posted on 2/16/2018 at 2:34 PM
		</div>
		<div class="comment_text"><p>So... you have it working ok?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3887622349">
	<div>
		<img src="https://disqus.com/api/users/avatars/timothyjd.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3887622349">19</a> by Tim Durrant
		posted on 5/5/2018 at 10:44 PM
		</div>
		<div class="comment_text"><p>Great stuff, Raymond. I needed a way to keep users on my site after a form submission, and you came through!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3888471613">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3888471613">20</a> (In reply to <a href="#c_3887622349">#19</a>) by Raymond Camden
		posted on 5/6/2018 at 5:36 PM
		</div>
		<div class="comment_text"><p>Glad it was helpful!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3959198758">
	<div>
		<img src="https://disqus.com/api/users/avatars/nisgeek.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3959198758">21</a> by NisGeek
		posted on 6/24/2018 at 8:58 PM
		</div>
		<div class="comment_text"><p>It's working on my localhost but not working from github. is there any way to fix it ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3960116720">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3960116720">22</a> (In reply to <a href="#c_3959198758">#21</a>) by Raymond Camden
		posted on 6/25/2018 at 3:14 PM
		</div>
		<div class="comment_text"><p>How is it not working?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3960598640">
	<div>
		<img src="https://disqus.com/api/users/avatars/nisgeek.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3960598640">23</a> (In reply to <a href="#c_3960116720">#22</a>) by NisGeek
		posted on 6/25/2018 at 8:15 PM
		</div>
		<div class="comment_text"><p>I don't know what happened,it is working now. Thanks for sharing the code with us. Really great stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3960604560">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3960604560">24</a> (In reply to <a href="#c_3960598640">#23</a>) by Raymond Camden
		posted on 6/25/2018 at 8:19 PM
		</div>
		<div class="comment_text"><p>Cool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4022050255">
	<div>
		<img src="https://disqus.com/api/users/avatars/aphelio.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4022050255">25</a> by David Gordon
		posted on 8/4/2018 at 4:35 PM
		</div>
		<div class="comment_text"><p>Raymond, beautiful site, and exactly the article I was looking for. Do you think the fact that your email address ends up hard-coded in client-side script is a drawback of this solution? I would rather not give away the recipient of the form, but otherwise I think it's a great solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4023671070">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4023671070">26</a> (In reply to <a href="#c_4022050255">#25</a>) by Raymond Camden
		posted on 8/5/2018 at 6:51 PM
		</div>
		<div class="comment_text"><p>Um, it could be, but if it was a concern, I'd just use a non-primary email address. So for example, if I was some celebrity, I'd use a 'public facing' email address and not one my family and friends know.</p><p>You can do form processing with serverless easily enough and if you check my OpenWhisk and Webtask tag pages here, you will find an example of that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4023671393">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4023671393">27</a> (In reply to <a href="#c_4023671070">#26</a>) by Raymond Camden
		posted on 8/5/2018 at 6:51 PM
		</div>
		<div class="comment_text"><p>I need to stop saying "easily enough" - it MAY be easy - check it out and let me know. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4025443936">
	<div>
		<img src="https://disqus.com/api/users/avatars/aphelio.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4025443936">28</a> (In reply to <a href="#c_4023671070">#26</a>) by David Gordon
		posted on 8/6/2018 at 7:40 PM
		</div>
		<div class="comment_text"><p>Yeah, agreed, a "public facing" account that just forwards to the actual recipient sounds like a decent way to go. I learned a long time ago that publishing your email address on a public site is asking for spam. But then again, maybe the bots are confused by the way that the email address is part of a URL in this case. Maybe that is good enough to break the address-scraping regex.</p></div>
	</div>
</div>
		