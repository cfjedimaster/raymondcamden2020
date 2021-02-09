
<div class="comment" id="c_1713654121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654121">1</a> by Brad
		posted on 6/14/2006 at 5:08 PM
		</div>
		<div class="comment_text"><p>Would be cool if there's a site or a web page dedicated to coldfusion security, such as tips or guides. I'm already aware about some things such as cfqueryparam, but I'm sure there's more that I and others may not know yet.</p><p>That php security page is useful!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654120">2</a> by Raymond Camden
		posted on 6/14/2006 at 5:29 PM
		</div>
		<div class="comment_text"><p>Good idea. I'll build a simple quick guide (to go along with my others) today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654109">3</a> by Brian
		posted on 6/14/2006 at 5:57 PM
		</div>
		<div class="comment_text"><p>Um, Ray I think you lost a word in this sentence (you were probably heavy in soapbox mode -- i've been there &lt;grin&gt;)</p><p>"I know I've said this before, but validating input parameters is something that is a) easy and b) done far too often."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654122">4</a> by Raymond Camden
		posted on 6/14/2006 at 6:00 PM
		</div>
		<div class="comment_text"><p>Can you say oops? I'll be editing it in a moment. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654125">5</a> by [SteelValor]
		posted on 6/14/2006 at 6:11 PM
		</div>
		<div class="comment_text"><p>Very nice! I wrote something simillar for logins that would strip out any non alpha-numeric content. (I haven't up'ed to cf7 yet and use aes encryption instead of cf's hash (md5) which is currently defeatable via brute force pattern checking)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654123">6</a> by Brian
		posted on 6/14/2006 at 6:39 PM
		</div>
		<div class="comment_text"><p>@SteelValor:  it's nice that you have the op to strip out specials...we've just received the new password policy for the Department of Defense:</p><p>- 9 character minimum passwords<br>  - At least 2 lower case letters<br>  - At least 2 uppercase letters<br>  - At least 2 numbers<br>  - At least 2 special characters.<br>- Passwords will be changed every 60 days.</p><p>I found early on that we had problems with the JVM passing colons and apostrophes on to the domain server...I didn't know they were being filtered...only that my users couldn't web log in anymore...what a pain...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654114">7</a> by Lola Lee Beno
		posted on 6/14/2006 at 6:59 PM
		</div>
		<div class="comment_text"><p>9 character minimum passwords - boy, that's real easy to remember.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654117">8</a> by Teddy R Payne
		posted on 6/14/2006 at 7:32 PM
		</div>
		<div class="comment_text"><p>Ray,<br>I completely agree with you on your soapbox.  Applications are built without these issues in mind, but the solutions to the issues doesn't really need original development.  The code already exists and functions to augment when it is not.</p><p>I hope you provide a post or a series of posts that will address each of the top 10 issues.  I would be good to see one post per topic matter, so that people can comment on each one individually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654128">9</a> by Raymond Camden
		posted on 6/14/2006 at 7:39 PM
		</div>
		<div class="comment_text"><p>I actually have a Quick Guide written right now, on the site. I'm just not linking to it it yet. I'm waiting on a bit more feedback. It is not an intense discussion but more a cheat sheet of things to check.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654129">10</a> by Dan G. Switzer, II
		posted on 6/14/2006 at 7:41 PM
		</div>
		<div class="comment_text"><p>One of the problems I have w/the DOD requirements, is that will lead to users writing their passwords down--and storing them in a place easy to view.</p><p>If you make passwords too difficult to remember, users start writing them down and sticking them on their monitors (some people do this anyway.) This presents a problem in and of itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654127">11</a> by Adrock
		posted on 6/14/2006 at 11:51 PM
		</div>
		<div class="comment_text"><p>I'm all up on your blog this week.</p><p>Incidentally, I'll be presenting on "ColdFusion Application Security" at CFUnited this year, in which I will cover the OWASP Top 10 Vulnerabilities and how they specifically relate to ColdFusion-based applications.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654130">12</a> by Adrock
		posted on 6/15/2006 at 12:43 AM
		</div>
		<div class="comment_text"><p>I work for DoS and ours is slightly different, but very similar.</p><p>- 8 character minimum<br>- Must be changed every 90 days<br>- Must meet at least 3 of the following:<br>1. 1 Lowercase<br>2. 1 Uppercase<br>3. 1 Number<br>4. 1 Special Char</p><p>As far as users having problems remembering these types of passwords, I've definitely run into this issue before (especially when the system generates the password). I wrote a Password.cfc that is configured with a single xml file that will pull from X word pools (usually a noun &amp; adjective), apply a few basic special char transforms, and if necessary, tag a number on the beginning.</p><p>The result is some pretty ridiculous passwords that are easy to remember (based on your own creativity) like:</p><p>AngryBadg3r<br>SecrectSl0th<br>Rab!dFerret<br>RubyDr@gon</p><p>Feel free to send me an email (adrocknaphobia/gmail) if you'd like a copy of the CFC. You can tweak it to meet your own complexity.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654131">13</a> by Raymond Camden
		posted on 6/15/2006 at 12:46 AM
		</div>
		<div class="comment_text"><p>Ok guys, comment time. Remember, this is meant to be a HIGH LEVEL checklist. Not a book. Something a manager could hand out to his/her team to ensure they are following the basics. (And the sad thing is that not many people do follow the basic.)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Fcoldfusionsecuritychecklist.cfm%3A4KrOKjoA6q0QvnZv2BwADxiV7Qs&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/coldfusionsecuritychecklist.cfm">http://ray.camdenfamily.com...</a></p><p>Unless there are serious objections, I'll post the link and an blog entry tonight.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654134">14</a> by Brian
		posted on 6/15/2006 at 1:36 AM
		</div>
		<div class="comment_text"><p>Ray, considering what you've preached before, i'd say "scope your vars" belongs on that list</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654138">15</a> by Raymond Camden
		posted on 6/15/2006 at 1:42 AM
		</div>
		<div class="comment_text"><p>What do you mean? I've preached on var scoping, but I wouldn't consider it a security issue. Do you mean like url.x versus form.x? Again, I'm not quite sure I consider that security. It is preferred, yes, and a "best practice", but I want this checklist to be -very- concise.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654133">16</a> by Scott Krebs
		posted on 6/15/2006 at 2:00 AM
		</div>
		<div class="comment_text"><p>A few things:<br>First, I think it should be *explicitly* stated under "Validate Input Parameters" that this be done using server-side code. While it may seem obvious, you'd be (well maybe not) surprised at how many developers use JavaScript and only JavaScript to validate form input on the client side and they subsequently treat that input as trusted. We had a client just last week that had some old ASP pages SQL-injected because of this very thing.</p><p>For putting username/password in cfquery and not in the DSN on shared servers, it should be noted that if cfdirectory and cffile are enabled on the server this approach only makes it less convenient for a malicious person sharing your machine to use your DSN (by harvesting your username/password right out of your code). Putting username/password in cfquery makes it available in plain text to anyone willing to look through your files, by putting it in the DSN at least CFMX encrypts the password in the XML file it's stored in. So, pick your poison. I know of many instances where the user/pass for the DSN matches the FTP user/pass 'cuz it's just easier that way. If someone is one of those people, maybe it's not so good having that info in the cfquery tag. Really and truly on shared service without sandboxing you have very little security measures that cannot be defeated by an enterprising and savvy evil-doer with FTP access to some folder under the web root where they can upload and run cfm pages. As written, the section may give users a false sense of security. If one requires real security there is no substitute for a dedicated server (or a crippled shared server where tags like cffile and cfdirectory are disabled). Related point: your DSN authentication information should not match any other authentication information for other services. Again, this may seem obvious but I *know* it happens.</p><p>Perhaps it wouldn't hurt to mention something about encrypting credit card numbers when stored to a database. Yet another observation from the trenches - it's surprising how many sites store unencrypted card numbers. Just like the username/password thing above, on shared service the encryption method can be discovered and foiled/deconstructed but it is one more step of difficulty. I realize this isn't CF-specific, so maybe it's not appropraite for your concise list.</p><p>That's all for now, I'll let you know if I think of anything else that might bear mentioning.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654135">17</a> by Edward T
		posted on 6/15/2006 at 2:07 AM
		</div>
		<div class="comment_text"><p>Ray, are you attempting to put together a CF-specific security checklist rather than general web development list?  For example, you don't mention anything about not passing sensitive data in the URL or cookies; too general, or just too obvious to mention?  A typical security error is not checking for rights each time the site accesses restricted data (e.g., checking only on login).  But that is architectural, and not specific to CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654136">18</a> by Raymond Camden
		posted on 6/15/2006 at 2:08 AM
		</div>
		<div class="comment_text"><p>Scott, good comments. Please reload.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654137">19</a> by Raymond Camden
		posted on 6/15/2006 at 2:08 AM
		</div>
		<div class="comment_text"><p>Edward, yes, CF specific, and again, not completely exhaustive per se, but the major things.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654140">20</a> by Tom Mollerus
		posted on 6/15/2006 at 8:13 AM
		</div>
		<div class="comment_text"><p>Ray, this is a great list so far.  I have one suggested modification and one suggested addition:</p><p>-- I'd suggest that you make the second section on dynamic queries more generic, because it's not always feasible to use &amp;lt;cfqueryparam&amp;gt; (say, if you want to cache a query). Instead, I think you could write that developers always use Val() on numbers or &amp;lt;cfqueryparam&amp;gt; on all variables.</p><p>-- I'd suggest that you add a section saying that users should keep all sensitive files out of the webroot, serving them with &amp;lt;cffile&amp;gt; to authorized users (and don't let the user specify the filepath!). I've found web sites where a previous developer put Access databases right in the web root for anyone to download.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654143">21</a> by Tom Mollerus
		posted on 6/15/2006 at 8:19 AM
		</div>
		<div class="comment_text"><p>To be a little finicky, I might also suggest that the last section on using encryption could be more generic as well-- it's a great idea to encrypt information in your database, but it should also be a requirement to encrypt that same information in transit between the client and server. For instance, a form that passes credit card information or login credentials should always be protected by SSL.</p><p>While I'll admit that it's still a heck of a lot harder to steal such information in transit than it is to steal it out of a database, it's getting *easier* to do so with the proliferation of public wireless networks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654147">22</a> by Raymond Camden
		posted on 6/15/2006 at 3:23 PM
		</div>
		<div class="comment_text"><p>To your first comment. Part 1: I disagree. I would much rather a developer not using caching and use cfqueryparam. As it stands, you can easily write your own code to cache it, even if it is just, if not isdefined(myquery), etc.</p><p>Second point. I agree. I added it to the list.</p><p>Your second comment: I see this... but I'm trying to keep things at a CF level only. I mean, for example, if I were doing web server level I'd mention the obvious "Turn directry browsing off".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654146">23</a> by Tom Mollerus
		posted on 6/15/2006 at 5:13 PM
		</div>
		<div class="comment_text"><p>Ray, that's an interesting argument about wanting developers to use cfqueryparam instead of caching queries-- it hadn't occurred to me that you could use parameters and just cache the result in some other fashion. I have the impression that I'm saving more CPU time in the long run by caching a query than I am by passing parameters to a query run multiple times, so I'd like to discuss your rationale further and see what I can learn. Consider posting it as a separate topic sometime, if you think it's worth it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654148">24</a> by Raymond Camden
		posted on 6/15/2006 at 5:23 PM
		</div>
		<div class="comment_text"><p>I may not have been clear. If I _had_ to choose btw cfqueryparam and caching, I'd choose cfqueryparam as it adds security and it does make the query faster. What I meant to say though was that you can use cfqueryparam and your OWN caching. So you get both. I know that CF's built in caching is nice, but it isn't worth it to lose cfqueryparam. So if you need to cache the query just use a peristent scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654152">25</a> by Scott Krebs
		posted on 6/15/2006 at 8:31 PM
		</div>
		<div class="comment_text"><p>Any reasonable DBMS should be caching the query execution plan anyway, so the performance hit of using cfqueryparam over a cached query should be minimal in all but the most extreme situations. I'm with Ray, IMHO bulletproof code is more important than taking it easy on the hardware. If you've got so much traffic that caching queries makes a difference then we need to discuss a clustered environment for you. ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654150">26</a> by Tom Mollerus
		posted on 6/15/2006 at 10:11 PM
		</div>
		<div class="comment_text"><p>Scott, I disagree with your contention that "...the performance hit of using cfqueryparam over a cached query should be minimal in all but the most extreme situations." Even if a query plan is cached, you can still save the execution time of 10 - 100 milliseconds if you cache the query-- and that's far from an "extreme" situation.  Any content site or web application that makes a reasonably complex query still has overtime for the query itself.  I'll save a few milliseconds for my users.  ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654153">27</a> by Raymond Camden
		posted on 6/15/2006 at 10:15 PM
		</div>
		<div class="comment_text"><p>Guys, I think we are arguing over something that we should not be. Using queryparam does NOT mean you aren't caching your query. Using queryparam means you can't use the simple, built in, caching. You can easily write your own caching mechanism and get BOTH benefits.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654149">28</a> by charlie arehart
		posted on 6/16/2006 at 7:22 AM
		</div>
		<div class="comment_text"><p>I know the comments have gotten off-topic, but I'd like to point out that BlueDragon does indeed let you use CFQUERYPARAM in a cached query. Maybe we can hope that that can be added to CFMX 8. Would sure stop the argument--and help those who want to use the two features together.</p></div>
	</div>
</div>
		