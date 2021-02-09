
<div class="comment" id="c_1713735700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735700">1</a> by Scott Stroz
		posted on 10/12/2011 at 8:10 PM
		</div>
		<div class="comment_text"><p>That is badass.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735703">2</a> by Dave Ferguson
		posted on 10/12/2011 at 9:01 PM
		</div>
		<div class="comment_text"><p>Holy crap this is cool.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735707">3</a> by Mikel
		posted on 10/12/2011 at 9:52 PM
		</div>
		<div class="comment_text"><p>Wow, so cool!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735702">4</a> by Bob Chesley
		posted on 10/13/2011 at 3:57 AM
		</div>
		<div class="comment_text"><p>Buying PhoneGap was a smart move Adobe.  Glad to see it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735701">5</a> by Bart Buijze
		posted on 10/13/2011 at 10:56 AM
		</div>
		<div class="comment_text"><p>Cool - and funny</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735708">6</a> by Patrick Whittingham
		posted on 11/3/2011 at 10:48 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Here did you find the following JavaScript files?</p><p>elizabot.js<br>elizadata.js</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735705">7</a> by Raymond Camden
		posted on 11/3/2011 at 10:56 PM
		</div>
		<div class="comment_text"><p>From the file:</p><p>  elizabot.js v.1.1 - ELIZA JS library (N.Landsteiner 2005)<br>  Eliza is a mock Rogerian psychotherapist.<br>  Original program by Joseph Weizenbaum in MAD-SLIP for "Project MAC" at MIT.<br>  cf: Weizenbaum, Joseph "ELIZA - A Computer Program For the Study of Natural Language<br>      Communication Between Man and Machine"<br>      in: Communications of the ACM; Volume 9 , Issue 1 (January 1966): p 36-45.<br>  JavaScript implementation by Norbert Landsteiner 2005; &lt;<a href="http://disq.us/url?url=http%3A%2F%2Fwww.masserk.at%3AoXV2PvvcBK238-kol_Oi8kFUqDk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.masserk.at">http://www.masserk.at</a>&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735706">8</a> by Patrick Whittingham
		posted on 6/11/2012 at 9:29 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I'm looking to implement this code and the "readySpeakService()" function doesn't start. I have the two java files and I created 1 phonegap.constructor and the 'alert' message doesn't start.<br>Any ideas?</p><p>Thanks,<br>Pat</p><p>tts.js<br>======================================================================================</p><p>PhoneGap.addConstructor(function() { alert("add constructor");<br>    PhoneGap.addPlugin("tts", new TTS());<br>    PhoneGap.addPlugin("speechrecognizer", new SpeechRecognizer());<br>// @deprecated: No longer needed in PhoneGap 1.0. Uncomment the addService code for earlier <br>// PhoneGap releases.<br>//     PluginManager.addService("TTS", "com.phonegap.plugins.speech.TTS");<br>});</p><p>plugins.xml<br>========================================================================================</p><p>	&lt;plugin name="TTS" value="com.phonegap.plugins.speech.TTS"/&gt;<br>	&lt;plugin name="SpeechRecognizer" value="com.urbtek.phonegap.SpeechRecognizer"/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735709">9</a> by Raymond Camden
		posted on 6/11/2012 at 10:48 PM
		</div>
		<div class="comment_text"><p>Sorry, no. I haven't used this plugin in a while.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735710">10</a> by Ravi Shanker Yadav
		posted on 12/9/2013 at 3:12 PM
		</div>
		<div class="comment_text"><p>I have failed to find plugin for TTS and speech recognizer <br>Please send me these plugin at my email: ravi123shanker.yadav@gmail.com<br>Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735704">11</a> by Raymond Camden
		posted on 12/9/2013 at 4:33 PM
		</div>
		<div class="comment_text"><p>Ravi, <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fmacdonst%3Ftab%3Drepositories%3AvsYt8FKViardrTnjydm736a1c5w&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/macdonst?tab=repositories">https://github.com/macdonst...</a>.</p></div>
	</div>
</div>
		