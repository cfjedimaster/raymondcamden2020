
<div class="comment" id="c_1713675270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675270">1</a> by Raymond Camden
		posted on 12/8/2007 at 1:45 AM
		</div>
		<div class="comment_text"><p>I lie. I got a CFC done. I'll post later. It allows for this though:</p><p>&lt;cfset docs = createObject("component", "docs")&gt;<br>&lt;cfset docs.authenticate("rcamden@gmail.com","xxxxxx")&gt;<br>&lt;cfset mydocs = docs.getDocumentList()&gt;<br>&lt;cfdump var="#mydocs#"&gt;</p><p>&lt;cfset content = <a href="http://disq.us/url?url=http%3A%2F%2Fdocs.download%3AXCkTKKodmU4APfbsd9EcD--xcRQ&amp;cuid=3321886" rel="nofollow noopener" title="docs.download">docs.download</a>(mydocs.sourceurl[1])&gt;<br>&lt;cfoutput&gt;result is #content#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675272">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675272">2</a> by Adam Tuttle
		posted on 12/8/2007 at 2:52 AM
		</div>
		<div class="comment_text"><p>Very cool, Ray! I can't wait for it to show up on RIAForge - I'm using google docs to share some documentation for an admin site with a buddy and this should let me just display the contents of the doc right on the site!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675273">3</a> by Raymond Camden
		posted on 12/8/2007 at 2:54 AM
		</div>
		<div class="comment_text"><p>No. This will not be a project. Never. I can't. Not another project. Please, help me stop the madness!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675275">4</a> by Max Hamby
		posted on 12/8/2007 at 3:16 AM
		</div>
		<div class="comment_text"><p>Geez, Ray.... not another project? What do you want to do instead.... sleep?</p><p>slacker! ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675276">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675276">5</a> by Michael Evangelista
		posted on 12/9/2007 at 12:44 AM
		</div>
		<div class="comment_text"><p>LOL @<br>value="whereiscfonadobedotcom"</p><p>agreed... where?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675274">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675274">6</a> by Raymond Camden
		posted on 12/9/2007 at 12:57 AM
		</div>
		<div class="comment_text"><p>That was my way of being a little snide. ;) As it stands - CF is now on the home page!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675277">7</a> by Dave Griffith
		posted on 12/29/2007 at 11:21 AM
		</div>
		<div class="comment_text"><p>Raymond - Any idea why I would be getting a "Connection Failure" result while trying your example with valid values???? Every time I try the page spins out for about 45 seconds and the "result.filecontent" contains the failure message.</p><p>I'm on a Godaddy-hosted CF instance and cannot use CreateObject. I've pasted your example into an http page with no luck. I also changed your sample cfc to &lt;cfinvokes... to get around the CreateObject limitation.</p><p>Happy New Year!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675278">8</a> by Raymond Camden
		posted on 12/29/2007 at 8:01 PM
		</div>
		<div class="comment_text"><p>I'm not sure what you mean by 'pasting into an http page' - but I'd consider one simple CFM with a CFHTTP that mimics my code. If it still fails, you need to talk to GoDaddy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675282">9</a> by Andrew
		posted on 6/25/2008 at 11:22 PM
		</div>
		<div class="comment_text"><p>Just a quick note that I found this great ... had to adapt it to MX6.1 for a project but not too bad. Instead of arrayLen(packet.feed.entry) I used packet.feed.totalResults.xmlText in production because it allows for a 0 entry not to throw a CF error since not all my users have Google Docs. This may have been added by Google after you wrote this so I wanted to give this heads up to everyone finding their way here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675280">10</a> by omar
		posted on 3/19/2011 at 9:57 PM
		</div>
		<div class="comment_text"><p>I'm guessing this doesn't work anymore. I just tested the code as is.</p><p>At code block 3 I get:</p><p>Element AUTH is undefined in AUTHDATA.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675283">11</a> by Raymond Camden
		posted on 3/19/2011 at 10:24 PM
		</div>
		<div class="comment_text"><p>It could be something else. What _does_ exist in authdata?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675284">12</a> by omar
		posted on 3/19/2011 at 10:29 PM
		</div>
		<div class="comment_text"><p>If I print out &lt;cfoutput&gt;#authdata[dtype]#&lt;/cfoutput&gt;</p><p>I get:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fwww.google.com%2Faccounts%2FErrorMsg%3FEmail%3Drcamden%2540gmail.com%26service%3Dwritely%26id%3Dcr%26timeStmp%3D1300559350%26secTok%3D.AG5fkS-MzfpZN_7q5il57bpln5Imzpnbyw%253D%253D%3A-hyZkSBMXRjs_G-XFmcMiGbmmVE&amp;cuid=3321886" rel="nofollow noopener" title="https://www.google.com/accounts/ErrorMsg?Email=rcamden%40gmail.com&amp;service=writely&amp;id=cr&amp;timeStmp=1300559350&amp;secTok=.AG5fkS-MzfpZN_7q5il57bpln5Imzpnbyw%3D%3D">https://www.google.com/acco...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675288">13</a> by Raymond Camden
		posted on 3/19/2011 at 10:52 PM
		</div>
		<div class="comment_text"><p>You get that url? It has my email address in it. Did you try to access _my_ docs? You would need to use your own auth info to test this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675287">14</a> by omar
		posted on 3/19/2011 at 11:31 PM
		</div>
		<div class="comment_text"><p>That was to demonstrate. I used my own. What I think is happening is that it's not authenticating.</p><p>I'm simply getting Error Bad Authentication. After refreshing a few times, Google sends Captcha codes back.</p><p>Not sure why this is happening, email and password are correct on my end. I'm just trying to google authenticate for gmail</p><p>&lt;cfset email = URLENCODEDFORMAT("*******@gmail.com")&gt;<br>&lt;cfset userpwd = URLENCODEDFORMAT("*********")&gt;</p><p>&lt;cfhttp url="<a href="https://disq.us/url?url=https%3A%2F%2Fwww.google.com%2Faccounts%2FClientLogin%3AgI23FBMSVN650VzRreftCjdetdQ&amp;cuid=3321886" rel="nofollow noopener" title="https://www.google.com/accounts/ClientLogin">https://www.google.com/acco...</a>" method="post" result="result" charset="utf-8"&gt;<br>	&lt;cfhttpparam type="formfield" name="Email" value="#email#"&gt;<br>	&lt;cfhttpparam type="formfield" name="Passwd" value="#userpwd#"&gt;<br>	&lt;cfhttpparam type="formfield" name="accountType" value="HOSTED"&gt;<br>    &lt;cfhttpparam type="formfield" name="service" value="apps"&gt;<br>&lt;/cfhttp&gt;</p><p>&lt;cfset content = result.filecontent&gt;<br>&lt;cfset authdata = structNew()&gt;</p><p>&lt;cfloop index="line" list="#content#" delimiters="#chr(10)#"&gt;<br>	&lt;cfset dtype = listFirst(line, "=")&gt;<br>	&lt;cfset value = listRest(line, "=")&gt;<br>	&lt;cfset authdata[dtype] = value&gt;<br>&lt;cfoutput&gt;#dtype# &lt;p /&gt;#value# &lt;p /&gt;#authdata[dtype]#&lt;/cfoutput&gt;</p><p>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675285">15</a> by Raymond Camden
		posted on 3/19/2011 at 11:46 PM
		</div>
		<div class="comment_text"><p>Ah well shoot. You got me there. The code is 4 years old so it's very possible their API has been updated to require oAuth for example in order to work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675286">16</a> by omar
		posted on 3/20/2011 at 12:14 AM
		</div>
		<div class="comment_text"><p>no prob. I figured that. It sucks not to be able to find coldfusion examples for much of the basics. I was searching for coldfusion demos on authenticating users with Google. I'll play around some more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675290">17</a> by Jose G Alfonso
		posted on 12/15/2012 at 11:41 PM
		</div>
		<div class="comment_text"><p>Hi Ray, I've been using the googleDocsService.cfc successfully (thanks for the great work) I do have a question I've been googling around for 2 hours and not finding answers:</p><p>When a google document gets displayed by the viewer, you see several options and icons on the top left of the viewer: paging zoom and print (PDF). Do you know if it is possible to give a viewer a param so the print function opens a new window as opposed to what by default does which is to open the print preview in the same window?</p><p>Please let me know</p><p>Thanks</p><p>Here's a sample URL <a href="https://disq.us/url?url=https%3A%2F%2Fdocs.google.com%2Fviewer%3Fa%3Dv%26pid%3Dexplorer%26srcid%3D0B5FjGhFPHeKwOWFhYzcxNTYtMDQzMy00M2E1LWJiNmUtNjNkYmI3NTg4ODY5%3AYwfmLte2_cv7mbdWnQPWqWD58Ew&amp;cuid=3321886" rel="nofollow noopener" title="https://docs.google.com/viewer?a=v&amp;pid=explorer&amp;srcid=0B5FjGhFPHeKwOWFhYzcxNTYtMDQzMy00M2E1LWJiNmUtNjNkYmI3NTg4ODY5">https://docs.google.com/vie...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675289">18</a> by Raymond Camden
		posted on 12/16/2012 at 8:10 AM
		</div>
		<div class="comment_text"><p>I'm not quite sure I get what you're asking. You want to change the behavior of the browser's Print menu?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675291">19</a> by Stu
		posted on 1/9/2013 at 11:24 PM
		</div>
		<div class="comment_text"><p>Hi Raymond.<br>I have been using very similar code to list files on Google Drive but for some reason it does not list video, image or Lucidcharts...any idea why?</p><p>Does it have to do with the difference between <br>"<a href="https://disq.us/url?url=https%3A%2F%2Fdocs.google.com%2Ffeeds%2Fdocuments%2Fprivate%2Ffull%2F%3AcbC_TlBPQG61IGLmDzmJB8FLZZA&amp;cuid=3321886" rel="nofollow noopener" title="https://docs.google.com/feeds/documents/private/full/">https://docs.google.com/fee...</a>"&gt;  AND<br>"<a href="https://disq.us/url?url=https%3A%2F%2Fdocs.google.com%2Ffeeds%2Fdefault%2Fprivate%2Ffull%2F%3APIkgUepwGwoCs2b8Mt0hYsGXUSM&amp;cuid=3321886" rel="nofollow noopener" title="https://docs.google.com/feeds/default/private/full/">https://docs.google.com/fee...</a>"&gt; <br>I am using the URL ...feeds/documents/... but I can't seem to get the ...feeds/default/... URL to work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675292">20</a> by Raymond Camden
		posted on 1/10/2013 at 8:05 PM
		</div>
		<div class="comment_text"><p>From what I can tell, Drive seems to be an entirely different API - <a href="https://disq.us/url?url=https%3A%2F%2Fdevelopers.google.com%2Fdrive%2Fv2%2Freference%2F%3APyTnGYP9riaW5QyjgB3kVV9d-9Q&amp;cuid=3321886" rel="nofollow noopener" title="https://developers.google.com/drive/v2/reference/">https://developers.google.c...</a></p><p>This means my code here is probably obsolete.</p></div>
	</div>
</div>
		