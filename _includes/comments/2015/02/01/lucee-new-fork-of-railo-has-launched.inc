
<div class="comment" id="c_1828977206">
	<div>
		<img src="https://disqus.com/api/users/avatars/danomite40.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1828977206">1</a> by Dan Kraus
		posted on 2/1/2015 at 3:50 PM
		</div>
		<div class="comment_text"><p>Oh yeah, we're rebuilding our dev VMs with Lucee and Ansible for provisioning. This couldn't have happened at a better time for my team as we're about to start a major application.</p><p>I love the direction the Lucee project looks to be headed, more aggressive about doing things the sane way, and not just "me-too" with Adobe. I like that it's being positioned as scripting language on the JVM that is compatible with CFML. </p></div>
	</div>
</div>
		
<div class="comment" id="c_1829040507">
	<div>
		<img src="https://disqus.com/api/users/avatars/gavinpickin.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1829040507">2</a> by Gavin Pickin
		posted on 2/1/2015 at 4:41 PM
		</div>
		<div class="comment_text"><p>I have a few blog posts lined up for it already... Documenting getting it running and customizing ports, include files etc.</p><p>Already submitted some ui fixes to admin. <br>Always fun to play with the new and shiny stuff.<br></p></div>
	</div>
</div>
		
<div class="comment" id="c_1829677681">
	<div>
		<img src="https://disqus.com/api/users/avatars/seancorfield.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1829677681">3</a> by Sean Corfield
		posted on 2/1/2015 at 11:08 PM
		</div>
		<div class="comment_text"><p>Yup, already in the process of migrating from Railo to Lucee. Migration is easy and it looks solid so far. </p></div>
	</div>
</div>
		
