
<div class="comment" id="c_1713662125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662125">1</a> by John Ramon
		posted on 2/9/2007 at 4:29 AM
		</div>
		<div class="comment_text"><p>Thats awesome actually I'm working on a project that this would work great for.</p><p>I do have one request can you show how to update a cf page through Spry with out reloading the page like on this page check your email i sent you the source code.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.johnramon.com%2Fchecklink.cfm%3A7gVqHTOAWBnerXrpraPpJniFdvQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.johnramon.com/checklink.cfm">http://www.johnramon.com/ch...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662144">2</a> by Raymond Camden
		posted on 2/9/2007 at 4:32 AM
		</div>
		<div class="comment_text"><p>Nod - I know. Need more time. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662142">3</a> by Steve Bryant
		posted on 2/9/2007 at 4:40 AM
		</div>
		<div class="comment_text"><p>You can actually return XML in CFMX 6 without having a proxy.cfm file.</p><p>Set the returntype="void" and output="yes" then output the XML just as you would in a .cfm page.</p><p>cfcontent is still required. It is a bit hacky, but it works.</p><p>Of course, you can also use JSMX to digest the WDDX that a CFC method returns by default.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fsteve.coldfusionjournal.com%2Fjsmx__another_ajax_api.htm%3AOOQHdL1wXH2xPR5nehbbBfBvWBo&amp;cuid=3321886" rel="nofollow noopener" title="http://steve.coldfusionjournal.com/jsmx__another_ajax_api.htm">http://steve.coldfusionjour...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662141">4</a> by James Holmes
		posted on 2/9/2007 at 12:07 PM
		</div>
		<div class="comment_text"><p>I'm still a big fan of using libraries that do all of this for you. I'm also very happy with JSON instead of XML, but that's just a preference. mxAjax is a good example; with that you really can just return a query from your CFC method and the whole thing is automatically turned into JSON ready to parse and use in the calling page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662143">5</a> by BL
		posted on 2/9/2007 at 12:31 PM
		</div>
		<div class="comment_text"><p>Ray, are you a little surprised that Spry doesn't have any built in functionality to handle CFC-returned WDDX?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662146">6</a> by Phillip Senn
		posted on 2/9/2007 at 6:35 PM
		</div>
		<div class="comment_text"><p>aaron@trajiklyhip.com has posted Andy Powell's Spry presentation to the Nashville CFUG.<br>One of the subtopics was returning XML.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.ncfug.com%2Findex.cfm%3Ffuseaction%3DdspArchives%3ADUC0Li6wmlkxhufGz6gT76w5eR0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.ncfug.com/index.cfm?fuseaction=dspArchives">http://www.ncfug.com/index....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662148">7</a> by Raymond Camden
		posted on 2/9/2007 at 7:43 PM
		</div>
		<div class="comment_text"><p>BL - not really. People tend to forget about WDDX, but it was a dang cool way to do syndication before web services, and it is still darn handy for wrapping up complex logic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662147">8</a> by Raymond Camden
		posted on 2/9/2007 at 7:44 PM
		</div>
		<div class="comment_text"><p>Sorry - I meant complex data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662149">9</a> by BL
		posted on 2/10/2007 at 1:29 AM
		</div>
		<div class="comment_text"><p>What I'm trying to get at is.. Why not make it easier for Adobe web developers (CFers)?  Do you think the Spry team thinks it should be the CF team's responsibility to make it easier to integrate with Spry?  Do you think Adobe is concerned about making it easier for Spry to integrate with CF, versus another server-side language?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662151">10</a> by Raymond Camden
		posted on 2/10/2007 at 1:47 AM
		</div>
		<div class="comment_text"><p>To be fair - I think they are focusing on AJAX as a whole - not specifically stuff for CF. I'd like to see WDDX support, but it isn't critical to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662154">11</a> by Simon Whatley
		posted on 2/12/2007 at 5:01 PM
		</div>
		<div class="comment_text"><p>Although I am sure it is not Adobe's priority, I agree with BL that Adobe should make it easier for CF to integrate with Spry, afterall interoperability between CF and other Adobe technologies can only serve to enhance CF as an important server-side language.</p><p>Anyway, the point of this moan is that Spry is not easy to integrate with at all and has little CF resource to help.</p><p>I have only been able to get Spry working when I create the XML using cfsavecontent in a cfm file! I cannot get a call to a cfc working or indeed via my fusebox framework! I'm sure I am missing something, but this frustration serves to weaken my opinion of Spry.</p><p>Has anyone integrated Spry with Fusebox, if so can you help?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3574919954">
	<div>
		<img src="https://disqus.com/api/users/avatars/leowebguy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3574919954">12</a> by Leo L
		posted on 10/19/2017 at 4:53 PM
		</div>
		<div class="comment_text"><p>thanks Raymond. this helped me a lot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3574954300">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3574954300">13</a> (In reply to <a href="#c_3574919954">#12</a>) by Raymond Camden
		posted on 10/19/2017 at 5:13 PM
		</div>
		<div class="comment_text"><p>You are most welcome. Since this was useful, I'll go ahead and update the code formatting to make it nicer.</p></div>
	</div>
</div>
		