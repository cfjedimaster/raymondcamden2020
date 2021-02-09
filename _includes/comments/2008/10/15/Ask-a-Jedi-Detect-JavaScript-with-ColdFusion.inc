
<div class="comment" id="c_1713709142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709142">1</a> by Nathan Mische
		posted on 10/16/2008 at 6:20 AM
		</div>
		<div class="comment_text"><p>That's BrowserHawk. I've used it in the past and actually just recommend it to a co-worker a few days ago. It also has documentation for CF which is nice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709162">2</a> by Andy Matthews
		posted on 10/16/2008 at 7:04 AM
		</div>
		<div class="comment_text"><p>Actually, you can technically do it in one file (if you don't count an external file as the 2nd). Not saying that it's the best idea, but just use AJAX. Include the page contents using JS, or redirect the user to an alternate page using a meta refresh if they don't have JS enabled.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709168">3</a> by John Whish
		posted on 10/16/2008 at 12:32 PM
		</div>
		<div class="comment_text"><p>There are a couple of ways I've dealt with this in the past.</p><p>One is the one you mentioned, which is to write a cookie to the browser with javascript (from your "global.js" include so it works on any landing page) which ColdFusion can check for (obviously the cookie wouldn't exist on the first request).</p><p>The second method I use for secure areas that need javascript. On the login form I have a hidden form field, I populate the value with javascript. When the form is submitted I check to see what the value of the form field is and then continue or notify the user that they need to enable javascript.</p><p>You made another good point that you can disable javascript later, so it shouldn't be relied on for security, data validation etc. I'm amazed by how many sites rely heavily on javascript for this type of thing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709165">4</a> by Tjarko Rikkerink
		posted on 10/16/2008 at 3:38 PM
		</div>
		<div class="comment_text"><p>I do something similar, i write the "hidden" formfield with document.write('') and if that variable does not exist on the receiving page i know that javascript isn't working. Especially with ajax requests it's extremely simple to build a receiving page that both handle the ajax as the normal request.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709167">5</a> by Lisa Homstad
		posted on 10/16/2008 at 6:18 PM
		</div>
		<div class="comment_text"><p>What if you made a simple ajax call to set a coldfusion variable?  After that point you could use coldfusion to check for the existence of javascript.  If you do a meta refresh to an alternate page if javascript is disabled, you could end up having problems with search engines not being able to index your site. =\</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709166">6</a> by Raymond Camden
		posted on 10/16/2008 at 6:21 PM
		</div>
		<div class="comment_text"><p>Lisa, you can't mix client side and server side stuff like that. Yes, you can use Ajax to call a CFM to set some persistent variable. But you would then still need a second HTTP hit to _check_ that var. Ie, guy hits your .com. You use Ajax to set the CF variable. But you can't _do_ anything about that till the next hit if JS is turned off.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709169">7</a> by Jose Diaz
		posted on 10/16/2008 at 6:53 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Thankyou for the post and to everyone that has responded.<br>I did try various routes including the route Lisa mentioned, but with a  dirty hack using cftry/catch block.</p><p>I was essentially havinga  brain fart the kind thing that happens late at night: cfdump =&gt; cflog =&gt; cfflush</p><p>As soon as I saw your response it was obvious, I used the following approach and it is working liek a dream:</p><p>&lt;cfset settings.jsUrl = "http://#cgi.http_host##cgi.path_info#?#cgi.query_string#"&gt;<br>       &lt;cfif not isDefined("url.jsenabled")&gt;<br>         &lt;script Language="JavaScript"&gt;<br>           window.location.href="&lt;cfoutput&gt;#settings.jsurl#&amp;jsenabled=1&lt;/cfoutput&gt;";<br>         &lt;/script&gt;<br>       &lt;/cfif&gt;</p><p>I redirect back to the same template and then do some logic to process code if the jsenabled val is set.</p><p>Thanks Ray(Obi-Web Kenobi) Everyone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709171">8</a> by Jim Ruzicka
		posted on 10/16/2008 at 9:31 PM
		</div>
		<div class="comment_text"><p>For those who consider meta refresh - I have run into some cases where user's browsers have META refresh turned off.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709170">9</a> by Lisa Homstad
		posted on 10/16/2008 at 10:31 PM
		</div>
		<div class="comment_text"><p>Just to clarify, by "after that point" I meant "...in your application in general" not the rest of the request.  Probably not the best solution in the world, but it could work. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709172">10</a> by James Edmunds
		posted on 10/16/2008 at 11:42 PM
		</div>
		<div class="comment_text"><p>I'm with Ray's suggestion of putting a message on the site warning that you won't get everything that's on offer without javascript.</p><p>My theory is that if you're dialing down to the small minority of visitors who have javascript turned off, these are the very visitors who are most likely to have something on their end that would trip up whatever evaluation I'm trying to run. And spiders don't want to see my pretty rollovers anyway ;).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709173">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709173">11</a> by John Whish
		posted on 10/17/2008 at 12:04 PM
		</div>
		<div class="comment_text"><p>If you add a "you need javascript" message to your website you should use javascript to hide it, so it only shows for users with javascript disabled.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709174">12</a> by Jose Diaz
		posted on 10/17/2008 at 12:54 PM
		</div>
		<div class="comment_text"><p>I should have mentioned, the reason I am doing a check is due to teh application being completly Ajax enabled and so needed to offer an alternative view for none JS enabled users. I have utilised the &lt;noscript&gt; route but needed to do some logic checking for search engine spidering.</p><p>So when a chunk of content is indexed and the link clicked if the user does not have jsenabled they go to the non Ajax version direct and if they do has JS enabled I do some coldfusion.naviaget code to drill down to a specific tab within teh Ajax app.</p><p>Hope that makes sense.</p><p>;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709175">13</a> by Todd Rafferty
		posted on 10/17/2008 at 6:22 PM
		</div>
		<div class="comment_text"><p>I went down this road once.  I ended up falling back on HTML's noscript tag:<br>[noscript]Turn on JS!! :P[/noscript]</p><p>jQuery method:<br>[div id="nojs"]You currently have JS disabled.[/div]</p><p>If javascript is enabled, jquery just simply hides the div:<br>$("#nojs").hide();</p><p>Otherwise, the user gets an annoying styled message every time they come to the site and it's not my fault if things aren't working properly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709178">14</a> by Chris Hampton
		posted on 7/29/2009 at 12:59 AM
		</div>
		<div class="comment_text"><p>I thought of the cookie idea, but I don't like the idea of having the multiple requests.  Basically what I have decided is that for the front end of the app, it will degrade as much as possible (with a message that JS is disabled).  The backend will require JS to be enabled.  I control the environment, so that works for me.  I can just mandate my users have JS enabled.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709177">15</a> by James Murgolo
		posted on 3/6/2010 at 5:35 AM
		</div>
		<div class="comment_text"><p>Thanks.  Works like a charm.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709179">16</a> by Aiden Huntley
		posted on 4/22/2010 at 8:15 PM
		</div>
		<div class="comment_text"><p>I tracked it with a simple iFrame,  The problem with the cookie method is, I want to know if they have cookies enabled separately from JavaScript.<br>&lt;noscript&gt;&lt;iframe src="/lib/stats/noscript.cfm" frameborder="0" allowtransparency="true" scrolling="no" width="1" height="1"&gt;&lt;/iframe&gt;&lt;/noscript&gt;</p><p>I am aware that some people have iframes disabled as well,  but this gives me a general idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709176">17</a> by Christian
		posted on 9/21/2011 at 5:20 PM
		</div>
		<div class="comment_text"><p>Try this. Create a "jsChecked.js" file:</p><p>function jsCheck(){</p><p>   var ckd = document.js.checked.value;</p><p>   if ( ckd == 'False'){<br>      document.js.jsActive.value = 'True';<br>      document.forms['js'].submit();<br>   }<br>}</p><p>Then a cfm page named "jscheck.cfm":</p><p>&lt;head&gt;<br>&lt;script type="text/javascript" src="jscheck.js"&gt;&lt;/script&gt;</p><p>&lt;cfif IsDefined("form.jsActive") AND #form.jsActive# EQ "True"&gt;<br>	&lt;cfset isChecked = "True" /&gt;<br>  &lt;cfelse&gt;<br>  &lt;cfset isChecked = "False" /&gt;<br>&lt;/cfif&gt;</p><p>&lt;/head&gt;</p><p>&lt;body onLoad="jsCheck()"&gt;</p><p>&lt;cfoutput&gt;</p><p>&lt;form style="visibility:hidden;" name="js" id="js" action="jscheck.cfm" method="post" enctype="application/x-www-form-urlencoded"&gt;<br>	&lt;input type="hidden" name="jsActive" id="jsActive" /&gt;<br>  &lt;input type="hidden" name="checked" id="checked" value="#isChecked#" /&gt;<br>&lt;/form&gt;</p><p>&lt;cfif IsDefined("form.jsActive") AND #form.jsActive# EQ "True"&gt;<br>	#form.jsActive#<br>  &lt;cfelse&gt;<br>  JS Undefined<br>&lt;/cfif&gt;</p><p>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		