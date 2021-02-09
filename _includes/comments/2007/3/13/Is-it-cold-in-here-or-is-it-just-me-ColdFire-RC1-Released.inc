
<div class="comment" id="c_1713663075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663075">1</a> by Marcos Placona
		posted on 3/13/2007 at 8:12 PM
		</div>
		<div class="comment_text"><p>You're great Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663084">2</a> by Dave Ferguson
		posted on 3/13/2007 at 8:20 PM
		</div>
		<div class="comment_text"><p>Great work.  This is going to be very useful.  I did find a bug however.  I reported it on riaforge.</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663091">3</a> by Raymond Camden
		posted on 3/13/2007 at 8:47 PM
		</div>
		<div class="comment_text"><p>@Marcus - Don't forget Adam as well. We are a team. :)</p><p>@Dave - I'll check it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663088">4</a> by Will
		posted on 3/13/2007 at 9:15 PM
		</div>
		<div class="comment_text"><p>I'm pretty sure I did everything correctly but now whenever I try to go to any sites on my server, I get nothing.. nothing in Firebug and nothing in Firefox. It says the page finished loading but doesn't go anywhere.</p><p>I even restarted CF, restarted firefox. The CF tab shows up in Firebug just nothing happens. But if I switch the dropdown back to classic, my debug shows up and the page loads. Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663094">5</a> by Raymond Camden
		posted on 3/13/2007 at 9:22 PM
		</div>
		<div class="comment_text"><p>In Firebug, go to HTML/Net, and look at the headers. See if you see the coldfire header. It is a big xml packet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663093">6</a> by Will
		posted on 3/13/2007 at 9:29 PM
		</div>
		<div class="comment_text"><p>Nada... it looks like nothing is making it to Firebug. I started from a fresh window, hit the IP, it finishes loading... the request even shows up on the "Net" tab, but nothing else shows up in Firebug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663089">7</a> by Raymond Camden
		posted on 3/13/2007 at 9:34 PM
		</div>
		<div class="comment_text"><p>Can you fire up something like ServiceCapture and see if the header is coming back?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663095">8</a> by Mark W. Breneman
		posted on 3/13/2007 at 9:34 PM
		</div>
		<div class="comment_text"><p>Ray, Adam,</p><p>ColdFire So rocks. I have been looking for a solution to have debug info at hand but not visible.</p><p>Good Work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663096">9</a> by Thomas Messier
		posted on 3/13/2007 at 9:39 PM
		</div>
		<div class="comment_text"><p>I have a weird problem, something tells me you'll probably know the reason. On some of my CF sites I'm getting an error because it can't find application.applicationName. Sure enough I tested it and the variable exists on some of my sites and not others. I thought it might be an application.cfc vs application.cfm error, but apparently not. I do have a <a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a> defined in my application.cfc but that's not doing anything for me. Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663071">10</a> by Raymond Camden
		posted on 3/13/2007 at 9:44 PM
		</div>
		<div class="comment_text"><p>If you cfdump application on the page where ColdFire is throwing the error, do you see applicationname there? I can't imagine why it would not exist if you have an Application scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663069">11</a> by Thomas Messier
		posted on 3/13/2007 at 9:55 PM
		</div>
		<div class="comment_text"><p>No, it's not there. Don't worry about it, you've done your part, I'll do mine and try to debug this. Just wanted to see if it wasn't something obvious I just didn't know about. Thanks and I'll post something here if I figure it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663070">12</a> by Pete Freitag
		posted on 3/13/2007 at 10:08 PM
		</div>
		<div class="comment_text"><p>What a great idea, thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663073">13</a> by Jim Prist
		posted on 3/13/2007 at 10:20 PM
		</div>
		<div class="comment_text"><p>I'm getting weird behavior too:</p><p>I installed per the instructions.</p><p>I can hit a very simple CF page and it works.</p><p>Trying to hit the Mach-II application I'm currently working on gives strange results.  When I enter the URL the browser refreshes but doesn't actually appear to do anything.  It remains on the same page.</p><p>I have a page setup to clear my application and session scopes - when I hit that directory - I get:</p><p>Application and Session Scope Cleared!<br>500 Element APPLICATIONNAME is undefined in APPLICATION.<br>Element APPLICATIONNAME is undefined in APPLICATION.</p><p>And the page title reads "JRun Servlet Error"</p><p>But if I then go back and try to access the homepage - it again goes nowhere.</p><p>Now the question is "how do I uninstall" because now I can't do anything :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663072">14</a> by Jim Priest
		posted on 3/13/2007 at 10:25 PM
		</div>
		<div class="comment_text"><p>FWIW - Setting the template back to classic.cfm allows things to work again without uninstalling anything...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663074">15</a> by Thomas Messier
		posted on 3/13/2007 at 10:35 PM
		</div>
		<div class="comment_text"><p>OK, figured out the "500 Element APPLICATIONNAME is undefined in APPLICATION" error. Doing StructClear(application) is apparently a big no-no, it'll clear the applicationName variable. You have to remove that code from wherever your app initializes and then restart your CF server, things will work fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663076">16</a> by Raymond Camden
		posted on 3/13/2007 at 10:42 PM
		</div>
		<div class="comment_text"><p>Cool. I will be updating CF to have a major try/catch so that it can report an error nicer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663077">17</a> by Erki Erki Esken
		posted on 3/13/2007 at 10:45 PM
		</div>
		<div class="comment_text"><p>Cool, worked just fine.</p><p>But a few notes. You should really use X-Coldfire or similar header. HTTP spec says custom headers should start with X-.</p><p>Also, at least HTTP request headers are limited in size (8kb by default in Apache). I wonder if putting big XML messages into HTTP reply header might cause problems with some browsers, web servers or proxies?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663079">18</a> by Ken Ford
		posted on 3/13/2007 at 10:45 PM
		</div>
		<div class="comment_text"><p>ColdFire rocks! Great job Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663098">19</a> by Erik-Jan Jaquet
		posted on 3/13/2007 at 11:56 PM
		</div>
		<div class="comment_text"><p>When I open the coldfire.xpi file, nothing happens... I do not get prompted to restart firefox (2.0.0.2) or even get an hourglass to indicate something is happening? Anyone else experiencing this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663104">20</a> by Erik-Jan Jaquet
		posted on 3/14/2007 at 12:09 AM
		</div>
		<div class="comment_text"><p>Ok, I found myself a cure. File open does not work, but when I  drag and drop the .xpi file in the browser window, it works. Great tool! I can finally use CF debug without the anger of my beautifull layout being corrupted! Thx!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663099">21</a> by DK
		posted on 3/14/2007 at 12:30 AM
		</div>
		<div class="comment_text"><p>Ray, I get the same thing as Will. Everything seems ok on install etc then I get nothing but a white screen and nothing in firebug. I turn the debugging page back to classic from coldfire and it comes back up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663103">22</a> by Damon Gentry
		posted on 3/14/2007 at 1:52 AM
		</div>
		<div class="comment_text"><p>I installed Firebug and ColdFire as suggested.  When I view pages, I can see Firebug info on HTML, CSS, DOM, NET, etc.., but nothing in the ColdFusion tab.</p><p>Windows XP SP2, Firefox 2.0.0.1</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663097">23</a> by David
		posted on 3/14/2007 at 2:53 AM
		</div>
		<div class="comment_text"><p>I'm having trouble getting it to work on anything more than a simple one page script, tried with two completely different apps both written using contrasting custom frameworks, one using application.cfc and other not. both return a white blank page when i turn on coldfire template in debug, yet i can see coldfusion doing it's job in the terminal window...</p><p>any ideas?</p><p>firefox 2.0.0.2, mac intel</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663102">24</a> by David
		posted on 3/14/2007 at 3:04 AM
		</div>
		<div class="comment_text"><p>i just saw the open ticket for this issue on riaforge, cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663100">25</a> by Neil Middleton
		posted on 3/14/2007 at 5:42 PM
		</div>
		<div class="comment_text"><p>So when's the version that fits into CFEclipse providing debugging straight into the IDE coming out then?  ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663101">26</a> by Dan Davis
		posted on 2/12/2008 at 3:29 AM
		</div>
		<div class="comment_text"><p>Not sure if anyone is still having issues with Coldfire not showing up. I was, and finally figured it out! Everything was working, up until firebug was suppose to output the data. The content was in the header x-Coldfire.</p><p>It ended up being a setting within FireBug. Try this:  Goto Net -&gt; Then under options, make sure Disable Network Monitoring is OFF (unchecked). Refresh the page, and it should work. At least it worked for me.</p><p>Hope this helps someone! Coldfire Rocks!</p></div>
	</div>
</div>
		