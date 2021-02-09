
<div class="comment" id="c_1713682571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682571">1</a> by Alan McCollough
		posted on 7/1/2008 at 8:08 PM
		</div>
		<div class="comment_text"><p>Ray, you probably know, but if not, you can find Firebug-like tools in the IE Developer Toolbar (google for it). Equally useful for IE work is HTTP Fiddler, for debugging HTTP traffic between client server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682558">2</a> by Gareth Arch
		posted on 7/1/2008 at 9:19 PM
		</div>
		<div class="comment_text"><p>I'll second Fiddler.  It has helped me debug several IE-only errors that were causing me grief.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682572">3</a> by Daniel Kim
		posted on 7/1/2008 at 9:27 PM
		</div>
		<div class="comment_text"><p>I'm not a JS expert, but I think what is happening is that you are overwriting the mycfc "class" with your instance of it.</p><p>From what I understand, since JavaScript is a prototype-based language, there are no "classes"; everything is an object ( <a href="http://disq.us/url?url=http%3A%2F%2Fdeveloper.mozilla.org%2Fen%2Fdocs%2FCore_JavaScript_1.5_Guide%3AClass-Based_vs._Prototype-Based_Languages%3Ap9KbZ_UpcGAGhza-5Xot3Vencb4&amp;cuid=3321886" rel="nofollow noopener" title="http://developer.mozilla.org/en/docs/Core_JavaScript_1.5_Guide:Class-Based_vs._Prototype-Based_Languages">http://developer.mozilla.or...</a> ). You can create class like objects, but they exist in the same space as instances of it.</p><p>From what I can see, this generated line:</p><p>var _cf_Test=ColdFusion.AjaxProxy.init('/test/cfajaxproxy/Test.cfc','mycfc');</p><p>will pass in the string 'mycfc', and create a "class" like object called 'mycfc' in the global, window scope. This means that "mycfc" exists as an object prior to your code.</p><p>So, this line:</p><p>var mycfc = new mycfc();</p><p>will actually create an "instance", and overwrite the "class" object.</p><p>It's interesting that IE seems to look ahead and freaks out when it sees this and just fails silently.</p><p>I generally try to capitalize the values i put in the jsclassname, so that it leaves the possibility of writing:</p><p>var myCFC = new MyCfc();</p><p>This article provides a decent summary of how to do "oo" like programming with JavaScript, such as creating "class" like objects that have constructors:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.digital-web.com%2Farticles%2Fobjectifying_javascript%2F%3Ap_kp8mP5qomEcQBDDVEZNEv3wtQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.digital-web.com/articles/objectifying_javascript/">http://www.digital-web.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682574">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682574">4</a> by Paul Omond
		posted on 8/30/2008 at 4:29 PM
		</div>
		<div class="comment_text"><p>I had a similar issue, I ended up tracking it down to the fact that my cfc had a remote function called delete (i.e. &lt;cffunction name="delete" output="false" access="remote"&gt;)</p><p>When I renamed the delete function Internet Explorer worked.</p><p>Strange, hope this helps someone else</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682577">5</a> by Dave Knapik
		posted on 9/1/2008 at 3:20 PM
		</div>
		<div class="comment_text"><p>Cheers for this, Ray, you just ended what was shaping up to be a painful day of IE-only debugging. Thanks for saving me some agony!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682576">6</a> by Vikram Kamath
		posted on 9/9/2011 at 1:38 AM
		</div>
		<div class="comment_text"><p>Raymond thanks a million times, for posting this!!</p></div>
	</div>
</div>
		