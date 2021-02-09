
<div class="comment" id="c_1714084165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714084165">1</a> by jdesi
		posted on 10/15/2014 at 2:35 AM
		</div>
		<div class="comment_text"><p>Thanks a lot - tested and works like a charm :))</p></div>
	</div>
</div>
		
<div class="comment" id="c_1847963309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1847963309">2</a> by Benedikt
		posted on 2/11/2015 at 4:44 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>thank you for sharing your code!</p><p>Unfortunately the code does not work with my animation.</p><p>When I look into the console, I see an error message:<br>[Log] Javascript error in event handler! Event Type = symbol (edge.5.0.1.min.js, line 154)</p><p>Unfortunately I don't know where 'symbol' is called.</p><p>I had this problem with the same message with an erlier version of your code and you directed me to this one because of compatibility reasons with the newer version of Edge Animate. It looks as there are some more issues with my version of Edge Animate (2014.1.1).</p><p>The code I use is (it's the only code I wrote in the animation):</p><p>--------------------------------</p><p>/***********************</p><p>* Adobe Edge Animate-Aktionen für Composition</p><p>*</p><p>* Bearbeiten Sie diese Datei mit Vorsicht. Achten Sie darauf, dass</p><p>* Funktionssignaturen und Kommentare, die mit „Edge“ anfangen, beibehalten werden,</p><p>* damit Sie mit diesen Aktionen weiterhin in Adobe Edge Animate interagieren können.</p><p>*</p><p>***********************/</p><p>(function($, Edge, compId){</p><p>var Composition = Edge.Composition, Symbol = Edge.Symbol; // Aliase für häufig verwendete Edge-Klassen</p><p>   //Edge symbol: 'stage'</p><p>   (function(symbolName) {</p><p>      Symbol.bindSymbolAction(compId, symbolName, "creationComplete", function(sym, e) {</p><p>			function isScrolledIntoView(elem) {</p><p>				var docViewTop = $(window).scrollTop();</p><p>				var docViewBottom = docViewTop + $(window).height();</p><p>				var elemTop = elem.offset().top;</p><p>				var elemBottom = elemTop + elem.height();</p><p>				return ((elemBottom &gt;= docViewTop) &amp;&amp; (elemTop &lt;= docViewBottom)</p><p>				  &amp;&amp; (elemBottom &lt;= docViewBottom) &amp;&amp;  (elemTop &gt;= docViewTop) );</p><p>			}</p><p>			var element = sym.getSymbolElement();</p><p>			if(isScrolledIntoView(element)) {</p><p>				<a href="http://disq.us/url?url=http%3A%2F%2Fsym.play%3APtEwXAGBLYeoeo1-wdfUK9NHtcI&amp;cuid=3321886" rel="nofollow noopener" title="sym.play">sym.play</a>(0)</p><p>			} else {</p><p>				$(window).on("scroll", function(e) {</p><p>					if(isScrolledIntoView(element)) {</p><p>						console.log('Start me up');</p><p>						<a href="http://disq.us/url?url=http%3A%2F%2Fsym.play%3APtEwXAGBLYeoeo1-wdfUK9NHtcI&amp;cuid=3321886" rel="nofollow noopener" title="sym.play">sym.play</a>(0);</p><p>						$(window).off("scroll");</p><p>					}</p><p>				});</p><p>			}</p><p>		});</p><p>      //Edge binding end</p><p>   })("stage");</p><p>   //Edge symbol end:'stage'</p><p>})(window.jQuery || AdobeEdge.$, AdobeEdge, "EDGE-7808737");</p><p>---------------------------------</p><p>Do you have any idea what to do?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1848687072">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1848687072">3</a> (In reply to <a href="#c_1847963309">#2</a>) by Raymond Camden
		posted on 2/11/2015 at 10:47 PM
		</div>
		<div class="comment_text"><p>Not immediately. I'd need to get the project, and I don't even have Edge Animate installed anymore. Best I can suggest is the Adobe forums.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1852415096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1852415096">4</a> by Robbie
		posted on 2/13/2015 at 8:45 PM
		</div>
		<div class="comment_text"><p>Thank you so much! I am an intern and am using this code for an animation to be used on a real estate site. They are very impressed, thanks again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1886640619">
	<div>
		<img src="https://disqus.com/api/users/avatars/nielsgeurs.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1886640619">5</a> by Niels
		posted on 3/4/2015 at 10:17 AM
		</div>
		<div class="comment_text"><p>great script! but how do i make this work from an iframe.. i'm trying with window.parent... but no succes yet..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1886711842">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1886711842">6</a> (In reply to <a href="#c_1886640619">#5</a>) by Raymond Camden
		posted on 3/4/2015 at 11:47 AM
		</div>
		<div class="comment_text"><p>Sorry - I don't have Creative Cloud anymore and don't even have Edge Animate installed now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2083181655">
	<div>
		<img src="https://disqus.com/api/users/avatars/dnicinski.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2083181655">7</a> by David
		posted on 6/17/2015 at 3:07 AM
		</div>
		<div class="comment_text"><p>What is the trick to get this to work with multiple assets on one page? Please help!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2083226776">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2083226776">8</a> (In reply to <a href="#c_2083181655">#7</a>) by Raymond Camden
		posted on 6/17/2015 at 3:53 AM
		</div>
		<div class="comment_text"><p>Wish I could help - don't have CC anymore.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2083236925">
	<div>
		<img src="https://disqus.com/api/users/avatars/dnicinski.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2083236925">9</a> (In reply to <a href="#c_2083226776">#8</a>) by David
		posted on 6/17/2015 at 4:04 AM
		</div>
		<div class="comment_text"><p>Can't point me in the right direction? Anything would help at all. I have it working great on one animation on the page. But when I add it to another animation everything dies.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2083245709">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2083245709">10</a> (In reply to <a href="#c_2083236925">#9</a>) by Raymond Camden
		posted on 6/17/2015 at 4:13 AM
		</div>
		<div class="comment_text"><p>I thought I had covered this already - so I'd check all 5 previous entries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2083249935">
	<div>
		<img src="https://disqus.com/api/users/avatars/dnicinski.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2083249935">11</a> (In reply to <a href="#c_2083245709">#10</a>) by David
		posted on 6/17/2015 at 4:17 AM
		</div>
		<div class="comment_text"><p>I did check all previous entries. I couldn't find the solution on any of them. </p></div>
	</div>
</div>
		
<div class="comment" id="c_2083257657">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2083257657">12</a> (In reply to <a href="#c_2083249935">#11</a>) by Raymond Camden
		posted on 6/17/2015 at 4:26 AM
		</div>
		<div class="comment_text"><p>Hmm. Well best I can suggest is repeating the code for each element. I coulda sworn I had a blog entry on this, but I can't rebuild the demo as I don't have the software anymore. Lost CC when I left Adobe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2083260328">
	<div>
		<img src="https://disqus.com/api/users/avatars/dnicinski.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2083260328">13</a> (In reply to <a href="#c_2083257657">#12</a>) by David
		posted on 6/17/2015 at 4:29 AM
		</div>
		<div class="comment_text"><p>That's exactly what I did. I repeated the code for each one. But when you add each animation to the page you have to change the ID so they all don't say "Stage". Do you think that has something to do with it? </p></div>
	</div>
</div>
		
<div class="comment" id="c_2083262384">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2083262384">14</a> (In reply to <a href="#c_2083260328">#13</a>) by Raymond Camden
		posted on 6/17/2015 at 4:31 AM
		</div>
		<div class="comment_text"><p>yeah - you would need to ensure the IDs match</p></div>
	</div>
</div>
		
<div class="comment" id="c_2083268666">
	<div>
		<img src="https://disqus.com/api/users/avatars/dnicinski.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2083268666">15</a> (In reply to <a href="#c_2083262384">#14</a>) by David
		posted on 6/17/2015 at 4:38 AM
		</div>
		<div class="comment_text"><p>Match where? In the script? On the page in the DIVs? </p></div>
	</div>
</div>
		
<div class="comment" id="c_2083278438">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2083278438">16</a> (In reply to <a href="#c_2083268666">#15</a>) by Raymond Camden
		posted on 6/17/2015 at 4:49 AM
		</div>
		<div class="comment_text"><p>Both would need to match.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2083985540">
	<div>
		<img src="https://disqus.com/api/users/avatars/dnicinski.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2083985540">17</a> (In reply to <a href="#c_2083278438">#16</a>) by David
		posted on 6/17/2015 at 3:29 PM
		</div>
		<div class="comment_text"><p>We got it working!  Here is the code we used...</p><p>var isScrolledIntoView = function(elem){<br>      var docViewTop=$(window).scrollTop();<br>      var docViewBottom=docViewTop+$(window).height();<br>      var elemTop=elem.offset().top;<br>      var elemBottom=elemTop+elem.height();<br>      return((elemBottom&gt;=docViewTop)&amp;&amp;<br>             (elemTop&lt;=docViewBottom)&amp;&amp;<br>             (elemBottom&lt;=docViewBottom)&amp;&amp;<br>             (elemTop&gt;=docViewTop));<br>  };<br>  var element=sym.getSymbolElement();<br>  if(isScrolledIntoView(element)){<br>      <a href="http://disq.us/url?url=http%3A%2F%2Fsym.play%3APtEwXAGBLYeoeo1-wdfUK9NHtcI&amp;cuid=3321886" rel="nofollow noopener" title="sym.play">sym.play</a>(0)<br>  }else{<br>      var handler;<br>      handler=function(e){<br>          if(isScrolledIntoView(element)){<br>              console.log('Start me up');<br>              <a href="http://disq.us/url?url=http%3A%2F%2Fsym.play%3APtEwXAGBLYeoeo1-wdfUK9NHtcI&amp;cuid=3321886" rel="nofollow noopener" title="sym.play">sym.play</a>(0);<br>              $(window).off("scroll",handler);<br>          }<br>      };<br>      $(window).on("scroll",handler);<br>  }</p></div>
	</div>
</div>
		
<div class="comment" id="c_2083987285">
	<div>
		<img src="https://disqus.com/api/users/avatars/dnicinski.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2083987285">18</a> (In reply to <a href="#c_2083985540">#17</a>) by David
		posted on 6/17/2015 at 3:30 PM
		</div>
		<div class="comment_text"><p>We have an Infographic with 13 animations on it. I will post the link when it goes live. Good stuff!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2084173754">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2084173754">19</a> (In reply to <a href="#c_2083987285">#18</a>) by Raymond Camden
		posted on 6/17/2015 at 5:09 PM
		</div>
		<div class="comment_text"><p>Glad you got it. :) Sorry I couldn't help more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2187140086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2187140086">20</a> (In reply to <a href="#c_2083985540">#17</a>) by Robert fikes
		posted on 8/11/2015 at 6:21 PM
		</div>
		<div class="comment_text"><p>Where would you put this code to make it work? In the AE File? A seperate js file? Would you need to make sperate ID's?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2187500187">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2187500187">21</a> (In reply to <a href="#c_2187140086">#20</a>) by Raymond Camden
		posted on 8/11/2015 at 9:34 PM
		</div>
		<div class="comment_text"><p>I'd check the earlier posts as I talk about how to get the JS file. Specifically check part 1.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2293418960">
	<div>
		<img src="https://disqus.com/api/users/avatars/photocurio.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2293418960">22</a> (In reply to <a href="#c_1847963309">#2</a>) by Peter Mumford
		posted on 10/6/2015 at 7:20 PM
		</div>
		<div class="comment_text"><p>I was getting the same error. It was caused by not loading jquery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2338343882">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2338343882">23</a> (In reply to <a href="#c_2083987285">#18</a>) by Robbie
		posted on 11/2/2015 at 1:21 AM
		</div>
		<div class="comment_text"><p>I'd like to see the infographic. I'm still having trouble getting them to load <br>properly with your code. Only the first composition loads with the scrolledintoview code. <a href="https://disq.us/url?url=https%3A%2F%2Fforums.adobe.com%2Fthread%2F1727094%3AXcL52Zehcgyo8benmXXojEw1kD4&amp;cuid=3321886" rel="nofollow noopener" title="https://forums.adobe.com/thread/1727094">https://forums.adobe.com/th...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2338351111">
	<div>
		<img src="https://disqus.com/api/users/avatars/dnicinski.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2338351111">24</a> (In reply to <a href="#c_2338343882">#23</a>) by David
		posted on 11/2/2015 at 1:29 AM
		</div>
		<div class="comment_text"><p>Here you go... <a href="http://disq.us/url?url=http%3A%2F%2Fcareers.state.gov%2Fhome-2013-%2Finfographics%2F13-dimensions%3A3YIUl2zWYV8zo1vWFMVPbhQzhU8&amp;cuid=3321886" rel="nofollow noopener" title="http://careers.state.gov/home-2013-/infographics/13-dimensions">http://careers.state.gov/ho...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2339687183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2339687183">25</a> (In reply to <a href="#c_2338351111">#24</a>) by Robbie
		posted on 11/2/2015 at 10:51 PM
		</div>
		<div class="comment_text"><p>Awesome work! Would it be too much to ask for the files so I can dissect the code and apply it for a school project?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2339694732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2339694732">26</a> (In reply to <a href="#c_2338351111">#24</a>) by Robbie
		posted on 11/2/2015 at 10:56 PM
		</div>
		<div class="comment_text"><p>Mainly its because I can't figure out why it's not working "Javascript error in event handler! Event Type = symbol"<br><a href="https://disq.us/url?url=https%3A%2F%2Fwww.dropbox.com%2Fs%2Fmtxk75957uks4ly%2Ftest2.zip%3Fdl%3D0%3AyxBkekul-nkpZpuVaTgSavgJFoc&amp;cuid=3321886" rel="nofollow noopener" title="https://www.dropbox.com/s/mtxk75957uks4ly/test2.zip?dl=0">https://www.dropbox.com/s/m...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2339697364">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2339697364">27</a> (In reply to <a href="#c_2339687183">#25</a>) by Raymond Camden
		posted on 11/2/2015 at 10:58 PM
		</div>
		<div class="comment_text"><p>Best I can suggest is view source and save, it's all online. Unfortunately, you aren't the first person to report this error, so I think something changed in the Edge Animate product. I no longer have this product so I can't help fix it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2339883653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2339883653">28</a> (In reply to <a href="#c_2338343882">#23</a>) by Robbie
		posted on 11/3/2015 at 1:37 AM
		</div>
		<div class="comment_text"><p>I've re-written the code but am getting an error when mutiple comps are added. Seperately they work fine. I've posted the issue here <a href="https://disq.us/url?url=https%3A%2F%2Fforums.adobe.com%2Fmessage%2F8135661%238135661%3A7ricuoeqoUST7WwV7l90f3h_e7E&amp;cuid=3321886" rel="nofollow noopener" title="https://forums.adobe.com/message/8135661#8135661">https://forums.adobe.com/me...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2340987050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2340987050">29</a> (In reply to <a href="#c_2339697364">#27</a>) by Robbie
		posted on 11/3/2015 at 6:36 PM
		</div>
		<div class="comment_text"><p>Its all good, I solved it <a href="https://disq.us/url?url=https%3A%2F%2Fforums.adobe.com%2Fmessage%2F8135661%3AykJRRbm9IJJ1GdAn-GPJAsxyGLw&amp;cuid=3321886" rel="nofollow noopener" title="https://forums.adobe.com/message/8135661">https://forums.adobe.com/me...</a></p><p>Hopefully this will come in handy to anyone else trying to achieve this effect. (for future people trying to contact me for help, message me on the forum)</p></div>
	</div>
</div>
		