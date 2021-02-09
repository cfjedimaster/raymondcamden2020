
<div class="comment" id="c_1713708726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708726">1</a> by Patrick Stormthunder
		posted on 9/25/2008 at 2:30 AM
		</div>
		<div class="comment_text"><p>Thanks for the consideration, Ray.  The first test for null that I sent you is simplified from our actual isNull function, which is defined in BaseComponent.cfc, a cfc extended by many of our cfcs.  (BaseComponent is an adaptation of the Hal Helms invention of the same name.)</p><p>The variable named null that isNull() tests for is defined only once so as to be able to set variables to null or test them for null without duplicate definitions for the null value.  The actual definition is:</p><p>&lt;cfset null="|\| |_| |_ |_"/&gt;<br>&lt;cffunction name="isNull" hint="is a variable valueless?" <br>access="public" output="false"&gt;<br>&lt;cfargument name="value" required="true" /&gt;<br>&lt;cfif NOT IsSimpleValue(arguments.value)&gt;<br>&lt;cfreturn false /&gt;<br>&lt;/cfif&gt;<br>&lt;cfreturn arguments.value is null /&gt;<br>&lt;/cffunction&gt;</p><p>So if I wanted to change the value of null from "|\| |_| |_ |_" to "poodle", i wouldn't have to change both the cfset statement and the function, only the cfset.  To me, this approach seems like good practice.  Its purpose is encapsulation: preventing other parts of the application from having to know what null is (they don't even have to know it's a string), but allowing them to set things to it and test for it.</p><p>Do you still think this is the wrong approach, or had I just not provided enough information the first time round?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708735">2</a> by ike
		posted on 9/25/2008 at 2:45 AM
		</div>
		<div class="comment_text"><p>Sounds to me like the 7-seconds thing is a fluke.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708739">3</a> by ike
		posted on 9/25/2008 at 2:48 AM
		</div>
		<div class="comment_text"><p>I have a tendency to use chr(7) (ascii beep code) when I might use a NULL in another language like Java or JavaScript. Reason being that it's an almost-never-used single-byte character and so it's compact and the likelyhood of colliding with something else is terribly small.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708737">4</a> by Adam Cameron
		posted on 9/25/2008 at 3:42 AM
		</div>
		<div class="comment_text"><p>G'day all.<br>The initial post had me wondering whether the sample code was simplified from a CFC, and Patrick's follow-up has confirmed this.</p><p>In my experience - and this is experience from investigating someone's question on the Adobe CF forums, not my own "real world" experience - is that accessing the variables scope in CFC methods has quite an overhead.  It seems that this situation could be another example of this.</p><p>My - completely baseless - suspicion here is that when the code is compiled, the direct-access-to-the-variables-scope is replaced with a getter method (and a poorly performing one): it's the only "sensible" thing I could come up with.</p><p>Can I recommend to Patrick that he tries the same tests, except using a function-local variable (ie: a VAR) for the NULL variable, and see what you get?</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708738">5</a> by Patrick Stormthunder
		posted on 9/25/2008 at 3:58 AM
		</div>
		<div class="comment_text"><p>Yes, Adam, I actually did try running this test with a local variable for just that reason, with the same results.  <br>This:<br>&lt;cffunction name="isNull" hint="is the valueless?" access="public" output="false"&gt;<br>&lt;cfargument name="value" required="true" /&gt;<br>&lt;cfset var null="|\| |_| |_ |_"/&gt;<br>&lt;cfreturn arguments.value EQ null /&gt;<br>&lt;/cffunction&gt;<br>was taking between 7000 and 9000 ms for 1000 iterations<br>while this:<br>&lt;cffunction name="isNull" hint="is the valueless?" access="public" output="false"&gt;<br>&lt;cfargument name="value" required="true" /&gt;<br>&lt;cfset var null="|\| |_| |_ |_"/&gt;<br>&lt;cfreturn arguments.value EQ "|\| |_| |_ |_" /&gt;<br>&lt;/cffunction&gt;<br>was taking 25 to 30 ms for 1000 iterations.</p><p>This timing, by the way, is based on coldfusion's native debugging output, not &lt;cftimer&gt; calls, which I will try for comparison when I get back into work tomorrow. The 7000 ms I mentioned in my first post was the rough average of 30 or so trials.</p><p>I was initially led into this testing when I was wondering what was taking certain of my more iterative functions a lot of time to run, and I found that isNull cals seemed to be a frequent culprit. Thy consistently run slowly in every instance in my application- I wonder if Ray's vastly different testing results indicate a different coldfusion or java version than mine.</p><p>I take his point on this 1000 times method being a poor man's benchmark, but I was having trouble isolating what was making isNull run slowly, and this was the best I could come up with at the time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708736">6</a> by ike
		posted on 9/25/2008 at 4:09 AM
		</div>
		<div class="comment_text"><p>ColdFusion 7? There were a lot of performance enhancements made in CF8. I know I remember reading that CFC instantiation was benchmarked at something like 20x faster.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708740">7</a> by Raymond Camden
		posted on 9/25/2008 at 4:57 AM
		</div>
		<div class="comment_text"><p>@Patrick: So first off- let me say that when it comes to CFCs, I _will_ use the Variables scope for methods, especially things that act like static variables for the object, like a DSN I may pass in when the CFC is created. So ignore what I said up above about encapsulation (to me it's still encapsulated, but within the CFC as a whole).</p><p>I'm still confused as to how you are seeing 7k-9k iterations. If you run _my_ test code, do you see the same? Are you recreating the CFC on each loop iteration or just calling the method each time?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708727">8</a> by Patrick Stormthunder
		posted on 9/25/2008 at 6:20 AM
		</div>
		<div class="comment_text"><p>In answer to Ike, we're running CF8.  I'll answer Ray when I get a chance at work tomorrow.  Thank you all for your interest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708733">9</a> by Patrick Stormthunder
		posted on 9/25/2008 at 7:40 PM
		</div>
		<div class="comment_text"><p>To answer Ray's last question first: In my application, null and isNull() are defined in BaseComponent.cfc.  But for the purpose of illustration, I sent code that I ran as a separate cfm page, not using the cfc.  When the function is defined in a cfc and tested in the cfc, I got similar results.  In no test was I creating a cfc multiple times.</p><p>In answer to his first question, here are the times I got for three trials of the tests he proposed:<br>test1: 5822, 9112, 8746<br>test2: 26, 25, 45<br>test3: 4449, 5308, 6329<br>test4: 7, 7, 6</p><p>So it looks like there's something in my environment that consistently makes EQ take much longer with variables on the right side than with constants - and I got a similarly fast result for compare().</p><p>I am running CF 8,0,0,176276 and JVM 1.6.0_01-b06 on a 32 bit Vista machine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708734">10</a> by Robert Gatti
		posted on 9/25/2008 at 7:55 PM
		</div>
		<div class="comment_text"><p>One thing to keep in mind is that in dynamically typed languages there are many more "tricks" you can pull when dealing with a variable/value combination than with two variables. You already know the data type of one of the operands first off. Also, since every Java object has a toString method I wouldn't be the least bit surprised if the CF parser is generating something like: return variable1.toString() == "|\| |_| |_ |_" in one instance and: return <a href="http://disq.us/url?url=http%3A%2F%2Fvariable1.compare%3AbGI8QmNJq0XI5LdySMC_zD_Hei0&amp;cuid=3321886" rel="nofollow noopener" title="variable1.compare">variable1.compare</a>(lookupFromScope("variables", "null")) in the second.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713708741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713708741">11</a> by Patrick Stormthunder
		posted on 9/25/2008 at 8:21 PM
		</div>
		<div class="comment_text"><p>That makes a lot of sense, Robert.  I'm going to have to start giving compare() a shot in cases like this.</p><p>A coworker just ran Ray's 4 tests with results very similar to Ray's.  She has the same CF, the same JVM, and the same OS as me.  Also, I just got similar results to Ray's running his tests on our QA server.  So this seems like a personal problem that I should stop worrying myself and others about.  Thanks again for all the support on this.</p></div>
	</div>
</div>
		