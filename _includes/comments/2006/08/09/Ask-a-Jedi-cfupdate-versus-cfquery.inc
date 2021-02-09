
<div class="comment" id="c_1713655929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655929">1</a> by Joel Cox
		posted on 8/9/2006 at 5:47 PM
		</div>
		<div class="comment_text"><p>I think I tried it once back in CF4 or 5 just for kicks and found that it ran about 20x slower than a cfquery with update SQL. For all of the reasons that you mention, I never use this tag. Ditto for cfinsert.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655934">2</a> by Tom Chiverton
		posted on 8/9/2006 at 6:10 PM
		</div>
		<div class="comment_text"><p>There's a cftable tag ?</p><p>But no, never used cfupdate/cfinsert I could never see what it gave me over cfquery, and as you point out there are plenty of issues with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655932">3</a> by Charlie Arehart
		posted on 8/9/2006 at 6:23 PM
		</div>
		<div class="comment_text"><p>I can point out some more reasons not to use it, from experience I shared back in 98 (when I had a tip list on my old <a href="http://disq.us/url?url=http%3A%2F%2Fsystemanage.com%3AnoMSaNNcYKdqPPtHVyADiLBkuYE&amp;cuid=3321886" rel="nofollow noopener" title="systemanage.com">systemanage.com</a> site, before the days of blogs)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.systemanage.com%2Fcff%2Fcftips1.cfm%23cfinsert%3ARI41TMjgwANZJvrt7IyPQqWS-LE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.systemanage.com/cff/cftips1.cfm#cfinsert">http://www.systemanage.com/...</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.systemanage.com%2Fcff%2Fcftips3.cfm%23cfupdate_index%3AITJg50OxtvGvdqLIWDxkxg6ZqSs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.systemanage.com/cff/cftips3.cfm#cfupdate_index">http://www.systemanage.com/...</a></p><p>Ray's right to recommend against their use, as most would nowadays. Sadly, because lots of code uses them, I'm guessing Adobe/MM/Allaire were reluctant to pull them. They could discourage or deprecate them, but they probably fear affecting so much code. These appeared to make some sense to CF's original goal of making web apps "easy". Times changed and skills increased, and really it's time to put them to bed. Ray's great point about security alone is reason to avoid them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655935">4</a> by Mark W. Breneman
		posted on 8/9/2006 at 6:36 PM
		</div>
		<div class="comment_text"><p>Hello my name is Mark, (everyone drones, "Welcome Mark")</p><p>I am a cfupdate user. I started using back in the CF 3.1 days, and have never been able to kick the habit. I have tried quitting cold turkey but, then I come across a code snipit or an old project and I'm right back off the wagon again.</p><p>I use cfupdate as part of a in house CRUD system, that we have used on almost every we do.  It solved a few problems and fit the need at the time.</p><p>On the bright side, This CRUD system is long over due for a make over. I hope to very soon replace this CRUD system with a new one based on Reactor or customized version  datamgr.cfc.</p><p>Cfupdate has its own problems. Like, Why to I have to list the primary key in the list of fields that I want to update in CF6+? With its issues aside it does a fair job. (but, I'm still going to replace it first chance I get.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655938">5</a> by James, F.E.
		posted on 8/9/2006 at 6:37 PM
		</div>
		<div class="comment_text"><p>OK, I don't do any CFC development but I'm trying to learn. You say that you should avoid the form scope when dealing with CFCs. Why is that?</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655936">6</a> by Steve Bryant
		posted on 8/9/2006 at 6:39 PM
		</div>
		<div class="comment_text"><p>I have tried most tags at one time or another.</p><p>I didn't like cfinsert/cfupdate for the reasons that you and Charlie gave.</p><p>Actually, I disagree with your third point. I think helper functions can be nice. After all, ColdFusion provides a lot of abstraction and most of it is pretty nice.</p><p>I have to say that cftable is one of the most worthless tags though (tried it once in my first few months of CF - didn't like it then and haven't looked back).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655937">7</a> by Thomas
		posted on 8/9/2006 at 6:40 PM
		</div>
		<div class="comment_text"><p>Add me to the list of people who never used it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655939">8</a> by Steve Bryant
		posted on 8/9/2006 at 6:45 PM
		</div>
		<div class="comment_text"><p>Mark,</p><p>I don't want to hijack Ray's post but I am curious what mods you would like for DataMgr.cfc. Mind hoping over to my blog (<a href="http://disq.us/url?url=http%3A%2F%2Fsteve.coldfusionjournal.com%3A0thtMfTcDYRAEOrxDLW8ST04EAU&amp;cuid=3321886" rel="nofollow noopener" title="steve.coldfusionjournal.com">steve.coldfusionjournal.com</a>) and posting a comment?</p><p>James,</p><p>The problem with using Form scope from a CFC is that using any shared-scope variable(of which Form is one) from within a CFC breaks encapsulation. I don't think I can explain the benefits of encapsulation in a comment, but a little Googling on the subject should turn up plenty.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655940">9</a> by robs
		posted on 8/9/2006 at 7:52 PM
		</div>
		<div class="comment_text"><p>so how do you put DB logic in cfcs? atm i include my DB logic using cfinclude, but it's not that optimal :)</p><p>anyway, do you use session scope or pass every form variable with some function to the cfc? or are there some different ideas?</p><p>any hints appreciated</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655942">10</a> by James Edmunds
		posted on 8/9/2006 at 7:54 PM
		</div>
		<div class="comment_text"><p>On a tangential note to the "helper" function issue, I today stripped out from an unrelated page (actually from the delivered page source on the browser!) the javascript generated by cfform validation on a simple page to utilize on an AJAXed page.</p><p>This was because there was a form delivered as part of innerHTML from an AJAX-called script to the main page, and I wanted to make it required - this won't work using cfform within the called script because the cfform-generated javascript won't have loaded in the header of the calling page.</p><p>Because these cfform helpers generate the actual javascript that DOES give us a look "under the hood", why not just take the parts of the engine want?</p><p>BTW, I was the one who posed the cfupdate question to Ray mostly because I have it in some older scripts but have since bailed it, and wanted his take on it. But evidently I am still lazy enough to use cfform!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656033">11</a> by Steve Bryant
		posted on 8/9/2006 at 8:09 PM
		</div>
		<div class="comment_text"><p>robs,</p><p>You will get a lot of answers to that question.</p><p>The main thing (for me) is to make sure that you explicitly pass in to the CFC everything that it needs.</p><p>I would suggest passing each form variable in as a separate argument as it makes for better documentation, but you can pass in the whole structure if you want (though you are really adding depenencies and therefor breaking encapsulation if you do).</p><p>The main thing is that you won't want to pass in the datasource on each method. To avoid that, instantiate the component using an init (so named by convention) method and then use the instantiated component to do your work.</p><p>Searches on cfobject and on ColdFusion init should help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656029">12</a> by Deivn
		posted on 8/9/2006 at 8:28 PM
		</div>
		<div class="comment_text"><p>I have used cfupdate and cfinsert on occassion. I'll probably continue to use it (on occasion). There's many situations when it's not appropriate (probably moreso then not). I think they're good tags to use as long as you know when and when not to use them. Afterall, CF is all about RAD.</p><p>As for binding, I believe it does bind the parameters. I can't point you to any proof or links, but I remember reading something (something that seemed official) quite some time ago that led me to believe that binding does occur. I don't remember what it was, but that was my belief ever since.</p><p>I remember a couple occasions in particular when dealing with a difficult client in they really needed to add some functionality and didn't believe they needed to pay for it. I went into what I call "ColdFusion Extreme" development mode, ignoring all best practices and implementing the fastest, most RAD development efforts possible. This included the use of cfinsert/cfupdate and hey... it got the job done with little to no money loss on my side :)</p><p>I'd also like to throw out there that these tags can be useful when you just need to do some quick prototyping.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656026">13</a> by William
		posted on 8/9/2006 at 9:11 PM
		</div>
		<div class="comment_text"><p>Nope, I don't use cfupdate. I always prefer to have control on my SQL queries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656036">14</a> by Raymond Camden
		posted on 8/9/2006 at 9:21 PM
		</div>
		<div class="comment_text"><p>I spoke to Mr Nimer, formally of Adobe, and he says cfupdate does indeed use bound parameters, so SQL injection would not be an issue. I'm surprised, but pleased that Adobe would ensure best practices there. This includes cfinsert as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656027">15</a> by Raymond Camden
		posted on 8/9/2006 at 9:27 PM
		</div>
		<div class="comment_text"><p>robs, this is now a bit off topic, but if you search on blog for CFCs, you will find a wealth of posts on the topic. There is also a link im my Guides pod to cfc resources including the cfcdev listserv.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656038">16</a> by Stephen Cassady
		posted on 8/9/2006 at 10:23 PM
		</div>
		<div class="comment_text"><p>Nope on either - when looking at the two choices, it seemed that it would take (about) as long to actually write the SQL than use a helper tag. And in the end, the helper tag just seems to obscure things - here's another way to query/insert, but it has special restrictions on how it works with data.</p><p>I can see how it was added to make ColdFusion even more accessible to people with no SQL experience (and accessibility is a good thing), but it feels like a false path to leed people down for some reason.</p><p>A set of clear, simple to read, examples may do wonders in supporting people to SQL in place of the "accessibility tags".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656032">17</a> by Devin
		posted on 8/9/2006 at 10:46 PM
		</div>
		<div class="comment_text"><p>well, there's an additional benefit to using it, in which no one's brought up. Maintanence. Changing table column names, adding new columns, etc. Depending on the changes, there may be no need to modify insert/update statements.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656028">18</a> by Ali
		posted on 8/9/2006 at 10:52 PM
		</div>
		<div class="comment_text"><p>I think I put CFUpdate up there with CFInsert and CFTable, as the tags I've never used, even when I was learning CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656034">19</a> by Raymond Camden
		posted on 8/9/2006 at 10:54 PM
		</div>
		<div class="comment_text"><p>Devin, if you change those names, then you need to change your forms or the cfupdate/cfinsert will break.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656031">20</a> by James, F.E.
		posted on 8/9/2006 at 11:00 PM
		</div>
		<div class="comment_text"><p>Steve - thanks. So the distinction is that the form scope is not used inside the CFC, where as you could use the form scope to pass in arguments to the CFC. Correct?</p><p>And getting on topic - I used CFINSERT and CFUPDATE very early on in a large project because they were simple and quick. But later they caused problems so I ripped them out and replaced them with standard SQL queries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656035">21</a> by Steve Bryant
		posted on 8/9/2006 at 11:03 PM
		</div>
		<div class="comment_text"><p>James,</p><p>That's right. Basically, so long as you are not directly accessing any shared-scope variable (like Form) from within your CFC you are OK.</p><p>That a variable came originally from a Form variable in immaterial to the CFC because it could have come from elsewhere.</p><p>Make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656037">22</a> by David Levin
		posted on 8/10/2006 at 10:56 AM
		</div>
		<div class="comment_text"><p>I think of CFUPDATE as sort of a 'CF Newbie' tag.  It doesn't give you as much flexibility with your update statements.  You can't include conditional (if) statements in CFUPDATE, and I don't think you can use CFQUERYPARAM which is a great tag to protect your data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656030">23</a> by Adam Cameron
		posted on 8/10/2006 at 3:07 PM
		</div>
		<div class="comment_text"><p>Hi<br>I used it once, in my early days of CF.  But for reasons I can't remember, the requirements of the DB processing pretty much immediately meant the functionality of &lt;cfupdate&gt; / &lt;cfinsert&gt; wasn't up to spec.</p><p>I've found this of pretty much every CF tag that tries to "help" (&lt;cfform&gt;, &lt;cftable&gt;, &lt;cfgrid&gt;, &lt;cfchart&gt;, &lt;cfmail&gt;, &lt;cfsearch&gt; etc).  They seem to kinda do something sort of almost useful, possibly as far as a proof-of-concept implementation goes, but once I have a real requirement, they have simply never cut it.  This is why - referring to all the CF8 wishlists doing the rounds @ present - I'd rather see enhancements to the base language, bugfixes and performance improvements than more "bells and whistles".</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656040">24</a> by James, F.E.
		posted on 8/10/2006 at 6:59 PM
		</div>
		<div class="comment_text"><p>Steve - Thanks. That makes perfect sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656039">25</a> by tof
		posted on 8/11/2006 at 6:05 AM
		</div>
		<div class="comment_text"><p>To me these tags are evil. Even if you're absolutely kick-ass at coldfusion, OO, and design patterns (which I'm not :D), you also need to master SQL when it comes to web development.  Even much more so than HTML or CSS, if you ask me.</p><p>I think tags like those make it difficult to get good at it. On top of that you have less control over your sql, security, hints, and so on.</p><p>Again, one could argue that the whole purpose of CF is to make things more simple, but I think these tags take it a bit too far. It brings us back to that old post about the 2 types of CF developers doesn't it? ;-)</p><p>tof</p></div>
	</div>
</div>
		