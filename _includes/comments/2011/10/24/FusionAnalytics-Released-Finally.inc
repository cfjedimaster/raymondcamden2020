
<div class="comment" id="c_1713736056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736056">1</a> by Raymond Camden
		posted on 10/24/2011 at 5:46 PM
		</div>
		<div class="comment_text"><p>By the way - for folks who want to demo FA, they have a live demo:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.fusion-analytics.com%2Ffa%2Flivedemo.cfm%3AOZvcNFeDXLzPrCSLRAoc7CqLod0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.fusion-analytics.com/fa/livedemo.cfm">http://www.fusion-analytics...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736049">2</a> by John C. Bland II
		posted on 10/24/2011 at 7:25 PM
		</div>
		<div class="comment_text"><p>I know New Relic [<a href="http://disq.us/url?url=http%3A%2F%2Fnewrelic.com%3AQBzLDqbeozZcWKbtKKBhi-vnxoI&amp;cuid=3321886" rel="nofollow noopener" title="http://newrelic.com">http://newrelic.com</a>] is a great SASS option for Rails, Java, .NET. PHP and Python. It provides a phenomenal view into your app, including sql queries. It is kind of like FusionReactor and Analytics combined but considerably cheaper.</p><p>There is also MixPanel. No experience here but it looks pretty sweet and considering it for a Rails gig.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736055">3</a> by Charlie Arehart
		posted on 10/26/2011 at 4:02 PM
		</div>
		<div class="comment_text"><p>Hey guys, John's observations about NewRelic are interesting, but I think he goes too far when he says it's "kind of like FusionReactor and Analytics combined".</p><p>I realize he may just be sharing his observations from afar (if he maybe has never used them). And I've never used NR (just installed it and will explore it), but from what I have read on their site, it seems quite a bit of an apples and oranges comparison. And there are lots of Java monitors out there, sure. Many tools may well share some features, but each also will have its distinctives.</p><p>In the case of FusionReactor and FusionAnalytics, especially, they're written to tightly integrate with ColdFusion (and in FR4, to offer info from the CF Server Monitor), so it provides much more insight into CF applications and servers than a generic java monitor would.</p><p>Also, from what I see of NR, it doesn't seem to be tracking requests in real time, the way FR would (enabling you to see at a glance what requests are running at any moment, for how long, from whom, what's in their request headers, etc., and to be able to kill them, or make protective responses based on them.) It seems to track request information after the fact.</p><p>I do see from the "real user monitoring" page on the NR site that it also shows response times to/from the server from the outside. That's useful, sure, but it's not at all the same as what FR is tracking "from the inside" (and then feeding to FA to review over long periods of time.)</p><p>Indeed, the way they do that monitoring from the outside is that NewRelic is a hosted solution, and it's also where the data being tracked (about requests and queries) is sent in real time (by the agent inside the jvm). While Software as a Service is compelling for a lot of things, I'm sure some would be reluctant to be pushing sensitive data (including the SQL NR tracks) to a third-party server.</p><p>As for saying it's "considerably cheaper", I don't know about that: the versions of NR that offer the unlimited data retention (like FR and FA can) cost at least 159 per server per month. FR's price is far less than that, and FA is less than that as well.</p><p>Of course, with all these things, there are subtleties. I'm not claiming to know NR any more than perhaps John is meaning to assert he knows about FR and FA. And of course, if anyone wants to correct me, please do.</p><p>I just wanted to step in and offer this to suggest they're not really all that "alike"  and each offers different things (just like even the CF Server Monitor and FR while complementary, each offer something that the other might not.)</p><p>Sorry that it's a little long for a blog comment. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736057">4</a> by Charlie Arehart
		posted on 10/26/2011 at 6:58 PM
		</div>
		<div class="comment_text"><p>I should have added that I see John may have been responding as much to Ray's last paragraph, "do engines like this exist for PHP, Ruby, .Net?"</p><p>In that respect, I do appreciate he was focused perhaps more on that than really on a comparison to FR and FA. I just saw what he said and thought it deserved a response of clarification. No offense intended (if indeed any was taken, by anyone).</p><p>More than that, I did want to add that yes I've been working with FA (and for long have worked with FR) and I find it to be an amazing app. I hope to blog more about it in time myself, as well as perhaps to do some conference sessions (if not training) on it. I think a lot of CF shops will be just blown away by the power (and information) it affords.</p><p>Like Ray notes above, check out the free live online demo, if nothing else. There is also a 10-day free trial, to try it out on your own data. And there are videos, feature focus pages, docs, and lots more on the FA site. Check it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736059">5</a> by John C. Bland II
		posted on 10/26/2011 at 10:32 PM
		</div>
		<div class="comment_text"><p>No offense taken Charlie. :) I know you're on payroll. j/k. lol. :-D</p><p>Yes, I was referring to the other languages. I've used NewRelic for a CF project and it doesn't tie in as clean as FR. I realize I put Java in there but that was just me quoting their homepage [to properly report their offering].</p><p>Yes, NewRelic doesn't include everything FR/FA has [namely in terms of CF integration] but has a lot of the core. I would probably choose FR over NewRelic for a CF project where the budget allows.</p><p>Speaking of budget [:)], the costs I referred to were the free and $24/mo/server [year commitment] plans, which comes free when hosting w/ EngineYard. For the basics of seeing into your app in real time, $24 is a gem of a price considering I'm mainly dealing w/ auto-scaling scenarios where dropping $XXX.xx for every scaled server becomes cost prohibitive [pending the client size]; understanding NewRelic [top plan] is $119/mo/server [year commitment] to meet what FR provides [per your comment; haven't compared myself].</p><p>FR is king for CF monitoring, IMHO. My short stint w/ it seriously impressed me but the powers that be were not too keen on the costs.</p><p>Oh and I've used CloudKick for monitoring as well. It is more of a server monitor though but offers some paid "checks" [as they call them].</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736060">6</a> by Charlie Arehart
		posted on 10/27/2011 at 12:36 AM
		</div>
		<div class="comment_text"><p>Thanks for the updates and clarification, John. That all makes sense. just a point of clarification: FR costs half that price ($12/month) per server, for the Standard edition. Just sayin'. :-) In fact, depending on how long ago your folks looked, there was a time when FR (and FA) were not offered as subscription (monthly/annual) licenses, so the prices may be different than they remember.</p><p>As for being "on the payroll", I know you added "just kidding", but to be clear to any readers, I do not work for Intergral, the company that makes FR. I am closely associated with them, teaching FR/FA classes for them, taking on client consulting engagements (as another outlet for the CF server troubleshooting services I offer as an independent consultant), and so on. But I am not an employee, just to be clear. But I am indeed a fan, and love helping others learn the ins and outs, and value, of the tools.</p><p>If it may have been a while, note that FR has been updated to 4, and of course FA is brand new (and quite different from earlier previous shown in recent years as it was being developed--a massive effort, for which I hope the FR folks soon recoup the investment.)</p><p>As always, just trying to help.</p></div>
	</div>
</div>
		