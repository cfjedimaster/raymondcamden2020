
<div class="comment" id="c_1713684830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684830">1</a> by John Whish
		posted on 8/8/2008 at 3:54 PM
		</div>
		<div class="comment_text"><p>I don't like IsDate because it is not locale specific for instance IsDate('31/01/2008') and IsDate('01/31/2008') both return true however CreateDate(2008, 31, 01) will throw an error.</p><p>I tend to do:<br>&lt;cftry&gt;<br>  &lt;cfset mydate = CreateDate(form.y, form.m, form.d) /&gt;<br>  &lt;cfcatch&gt;<br>    &lt;cfset mydate = "" /&gt;<br>  &lt;/cfcatch&gt;<br>&lt;/cftry&gt;</p><p>&lt;cfif IsDate(myDate)&gt;<br>  &lt;!--- invalid date ---&gt;<br>&lt;cfelse&gt;<br>  &lt;!--- valid date ---&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684844">2</a> by John Whish
		posted on 8/8/2008 at 4:03 PM
		</div>
		<div class="comment_text"><p>Sorry forgot to add that LSIsDate() has an issue as mentioned on livedocs which is why I don't use it:</p><p>"Changed behavior: when using the SUN JRE 1.3.1 on an English(UK) locale, this function returns False for a date that has a one-digit month or day (for example, 1/1/01). To work around this, insert a zero in a one-digit month or day (for example, 01/01/01). "</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684843">3</a> by Raymond Camden
		posted on 8/8/2008 at 4:06 PM
		</div>
		<div class="comment_text"><p>Well I did mention very clearly that isDate is US specific. As for lsIsDate and the issue you brought up - it would be trivial to get around:</p><p>if len(<a href="http://disq.us/url?url=http%3A%2F%2Fform.day%3AUwMjpYmyPtRssE0A2jZ5EiFXHTU&amp;cuid=3321886" rel="nofollow noopener" title="form.day">form.day</a>) is 1<br>  <a href="http://disq.us/url?url=http%3A%2F%2Fform.day%3AUwMjpYmyPtRssE0A2jZ5EiFXHTU&amp;cuid=3321886" rel="nofollow noopener" title="form.day">form.day</a> = "0" &amp; <a href="http://disq.us/url?url=http%3A%2F%2Fform.day%3AUwMjpYmyPtRssE0A2jZ5EiFXHTU&amp;cuid=3321886" rel="nofollow noopener" title="form.day">form.day</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684842">4</a> by Raymond Camden
		posted on 8/8/2008 at 4:10 PM
		</div>
		<div class="comment_text"><p>I see your point now about 31/1/08. If the user changed their form field on the client side, they could change the value to 31.</p><p>Hmpth.</p><p>I prefer not to use try/catch in general unless it is absolutely necessary.</p><p>You could do validation on the month value first. Ie, numeric and 1-12. I'd probably do that that instead of try/catch.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684922">5</a> by Raymond Camden
		posted on 8/8/2008 at 4:12 PM
		</div>
		<div class="comment_text"><p>One note on the JRE 1.3/UK thing - since CF ships with 1.5, and 1.6 is the most recent, this bug would probably not affect too many people.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684927">6</a> by Raymond Camden
		posted on 8/8/2008 at 4:15 PM
		</div>
		<div class="comment_text"><p>Ahah, interestingly enough, isValid does work right and blocks 31/1, if you specify usdate:</p><p>#isValid("usdate", "31/01/2008")#</p><p>will return no. So if you change my code above then you would be fine. (Assuming you want American dates.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684923">7</a> by John Whish
		posted on 8/8/2008 at 4:21 PM
		</div>
		<div class="comment_text"><p>Yeah - I didn't explain myself very well :)</p><p>That's a good point about the JVM version I just like to know that it'll work regardless of environment as sometimes clients install on their own servers *eek*.</p><p>I've noticed that some frameworks use try and catch when creating directories instead of using DirectoryExists() for performance reasons, so I've always considered that if used sparingly it is a valid technique, so I find you comment very interesting as you're a bit of a guru. Do you only use it to trap unexpected exceptions? (I'm not sure if the performance reasoning still applies with CF8.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684924">8</a> by Peter Bell
		posted on 8/8/2008 at 5:09 PM
		</div>
		<div class="comment_text"><p>&gt; I prefer not to use try/catch in general unless it is absolutely necessary</p><p>Hmm, interesting. Any particular reason(s)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684931">9</a> by Raymond Camden
		posted on 8/8/2008 at 5:26 PM
		</div>
		<div class="comment_text"><p>It seems to me that try/catch should be used only when you have no other way to check for some condition. It's a: "This is out of my hands situation, so I'll try like hell...". If I can check for some condition using regular methods, then I will.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684933">10</a> by Peter Bell
		posted on 8/8/2008 at 5:58 PM
		</div>
		<div class="comment_text"><p>Makes sense. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684929">11</a> by Asa
		posted on 8/8/2008 at 8:11 PM
		</div>
		<div class="comment_text"><p>Check out DateJS. It's a great JS library for parsing dates on the client side.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.datejs.com%2F%3AYFl2vjSzxW2C8MULjPFU4th2Jl4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.datejs.com/">http://www.datejs.com/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684925">12</a> by Michael Schmidt
		posted on 8/8/2008 at 8:43 PM
		</div>
		<div class="comment_text"><p>I normally handle the client side implementation to create the date transform it back to a string and compare the two.  If they are the same strings then they are the same date.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684928">13</a> by Johan
		posted on 8/9/2008 at 1:04 AM
		</div>
		<div class="comment_text"><p>Why not just avoid the problem all together and use a date selector? Plenty around and easier for users as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684935">14</a> by Mikkel Johansen
		posted on 8/9/2008 at 2:04 PM
		</div>
		<div class="comment_text"><p>What about CFAJAXPROXY ?</p><p>It should be very easy to make a "onsubmit" dateValidation cfc-function. And that function would then be used on both clientside and serverside. - Right ?</p><p>-Mikkel</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684932">15</a> by Raymond Camden
		posted on 8/9/2008 at 5:06 PM
		</div>
		<div class="comment_text"><p>Sure, that could be a nice way of doing it as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684926">16</a> by salvatore fusto
		posted on 8/14/2008 at 2:46 PM
		</div>
		<div class="comment_text"><p>Hi, if you can't use a datepicker, the best way i think, in your form, a solution is to completely avoid the date validation: if you select year and month first, an ajax call cal load the day's select with the appropriate number of days; also, using the isLeapYear() function on the selected year, you can solve february too.<br>regards<br>salvatore</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684930">17</a> by DSande
		posted on 9/16/2008 at 11:48 PM
		</div>
		<div class="comment_text"><p>I have had issues with the date validation as well, but the following code has worked well for me. Plus I use a date picker. Hope this helps someone.</p><p>If request.form("yourfiled") &lt;&gt; "" Then<br>If Not IsDate(request.form("yourfiled")) or Len(request.form("yourfiled")) &gt; 10 or Len(request.form("yourfiled")) &lt; 8 or Not ISNumeric(Right(request.form("yourfiled"),4)) Then<br>myerror = myerror &amp; "(yourfiled must be a valid date) "<br>End If<br>End IF</p></div>
	</div>
</div>
		