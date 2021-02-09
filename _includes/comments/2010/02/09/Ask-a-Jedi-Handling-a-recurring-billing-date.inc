
<div class="comment" id="c_1713721925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721925">1</a> by Chuck Savage
		posted on 2/10/2010 at 6:33 AM
		</div>
		<div class="comment_text"><p>I handled something like this in Flex a while ago, for different reasons but it had to do with date ranges.  Of course there are other ways, but ActionScript in Flex has the ability to add/subtract days/months/years.  If I want the last day of a month (say of February 2010) I set the date to March 1st of 2010 and subtract 1 day.  Can ColdFusion do the same?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721910">2</a> by Raymond Camden
		posted on 2/10/2010 at 6:39 AM
		</div>
		<div class="comment_text"><p>Yep - dateAdd().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721933">3</a> by Aaron Holesgrove
		posted on 2/10/2010 at 6:56 AM
		</div>
		<div class="comment_text"><p>Hi Ray - in my apps I strictly force reoccurring billing to happen between the 1st and 28th of each month - if the current day is greater than 28 on signup, I change it to happen on the 28th regardless so that the customer can have a consistent reoccurring billing date to depend on.  Companies tend to like this logic too for their customers.  Your cfscript example is spot on though, if you're forced to work with the limitations of the days in each month, nice job.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721927">4</a> by Leigh
		posted on 2/10/2010 at 6:17 PM
		</div>
		<div class="comment_text"><p>I think people often get thrown by date problems. Then end up complicating things beyond belief, just out of confusion. This is a great example of how simple and elegant a solution can be with the use of the right date functions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721923">5</a> by Daniel Budde
		posted on 2/10/2010 at 7:50 PM
		</div>
		<div class="comment_text"><p>Same as Aaron, we let the customer choose their payment date on a finance website we have done work for, but for consistency we only let them choose between the 1st and the 28th.  I also agree, your solution appears to be elegant enough.</p><p>I've found the complexity increases some when people want to change payment days and tracking successful payments.  In our system, there is an added check to make sure there are no existing successful payments already in the same month.  Also, the recurring payments are disabled after 2 failed attempts within the same month and a notice is sent out to the customer and to an account rep.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721930">6</a> by David Hammond
		posted on 2/10/2010 at 8:14 PM
		</div>
		<div class="comment_text"><p>Here's a function that gets the next monthly billing date based on the original start date, which can be any date in the past:</p><p>&lt;cffunction name="GetNextBillingDate" returntype="date" output="false"&gt;<br>	&lt;cfargument name="startdate" type="date" required="true"&gt;<br>	&lt;cfargument name="currentdate" type="date" default="#Now()#"&gt;<br>	&lt;cfreturn DateAdd("m", DateDiff("m", startdate, currentdate) + 1, startdate)&gt;<br>&lt;/cffunction&gt;</p><p>Interestingly, my original code was in SQL, which also has the DateDiff function but works in such a way that the calculation is slightly more complicated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721929">7</a> by David Herman
		posted on 2/10/2010 at 11:41 PM
		</div>
		<div class="comment_text"><p>Even simpler we just bill every 28 days from their signup.  Our billing periods are ALL day based be it 28, 90 180 or 365</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721928">8</a> by David Herman
		posted on 2/10/2010 at 11:44 PM
		</div>
		<div class="comment_text"><p>btw Ray, what are the 2 ads I'm seeing in the lower right... they dont look like something thats supposed to be there :)</p><p>#  Lap Band Surgery<br># cheap web hosting</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721926">9</a> by Raymond Camden
		posted on 2/10/2010 at 11:46 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2FText-Link-Ads.com%3AzXciQqFPhpvBb_qp_suCIrM3Etk&amp;cuid=3321886" rel="nofollow noopener" title="Text-Link-Ads.com">Text-Link-Ads.com</a>. Kinda weird, but they pay super well. It helps me pay for my video games (when folks don't visit my wish list enough ;).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713721932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713721932">10</a> by Rob Cawte
		posted on 2/16/2010 at 10:40 AM
		</div>
		<div class="comment_text"><p>Paypal handles this issue by moving the payment date to the first of the next month whenever the payment date does not exist.  Similarly for annual subscriptions they move to March 1st if the original sub was created on Feb 29th.</p><p>From their pdf:<br><a href="https://disq.us/url?url=https%3A%2F%2Fcms.paypal.com%2Fcms_content%2Fen_US%2Ffiles%2Fdeveloper%2FPP_WebsitePaymentsStandard_IntegrationGuide.pdf%3AP0YRMIoM1nmtOXpVCt1ahoyJJXQ&amp;cuid=3321886" rel="nofollow noopener" title="https://cms.paypal.com/cms_content/en_US/files/developer/PP_WebsitePaymentsStandard_IntegrationGuide.pdf">https://cms.paypal.com/cms_...</a></p><p>How Subscriptions with Monthly Billing Cycles Work<br>For monthly billing cycles, recurring payments are collected on the same day of the month. If the initial recurring payment falls on the 31st, PayPal eventually adjusts the billing cycle to the 1st of the month. If the initial recurring payment falls on the 29th or 30th, PayPal adjusts the billing cycle to the 1st of the month on the following February.</p><p>EXAMPLE 3.2 When Monthly Recurring Payments Are Due and Collected on the 31st<br>The subscription terms are:<br>- $25.99 USD a month; the subscriber signs up on Thursday, July 31.</p><p>The subscriber is billed as follows:<br>- Thursday, July 31 = $25.99 USD<br>- Saturday, August 31 = $25.99 USD<br>- Wednesday, October 1= $25.99 USD<br>- Saturday, November 1= $25.99 USD<br> and so on...</p><p>Notice that no recurring monthly payment was collected in September, but recurring payments were collected roughly every 30 days.</p><p>EXAMPLE 3.3 When Monthly Recurring Payments Are Due and Collected on the 30th<br>The subscription terms are:<br>- $25.99 USD a month; the subscriber signs up on Tuesday, December 30.<br>The subscriber is billed as follows:<br>- Tuesday, December 30 = $25.99 USD<br>- Friday, January 30 = $25.99 USD<br>- Sunday, March 1= $25.99 USD<br>- Wednesday, April 1= $25.99USD<br> and so on...</p><p>Notice that no recurring monthly payment was collected in February, but recurring payments were collected roughly every 30 days.</p></div>
	</div>
</div>
		