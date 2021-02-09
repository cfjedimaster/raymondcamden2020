
<div class="comment" id="c_1713714788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714788">1</a> by Garrett Johnson
		posted on 4/22/2009 at 8:16 AM
		</div>
		<div class="comment_text"><p>I believe it just connects to a host on a certain port to be passed in... otherwise it returns false (or something like that)</p><p>He could probably do this in his check...</p><p>&lt;cfscript&gt;<br>   connection = createObject("java", "java.net.Socket");<br>   connection.init(cgi.remote_addr, 80);</p><p>   connected = connection.isConnected();<br>&lt;/cfscript&gt;</p><p>This probably does something similar to the PHP function. If not, one of the methods in the Socket Class could!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714784">2</a> by shag
		posted on 4/22/2009 at 8:52 AM
		</div>
		<div class="comment_text"><p>In my experience, REMOTE_ADDR is the proxy if HTTP_X_FORWARDED_FOR exists.  In which case, HTTP_X_FORWARDED_FOR is the client IP.</p><p>php docs says fsockopen is opening a socket, so for some reason he reaches out to touch the proxy.  I'm not sure it makes any sense to do that, but I'm also not sure of the need for any of the other checks if you are simply trying to ID a Proxy use.</p><p>I think this should work:<br>&lt;cfif cgi.HTTP_X_FORWARDED_FOR neq ""&gt;<br>proxy<br>&lt;/cfif&gt;</p><p>Also, in your version, there should be one HTTP_X_FORWARDED_FOR instead of two HTTP_X_FORWARDED.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714783">3</a> by cod3master
		posted on 4/22/2009 at 3:23 PM
		</div>
		<div class="comment_text"><p>i think he tries to connect to port 80, to check if there is a responding server.</p><p>in my opinion this is wrong. he needs to check on the port the connection is comming from (8080, etc.) and not only port 80.<br>the idea is that if the user uses a proxyserver i should be able to connect back to it too.</p><p>what happens if i have a webserver open on my router on port 80 (which is default if i don't use a proxy)? that will be detected as a connection and every connection would mean proxy in this script. bad idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714785">4</a> by Dave Dugdale
		posted on 4/22/2009 at 7:56 PM
		</div>
		<div class="comment_text"><p>Thanks Ray and everyone else for helping me out with this code. The reason for the code if anyone is wondering is to detect when a scammer from Nigeria is trying to trick my site into thinking they're from the US.</p><p>I've played around with the code above on this page,<br>I created this page test <a href="http://disq.us/url?url=http%3A%2F%2Fwww.pickrent.com%2Fmisc%2Fproxy.cfm%3AlreXXWmJdDnS3IYbu7yjXtYo4Ak&amp;cuid=3321886" rel="nofollow noopener" title="http://www.pickrent.com/misc/proxy.cfm">http://www.pickrent.com/mis...</a> I can't seem to get it to work.</p><p>Here is the code that is on the link above (from Shag):</p><p>&lt;cfif cgi.HTTP_X_FORWARDED_FOR neq ""&gt;<br>	&lt;h4&gt;You ARE coming from a proxy.&lt;/h4&gt;<br>&lt;CFELSE&gt;<br>	&lt;h4&gt;You are NOT coming from a proxy.&lt;/h4&gt;<br>&lt;/cfif&gt;</p><p>The code above always indicates that I am NOT coming from a proxy whether I am or not.</p><p>I also tried Ray's code above but it doesn't matter if I am coming from a proxy or not, the code always say that I AM coming from a proxy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714789">5</a> by Raymond Camden
		posted on 4/22/2009 at 8:00 PM
		</div>
		<div class="comment_text"><p>@Dave - is there one particular clause of the CFIF that is returning a false positive?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714786">6</a> by shag
		posted on 4/22/2009 at 8:11 PM
		</div>
		<div class="comment_text"><p>@dave, my memory may have served me wrong, and it could be that my bubble works differently.  I would suggest cfdump the cgi scope and run it directly and behind a proxy.  You should be able to figure something out.  I'm wondering if different proxies give different responses.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714787">7</a> by Dave Dugdale
		posted on 4/22/2009 at 9:18 PM
		</div>
		<div class="comment_text"><p>@shag</p><p>I liked your idea of running the cfdump behind the proxy, so I added that to the code on the test page <a href="http://disq.us/url?url=http%3A%2F%2Fwww.pickrent.com%2Fmisc%2Fproxy.cfm%3AlreXXWmJdDnS3IYbu7yjXtYo4Ak&amp;cuid=3321886" rel="nofollow noopener" title="http://www.pickrent.com/misc/proxy.cfm">http://www.pickrent.com/mis...</a>.</p><p>Here are my results that are different:</p><p>Normal then proxy:<br>HTTP_ACCEPT_ENCODING  	 gzip,deflate <br>HTTP_ACCEPT_ENCODING  	 [empty string]</p><p>Normal then proxy:<br>HTTP_ACCEPT_LANGUAGE  	 en-us,en;q=0.5 <br>HTTP_ACCEPT_LANGUAGE  	 [empty string]</p><p>Normal then proxy:<br>HTTP_CONNECTION  	 keep-alive <br>HTTP_CONNECTION  	 [empty string]</p><p>Normal then proxy:<br>HTTP_HOST  	 <a href="http://disq.us/url?url=http%3A%2F%2Fwww.pickrent.com%3AeVDB8HNv2UlYPuaHfH6iybI0XPA&amp;cuid=3321886" rel="nofollow noopener" title="www.pickrent.com">www.pickrent.com</a> <br>HTTP_HOST  	 <a href="http://disq.us/url?url=http%3A%2F%2Fwww.pickrent.com%3AeVDB8HNv2UlYPuaHfH6iybI0XPA&amp;cuid=3321886" rel="nofollow noopener" title="www.pickrent.com">www.pickrent.com</a>:80</p><p>Normal then proxy:<br>HTTP_REFERER  	 [empty string] <br>HTTP_REFERER  	 <a href="http://disq.us/url?url=http%3A%2F%2Fwww.pickrent.com%2Fmisc%3AlpJffj1FgYHNa737JAFoTB-TKaI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.pickrent.com/misc">http://www.pickrent.com/misc</a></p><p>Looking at the differences couldn't I just look at the HTTP_HOST to see if it CONTAINS '80'?</p><p>@ray I have not tried that yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714790">8</a> by DanaK
		posted on 4/22/2009 at 11:08 PM
		</div>
		<div class="comment_text"><p>Just an aside, it's relatively easy to manipulate the 'forwarded for' just as the 'remote_addr'. I'd imagine anyone trying to seriously cause trouble would have taken this into account when doing their thing. It'll still catch the casual ones though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714791">9</a> by Gary Funk
		posted on 4/22/2009 at 11:28 PM
		</div>
		<div class="comment_text"><p>I hit you through a proxy and the dump gave me the normal resluts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714792">10</a> by Dave Dugdale
		posted on 4/22/2009 at 11:32 PM
		</div>
		<div class="comment_text"><p>@gary that's a bummer.</p><p>I would have thought others with CF sites would have a similar issues as mine and there would be code out there in use to detect proxies.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714810">11</a> by Gary Funk
		posted on 4/22/2009 at 11:46 PM
		</div>
		<div class="comment_text"><p>We all have that problem, but there is no sure-fire way to find a proxy as the software has gotten much better. And then there is the proxy through a proxy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714806">12</a> by Nate Beck
		posted on 4/23/2009 at 12:33 AM
		</div>
		<div class="comment_text"><p>Hmmm... MegaProxy is tricky.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Ffree.megaproxy.com%2Fgo%2F_mp_framed%3Fhttp%3A%2F%2Fwww.pickrent.com%2Fmisc%2Fproxy.cfm%3AWZBfQm4Eo7wIhCQahYrsl5VhFHY&amp;cuid=3321886" rel="nofollow noopener" title="https://free.megaproxy.com/go/_mp_framed?http://www.pickrent.com/misc/proxy.cfm">https://free.megaproxy.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714808">13</a> by shag
		posted on 4/23/2009 at 9:57 AM
		</div>
		<div class="comment_text"><p>@dave, that's very interesting.  It must be my bubble.  It worked perfectly for me.  When I was behind my company proxy, I was notified I was on a proxy.  When I didn't connect through the proxy, it showed me not coming through a proxy.</p><p>Based on what you identified, I'm not sure where to go.  Sorry that didn't work out so great for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714809">14</a> by David
		posted on 4/23/2009 at 12:29 PM
		</div>
		<div class="comment_text"><p>If this is for a commercial application you could use the Geo Intelligence from a company like Quova - <a href="http://disq.us/url?url=http%3A%2F%2Fwww.quova.com%2F%3ApZTOZKAX8xmpZn1Y81RcZ5qvhw0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.quova.com/">http://www.quova.com/</a>.<br>They'll give you very accurate information on an IP; I'm not just talking about the usual country &amp; roughly the nearest state/county data; real "this is where they are" and a confidence factor with the data too :)<br>They also tell you things like the speed of the link, type of link (adsl,cable,satellite,etc) and proxy type (public, private, aol, etc).<br>Could be very useful for you. Remember that not everyone behind a proxy is bad. Some people have to use a proxy from their company. I'd recommend you give a confidence factor to the order based on multiple attributes.</p><p>Something that has proven to be quite cheap &amp; effective is if you're taking an order on your site then you're probably taking their address. You could use the free GeoLite city DB (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.maxmind.com%2Fapp%2Fgeolitecity%29%3ATP5PBYCo9UvsvPu670sc0lEuH_w&amp;cuid=3321886" rel="nofollow noopener" title="http://www.maxmind.com/app/geolitecity)">http://www.maxmind.com/app/...</a> and then do a distance between their IP location and their address. If it's more than say 50miles then minus 10 from the confidence factor. Simple, free &amp; very effective. (NB The key is not to rely on any one attribute!)</p><p>Disclaimer: I do NOT work for either of those companies!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714807">15</a> by Dave Dugdale
		posted on 4/23/2009 at 6:46 PM
		</div>
		<div class="comment_text"><p>@David Thanks for the advice, I actually just installed the Maxmind DB a few weeks ago. Here is my test page for that:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.pickrent.com%2Fmisc%2Fgeoip.cfm%3A-bi3zYBiizrsKzN5-VvWxyy80Ho&amp;cuid=3321886" rel="nofollow noopener" title="http://www.pickrent.com/misc/geoip.cfm">http://www.pickrent.com/mis...</a></p><p>It works really well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714811">16</a> by Mike
		posted on 8/26/2009 at 10:46 PM
		</div>
		<div class="comment_text"><p>Dave -- Did you ever find a solution for this? I'm facing the exact same issue. I've been considering using an ASAPI Rewrite list of known proxy IPs. I'm just wondering if you found a good way of protecting your site.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714812">17</a> by Dave Dugdale
		posted on 8/27/2009 at 1:33 AM
		</div>
		<div class="comment_text"><p>No I never did, but I figured out some other ways to give the scammers a run for their money.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714814">18</a> by Jarod Knoten
		posted on 11/24/2009 at 3:24 AM
		</div>
		<div class="comment_text"><p>I found a somewhat interesting solution to sniffing out proxy servers. Its not fool proof and will occasionally return false positives but so far it is the best automated method for checking proxies I have come up with. We have been having issues with order fraud coming from behind proxy servers on orders that would otherwise had never thrown red flags. So we started google searching IP's from larger orders to see if they appeared on any proxy listing websites. To automate this for us I do an HTTP post to google (or you can use the search engine of your choice) with the ip address of the order and parse the results for keywords indicating a proxy (proxy, socks, socks5, socks4, etc.) if it detects any of these keywords<br>it flags the order as a potentially placed behind a proxy.</p><p>So far this method has thrown up red flags a few times on orders we would have otherwise shipped. Its not elegant, but it works great!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714813">19</a> by Dave Dugdale
		posted on 11/25/2009 at 8:15 PM
		</div>
		<div class="comment_text"><p>Jarod,</p><p>Interesting approach, I might have to try that with my next scammer. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714815">20</a> by RanI
		posted on 8/16/2011 at 11:40 PM
		</div>
		<div class="comment_text"><p>@ Hi Group, i would like to share my opinion also to this matter since i need a solution to that too. <br>So, first of all, code like bellow<br>&lt;cfif cgi.HTTP_X_FORWARDED_FOR neq ""&gt;<br>   &lt;h4&gt;You ARE coming from a proxy.&lt;/h4&gt;<br>&lt;CFELSE&gt;<br>   &lt;h4&gt;You are NOT coming from a proxy.&lt;/h4&gt;<br>&lt;/cfif&gt;</p><p>won't have any chance to see between cgi variables. i have testing for weeks with various platforms and different versions of ACF and Railo 3.2 final too. Strage thing is that on the same apache instance a simple code like from the first post or, even better one like:</p><p>srv#cat testp.php<br>&lt;?php<br>   if(isset($_SERVER['HTTP_X_FORWARDED_FOR']) ||($_SERVER['HTTP_USER_AGENT']=='') || ($_SERVER['HTTP_VIA']!=''))<br>   {<br>       die("Don't use proxies, please.");<br>   }<br>?&gt;</p><p>will act like it is suppose to do. Note HTTP_VIA variable which apears only when it is a matter of anon or high-anon proxy server.</p><p>Second, Garrett Johnson gave us a clue maybe without knowing (no ofence please). So, have you ever has to install, running and administrate a proxy server before, even for a small lan ? I have few years ago and still remember something about  "little" SQUID proxy server. Basicly for everyone who's goingo to use proxy server must <br>put proxy ip and port into browser connection dialog .. etc (sorry for this long explanation i am sure all of you have know already).<br>So, if you can not access header values for those variables via cgi dump what if we reverse the process ? We still have access to remote_addr and remote_host values. Now, i just want to test if remote_addr ip it is a proxy or not. How ? Trying to connect ot it. Remember that a proxy server must accept connection, right ? Well...</p><p>&lt;!-- define function to check connection; it will return true or false if it could connect or not ---&gt;<br>&lt;cfscript&gt;<br>   function checkMe(host,port) {<br>        connection = createObject("java", "java.net.Socket");<br>        connection.init(host, port);<br>        connected = connection.isConnected();<br>        return connected;<br>   }<br>&lt;/cfscript&gt;</p><p>&lt;cftry&gt;<br>        &lt;cfoutput&gt;<br>        &lt;!--- define a variable whitch hold remote address and a variable for counting open ports ---&gt;<br>        &lt;cfset ip="#CGI.REMOTE_ADDR#" /&gt;<br>        &lt;cfparam name="q" default="0" /&gt;</p><p>        &lt;!--- checking remote ip connection within well-known range of ports ---&gt;<br>        &lt;cfif checkMe(#ip#,80)&gt;<br>                &lt;cfset p1 = true /&gt;<br>                &lt;cfset q = 1 /&gt;<br>        &lt;/cfif&gt;</p><p>         &lt;cfif checkMe(#ip#,8080)&gt;<br>                &lt;cfset p2 = true /&gt;<br>                &lt;cfset q =q+1 /&gt;<br>        &lt;/cfif&gt;</p><p>         &lt;cfif checkMe(#ip#,3128)&gt;<br>                &lt;cfset p3 = true /&gt;<br>                &lt;cfset q =q+1 /&gt;<br>        &lt;/cfif&gt;<br>        &lt;/cfoutput&gt;</p><p>        &lt;!--- here leave empty in case this is not a proxy not to show anything ---&gt;<br>        &lt;cfcatch type="Any"&gt;</p><p>        &lt;/cfcatch&gt;<br>&lt;/cftry&gt;</p><p>&lt;!--- display and parsing the results <br>it is very basic in order to see on whitch port remote ip accept connection;<br>---&gt;<br> &lt;cfoutput&gt;<br>&lt;cfif IsDefined("p1")&gt;<br>        proxy on port 80: #p1#&lt;br /&gt;<br>&lt;cfelse&gt;<br>        no proxy on port 80&lt;br /&gt;<br>&lt;/cfif&gt;<br>&lt;cfif IsDefined("p2")&gt;<br>        proxy on port 8080: #p2#&lt;br /&gt;<br>&lt;cfelse&gt;<br>        no proxy on port 8080&lt;br /&gt;<br>&lt;/cfif&gt;<br>&lt;cfif IsDefined("p3")&gt;<br>        proxy on port 3128: #p3#&lt;br /&gt;<br>&lt;cfelse&gt;<br>       no proxy on port 3128&lt;br /&gt;<br>&lt;/cfif&gt;<br>&lt;/cfoutput&gt;</p><p>&lt;!--- then just logical detection ---&gt;<br>&lt;cfif IsDefined("variables.q") AND variables.q NEQ 0&gt;<br>    &lt;h2&gt;No proxy allowed here, mate!&lt;/h2&gt;<br>&lt;cfelse&gt;<br>     &lt;!--- normal processing page code as visitor it is not using a proxy ---&gt;<br>&lt;/cfif&gt;</p><p>Obviously this method could be more elaborate incorporated into a CFC where to just pass only CGI.REMOTE_ADDR and wait for a boolen answer.</p><p>Hope this helps; If any has anotjer suggestion....</p><p>best regards from Romania</p></div>
	</div>
</div>
		