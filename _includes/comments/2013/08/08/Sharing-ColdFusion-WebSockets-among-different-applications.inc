
<div class="comment" id="c_1713748099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748099">1</a> by Ty Whalin
		posted on 8/9/2013 at 12:06 AM
		</div>
		<div class="comment_text"><p>Hi Ray, has been a few since I commented on something. Nice chat option for any CF site. Took a quick look at it for a few minutes. The only question I got is about the Application files. The way it is coded, is that cfscript or OOP? Reminds me of OOP. Hope that is not to silly of a question, just not the usual way for me when programming with CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748102">2</a> by Raymond Camden
		posted on 8/9/2013 at 12:09 AM
		</div>
		<div class="comment_text"><p>I hate to say it is a silly question (grin), but it is a badly worded question. "Script" is a way to write code in terms of syntax. OOP is a way to *organize* your code. You can do OOP in CF with all tags. Most advanced developers though prefer script as it is quicker, especially for stuff that isn't doing any output - just logic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748098">3</a> by Ty Whalin
		posted on 8/9/2013 at 12:20 AM
		</div>
		<div class="comment_text"><p>So would it be safe to say that when CF tags are looked at behind the scenes, this is what it looks like; JAVA more less? Reminds me of AS a lot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748103">4</a> by Raymond Camden
		posted on 8/9/2013 at 12:31 AM
		</div>
		<div class="comment_text"><p>Um - well - CF gets compiled down into Java bytecode. All scripting languages look similar in some ways I suppose. I think you would say cfscript looks closer to Java than cftags do, but it's really not something I'd use as an example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748104">5</a> by Ty Whalin
		posted on 8/9/2013 at 1:21 AM
		</div>
		<div class="comment_text"><p>I was referring more to what makes the CF tags tick. Someone may have a tag on the page they are coding, but what does it look like behind the scenes to make it work. Because technically, is CF not actually JAVA in the background? :) Appreciate your input by the way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748100">6</a> by Micah
		posted on 8/9/2013 at 2:48 AM
		</div>
		<div class="comment_text"><p>The CF server is written in java but as far as I dont think the CF code is compiled to java.  It justs gets interpreted then passed to the client.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748105">7</a> by Ty Whalin
		posted on 8/9/2013 at 3:25 AM
		</div>
		<div class="comment_text"><p>@micah - That makes perfect sense to me. You ever looked at the view source of a browser and noticed the code printed for the cfform? Looks something like this: _CF_submit_status["CFForm_1"]=null; it is actually javascript. But the tag still has to be interpreted on the server and then output. All other tags of non form type are interpreted as well by the server but never output to the page as the cfform tag gets output. So overall you are correct from my understanding.</p><p>The code is processed by the CF Server which is JAVA as Ray stated as well. This is my meaning by the fact I believed CF tags are being processed/compiled behind the scenes with JAVA. Definitely more advanced programming happening if you can do it that way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748107">8</a> by Micah
		posted on 8/9/2013 at 5:47 AM
		</div>
		<div class="comment_text"><p>"All other tags of non form type are interpreted as well by the server but never output to the page as the cfform tag gets output. "</p><p>Im not sure I understand what your getting at here.  The other CF tags as well as their logic and formatting (if they are done correctly of course) are output as well.  Maybe im totally missing what your getting at.  BTW, this would not even be close to the first time this has happened.<br>The cfform (again, depending on the attributes and other logic built into the cfform) will build js logic in the client webcode as that is passed on to the next page for processing or will be used for client-side js processing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748108">9</a> by m@
		posted on 8/9/2013 at 1:17 PM
		</div>
		<div class="comment_text"><p>Hi Ty,</p><p>Why not download the source code for the opensource cfml server Railo and take a look around, it isn't that hard to follow.<br>I recommend all developers have a deeper understanding of whats going on under the hood.</p></div>
	</div>
</div>
		