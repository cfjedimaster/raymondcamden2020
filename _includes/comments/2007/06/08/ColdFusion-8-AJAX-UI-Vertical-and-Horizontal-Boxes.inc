
<div class="comment" id="c_1713666901">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666901">1</a> by Scott P
		posted on 6/9/2007 at 6:18 AM
		</div>
		<div class="comment_text"><p>Ray - 404 on the demo links. Think they are missing the layout directory - /demos/layout/layout10.cfm</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666902">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666902">2</a> by Raymond Camden
		posted on 6/9/2007 at 8:03 AM
		</div>
		<div class="comment_text"><p>Should be fixed now. I also fixed the stray sentence at the end. I also fixed the second code block. I swear I'm not drinking tonight - but man I screwed up that blog post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666903">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666903">3</a> by todd sharp
		posted on 6/9/2007 at 4:05 PM
		</div>
		<div class="comment_text"><p>I kind of see this as a way for those not too saavy with CSS to get a horizontal layout.  If you had no idea how to float a div these tags would come in handy I suppose.  You do get the added benefit of being able to provide Ajax content in the layoutareas with a dynamic source though, correct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666905">4</a> by Justin Carter
		posted on 6/9/2007 at 4:58 PM
		</div>
		<div class="comment_text"><p>I'm a little stumped by the use for cflayout with hbox and vbox as well, because it would be just as easy to use divs with appropriate class names and CSS (probably less typing that way infact).</p><p>I guess the useful part is in the "source" attribute of the cflayoutarea tag. So in addition to the simple layout functionality, you might have shared pieces of UI which could easily be used throughout an application or you might be building the UI at runtime (remembering this is an Ajax feature). I can't really think of a good example of why it would be necessary or why you couldn't do it another way though...</p><p>Maybe someone like Peter Bell will find a use for it :) Hehe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666912">5</a> by andrea
		posted on 6/9/2007 at 8:55 PM
		</div>
		<div class="comment_text"><p>Now think all this staff will be great ( exept hbox and vbox that looks to me a bad way to avoid 2 lines of css )for application admin panels and peculiar rendered pages on web sites.<br>My point is that I can easily add tab staff extc... in a easy way ( see jquery etc...) saving a lof of K of js.<br>By the other hand I will surely use cflayout to replace frames with a better standard solutions as cflayout looks like.<br>What I hope is that there will be a great attention to w3c standards ( example: all the div created bu CF8 have a _CF_88888.... class, when a class or name and so on must start with a letter to be validate).<br>Really hope do not have to choose do not use these features  for keeping my pages code clean.<br>The same for cfwindow type html.....in my source I do not see really nothing o html code....<br>What you think about??<br>Andrea</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666910">6</a> by ziggy
		posted on 6/11/2007 at 11:35 AM
		</div>
		<div class="comment_text"><p>&gt;&gt;you should probably mention that the first example also adds ten additional javascript and css files (about 325K) to the weight of your page.</p><p>That's from the last blog post and is insane. The ajax file alone was 30kb!</p><p>On this one the first css file is 21kb and the 2nd is 60kb! That's also insane.</p><p>All of this layout stuff looks like total crap to be avoided. Anyone intelligent would surely prefer his own css file and a little jquery file and plugin that could do a heck of a lot more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666906">7</a> by Justin Carter
		posted on 6/11/2007 at 11:44 AM
		</div>
		<div class="comment_text"><p>Well, you don't have to use the built-in functionality... It's just nice to have if you need to create something quick and simple (where CF is sometimes incredibly powerful!) and where the page weights don't matter. If you were using this for an internal application on a gigabit LAN then even 400kb of JS and CSS is nothing to worry about, and it gets cached on the client anyway.</p><p>You would definitely not use it on a public facing web site where your target audience would include dial-up users or other users which needed the site to be totally accessible.</p><p>So it can go both ways. Just because it exists doesn't mean it's bad... If it suits, use it! If it doesn't suit, don't use it :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666909">8</a> by Raymond Camden
		posted on 6/11/2007 at 5:20 PM
		</div>
		<div class="comment_text"><p>ziggy - You need to remember this is still beta. If I were them I'd be worried about shrinking the JS _after_ I let folks test out the features.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666911">9</a> by ziggy
		posted on 6/11/2007 at 9:23 PM
		</div>
		<div class="comment_text"><p>Why would they not shrink it for a beta? They could even have a compressed/non-compressed attribute.</p><p>I don't see how they're going to shrink those sizes down much on a final release. Yui was a bad choice I think anyway for quick add-ins. I'm all for some built in js validators and such if you want it and MAYBE some html/css shortcuts but it can't be too well thought out if they're getting sizes like that to start. My site's jquery js is about 26kb with a nice menu and all sorts of onload functions. The "ajax" and "rapid development" hype is what they're after but once you look at it whose going to use it?</p><p>&gt;&gt;if you need to create something quick and simple and where the page weights don't matter.</p><p>rare, and if for a company lan, they'd do it right, not use these things I'd imagine.</p><p>Well, no harm done if not using them anyway :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666907">10</a> by matt
		posted on 1/15/2009 at 4:43 AM
		</div>
		<div class="comment_text"><p>a little unrelated, but...</p><p>with the ajax ui stuff in coldfusion (specifically &lt;cflayout type="tab"&gt; in my case), is there a way to use window.onload events?</p><p>i am attempting to use a script for zebra striping tables, but i'm having a hard time nailing down exactly where to put this code to make it work.</p><p>as it stands, it is almost as if the browser never "sees" the html behind the content because if you view source on a tabbed cflayout, there is no source there, just empty divs for every tab. this is clearly impossible though, because the content is rendered.</p><p>can anyone help me understand what is going on?</p></div>
	</div>
</div>
		