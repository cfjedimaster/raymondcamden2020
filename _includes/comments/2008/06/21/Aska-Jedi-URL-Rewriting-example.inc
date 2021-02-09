
<div class="comment" id="c_1713682121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682121">1</a> by Anthony Webb
		posted on 6/22/2008 at 3:14 AM
		</div>
		<div class="comment_text"><p>I am sure there are many ways to skin this cat, and our requirements were a little different, Our rewrite rule is a little different and I thought I'd share.</p><p>The problem we hit was coming up with a rule that would work for <a href="http://disq.us/url?url=http%3A%2F%2Furl.com%2Fsomthing%2Felse%2F%3Fthis%3Dthat%3AigVlcr062Vg9IIpo9jmAv8L3HuI&amp;cuid=3321886" rel="nofollow noopener" title="http://url.com/somthing/else/?this=that">http://url.com/somthing/els...</a> and pass everything to our controller for some creative parsing.  Our original rule was also rewriting all our JS file urls which was bad.  In the end we came up with this, and have been using it tried and true:</p><p>RewriteCond %{REQUEST_FILENAME} ^.*?[^.]{5,}$<br>RewriteRule (.*) /index.cfm?$1 [L]</p><p>So long as the url doesnt look like a file on the server it will pass everything on to the controller where we parse and act appropriately on the url.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682123">2</a> by Tom K
		posted on 6/22/2008 at 1:01 PM
		</div>
		<div class="comment_text"><p>I find these rules quite useful - matching words vs integers</p><p>RewriteRule /events/ /events\.cfm\ [I]<br>(Would rewrite /events.cfm as /events/)</p><p>RewriteRule /events/(\d+)/ /events\.cfm\?id=$1 [I]<br>(Would rewrite /events.cfm?id=1 as /events/1/ )</p><p>RewriteRule /events/(\w+)/ /events\.cfm\?var=$1 [I]<br>(Would rewrite /events.cfm?var=foo as /events/foo/)</p><p>RewriteRule /events/(\w+)/(\w+)/ /events\.cfm\?var1=$1\&amp;?var2=$2 [I,L]<br>(Would rewrite /events.cfm?var1=foo&amp;var2=bar as /events/foo/bar/ )</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682124">3</a> by shimju david
		posted on 6/22/2008 at 9:58 PM
		</div>
		<div class="comment_text"><p>You can create rules using URL Rewrite Tool found here <a href="http://disq.us/url?url=http%3A%2F%2Fwebtools.live2support.com%2Fmisc_rewrite.php%3A_tPKbSQFPp-qdSSoKpn5DUmMai0&amp;cuid=3321886" rel="nofollow noopener" title="http://webtools.live2support.com/misc_rewrite.php">http://webtools.live2suppor...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682122">4</a> by Sameer Gupta
		posted on 6/23/2008 at 2:17 PM
		</div>
		<div class="comment_text"><p>All, thanks for sharing. URL re-write is pretty new to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682128">5</a> by TN
		posted on 12/16/2008 at 4:56 AM
		</div>
		<div class="comment_text"><p>Hi</p><p>Is it possible to rewrite URL to a different server?</p><p>For example, I need the following:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fsomepage.siteTwo.com%3ALumpHkK6ZsgV1AgKk3m1okOoZtc&amp;cuid=3321886" rel="nofollow noopener" title="http://somepage.siteTwo.com">http://somepage.siteTwo.com</a> (does not run CF)</p><p>calls</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.siteOne.com%2Ftest.cfm%3Appn_NGeblzCqhNCuFqgb8h-m2Y4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.siteOne.com/test.cfm">http://www.siteOne.com/test...</a></p><p>but the URL needs to look</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fsomepage.siteTwo.com%3ALumpHkK6ZsgV1AgKk3m1okOoZtc&amp;cuid=3321886" rel="nofollow noopener" title="http://somepage.siteTwo.com">http://somepage.siteTwo.com</a></p><p>Thank you. Any help would be greatly appreciative</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682130">6</a> by Tom k
		posted on 12/16/2008 at 5:04 AM
		</div>
		<div class="comment_text"><p>Simply put, no. In that example you would be asking another web server to run code on a completely different machine. You could set up a sub domain and point it at the cf server though?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682129">7</a> by TN
		posted on 12/16/2008 at 5:07 AM
		</div>
		<div class="comment_text"><p>thanks Tom</p><p>If I set up a subdomain would it still show the CF URL or the subdomain URL?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682127">8</a> by Raymond Camden
		posted on 12/16/2008 at 7:01 AM
		</div>
		<div class="comment_text"><p>@TN - Afaik, yes, you can do this. Obviously if you read the docs, you will see. Worst comes to worst, you can do it server side with cflocation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682131">9</a> by Raymond Camden
		posted on 12/16/2008 at 7:02 AM
		</div>
		<div class="comment_text"><p>@TN - I'm sorry. I did not closely read your comment. TomK is absolutely right, and again, forgive me. I took the day off and my brain is still on vacation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682133">10</a> by Ajay
		posted on 2/16/2010 at 5:27 PM
		</div>
		<div class="comment_text"><p>Guys,</p><p>I am little bit confused! For adding rules which file need to add?<br>.htaccess like we do in PHP or something else!<br>Please guide i am new in coldFusion!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682134">11</a> by Raymond Camden
		posted on 2/16/2010 at 6:44 PM
		</div>
		<div class="comment_text"><p>.htaccess is not PHP specific - it is web server specific (Apache), so yes, you can use it with CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4641548887">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_LFTi00lNNr.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4641548887">12</a> by Gregory
		posted on 10/5/2019 at 7:51 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>Did you ever make a IIS rewrite rule for BlogCfc? I am having difficulties getting anything to work with my new Galaxie Blog fork. I used the following code, but it gives me a 500 error every time:<br>&lt;rule name="GalaxieBlog" stopprocessing="true"&gt;<br>            &lt;match url="blog/(.*)index.cfm"/&gt;<br>            &lt;conditions logicalgrouping="MatchAll"&gt;<br>                &lt;add input="{REQUEST_METHOD}" pattern="^POST$" negate="true"/&gt;<br>        		&lt;add input="{SCRIPT_FILENAME}" matchtype="IsFile" negate="true"/&gt;<br>                &lt;add input="{QUERY_STRING}" pattern=".+" ignorecase="false" negate="true"/&gt;<br>            &lt;/conditions&gt;<br>            &lt;action type="Redirect" url="blog/{R:1}" appendquerystring="true" redirecttype="Permanent"/&gt;<br>        &lt;/rule&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_4641925494">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4641925494">13</a> (In reply to <a href="#c_4641548887">#12</a>) by Raymond Camden
		posted on 10/6/2019 at 5:11 AM
		</div>
		<div class="comment_text"><p>Sorry no.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4641930844">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_LFTi00lNNr.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4641930844">14</a> (In reply to <a href="#c_4641925494">#13</a>) by Gregory
		posted on 10/6/2019 at 5:24 AM
		</div>
		<div class="comment_text"><p>Thanks. For some odd reason IIS rewrites are not working... but I may have made a mistake or three!</p></div>
	</div>
</div>
		