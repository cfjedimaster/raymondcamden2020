
<div class="comment" id="c_1713673522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673522">1</a> by Joshua Curtiss
		posted on 10/22/2007 at 9:45 PM
		</div>
		<div class="comment_text"><p>AMEN.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673508">2</a> by Charlie Arehart
		posted on 10/22/2007 at 10:02 PM
		</div>
		<div class="comment_text"><p>Ray, I want to make sure I understand your question/concern. Are you saying that the only you info you have is some document with that phrase, saying to look at the WSDL to find out its available methods and expected arguments?</p><p>Well, the good news is that while you may not want to parse apart the native XML, fortunately there are tools that will do that job for you.</p><p>For instance, for those not using DW (more below), there are web-based interfaces like <a href="http://disq.us/url?url=http%3A%2F%2Fxmethods.net%2Fve2%2FTools.po%3AQqWmEc3q7ADWZzMeyNq9tKIYiHY&amp;cuid=3321886" rel="nofollow noopener" title="http://xmethods.net/ve2/Tools.po">http://xmethods.net/ve2/Too...</a> and <a href="http://disq.us/url?url=http%3A%2F%2Fwww.mindreef.net%2Ftide%2Fscopeit%2Fstart.do%3AUCM5Io7VVcKijfpeC-XJhpz7aJk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mindreef.net/tide/scopeit/start.do">http://www.mindreef.net/tid...</a> (though the latter is responding poorly today for some reason, but I used it just last week.)</p><p>Those using Dreamweaver should note that ittoo has a nice built-in feature to do that sort of web service browsing, and more. Many miss it (and some use it as one of the few reasons they fire up DW).</p><p>If you've ever used the CFC browser feature, it works the same and is in the same place, on the Application panel, in the "components" tab, where you select "web services" from the drop down. Then you can point it at any WSDL URL. It will report all the methods and their arguments. Even better, if you drag a method onto the code window, it will build a CFINVOKE to call it.</p><p>Sadly, as far as I could tell, neither CFEclipse nor the Adobe Eclipse plugins seem to offer that for Eclipse, but I'm sure some other tool does, and someone will tell us.</p><p>I did a talk on all this at last year's CFUnited, for anyone interested in more on "web services tricks and tips" in CFML, the PDF of the slides (lots of detail) is at <a href="http://disq.us/url?url=http%3A%2F%2Fcarehart.org%2Fpresentations%2F%23websvctips%3A2r1L5mPoyWqk29rwzI2xphtFmhA&amp;cuid=3321886" rel="nofollow noopener" title="http://carehart.org/presentations/#websvctips">http://carehart.org/present...</a>.</p><p>Finally, Ray, if this isn't what you were looking for and you already knew already knew all this, I hope it will help others who may come along and read it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673527">3</a> by Raymond Camden
		posted on 10/22/2007 at 10:07 PM
		</div>
		<div class="comment_text"><p>Well, my main point was to gripe about the docs. I know there are tools that can parse WSDL, but why isn't... the company who shall remain nameless... providing decent docs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673521">4</a> by Raymond Camden
		posted on 10/22/2007 at 10:09 PM
		</div>
		<div class="comment_text"><p>Hey Charlie - I can't pick Web Services from the drop down. If I remember right, this feature didn't ship with the Mac DW.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673530">5</a> by Jason
		posted on 10/22/2007 at 10:35 PM
		</div>
		<div class="comment_text"><p>The adobe plug-in does offer web service browsing.  Just open the "Services Browser" view, then next to the minimize button on that tab click the little "server with the world".  You can then add WSDL locations and view the methods etc.  Of course insert the cfinvoke /createobject code as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673526">6</a> by Raymond Camden
		posted on 10/22/2007 at 10:40 PM
		</div>
		<div class="comment_text"><p>Interesting. I never knew about that. Thanks. But I'm not sure it is complete. For the WSDL I'm looking at there are things in there I'm not seeing via the Services Browser.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673524">7</a> by Charlie Arehart
		posted on 10/22/2007 at 11:08 PM
		</div>
		<div class="comment_text"><p>@Ray, I don't use DW on the Mac so I'm afraid I can't say if the option is there. Anyone else know? Follow the instructions above and let us know if you see web services as an available option. (I can't see why it would be Windows-specific, but stranger things have happened.)</p><p>@Jason, thanks very much for the pointer to the WS browser in the Services browser. I'd just missed it (since it's so far off to the right). So that's a world icon, eh? Too small at my monitor's resolution to perceive that. :-)</p><p>As for the creation of invocation code, I'll clarify for other newcomers to it that it's not a drag and drop operation as in DW, but rather you right-click either on the WS name (parent object in the tree) or on a method name. It's nice that it supports more than just the CFINVOKE DW does: CFOBJECT and createObject on the WS name, CFInvoke and createobject on a method name.</p><p>Finally, Ray, as for it not showing the methods you expect, I guess we won't be able to confirm that unless you spill the beans on the WSDL URL. :-) But maybe someone with familiarity with the Adobe Eclipse Services Browser can chime in with any known limitations.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673510">8</a> by Theo
		posted on 10/27/2007 at 8:46 PM
		</div>
		<div class="comment_text"><p>And API documentation is not documentation.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.iconara.net%2F2007%2F01%2F13%2Fapi-documentation-is-not-documentation%2F%3AWdBzgDLLSyyfthT7_1RP0fmXbvo&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.iconara.net/2007/01/13/api-documentation-is-not-documentation/">http://blog.iconara.net/200...</a></p></div>
	</div>
</div>
		