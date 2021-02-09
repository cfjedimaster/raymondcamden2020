
<div class="comment" id="c_1713656489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656489">1</a> by Scott Stroz
		posted on 8/18/2006 at 8:39 PM
		</div>
		<div class="comment_text"><p>Personally, I think you should redirect them to pr0n.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656500">2</a> by Dan
		posted on 8/18/2006 at 8:56 PM
		</div>
		<div class="comment_text"><p>I had problem with this before.</p><p>I went the pr0n route - but that's only if you check the referer.</p><p>They deserve it.  They really do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656501">3</a> by Steve Bryant
		posted on 8/18/2006 at 9:10 PM
		</div>
		<div class="comment_text"><p>Just as a code nit, I try to avoid adding JavaScript to the onload attribute of the body tag (actually, I prefer to use Unobtrusive JavaScript and keep by JS out of my HTML completely).</p><p>As such, I typically use addEvent() for this purpose.</p><p>I would have the following code in my .js file. This will allow you to add multiple events to your page load and none of the need worry about whether others exist.</p><p>//use once (from <a href="http://disq.us/url?url=http%3A%2F%2Fonlinetools.org%3Ati2ToW7Gy9x3ciYqAuc6za5SGMA&amp;cuid=3321886" rel="nofollow noopener" title="onlinetools.org">onlinetools.org</a>)<br>function addEvent(obj, evType, fn) {<br>	if (obj.addEventListener){<br>		obj.addEventListener(evType, fn, true);<br>		return true;<br>	} else if (obj.attachEvent){<br>		var r = obj.attachEvent("on"+evType, fn);<br>		return r;<br>	} else {<br>		return false;<br>	}<br>}<br>function frameBuster() {<br>	if(top != self){<br>		top.location.href=self.location.href<br>	}<br>}<br>addEvent(window,'load',frameBuster);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656499">4</a> by Joel Cox
		posted on 8/18/2006 at 9:27 PM
		</div>
		<div class="comment_text"><p>Some personal firewalls block the body onload scripts from firing. An easy workaround is to add this instead:</p><p>&lt;script&gt;<br>function init() {<br>if(top != self) top.location.href=self.location.href;<br>}<br>onload=init;<br>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656505">5</a> by Cutter
		posted on 8/18/2006 at 9:28 PM
		</div>
		<div class="comment_text"><p>Just out of curiosity, what does this do to your site stats? Would it count as to views? The one initially framed page and the afterwards frame busted page?....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656506">6</a> by Raymond Camden
		posted on 8/18/2006 at 9:35 PM
		</div>
		<div class="comment_text"><p>Cutter, it would count twice.</p><p>Steve/Joel: GOod points, but, I want to keep this short and simple. If a firewall blocks the script, it isn't the end of the world for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656512">7</a> by Rob Brooks-Bilson
		posted on 8/18/2006 at 10:07 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>If you're going to use JS to do the redirect for pages that frame you, it might be interesting to append a URL token to the redirect, something like ?framebusted=1, so that you can filter it out in the blog stats program you use, or google analytics.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656508">8</a> by Larry C. Lyons
		posted on 8/18/2006 at 10:14 PM
		</div>
		<div class="comment_text"><p>&gt; Personally, I think you should redirect them to pr0n.</p><p>A friend of mine had something of this problem a couple of years ago. Someone else was leeching his site's content. So what he did is redo his site so that the images were replaced with mostly obscured pRon. Then he put a message on them that said "---.com is stealing these images. Until they stop, a lot more of this image will be revealed." Much to the dissappointment (I imagine) of at least some users, the leech stopped after a couple of days.</p><p>Myself, I've just used Ray's approach.</p><p>larry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656507">9</a> by Scott Stroz
		posted on 8/18/2006 at 10:22 PM
		</div>
		<div class="comment_text"><p>Rob - Not sure if you noticed, but your site is being pillaged as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656513">10</a> by Rob Brooks-Bilson
		posted on 8/18/2006 at 10:50 PM
		</div>
		<div class="comment_text"><p>Thanks Scott - I just noticed that after reading this post.  I slapped Ray's original code in (to make diffing easier).  That's part of why I suggested adding a URL string so it could be more easily tracked.</p><p>It'll be interesting to see how much traffic comes from their aggregator.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656511">11</a> by Steve Bryant
		posted on 8/19/2006 at 12:19 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>You might consider replacing:<br>top.location.href=self.location.href;</p><p>with:</p><p>top.location.replace(self.location.href);</p><p>This just replaces their frame with your page in the users history so that when they hit the "Back" button they don't get forward back to your page (after all, messing with the "Back" button is major bad mojo for usability).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656509">12</a> by John Dowdell
		posted on 8/19/2006 at 1:23 AM
		</div>
		<div class="comment_text"><p>If you're looking for a good redirect page, then this seems a likely candidate:<br><a href="https://disq.us/url?url=https%3A%2F%2Fwww.google.com%2Fsupport%2Fadsense%2Fbin%2Fanswer.py%3Fanswer%3D18386%3ArVYGd7B5eknR08jyFHJlkqDfO-o&amp;cuid=3321886" rel="nofollow noopener" title="https://www.google.com/support/adsense/bin/answer.py?answer=18386">https://www.google.com/supp...</a></p><p>There's info on their policies here:<br>   "Any method that artificially generates clicks or impressions is strictly prohibited. These prohibited methods include but are not limited to: repeated manual clicks or impressions, incentives to click or to generate impressions, using robots, automated click and impression generating tools, third-party services that generate clicks or impressions such as paid-to-click, paid-to-surf, autosurf, and click-exchange programs, or any deceptive software."<br><a href="https://disq.us/url?url=https%3A%2F%2Fwww.google.com%2Fadsense%2Fpolicies%3Fsourceid%3Dasos%26subid%3Dww-ww-et-resource_box%26medium%3Dlink%3Aa-GQXicn1rrX7rF8JkvbguwlZfk&amp;cuid=3321886" rel="nofollow noopener" title="https://www.google.com/adsense/policies?sourceid=asos&amp;subid=ww-ww-et-resource_box&amp;medium=link">https://www.google.com/adse...</a></p><p>Sounds like a robot to me...?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656515">13</a> by Chris Scott
		posted on 8/19/2006 at 6:51 AM
		</div>
		<div class="comment_text"><p>You might as well know the email and phone number of the jerk who thinks this is a good idea, no?</p><p>omain:                          AMSAY.COM<br>created:                         16-Sep-2005<br>last-changed:                    11-May-2006<br>registration-expiration:         16-Sep-2006</p><p>nserver:                         <a href="http://disq.us/url?url=http%3A%2F%2Fns29.1and1.com%3AKZZtT3tlTn9SCQLRuS-hqhPc8Zg&amp;cuid=3321886" rel="nofollow noopener" title="ns29.1and1.com">ns29.1and1.com</a> 217.160.224.2<br>nserver:                         <a href="http://disq.us/url?url=http%3A%2F%2Fns30.1and1.com%3AjqYzTBGSyWZ3En_2AYyMXV-hwMY&amp;cuid=3321886" rel="nofollow noopener" title="ns30.1and1.com">ns30.1and1.com</a> 217.160.228.2</p><p>status:                          CLIENT-TRANSFER-PROHIBITED</p><p>registrant-firstname:            King<br>registrant-lastname:             Wang<br>registrant-organization:         cnight.<br>registrant-street1:              unit a 18/f<br>registrant-pcode:                11001<br>registrant-state:                AL<br>registrant-city:                 sun<br>registrant-ccode:                US<br>registrant-phone:                +43.2448276433<br>registrant-email:                playmsg@gmail.com</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656520">14</a> by Raymond Camden
		posted on 8/20/2006 at 5:57 AM
		</div>
		<div class="comment_text"><p>Steve, I made your change both on my blog and in blogcfc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656486">15</a> by Tom Mollerus
		posted on 8/20/2006 at 7:38 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Right now when I go on the <a href="http://disq.us/url?url=http%3A%2F%2Famsay.com%3AkBdR-yfdKYw-mbO25Y0yyDquo3U&amp;cuid=3321886" rel="nofollow noopener" title="amsay.com">amsay.com</a> site, your redirect code works very quickly. But while I was on vacation last week I accessed the same page, and the frame with your page took so long to load that the onLoad event effectively never occurred. Is there any reason not to run the script immediately in the page header instead of putting it in an onload event?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656488">16</a> by Tom Mollerus
		posted on 8/20/2006 at 7:40 PM
		</div>
		<div class="comment_text"><p>I meant to mention in the previous posting that while on vacation I was on a slower computer using a browser that seems to have had trouble loading some images. The point is that you can't always depend on the onLoad event firing in a timely manner.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656491">17</a> by Larry C. Lyons
		posted on 8/20/2006 at 8:05 PM
		</div>
		<div class="comment_text"><p>ironically enough, if you go to <a href="http://disq.us/url?url=http%3A%2F%2Famsay.com%3AkBdR-yfdKYw-mbO25Y0yyDquo3U&amp;cuid=3321886" rel="nofollow noopener" title="amsay.com">amsay.com</a> and look at the entry for Ray, its about the frame busting.</p><p>larry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656504">18</a> by Raymond Camden
		posted on 8/20/2006 at 9:54 PM
		</div>
		<div class="comment_text"><p>Tom, thanks for the warning. I put it in the onLoad just because. I'm ok if it isn't 100% effective.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656517">19</a> by Stephen Moretti
		posted on 8/21/2006 at 12:37 PM
		</div>
		<div class="comment_text"><p>Charlie Arehart is also afflicted by this nastiness.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656524">20</a> by Says So
		posted on 8/22/2006 at 4:10 PM
		</div>
		<div class="comment_text"><p>That guy makes your page show up in a frame, also he has google adsense ads running beside the pages he steals, this is a violation of the Google rules, he will loose his google account if you contact Google.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656516">21</a> by Nick Vincent
		posted on 10/18/2006 at 11:00 PM
		</div>
		<div class="comment_text"><p>Does anyone have a simple instruction on how to redirect someone based on the top frame URL?  I've having a few people who are framing my page and I want to redirect users who are coming in from those domain names to go elseware.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656519">22</a> by Raymond Camden
		posted on 10/18/2006 at 11:06 PM
		</div>
		<div class="comment_text"><p>I don't know it off the top of my head, but JavaScript gives you easy access to the current URL. So you should be able to easily get the host, and do:</p><p>if host is a, do x</p><p>else do y</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656521">23</a> by Larry C. Lyons
		posted on 10/18/2006 at 11:13 PM
		</div>
		<div class="comment_text"><p>Here's what I use in Javascript to access the top frame:</p><p>if(self != top ){<br>     top.location.href = location.href;<br>}</p><p>for a starter this should help.</p><p>regards,<br>larry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656518">24</a> by Nick Vincent
		posted on 10/18/2006 at 11:17 PM
		</div>
		<div class="comment_text"><p>Sorry, I'm a real newbie to JS scripting.</p><p>If I'm using</p><p>if(self != top ){<br>top.location.href = location.href;<br>}</p><p>what is the basic code to look at the top URL,<br>say for example <a href="http://disq.us/url?url=http%3A%2F%2Fcnn.com%3A-4260ZtDaKXqXQ-UIYG8MAa7ljQ&amp;cuid=3321886" rel="nofollow noopener" title="cnn.com">cnn.com</a>, and based on that<br>return, spit it to a different place (undesired location)...</p><p>if (top.location.href == "<a href="http://disq.us/url?url=http%3A%2F%2Fcnn.com%3A-4260ZtDaKXqXQ-UIYG8MAa7ljQ&amp;cuid=3321886" rel="nofollow noopener" title="http://cnn.com">http://cnn.com</a>") {<br>top.location.href = "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.gohere.com%3AEdfk7UBqi6Yi5dMmyqdLE0hI2SY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.gohere.com">http://www.gohere.com</a>;<br>}</p><p>Something like that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656523">25</a> by Raymond Camden
		posted on 10/18/2006 at 11:32 PM
		</div>
		<div class="comment_text"><p>Check this -</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.irt.org%2Fxref%2FLocation.htm%3A0_f1ahoWOe1HPrScQYhfjQX9ojc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.irt.org/xref/Location.htm">http://www.irt.org/xref/Loc...</a></p><p>it is a ref to the location object. If you want, you can get the host by itself easily enough.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656525">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656525">26</a> by Nick Vincent
		posted on 10/18/2006 at 11:51 PM
		</div>
		<div class="comment_text"><p>I believe this works...  Anyone see potential pitfalls?</p><p>&lt;script LANGUAGE="JAVASCRIPT"&gt;<br>if (<a href="http://disq.us/url?url=http%3A%2F%2Fwindow.top%3AkXkpO6AkkZFdH0ugi8b5pIHyHyk&amp;cuid=3321886" rel="nofollow noopener" title="window.top">window.top</a> != window.self) <br> {<br> window.top.location="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.cnn.com%3Az62k3PiARI51d8u5PVuObV9SJJI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cnn.com">http://www.cnn.com</a>"<br> }</p><p>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656526">27</a> by Scott Johnson
		posted on 1/24/2008 at 11:03 PM
		</div>
		<div class="comment_text"><p>Not sure how many other people this affects, but I catch up on most blogs through Netvibes. Love the blog, but I have to say that it's a hassle to view with Netvibes. You can either see a feed view, which is abbreviated in your case, or you can view the actual site from within netvibes, which gets broken because of this particular script. Not a huge deal, but most other blogs seem to work just fine one way or the other.</p></div>
	</div>
</div>
		