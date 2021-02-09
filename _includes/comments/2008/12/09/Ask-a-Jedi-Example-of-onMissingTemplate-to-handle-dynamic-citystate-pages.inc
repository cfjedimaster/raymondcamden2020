
<div class="comment" id="c_1713710561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710561">1</a> by Dave Dugdale
		posted on 12/9/2008 at 11:56 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks for answering my question!</p><p>I really like your idea of using the onMissingTemplate method.</p><p>I have my own dedicated IIS box (with CF8) so the URL re-writer idea gets really complicated since I am not very good at writing regular expressions.</p><p>Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710568">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710568">2</a> by Michael
		posted on 12/10/2008 at 12:41 AM
		</div>
		<div class="comment_text"><p>I actually do this method in another way using</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.example.com%2Fc.cfm%2FState%2FCity%3A_xy4TIAW-sqUk_k1KinxFlkm5tA&amp;cuid=3321886" rel="nofollow noopener" title="www.example.com/c.cfm/State/City">www.example.com/c.cfm/State...</a></p><p>with c.cfm parsing out State and City off of it</p><p>The following function will get the State/City and then I can convert a List with the delimiter of / to an array and get the data off of this.</p><p>&lt;cffunction name="getRHS"&gt;<br>	&lt;cfset path = cgi.PATH_INFO&gt;<br>	&lt;cfset filename = cgi.script_name&gt;</p><p>	&lt;cfif not findnocase(filename,path) &gt;<br>		&lt;cfif len(path) gt 1&gt;<br>			&lt;cfset path = right(path,len(path)-1)&gt;<br>		&lt;cfelse&gt;<br>			&lt;cfset path = " "&gt;<br>		&lt;/cfif&gt;<br>	&lt;cfelse&gt;<br>		&lt;cfif len(path) gt len(filename)&gt;<br>			&lt;cfset path = right(path,len(path)-len(filename))&gt;<br>		&lt;cfelse&gt;<br>			&lt;cfset path = ""&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfif&gt;<br> &lt;cfreturn path&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710567">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710567">3</a> by TJ Downes
		posted on 12/10/2008 at 12:47 AM
		</div>
		<div class="comment_text"><p>Nice post Ray!</p><p>Also, IIS7 has a built-in URL Rewrite. Finally.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710566">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710566">4</a> by Dave Dugdale
		posted on 12/10/2008 at 3:20 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I just added the files to my server and it worked perfectly.</p><p>Now I have to remember how the hierarchy works for the Application.cfc since i placed your files in a sub folder.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710570">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710570">5</a> by ajm
		posted on 12/10/2008 at 4:15 AM
		</div>
		<div class="comment_text"><p>So is this a reasonable alternative to URL Rewrite? Could use use this to handle SES URLs on your site, say if you are on shared hosting?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710569">6</a> by Raymond Camden
		posted on 12/10/2008 at 4:18 AM
		</div>
		<div class="comment_text"><p>Yes, if you are ok with .cfm being in the url someplace. If not, you need to get a rewriter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710572">7</a> by Matt Ondrey
		posted on 12/10/2008 at 6:22 AM
		</div>
		<div class="comment_text"><p>On my old IIS sites I remap the 404 pages to a template that handles these types of requests since at the time I didn't know about any rewrite options.</p><p>When the template can't find any relevant content it sends a 404 via cfheader statuscode so that the search engines don't think I'm running a spam doorway site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710571">8</a> by Steve Withington
		posted on 12/10/2008 at 10:48 AM
		</div>
		<div class="comment_text"><p>is this information being stored/pulled from any database on the back end?  if so, why not simply use URL variables along the lines of "/index.cfm?state=louisiana&amp;city=lafayette" which would still be pretty seo-friendly too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710573">9</a> by Anthony
		posted on 12/10/2008 at 2:00 PM
		</div>
		<div class="comment_text"><p>I wonder what the performance implications are of using onMissingTemplate over using URLRewrite? Speed, throughput, etc?  Anyone out there able to speak to this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710576">10</a> by Raymond Camden
		posted on 12/10/2008 at 4:53 PM
		</div>
		<div class="comment_text"><p>@SW: Yes, the idea is that the city info is stored in the db, and you take the url params and look them up.</p><p>So sure, the non short version of the URL isn't so bad. I'm no SEO expert of course. I will say that it is less typing to do /state/city and it is something a non-techy would easier be able to remember.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710579">11</a> by Beth
		posted on 12/10/2008 at 6:10 PM
		</div>
		<div class="comment_text"><p>What happens if there isn't a template for the city?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710580">12</a> by Raymond Camden
		posted on 12/10/2008 at 6:16 PM
		</div>
		<div class="comment_text"><p>Well, now we are getting into something specific to his application, and less about the concept in general. The original author would have to say what to do. I'd guess though that you could simply forward to badcity.cfm, a page that says 'The city you wanted doesn't exist.'</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710577">13</a> by Dave Dugdale
		posted on 12/11/2008 at 11:21 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>For some reason I am having a tough time transferring my old Application.cfm to the new Application.cfc so I can use your cool onMissingTemplate idea for my URL structure.</p><p>The first thing I am trying to transfer over is the variables that are shared among all pages and all visitors of my site.</p><p>So I thought onApplicationStart function would be the best use for my global variables such as company name, but I can't get it to work.</p><p>Application.cfc file:</p><p>&lt;cfcomponent output="false"&gt;</p><p> &lt;cffunction name="onApplicationStart" returnType="boolean" output="true"&gt;<br>  &lt;cfset Application.companyname = "Joes Diner"&gt;</p><p>  &lt;cfreturn true&gt;<br> &lt;/cffunction&gt;</p><p>&lt;/cfcomponent&gt;</p><p>Normal template:</p><p>&lt;cfoutput&gt; #Application.companyname#&lt;/cfoutput&gt;</p><p>But I get this error when running the page:<br>Element COMPANYNAME is undefined in APPLICATION.</p><p>Sorry I am so confused on this, I have used CFC before in the past with much success.</p><p>Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710578">14</a> by Raymond Camden
		posted on 12/11/2008 at 5:57 PM
		</div>
		<div class="comment_text"><p>You forgot to name your application. Use &lt;<a href="http://disq.us/url?url=http%3A%2F%2Fcfthis.name%3AX6aLXuvL2sFmf2vdR05JVytpBb0&amp;cuid=3321886" rel="nofollow noopener" title="cfthis.name">cfthis.name</a>="rayrocks"&gt; (or somesuch) above the onApplicationStart method.</p><p>You should read the docs on Application.cfc. It will definitely help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710585">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710585">15</a> by Raymond Camden
		posted on 12/11/2008 at 6:02 PM
		</div>
		<div class="comment_text"><p>Some more links that may help:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2007%2F11%2F9%2FApplicationcfc-Methods-and-Example-Uses%3Aa9O3sDsmgyRFu73dNrX18NM167s&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2007/11/9/Applicationcfc-Methods-and-Example-Uses">http://www.coldfusionjedi.c...</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdownloads%2Fapplication.cfc.txt%3AcizpCnox_Byj2v5cRSuTbTQHdbI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/downloads/application.cfc.txt">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710588">16</a> by Dave Dugdale
		posted on 12/12/2008 at 1:53 AM
		</div>
		<div class="comment_text"><p>Wow, that applicationTimeout had me all screwed up, I would keep changing variables in application.cfc thinking they would change instantly - but instead the hung on for 20 minutes! I have less hair now that I pulled most of it out.</p><p>For testing I set it to 5 seconds and now I see how it is working.</p><p>Question do I have to use the "Application" prefix on all my Application variables such as &lt;cfset Application.coname = "Daves Diner"&gt; or can I do it like &lt;cfset coname = "Daves Diner"&gt;?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710586">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710586">17</a> by Raymond Camden
		posted on 12/12/2008 at 1:54 AM
		</div>
		<div class="comment_text"><p>By definition, an Application scoped variable will be application.something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710558">18</a> by Dave Dugdale
		posted on 12/12/2008 at 2:06 AM
		</div>
		<div class="comment_text"><p>Ray thanks for the quick reply, that is what I thought, now I have to go and change a ton of variables using find replace.</p><p>I am using your standard application file that you pointed me to earlier and finding very useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710560">19</a> by Eric Roberts
		posted on 9/24/2010 at 2:33 AM
		</div>
		<div class="comment_text"><p>Any ideas on using IIS7's rewite with a dynamic CF page?  Wehave a 404 handler that has been hadling this...basically the user friendly url comes in, the 404 handler looks up the name in the db and returns an ID in a url that the site understands.  For some reason, IIS7 doesn't seem to like this...it returns a 404.0 not found error(404, 404.2 and 404.3 are defined).  So I came up with the idea of taking advantage of IIS7's rewrite.  This seems to use the web.config file.  Is there a way to dynmically do this with data from the DB?  Thanks!  I'll also post this on CF-talk ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710565">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710565">20</a> by Raymond Camden
		posted on 9/26/2010 at 12:04 AM
		</div>
		<div class="comment_text"><p>Sorry - I've never used IIS7's rewrite.</p></div>
	</div>
</div>
		