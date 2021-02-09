
<div class="comment" id="c_1713718304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718304">1</a> by Sarah Kelly
		posted on 9/12/2009 at 12:25 AM
		</div>
		<div class="comment_text"><p>It's not because you're a dork; it's because you're a geek. I think we do what we do because we like to solve puzzles. They are also less frustrating when they belong to someone else.</p><p>"both he and I were more focused on the web service side then anything else"...I spend so much time investigating the wrong thing.  I spent hours last week on this css file. CSS is pretty new to me, so when I couldn't get one area to work, I was researching the syntax, the cascading rules, etc.  When I got someone else to look at it, he found that the style in question was *commented out!*  I had the new stuff perfect except that it *wasn't being read.* Duh.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718303">2</a> by salvatore fusto
		posted on 9/12/2009 at 12:37 PM
		</div>
		<div class="comment_text"><p>Very good points, but can you explain me why an application has to invoke itself  as webservice at start? i'm not able to  figure this case.<br>regards<br>salvatore</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718299">3</a> by Raymond Camden
		posted on 9/12/2009 at 5:25 PM
		</div>
		<div class="comment_text"><p>Sal - the web service provided config info. It was built like that because he planned for _other_ sites to also use the config info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718298">4</a> by Robert
		posted on 9/13/2009 at 2:06 AM
		</div>
		<div class="comment_text"><p>This guy must have been the most innovative CF developer in the world!! :-).</p><p>Thanks again for the assist Ray. Good way to end the week.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718292">5</a> by Ben Nadel
		posted on 9/16/2009 at 5:14 PM
		</div>
		<div class="comment_text"><p>Nice catch. So I guess when you create a web service object, it hits the WSDL file immediately in order to gather information about the proxy it has to create. Very interesting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718302">6</a> by Raymond Camden
		posted on 9/16/2009 at 5:40 PM
		</div>
		<div class="comment_text"><p>Hmm. Actually, he had made the object and the WSDL was cached. The issue came when he made the call to the method. If the WSDL had not been cached, I'm not convinced it would happen there even. So that's an interesting (new) question, does the creation of a WS object execute App.cfm? Going to test.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718297">7</a> by Raymond Camden
		posted on 9/16/2009 at 5:52 PM
		</div>
		<div class="comment_text"><p>Interesting. So I added logging to App.cfc. I made a test.cfm that ONLY made an instance of the web service. On hitting test.cfm, App.cfc IS run for the WSDL creation, both onRequestStart, and onSessionStart. So hit 1 gives you 4 logs (2 for test.cfm, 2 for my web service). On the next hit you only get ONE log for the onRequestStart for test.cfm. CF doesn't do another network hit since it has cached the WSDL.</p><p>I guess this isn't too surprising. Your web services may use application variables so it would (obviously) need to run App.cfc, but still, interesting to check.</p><p>Oh, I also logged CGI.HTTP_USER_AGENT. For CF's hit to get the WSDL it is blank.</p></div>
	</div>
</div>
		