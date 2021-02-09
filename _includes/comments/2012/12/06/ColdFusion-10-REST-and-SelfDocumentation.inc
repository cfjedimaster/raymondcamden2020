
<div class="comment" id="c_1713744132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744132">1</a> by RHPT
		posted on 12/6/2012 at 8:16 PM
		</div>
		<div class="comment_text"><p>Not related to the topic, but I've always wanted to ask: Why do you use new com.adobe.coldfusion.query() instead of just new query()?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744131">2</a> by inj
		posted on 12/6/2012 at 8:18 PM
		</div>
		<div class="comment_text"><p>Wow!<br>Thanks for examples</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744135">3</a> by Raymond Camden
		posted on 12/7/2012 at 1:21 AM
		</div>
		<div class="comment_text"><p>I use the full domain in case the default custom tag directory doesn't exist. Plus, I prefer using the full path for things outside of my app. It "feels" safer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744142">4</a> by Henry Ho
		posted on 12/7/2012 at 1:30 AM
		</div>
		<div class="comment_text"><p>Cool!  You're welcome Ray.</p><p>So <a href="http://disq.us/url?url=http%3A%2F%2Fjersey.java.net%2F%3Aon6zILo2GaOC8cnQmUJDFeBJu4o&amp;cuid=3321886" rel="nofollow noopener" title="http://jersey.java.net/">http://jersey.java.net/</a> is the Java lib that powers  CF10's RESTful web services. Nice to know!  Thanks!</p><p>However, is there a way to suppress this?  In case we don't want to expose some sensitive information that the clients of the API don't need to know about?  I don't understand why are the method names exposed, when RESTful API should only cares which action (i.e. GET/PUT/POST/DELETE) are available for certain resource?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744134">5</a> by Raymond Camden
		posted on 12/7/2012 at 1:36 AM
		</div>
		<div class="comment_text"><p>Yes. I added this:</p><p>	remote string function sayOptions() httpMethod="options" {<br>		return "I do x and y";<br>	}</p><p>and it worked as expected.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744143">6</a> by John
		posted on 12/20/2012 at 3:58 AM
		</div>
		<div class="comment_text"><p>This is interesting, and can be helpful. Give that this self-description is possible does anyone know if Adobe plans to implement a WADL description page similar to the ?wsdl and ?wsdl2</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744130">7</a> by Raymond Camden
		posted on 12/20/2012 at 6:46 AM
		</div>
		<div class="comment_text"><p>Are you asking if we will add a 'url hook' to return it? I don't think that is necessary if you can simply send an OPTIONS request. I'm still new to REST, but in general, the idea is to use HTTP Verbs, not URL params, to get stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744136">8</a> by John
		posted on 2/21/2013 at 10:01 PM
		</div>
		<div class="comment_text"><p>I noticed that neither the displayName or hint attributes of the cfargument tag translate to &lt;doc&gt; elements in the WADL. Any plans to add this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744140">9</a> by Raymond Camden
		posted on 2/21/2013 at 11:10 PM
		</div>
		<div class="comment_text"><p>No idea. :) Please file an ER for this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744139">10</a> by John Jarrard
		posted on 7/12/2013 at 7:44 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I'm working on a RESTful API for our company but can't quite figure out how to get it to work with IIS 7.5.  I'd like the services to be accessible over port 80 on their website domain (say <a href="http://disq.us/url?url=http%3A%2F%2Fapi.company.com%3AegjfcRZ38b8HueDBCy6KhJOpdS0&amp;cuid=3321886" rel="nofollow noopener" title="http://api.company.com">http://api.company.com</a>)...  Are there any good demos/tutorials/examples that you have seen to make this work with IIS, not just localhost:8500?</p><p>JJ</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744141">11</a> by Raymond Camden
		posted on 7/12/2013 at 3:45 PM
		</div>
		<div class="comment_text"><p>There isn't any docs because it should just work. If your CF server is tied to IIS, then it just works. (Or it should.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744137">12</a> by John Jarrard
		posted on 7/13/2013 at 12:36 AM
		</div>
		<div class="comment_text"><p>Well, it's returning a string 'Not Found' in the browser - no HTML wrapped around, just those two words.  When I look in the error logs, I see this error:</p><p>"Error","ajp-bio-8012-exec-3","05/19/13","14:26:15",,"File not found: /websocket/adc/v1/helloWorld.cfm The specific sequence of files included or processed is: C:\inetpub\wwwroot\perkz2\websocket\adc\v1\helloWorld.cfm'' "<br>coldfusion.runtime.TemplateNotFoundException: File not found: /websocket/adc/v1/helloWorld.cfm</p><p>I put the CFC in its own folder in my intetpub\wwwroot\api\ folder with an fairly empty application.cfc...</p><p>Have you seen this error before?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744138">13</a> by John Jarrard
		posted on 7/13/2013 at 12:40 AM
		</div>
		<div class="comment_text"><p>I apologize, that is not the error I was getting... that is an old one... Here is the error I'm getting:</p><p>"Error","ajp-bio-8012-exec-7","07/12/13","16:32:43",,"null for uri: <a href="http://disq.us/url?url=http%3A%2F%2Fapi.perkz.biz%2Frest%2Fsayhello%2F%3AUO_s5Bojmebx5J1BLDFtdMFGMDA&amp;cuid=3321886" rel="nofollow noopener" title="http://api.perkz.biz/rest/sayhello/">http://api.perkz.biz/rest/s...</a>"<br>com.sun.jersey.api.NotFoundException: null for uri: <a href="http://disq.us/url?url=http%3A%2F%2Fapi.perkz.biz%2Frest%2Fsayhello%2F%3AUO_s5Bojmebx5J1BLDFtdMFGMDA&amp;cuid=3321886" rel="nofollow noopener" title="http://api.perkz.biz/rest/sayhello/">http://api.perkz.biz/rest/s...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744144">14</a> by Raymond Camden
		posted on 7/13/2013 at 1:39 AM
		</div>
		<div class="comment_text"><p>Hmm. Not sure. For Apache I had to ensure I had the right stuff set up. Maybe try running your connector again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744145">15</a> by Scott Kroyer
		posted on 1/4/2014 at 10:54 PM
		</div>
		<div class="comment_text"><p>Hello,</p><p>Is it possible to set the default return format for the OPTIONS verb to json instead of xml?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713744149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713744149">16</a> by Raymond Camden
		posted on 1/6/2014 at 4:19 AM
		</div>
		<div class="comment_text"><p>My understanding is that the spec says to return XML.</p></div>
	</div>
</div>
		