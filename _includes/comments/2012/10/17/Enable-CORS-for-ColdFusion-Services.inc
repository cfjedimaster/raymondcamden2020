
<div class="comment" id="c_1713743434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743434">1</a> by Giancarlo Gomez
		posted on 10/19/2012 at 9:42 AM
		</div>
		<div class="comment_text"><p>Hello Ray,</p><p>Thanks for the tip! FYI, you can set headers in cfscript by using GetPageContext() function as follows:</p><p>GetPageContext().getResponse().addHeader("Access-Control-Allow-Origin","*");</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743435">2</a> by Raymond Camden
		posted on 10/19/2012 at 3:08 PM
		</div>
		<div class="comment_text"><p>I _was_ going to give a snippy response about using CF internals, then my coffee kicked in and saw you were using the _documented_ getPageContext. Good call there. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743442">3</a> by Giancarlo Gomez
		posted on 10/19/2012 at 5:08 PM
		</div>
		<div class="comment_text"><p>LOL, I know the feeling Ray and I was hoping you wouldn't take it the wrong way, thank god for good coffee. It is a shame those functions are not well documented though, thank god they made cfdump so good! A little bit of curiosity goes far sometimes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743440">4</a> by Raymond Camden
		posted on 10/19/2012 at 5:18 PM
		</div>
		<div class="comment_text"><p>To be fair, anything under GetPageContext would be documented in the J2EE docs. _Knowing_ that though is another matter.</p><p>Actually - just checked the docs - and they are pretty good. They even mention that the methods are "mandated by the JSP specification" which is pretty clear, too!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743444">5</a> by Jade Cady
		posted on 10/19/2012 at 6:49 PM
		</div>
		<div class="comment_text"><p>The Github project CFCommunity / CFScript-Community-Components helps bridge most of the missing script functions just as another alternative.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743441">6</a> by Ray Varner
		posted on 10/30/2012 at 9:16 PM
		</div>
		<div class="comment_text"><p>I'll throw in a few CORS headers that may be overkill. Also, a couple of semi-related header goodies.</p><p>&amp;lt;!--- CORS - Cross Origin Resource Sharing ---&amp;gt;<br>&amp;lt;cfheader name="Access-Control-Allow-Origin" value="*" /&amp;gt;<br>&amp;lt;cfheader name="Access-Control-Allow-Methods" value="GET,PUT,POST,DELETE" /&amp;gt;<br>&amp;lt;cfheader name="Access-Control-Allow-Headers" value="Content-Type" /&amp;gt;<br>&amp;lt;cfheader name="Content-Type" value="application/JSON; charset=utf8" /&amp;gt;</p><p>&amp;lt;!--- Force cache to clear ---&amp;gt;<br>&amp;lt;cfset headerTime=GetHttpTimeString(now()) /&amp;gt;<br>&amp;lt;cfheader name="Cache-Control" value="must-revalidate" /&amp;gt;<br>&amp;lt;cfheader NAME="Pragma" value="no-cache" /&amp;gt;<br>&amp;lt;cfheader name="Expires" value="#headerTime#" /&amp;gt;<br>&amp;lt;cfheader NAME="Last-Modified" value="#headerTime#" /&amp;gt;</p><p>&amp;lt;!--- THWART Click-Jacking ---&amp;gt;<br>&amp;lt;cfheader name="X-FRAME-OPTIONS" value="DENY" /&amp;gt;</p><p>&amp;lt;!--- Force IE8 Compatibility mode ---&amp;gt;<br>&amp;lt;cfheader name="X-UA-Compatible" value="IE=EmulateIE8" /&amp;gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743438">7</a> by Raymond Camden
		posted on 10/30/2012 at 9:18 PM
		</div>
		<div class="comment_text"><p>Next time - Pastebin or Gist please. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743436">8</a> by Sean Corfield
		posted on 12/7/2012 at 1:31 AM
		</div>
		<div class="comment_text"><p>@Jade (and others), if you're using Railo, header is native in cfscript:</p><p>header name="Access-Control-Allow-Origin" value="*";</p><p>so you can put it directly into your script-based CFC.</p><p>Hopefully Adobe will add more tags to cfscript in CF11?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713743439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713743439">9</a> by Raymond Camden
		posted on 12/7/2012 at 1:38 AM
		</div>
		<div class="comment_text"><p>I hope so. It is one of the few left.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2820927765">
	<div>
		<img src="https://disqus.com/api/users/avatars/miguelarvelo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2820927765">10</a> by Miguel Arvelo
		posted on 8/4/2016 at 6:53 PM
		</div>
		<div class="comment_text"><p>Raymond, dunno if you can help me out but I'm trying to enable CORS on this web service and if I add the cfheader tag as in this post I get an error about the access-control-allow-origin header being set to multiple values "*, *"</p><p>My first thought was that my dev environment must have set up CORS at the server level so I removed the cfheader tag but then I get the message about access-control-allow-origin not being set... have you encountered this before?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2820962374">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2820962374">11</a> (In reply to <a href="#c_2820927765">#10</a>) by Raymond Camden
		posted on 8/4/2016 at 7:16 PM
		</div>
		<div class="comment_text"><p>So if you hit the CFC directly, and look at headers, do you still see the CORS header (with the new one commented out)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2820962783">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2820962783">12</a> (In reply to <a href="#c_2820927765">#10</a>) by Raymond Camden
		posted on 8/4/2016 at 7:16 PM
		</div>
		<div class="comment_text"><p>In other words, test by hitting the CFC in your browser w/ devtools open so you can see the headers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2820979139">
	<div>
		<img src="https://disqus.com/api/users/avatars/miguelarvelo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2820979139">13</a> (In reply to <a href="#c_2820962374">#11</a>) by Miguel Arvelo
		posted on 8/4/2016 at 7:26 PM
		</div>
		<div class="comment_text"><p>Nope, nothing related to CORS come up in the headers when I hit the CFC directly</p></div>
	</div>
</div>
		
<div class="comment" id="c_2820979979">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2820979979">14</a> (In reply to <a href="#c_2820979139">#13</a>) by Raymond Camden
		posted on 8/4/2016 at 7:27 PM
		</div>
		<div class="comment_text"><p>Ok, add it back, and again, hit it direct.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2821029140">
	<div>
		<img src="https://disqus.com/api/users/avatars/miguelarvelo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2821029140">15</a> (In reply to <a href="#c_2820979979">#14</a>) by Miguel Arvelo
		posted on 8/4/2016 at 8:00 PM
		</div>
		<div class="comment_text"><p>It shows up, yes... but when I call it from a different server I get the message</p><p>'Access-Control-Allow-Origin' header contains multiple values '*, *', but only one is allowed. Origin '&lt;server_address&gt;' is therefore not allowed access.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2821039557">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2821039557">16</a> (In reply to <a href="#c_2821029140">#15</a>) by Raymond Camden
		posted on 8/4/2016 at 8:08 PM
		</div>
		<div class="comment_text"><p>That's weird then. :) You opening the the CFC directly compared to you hitting it via Ajax *should* be the same  - unless you have an App.cfc sniffing the referrer and changing things. Do you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2821053961">
	<div>
		<img src="https://disqus.com/api/users/avatars/miguelarvelo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2821053961">17</a> (In reply to <a href="#c_2821039557">#16</a>) by Miguel Arvelo
		posted on 8/4/2016 at 8:18 PM
		</div>
		<div class="comment_text"><p>Not on this environment, it's just a plain old CFC component and nothing else :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_2821055481">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2821055481">18</a> (In reply to <a href="#c_2821053961">#17</a>) by Raymond Camden
		posted on 8/4/2016 at 8:19 PM
		</div>
		<div class="comment_text"><p>Then you got me. Can I hit it myself?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2821058567">
	<div>
		<img src="https://disqus.com/api/users/avatars/miguelarvelo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2821058567">19</a> (In reply to <a href="#c_2821055481">#18</a>) by Miguel Arvelo
		posted on 8/4/2016 at 8:21 PM
		</div>
		<div class="comment_text"><p>Wish I could let you in but this test file is sitting behind my employer's VPN. Thanks for the time nonetheless ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2821064294">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2821064294">20</a> (In reply to <a href="#c_2821058567">#19</a>) by Raymond Camden
		posted on 8/4/2016 at 8:25 PM
		</div>
		<div class="comment_text"><p>Ah... well - good luck!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3467805919">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3467805919">21</a> (In reply to <a href="#c_3467438614">#0</a>) by Raymond Camden
		posted on 8/14/2017 at 7:29 PM
		</div>
		<div class="comment_text"><p>You are welcome. :)</p></div>
	</div>
</div>
		