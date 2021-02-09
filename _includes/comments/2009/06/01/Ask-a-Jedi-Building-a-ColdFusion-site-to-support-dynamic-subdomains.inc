
<div class="comment" id="c_1713715769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715769">1</a> by Freelance Web Developer
		posted on 6/2/2009 at 5:46 AM
		</div>
		<div class="comment_text"><p>While working on an RFQ, I had asked my ISP if they'd allow wildcard subdomains. Normally their shared hosting accounts come with only three, and they are directory based (the dir name is the subdomain name). But I explained the site requirements, pretty much the same as riaforge and deviantart, and they were ready to let me do so.<br>With that, no need for hosts file or server config edits needed.<br>So, first check with your ISP (if it's not you) - there might be a lot less work for you to do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715770">2</a> by Raymond Camden
		posted on 6/2/2009 at 5:48 AM
		</div>
		<div class="comment_text"><p>Wow, so in case it wasn't clear, you absolutely would NOT need to do the HOSTS thing for a production environment. Was that not clear? If not, I can add a little note to the end (some folks don't read the comments).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715783">3</a> by Michael van Leest
		posted on 6/2/2009 at 6:08 AM
		</div>
		<div class="comment_text"><p>It did seem to be a post for "production" and not local development...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715777">4</a> by Raymond Camden
		posted on 6/2/2009 at 6:10 AM
		</div>
		<div class="comment_text"><p>Well it is meant for _both_. :) But, let me do a quick edit to the end and you guys can tell me if it makes it better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715778">5</a> by Raymond Camden
		posted on 6/2/2009 at 6:12 AM
		</div>
		<div class="comment_text"><p>Please read the new comment at the end of the entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715779">6</a> by Hal Helms
		posted on 6/2/2009 at 9:26 AM
		</div>
		<div class="comment_text"><p>Loved the post, Ray, but felt it needed a little more...cowbell.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715781">7</a> by Terence
		posted on 6/2/2009 at 11:34 AM
		</div>
		<div class="comment_text"><p>For IIS on Windows, you just specify a host header value.  In the example, use <a href="http://disq.us/url?url=http%3A%2F%2Fcowbell.com%3AzFE6-aMyWKffHF2B2PZ0WcADsNY&amp;cuid=3321886" rel="nofollow noopener" title="cowbell.com">cowbell.com</a> as the host header value and it works.</p><p>Here's step-by-step:<br>1) Start IIS Manager<br>2) Right-click on website (e.g. Default Website) and choose Properties.<br>3) On the Web Site tab, click on Advanced next to IP address.<br>4) On the Advanced Web Site Identification screen, find Multiple Identities for this Web Site and click the Add button.<br>5) Choose the IP address that you use for the site and enter the TCP port.  The typical default is (All Unassigned) and port 80.<br>6) Enter the domain name (e.g. <a href="http://disq.us/url?url=http%3A%2F%2Fcowbell.com%3AzFE6-aMyWKffHF2B2PZ0WcADsNY&amp;cuid=3321886" rel="nofollow noopener" title="cowbell.com">cowbell.com</a>) in the host header value.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715782">8</a> by dickbob
		posted on 6/2/2009 at 12:26 PM
		</div>
		<div class="comment_text"><p>Has anyone got any advice on how to achieve wildcard CNAME DNS. I've asked GoDaddy who manage my DNS and they say no.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715780">9</a> by Tom Chiverton
		posted on 6/2/2009 at 2:32 PM
		</div>
		<div class="comment_text"><p>@dickbob - change DNS provider. I use Gandi, for instance, and you can do anything you like. It's your DNS after all :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715784">10</a> by dickbob
		posted on 6/2/2009 at 2:49 PM
		</div>
		<div class="comment_text"><p>@Tom: Thanks for that. Never heard of <a href="http://disq.us/url?url=http%3A%2F%2FGandi.net%3AsvHJBeuw6hvJuAaRfFKP1WtKsA0&amp;cuid=3321886" rel="nofollow noopener" title="Gandi.net">Gandi.net</a> I guess you're happy to bet the firm on them? Might give them a try although I'm not keen on paying transfer-in fees. Do they want my business or not!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715850">11</a> by Sean Coyne
		posted on 6/2/2009 at 3:49 PM
		</div>
		<div class="comment_text"><p>The most important question is where do I get makebeerwithcf?  the link to RiaForge seems broken :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715860">12</a> by Brandon
		posted on 6/2/2009 at 4:01 PM
		</div>
		<div class="comment_text"><p>@dickbob <a href="http://disq.us/url?url=http%3A%2F%2Fwww.dyndns.com%2F%3As1pRVTGx3ii5nPCzbfUO8YNYST4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.dyndns.com/">http://www.dyndns.com/</a> is what we are using for <a href="http://disq.us/url?url=http%3A%2F%2Fwww.spatialkey.com%3A4kD_lv2AhAePZNe0TERPx6Y5-NA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.spatialkey.com">http://www.spatialkey.com</a> and we have nearly 1000 sites using *.spatialkey.com with different namees.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715861">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715861">13</a> by Joshua Cyr
		posted on 6/2/2009 at 4:16 PM
		</div>
		<div class="comment_text"><p>Godaddy does indeed support wildcard domains.  I just use * for it.</p><p>If doing this with IIS you don't need host headers.  Just have a unique IP pointing to the site in question, IIS will then send all sub domains (or anything) that points to that IP to the site.  Presto.</p><p>One thing to note when doing this is that google and the like will see each site as unique and index each one often each day.  If you have a system set up where you have say, 500,000 possible subdomains and a main directory that points people to them (think dmoz type) then you are going to get a LOT of traffic just in search engines.  I have found that using caching techniques is often required.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715853">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715853">14</a> by Rick Jensen
		posted on 6/2/2009 at 5:41 PM
		</div>
		<div class="comment_text"><p>Thanks for the help with this one Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715859">15</a> by dickbob
		posted on 6/2/2009 at 6:04 PM
		</div>
		<div class="comment_text"><p>@Brandon: Thanks for that. I hadn't looked at <a href="http://disq.us/url?url=http%3A%2F%2Fdyndns.com%3ACwk4eEsjP_19EOleUkoz6u5Qgig&amp;cuid=3321886" rel="nofollow noopener" title="dyndns.com">dyndns.com</a> for ages and didn't realise that offered all those services now. Bit pricey to use on all 60+ domains I manage but could be useful to try on the wildcard sub domain requirement.</p><p>@Joshua: That was the first thing I tried for the CNAME in the GoDaddy Total DNS Control Panel and it gagged on it. Do you have another method?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715857">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715857">16</a> by Joshua Cyr
		posted on 6/2/2009 at 6:08 PM
		</div>
		<div class="comment_text"><p>Sorry, didn't notice the CNAME part.</p><p>Set @ as A Record and your IP<br>set * as A record and your IP<br>set cname www to @</p><p>That is how I have em set up and works fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715864">17</a> by todd
		posted on 6/2/2009 at 6:59 PM
		</div>
		<div class="comment_text"><p>LOTS of people will put "www" in front of everything. So you might want to modify your algorithm to accept</p><p>  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.hostname.domain.com%3AyRHNA53edd1IByuLGeJDQ_0w5dM&amp;cuid=3321886" rel="nofollow noopener" title="www.hostname.domain.com">www.hostname.domain.com</a><br>in addition to <br>  <a href="http://disq.us/url?url=http%3A%2F%2Fhostname.domain.com%3Ap1Yd3bY45pB-1FFgC6sopJcmMPo&amp;cuid=3321886" rel="nofollow noopener" title="hostname.domain.com">hostname.domain.com</a></p><p>to avoid going somewhere you don't expect.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715856">18</a> by Raymond Camden
		posted on 6/2/2009 at 7:02 PM
		</div>
		<div class="comment_text"><p>Didn't I mean www? Or do you mean <a href="http://disq.us/url?url=http%3A%2F%2Fwww.NAME.domain.com%3F%3ANwiHC2gSufTx5sr_9ZP8EZEFdos&amp;cuid=3321886" rel="nofollow noopener" title="www.NAME.domain.com?">www.NAME.domain.com?</a> So to support <a href="http://disq.us/url?url=http%3A%2F%2Fwww.blogcfc.riaforge.org%3F%3A0ZK99LBt-beiqLopLYfBuNnp2bA&amp;cuid=3321886" rel="nofollow noopener" title="www.blogcfc.riaforge.org?">www.blogcfc.riaforge.org?</a></p><p>If so, that's a smart idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715851">19</a> by Matthew Williams
		posted on 6/2/2009 at 7:17 PM
		</div>
		<div class="comment_text"><p>I really, really hope the OP doesn't need to use wild card domains along with SSL on these member pages (although, you probably should if there's any kind of login involved) in IIS.  If you have a unique IP for the DNS entry, you're golden.  If, however, that IP is not unique and you're required to use host headers to sort it all out, you may need to go mucking about in the IIS metabase.  I blogged about doing this a goodly ways back here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.geodesicgrafx.com%2Fblog%2Findex.cfm%2F2007%2F2%2F27%2FUsing-IIS-6-and-SSL-host-headers%3A7qfaCyzLIQXqvLL0ZfmiDk6XW-0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.geodesicgrafx.com/blog/index.cfm/2007/2/27/Using-IIS-6-and-SSL-host-headers">http://www.geodesicgrafx.co...</a>.  Heaven help you if that's actually required though ;).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715863">20</a> by anthony
		posted on 6/2/2009 at 11:51 PM
		</div>
		<div class="comment_text"><p>You should add a case that redirects direct ip access.  If I go to 127.0.0.1, you code will think that I'm on the 127 subdomain.  Combine that issue with Todd's case of people appending www to everything, it almost seems like it would be easier to just remove the base domain to find the subdomain.  Something like, rereplace(cgi.server_name,'\.cowbell\.com$','','ALL')</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715858">21</a> by Jon Briccetti
		posted on 6/5/2009 at 11:22 PM
		</div>
		<div class="comment_text"><p>@Ray - my understanding of this question was how to dynamcially create this subdomain using coldfusion - like when you signup for a trial account at basecamp - you get to "pick" your subdomain name when you signup. somehow their ruby? app calls out and makes the DNS entry to create the subdomain, copies the site files into the webroot and kicks you over to the site... conveniently, im looking for someone who's done this, so maybe you know (hint hint)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715862">22</a> by Raymond Camden
		posted on 6/5/2009 at 11:23 PM
		</div>
		<div class="comment_text"><p>@Jon: Yeah, but why would you call out to DNS? We don't do that at RIAForge. Since *.riaforge.org goes to one box, there is no need.</p><p>Also, we don't create new CFM files for every project. That would be a waste. Rather - the code notices and responds to the subdomain (see the example above).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715855">23</a> by Pablo Varando
		posted on 6/6/2009 at 2:04 AM
		</div>
		<div class="comment_text"><p>I do this on EasyCFM for the tutorials, and my DNS is done through GoDaddy.</p><p>dickbob, On GoDaddy, simply add a CNAME that points to an IP as a wildcard (if you need further explanationm shoot me an email):</p><p>*    [ip]</p><p>That should take care of that... now you will need a static IP on your IIS site.</p><p>I handle this through code to do some validate (instead of a MOD_REWRITE type scenario.</p><p>On my index.cfm, do this:</p><p>&lt;cfif listFirst(cgi.server_name, '.') EQ "something"&gt;<br>   &lt;!--- here you and do an include or a server-side push to hte content ---&gt;<br>&lt;/cfif&gt;</p><p>You can also get fancy and do this:</p><p>&lt;cfquery name="qCheckAccount" datasource="MyDSN"&gt;<br>  select top 1 accountID<br>  from   accounts<br>  where  accountName = '#listFirst(cgi.server_name, '.')#'  &lt;!---(you can use queryparam, simplied to show example) ---&gt;<br>&lt;/cfquery&gt;</p><p>&lt;cfif qCheckAccount.recordCount&gt;<br>   &lt;!--- include file or do server-side push ---&gt;<br>&lt;cfelse&gt;<br>   &lt;!--- normal HOME PAGE CONTENT ---&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715852">24</a> by Raymond Camden
		posted on 6/6/2009 at 6:47 PM
		</div>
		<div class="comment_text"><p>@Jon: So, to be clear, if you _did_ want to copy the files, that would be a simple cfdirectory call. The hard part would be getting Apache to say, "For this new site, use path X as root". Luckily Apache' config is text based, and you can restart Apache with the command line (cfexecute).</p><p>I'd still recommend using one code base though - if possible.</p></div>
	</div>
</div>
		