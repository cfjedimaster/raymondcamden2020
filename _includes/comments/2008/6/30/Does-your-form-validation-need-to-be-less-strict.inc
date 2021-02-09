
<div class="comment" id="c_1713682511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682511">1</a> by Michael Long
		posted on 7/1/2008 at 2:51 AM
		</div>
		<div class="comment_text"><p>I also have a pet peeve with email address validators that don't understand that "+" is a valid character. That prevents me from using Gmail's address mapping tool (myname+netflix@gmail.com) when I sign up for an NetFlix account.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682508">2</a> by Rob Brooks-Bilson
		posted on 7/1/2008 at 3:19 AM
		</div>
		<div class="comment_text"><p>Those of us with hyphenated last names aren't too fond of gMail either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682506">3</a> by Daniel D
		posted on 7/1/2008 at 4:57 AM
		</div>
		<div class="comment_text"><p>I am all for smarter applications.  Not necessarily "less strict" but more intelligent.  Let me enter phone number in any valid format 555.555.5555 or 1(555) 555-5555 and the app convert it to what ever format it wants it in.  This type of feature tends to be a nice to have feature for most projects so it rarely gets done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682507">4</a> by Chris Mallinson
		posted on 7/1/2008 at 6:38 AM
		</div>
		<div class="comment_text"><p>The phone number one always makes me mad.  In all my phone number fields, my validator will use regex to strip out everything that is not a digit, and then perform validation.</p><p>I've also used this in city/province fields.  If someone fails to enter a state/province in a form, I will just populate it for them if I can figure it out based on the area code in the phone number.  I hate sending people back to fix a form if it can be avoided.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682513">5</a> by Thomas Case (aka tc)
		posted on 7/1/2008 at 7:03 PM
		</div>
		<div class="comment_text"><p>Chris,<br>Is there a good resource reference that enumerates area codes with state/province.  You had a good idea hear.  It would be nice to have a common reference to use (e.g., XML file, data table, enum, etc.).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682512">6</a> by Allen
		posted on 7/1/2008 at 8:45 PM
		</div>
		<div class="comment_text"><p>I'd up this a notch.  It would be nice if forms and business rules were built with real life users in mind.  A few examples that I can think of off hand of form validation bullshit :</p><p>a) google's blogger --&gt; if you go to save or post a new blog entry, it will throw an error saying you have an invalid date/time.  Why?  Because "AM" is valid but "aM" is not.  Really Google, any chance you can have an intern fix that?  Or are you going to tell us that you didn't have a problem with it in your usability tests?  If not, re-write your tests!</p><p>b) Sallie Mae --&gt; they're not the only ones where I've had password issues with but the most recent example.  They tell me that my password must be 8-32 characters in length and include a number and upper/lower case (IIRC, something like that).  My password has that.  Depsite their claims it turns out that it doesn't accept a ")" in my password.  I revert to an old school password with those sort of characters and it works.  I've had this problem with other sites.  First off, there is no reason in 2008 not to accept a * or ( or $ or ! in a password.  More so, if those are invalid make sure you tell the user they're invalid.  I'm sure they don't see it on the bottom line but think of how many phone calls they get over that.</p><p>c) Wells Fargo --&gt; There are some screens on the bill pay that I've ran across where it doesn't think "8/8/08" is valid.  It forced me to use "08/08/2008".  If it was an application for tracking historical events, I could see the need to specify 2008 instead of 1908.  But this is bill pay.  You can only make a payment for today or in the future.  Wells Fargo, please don't brag about how "great" you are on the internet until you get some programmers that act like engineers and worry more about what their code is doing and how people use it rather than how fancy the code itself is.</p><p>There are more.  I know I've had the same frustration as what  Daniel D said.  I've also had some interesting problems at work with some web sites.  Our proxy server isn't in the US... it's an odd situation.  But some sites have randomly rejected orders despite a US CC and US billing and shipping address (billing and shipping being the same, at that).  I know NewEgg's done this in the past.  I had LaLa do it to me, too.</p><p>Oh, and I'm sure everyone here has ran into Captcha where no matter how carefully you look at the picture and type the letter/number combo you still get it wrong a couple times.  I HATE THOSE.</p><p>Anywhoooooooo.... I hope that sinus infection gets better soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682515">7</a> by Stefan Vesterlund
		posted on 7/4/2008 at 2:55 PM
		</div>
		<div class="comment_text"><p>Is it not a rather typical attitude among programmers to optimize everything for _technical_ efficiency? I see that attitude a lot, specially among young coders. If they can save a millisecond of CPU time it does not matter if they waste 5-10 minutes of the time from a human :)</p><p>I mean, Ray, you did a mistake, why should the computer suffer? :)</p><p>I am joking, but not so much. I think we are still doing things too much on the computers terms and we often forget who was supposed to be the slave...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682514">8</a> by Joshua Curtiss
		posted on 7/13/2008 at 6:56 AM
		</div>
		<div class="comment_text"><p>I'm a big fan of having the form clean up common user mistakes on the client-side with JavaScript (or AS if its a Flex form). I know client-side reliance like that is a weakness, but eh...</p><p>Phone numbers have 3 fields (Area Code, Phone, Extension) with the phone auto-adding dash if they exclude it.</p><p>And one that is really helpful.. Auto-capitalization for name/address info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682518">9</a> by Nando
		posted on 8/1/2008 at 5:58 PM
		</div>
		<div class="comment_text"><p>I live in Europe and have reoccuring problems with form validation in web apps built in the United States. These apps often try and force me to enter an incorrect phone number, state or zip code because of narrow minded form validation.</p><p>A VALID phone number is one you can use to call me. It's 11 digits long here in Switzerland. If form validation forces me to shorten it to 10 digits, my phone number becomes invalid. A VALID address is one you can write on an envelope and I'll get it in the post. My zip code has 4 digits. If form validation forces me to add a random 5th digit to it so it passes a programmer's narrow concept of validation, my postal address is rendered invalid.</p><p>I run across this _all_ the time, and so do many of my friends here. It's extremely frustrating, and I've been forced to build up a variety of strategies for dealing with it, because in many cases, web apps render my genuine postal address and genuine phone number invalid.</p><p>Surprisingly, one of the _worst_ offenders is Adobe's website. It's impossible for me to enter my correct address or phone number using an English version of Abobe's website. And I've really tried. If I try and fudge the zip code to 5 digits on the US site so it passes validation, it forces me to enter a state from that zip code area, all the while allowing Switzerland as the country selection. I don't speak French or German well enough to use the Swiss site, so the end result is that I cannot buy software directly from Adobe online.</p><p>The underlying message that comes across loud and clear is: "If you're too stupid to enter your correct phone number and postal address, we're not going to sell anything to you!" The idiotic thing about this is that I don't _need_ Adobe to call me. They never have. I don't need them to send anything to me in the post. I've already downloaded the trial. I JUST NEED THE KEY SENT TO MY EMAIL ADDRESS SO I CAN UNLOCK THE TRIAL.</p><p>I've completely given up on Adobe. It's absolutely impossible for me to be a client of theirs. And this stuff happens all the time to me.</p><p>In another case where I needed a validated copy of my birth certificate sent to me, the programmer decided that if the zip code is 4 digits long, a 0 should be prepended to it when it was persisted to make up for the missing digit. I insisted that my zip code was 4 digits long after it didn't pass the first round of validation. I don't know what happened to the country. Apparently, the programmer found a list of country names somewhere and included it as a dropdown in the form so it looked cool. UPS attempted to deliver my birth certificate to a small town in Massachusetts that doesn't exist.</p><p>Adobe likely invested many 10's of thousands of dollars of programming time in that sophisticated validation system of theirs. The end result is that I can't get a serial number for Fireworks online. In the end, I needed to find a friend in America who would receive the CD for me in the post, order the CD from Amazon and have it sent to her (Amazon accepts my billing address in Switzerland, Adobe doesn't). She opened it, and sent me the serial number by email. It worked, but I wasn't 100% sure it would, so I had a backup plan in place that she would send me the CD via FedEx if necessary and reimburse her for the cost. The billable time I wasted trying to figure out how to buy a valid copy of Fireworks CS3 _far_ exceeded the purchase price.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682517">10</a> by Raymond Camden
		posted on 8/1/2008 at 6:27 PM
		</div>
		<div class="comment_text"><p>Have you tried using their feedback process?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682516">11</a> by Nando
		posted on 8/1/2008 at 9:35 PM
		</div>
		<div class="comment_text"><p>I didn't use the feedback form, but I phoned Adobe several times and explained the problem. I found out on the phone, or at least this is what was explained to me, that in Adobe's case it's intertwined with their pricing policy regarding language versions. So the convoluted end result is that my address is invalid, which the sales rep translated for me as meaning that I live in the wrong place in the world to be allowed to buy an English version of Fireworks online from Adobe via their website in English. Great, thanks for telling me! The sales rep told me it couldn't be changed, and would not take my order over the phone either, saying it was "impossible". This was a few months back. I don't know how it is now, the the experience was so frustrating, I really don't feel like ever trying again.</p><p>It's not only Adobe. I run into problems like this with a surprising number of websites with my address and phone number, many targeted at an international audience. The lesson I've learned from this experience is that a programmer cannot validate a phone number or an address or even an email address as genuinely valid, meaning _my_ phone number where they can reach me, so what is the point of attempting to do so? My phone number is a unique set of 11 digits that CANNOT be anticipated by a validation routine. Programmers should _not_ even try, because they cannot anticipate all the scenarios necessary now and into the future that would allow valid data through their routines. Nor should they set up database data types in such a way that makes unnecessary validation necessary. Phone numbers and zip codes are strings, not numerics, and they have indefinite lengths! Form validation, in my opinion, should be very sparse indeed, and designed from the USER'S perspective!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682523">12</a> by Raymond Camden
		posted on 8/1/2008 at 10:59 PM
		</div>
		<div class="comment_text"><p>Good points there Nando. I feel your pain. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682520">13</a> by Allen
		posted on 8/2/2008 at 1:05 AM
		</div>
		<div class="comment_text"><p>Nando, that officially sucks.  The folks at Adobe should be ashamed of themselves.  What's the use of RIA if your core assumptions are wrong?  It isn't easy to use just because flash is highlighting a required field in red.</p><p>What's happening to Nando, to touch back on the original post, is the problem a lot of places seem to have with getting business rules correct let alone differentiating between a business rule and a display rule.</p><p>In the case of the postal code, there are different rules governing the postal code dependent on the country.  For example, if you're in Canada it's going to be 6 characters and at that should be letter-number-letter number-letter-number (or am I flip flopping those?).  And like Raymond's original post, the display rules should let you enter that with or without spaces.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682524">14</a> by Nando
		posted on 8/2/2008 at 2:08 AM
		</div>
		<div class="comment_text"><p>Yeah, it sucks, but again, it's not only Adobe. Somehow, web developers all over the world have this idea that data coming in has to be rigorously validated to ensure the user has not made a mistake, and they don't allow the user to submit the form if you don't correct it in a way that will pass some mysterious, hidden validation routine. That's what really sucks - the whole idea that this is the way it should be done!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682522">15</a> by Greg
		posted on 9/17/2008 at 4:00 PM
		</div>
		<div class="comment_text"><p>I am coming into this conversation a bit late, so i am not sure that anyone will see this comment. I do have something to say on this subject. I think that it is wrong for adobe to not see the error in their logic. I think that it is good that everyone has noticed that this is a problem.</p><p>However, i think that it would be much more useful of a post if we all got together and consolidated a set of validation rules that we could all get behind that will work for the US and overseas.</p><p>Maybe I have missed the boat here, but i am not aware of a place that already lays out the rules for every field in an address/contact form with rules for US, Canada, and elsewhere. If there is such a place, please post a link. If not, lets get started.</p><p>SIDENOTE: i decided to test Ray's blog and left off my "http://" in the website to see if it would, kindly, put it in for me.. it did not.. "Your website was not a valid url." sigh.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682521">16</a> by Raymond Camden
		posted on 9/17/2008 at 4:02 PM
		</div>
		<div class="comment_text"><p>@Greg - This blog is a bit out of date compared to the main BlogCFC. In that, we preset the field to http://. We intelligently ignore it if you don't change it, so you won't get an error saying http:// isn't a valid url. But if you decide to enter a URL, you don't have to type the http://.</p><p>As I said, my blog is just a bit old compared to the core install.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682525">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682525">17</a> by Greg
		posted on 9/17/2008 at 4:27 PM
		</div>
		<div class="comment_text"><p>No worries Ray. Didn't mean to come down hard on you.. just thought it was topical.</p></div>
	</div>
</div>
		