
<div class="comment" id="c_1713615347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615347">1</a> by Brandon Smith
		posted on 1/28/2004 at 9:01 AM
		</div>
		<div class="comment_text"><p>I'm not using the "Link" version of Payflow Pro, but rather the Java component version. However, if I remember the documentation correctly it states that the returned success flag strictly refers to the validtity of the credit card number and date (maybe the 3-digit code on the back, too). The docs state something that the results of the AVS check is for your system to decide upon. In other words, the Verisign gateway will still process the transaction with the minimum "correct" attributes. Based on the result codes, your own system must make a decision.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615346">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615346">2</a> by Raymond Camden
		posted on 1/28/2004 at 6:02 PM
		</div>
		<div class="comment_text"><p>Heh, you should see the docs for Payflow Link. :) I double checked thismorning and I don't believe it was that obvious. Certainly I would have made it much more blatant in the doc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615349">3</a> by Brandon Smith
		posted on 1/28/2004 at 7:34 PM
		</div>
		<div class="comment_text"><p>I agree. The docs should make it obvious. Especially since if someone is using the AVS, most likely they are going to reject a transaction that returns a negative on the AVS but a positive on the match.</p><p>I wrote a CFC layer over the java layer that contains my logic based on the results. With the Link version, it appears that creating a logic layer may be a bit more difficult because the process makes a round trip from client to Verisign then to your server. Possible though.</p><p>Brandon Smith</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615348">4</a> by Greg
		posted on 3/8/2005 at 3:21 PM
		</div>
		<div class="comment_text"><p>So the deal here is that their old server would return a special RESPMSG field of AVSDECLINED if the transaction failed an AVS check. BUT BE WARNED!!!!!! They are transitioning to a new server and they have changed the functionality to the worst possible case!! Now the RESPMSG shows "Approved" even when the AVS check fails!!</p><p>This is a total distaster. I'm already looking for a new payment processor. The new server goes up on March 15 (forced on us merchants) even though it is obviously far from ready.</p></div>
	</div>
</div>
		