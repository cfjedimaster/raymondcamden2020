
<div class="comment" id="c_1713728394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728394">1</a> by todd sharp
		posted on 12/20/2010 at 8:07 PM
		</div>
		<div class="comment_text"><p>I hate to even mention because I would never, ever do it, but you could technically add something like this to  	 WEB-INF.cftags.component  which every CFC extends.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728407">2</a> by Henry
		posted on 12/20/2010 at 11:13 PM
		</div>
		<div class="comment_text"><p>How about IP restrict the /CFIDE/componentutils/ at webserver level?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728409">3</a> by Raymond Camden
		posted on 12/20/2010 at 11:30 PM
		</div>
		<div class="comment_text"><p>I had mentioned that- but he wanted it to show up as a 404. Hence my thinking to use a CFIF and CFHEADER. Not sure if you can do that w/ IIS. You may be able to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728408">4</a> by todd sharp
		posted on 12/20/2010 at 11:34 PM
		</div>
		<div class="comment_text"><p>IIS 7.5 has built in URL rewriting so I'm sure something like this can be accomplished.  Let me play around with it a bit and see what I can come up with.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728410">5</a> by todd sharp
		posted on 12/21/2010 at 12:10 AM
		</div>
		<div class="comment_text"><p>I put it into a quick blog entry.  Hope it helps.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfsilence.com%2Fblog%2Fclient%2Findex.cfm%2F2010%2F12%2F20%2FBlocking-CFC-Auto-Documentation-With-IIS%3ASk4Irs3yt5QqAqLOBnIQQA0ZwLs&amp;cuid=3321886" rel="nofollow noopener" title="http://cfsilence.com/blog/client/index.cfm/2010/12/20/Blocking-CFC-Auto-Documentation-With-IIS">http://cfsilence.com/blog/c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728406">6</a> by Damien Bruyndonckx
		posted on 12/21/2010 at 1:14 PM
		</div>
		<div class="comment_text"><p>For me, the best place to handle this in an application is the onCfcRequest Method of the Application framework...  What do you think??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728412">7</a> by Raymond Camden
		posted on 12/21/2010 at 6:25 PM
		</div>
		<div class="comment_text"><p>Interesting Damien! I didn't try that approach. Does it work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728415">8</a> by Raymond Camden
		posted on 12/21/2010 at 6:57 PM
		</div>
		<div class="comment_text"><p>Nope - just tested this and it did not work. I used this in my Application.cfc:</p><p>	public void function onCFCRequest(string cfcname, string method, struct args) {<br>		if(!structKeyExists(url, "method")) url.method = "foo";<br>	}</p><p>I then requested /test.cfc and it didn't auto set the method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728411">9</a> by Raymond Camden
		posted on 12/21/2010 at 6:59 PM
		</div>
		<div class="comment_text"><p>Now this is interesting. While onCFCRequest didn't fire, onRequestStart did. So if I set url.method there, it does indeed block the auto descriptor.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728418">10</a> by Mike Collins
		posted on 12/21/2010 at 7:28 PM
		</div>
		<div class="comment_text"><p>What about the servlet mapping in the web.xml.</p><p>&lt;servlet-mapping id="coldfusion_mapping_4"&gt;<br>        &lt;servlet-name&gt;CFCServlet&lt;/servlet-name&gt;<br>        &lt;url-pattern&gt;*.cfc&lt;/url-pattern&gt;<br>    &lt;/servlet-mapping&gt;</p><p>seems like removing that would work if you did not want url access to any cfcs.</p><p>One concern is stuff like <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2007%2F5%2F31%2FColdFusion-8-Demo-of-CFGRID-Ajax-binding-and-CFWINDOW%3A_Nzq-VU-gg0mBWP57YlqPjXlp40&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2007/5/31/ColdFusion-8-Demo-of-CFGRID-Ajax-binding-and-CFWINDOW">http://www.coldfusionjedi.c...</a></p><p>but I don't know if that uses the .cfc mapping.</p><p>Needs testing, but might work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728413">11</a> by Raymond Camden
		posted on 12/21/2010 at 7:31 PM
		</div>
		<div class="comment_text"><p>I bet it would. Although I think the original guy I spoke to wanted to dynamically add this behavior - ie, if IP not in some range, do this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728417">12</a> by todd sharp
		posted on 12/21/2010 at 7:58 PM
		</div>
		<div class="comment_text"><p>FWIW IIS request blocking can handle IP address patterns.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728393">13</a> by Tom Chiverton
		posted on 12/21/2010 at 9:36 PM
		</div>
		<div class="comment_text"><p>As could an Apache rewrite rule block to send requests elsewhere unless their from the right place...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728392">14</a> by Aaron Neff
		posted on 12/28/2010 at 2:55 PM
		</div>
		<div class="comment_text"><p>@Mike,</p><p>Nice idea and I very much like the web.xml servlet mappings.</p><p>This isn't really directed at you and is SOT, but I wish url-pattern was more flexible.</p><p>Currently this is valid (where "go" is an extension-less _file_ in webroot):</p><p>&lt;servlet-mapping&gt;<br>  &lt;servlet-name&gt;CfmServlet&lt;/servlet-name&gt;<br>  &lt;url-pattern&gt;/go/*&lt;/url-pattern&gt;<br>&lt;/servlet-mapping&gt;</p><p>That's nice for handling these URLs in onRequestStart(): <a href="http://disq.us/url?url=http%3A%2F%2Fwww.mysite.com%2Fgo%2Fstore%2Fcategory-one%2Fcategory-two%2Fid_1%2Fproduct-name%3ArJFw0CUplLskNdXsTIHdSRTLyHI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mysite.com/go/store/category-one/category-two/id_1/product-name">http://www.mysite.com/go/st...</a><br>(note there's no file extension, like .cfm, in the URL)</p><p>That works fine, if no other site on the server is serving URL-accessible content from a root-level directory named "go". Thus I'd much prefer if the servlet spec allowed this:</p><p>&lt;servlet-mapping&gt;<br>  &lt;servlet-name&gt;CfmServlet&lt;/servlet-name&gt;<br>  &lt;url-pattern&gt;<a href="http://disq.us/url?url=http%3A%2F%2Fwww.mysite.com%2Fgo%2F%2A%3C%2Furl-pattern%3E%3AMETINQZF7UcMalhn3JysFLTHr8w&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mysite.com/go/*</url-pattern>">http://www.mysite.com/go/*&lt;...</a><br>&lt;/servlet-mapping&gt;</p><p>Thanks,<br>-Aaron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728391">15</a> by Mike Collins
		posted on 12/28/2010 at 7:18 PM
		</div>
		<div class="comment_text"><p>@Aaron,</p><p>I think you have a few options to route by domain:</p><p>1. Each site maps to its own web root and the JRun connector does look at the web root so that does get you close already. So /go* would always look at the  relative site webroot.</p><p>2. Servlet Filters.  Not sure what your end game is, but filters are a great way to do some conditional processing at this level.</p><p>3. URL rewrite in Apache or IIS.  You could easily use rewrite rules to trigger any servlet mapping.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728397">16</a> by Aaron Neff
		posted on 12/29/2010 at 4:49 AM
		</div>
		<div class="comment_text"><p>@Mike</p><p>Thanks very much for your follow-up.  I'm trying to post a reply, but my comment keeps being blocked as spam. I've forwarded it to Ray, so hopefully he'll be able to post it for me.</p><p>Thanks again!,<br>-Aaron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728396">17</a> by Aaron Neff
		posted on 12/29/2010 at 11:44 AM
		</div>
		<div class="comment_text"><p>@Mike,</p><p>Thank you very much for your follow-up. I'm unfamiliar with creating servlet "filters". But my issue with servlet "mappings" is 2-fold:</p><p>1. url-pattern cannot be domain-specific<br>2. config is only via /WEB-INF/web.xml</p><p>The problem with #1 is url-pattern could match a "folder" in one site, and match a "file" in another site.</p><p>Could a servlet filter allow the mapping to only be used when "_file_ exists"?</p><p>Example: <a href="http://disq.us/url?url=http%3A%2F%2Fmysite1.com%2Fgo%3Ffoo%3Dbar%3AuDq4KTl80m7SMJtdujPjdJnRXAI&amp;cuid=3321886" rel="nofollow noopener" title="mysite1.com/go?foo=bar">mysite1.com/go?foo=bar</a> versus <a href="http://disq.us/url?url=http%3A%2F%2Fmysite2.com%2Fgo%2Fpage.cfm%3Afmdam4J52q-bY4ZiWGQ4tXOYRhQ&amp;cuid=3321886" rel="nofollow noopener" title="mysite2.com/go/page.cfm">mysite2.com/go/page.cfm</a><br>(<a href="http://disq.us/url?url=http%3A%2F%2Fmysite1.com%3AGrUI9LoDHiKRnR9oyxW92AXBu_o&amp;cuid=3321886" rel="nofollow noopener" title="mysite1.com">mysite1.com</a> has root-level extensionless file named "go", while <a href="http://disq.us/url?url=http%3A%2F%2Fmysite2.com%3AhGgvt-aC2rIAppDMfPj4j9utCO8&amp;cuid=3321886" rel="nofollow noopener" title="mysite2.com">mysite2.com</a> has root-level directory named "go")</p><p>Currently, a /go/* mapping breaks <a href="http://disq.us/url?url=http%3A%2F%2Fmysite2.com%3AhGgvt-aC2rIAppDMfPj4j9utCO8&amp;cuid=3321886" rel="nofollow noopener" title="mysite2.com">mysite2.com</a>'s URL.</p><p>I have an idea for an enhancement to Application.cfc. I originally thought #1 would be a deal-breaker. However, if servlet mappings can be conditionally applied only to files, then there may still be a way.</p><p>If only this were possible:</p><p>&lt;servlet-mapping&gt;<br>  &lt;servlet-name&gt;CfmServlet&lt;/servlet-name&gt;<br>  &lt;url-pattern&gt;/go/*&lt;/url-pattern&gt;<br>  &lt;verify-file-exists&gt;true&lt;/verify-file-exists&gt;<br>&lt;/servlet-mapping&gt;</p><p>Thanks again!,<br>-Aaron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728398">18</a> by Aaron Neff
		posted on 12/30/2010 at 4:37 AM
		</div>
		<div class="comment_text"><p>By "I have an idea for an enhancement to Application.cfc", I was referring to something like:</p><p>THIS.extensionlessFileList = "/go,/foo/bar";</p><p>Where go, and bar, are extensionless CF files.</p><p>Not sure if this is possible, but just thought it'd be neat.</p><p>Thanks,<br>-Aaron</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728399">19</a> by Mike Collins
		posted on 1/5/2011 at 9:00 PM
		</div>
		<div class="comment_text"><p>@Aaron</p><p>a servlet filter could work,  however I think you are really trying to route traffic to the correct server or webapp, which puts me at a router, or web server.  I'd look at doing a reverse proxy with some rewrite rules that will change context roots (weapps) based on domain.</p></div>
	</div>
</div>
		