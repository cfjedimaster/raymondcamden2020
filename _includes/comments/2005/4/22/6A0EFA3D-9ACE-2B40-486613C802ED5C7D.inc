
<div class="comment" id="c_1713618168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618168">1</a> by Brian Rinaldi
		posted on 4/22/2005 at 7:20 PM
		</div>
		<div class="comment_text"><p>It is tough when we compete against those incredibly un-crashable Microsoft technologies. I heard the new version of Visual Studio will automatically rewrite bad code and make your site impervious to hackers! Plus it will ingeniously make all your standardized CSS work on IE. C'mon Macromedia...time to play with the big boys.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618167">2</a> by Rick
		posted on 4/22/2005 at 8:11 PM
		</div>
		<div class="comment_text"><p>My favorite comment from that blog...</p><p>"Or better yet, by this logic I should NEVER EVER EVER EVER trust ANY application server for anything important. PHP sites crash. ASP.NET sites crash. JSP sites crash."</p><p>Ah, the voice of reason.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618174">3</a> by Tom
		posted on 4/22/2005 at 8:36 PM
		</div>
		<div class="comment_text"><p>Well, one poorly written website - happens to be CF this time. I am sure there are rather few people that take the original post seriously.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618170">4</a> by tony petruzzi
		posted on 4/22/2005 at 8:50 PM
		</div>
		<div class="comment_text"><p>Actually there is a bigger problem. I have seen it where when CF crashes, it shuts down the CF service. Now most people say, well big deal.</p><p>Well it is. See when the service stops, IIS throw the CF page as plain text. So if this happend you can also get at their application.cfm page and their settings template if they use one. Most people keep their DSN login information in these templates and this could be all the information a hacker needs to get at your database. Or they can use the information for some other purpose. It even gives someone the oppotunity to steal your code.</p><p>Good little WINT admins know that you should use the Recovery tab for the service to set actions upon failures like restarting the service or shutting down IIS and CF by using the "run a program" selection to run a batch file containing:</p><p>net stop "ColdFusion Service Name"<br>net stop "World Wide Web Publishing"<br>net start "ColdFusion Service Name"<br>net start "World Wide Web Publishing"</p><p>As people have said in the past, most of the security issues with ColdFusion come from the fact that almost all of the people who are CF developers don't have a background in Network or Systems Administration. As such, most people don't the ramifications of a service stopping or crashing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618169">5</a> by Raymond Camden
		posted on 4/22/2005 at 8:55 PM
		</div>
		<div class="comment_text"><p>Tony - isn't there also a setting in IIS you can configure to prevent this? It seems familiar. Most of the time when I have seen CF crash, a request for a cfm file results in an error, _not_ the source.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618172">6</a> by Critter
		posted on 4/22/2005 at 9:12 PM
		</div>
		<div class="comment_text"><p>i've never gotten the source... only a message saying no jrun server can be found.. or something like that...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618171">7</a> by tony petruzzi
		posted on 4/22/2005 at 9:16 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>You are correct. This did happend in the CF5 and below version. Mostly because CF5 "hooked" into IIS. Thus if you stopped the CF service, it would result in an error stating that the CF service isn't started.</p><p>I have seen this happend with CFMX J2EE setup. So stopping the Jrun server service resulted in the CFM template code coming back as plain text. The reason for this is because CFMX is now just an ISAPI filter. I know that most people will say that it should throw a "cannot connect to Jrun error" if it is stopped, but it doesn't. It only throw this error if the service is started and there is some sort of error connecting to the service. If the service isn't started, it exits gracefully, thus resulting in IIS grabbing the CFM file and displaying it.</p><p>Now I don't know if CFMX7 does this or if JRUN SP 5 fixes this. Currently I have seen this happend on CFMX 6.1 SP 1 with JRUN SP 4.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618173">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618173">8</a> by Aler Sherwood
		posted on 4/22/2005 at 9:19 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>You do make good points, and I agree. The blogger did, however, make some good points, too:</p><p>   1.  This was not just some random company hosting the server. It was MACROMEDIA.<br>   2. It was not some random person installing and configuring ColdFusion and JRun on that server. It was MACROMEDIA.<br>   3. It was not a third party developer writing the code and testing it. It was MACROMEDIA.</p><p>The question is, why was the service crashing for such a long period of time?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618178">9</a> by Herman
		posted on 4/22/2005 at 10:45 PM
		</div>
		<div class="comment_text"><p>Damn, Aler beat me to it.  The real issue is the Macromedia involvement, and the subsequent egg on their face.  This isn't good press, and if that guy hadn't posted this blog entry, it would've gone largely un-noticed - with the exception of people trying to enter films.  I don't think people should be attacking him for his post - he was obviously caused alot of stress over the problem that almost prevented him from actualizing months of work on his film.  That was mis-directed anxiety, not arrogance.</p><p>People should be saying "WTF Macromedia?", but instead their knee-jerk reaction is to attack whoever poopoos on thier grand overlord, ColdFusion.  This community suffers from an unhealthly dose of zealous.  It's ok to ask questions, it's ok to criticize.  CF is not perfect, but it's impossible to have a decent argument on the subject lest you get gang-banged by the JediMasters of the community.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618177">10</a> by Raymond Camden
		posted on 4/22/2005 at 10:52 PM
		</div>
		<div class="comment_text"><p>Herman, I respectfully disagree. The original poster was not attacking the implementation of CF at that site. He said, specifically, that CF should not be used for high volume sites. That is different from saying <a href="http://disq.us/url?url=http%3A%2F%2Ffoo.com%3AN7Z24oIKkMVc9eNBzSRQUSpuMJ0&amp;cuid=3321886" rel="nofollow noopener" title="foo.com">foo.com</a> doesn't work. He attacked the _entire_ technology. I definitely agree that CF is not perfect.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618180">11</a> by Daniel Brown
		posted on 4/22/2005 at 11:27 PM
		</div>
		<div class="comment_text"><p>Stopping CFMX6.1 service and calling a cfm page I get:</p><p>Server Error<br>The server encountered an internal error and was unable to complete your request.</p><p>Could not connect to JRun Server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618183">12</a> by Brian Rinaldi
		posted on 4/23/2005 at 12:34 AM
		</div>
		<div class="comment_text"><p>Look, in all seriousness, I think that while we all can understand the guys frustration (hell, I have been there), I think Macromedia's involvement doesn't change much other than from a PR perspective (and the extent to which MM was involved outside of hosting was not clear from his post). The truth is that sites go down, even the large one's (regardless of what app server)... While we can appreciate his frustration, he jumps to rather overreaching conclusion with regard to ColdFusion and Macromedia as a whole.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618179">13</a> by Daniel Roberts
		posted on 4/23/2005 at 1:50 AM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fmaniacalrage.net%2Farchives%2F%3AdZek2AcCBhXXJ7pNpFOBxjCag6o&amp;cuid=3321886" rel="nofollow noopener" title="http://maniacalrage.net/archives/">http://maniacalrage.net/arc...</a></p><p>currently shows...</p><p>Error: SQL<br>Database Error</p><p>Sorry, but the database seems to be down. Oops! Check back in a minute.</p><p>how ironic...another faulty product</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618182">14</a> by Raymond Camden
		posted on 4/23/2005 at 1:55 AM
		</div>
		<div class="comment_text"><p>Let me just add that - the original poster _has_ said that he was being a bit extreme... so this isn't the big huge deal that I may have made it out to be. All in all - we all get mad as heck at products that we use at times. (Although I do wish the blogger would edit his main post to clarify his comments.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618181">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618181">15</a> by Garrett
		posted on 4/23/2005 at 2:05 AM
		</div>
		<div class="comment_text"><p>Daniel: there's a difference between a site going down due to attack and it going down from "normal" use. For the past week, our servers have been under seige by comment spammers hitting any site using MT. I realize how ironic it LOOKS for my site to go down today, but the truth is that Macromedia's ColdFusion server wasn't being attacked that night, people were using it as they should have been.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618188">16</a> by Daniel Brown
		posted on 4/23/2005 at 3:26 AM
		</div>
		<div class="comment_text"><p>I didn't post that comment, I posted the previous one.</p><p>But,</p><p>"Macromedia's ColdFusion server wasn't being attacked that night"</p><p>How do you know?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618186">17</a> by Daniel Roberts
		posted on 4/23/2005 at 5:35 AM
		</div>
		<div class="comment_text"><p>Correct me if I'm wrong but as I understand it CFML compiles to Java. CFML = Java? Badly written code is badly written code. An oversight or bug written in Java is no worse or better than an oversight in CFML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618185">18</a> by Calvin Ward
		posted on 4/23/2005 at 7:04 AM
		</div>
		<div class="comment_text"><p>tony,</p><p>I've never seen the scenario you describe occur. Can you cause it to happen and post the steps to reproduce it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618189">19</a> by Sean Corfield
		posted on 4/24/2005 at 2:29 AM
		</div>
		<div class="comment_text"><p>It seems to me that the expected load was underestimated and that was the primary cause here. As has been noted elsewhere, the work may well have been outsourced (I'm fairly certain the <a href="http://disq.us/url?url=http%3A%2F%2Fmm.com%3A3MtaUTq_tnvUT7Arv_xpq4_shmM&amp;cuid=3321886" rel="nofollow noopener" title="mm.com">mm.com</a> web team didn't build the Amazon film submission app and the site was not hosted by Macromedia - I could be wrong but that's my understanding).</p><p>As to whether CF can handle high load: <a href="http://disq.us/url?url=http%3A%2F%2Fmm.com%3A3MtaUTq_tnvUT7Arv_xpq4_shmM&amp;cuid=3321886" rel="nofollow noopener" title="mm.com">mm.com</a> does pretty well with up to 40,000 concurrent sessions during morning peak traffic (used to be I'd quote "20,000" but we have fifty CF apps on the site now and traffic on the CF part is way higher now that all of our tech notes are handled by CF).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618191">20</a> by Greg
		posted on 12/2/2005 at 3:47 PM
		</div>
		<div class="comment_text"><p>Is anyone still having this problem with CF suffering under load? Because I have something I'd like you to try out and give me some feedback on if possible. FusionReactor (<a href="http://disq.us/url?url=http%3A%2F%2Ffusion-reactor.com%3ADkp4_9IcF0V1MeF5FXc7fo_djh4&amp;cuid=3321886" rel="nofollow noopener" title="fusion-reactor.com">fusion-reactor.com</a>) has a load of features to protect CF servers from dying due to high numbers of requests, high memory or long running requests. Please post and let me know. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618190">21</a> by Malek
		posted on 12/2/2005 at 5:42 PM
		</div>
		<div class="comment_text"><p>cool, i see you are offering a Trail Edition</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618184">22</a> by Greg
		posted on 12/19/2005 at 5:40 PM
		</div>
		<div class="comment_text"><p>Sorry for the slow reply. It's been crazy busy here! *smiles*. Yes, there is a trial version and also a completely free version of the software. Please feel free to give us any feedback you have on the software. Enjoy!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618194">23</a> by Grant Eagon
		posted on 9/26/2006 at 12:46 AM
		</div>
		<div class="comment_text"><p>Does anyone know what the name of the ColdFusion MX7 Application Server service is actually called? I'm trying to setup a service watcher and it doesn't find the service by that name, though it can find things like DNS and Apache2. I've also tried cfusion, CFMX, CFMX7, jrun, JRun, and some others. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618193">24</a> by Raymond Camden
		posted on 9/26/2006 at 12:48 AM
		</div>
		<div class="comment_text"><p>If you double click on the service in the Services panel, it shows you the proper name.</p><p>"ColdFusion MX 7 Application Server"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618192">25</a> by Grant Eagon
		posted on 9/26/2006 at 8:48 PM
		</div>
		<div class="comment_text"><p>Thanks a lot! Wow, one space missing, how humbling :)</p></div>
	</div>
</div>
		