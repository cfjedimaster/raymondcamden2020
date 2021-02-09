
<div class="comment" id="c_1713733824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733824">1</a> by Chris Bowyer
		posted on 6/27/2011 at 11:20 PM
		</div>
		<div class="comment_text"><p>I've played around with it a bit in Dreamweaver CS4. One gotcha I ran into was, remote JavaScript files don't work</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733841">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733841">2</a> by Raymond Camden
		posted on 6/27/2011 at 11:22 PM
		</div>
		<div class="comment_text"><p>What do you mean? Cuz that sounds more like an AIR restriction. Show me exactly what you were trying to do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733837">3</a> by Chris Bowyer
		posted on 6/28/2011 at 12:01 AM
		</div>
		<div class="comment_text"><p>For a simple example. The following does not work with the two remote JavaScript files, but if I download and package them. It does.</p><p>&lt;!doctype html&gt;<br>&lt;html&gt;<br>&lt;head&gt;<br>&lt;title&gt;JQuery Cycle Plugin - Example Slideshow&lt;/title&gt;<br>&lt;style type="text/css"&gt;<br>.slideshow { height: 232px; width: 232px; margin: auto }<br>.slideshow img { padding: 15px; border: 1px solid #ccc; background-color: #eee; }<br>&lt;/style&gt;<br>&lt;!-- include jQuery library --&gt;<br>&lt;script type="text/javascript" src="jquery.js"&gt;&lt;/script&gt;</p><p>&lt;!-- include Cycle plugin --&gt;<br>&lt;script type="text/javascript" src="cycle.js"&gt;&lt;/script&gt;</p><p>&lt;!--  initialize the slideshow when the DOM is ready --&gt;<br>&lt;script type="text/javascript"&gt;<br>$(document).ready(function() {<br>    $('.slideshow').cycle({<br>		fx: 'fade' // choose your transition type, ex: fade, scrollUp, shuffle, etc...<br>	});<br>});<br>&lt;/script&gt;<br>&lt;/head&gt;<br>&lt;body&gt;<br>	&lt;div class="slideshow"&gt;<br>		&lt;img src="<a href="http://disq.us/url?url=http%3A%2F%2Fcloud.github.com%2Fdownloads%2Fmalsup%2Fcycle%2Fbeach1.jpg%3Ar4d8GIT_kVbZNk8ALpQtUu6EevA&amp;cuid=3321886" rel="nofollow noopener" title="http://cloud.github.com/downloads/malsup/cycle/beach1.jpg">http://cloud.github.com/dow...</a>" width="200" height="200" /&gt;<br>		&lt;img src="<a href="http://disq.us/url?url=http%3A%2F%2Fcloud.github.com%2Fdownloads%2Fmalsup%2Fcycle%2Fbeach2.jpg%3A4G9Lzd4zTU3kRhZA9zeX_hKFqAs&amp;cuid=3321886" rel="nofollow noopener" title="http://cloud.github.com/downloads/malsup/cycle/beach2.jpg">http://cloud.github.com/dow...</a>" width="200" height="200" /&gt;<br>		&lt;img src="<a href="http://disq.us/url?url=http%3A%2F%2Fcloud.github.com%2Fdownloads%2Fmalsup%2Fcycle%2Fbeach3.jpg%3Abt-OWW5iLYgm3Idlv6nEMuIrc9o&amp;cuid=3321886" rel="nofollow noopener" title="http://cloud.github.com/downloads/malsup/cycle/beach3.jpg">http://cloud.github.com/dow...</a>" width="200" height="200" /&gt;<br>		&lt;img src="<a href="http://disq.us/url?url=http%3A%2F%2Fcloud.github.com%2Fdownloads%2Fmalsup%2Fcycle%2Fbeach4.jpg%3A-s5eg1VlTw6Z7FsdJzvBe2f_W8s&amp;cuid=3321886" rel="nofollow noopener" title="http://cloud.github.com/downloads/malsup/cycle/beach4.jpg">http://cloud.github.com/dow...</a>" width="200" height="200" /&gt;<br>		&lt;img src="<a href="http://disq.us/url?url=http%3A%2F%2Fcloud.github.com%2Fdownloads%2Fmalsup%2Fcycle%2Fbeach5.jpg%3Ai7HWxRkQYSQu197K2_1ZkOhIqfU&amp;cuid=3321886" rel="nofollow noopener" title="http://cloud.github.com/downloads/malsup/cycle/beach5.jpg">http://cloud.github.com/dow...</a>" width="200" height="200" /&gt;<br>	&lt;/div&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733838">4</a> by Raymond Camden
		posted on 6/28/2011 at 12:05 AM
		</div>
		<div class="comment_text"><p>AIR apps are meant to have their script files self contained. I think that is expected. (And probably preferred too for this example.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733840">5</a> by Chris Bowyer
		posted on 6/28/2011 at 12:14 AM
		</div>
		<div class="comment_text"><p>Yeah. I realise that now. But it was initially a gotcha for me, and will no doubt be for others too. That's why I mentioned it</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733839">6</a> by Raymond Camden
		posted on 6/28/2011 at 12:16 AM
		</div>
		<div class="comment_text"><p>Ah, well, the "restrictions" of HTML/AIR are surprising to -everyone-. It still trips me up from time to time. Luckily it's easy enough to get around - especially once you wrap your head around the bridge concept.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733842">7</a> by Chris Bowyer
		posted on 6/28/2011 at 12:29 AM
		</div>
		<div class="comment_text"><p>What's the bridge concept?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733843">8</a> by Raymond Camden
		posted on 6/28/2011 at 12:32 AM
		</div>
		<div class="comment_text"><p>HTML/AIR apps can make use of a bridge. In the bridge you use an IFRAME to contain content that is not locked down by the AIR security framework. Of course, the content in the iframe can't do air stuff. But you build connections between your top level frame and the iframe. These connections are just JS functions basically. It sounds overly complex and it really isn't once you get your head wrapped around it a bit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733846">9</a> by Chris Bowyer
		posted on 6/28/2011 at 12:34 AM
		</div>
		<div class="comment_text"><p>Cool. Thanks for that</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733847">10</a> by Patrick Rudolph
		posted on 6/30/2011 at 4:37 PM
		</div>
		<div class="comment_text"><p>I used both, Dreamweaver CS4 and Aptana Studio 2, while developing AIR applications. <br>Are you sure its not possible to add AIR 2.7 SDK manually to Aptana? At least thats what i did with 2.6.<br>Also, while using Dreamweaver I experiences that there were some inconsistencies between the test/preview and the deployed versions. I don't know if something changed on that subject between CS4 and CS5.5, but the plugin probably stayed the same?! Correct me if I'm wrong, but as Aptana Studio is based on Eclipse it provides far better debugging possibilities (though I really miss advanced XHR debugging).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733848">11</a> by Raymond Camden
		posted on 7/1/2011 at 3:31 PM
		</div>
		<div class="comment_text"><p>"Are you sure its not possible to add AIR 2.7 SDK manually to Aptana?" I meant Aptana 3, not Aptana 2. I believe the AIR Plugin for Aptana allowed for any SDK, but the plugin as a whole isn't supported in Aptana 3.</p><p>"Inconsistencies" - Odd. The debug there is the 'real' debug - Ie, the SDK debugger, so the fact that it's run from DW should not matter.</p><p>"Debug" - I got air.trace to work as I mentioned, but I didn't do any XHR debugging. For that I'd probably just use Charles.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733849">12</a> by Patrick Rudolph
		posted on 7/1/2011 at 4:00 PM
		</div>
		<div class="comment_text"><p>Aptana - You absolutely true about Aptana 3. Ofc I'm using Aptana 2. Would be nice to see them reviving their AIR support.</p><p>Inconsistencies - I just tested Dreamweaver CS4 again and experienced two minor inconsistencies: -webkit-box-shadow doesn't work in preview (works in Aptana 2) and custom icons are not used in the task bar, instead the preview just uses the standard AIR icon. The latter problem also exists in Aptana 2.<br>If I remember it correctly webfonts also didn't work in the preview.</p><p>Debug - air.trace also works for me, but I haven't found possibilities like breakpoints or other types of debugging in Dreamweaver, yet. Please correct me if I'm wrong on that.</p><p>I'll take a look on Charles.. thanks for that hint!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733822">13</a> by Raymond Camden
		posted on 7/1/2011 at 5:01 PM
		</div>
		<div class="comment_text"><p>Oh sorry - I missed the CS"4" ref there. No idea then. ;) To be honest, I didn't go "all the way" and make an installer to test to see if the end result was different. I'd just upgrade and see. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733820">14</a> by Hanno vd Merwe
		posted on 12/2/2011 at 6:21 PM
		</div>
		<div class="comment_text"><p>Hi there</p><p>I have been playing with Dreamweaver and the Air extension for the first time recently, and was surprised how easily this works. Have been creating some great jQuery apps with it.</p><p>I am just having one problem. I can't seem to manage playing video in the AIR application. I have a Flash video player that I embed in my HTML. Once I export the AIR file and run it however, the video stops working. I can see my Flash embedded, but it only buffers and never plays.</p><p>Do you have any idea how I can resolve this? Would appreciate any insights you have on the matter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733823">15</a> by Raymond Camden
		posted on 12/2/2011 at 10:30 PM
		</div>
		<div class="comment_text"><p>I believe you have to create a window to run the SWF. I've seen that done before for video capture. Sorry - it's been a while.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733827">16</a> by Chris Bowyer
		posted on 12/2/2011 at 11:08 PM
		</div>
		<div class="comment_text"><p>@ Hanno. If you provide an email address. I will send you a copy of a simple Flash AIR application I made. You could then have a look through it and find out where you are going wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733826">17</a> by Hanno vd Merwe
		posted on 12/5/2011 at 1:17 PM
		</div>
		<div class="comment_text"><p>Thanks Chris, that would be amazing. Please send it to my company mail at hanno.vandermerwe@espial.co.za.</p><p>THanks again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733828">18</a> by Nene Odonkor
		posted on 5/26/2012 at 1:30 AM
		</div>
		<div class="comment_text"><p>So do you need the Air sdk or just the runtime</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733829">19</a> by Raymond Camden
		posted on 5/26/2012 at 1:47 AM
		</div>
		<div class="comment_text"><p>I believe DW came with it. You can just download it though.</p></div>
	</div>
</div>
		