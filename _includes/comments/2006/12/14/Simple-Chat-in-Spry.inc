
<div class="comment" id="c_1713660250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660250">1</a> by Thomas Messier
		posted on 12/14/2006 at 8:06 PM
		</div>
		<div class="comment_text"><p>Speed issues aside, your demo works well. One thing I'd suggest is to use JSON instead of XML since you didn't seem to enjoy the XML/javascript experience so much. I personally am not a fan of javascript and ever since JSON came around I don't use it anymore. Get CFJSON and say bye bye to XML.</p><p>I recently had a problem where I needed to communicate with my girlfriend but they blocked all the IM services at her work (even the web messengers). SO I just ended up writing my own IM app and ran it on my web server, worked beautifully. It was a CF solution storing messages in application scope. Similar concept to this, although here you need to keep messages longer and the application scope will fill-up much faster, whereas my app just cleared the the message once it was received. I actually had a javascript API and everything so anybody could customize it. I kind of shelved it, maybe I should revive it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660260">2</a> by Danilo Celic
		posted on 12/14/2006 at 8:14 PM
		</div>
		<div class="comment_text"><p>* Caveat * Not done this myself yet...</p><p>Try XPath filtering:<br><a href="http://disq.us/url?url=http%3A%2F%2Flabs.adobe.com%2Ftechnologies%2Fspry%2Fsamples%2FXPathFilteringSample.html%3AV7P7vKDpEaYhiv7T62sxa-zlmCE&amp;cuid=3321886" rel="nofollow noopener" title="http://labs.adobe.com/technologies/spry/samples/XPathFilteringSample.html">http://labs.adobe.com/techn...</a><br>and use the Spry repeat region code.</p><p>I'd probably use the Data Set Explorer to help with figuring out the XPath:<br><a href="http://disq.us/url?url=http%3A%2F%2Flabs.adobe.com%2Ftechnologies%2Fspry%2Fsamples%2FDataSetExplorer.html%3ALEQgq228hYNs2Nfc29WM3JHbigU&amp;cuid=3321886" rel="nofollow noopener" title="http://labs.adobe.com/technologies/spry/samples/DataSetExplorer.html">http://labs.adobe.com/techn...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660264">3</a> by Raymond Camden
		posted on 12/14/2006 at 8:19 PM
		</div>
		<div class="comment_text"><p>Danilo - I specifically stayed away from DataSets as I wasn't going to be displaying them - and I _believe_ a DS won't load unless you use it on the page. I need to look into that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660258">4</a> by Danilo Celic
		posted on 12/14/2006 at 11:10 PM
		</div>
		<div class="comment_text"><p>It seems that you're taking the response from the server, your custom data set, and then looping over it to add values to some display element, in your example, two spans with a trailing line break are repeated for each item in your data set. So you could apply to the wrapper div_chat opening tag:<br>spry:region="dsYourDataSet"<br>and add an "item" wrapper div around your spans and apply:<br>spry:repeat="dsYourDataSet"</p><p>One thing you'd need to consider is caching, and I think that that is handled with:<br>dsYourDataSet.useCache = false;</p><p>Anyway, this is  whole lot of talk about nothing on my part, as I've not done this yet. With the amount of time I've spent typing this up I probably could have gotten to work on a sample to test out my claims.</p><p>Good luck in getting this to work well for you!</p><p>I've also run into issue with getting XML dom navigation working well for me. As you've found out, it's time consuming to work your way down through chatNode.getElementsByTagName("message")[0].childNodes[0].nodeValue. I think that's where the XPath could be helpful, but not sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660261">5</a> by Raymond Camden
		posted on 12/14/2006 at 11:13 PM
		</div>
		<div class="comment_text"><p>I can't use a dataset and a spry region because I'm not returning the full chat set. I'm returning just the chats since your last ping.</p><p>(Note - I can use a dataset and NO region. I'll be blogging on that later.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660263">6</a> by Danilo Celic
		posted on 12/15/2006 at 8:41 PM
		</div>
		<div class="comment_text"><p>I see now. I was thinking that the new data would be dropped into the region, but if you did something like that then it would wipe out the previous messages. So for what I was thinking, it might be a two step process, have a hidden Spry repeat region, and when its data is loaded, copy the HTML over into the display DIV.</p><p>Not quite a simple operation, given that you already have a working example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660259">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660259">7</a> by Raymond Camden
		posted on 12/16/2006 at 7:45 AM
		</div>
		<div class="comment_text"><p>the Spry guys sent me an example of how it could be done. I'm planning two followup posts. One showing how xml handling is a hell of a lot easier in spry 1.4, and one how it could be done with datasets.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660262">8</a> by ITL
		posted on 4/11/2007 at 6:52 PM
		</div>
		<div class="comment_text"><p>Just wanted to let you know that it doesn't work in IE 7, is this a known issue? Does someone has faced the issue before and has a work around..I'm not a fan of IE 7 but we need to have something working in all the browsers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660266">9</a> by Raymond Camden
		posted on 4/11/2007 at 7:57 PM
		</div>
		<div class="comment_text"><p>It works now. I just added a random date to the URL. I didn't update the zip, but just view source and you will see the change.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660267">10</a> by ITL
		posted on 4/11/2007 at 8:32 PM
		</div>
		<div class="comment_text"><p>You're the MAN!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660270">11</a> by Mel
		posted on 9/29/2009 at 11:33 PM
		</div>
		<div class="comment_text"><p>I wanted to look at your CFML for a chat engine, but it does not appear to be working.  The 10th comment from April 2007 talks to adding a random date to the url and I am trying to figure that out as there is no source to view, only a 404 error.</p><p>Thanks much.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660273">12</a> by Raymond Camden
		posted on 9/30/2009 at 12:36 AM
		</div>
		<div class="comment_text"><p>I no longer support the demo online (do note that this blog entry is close to 4 years old). You can still download the code though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660276">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660276">13</a> by Ron
		posted on 8/1/2011 at 8:40 PM
		</div>
		<div class="comment_text"><p>Granted that this post is old, but I have found a use for it on a company intranet. One thing I was wondering.. how hard do you think it would be to add sound, as in when a new message is sent by a user. Or perhaps to make the window take focus?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660278">14</a> by Raymond Camden
		posted on 8/2/2011 at 12:50 AM
		</div>
		<div class="comment_text"><p>I think you can just use an embed to play a sound. You can use the audio tag if you don't mind multiple formats and html5 browsers only.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713660275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713660275">15</a> by Ron
		posted on 8/5/2011 at 8:32 PM
		</div>
		<div class="comment_text"><p>Ray, thanks!</p><p>That got me thinking. I added an embed because I'm also dealing with IE6/7 browsers and it works. The embed is in the <br>div_chat see below, just add brackets.</p><p>div id="div_chat" class="chat_main"</p><p>embed src='chime.wav' autostart='true' hidden='true' loop='false'</p><p>/div</p><p>-Ron</p></div>
	</div>
</div>
		