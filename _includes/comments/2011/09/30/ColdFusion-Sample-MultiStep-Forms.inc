
<div class="comment" id="c_1713735355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735355">1</a> by Dave Ferguson
		posted on 9/30/2011 at 6:33 PM
		</div>
		<div class="comment_text"><p>Very cool.  I am now more interested in exploring Bootstrap.  Seems pretty cool for us non-designers and maybe easier to implement then jQuery UI.</p><p>I did notice an issue with the demo.  I mistakenly entered text in the CC# field cause I cant read form labels.  However, the error I got was stating the field was blank.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735357">2</a> by Phillip Senn
		posted on 9/30/2011 at 6:33 PM
		</div>
		<div class="comment_text"><p>Why use<br>&lt;meta http-equiv="Content-Type" content="text/html;charset=ISO-8859-1" /&gt; ?<br>I use:<br>&lt;meta charset="utf-8"&gt;<br>But I'm not sure the necessity for either one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735353">3</a> by Edward Beckett
		posted on 9/30/2011 at 6:57 PM
		</div>
		<div class="comment_text"><p>The most productive function I've ever used --- I learned from ya ---  structKeyExists --- TY Ray ---</p><p>:-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735354">4</a> by Phillip Senn
		posted on 9/30/2011 at 7:01 PM
		</div>
		<div class="comment_text"><p>Yah, I use it too.  The only time I've had a problem with it was when using<br>&lt;cfif structkeyexists(session,"foo")&gt; and the session scope had expired.  So I had to say<br>&lt;cfif isDefined("session") and structkeyexists(session,"foo")&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735356">5</a> by SuperAlly
		posted on 9/30/2011 at 7:03 PM
		</div>
		<div class="comment_text"><p>Very cool Ray, thanks.<br>Now where can I get some of that pork loin rump turducken mentioned on the last page?  Sounds delicious :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735362">6</a> by Raymond Camden
		posted on 9/30/2011 at 7:05 PM
		</div>
		<div class="comment_text"><p>+Dave - I fixed it in the blog text above, on the demo, and in the zip.</p><p>+Phillip - Dude, no idea. ;) It came from Bootstrap.</p><p>+Edward - You can, of course, also use isDefined.</p><p>+Phillip - Wow, what you described should never be possible. The session can't expire while the page is running. THe act of _hitting_ the page renews, or restarts, the session. If you can make a reproduceable case of this in CF9, let me know.</p><p>+SuperAlly - Thank Bacon Ipsum - <a href="http://disq.us/url?url=http%3A%2F%2Fbaconipsum.com%2F%3Aj5JqydEVgb_ypK0fnIEEhXAmndg&amp;cuid=3321886" rel="nofollow noopener" title="http://baconipsum.com/">http://baconipsum.com/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735364">7</a> by CJM
		posted on 9/30/2011 at 7:13 PM
		</div>
		<div class="comment_text"><p>When the OnSessionEnd event fires, do you still have access to what was in the session scope or has it already cleared at that point?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735366">8</a> by Raymond Camden
		posted on 9/30/2011 at 7:17 PM
		</div>
		<div class="comment_text"><p>See the article I linked to. But technically, yes. You do not have "the Session scope" as in, <a href="http://disq.us/url?url=http%3A%2F%2Fsession.foo%3A0GFwmortM5kwImb-zfNafWJu1YY&amp;cuid=3321886" rel="nofollow noopener" title="session.foo">session.foo</a>, but the method is passed a copy of it. So you have an argument that is a structure that you can "do stuff" with. Basically, read the article I linked to, then do a search for onSessionEnd in my blog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735369">9</a> by CJM
		posted on 9/30/2011 at 7:22 PM
		</div>
		<div class="comment_text"><p>@Ray - Thanks, sorry I missed that link up above.  Exact answer I was looking for... time to go implement a feature!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735367">10</a> by Paul Dynan
		posted on 9/30/2011 at 10:24 PM
		</div>
		<div class="comment_text"><p>Looks great as far as I got in the demo.  I wasn't willing to put in a valid CC to test (I know...where's the trust?).  I'll have to run it locally and check it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735370">11</a> by Raymond Camden
		posted on 9/30/2011 at 10:26 PM
		</div>
		<div class="comment_text"><p>Paul, you can enter</p><p>4111111111111111</p><p>to test.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735373">12</a> by Paul Dynan
		posted on 9/30/2011 at 10:35 PM
		</div>
		<div class="comment_text"><p>Dammit....now everyone has my CC...thanks Ray... ;)</p><p>Funny, I tried that originally, but must have miscounted my 1s.  Thanks real slick, and I got to see the saved data part since I had already closed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735378">13</a> by paul
		posted on 9/30/2011 at 11:11 PM
		</div>
		<div class="comment_text"><p>Thanks again Ray! This is similar to what I worked with you on about a month ago.</p><p>P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735380">14</a> by Phillip Senn
		posted on 10/1/2011 at 12:30 AM
		</div>
		<div class="comment_text"><p>If someone is taking a long time to fill out a form (they go to lunch for instance), then when they press 'submit', their session has expired, and they are automatically considered logged out.  If you assume a certain selection has been made to the session scope (session.shirtColor), then when the user presses submit, they get a login challenge &amp; enter their credentials, but they have lost their session.shirtColor variable.  <br>&lt;cfif structkeyexists(session,"shirtColor")&gt; will error.  I suppose you could initialize session.shirtColor in onSessionStart.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735381">15</a> by Phillip Senn
		posted on 10/1/2011 at 12:31 AM
		</div>
		<div class="comment_text"><p>Oh wait.  That's not true.  <br>I have to put myself in detention for the rest of the day.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735379">16</a> by Simon
		posted on 10/1/2011 at 10:06 AM
		</div>
		<div class="comment_text"><p>Thanks for the "real world" example its great to get to see how the pro's would do it ! I've just finished a project using bootstrap for the backend admin and do think it has speeded up the layout process for alot giving a very professional feel to my pages :) agree with you about the lack of documentation. Having some more would have made it even quicker :0)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735384">17</a> by Tom Hubbard
		posted on 10/1/2011 at 4:08 PM
		</div>
		<div class="comment_text"><p>Great post.</p><p>I've taken to creating a server scope (which we could define global) function that gets the value of a structure if it exists otherwise returns a default value.</p><p>Instead of:<br>&lt;cfif not structKeyExists(session, "checkout")&gt;<br>  &lt;cfset session.checkout = {}&gt;<br>&lt;/cfif&gt;</p><p>You can do:<br>&lt;cfset session.checkout = Server.GetStructValue(session,"checkout",{})&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735382">18</a> by Raymond Camden
		posted on 10/1/2011 at 4:13 PM
		</div>
		<div class="comment_text"><p>Want to see an even sexier version using a function almost no one uses?</p><p>&lt;cfset session.checkout = structGet("session.checkout")&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735383">19</a> by Ronnie
		posted on 10/3/2011 at 2:42 AM
		</div>
		<div class="comment_text"><p>Great post!</p><p>Has anyone successfully implemented this into Mura CMS?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735385">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735385">20</a> by Arthur Nweke
		posted on 10/3/2011 at 7:37 PM
		</div>
		<div class="comment_text"><p>Where is the Zip filt? I could not see any.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735386">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735386">21</a> by Catdragon
		posted on 10/3/2011 at 11:25 PM
		</div>
		<div class="comment_text"><p>How about something a bit more complex?  For example, suppose the user has a cart full of items.  Now before pulling up a list of all the items for him to pick from i want to ask him if he wants to just buy all the things in his cart?  If he doesn't then i pull the list up and the user can pick and choose.</p><p>I can see how a step can be used to ask the user this question could be inserted, but that seems "wasteful" as in an extra cfm page where one is not needed.</p><p>So my question boils down to, how would one skip/process automatically a step based on a question asked before hand?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735389">22</a> by Raymond Camden
		posted on 10/4/2011 at 5:38 PM
		</div>
		<div class="comment_text"><p>+Arthur - click the download link. It is at the end of my entry.</p><p>+Catdragon: You could just cflocation to N+1 instead of N. Unless I'm misreading your question, it's really not that complex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735388">23</a> by Catdragon
		posted on 10/4/2011 at 7:59 PM
		</div>
		<div class="comment_text"><p>Thanks Ray.  For some reason (probably 'cause late in the day) it seemed awful complex.  This morning, not so much.  Thanks for the answer tho'.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735390">24</a> by corey
		posted on 10/5/2011 at 11:48 PM
		</div>
		<div class="comment_text"><p>This methodology for multistep forms looks great! I wonder if it would be possible to maintain this functionality with client variables instead of session variables although you would have to develop another method of storing struct as client vars can't handle those complex objects</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735393">25</a> by Raymond Camden
		posted on 10/7/2011 at 6:34 AM
		</div>
		<div class="comment_text"><p>You could use serializeJSON to store the values into the client scope and deserliazeJSON when you go to actually use em.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735391">26</a> by CFBozo
		posted on 10/9/2011 at 8:06 PM
		</div>
		<div class="comment_text"><p>A dumb rookie question...</p><p>Since you are storing the structure in a session variable, isn't it necessary to put locks around it?</p><p>I feel dumb asking, but I thought that it was important to lock the session scope, especially on write.  And if you were to save the struct to the client scope via serialized JSON, that would not be an issue.</p><p>Are there any advantages/disadvantages to saving the struct to the session vs the client scope?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735395">27</a> by Raymond Camden
		posted on 10/10/2011 at 2:38 AM
		</div>
		<div class="comment_text"><p>Not a stupid question at all, especially since, for YEARS, we (CF folks in the community) said you had to use locks around ANY use of Session, Application, or Server variables.</p><p>Those locks were required before CF6 because of memory corruption issues.</p><p>Now they are only necessary in terms of race conditions.</p><p>However - you could only get a race condition in the example above if you were to open two (or more) tabs and tried to do form submissions at the same time. That's a rare situation and one a user would have to force upon himself, so it's not something I'd worry about here.</p><p>Make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735392">28</a> by Raymond Camden
		posted on 10/10/2011 at 2:39 AM
		</div>
		<div class="comment_text"><p>I kinda missed your last question. The Session scope is preferable here because we don't want it to last forever. Also, Session scopes take any type of data, not just simple values.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735394">29</a> by CFBozo
		posted on 10/10/2011 at 7:14 PM
		</div>
		<div class="comment_text"><p>@Ray</p><p>Thanks!  Both answers were very helpful!</p><p>The lock issues plague me.  It like having Jiminy Cricket on my shoulder.  I want to use a session variable in places, but then I worry about performance issues with locking that scope all over the app.  But I also have concern about application instability resulting from not locking a session.  So your insight about CF6+ was very helpful.  If I keep that situation in mind, it should serve me well.</p><p>And the simple value limitation of client variables seems to be the biggest limitation.  But that brings me to one more question.  If I end up need to put my app in a CF cluster in the future, does the use of session variables present an issue?  I read somewhere that it was much easier to work with clusters if the session scope was avoided and the relied on the client scope in its place.</p><p>Many thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735397">30</a> by Raymond Camden
		posted on 10/10/2011 at 8:15 PM
		</div>
		<div class="comment_text"><p>CF9 added session replication over a cluster, so in theory, it should "just work", but I'll be honest and say I've yet to try it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735398">31</a> by corey
		posted on 10/10/2011 at 11:46 PM
		</div>
		<div class="comment_text"><p>The issue of session v. client is a very good question and requires more discussion as each route has its own implications. Ideally, session vars are ideal in that they are able to store structures and objects, where client based variables unless utilizing serializeJSON. (looking more into that route, thanks Ray) <br>Due to load-balanced server environment, we have been directed by our Server Admins to discontinue all usage of session variables and convert to client based. They support cf8 and cf9 for our environments at this time. Additionally, we have been directed to discontinue all absolute links and use only relative links based on the web file directory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735396">32</a> by Joshua Cyr
		posted on 11/11/2011 at 1:29 AM
		</div>
		<div class="comment_text"><p>In the error checking on step 4 if the exp date is invalid (in the past) the error still says "Credit card number is empty or invalid."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735399">33</a> by Raymond Camden
		posted on 11/11/2011 at 1:32 AM
		</div>
		<div class="comment_text"><p>Thanks Josh - I edited it. Not the nicest message, but better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735401">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735401">34</a> by Christian
		posted on 4/7/2013 at 2:51 PM
		</div>
		<div class="comment_text"><p>Hello Raymond,<br>just looking at your several examples concerning jquery and CF. <br>I just switched over developing a site with bootstrap... and get a bit more frustated due to the lot of scripting for clean form validation.<br>I did a research on cfuniform with bootstrap... but didn´t find it helpful...</p><p>Isn´t there a good way to have a cfc for bootstrap - forms? That´s what I´m searching for. Don´t want to code all the html-stuff again and again. <br>Maybe an xml-setup of a form and go... with clientside jquery and serverside validation too... maybe an expand of your posted jquery - validation step3. That would be a great shot.<br>Eastern was last week? Do you have some eggs for me?<br>Thanks for a suggestion to keep me on the way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735402">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735402">35</a> by Raymond Camden
		posted on 4/8/2013 at 5:10 PM
		</div>
		<div class="comment_text"><p>Are you asking about CF tags to generate HTML forms that work well w/ Bootstrap? If so, I'm not aware of any. I'm not really a fan of UI tags like that. You could create them yourself of course. :) CF custom tags are rather simple to create.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2257864050">
	<div>
		<img src="https://disqus.com/api/users/avatars/BernardaOber.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2257864050">36</a> by Bernarda Ober
		posted on 9/17/2015 at 2:38 AM
		</div>
		<div class="comment_text"><p>My business partners required 1998 DD 1857 last year and used a document<br> management site that has an online forms library . If others want 1998 <br>DD 1857 too , here's  or <a href="http://disq.us/url?url=http%3A%2F%2Fwww.antipolo.gov.ph%2Fforms%2FPostal%2520ID%2520Application%2520form.pdf%3AL3c9Z3LMmy2Uv6HTEJzIMFO46R0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.antipolo.gov.ph/forms/Postal%20ID%20Application%20form.pdf">www.antipolo.gov.ph</a></p></div>
	</div>
</div>
		