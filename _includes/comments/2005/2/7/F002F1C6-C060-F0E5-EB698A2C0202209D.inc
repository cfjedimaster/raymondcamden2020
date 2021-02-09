
<div class="comment" id="c_1713617025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617025">1</a> by nOah
		posted on 2/9/2005 at 9:10 PM
		</div>
		<div class="comment_text"><p>Looks pretty tight to me Ray...  welcome to AS.   Now, I got to dive into this cfmx 7.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617026">2</a> by Steve Moore
		posted on 2/9/2005 at 10:31 PM
		</div>
		<div class="comment_text"><p>When using the accordion or tab navigator, do you know of a way to tell which cfformgroup page was front most when the submit button was clicked? I'm trying to use a 3-tab search form, each distinct, but all form fields come across. The user could enter a field value on one tab, switch to another tab and enter value in another field, then click search. I'd want to do the search based on which one was front most, not which had field content, because they both would.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617127">3</a> by Raymond Camden
		posted on 2/9/2005 at 10:36 PM
		</div>
		<div class="comment_text"><p>I believe there is a "enabled" property. If you give each tag/accordian a name, you may be able to check each one. I'll try this tomorrow (swamped today) and if I find it, I'll blog it in a new entry.</p><p>Although - do you have a button on each tab/accordiaon? If so, why not give them the same name, but different values?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617134">4</a> by Steve Moore
		posted on 2/9/2005 at 11:13 PM
		</div>
		<div class="comment_text"><p>I only had one search button for the entire form, underneath the tab navigator. I have changed this to separate submit buttons on each tab, with unique names, and can differentiate in the code which one was clicked. So I can use this. Would still be nice to know which was front-most though. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617121">5</a> by brettliotta
		posted on 2/10/2005 at 6:08 AM
		</div>
		<div class="comment_text"><p>just a little enhancement to Ray's nice little checkFields function..</p><p>change these lines to this:<br>old:<br>&amp;lt;cfoutput&amp;gt;<br>  if(!mx.validators.Validator.isValid(this, 'donations.#f#')) { if(ok) <a href="http://disq.us/url?url=http%3A%2F%2Fmx.controls.Alert.show%3A7oz5xEaV9qecCD0_m13-s4bYxi8&amp;cuid=3321886" rel="nofollow noopener" title="mx.controls.Alert.show">mx.controls.Alert.show</a>('#arguments.message#'); ok = false;};<br>&amp;lt;/cfoutput&amp;gt;<br>new:<br>&amp;lt;cfoutput&amp;gt;<br>  if(!mx.validators.Validator.isValid(this, '#arguments.form#.#f#')) { if(ok) <a href="http://disq.us/url?url=http%3A%2F%2Fmx.controls.Alert.show%3A7oz5xEaV9qecCD0_m13-s4bYxi8&amp;cuid=3321886" rel="nofollow noopener" title="mx.controls.Alert.show">mx.controls.Alert.show</a>(#f#.errorString,"Errors"); ok = false;};<br>&amp;lt;/cfoutput&amp;gt;</p><p>first #arguments.form# (instead of the static 'donation' form) should have been there in the first place. but what (#f#.errorString,"Error") does is this.. it give the Alert window a title "Error" and it uses the cfinput messsage="" attribute to display in the message part of the Alert window (instead of that generic 'You have missed some items in red...').</p><p>What I want to do next is customize the styling on this Alert window (font-family , font-size, color, etc.) , but I'm having some problems with that a the moment.  Any help is appreciated.  And I will post the new function if I figure it out.</p><p>Thanks Ray,<br>Brett</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617120">6</a> by Brett Liotta
		posted on 2/10/2005 at 6:14 AM
		</div>
		<div class="comment_text"><p>Forgot to Subscribe. That's all I'm doing on this post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617119">7</a> by Raymond Camden
		posted on 2/10/2005 at 6:48 AM
		</div>
		<div class="comment_text"><p>The donations part was definitely a screw up - a hold over from the original code. Thanks! So you are saying I -can- get the original msg for the bad form field? I thought that was impossible. Awesome. I'll update it later tonight.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617128">8</a> by Brett Liotta
		posted on 2/10/2005 at 7:29 AM
		</div>
		<div class="comment_text"><p>yeah, in ActionScript myfieldname.errorString holds the cfinput message attribute.</p><p>hey, can you submit a form using ActionScript?  like the equivalent to formname.submit() in JavaScript.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617122">9</a> by Brett Liotta
		posted on 2/10/2005 at 7:50 AM
		</div>
		<div class="comment_text"><p>I thought it was myformname.submitForm() , but it didn't work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617131">10</a> by Raymond Camden
		posted on 2/10/2005 at 8:04 AM
		</div>
		<div class="comment_text"><p>I tried the modification to show the particular error msg for a field and it did not work. This is the line code I have:</p><p>			if(!mx.validators.Validator.isValid(this, '#arguments.form#.#f#')) { if(ok) <a href="http://disq.us/url?url=http%3A%2F%2Fmx.controls.Alert.show%3A7oz5xEaV9qecCD0_m13-s4bYxi8&amp;cuid=3321886" rel="nofollow noopener" title="mx.controls.Alert.show">mx.controls.Alert.show</a>(#f#.errorString,'Error'); ok = false;};</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617129">11</a> by Raymond Camden
		posted on 2/10/2005 at 8:08 AM
		</div>
		<div class="comment_text"><p>Oops. Typo on my part. It works. Now - here is my problem. While I like getting the specific message - I don't like the fact that it is just the _first_ error. I think the error msg I had - eventhough vague - told you to check the entire page for errors. Know what I mean? I wonder if I should simply take all the errors and concate them together.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617124">12</a> by Brett Liotta
		posted on 2/10/2005 at 8:49 AM
		</div>
		<div class="comment_text"><p>Yeah, that would very nice.  The only thing that might be a problem there is the amount of field errors.  What if there is 20 (or more) fields to concat?  Is that going to look weird?</p><p>But yeah, if its only a few field errors (which is probably the norm anyway) that would be very good.</p><p>This flash stuff is nice but man there's a lot to learn on the ActionScript side.  And the Macromedia documentation for the Object Model is lacking.  I need some better documentation.  Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617123">13</a> by Raymond Camden
		posted on 2/10/2005 at 8:15 PM
		</div>
		<div class="comment_text"><p>Brett - when I ran it and a lot of errors showed up - the Alert box actually had a scrol component! I think it worked fairly well.</p><p>Hey - are you related to Matt Liotta?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617125">14</a> by Brett Liotta
		posted on 2/11/2005 at 1:43 AM
		</div>
		<div class="comment_text"><p>Really, that's pretty cool.  You can probably also adjust the height and width of the Alert box. But a scroll works as well.</p><p>No I don't think I know a Matt Liotta.  I do know a Ray Liotta though.  Ever hearda him?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617130">15</a> by Sakang
		posted on 1/17/2006 at 11:36 PM
		</div>
		<div class="comment_text"><p>Hello Ray and Brett,</p><p>Well I tried your checkFields codes but somehow I cannot make it to show all of the errors.<br>When I ran it, I get two alert boxes on top of each other: one with empty message and the other with the values in the message="" attribute<br>of the second required field control. Where am i messing it up?</p><p>Here is my entired code:</p><p>&lt;cffunction name="checkFieldSet" output="false" returnType="string"&gt;<br>   &lt;cfargument name="fields" type="string" required="true" hint="Fields to search"&gt;<br>   &lt;cfargument name="form" type="string" required="true" hint="Name of the form"&gt;<br>   &lt;cfargument name="ascode" type="string" required="true" hint="Code to fire if all is good."&gt;</p><p>   &lt;cfset var vcode = ""&gt;<br>   &lt;cfset var f = ""&gt;</p><p>   &lt;cfsavecontent variable="vcode"&gt;<br>      var ok = true;<br>      var msg = "";<br>      &lt;cfloop index="f" list="#arguments.fields#"&gt;<br>         &lt;cfoutput&gt;<br>	if(!mx.validators.Validator.isValid(this, '#arguments.form#.#f#')) { if(ok) <a href="http://disq.us/url?url=http%3A%2F%2Fmx.controls.Alert.show%3A7oz5xEaV9qecCD0_m13-s4bYxi8&amp;cuid=3321886" rel="nofollow noopener" title="mx.controls.Alert.show">mx.controls.Alert.show</a>(#f#.errorString,"Errors"); ok = false;};<br>         &lt;/cfoutput&gt;<br>      &lt;/cfloop&gt;<br>   &lt;/cfsavecontent&gt;<br>   &lt;cfset vcode = vcode &amp; "if(!ok) <a href="http://disq.us/url?url=http%3A%2F%2Fmx.controls.Alert.show%3A7oz5xEaV9qecCD0_m13-s4bYxi8&amp;cuid=3321886" rel="nofollow noopener" title="mx.controls.Alert.show">mx.controls.Alert.show</a>(msg,'Error'); "&gt; <br>   &lt;cfset vcode = vcode &amp; "if(ok) #ascode#"&gt;   <br>   &lt;cfset vcode = replaceList(vcode,"#chr(10)#,#chr(13)#,#chr(9)#",",,")&gt;</p><p>   &lt;cfreturn vcode&gt;</p><p>&lt;/cffunction&gt;</p><p>&lt;cfform name="form1" format="flash" skin="haloblue" width="580" height="500" action="index.cfm" preservedata="yes"&gt;<br>&lt;cfformgroup type="page"&gt;<br>&lt;cfinput name="InsuranceName" type="text" label="Insurance Company Name:" width="150" required="yes" message="InsuranceName is Required." /&gt;							<br>					&lt;cfinput name="PlanType" type="text" label="Plan Type:" width="150" required="yes" message="PlanType is Required." /&gt;<br>					&lt;cfinput name="PolicyNumber" type="text" label="Policy Number:" width="150" required="yes" message="PolicyNumber is Required." /&gt;																<br>					&lt;cfinput name="GroupName" type="text" label="Group Name:" width="150" required="yes" message="GroupName is Required." /&gt;															<br>					&lt;cfinput name="GroupNumber" type="text" label="Group Number:" width="150" required="yes" message="GroupNumber is Required." /&gt;<br>					&lt;cfinput name="Display" type="text" label="Display:" width="150" /&gt;</p><p>&lt;/cfformgroup&gt;</p><p>&lt;cfinput type="button" name="step3b" value="Next" onClick="#checkFieldSet("PlanType,PolicyNumber,GroupName,GroupNumber","form1","PlanType.text=InsuranceName.text")#"&gt;</p><p>&lt;/cfform&gt;</p><p>Thanks to both of your creation!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617135">16</a> by Brett Liotta
		posted on 1/18/2006 at 3:06 AM
		</div>
		<div class="comment_text"><p>Sakang,</p><p>On first glance, I'm not seeing the "msg" variable being set to anything.  And, there are two places you are calling the Alert so that would explain the two pop ups.  And you can play with that new "buttonWidth" line.  I used that b/c the error message was wrapping funny.</p><p>Check this (all I changed was the function):</p><p>&lt;cffunction name="checkFieldSet" output="false" returnType="string"&gt;<br>   &lt;cfargument name="fields" type="string" required="true" hint="Fields to search"&gt;<br>   &lt;cfargument name="form" type="string" required="true" hint="Name of the form"&gt;<br>   &lt;cfargument name="ascode" type="string" required="true" hint="Code to fire if all is good."&gt;</p><p>   &lt;cfset var vcode = ""&gt;<br>   &lt;cfset var f = ""&gt;</p><p>   &lt;cfsavecontent variable="vcode"&gt;<br>      var ok = true;<br>      var msg = "";<br>      &lt;cfloop index="f" list="#arguments.fields#"&gt;<br>         &lt;cfoutput&gt;<br>if(!mx.validators.Validator.isValid(this, '#arguments.form#.#f#')) { msg += #f#.errorString + "\n"; ok = false; }<br>         &lt;/cfoutput&gt;<br>      &lt;/cfloop&gt;<br>   &lt;/cfsavecontent&gt;<br>   &lt;cfset vcode = vcode &amp; "if(!ok) { mx.controls.Alert.buttonWidth=100; <a href="http://disq.us/url?url=http%3A%2F%2Fmx.controls.Alert.show%3A7oz5xEaV9qecCD0_m13-s4bYxi8&amp;cuid=3321886" rel="nofollow noopener" title="mx.controls.Alert.show">mx.controls.Alert.show</a>(msg,'Error'); }"&gt; <br>   &lt;cfset vcode = vcode &amp; "if(ok) #ascode#"&gt;   <br>   &lt;cfset vcode = replaceList(vcode,"#chr(10)#,#chr(13)#,#chr(9)#",",,")&gt;</p><p>   &lt;cfreturn vcode&gt;</p><p>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617132">17</a> by Brett Liotta
		posted on 1/18/2006 at 3:11 AM
		</div>
		<div class="comment_text"><p>Let me re-word that first section before the code b/c upon reading it didn't make sense.</p><p>On first glance, I'm not seeing the "msg" variable being set to anything. And, there are two places you are calling the Alert so that would explain the two pop ups.</p><p>(All I changed was the function. You can play with that new "buttonWidth" line. It controls the width of the Alert in pixels. I used that b/c the error message was wrapping funny.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617126">18</a> by MJE
		posted on 3/8/2006 at 2:30 AM
		</div>
		<div class="comment_text"><p>This is pretty much the closest thread that I've found for what I'm trying to do. Does anyone know if there is a simple way that you can get the client side validation to fire if you're using a type="button" instead of type="submit"?</p><p>Basically, I'm using flash remoting and dont' want the the form to actually submit to itself or any other page, causing the page to reload. My AS validates the required fields (they turn red and the little baloons show up, etc, but the alert box doesn't pop up for me using this method).</p><p>&lt;cfinput type="button" onClick="submitForm()" value="Submit Data"&gt;</p><p>Does anyone know a way that I can have the default validation alert message pop up using this method?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617133">19</a> by Magesh Rajasekaran
		posted on 5/23/2006 at 1:52 AM
		</div>
		<div class="comment_text"><p>I'm using CFForm which has multiple tabs (I am using cfformgroup type=tabnavigator), how would I validate if the user switches from one tab to another?  Does anyone have any idea how to validate?</p><p>Thanks,<br>Magesh.R</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617136">20</a> by Grae D.
		posted on 6/30/2011 at 10:49 PM
		</div>
		<div class="comment_text"><p>This is loosely related to the topic in that it is involving a flash &lt;cfform&gt; question I was asked recently.  The issue was that the default error alert on a required field was showing further down on the form due to the size of the form.  It's a long form and middle can be below the fold.  They wanted to know if there was any way to move the alert popup to the top of the form so it was more prominent.  I havent found a way so thought i'd take a shot here since flash CFForms are being discussed.</p></div>
	</div>
</div>
		