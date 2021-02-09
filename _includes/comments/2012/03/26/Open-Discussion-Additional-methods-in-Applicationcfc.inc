
<div class="comment" id="c_1713739963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739963">1</a> by Terry Sampson
		posted on 3/26/2012 at 10:49 PM
		</div>
		<div class="comment_text"><p>What was that again? Oh yeah! KISS :&gt;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739948">2</a> by Ryan Vikander
		posted on 3/26/2012 at 10:50 PM
		</div>
		<div class="comment_text"><p>I don't see a problem with putting private methods in there if you have a lot of stuff going on inside OnRequestStart or OnApplicationStart etc in order to encapsulate code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739961">3</a> by Cutter
		posted on 3/26/2012 at 10:51 PM
		</div>
		<div class="comment_text"><p>I see no issue in placing small methods in Application.cfc, for use by other methods of Application.cfc. In one instance it's DRY, but otherwise it's encapsulating your code into small, organized blocks of code that are easier to maintain. (I've seen some very long onApplicationStart and onSessionStart methods)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739959">4</a> by Mikel
		posted on 3/26/2012 at 10:52 PM
		</div>
		<div class="comment_text"><p>As Ray said, "Outside of that though I would not put other methods in there. Keep the file focused on what it should be - handling the event handlers for your application."</p><p>Yep, that about sums it up for me!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739968">5</a> by Shawn Holmes
		posted on 3/26/2012 at 11:00 PM
		</div>
		<div class="comment_text"><p>I'm pro-additional methods in Application.cfc provided they are:</p><p>1. Private and only called from within Application.cfc,<br>2. Are called meticulously with appropriate locks where thread-safe code isn't guaranteed.</p><p>The most common private method in my Application.cfc's is a method that constructs the model, caches it in a struct, and appropriately it returns to be either placed in REQUEST directly, on each page request (for development modes), or locked-then-written into APPLICATION once (in production modes).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739969">6</a> by Mike Henke
		posted on 3/26/2012 at 11:10 PM
		</div>
		<div class="comment_text"><p>Interesting starting consensus. I would think it would be over-kill since the cfc is ran each time a request happens. I did mark the function private as several suggested :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739970">7</a> by Mike Henke
		posted on 3/26/2012 at 11:17 PM
		</div>
		<div class="comment_text"><p>So from the group so far, something like cleanmystring() function won't pass the smell test. A private function to "get" settings in OnRequestStart is ok. Am I correct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739971">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739971">8</a> by Ryan Vikander
		posted on 3/26/2012 at 11:21 PM
		</div>
		<div class="comment_text"><p>I would call it something like GetVariable or something more explanatory unless it actually cleans your string.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739973">9</a> by Raymond Camden
		posted on 3/26/2012 at 11:21 PM
		</div>
		<div class="comment_text"><p>IMO, yes.</p><p>FWIW - as you know, you can load in UDFs for a request using a include and onRequest. I'm not a fan of that technique.</p><p>I'll normally make a CFC called util for all my random crap. I'll then put an instance in the Application scope. It's a bit more typing, but it means I can do my random crap like so:</p><p>&lt;cfoutput&gt;The date/time is #application.util.dateTimeFormat(now())#&lt;/cfoutput&gt;</p><p>It also means that if my other CFCs need random crap I can just inject them in via ColdSpring.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739974">10</a> by Scott Stroz
		posted on 3/26/2012 at 11:23 PM
		</div>
		<div class="comment_text"><p>I have only ever done this for functionality as it relates to Application events - as others have suggested, I will create a private function that gets called only from within another method in Application.cfc. And only for functionality that relates to one of the events.</p><p>Mike - it sounds like you want to create a method that will fetch data from the database, is this correct?</p><p>If it is, I am not sure that would pass the 'smell test'. I would not go so far as to say its 'wrong', but probably not something I would do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739947">11</a> by Andrew
		posted on 3/26/2012 at 11:25 PM
		</div>
		<div class="comment_text"><p>I agree as well.  I like to keep the application.cfc as clean as possible.</p><p>In the current big app I'm working on, we added one additional private method to application.cfc that builds our sites session structure and is only ever called from the onRequest method when needed.</p><p>But that's it. Keep it simple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739949">12</a> by Phillip Senn
		posted on 3/27/2012 at 12:00 AM
		</div>
		<div class="comment_text"><p>&gt;  I suggested a Google+ post to allow others to hash it out.</p><p>Who would see it if a Google+ post got started?  Are we supposed to subscribing to something in Google+?</p><p>I don't want to be left out!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739950">13</a> by Mike Henke
		posted on 3/27/2012 at 12:01 AM
		</div>
		<div class="comment_text"><p>I have a hybrid wheels app &amp; wanted the get function in on-request-start but the function wasn't defined so I decided to copy the function to the Application.cfc as a private function. I noticed a "cleanmystring" function in the Application.cfc. Didn't seem correct but then I practically did the same thing :-)</p><p>cfwheels get function<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcfwheels%2Fcfwheels%2Fblob%2Fnew-master%2Fwheels%2Fglobal%2Fpublic.cfm%23L389%3An_mLH1O17Js2Qfv8Et9NpB-EDI4&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cfwheels/cfwheels/blob/new-master/wheels/global/public.cfm#L389">https://github.com/cfwheels...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739954">14</a> by Ryan Anklam
		posted on 3/27/2012 at 12:02 AM
		</div>
		<div class="comment_text"><p>Whenever I find myself adding a private method to Application.cfc I always stop and ask myself, would this server the application better in a Utility class.  Sometimes the answer is "no", most of the time the answer is "yes".</p><p>What I usually end up doing is creating a private function in application.cfc that only serves as a proxy call to a utility function in another component.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739953">15</a> by Raymond Camden
		posted on 3/27/2012 at 12:09 AM
		</div>
		<div class="comment_text"><p>@Phillip Senn: Heh, I originally thought this wouldn't spark so much attention. ;) I should know by now - the blog posts I think will get no comments get a butt load - and vice versa.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739958">16</a> by Jon Hartmann
		posted on 3/27/2012 at 12:20 AM
		</div>
		<div class="comment_text"><p>I agree with Ray's guidelines, I just wish there was somewhere good to put all of the utility type functions I end up needing in my application... I get tired of making utility.cfc files and needing to use them everywhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739960">17</a> by Mike Henke
		posted on 3/27/2012 at 12:29 AM
		</div>
		<div class="comment_text"><p>@Scott - it is getting an "environment" setting stored in the application scope. Basically, on request start, do this security check if "production".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739962">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739962">18</a> by Scott Stroz
		posted on 3/27/2012 at 12:33 AM
		</div>
		<div class="comment_text"><p>Mike - that muddies the waters a bit. In a Model Glue application, that is something I would check in the Model Glue onRequestStart event handler. Not sure if there is an equivalent in CFWheels.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739964">19</a> by Sharon
		posted on 3/27/2012 at 6:30 AM
		</div>
		<div class="comment_text"><p>I don't like the idea of actual functions in application.cfc, other than those that directly interact with the core functions.  For something like "cleanString", I usually have a utilities.cfc (really just a collection of UDFs) that I've substantiated and put into request scope.</p><p>I've extended the Mura practice of putting things like that in the $ scope.  Short, consistent, managed by application.cfc, but the code is elsewhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739966">20</a> by Eric Belair
		posted on 3/27/2012 at 7:22 PM
		</div>
		<div class="comment_text"><p>I have an Application.cfc where I catch exceptions, long running requests, and missing templates using onError(), onRequestEnd(), and onMissingTemplate(), respectively. In each of these methods, I send an email to a notification email address, and I like the email content to include some scope variables and other information about the request. So, I created a simple private method in Application.cfc to return the email content that is shared. I think this ties in with your idea of keeping functions in Application.cfc related to the functionality of Application.cfc. I wouldn't put UDFs or anything else in there. I feel like Application.cfc should be viewed as an Object and you shouldn't put random functions in an Object that are not essential to that Object. If you need a function that is going to be used throughout the application, make it a UDF and keep your UDFs together - accessible through the REQUEST scope. That's my 2 cents.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739965">21</a> by Mark Gregory
		posted on 3/30/2012 at 5:43 PM
		</div>
		<div class="comment_text"><p>I do not like application spam, I do not like it Sam I am.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713739972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713739972">22</a> by Terry Sampson
		posted on 3/30/2012 at 5:50 PM
		</div>
		<div class="comment_text"><p>:&gt;)</p></div>
	</div>
</div>
		