
<div class="comment" id="c_1713725391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725391">1</a> by Tony Bentley
		posted on 7/17/2010 at 3:05 AM
		</div>
		<div class="comment_text"><p>Nice. The console object can be a pain.</p><p>Try this sometime:</p><p>function debug(val){<br>	//allows debugging to be turned on or off <br>	//simply comment the next line to turn off<br>       //prevents errors in browsers with no console object<br>	if (console != "undefined") {<br>		console.log(val);<br>	}<br>}</p><p>debug('running checkAddy')</p><p>Also instead of using a concatenated string for creating elements, have you used .clone() to duplicate them and then placed the values by traversing the cloned parent element?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725392">2</a> by Raymond Camden
		posted on 7/17/2010 at 7:24 AM
		</div>
		<div class="comment_text"><p>I don't normally "ship" code with console in it - but I almost always leave it in my demos. Sorry about that!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725396">3</a> by Nate
		posted on 1/8/2011 at 12:44 PM
		</div>
		<div class="comment_text"><p>Hi, <br>I found this very useful.  One thing that I noticed though was that it doesn't seem to get address line 2 information back from UPS and make use of it.  Am I correct about this?  When it exists, it looks like you can get this back from UPS in node.AddressLine[2].xmltext, if I'm not mistaken.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725393">4</a> by Raymond Camden
		posted on 1/9/2011 at 4:15 AM
		</div>
		<div class="comment_text"><p>Do you mean my UPS CFC code or the front end code here? If you mean the UPS code, do you mind filing a ER on <a href="http://disq.us/url?url=http%3A%2F%2Fcfups.riaforge.org%3F%3ADnBk7ZEIGLdQNTirl_NNWPHBT6I&amp;cuid=3321886" rel="nofollow noopener" title="cfups.riaforge.org?">cfups.riaforge.org?</a> (Once the server is back up.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725397">5</a> by Nate
		posted on 1/15/2011 at 9:29 AM
		</div>
		<div class="comment_text"><p>Yes, sorry I was referring to a variable in the addressverification.cfc file of the Coldfusion code in riaforge that works with this jQuery.  If that change is made, then your code here would be something like:</p><p>...<br>var streetLine1 = $.trim($("#streetLine1").val());<br>var streetLine2 = $.trim($("#streetLine2").val());</p><p>...<br>13      if(streetLine1 == '' || city == '' || state == '' || zip == '') return;<br>...<br>16      $.getJSON("verificationservice.cfc?method=verifyaddress&amp;returnFormat=json", {"streetLine1":streetLine1,"streetLine2":streetLine2, "city":city, "state":state, "zip":zip}, function(res) {<br>...<br>26                      s += "&lt;div class='addyoption'&gt;&lt;span class='streetLine1'&gt;" + val[0] + "&lt;/span&gt;&lt;br/&gt; ";<br>s += "&lt;div class='addyoption'&gt;&lt;span class='streetLine1'&gt;" + val[0] + "&lt;/span&gt;&lt;br/&gt; ";<br>26                      s += "&lt;div class='addyoption'&gt;&lt;span class='streetLine2'&gt;" + val[1] + "&lt;/span&gt;&lt;br/&gt; ";<br>s += "&lt;div class='addyoption'&gt;&lt;span class='streetLine2'&gt;" + val[1] + "&lt;/span&gt;&lt;br/&gt; ";<br>...<br>...<br>and so on</p><p>Does this look like it would be useful to anyone else or just me?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725399">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725399">6</a> by Drew
		posted on 7/6/2011 at 12:33 AM
		</div>
		<div class="comment_text"><p>Is there a place to get access to the code for making a request to the UPS API? I have downloaded the developer kit, but there is nothing in there for making a call to application.addressVerification.streetAddressVerification()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725398">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725398">7</a> by Raymond Camden
		posted on 7/6/2011 at 12:35 AM
		</div>
		<div class="comment_text"><p>That's in my CFUPS package. You can find it at <a href="http://disq.us/url?url=http%3A%2F%2Fcfups.riaforge.org%3AxV0-OAc-ScATcP3BAxWse7PMfFk&amp;cuid=3321886" rel="nofollow noopener" title="http://cfups.riaforge.org">http://cfups.riaforge.org</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3178459166">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_wmjuD33UJz.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3178459166">8</a> by Shyam Yadav
		posted on 2/28/2017 at 3:22 AM
		</div>
		<div class="comment_text"><p>hi Raymond, very good article. Can you let me know where to configure the UPS credentials</p></div>
	</div>
</div>
		
<div class="comment" id="c_3179044173">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3179044173">9</a> (In reply to <a href="#c_3178459166">#8</a>) by Raymond Camden
		posted on 2/28/2017 at 2:14 PM
		</div>
		<div class="comment_text"><p>They are set when you use my CFUPS package. Just note though that I really don't support ColdFusion anymore.</p></div>
	</div>
</div>
		