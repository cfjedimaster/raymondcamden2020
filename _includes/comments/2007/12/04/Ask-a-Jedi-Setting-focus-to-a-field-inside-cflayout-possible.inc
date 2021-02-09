
<div class="comment" id="c_1713674938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674938">1</a> by Todd Rafferty
		posted on 12/5/2007 at 5:12 AM
		</div>
		<div class="comment_text"><p>Holy bold code text Batman.  Sup with that? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674932">2</a> by Raymond Camden
		posted on 12/5/2007 at 7:26 AM
		</div>
		<div class="comment_text"><p>Eh? I don't see any bold text. FF/OSX.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674935">3</a> by Todd Rafferty
		posted on 12/5/2007 at 7:31 AM
		</div>
		<div class="comment_text"><p>Yeah, I'm on FF/Windows.  Your code areas are suddenly bold.  Just pointing it out, nothing more.  Poke me if you need a screenshot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674942">4</a> by Raymond Camden
		posted on 12/5/2007 at 7:33 AM
		</div>
		<div class="comment_text"><p>Well, is it readable? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674940">5</a> by Michael Brennan-White
		posted on 12/5/2007 at 4:53 PM
		</div>
		<div class="comment_text"><p>Should this work if I place the js code in a htmlhead block?</p><p>I must have missed something if it should.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674948">6</a> by Keith Dodd
		posted on 12/5/2007 at 5:40 PM
		</div>
		<div class="comment_text"><p>Thanks, Ray.<br>Had been beating my head trying figure out how to do this on a form inside cfwindow.<br>The example you gave worked fine in cfwindow, too.</p><p>Keith</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674947">7</a> by Raymond Camden
		posted on 12/5/2007 at 7:19 PM
		</div>
		<div class="comment_text"><p>Michael: What happens when you do that? I never use cfhtmlhead. I don't like it much.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674950">8</a> by TD
		posted on 6/11/2008 at 5:08 AM
		</div>
		<div class="comment_text"><p>Does anyone know how to set the focus in a field, in a page, being called to the "center" of a cflayout via"<br>ColdFusion.Layout.collapseArea('HomeLayout','left'); ColdFusion.navigate('formPage.cfm', 'main');"</p><p>I tried your above post but received errors, and never got the focus...is the script and ajaxonload able to be in the page being opened?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674945">9</a> by Brian K
		posted on 8/15/2008 at 1:49 AM
		</div>
		<div class="comment_text"><p>TD</p><p>I found a solution to this.  It seems that IE has a problem setting focus on a new element added to the DOM (FF works fine, of course).</p><p>To get around this, do exactly what Ray showed above but add <a href="http://disq.us/url?url=http%3A%2F%2Fmyfield.select%3AmhwHHArp_gHMHPxoI5TiIaQRdKE&amp;cuid=3321886" rel="nofollow noopener" title="myfield.select">myfield.select</a>() before the myfield.focus().  Place the script on the main page (mine works both inside and outside of the head tag) and place the ajaxonload on the page you're loading (in my case, I'm loading the page into a cfdiv).  Hope that helps.</p></div>
	</div>
</div>
		