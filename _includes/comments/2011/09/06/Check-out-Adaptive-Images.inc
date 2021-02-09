
<div class="comment" id="c_1713734990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734990">1</a> by Steve W
		posted on 9/6/2011 at 6:07 PM
		</div>
		<div class="comment_text"><p>This looks interesting.  If your image file size is not too large and you are using a modern browser you can make them responsive by simply adding :</p><p>&lt;style&gt;<br>img {width:100%;}<br>&lt;/style&gt;</p><p>and placing them in a div with a constrained size (max-width; max-height, width).  Check out <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfuser.com%2Fcfu%2Fimgtest.cfm%3ALk5NGseXKsikIaEJrl40oBa0peA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfuser.com/cfu/imgtest.cfm">http://www.cfuser.com/cfu/i...</a> and resize your browser (ie 9 and all other non-IE browsers).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734993">2</a> by Raymond Camden
		posted on 9/6/2011 at 6:22 PM
		</div>
		<div class="comment_text"><p>Steve -that sizes the images but does nothing for download times. Check the code out. It actually creates much smaller images (file size wise) which will improve the speed of the page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734992">3</a> by Steve W
		posted on 9/6/2011 at 6:35 PM
		</div>
		<div class="comment_text"><p>I posted this as a quick fix people may not be aware of and  why I said if the image is not too large.  This image is 800k and it took my phone 2 seconds with a signal and 18 sec with no bars.  Clearly, if you are wanting upload an 8MB file or several 500K files on a single page the responsive css is not a solution and this script would be more appropriate.  Since I will probably do this as part of any image upload in my CMS, it would be interesting if you could just change the image path based on viewport changing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734998">4</a> by Tim Garver
		posted on 9/6/2011 at 6:54 PM
		</div>
		<div class="comment_text"><p>Sounds pretty cool, but what if you cant use .htaccess and mod rewrite?</p><p>Tim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734994">5</a> by Raymond Camden
		posted on 9/6/2011 at 7:05 PM
		</div>
		<div class="comment_text"><p>Then you are out of luck. ;) I mean, you could update your HTML to point to a CFM and pass in an image path. The point of this solution though was to remove the need to change your existing HTML content.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734999">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734999">6</a> by Matt Wilcox
		posted on 9/6/2011 at 7:52 PM
		</div>
		<div class="comment_text"><p>@Steve W</p><p>I'm afraid you're not understanding what's going on and what the CSS you mention actually does. All the CSS does is change the width the image displays as. It adjusts the display of the image, but the image itself doesn't change.</p><p>On the Adaptive Images demo site the original image is 800Kb. But that's not what your mobile is getting sent, your mobile is getting sent a server-resized 480px wide 30Kb file. That's the point. It is also using your CSS width trick - but that CSS has nothing at all to do with the file size your mobile gets. If you took Adaptive Images out and relied on your CSS alone, you'd find yourself waiting a LOT longer to see the page.</p><p>@Raymond - glad to see you've got the post up, and it's great to see the ColdFusion port! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735000">7</a> by Matt Wilcox
		posted on 9/6/2011 at 7:55 PM
		</div>
		<div class="comment_text"><p>There are other drawbacks with using img { width:100% } if the image itself is a lot larger than the mobile device : you hit performance problems due to memory limits and processing power. That's another benefit of using an Adaptive Image type approach. Mobile devices realy need a different image resource delivered, not just the same resolution image which the browser itself then shrinks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734996">8</a> by Steve W
		posted on 9/6/2011 at 8:02 PM
		</div>
		<div class="comment_text"><p>@Matt</p><p>I understand exactly what the css does and doesn't do. If you can't use cookies or don't have the ability to use .htaccess, the css provides a simple solution (assuming you're not loading several large files on your page).  Many people are not familiar with some of the responsive design concepts and I thought I would share.  That's all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735001">9</a> by Jimmy Devenport
		posted on 9/6/2011 at 9:27 PM
		</div>
		<div class="comment_text"><p>How does this compare to <a href="http://disq.us/url?url=http%3A%2F%2Fsrc.Sencha.io%3F%3ANEAjKlbSho6GxlA1-jnqs2NwVDo&amp;cuid=3321886" rel="nofollow noopener" title="src.Sencha.io?">src.Sencha.io?</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.sencha.com%2Flearn%2Fhow-to-use-src-sencha-io%2F%3A6VpS0WreR04oX7c2xpIRbonedjM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.sencha.com/learn/how-to-use-src-sencha-io/">http://www.sencha.com/learn...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735003">10</a> by Raymond Camden
		posted on 9/6/2011 at 9:30 PM
		</div>
		<div class="comment_text"><p>Well, you do get that the AI approach doesn't require changes, right? I feel like folks are getting that and to me - it's the biggest selling point.</p><p>To be clear, with the AI approach, your "regular" IMG tags are automatically handled by the URL Rewriting+PHP (or CF) script.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735004">11</a> by Jimmy Devenport
		posted on 9/6/2011 at 9:38 PM
		</div>
		<div class="comment_text"><p>OK, I guess an alternative option then - if they don't have the stuff that is required server-side for AI, then <a href="http://disq.us/url?url=http%3A%2F%2Fsrc.sencha.io%3AE5Ws_jU-CKYf9fCjb9SpA5DDiTA&amp;cuid=3321886" rel="nofollow noopener" title="src.sencha.io">src.sencha.io</a> is an alternative. If they have images behind a secure login (i.e. showmemyimage.php?fn=myimage.jpg (and myimage.jpg may be outside of the webroot) then AI comes in mighty handy. I like. For my case, I have a homemade PHP site used by my extended family to view pics - some don't want to join facebook, some have problems with pics being viewable by anyone else, etc. So AI will work for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735007">12</a> by pwizzard
		posted on 11/9/2012 at 5:51 PM
		</div>
		<div class="comment_text"><p>Would like to try this out but my hosting is also Windows based. Have spoke to my hosting company and they have suggested using ISAPI instead of .htaccess but haven't said whether it would work, any ideas if this would be possible?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735005">13</a> by Raymond Camden
		posted on 11/9/2012 at 5:57 PM
		</div>
		<div class="comment_text"><p>You should be able to do this in IIS, sure. There is rewrite support for IIS just as good as Apache (although Apache makes it easier imo).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735006">14</a> by Chris Bowyer
		posted on 12/31/2012 at 4:34 PM
		</div>
		<div class="comment_text"><p>Thanks for the work you put into this Ray. Much appreciated!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735011">15</a> by Chris Bowyer
		posted on 1/7/2013 at 11:47 PM
		</div>
		<div class="comment_text"><p>Just to let you know, I got this running out of the box on IIS by simply importing the .htaccess file using URL Rewrite and using the resulting web.config file in the root instead. Here's the web.config version...</p><p>&lt;?xml version="1.0" encoding="UTF-8"?&gt;<br>&lt;configuration&gt;<br>    &lt;system.webServer&gt;<br>        &lt;rewrite&gt;<br>            &lt;rules&gt;<br>                &lt;rule name="Imported Rule 1"&gt;<br>                    &lt;match url="\.(jpg|jpeg|gif|png)" ignoreCase="false" /&gt;<br>                    &lt;!--&lt;conditions logicalGrouping="MatchAll"&gt;<br>                        &lt;add input="{URL}" pattern="ignore-this-directory" ignoreCase="false" negate="true" /&gt;<br>                        &lt;add input="{URL}" pattern="and-ignore-this-directory-too" ignoreCase="false" negate="true" /&gt;<br>                        &lt;add input="{URL}" pattern="assets" ignoreCase="false" negate="true" /&gt;<br>                    &lt;/conditions&gt;--&gt;<br>                    &lt;action type="Rewrite" url="adaptive-images.cfm" /&gt;<br>                &lt;/rule&gt;<br>            &lt;/rules&gt;<br>        &lt;/rewrite&gt;<br>    &lt;/system.webServer&gt;<br>&lt;/configuration&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735010">16</a> by Julian Halliwell
		posted on 11/28/2013 at 11:37 PM
		</div>
		<div class="comment_text"><p>I've released an alternative version based on Raymond's code:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcfsimplicity%2FAdaptiveImages%3A9X0-apgFOYh563ZMmU1ur3MRp34&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cfsimplicity/AdaptiveImages">https://github.com/cfsimpli...</a></p><p>I've been running it on IIS7 and there's an example IIS Rewrite Rule in the ReadMe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735009">17</a> by Marc Funaro
		posted on 12/10/2013 at 11:08 PM
		</div>
		<div class="comment_text"><p>I set this up originally on IIS6 with IIRF to handle the rewrite rule.  It worked for the site we used it on. We started having performance issues during high traffic periods,but assumed it was because our hosting setup at the time was getting dated and we were asking the servers to do more and more.</p><p>We just completed an entire hosting service upgrade, and thought the problem was solved... turns out the IIS8 rule i had set up wasn't working as expected, so the adaptive images cfm file was not even being called.  As soon as I fixed the rule, the performance problems reappeared, on brand new, much faster servers.</p><p>I have narrowed down the problem to the same thing I was seeing on the old servers -- when the rule is active and all image calls in the rewritten-directory are made, the adaptive images cfm file creates multiple instances of the same session.  during peak times, our session counts on the server without adaptive-images.cfm run around 300.  when I activate the rule and adaptive-images starts doing its thing, it works as expected.. but our duplicated sessions (by ip, as reported in ColdFusion admin) explode into several thousands... 8,10,sometimes 15 sessions per IP hitting the site.</p><p>We're using it with CFWheels, but the template itself is being ignored by the CFWheels rule in web.config.  I can call it directly in the url and get the "image not found" image that it generates, so I know nothing is interfering with the call created by the web.config rule in the directory the images are requested from...</p><p>I've tried adding a CFAPPLICATION tag to the template that matches the main website's cfapplication tag, but this didn't matter.  This template seems to cause a "duplicate session memory leak" of some kind, and I'm not quite sure how to solve it.  Any ideas?</p><p>Until resolved, I'd recommend people use caution when using this on a site that sees any amount of traffic, as you may experience this on both CF8/IIS6 and CF10/IIS8.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735012">18</a> by Raymond Camden
		posted on 12/11/2013 at 12:14 AM
		</div>
		<div class="comment_text"><p>Why not use an Application.cfm with a *different* application name and sessions disabled?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735013">19</a> by Marc Funaro
		posted on 12/11/2013 at 12:35 AM
		</div>
		<div class="comment_text"><p>I assume you mean a CFAPPLICATION tag at the top of the adaptive images file, not a separate application.cfm file that would potentially toy with the cfwheels app, yes?  I can try that... hadn't considered it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735014">20</a> by Raymond Camden
		posted on 12/11/2013 at 12:43 AM
		</div>
		<div class="comment_text"><p>Err, no, I meant in a folder with the adaptive image code by itself. But.... that could work too. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713735016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713735016">21</a> by Marc Funaro
		posted on 12/11/2013 at 12:58 AM
		</div>
		<div class="comment_text"><p>i could have stored it in the CFWheels "miscellaneous" folder that has it's own blank application.cfc, but for now it remains in the root with a CFAPPLICATION tag added that gives it it's own application name, and turns off session management and client cookies:</p><p>&lt;cfapplication name="ai" sessionmanagement="false" setclientcookies="false"&gt;</p><p>Won't know for sure if this is resolved until tomorrow during peak usage, but it's quick and easy to disable this function if it's still not working.</p><p>When it was causing all the extra sessions, they all still had the main application's name.  I assume this is because the ai template is in the root directory, and the CFWheels application.cfc was still executing when the IIS rewrite called the ai template.  I assume the application named "ai" will not appear in the session monitor, since it's not doing session management now anyway.</p><p>This really does belong under miscellaneous; my OCD will probably force me to move it there eventually.  ;D</p></div>
	</div>
</div>
		