<div class="comment" id="c_1830290808">
	<div>
		<img src="https://disqus.com/api/users/avatars/jimcumming.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1830290808">4</a> by jimcumming
		posted on 2/2/2015 at 10:52 AM
		</div>
		<div class="comment_text"><p>Hi Ray. The Lucee forum has moved over to a Google Group <a href="https://disq.us/url?url=https%3A%2F%2Fgroups.google.com%2Fforum%2F%23%21forum%2Flucee%3A6CM28dWmblhbiDuylCnSeQJgzMs&amp;cuid=3321886" rel="nofollow noopener" title="https://groups.google.com/forum/#!forum/lucee">https://groups.google.com/f...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2223723635">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_TUzKSSXnyc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2223723635">5</a> by Liam Clark
		posted on 8/28/2015 at 7:56 PM
		</div>
		<div class="comment_text"><p>Can someone explain to me in short what is the difference between lucee and railo?<br>Also, i have Centos 6 on my server. Can I follow this <a href="https://disq.us/url?url=https%3A%2F%2Fwww.rosehosting.com%2Fblog%2Fhow-to-install-railo-on-a-centos-7-vps%2F%3AUiPtzjXI2p0pHMY-4XBflGko8bs&amp;cuid=3321886" rel="nofollow noopener" title="https://www.rosehosting.com/blog/how-to-install-railo-on-a-centos-7-vps/">tutorial</a>?</p><p>Thanks for the help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2223734260">
	<div>
		<img src="https://disqus.com/api/users/avatars/seancorfield.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2223734260">6</a> (In reply to <a href="#c_2223723635">#5</a>) by Sean Corfield
		posted on 8/28/2015 at 8:03 PM
		</div>
		<div class="comment_text"><p>Short version: Think of Lucee as "the next version of Railo".</p><p>Longer version: The last published version of Railo was 4.2. Lucee built on that code to create Lucee 4.5, and is currently planning Lucee 5.0. Railo has no developers and is unlikely to produce any new versions (the developers left Railo to go and build Lucee). There are two security exploits in the wild that affect Railo, which are both fixed in the latest Lucee version. One is a remote code execution exploit and is therefore serious. The other is an exploit for the admin, less serious, but I'd still want both patched -- and that's why my company switched from Railo to Lucee.</p><p>Does that help?</p><p>I have no idea about the tutorial but you should join the Lucee mailing list and ask for help there. Or join the CFML Slack and ask in the #lucee channel: <a href="http://disq.us/url?url=http%3A%2F%2Fcfml-slack.herokuapp.com%3AN4W1YiRfp4KCrAbd_GfGPEkLO2s&amp;cuid=3321886" rel="nofollow noopener" title="http://cfml-slack.herokuapp.com">http://cfml-slack.herokuapp...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2223757014">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_TUzKSSXnyc.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2223757014">7</a> (In reply to <a href="#c_2223734260">#6</a>) by Liam Clark
		posted on 8/28/2015 at 8:16 PM
		</div>
		<div class="comment_text"><p>Thank you very much Sean. This clears things up a bit. :)<br>Have a lovely rest of the day.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2224071195">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2224071195">8</a> (In reply to <a href="#c_2223734260">#6</a>) by Raymond Camden
		posted on 8/29/2015 at 12:07 AM
		</div>
		<div class="comment_text"><p>Thanks Sean - you answered it far better than I could have.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2644569309">
	<div>
		<img src="https://disqus.com/api/users/avatars/YIRMASTER.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2644569309">9</a> (In reply to <a href="#c_2223734260">#6</a>) by YIRMASTER
		posted on 4/27/2016 at 12:09 AM
		</div>
		<div class="comment_text"><p>That isn't what the majority share holder of Railo said. Apparently this will be fought out in court in the UK.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.getrailo.com%2Fpost.cfm%2Fa-message-from-the-majority-shareholder-of-the-railo-company%3AG3Thr4_PwNQlUFWbycINA1C2RAQ&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.getrailo.com/post.cfm/a-message-from-the-majority-shareholder-of-the-railo-company">http://blog.getrailo.com/po...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2644581011">
	<div>
		<img src="https://disqus.com/api/users/avatars/seancorfield.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2644581011">10</a> (In reply to <a href="#c_2644569309">#9</a>) by Sean Corfield
		posted on 4/27/2016 at 12:19 AM
		</div>
		<div class="comment_text"><p>According to the Lucee Association Switzerland folks, absolutely no action has been taken by what's left of Railo, because they have no legal case -- and the Lucee project has continued to forge ahead.</p><p>The "majority shareholder's" view appears not to have been shared by the other shareholders in Railo and well over a year has passed since the Lucee fork was announced, and nearly a year since that bit of saber-rattling was published on the Railo blog.</p><p>Not sure why you felt compelled to link to that post from so long ago?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2644678213">
	<div>
		<img src="https://disqus.com/api/users/avatars/YIRMASTER.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2644678213">11</a> (In reply to <a href="#c_2644581011">#10</a>) by YIRMASTER
		posted on 4/27/2016 at 1:31 AM
		</div>
		<div class="comment_text"><p>Because you posted an explanation what Lucee was explained telling people they should switch because Lucee was more secure better option however Railo website has something else to say and litigation can take a while to settle, not sure how or what info you'd have about their litigation unless you are part of Lucee or Railo, I'm not so wouldn't know, just posting the only information from either side on that matter.</p><p>It would be important for people to know and be aware of possible legal issues that could potentially effect their project.</p><p>Not sure why you seem mad about me posting that info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2644679211">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2644679211">12</a> (In reply to <a href="#c_2644678213">#11</a>) by Raymond Camden
		posted on 4/27/2016 at 1:32 AM
		</div>
		<div class="comment_text"><p>Heh, if you think that's Sean mad - you may be a bit sensitive. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2644684187">
	<div>
		<img src="https://disqus.com/api/users/avatars/seancorfield.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2644684187">13</a> (In reply to <a href="#c_2644678213">#11</a>) by Sean Corfield
		posted on 4/27/2016 at 1:36 AM
		</div>
		<div class="comment_text"><p>I replied like that because you don't seem to have done any research on the current state of play vis-a-vis Lucee and Railo -- so your post simply comes off as spreading Fear, Uncertainty, and Doubt. And that needs to be challenged.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2644807415">
	<div>
		<img src="https://disqus.com/api/users/avatars/YIRMASTER.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2644807415">14</a> (In reply to <a href="#c_2644679211">#12</a>) by YIRMASTER
		posted on 4/27/2016 at 3:17 AM
		</div>
		<div class="comment_text"><p>Don't know him, mad may have been a bad adjective, snippy would be better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2644856294">
	<div>
		<img src="https://disqus.com/api/users/avatars/seancorfield.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2644856294">15</a> (In reply to <a href="#c_2644807415">#14</a>) by Sean Corfield
		posted on 4/27/2016 at 4:05 AM
		</div>
		<div class="comment_text"><p>I'll take snippy. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2645025989">
	<div>
		<img src="https://disqus.com/api/users/avatars/Adam_Cameron.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2645025989">16</a> (In reply to <a href="#c_2644581011">#10</a>) by Adam Cameron
		posted on 4/27/2016 at 7:39 AM
		</div>
		<div class="comment_text"><p>Yeah, they did the same thing on my blog too. Seems like a lot of effort to go to to share stale news with people who already know about it, and have discussed it to death.</p></div>
	</div>
</div>
		