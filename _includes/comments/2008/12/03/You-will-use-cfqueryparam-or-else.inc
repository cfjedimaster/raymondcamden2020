
<div class="comment" id="c_1713710443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710443">1</a> by Brandon Hansen
		posted on 12/4/2008 at 12:25 AM
		</div>
		<div class="comment_text"><p>I don't really like it.  I know a ton of developers who in no way escape or set security, so I guess it would help out in that case.  But I am using some homegrown cfcs which handle all of the queries (so no cfquery tags are used in the site other than in the cfc), and a ton of homegrown escaping, so there is not any worry.</p><p>I know that there are a lot of people that do that.  How can you penalize that, especially since that is meant to help with security.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710428">2</a> by Josh
		posted on 12/4/2008 at 12:27 AM
		</div>
		<div class="comment_text"><p>Draconian? Probably... but CYA usually overrules that.<br>He has to protect his business.  And there is nothing like a little SQL injection to kill your server.</p><p>As long has he is "gentle" in his explanation he will be ok.  Those that aren't using queryparam probably don't know it exists and will appreciate the education.  He just needs to be prepared that he will have to work with some of his customers.</p><p>He should probably have an updated TOS to also CYA... :-) (You can tell I'm paranoid)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710441">3</a> by Lola LB
		posted on 12/4/2008 at 12:29 AM
		</div>
		<div class="comment_text"><p>I think this is a bit draconian.  There may be third-party code being used that aren't cfqueryparam'ed, but said user isn't always aware of that fact.  Is it their fault that other programmers writing these 3rd party code weren't careful enough to use cfqueryparam tags where needed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710448">4</a> by Ben Nadel
		posted on 12/4/2008 at 12:33 AM
		</div>
		<div class="comment_text"><p>I think the question to ask is, can poor SQL hurt the HOST at all? Or just the given user. I think if there is a possibility that poor code endanger the hosting infrastructure, then its not excessive. However, if this is just done to enforce best practices, that's a bit nuts - I am all for letting people shoot themselves in the foot if they want that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710430">5</a> by Scott Stroz
		posted on 12/4/2008 at 12:44 AM
		</div>
		<div class="comment_text"><p>I would have no issue with it.  SQL injection attacks can reek havoc on the entire server -- which would affect everyone using that server -- which woudl affect his business.</p><p>If someone has an issue with it, they can go elsewhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710438">6</a> by Mike Brunt
		posted on 12/4/2008 at 12:46 AM
		</div>
		<div class="comment_text"><p>In the past 4 months I have had 3 clients who were badly hit by SQL Injection attacks so I have seen the devastation that this can cause.  There is no excuse and really never was any for not using CFQUERYPARAM.</p><p>I actually don't think this sort of move is too extreme.  And we should not forget that using CFQUERYPARAM also delivers performance benefits.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710432">7</a> by Sean Coyne
		posted on 12/4/2008 at 12:48 AM
		</div>
		<div class="comment_text"><p>Not all queries use user accessible scopes as parameters as well.  cfqueryparam has no "protection" effect in that case.  It may be a legit query with no vulnerability.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710433">8</a> by Joshua Cyr
		posted on 12/4/2008 at 12:50 AM
		</div>
		<div class="comment_text"><p>Luckily I am not in that situation, but my understanding is that there are new web firewalls for sqli type things as well.  Plus <a href="http://disq.us/url?url=http%3A%2F%2Fportcullis.riaforge.org%2F%3Ao016OVU9QgO4-N85M_FszWYyf8Q&amp;cuid=3321886" rel="nofollow noopener" title="http://portcullis.riaforge.org/">http://portcullis.riaforge....</a> could be made mandatory for those who are known to be sloppy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710451">9</a> by Rick O
		posted on 12/4/2008 at 12:55 AM
		</div>
		<div class="comment_text"><p>Draconian would be shutting down access to the sites in question until it is fixed.</p><p>Or, draconian would be saying that queries without cfqueryparam will be manditorily debugged and vetted by hosting staff at a rate of $150/hr.</p><p>This?  This is just good business.</p><p>(And using someone else's code isn't an excuse.  If it's on your site, you are responsible for it.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710437">10</a> by Ryan C
		posted on 12/4/2008 at 12:59 AM
		</div>
		<div class="comment_text"><p>Although I completely agree with the premise, it seems like a losing battle to me.</p><p>What about <br>cfcompile -deploy &lt;webroot directory&gt; &lt;directory to compile&gt; &lt;output directory&gt; or cfencode??</p><p>Will this magic scanning tool catch everything?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710440">11</a> by Scott Stroz
		posted on 12/4/2008 at 12:59 AM
		</div>
		<div class="comment_text"><p>Wiat..Rick O and I agree on something?  Maybe I should rethnk this...</p><p>Hi Rick!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710434">12</a> by Ryan Guill
		posted on 12/4/2008 at 1:16 AM
		</div>
		<div class="comment_text"><p>I would never use a host that did something like this.<br>In fact, I would never use a host I had a suspicion of looking at my code in the first place.  The code is my property, they are only giving me a place to execute it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710446">13</a> by Scott Stroz
		posted on 12/4/2008 at 1:19 AM
		</div>
		<div class="comment_text"><p>I would argue that if your code can potentially cause damamge to the host's server, then the host has ever right to do so.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710424">14</a> by Ryan Guill
		posted on 12/4/2008 at 1:24 AM
		</div>
		<div class="comment_text"><p>I don't see how a shared host that was doing things right on their own end (sandboxing, etc) could be adversely affected themselves by the lack of a cfqueryparam.  If you have a sql injection attack that's the clients problem, not the hosts.  Maybe the site starts taking more resources than they otherwise would, but how do you know what's normal in that situation?</p><p>Again, I would argue that the host has no business looking at the code of a client in any circumstance except when the client has asked the host to do so and given them explicit permission.  (I know there are some hosts out there that will do consultant work or help out with a site, I'm not talking about that sort of situation).</p><p>My host is not signing a non-compete, NDA or waiver to get me as a client.  How do I know they aren't copying and using my code, selling my code, taking my ideas, etc?</p><p>Just my 2 cents.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710445">15</a> by Ryan McIlmoyl
		posted on 12/4/2008 at 1:31 AM
		</div>
		<div class="comment_text"><p>A post on Mark Kruger's blog related to cfqueryparam and performance (based on Charlie Arehart's unconference presentation)<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionmuse.com%2Findex.cfm%2F2008%2F11%2F18%2Fperformance.and.cfqueryparam%3AirGeKSfx4g7MBwCHM22mUSeHZS0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionmuse.com/index.cfm/2008/11/18/performance.and.cfqueryparam">http://www.coldfusionmuse.c...</a></p><p>Basic summary, use cfqueryparam, but take care in how it's used to avoid potential performance issues</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710444">16</a> by Craig Kaminsky
		posted on 12/4/2008 at 1:39 AM
		</div>
		<div class="comment_text"><p>While I completely understand why your friend headed down this direction and the arguments supporting his position, I think it's over the top. If, as was mentioned earlier, you cannot setup your shared host to properly isolate sites/apps, then stop hosting.</p><p>CFQP may be a best-practice (and I use them extensively and see the huge value in them), don't freaking tell me how to code! I'll write my own applications as I want! Whether it's spaghetti code or a perfectly built OO application, or anything in between, it's my code (as Ryan G mentions).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710450">17</a> by Eric Belair
		posted on 12/4/2008 at 1:42 AM
		</div>
		<div class="comment_text"><p>What's his next step? Shutting down servers that contain HTML tables for layout?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710439">18</a> by Raymond Camden
		posted on 12/4/2008 at 1:46 AM
		</div>
		<div class="comment_text"><p>Hey, don't knock tables for layout man. That's going too far!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710436">19</a> by sam Farmer
		posted on 12/4/2008 at 1:53 AM
		</div>
		<div class="comment_text"><p>Good move.  This could help many developers who simply don't know about cfqueryparam become better developers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710429">20</a> by tony petruzzi
		posted on 12/4/2008 at 2:10 AM
		</div>
		<div class="comment_text"><p>If you are going to have a hosting business where people pay you to host their work, then you have to take the good and the bad. Telling people that they have to code a certain way or you won't allow them to host their work is done right dumb from a business perspective. The best thing to do is to move these people and their databases to another server and notify them that not using cfqueryparam could cause their site to be hacked and that's it. The action your "friend" is taking is childish</p><p>You don't see companies like <a href="http://disq.us/url?url=http%3A%2F%2Fhostmysite.com%3AztrKeOUKmog7P-dSXj3cUUhcUfs&amp;cuid=3321886" rel="nofollow noopener" title="hostmysite.com">hostmysite.com</a> telling their customs to do this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710442">21</a> by Raymond Camden
		posted on 12/4/2008 at 2:12 AM
		</div>
		<div class="comment_text"><p>@tp: Heh, I love you put friend in quotes. He _really_ is a friend of mine. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710447">22</a> by Edward Smith
		posted on 12/4/2008 at 2:38 AM
		</div>
		<div class="comment_text"><p>I'm with the people that have said that this is a red flag that the host doesn't know how to sandbox things properly, and my code and data is at risk from corruption or theft by other customers of the host.</p><p>Time to find a new host.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710435">23</a> by The Guy Rays Talking About
		posted on 12/4/2008 at 2:48 AM
		</div>
		<div class="comment_text"><p>While some of your opposing points are valid, your making the assumption that we are a shared hosting provider.  We aren't.</p><p>We are a boutique host that specializes in application monitoring, support and certification compliance.  We monitor errors in real time and provide code correction when warranted.</p><p>9 out of 10 times, we are responsible for cleaning up the mess that someones code has caused.  Chances are, the developer is no where to be found at 4am.</p><p>In simpler terms...<br>If you clean houses for a living, you don't want the customer who's dog craps all over the carpet and leaves you to clean it up.</p><p>While most of your complaints are valid to some degree I'll address a few directly.</p><p>Everyone - We are well aware this is no protection from everything.  We just believe that enforcing best practices is in the best interests of all of our clients.</p><p>Rick - We'd be happy to secure your application at a cost.</p><p>Ryan - If you are hosting with us, your code is accessible by us.  That's why your with us in the first place.</p><p>Josh - We do offer Web Application Firewalls.  If you can afford it, were happy to give it to you.</p><p>Tony - Actually... no. We don't have to take the good with the bad.</p><p>Point blank.  Its our environment and your choice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710431">24</a> by Peter Hoopes
		posted on 12/4/2008 at 3:26 AM
		</div>
		<div class="comment_text"><p>You are right that its your environment - though its not necessarily a great business practice, but if you want to really piss off your customers then that's your call.</p><p>If I had a site hosted by you (who knows, maybe I do since this is anonymous!) and you threatened me, I'd pull my business and site. Not so much because I disagreed with you, but because then I'd be thinking... what next? Are you putting my site through every possible security scan (cross scripting, etc.)?</p><p>As for your comment about "if you are hosting with us your code is accessible by us"... would you read your customers' emails, too...? After all, they are on your servers as well. Do you state in your contract that you are going to do this with/to your customers? If not, you might want to rethink your approach.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710456">25</a> by The Guy Rays Talking About
		posted on 12/4/2008 at 3:34 AM
		</div>
		<div class="comment_text"><p>@Peter</p><p>I think you skipped over the entire part where I mention that that's what we are payed for.</p><p>The entire reason you would host with us is because we will maintain your code for the health of your application.</p><p>No need to rethink our approach.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710459">26</a> by Tariq Ahmed
		posted on 12/4/2008 at 3:53 AM
		</div>
		<div class="comment_text"><p>It's all dependent on who has to deal with the issues. If I have to deal with someone issues, then the iron fist is coming down.</p><p>But if the environment is self contained where you're responsible for your own stuff... then do whatever you want.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710458">27</a> by Scott Stroz
		posted on 12/4/2008 at 5:16 AM
		</div>
		<div class="comment_text"><p>@Peter - at the risk of putting workd into Ray's friend's mouth.  I think the point he was trying to make about 'stealing code' was that if they were going to be dishonest enough to take the code in the first place, scanning the code would be the least of your worries (if you hosted with them).</p><p>When I had my sites on a hosted service, the sites would go down frequently. After many calls (from many people) the hosting provider discovered that teh issue came from one site that would hoard all the resources on a regular basis.  If I was still in that environment, having my code scanned so that other's bad code can be found would make me feel all warm and fuzzy inside.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710460">28</a> by ron
		posted on 12/4/2008 at 5:31 AM
		</div>
		<div class="comment_text"><p>Well... I'm interested in the original question... how to find code that doesn't use cfqueryparam... we have tons of old code that I'd like to find and clean up.    A little help here?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710461">29</a> by Tariq Ahmed
		posted on 12/4/2008 at 5:56 AM
		</div>
		<div class="comment_text"><p>You could write something that recursively (cfdirectory) goes through your folders looking at .cfm's and .cfc's.</p><p>Then within each file (cffile action="read") FindNoCase'ing instances of cfquery's</p><p>Within each cfquery, Find() any instance of '=' and 'like', then advance to the first non-space character, and if it's not a '&lt;' then a cfqueryparam is not being used.</p><p>Whenever there's a hit, dump that to a log of path/file + line #.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710463">30</a> by Tim
		posted on 12/4/2008 at 7:32 AM
		</div>
		<div class="comment_text"><p>You would want it to be smart enough to only flag the variables that come from user inputs.  There is no reason to flag variables that are being set by the application itself if you are only talking about security concerns.  It is also possible to securely code without using CFQP.  I think a program like this would put some people in the position of having to revisit a lot of code unnecessarily.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710466">31</a> by Raymond Camden
		posted on 12/4/2008 at 7:37 AM
		</div>
		<div class="comment_text"><p>For those looking for a queryparam scanner:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fqpscanner.riaforge.org%2F%3AcWIpZt-UGowSMz1rfNosjgu53kw&amp;cuid=3321886" rel="nofollow noopener" title="http://qpscanner.riaforge.org/">http://qpscanner.riaforge.org/</a></p><p>I can't vouch for this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710465">32</a> by Gus
		posted on 12/4/2008 at 7:41 AM
		</div>
		<div class="comment_text"><p>I would not use a host that does this for several reasons:</p><p>cfqueryparam is not the only way to protect against sql injection attacks, and there are valid reasons to not use cfqueryparam (or other flavors of prepared statements).</p><p>In a cfc I might scrub my data to a greater degree than cfqueryparam would do ( eg: escaping html,escaping punctuation ).</p><p>I would be very concerned that another "Best Practice" directive would be instituted.  Best practices tend to evolve over time.</p><p>Ultimately, if forcing the use of cfqueryparam is more important than potentially losing customers go for it.  If your current customers are ok with this, go for it.  If you are willing to lose potential new customers, go for it.</p><p>I doubt a large hosting company would ever do this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710464">33</a> by Azadi Saryev
		posted on 12/4/2008 at 1:31 PM
		</div>
		<div class="comment_text"><p>many [shared] hosting providers restrict the use of certain cf tags and functions (like cfexecute, cfregistry, createobject(), etc; i have even seen cfdirectory and cffile in some extreme cases!). for obvious reasons. i do not see why the opposite - enforcing the use of &lt;cfqueryparam&gt; where it is a must - should be looked at diferently.</p><p>yes, if you must use &lt;cfexecute&gt; in your application, you won't host your app with that provider. same here: you do not want to use &lt;cfqueryparam&gt; - find a different host, sure.</p><p>i am all for officially equating not using cfqp when it is a must to having malicious code hosted on your site!</p><p>however, of course, any case of not using cfqp must be carefully examined for actual need of using one. one can't just blindly require it be used in each and every query.</p><p>my 0.02$</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710467">34</a> by Will Swain
		posted on 12/4/2008 at 5:28 PM
		</div>
		<div class="comment_text"><p>I think this is entirely reasonable in a shared hosting environment, where everything on the server could be affected by a security breach. As Azadi points out above, shared hosts disable all manner of tags and functions and the logic behind insisting on cfqueryparam is no different.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710468">35</a> by duncan
		posted on 12/4/2008 at 6:42 PM
		</div>
		<div class="comment_text"><p>I'm curious, what would this company do for any client who chose to encrypt their coldfusion files?  Automatic blacklisting?  Would they decrypt them just to check if cfqueryparam was being used?</p><p>Because encrypting my files would probably be my first reaction if I heard my hosting company was going to examine all my code for defects.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710469">36</a> by Mike Rankin
		posted on 12/4/2008 at 6:50 PM
		</div>
		<div class="comment_text"><p>I think it's perfectly reasonable for the hosting company to do this because your once perfect site is now attacking random visitors with your hacked code.</p><p>What I would rather see, though is something from Adobe that would make it take extra effort to bypass the parameterization process instead of the other way around.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710470">37</a> by Peter Hoopes
		posted on 12/4/2008 at 7:20 PM
		</div>
		<div class="comment_text"><p>@The Guy</p><p>I noticed the part about you being paid. So it comes down to one simple question: are your customers paying you to shut them down if they don't do what you tell to in terms of cfqueryparam?</p><p>What I'm simply suggesting is that its a questionable business move. I understand about resources being hogged because of bad SQL injections killing or screwing with the db. There may well be a better way of achieving your goal is all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710472">38</a> by Tony Garcia
		posted on 12/4/2008 at 7:52 PM
		</div>
		<div class="comment_text"><p>From The Guy's comments, it's obvious that he's running a specialized type of webhosting service where they focus on application/error/code monitoring. So their customers go into business with them KNOWING that their code will be accessible to the host. So duncan's question about what they would do if a customer chose to encrypt their files makes no sense because they simply wouldn't take any customers who wanted to encrypt their files.<br>If this policy was coming from a general web hosting company (like HostMySite, for example), then yes I would say it's a bit draconian. But with this particular company, this policy actually seems very consistent with their business model (i.e. protecting their customers from their own code)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710473">39</a> by DanaK
		posted on 12/4/2008 at 8:43 PM
		</div>
		<div class="comment_text"><p>I think it is perfectly acceptable to enforce a policy like this, since we all know using queryparam is a fundamental part of CF, where queries are involved. It is no different than hosts popping on the sandbox and disabling cfexecute and cfregistry imho.</p><p>@The people saying you would lose money from driving people away. I think this impact is less than the people you would lose from their db connection/cf connection constantly being down, hung, or messed up. I've left many hosts where CF constantly hung like a dozen times a day because of other people's bad code on the machine.</p><p> In one case the host had fusion reactor and had spotted the problem. They said they were in communication with the customer to get it fixed, but had no recourse to disable it temporarily themselves. I took this as not being proactive enough and dropped my account there after a week of it not being resolved. It's all trickle-down. The people I had put something up for would then be mad with all the downtime etc etc down the line.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710471">40</a> by Gus
		posted on 12/4/2008 at 8:50 PM
		</div>
		<div class="comment_text"><p>Perhaps a more customer friendly solution would be to do a vulnerability scan for sql injection using a tool like HP's Scrawlr <a href="http://disq.us/url?url=http%3A%2F%2Fwww.communities.hp.com%2Fsecuritysoftware%2Fforums%2Fp%2F4958%2F83373.aspx%2383373%3AVFIFD4A9M_jUdfssbTjgPL_4Sqs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.communities.hp.com/securitysoftware/forums/p/4958/83373.aspx#83373">http://www.communities.hp.c...</a> .  This is a free tool.  There are other vulnerability scanners out there as well.</p><p>If a vulnerablility is found, you can let the customer know, and provide a solution for them.  If not, there is no need to force the use of cfqueryparam against their wishes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710477">41</a> by jason olmsted
		posted on 12/4/2008 at 10:01 PM
		</div>
		<div class="comment_text"><p>I work for a printer and we check every piece that comes through for a variety of criteria: technical specs (dimensions, color, bleed, other fun stuff) content (there are limits to the amount of flesh that we'll print), and we'll even point out spelling errors.</p><p>While it is unlikely submitted work will cause physical damage to the presses or bindery equipment, jobs can hurt the company and its brand.  There are limits of what we'll run that are probably incredibly fuzzy and gray, but they still exist.</p><p>Every company that provides infrastructure support to another organization's message has to decide what the limits are.  That Ray's friends has decided that his group doesn't want to host a group of victims-in-waiting is an interesting business value proposition that is sure to be received in mixed fashion, like it already has been here.</p><p>However, whether you host with this company or another, it is incredibly naive to believe the information hosted on another system is not subject to review by 3rd parties.  Not least of which, almost all hosting firms have an acceptable use policy concerning the content being hosted and it can only be enforced if the service has the ability to inspect said content.</p><p>I agree with some earlier comments concerning CYA and updating TOS/AUP as, in general, I think transparency is the only sane way to deal with customers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710478">42</a> by anon
		posted on 12/4/2008 at 10:03 PM
		</div>
		<div class="comment_text"><p>they should just block cfquery and then they won't have to worry if the programmers are using cfqueryparam or not. the site will be infinitely safer then....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710474">43</a> by spills
		posted on 12/4/2008 at 10:45 PM
		</div>
		<div class="comment_text"><p>As someone who hosts Coldfusion sites and SQL server. I personally have never seen a SQL injection attack that affected the entire server. The damage is limited only to the areas which each site has access to and controls are in place to stop DOS issues that can happen after a successful SQL injection attack. I can also say that while the use of cfqueryparam is a "no-brainer" in most cases that it also DOES NOT protect against all known SQL injection attacks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710475">44</a> by Christopher Vigliotti
		posted on 12/4/2008 at 11:17 PM
		</div>
		<div class="comment_text"><p>A slightly less confrontational approach would be better for business in the long-term.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710476">45</a> by j589Scrooge
		posted on 12/5/2008 at 2:59 AM
		</div>
		<div class="comment_text"><p>@Posted By The Guy Rays Talking About please post who your company is! Stop ranting about the best practices and lets see how your business does</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710480">46</a> by Matt Jones
		posted on 12/5/2008 at 11:59 PM
		</div>
		<div class="comment_text"><p>I don't really see a problem with them doing it, if they put it in their service agreement.</p><p>For some reason it strikes me kinda the way smoking bans do.  I am completely against the idea of legislated smoking bans (if every host was forced to do this), however I fully support a restaurant owner deciding whether or not the business allows smoking (where this host does not).  The people then can use the policy of the restaurant to contribute to them making there dining choice (do I want to host there or not).</p><p>Personally, I think they should *kinda* implement it, Ie. leave some flexibility for code that might fail an automated check, but pass a "this logically doesn't need it or can't use it" check.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710482">47</a> by ekul
		posted on 12/11/2008 at 6:46 AM
		</div>
		<div class="comment_text"><p>other things to consider...</p><p>searching for absence of cfqueryparam will reveal queries that are not using it but doesn't really mean the code is bad.</p><p>cfqueryparam was created and designed to define a parameterized query and execution plan.  As such there are many many cases where it is actually not a good thing to use cfqueryparam. using cfparam to define type on a variable is probably more or just as secure as using cfqueryparam.</p><p>securing queries is not the reason this tag exists.  it is unfortunately used as a lazy or uniformed developers method to secure unclean code.</p><p>validating and cleaning your users input is ultimately the only way to address security.</p><p>using cfqueryparam may, in most cases, prevent sql injection, but the code is still dirty and results in sql statements being saved in your database fields, which can result in other unexpected data later.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710479">48</a> by Andrew Scott
		posted on 12/14/2008 at 9:59 PM
		</div>
		<div class="comment_text"><p>The short answer is no.</p><p>Although we all know how bad coding can cause a major security problem here, there are cases where I can wrap the query in a function that is type cast.</p><p>This eliminates the need for cfqueryparam, and although there are other benefits from using this tag. It is not upto one individual to tell us how to code.</p><p>I for one will never use a host that does this. That would be like saying here is your house, but it has to be built using timber only as thats what we want for this area.</p></div>
	</div>
</div>
		