
<div class="comment" id="c_1713661107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661107">1</a> by Francisco Mancardi
		posted on 1/11/2007 at 11:08 PM
		</div>
		<div class="comment_text"><p>hi!: great job, I'm using your code in one project (is saving me a lot of pain).<br>I've found the following problem:<br>I need to get tracking information using ReferenceNumber instead of TrackingNumber, it works but in the returned reply<br>'ShipmentIdentificationNumber' key is not present, then the code crashes.<br>I will try to contact UPS to understand is this is OK, <br>in the meantime i will do some simple workaround (structKeyExist?) and send you the code (if you want)</p><p>Regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661102">2</a> by Raymond Camden
		posted on 1/12/2007 at 6:18 AM
		</div>
		<div class="comment_text"><p>Hey Francisco - I'll give it a try when I get back in town. Ping me if you don't hear from me in a few days.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661092">3</a> by Fred Wenger
		posted on 1/15/2007 at 7:13 AM
		</div>
		<div class="comment_text"><p>Have you had any luck getting the signature image data back from UPS to show it to a user?  Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661104">4</a> by Raymond Camden
		posted on 1/15/2007 at 7:17 AM
		</div>
		<div class="comment_text"><p>Dumb question - that would be in shipment tracking, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661105">5</a> by Fred Wenger
		posted on 1/17/2007 at 2:01 AM
		</div>
		<div class="comment_text"><p>Yeah, the ship tracking.  You can get back some Base64 data that's the signature image if you make a the request with a specific "request code".  I wasn't sure what to do with the Base64 data.  I don't have the UPS API doc in front of me so I'm not using theie exact terms, but if you want more details, feel free to email me and I'll get that out of the docs.  Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661109">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661109">6</a> by Raymond Camden
		posted on 1/17/2007 at 3:14 AM
		</div>
		<div class="comment_text"><p>This makes sense. This week is hell for me (2 presentations), but I'll look at it next week. I've got this, plus new Canvas, plus new Lighthose Pro, all in my "for free" slot.</p><p>Anyone want to offer to pay me to develop OS apps? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661103">7</a> by Connie Decinko
		posted on 4/9/2007 at 9:49 AM
		</div>
		<div class="comment_text"><p>You might want to look at shipmenttracking.cfc.  It appears some of the code is missing past the added code for shipmentidentificationnumber.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661106">8</a> by Raymond Camden
		posted on 4/9/2007 at 3:29 PM
		</div>
		<div class="comment_text"><p>Can you be more specific? I don't quite get what you mean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661112">9</a> by Nick Sweeney
		posted on 9/29/2007 at 8:46 PM
		</div>
		<div class="comment_text"><p>Hi Ray - I am trying to use this handy tool - specifically the rates lookup - but I am on 6.1. You mentioned that "You could make the CFCs work in MX6 by removing this attribute and using the CFHTTP variable." Could you be more specific? I'm not exactly sure what you mean. Thanks!</p><p>- Nick</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661093">10</a> by Raymond Camden
		posted on 9/30/2007 at 2:30 AM
		</div>
		<div class="comment_text"><p>CF7 added a result attribute for cfhttp. Before that, the result of a cfhttp call was stored in a variable called cfhttp.</p><p>So you would need to remove result="..." from all CFHTTP tags, and where I used result.whatever (or whatever I named the result), change it to cfhttp.whatever.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661096">11</a> by Nick Sweeney
		posted on 9/30/2007 at 4:07 AM
		</div>
		<div class="comment_text"><p>Thanks Ray -</p><p>I made the necessary switches, but now I get the error:<br>Cannot invoke method init on an object of type coldfusion.runtime.Struct with named arguments.  <br>Use ordered arguments instead</p><p>line 93</p><p>91 : <br>92 : 	&lt;cfset variables.serviceCodes = loadServiceCodes()&gt;<br>93 : 	&lt;cfset super.init(argumentCollection=arguments)&gt;<br>94 : 	&lt;cfreturn this&gt;<br>95 : &lt;/cffunction&gt;</p><p>?? Not sure what to do there. From this post <a href="http://disq.us/url?url=http%3A%2F%2Fwww.1pixelout.net%2F2004%2F06%2F07%2Fcallingsuper%2F%3AXkuGAsI2cnRVXmr2rqQdiSyKykk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.1pixelout.net/2004/06/07/callingsuper/">http://www.1pixelout.net/20...</a> it looks like a common problem in 6.1 - but I am not sure how to further address the fix.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661097">12</a> by Raymond Camden
		posted on 9/30/2007 at 6:12 PM
		</div>
		<div class="comment_text"><p>Change that one line to something like this pseudo-code</p><p>&lt;cfset super.init(a,b,c,d,e)</p><p>where a,b,c,d etc are the arguments. My use of argumentCollection=arguments was just a shortcut.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661099">13</a> by Nick Sweeney
		posted on 9/30/2007 at 8:12 PM
		</div>
		<div class="comment_text"><p>Awesome! That did it - thank you so much, I really appreciate your help.</p><p>Btw - on a side note, now that I got it to work, I did a quick comparrison to the rates it provides and what <a href="http://disq.us/url?url=http%3A%2F%2FUPS.com%3ACF3kTw9DMyCuSv49dSDtynB7vZo&amp;cuid=3321886" rel="nofollow noopener" title="UPS.com">UPS.com</a> shows. The rates are slightly off... !?</p><p>Currently UPS is showing a fuel surcharge that doesn't show up. Should it be? Or will the cfc need to be modified/updated slightly to do that? (Can be quite expensive)</p><p>Also, I notice that the default shipping rate on UPS is around $1 more. (based on 1 package of 2-lbs from Wausau 54403 to Beverly Hills 90210) Although - obviously the rate fluctuates based on delivering to Residential vs Commercial. (Commercial is cheaper.) But it's still slightly variant even when setting "shiptoIsResidential=true".</p><p>Didn't know if these were known issues or if I am still missing something.</p><p>Thanks again - Nick</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661098">14</a> by Nate
		posted on 1/25/2008 at 11:33 PM
		</div>
		<div class="comment_text"><p>This code you have written is very very impressive...  One thing I'm curious about is how to handle canadian zip codes?  Currently canadian zip codes are not validated in the address verification cfc, right?  How complicated is it to do that?  And, is this even possible with the xml rate service that ups currently provides?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661100">15</a> by Raymond Camden
		posted on 1/26/2008 at 10:28 PM
		</div>
		<div class="comment_text"><p>Nate, you would need to check with UPS on that. I don't think I have the docs handy.</p></div>
	</div>
</div>
		