
<div class="comment" id="c_1713719307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719307">1</a> by Mark landmann
		posted on 10/28/2009 at 12:58 AM
		</div>
		<div class="comment_text"><p>Ray, you did not address the question why it was broke when there was already a center true in the calling parameters.  Instread you looked under the hood and came up with a not so obvious way to make the center happen.  Are we going to have to do that for the next 15 things that Adobe broke?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719302">2</a> by Raymond Camden
		posted on 10/28/2009 at 1:00 AM
		</div>
		<div class="comment_text"><p>Err, well, I thought it was obvious. It's a bug. Adobe is as perfect as any other software company, Mark. ;) I'll make sure that this issue is reported and I'm sure it will be corrected. And yes - if someone finds 15 more bugs and workarounds, I hope someone does blog it, as it helps everyone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719296">3</a> by Michael De Jonghe
		posted on 10/28/2009 at 2:26 AM
		</div>
		<div class="comment_text"><p>Over the summer I submitted a bug to Adobe about the centering of cfwindows too.  When you create a cfwindow using the tag, centering works just fine.</p><p>You can also play around with the X &amp; Y cords and view port sizes of each browser.</p><p>&lt;cfajaximport tags="cfwindow"&gt;</p><p>&lt;script&gt;<br>var Client = {<br>  viewportWidth: function() {<br>    return self.innerWidth || (document.documentElement.clientWidth || document.body.clientWidth);<br>  },</p><p>  viewportHeight: function() {<br>    return self.innerHeight || (document.documentElement.clientHeight || document.body.clientHeight);<br>  },</p><p>  viewportSize: function() {<br>    return { width: this.viewportWidth(), height: this.viewportHeight() };<br>  }<br>};</p><p>function cleanup() {<br>    ColdFusion.Window.destroy('mywindow',true);<br>}</p><p>function showWin(id) {<br>    //do we have one?<br>    try {<br>        ColdFusion.Window.destroy('mywindow',true);<br>    } catch(e) { }</p><p>	var xcord = Client.viewportWidth()/2 - 350;<br>	var ycord = Client.viewportHeight()/2 - 200;</p><p>    ColdFusion.Window.create('mywindow',id,'content.cfm?q=' + id,{x:xcord,y:ycord,center:true,height:400,width:700,modal:true,closable:true,draggable:true,resizable:true,initshow:true});<br>    ColdFusion.Window.onHide('mywindow',cleanup);<br>}<br>&lt;/script&gt;</p><p>&lt;!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fxhtml1%2FDTD%2Fxhtml1-transitional.dtd%3AlsD79NC9EpzB4LCkih033Se6Csw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">http://www.w3.org/TR/xhtml1...</a>"&gt;<br>&lt;html xmlns="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2F1999%2Fxhtml%3AA6NInarpbzWm6HKZDXlFrwZefzc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/1999/xhtml">http://www.w3.org/1999/xhtml</a>"&gt;<br>&lt;head&gt;<br>&lt;meta http-equiv="Content-Type" content="text/html; charset=utf-8" /&gt;<br>&lt;title&gt;Untitled Document&lt;/title&gt;<br>&lt;/head&gt;<br>&lt;body&gt;</p><p>&lt;cfloop from="1" to="30" index="i" step="3"&gt;<br>	&lt;p&gt;&lt;a href="javascript:showWin(&lt;cfoutput&gt;#i#&lt;/cfoutput&gt;);"&gt;My Link&lt;/a&gt;&lt;/p&gt;<br>&lt;/cfloop&gt;</p><p>&lt;/body&gt;<br>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719286">4</a> by Bjorn Jensen
		posted on 10/28/2009 at 12:18 PM
		</div>
		<div class="comment_text"><p>It seems that many things regarding ajax is broken. The Ext lib has been updated and this prevents backwards compatibility and the worst is that they didn't bother updating the documentation.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%23bugId%3D80496%3ApJ0TQ8yvny5Xdvh-THk38vjblzA&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html#bugId=80496">http://cfbugs.adobe.com/cfb...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719293">5</a> by Raymond Camden
		posted on 10/28/2009 at 5:36 PM
		</div>
		<div class="comment_text"><p>Ok, so I know I'm an Adobe fanboy (never pretend not to be), but in their defense, CF9 was a major update in regards to the back end stuff for Ajax work. Most of the issues I've found were mainly with folks using the Ext API directly.</p><p>You say they didn't bother to update the documentation. That is wrong. You linked to a doc bug, which I agree with, but one bug does not mean the docs were not updated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719299">6</a> by Syed
		posted on 10/29/2009 at 10:46 PM
		</div>
		<div class="comment_text"><p>Ray, in my case, cfwindow is also broken under CF9. It was working perfect in our production (CF8) environment. I havent looked at ajax portion yet, but cfwindow is definitely acting weird.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719298">7</a> by Raymond Camden
		posted on 10/29/2009 at 10:54 PM
		</div>
		<div class="comment_text"><p>Have you checked the release notes? If so and it's new, have you logged a bug w/ an example?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719300">8</a> by Syed
		posted on 10/30/2009 at 7:46 PM
		</div>
		<div class="comment_text"><p>I havent checked the release notes nor i've filed a bug report. I'm installing win7 today on local pc's. I'll priortize this issue next.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719303">9</a> by Syed
		posted on 11/2/2009 at 11:44 AM
		</div>
		<div class="comment_text"><p>Ray, just to let you know the status, I was able to fix cfwindow issue by looking over my code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719301">10</a> by Hemant
		posted on 11/4/2009 at 10:31 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>Please make sure to file your bugs in the public bugtracker and we will try to resolve the same. The public bugtracker is hosted at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2FCF_bugs%3AdsojvNypqqMLswj7T70iqlTF-gI&amp;cuid=3321886" rel="nofollow noopener" title="www.adobe.com/go/CF_bugs">www.adobe.com/go/CF_bugs</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719294">11</a> by Peter Tilbrook
		posted on 1/6/2012 at 8:46 AM
		</div>
		<div class="comment_text"><p>The CF 9.01 Update seems to have fixed the issues I was having with CF Windows. Once applied everything worked properly.</p></div>
	</div>
</div>
		