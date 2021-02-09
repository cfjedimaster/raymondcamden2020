
<div class="comment" id="c_1713729349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729349">1</a> by Michael
		posted on 2/3/2011 at 10:14 AM
		</div>
		<div class="comment_text"><p>Base 64 representations of strings are also sometimes used in windows active directory properties and also in http headers when using http authentication.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729351">2</a> by Raymond Camden
		posted on 2/3/2011 at 7:16 PM
		</div>
		<div class="comment_text"><p>Ah cool - thanks Michael.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729352">3</a> by Joshua Caito
		posted on 2/3/2011 at 7:54 PM
		</div>
		<div class="comment_text"><p>You could also have used the BinaryEncode() function.</p><p>i.e. BinaryEncode(b64,"Base64")</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729353">4</a> by Raymond Camden
		posted on 2/3/2011 at 7:59 PM
		</div>
		<div class="comment_text"><p>Wow, even simpler. Thanks Joshua!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729355">5</a> by Joshua Caito
		posted on 2/3/2011 at 8:00 PM
		</div>
		<div class="comment_text"><p>I meant:<br>&lt;cfset f = BinaryDecode(b64,"Base64") /&gt;<br>for the conversion. Long morning already...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729350">6</a> by Joshua Caito
		posted on 2/3/2011 at 8:06 PM
		</div>
		<div class="comment_text"><p>Alright, I thought I better make right for my faux pas:</p><p>&lt;cfset b64 = 'Pz4gPC9kaXY+PCEtLSBlbmQgcGFnZSAtLT4NCgo8ZGl2I GlkPSJmb290ZXItd3JhcCI+DQoKCTxkaXYgaWQ9ImZvb3RlciIgY2xhc3 M9ImNsZWFyZml4Ij4NCgkNCgkJPHAgaWQ9ImxlZ2FsIj5Db3B5cmlnaHQ gJmNvcHk7IDIwM DggPGEgaHJlZj0iPD8gYmxvZ2lu Zm8oJ3VybCcpOyA/PiI+PD8gYmxvZ2luZm8oJ25h bWUnKTsgPz48 L2E+DQoJCSZidWxsOyA8P3BocCBpZihpc19ob21lKCkpIDogPz48YSBocmVmPSJodHRwOi8vd29yZHByZXNz dGhlbWVzYmFzZS5jb20vIiB0aXRsZT0iV29yZHByZXNzIHRlbXBsYXRlcyI+V2 9yZHByZXNzIHRlbXBsYX RlczwvYT48P3BocCBlbmRpZjsgPz4NCgkNCgk8L2R pdj4NCgk8P3BocCB3cF9mb290ZXIoKTsgPz4NCgo8L2Rpdj48IS0tIGVuZCBm b290ZXItd3Jhc CAtLT4NCgoNCjwvYm9keT4NCjwvaHRtbD4gPD8='&gt;<br>&lt;cfset f = BinaryDecode(b64,"base64") /&gt;<br>&lt;cfset f = charsetEncode(f,"utf-8") /&gt;</p><p>&lt;cfoutput&gt;#f#&lt;/cfoutput&gt;</p><p>That will replace the toString() call and allows you to explicitly specify the binary encoding.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729360">7</a> by Grumpy CFer
		posted on 2/4/2011 at 3:40 PM
		</div>
		<div class="comment_text"><p>Some helper functions for you.  Includes Base64URL functions which is needed for several Google APIs.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FbFb1bBpU%3ANa0wN1vIALxI6EyE_NuKMnq3l8g&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/bFb1bBpU">http://pastebin.com/bFb1bBpU</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729364">8</a> by Raymond Camden
		posted on 2/4/2011 at 8:27 PM
		</div>
		<div class="comment_text"><p>That's nice Grumpy. Any reason you don't want to share your real name? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729362">9</a> by Ben Nadel
		posted on 2/8/2011 at 3:33 AM
		</div>
		<div class="comment_text"><p>I've never had a good handle on the binaryEncode / binaryDecode functions. I've read the docs before, but something about them never clicked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729361">10</a> by Grumpy CFer
		posted on 2/10/2011 at 3:19 PM
		</div>
		<div class="comment_text"><p>Thanks Ray.  No real name because I don't want to get too involved with the community.  I have some very differing opinions on what makes good CF code and don't want to have to defend or spend my time convincing people why I think it's the better approach.  So I just pop up every once in a while, usually to rant, and then lurk again.</p><p>However, this time I got to be helpful.  :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729366">11</a> by Raymond Camden
		posted on 2/10/2011 at 5:04 PM
		</div>
		<div class="comment_text"><p>That's unfortunate. I firmly believe that you should be able to state your opinion even if it is in the minority. I invite you - next time - to go public here. If folks complain, I'll put a stop to it. (Well, if they make it personal. I'm all for a good, respectful argument. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713729365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713729365">12</a> by Terry B
		posted on 7/1/2011 at 7:55 PM
		</div>
		<div class="comment_text"><p>Thanks Grumpy, havent tried them yet but exactly what I was looking for; functions to handle the base64url functions.  Facebook Deauthorize Callback depends on base64url vs base64.</p></div>
	</div>
</div>
		