
<div class="comment" id="c_1713681693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681693">1</a> by Rick Smith
		posted on 6/12/2008 at 6:20 PM
		</div>
		<div class="comment_text"><p>[quote]If you look at CFLib you will notice no .cfm or url parameters anywhere in sight. This wouldn't be possible (as far as I know) with just ColdFusion itself.[/quote]</p><p>So how did you accomplish that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681696">2</a> by Raymond Camden
		posted on 6/12/2008 at 6:24 PM
		</div>
		<div class="comment_text"><p>IIRF. Free URL rewriter plugin for IIS. I also used that on <a href="http://disq.us/url?url=http%3A%2F%2FColdFusionCookbook.com%3AASY4DJ3fACpaPLe1f3OUhI5jvAQ&amp;cuid=3321886" rel="nofollow noopener" title="ColdFusionCookbook.com">ColdFusionCookbook.com</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681694">3</a> by Misha
		posted on 6/12/2008 at 6:54 PM
		</div>
		<div class="comment_text"><p>Another way how is possible using only CF:</p><p>Custom Tag:<br>*******************************************************<br>&lt;CFSET strPos = Find('.cfm/', '#CGI.PATH_INFO#', 2)&gt;<br>&lt;CFIF strPos&gt;<br>&lt;CFSET n = Len(CGI.PATH_INFO) - strPos - 4&gt;<br>&lt;CFIF n GT 0&gt;<br>&lt;CFSET URL_QUERY_STRING = ""&gt;			<br>&lt;CFSET str = Right('#CGI.PATH_INFO#', Len('#CGI.PATH_INFO#') - strPos - 4)&gt;<br>&lt;CFSET num = 0&gt;<br>&lt;CFLOOP INDEX="loop" LIST="#str#" DELIMITERS="/"&gt;<br>&lt;CFIF num&gt;<br>&lt;CFSET num = 0&gt;<br>&lt;CFTRY&gt;<br>&lt;CFSET "URL.#mem#" = loop&gt;<br>&lt;CFSET URL_QUERY_STRING = ListAppend(URL_QUERY_STRING,"#mem#=#loop#","&amp;")&gt;<br>&lt;CFCATCH TYPE="Any"&gt;<br>&lt;/CFCATCH&gt;<br>&lt;/CFTRY&gt;<br>&lt;CFELSE&gt;<br>&lt;CFSET num = 1&gt;<br>&lt;/CFIF&gt;<br>&lt;CFSET mem = loop&gt;<br>&lt;/CFLOOP&gt;</p><p>&lt;CFSET QUERY_STRING = URL_QUERY_STRING&gt;<br>&lt;CFSET CALLER.URL_QUERY_STRING = URL_QUERY_STRING&gt;<br>&lt;CFSET CALLER.QUERY_STRING = URL_QUERY_STRING&gt;</p><p>&lt;/CFIF&gt;<br>&lt;/CFIF&gt;<br>**************************<br>in Application.cfm file put:</p><p>&lt;CF_URLARGS struct="URL"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681697">4</a> by Raymond Camden
		posted on 6/12/2008 at 7:01 PM
		</div>
		<div class="comment_text"><p>Misha - no one denies you can't do it in CF. The point was - whats the differences. As my blog says, you can do it a bit better if you do it at the server level.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681695">5</a> by Dan
		posted on 6/12/2008 at 7:04 PM
		</div>
		<div class="comment_text"><p>I'm the one who originally asked the question...</p><p>My current apache setup uses the following rewrite:</p><p>RewriteEngine on<br>RewriteCond E:/directory/%{REQUEST_FILENAME} !-f [NC]<br>RewriteCond E:/directory/%{REQUEST_FILENAME} !-d [NC]<br>RewriteCond E:/directory/%{REQUEST_FILENAME} !-l [NC]<br>RewriteRule /([A-Za-z0-9-]+)/(.*) /$1.cfm?param=$2 [L,PT]</p><p>It seems to be working pretty well, as it only rewrites if a real file does not exist at the path you specify.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681704">6</a> by Justin
		posted on 6/12/2008 at 7:16 PM
		</div>
		<div class="comment_text"><p>Misha -</p><p>That requires a cfm page to process. It would be great if we didn't need the index.cfm.</p><p>There are a lot of SES rewriters out there. Fortunately, it gets easier, more robust, and standardized the more we go along. ColdBox has excellent SES tooling and documentation.</p><p>More on par with the post, another situation is whenever you have administrators that use IIS and are afraid of url rewriting plugins. Furthermore, without having control over the plugin or Apache because of separation of duties or departments, would you want to develop applications that rely on it? More "it depends" situations.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681701">7</a> by Todd Rafferty
		posted on 6/12/2008 at 7:29 PM
		</div>
		<div class="comment_text"><p>Not sure if anyone saw this, but MS finally started supporting a rewrite module:<br><a href="http://disq.us/url?url=http%3A%2F%2Flearn.iis.net%2Fpage.aspx%2F460%2Fusing-url-rewrite-module%2F%3A93quyQemnOCt8tMA1bQKPCAlhdc&amp;cuid=3321886" rel="nofollow noopener" title="http://learn.iis.net/page.aspx/460/using-url-rewrite-module/">http://learn.iis.net/page.a...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681706">8</a> by Raymond Camden
		posted on 6/12/2008 at 7:37 PM
		</div>
		<div class="comment_text"><p>Wow. Next thing you know they will (easily) support virtual hosts on the non-Server edition. Then pigs will fly...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681709">9</a> by Jeremy Prevost
		posted on 6/12/2008 at 7:47 PM
		</div>
		<div class="comment_text"><p>@Todd. I had missed that and it's good to finally see, but it's disappointing to see they made a mod_rewrite importer rather than just supporting the gosh darn mod_rewrite syntax directly. &lt;sigh&gt;.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681782">10</a> by John
		posted on 6/12/2008 at 8:31 PM
		</div>
		<div class="comment_text"><p>While we're on the subject (and since I'm not a regex guru), could someone please explain how to translate the following with IIRF?</p><p>folder/id/000<br>into<br>folder/scriptname.cfm?id=000<br>(scriptname may be index.cfm or otherscriptname.cfm, with an occasional &amp;subid=000)</p><p>I've been futzing around with IIRF for a couple of hours now and I haven't been able to get it working.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681780">11</a> by Raymond Camden
		posted on 6/12/2008 at 8:35 PM
		</div>
		<div class="comment_text"><p>This should do it.</p><p>RewriteRule /folder/id/([0-9]+) /folder/scriptname.cfm\?id=$1</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681776">12</a> by James Moberg
		posted on 6/12/2008 at 8:50 PM
		</div>
		<div class="comment_text"><p>I used IIRF on a project and then had to move the CF-driven website to another web server that didn't have IIRF installed.  It was a pain researching a new method just because of a server change.</p><p>As a result, I do it primarily with CF only so that I don't have to revisit this problem ever again.</p><p>I'm using "index.cfm" and then appending extra data to the end of it.  I have a custom UDF to ensure that all dynamically generated SES data is SES safe.</p><p>For an example of what I'm doing, check out:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.hulaisland.com%2F%3ASWdmnyDxVb87o4vbRidqP_5O5us&amp;cuid=3321886" rel="nofollow noopener" title="http://www.hulaisland.com/">http://www.hulaisland.com/</a></p><p>Everyone should review their logfiles when setting this up.  I had to write my own logging tool since IIS isn't capable of logging anything that isn't the actual script name or CGI parameter.  (In other words, all page views are logged by IIS as "/index.cfm" with no additional information.)</p><p>Ray, how do the log files look using SES URLs on Apache?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681779">13</a> by Raymond Camden
		posted on 6/12/2008 at 9:54 PM
		</div>
		<div class="comment_text"><p>James - the logs look like you would expect - the SES urls. You can additionally do logging for SES as well to log the rules run, etc. Useful for debugging.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681772">14</a> by John
		posted on 6/12/2008 at 10:12 PM
		</div>
		<div class="comment_text"><p>Thanks for the sample Ray.  I was able to get it working with just a quick change to accommodate alphas &amp; periods.  It didn't play too well with my existing SES code, which kept "index.cfm" in the URL, so I killed that :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681774">15</a> by Jake Munson
		posted on 6/12/2008 at 10:44 PM
		</div>
		<div class="comment_text"><p>"As my blog says, you can do it a bit better if you do it at the server level."</p><p>It seems to me that ColdFusions functions combined with regex...you can't get more powerful than that.  So I'm curious how the web server can do it better.  I am not disagreeing, I'm just wondering if I'm missing out on something...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681778">16</a> by Raymond Camden
		posted on 6/12/2008 at 10:50 PM
		</div>
		<div class="comment_text"><p>With CF, you can't have a URL w/o index.cfm in it. I'd have to do URLs like you see in the blog here (index.cfm/etc) as opposed to urls you see at cflib. That isn't the end of the world of course, but if you want 100% control, you have to go out of CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681783">17</a> by James Moberg
		posted on 6/12/2008 at 11:33 PM
		</div>
		<div class="comment_text"><p>Yeah... the "dot-in-path" because of "index.cfm" can sometimes be a showstopper with IIS depending upon how IIS lockdown is configured.<br><a href="http://disq.us/url?url=http%3A%2F%2Fsupport.microsoft.com%2Fkb%2F309677%3ATgpnvq-qNyHPyr45Ms5k8Cn22Ao&amp;cuid=3321886" rel="nofollow noopener" title="http://support.microsoft.com/kb/309677">http://support.microsoft.co...</a></p><p>The reasons I prefer using CF for this is because it can sometimes do things that the server can't do.  For example, URL rewriters are incapable of performing non-WWW functions like querying a database to check if an IP is in a dynamic blacklist.</p><p>It also allows our team to quickly add new rules without having to additionally mess with a sensitive server-wide configuration file.  (Sometimes a development team may not even have access to to this or has to rely on a third-party to make the changes.)</p><p>That being said, I also depend heavily on IIRF to block access to non-CF resources in directories based on static access rules.  Any unauthorized users get an authentic 404 Page Not Found error and not just a "200" status with a page that states "Not Found".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681773">18</a> by Elliott Sprehn
		posted on 6/13/2008 at 11:46 PM
		</div>
		<div class="comment_text"><p>"The reasons I prefer using CF for this is because it can sometimes do things that the server can't do. For example, URL rewriters are incapable of performing non-WWW functions like querying a database to check if an IP is in a dynamic blacklist."</p><p>This isn't actually true, as apache's mod_rewrite allows you to callback into an arbitrary process on the server. See the RewriteMap directive and the sample perl program.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fhttpd.apache.org%2Fdocs%2F1.3%2Fmod%2Fmod_rewrite.html%23mapfunc%3A72ofqVW1fTvWP758_YA0TZJxorE&amp;cuid=3321886" rel="nofollow noopener" title="http://httpd.apache.org/docs/1.3/mod/mod_rewrite.html#mapfunc">http://httpd.apache.org/doc...</a></p><p>A simple program written in perl could very easily hit the CF server (or just the database directly) to figure something about the rewriting out.</p><p>I created a CF version of the Pylons routing engine for our sites, soon to be open sourced along with the rest of our web platform. It's quite powerful, and features a route to regexp compiler (not just an interpreter like ColdCourse) and a comprehensive routing system (essentially does everything Pylons routed does and several CF specific features).</p><p><a href="http://disq.us/url?url=http%3A%2F%2Froutes.groovie.org%2F%3AQ4kdYFvQS3g0neqdvbstofvOB00&amp;cuid=3321886" rel="nofollow noopener" title="http://routes.groovie.org/">http://routes.groovie.org/</a><br><a href="http://disq.us/url?url=http%3A%2F%2Froutes.groovie.org%2Fmanual.html%3A6zP_1MNQy05-KquSSV5a6beKx_k&amp;cuid=3321886" rel="nofollow noopener" title="http://routes.groovie.org/manual.html">http://routes.groovie.org/m...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681793">19</a> by James Moberg
		posted on 6/14/2008 at 12:35 AM
		</div>
		<div class="comment_text"><p>While it may not be true specifically for Apache's mod_rewrite, it is true for many other URL Rewriters like Ionic's ISAPI Rewrite Filter (IIRF), UrlRewriter.NET, ISAPI_Rewrite and IISRewrite.</p><p>How much overhead is added to a request when using rewrite, perl, cf+db?</p><p>Rewriting modules can sometimes be specific to certain server configurations or be cost prohibitive regarding licensing.  Using "CF only" has not hurt any of my clients positioning in search engines and makes it extremely easy to add new portable rewrite rules.  ("Portable" meaning that no additional third party tools would be required if the web application were moved to another hosting environment.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681777">20</a> by justin
		posted on 6/14/2008 at 12:43 AM
		</div>
		<div class="comment_text"><p>The real annoying problem is index.cfm. If only i.cfm could be automatically recognized by default! That would sweeten the CF only   pot by at least 50%.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681781">21</a> by Raymond Camden
		posted on 6/14/2008 at 12:46 AM
		</div>
		<div class="comment_text"><p>@justin: Eh? All web servers let you specify a default page. You can easily say i.cfm is your default index page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681786">22</a> by James Moberg
		posted on 6/14/2008 at 12:48 AM
		</div>
		<div class="comment_text"><p>Unfortunately the URL has to have .cfm in the name (or another mapped extension) or ColdFusion won't parse the template.</p><p>CFMX already does some hidden URL rewriting of it's own when it comes to CFGraph and the non-existent "/CFIDE/GraphData.cfm" file.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bpurcell.org%2Fblog%2Findex.cfm%3Fmode%3Dentry%26entry%3D998%3AFPgaRU66XMMV0AoPmvjNcE13L2g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bpurcell.org/blog/index.cfm?mode=entry&amp;entry=998">http://www.bpurcell.org/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681787">23</a> by Jeremy Prevost
		posted on 6/14/2008 at 12:50 AM
		</div>
		<div class="comment_text"><p>@ James: This discussion mostly comes down to URL aesthetics.</p><p>Which looks better:</p><p>1) <a href="http://disq.us/url?url=http%3A%2F%2Fwww.site.com%2F2008%2F01%2F01%2FBlog-Entry-About-Cool-Stuff%3APENZPLofq7u_8cARaNTvLOXQNdU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.site.com/2008/01/01/Blog-Entry-About-Cool-Stuff">http://www.site.com/2008/01...</a></p><p>2) <a href="http://disq.us/url?url=http%3A%2F%2Fwww.site.com%2Findex.cfm%2F2008%2F01%2F01%2FBlog-Entry-About-Cool-Stuff%3AhSqaYPPNJFIzDdrget1urBamRlM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.site.com/index.cfm/2008/01/01/Blog-Entry-About-Cool-Stuff">http://www.site.com/index.c...</a></p><p>As Ray stated, OpenSource apps should likely choose #2 to ensure they can be run everywhere. Any app I write in house uses #1.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681784">24</a> by Jeremy Prevost
		posted on 6/14/2008 at 12:55 AM
		</div>
		<div class="comment_text"><p>@ James: uh. sorry, I left out the part I meant to type after @James. Here it is:<br>"How is Apache and mod_rewrite, a free solution on any sane OS server choice cost-prohibitive?"</p><p>The other stuff was just part of the general conversation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681788">25</a> by James Moberg
		posted on 6/14/2008 at 1:07 AM
		</div>
		<div class="comment_text"><p>I wasn't directing my comments to the free Apache administrators.</p><p>I'm not running under the assumption that not all ColdFusion-driven websites are running on top of Apache.  I'm not using Apache and cannot use mod_rewrite... and I'm guessing it's possible that there may be others out there in the same boat.  I've done the research for IIS and many rewrite APIs are licensed "per hostname" and some of them don't even work that well.</p><p>I'm sorry if you thought I was dissing Apache.  I'm in a love/hate relationship with Microsoft.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681795">26</a> by Raymond Camden
		posted on 6/14/2008 at 1:36 AM
		</div>
		<div class="comment_text"><p>IIRF is for IIS and it's 100% free. For as many hosts as you want.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681790">27</a> by Elliott Sprehn
		posted on 6/14/2008 at 1:46 AM
		</div>
		<div class="comment_text"><p>@james</p><p>ISAPI_Rewrite and mod_rewrite for IIS both support RewriteMap, and CF can easily generate a flat text file that they use, and update it meaning you're not burning any http requests with the round trip for rewriting.</p><p>Round trip through perl, cf and the db might be unacceptably slow if you don't do any caching (seriously, why wouldn't you?).</p><p>UrlRewriter.NET allows you to easily call any .NET code so that works fine too.</p><p>And yes, our rewriting engine is CF only. We use a free rewriter to pass the entire path_info to CF where it uses the routing engine to process and figure out what to do. The overhead is effectively nil for both the rewriting and the url generation with caching enabled. If you're on a server without rewrite support you just tell it to prefix with the script name.</p><p>@Jeremy</p><p>I don't see any reason that Open Source apps shouldn't all provide a way to choose one or the other.</p><p>---</p><p>As an aside, I really really don't get why this is such a huge issue in the CF community. Every other major language + platform supports pretty URLs now. Pylons, Django, Rails, Grails, TurboGears, Symfony, Plone, CodeIgniter, CakePHP, ...</p><p>Everyone remember this argument: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.pbell.com%2Findex.cfm%2F2006%2F10%2F19%2FModel-Glue-SES-URLs-and-SES-in-frameworks-in-general%3AmJ9_QWeiWFsOaSKJCbjw-fb2JgE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.pbell.com/index.cfm/2006/10/19/Model-Glue-SES-URLs-and-SES-in-frameworks-in-general">http://www.pbell.com/index....</a></p><p>Now they kind of support it, though...</p><p>index.cfm/year/2008/month/6/day/12/name/Ask-a-Jedi-... is not the same as proper routing...</p><p>This is the kind of stuff that makes us look behind the curve to other communities and to the younger generation (college students, young startups, kids doing the "cool" stuff) when you try and sell CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681785">28</a> by Raymond Camden
		posted on 6/14/2008 at 1:57 AM
		</div>
		<div class="comment_text"><p>Elliot - are you saying PHP has the ability to work with no file extensions? Ie, I can do</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fserver.com%2Ffoo%2Fmoo%3Angi57HrsHTjn8WxkR8-P6I2dH6I&amp;cuid=3321886" rel="nofollow noopener" title="server.com/foo/moo">server.com/foo/moo</a></p><p>And PHP can correctly process that? (Of course I'm implying foo and moo don't exist as folders.) I didn't think PHP could do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681792">29</a> by Elliott Sprehn
		posted on 6/14/2008 at 2:04 AM
		</div>
		<div class="comment_text"><p>@Ray</p><p>Certainly not. I was talking about frameworks (which are what I listed). That's why I said language + platform. Sorry if I wasn't clear.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681789">30</a> by James Moberg
		posted on 6/14/2008 at 2:09 AM
		</div>
		<div class="comment_text"><p>@Raymond:  I use IIRF and think it's the best free solution for IIS.</p><p>@Elliot:  If you re-read my posts, you'll see why I'm doing it.  Some of the projects that I develop get re-sold and migrated to different hosting environments that don't share the same OS, web server, CF rendering engine or version or database.  For the applications I've written, it's critical that they be able to be configured in different environments with as little third-party impact (and personal involvement) as possible.</p><p>I agree wholeheartedly with what you are saying and would love to implement it in all projects... I just don't have the time and ability to figure out the best way to do it in multiple environments that I do not have access to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681791">31</a> by Brad Fraser
		posted on 6/16/2008 at 11:09 PM
		</div>
		<div class="comment_text"><p>What is the best way to do this with just Coldfusion?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681794">32</a> by Raymond Camden
		posted on 6/16/2008 at 11:36 PM
		</div>
		<div class="comment_text"><p>Not sure if this is the 'best', but it's my take on it.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2005%2F8%2F2%2FAsk-a-Jedi-Working-with-SES-URLs-and-ColdFusion%3Aajh71ioaKTUei1xyyofb8Sp18K8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2005/8/2/Ask-a-Jedi-Working-with-SES-URLs-and-ColdFusion">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681796">33</a> by Omer
		posted on 11/25/2008 at 12:49 AM
		</div>
		<div class="comment_text"><p>I am trying to create URL in the same way as you do in your blogcfc appplication like having publishing date and then title in the URL. The problem I am facing is that how you handle the passing of entryid by clicking through a link as I am not able to see entryid anywhere in the URL. In my application, I just have to pass MediaID. When I have the MediaID, I can grab the record information through a query. Please help me in this. I would greatly appreciate your time in this regard.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681801">34</a> by Raymond Camden
		posted on 11/25/2008 at 5:41 PM
		</div>
		<div class="comment_text"><p>I just used the CGI scope. When you have a url like so:</p><p>index.cfm/foo/goo/moo</p><p>The stuff after the file name end up in CGI.PATH_INFO. Try cfdumping CGI and you will see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681800">35</a> by Adam Polon
		posted on 1/23/2009 at 7:57 PM
		</div>
		<div class="comment_text"><p>Hi guys,</p><p>Figured I'd add my 2 cents to Raymond's comment stating that you would need to include index.cfm in your URL in order to have CF process the SES URL.</p><p>A solution to this is to set the 404 error handler in IIS to point to a CF file (like /404.cfm).  From there, you can then use CF to process the data however you like.  Note that the url requested by the user is accessible in the query_string.  It comes across like this:</p><p>QUERY_STRING=404;<a href="http://disq.us/url?url=http%3A%2F%2Fwww.mysite.com%2Fresearch%3AtxTNyRQhdMgC9t_x34pcfzIOSQ8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mysite.com/research">http://www.mysite.com/research</a></p><p>With a few lines of code, it's easy to figured out what the user actually requested and process accordingly.</p><p>From there, the following would be very easy to handle in different ways.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.mysite.com%2FaboutUs%3AxQ2zJPMu91inNUiTt9L9dnBAh0o&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mysite.com/aboutUs">http://www.mysite.com/aboutUs</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.mysite.com%2FcontactUs%3AVoMu3AZtkR_Qyz_9t4u7WsQPowQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mysite.com/contactUs">http://www.mysite.com/conta...</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.mysite.com%2Fsurveys%2FSurvey1%3Av3g1mw58YHVd8DBzinkFVIzGiOw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mysite.com/surveys/Survey1">http://www.mysite.com/surve...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.mysite.com%2Fsurveys%2FSurvey2%3ARVv6mrz66dgjiSOGZv78N2otJ5Q&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mysite.com/surveys/Survey2">http://www.mysite.com/surve...</a></p><p>Hope this helps,<br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681802">36</a> by Raymond Camden
		posted on 1/23/2009 at 7:59 PM
		</div>
		<div class="comment_text"><p>I'd argue though that if you have IIS admin access you could simply use a 'real' rewriter like IIRF. Then again, some hosts _do_ give you a 404 handler. Good comment, Adam.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681803">37</a> by Danny
		posted on 7/14/2010 at 8:37 AM
		</div>
		<div class="comment_text"><p>How would i go about making a search engine like the one on the nvidia site?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.nvidia.com%2FDownload%2Findex.aspx%3Flang%3Den-us%3AUaDaK1pJxnCjHvniXLPam8CLbak&amp;cuid=3321886" rel="nofollow noopener" title="http://www.nvidia.com/Download/index.aspx?lang=en-us">http://www.nvidia.com/Downl...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681806">38</a> by Raymond Camden
		posted on 7/14/2010 at 5:17 PM
		</div>
		<div class="comment_text"><p>Can you please explain what you mean specifically? Does it apply to the topic at hand?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681804">39</a> by Danny
		posted on 7/14/2010 at 6:48 PM
		</div>
		<div class="comment_text"><p>Ya sorry. I'm fairly new to CF and needed to make a search engine like the one on the nvidia site. I tired setting it to when someone chooses one variable from the first box the next one will show the corresponding info. For example: someone chooses the state in the first box the second one will show the corresponding cities. Hope that makes sense.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681805">40</a> by Raymond Camden
		posted on 7/14/2010 at 6:55 PM
		</div>
		<div class="comment_text"><p>Sure, it makes sense, but isn't really relevant to this blog entry. CF makes 'related' items via Ajax pretty easy. I'd google for that first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681807">41</a> by Alec E.
		posted on 10/26/2010 at 1:16 AM
		</div>
		<div class="comment_text"><p>I know this is an old post, but I just wanted to thank everyone who has contributed, especially Adam and Raymond.  Without Adam's tip to use the 404 handler in IIS I would be stuck with index.cfm in my SES URL's. Sadly my host doesn't support any IIS mods without literally multiplying my hosting bill 6x higher than it already is, and it really bugged me that PHP and Apache (namely Wordpress) created nicer URLs. It's a Coldfusion pride thing! Anyhow after some tinkering and false starts, I managed to get everything working and now my coldfusion based CMS software has pretty URLs! Oh happy day!!!!  Thanks again!!!</p></div>
	</div>
</div>
		