
<div class="comment" id="c_1713714639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714639">1</a> by Dan G. Switzer, II
		posted on 4/13/2009 at 9:49 PM
		</div>
		<div class="comment_text"><p>Another thing to keep in mind is while you can't trap the error in the function itself, you can trap the error in the code that's calling the method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714638">2</a> by Jon Hartmann
		posted on 4/13/2009 at 9:52 PM
		</div>
		<div class="comment_text"><p>In cases like this I often make a separate function which wraps the core one and tests the input before calling the main function. Barring that, I'd have stronger validation of the input before calling this function I guess.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714640">3</a> by Robert Haddan
		posted on 4/13/2009 at 10:22 PM
		</div>
		<div class="comment_text"><p>@All: This was my issue and I appreciate Ray blogging on the topic. The function is being called from a bound cfinput element, returning an asynch result based on other form inputs (a small calculator app). I used javascript on the input fields to limit the keystrokes to numbers-only, but if you delete the field contents, the binding sends an empty string to the function, which is not numeric. Ray's solution worked perfectly, but it made me question the purpose of the type attribute in the AJAX world where you don't want a full-blown error distrupting the user experience.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714641">4</a> by Rich Hefter
		posted on 4/13/2009 at 10:26 PM
		</div>
		<div class="comment_text"><p>In my opinion (which may be the same as Rays), specifying a strict argument type is really a debugging tool to catch coding errors.  As Ray indicated, if the input (say from a user) can be either, then you would not use a numeric data type as an argument.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714645">5</a> by Jon Hartmann
		posted on 4/13/2009 at 10:30 PM
		</div>
		<div class="comment_text"><p>@Robert: Its a good question, and I often run into a similar issue. I skip the "type" attribute for &lt;cfparam&gt; for the same reasons you're having problems with the type on &lt;cfargument&gt;: if a user passes something unexpected, the system throws an error rather than letting you handle it. You can get around that issue with &lt;cftry&gt;/&lt;cfcatch&gt;, but why not just leave off the type attribute and handle the validation manually? Basically, the type attributes offer very strict validation, where some situations (specifically any ones that involve users) require fuzzier validation. In those cases its best to create something like myAjaxFunction() that handles the validation and calls myFunction() if everything is ok. This gives you both the strict version and a more user friendly version as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714642">6</a> by Dan G. Switzer, II
		posted on 4/13/2009 at 11:39 PM
		</div>
		<div class="comment_text"><p>@Robert:</p><p>Another thing you can do, is stick to using strict validation for non-remote methods and then use a proxy CFC for all your remote methods.</p><p>While using a proxy requires a little more set up, it allows for a lot more control and allows you to set up better error handling.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714644">7</a> by Ben
		posted on 4/13/2009 at 11:42 PM
		</div>
		<div class="comment_text"><p>I think Dan's point is the critical one here.  The question isn't the merit of specifying argument datatypes.  The initial problem had more to do with where the application is dealing with unexpected input.  Exceptions thrown from bad argument types are meant to be handled in the consuming code, not in the function itself.  The purpose of the exception is to tell the calling code "No soup for you!"  It's the responsibility of the calling code to turn that into a friendly response.  In Bob's case, he needed the function itself to handle the problem and not indicate failure to the calling code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714643">8</a> by Miles Jordan
		posted on 4/14/2009 at 4:47 AM
		</div>
		<div class="comment_text"><p>My preferred way of dealing with this is to catch the error in the presentation layer. I think it's important for functions to take a strict set of arguments and types. That way the function can be used to perform a specific operation and return a result, without having to be cluttered up with error checking (like everything there are some exceptions).</p><p>Take the example where you a UDF that calls another to perform an operation. That UDF may in turn call another UDF for something else. If you simply perform error checking at the presentation layer, you should only need to check the  input variable once, or use one try catch, not one in each of the UDFs. Not only are things tidy, it forces you to create rigid code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714646">9</a> by Nando
		posted on 4/14/2009 at 1:21 PM
		</div>
		<div class="comment_text"><p>One thing to keep in mind here is that values passed from a form are _always_ strings. They are not typed. So a type setting of "string" on an argument that accepts values from a form is correct in this sense. "Any" will of course serve the same purpose.</p><p>As another poster mentioned, argument typing is meant to provide other programmers guidance as to what type of value is expected by a method in an API and "enforce" it so they don't have to dig behind the argument to figure that out. It's not designed to provide a validation / response mechanism to a user of an application.</p><p>We also can note that error trapping is a clumsy and resource intensive way of providing a simple response to a user, "Hey, we need a number here", or defaulting a value to 0 for instance if that's what is needed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714647">10</a> by Brian
		posted on 4/15/2009 at 1:00 AM
		</div>
		<div class="comment_text"><p>So, in the big picture, where would the preference for typing a variable be required (if at all) in the CF world?</p><p>The only place I can think of is when you're shoving data into a database/spreadsheet... Otherwise, doesn't it seem overkill to enforce type if CF is typeless?</p><p>I can see more use for validating against masks rather than atomic datatypes -- Credit card numbers, phone, email, etc... and those are best validated at user entry no matter which interface de jure you select.</p><p>Is that a truth that trapping an error costs more than pre-validating?  Seems to me that you're spending the same time, just in different layers...</p><p>(Just purely out of curiosity, it would be interesting to know the design decision that prompted data typing on arguments...)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714648">11</a> by Nando
		posted on 4/15/2009 at 1:13 AM
		</div>
		<div class="comment_text"><p>@Brian,</p><p>I think it depends on what type of application you are building. If you are providing an API that other developers (or you) will use, and you need to ensure that the developer passes in a struct and not a string for instance (or your code will break), then providing a type on the argument makes a lot of sense. The error that will be thrown to the developer will likely be more clear than the error you'd get from running the code that needs the struct (and got a string instead).</p><p>For validating form data, throwing errors is somewhat resource intensive, because CF's error handling machinery is put into play. Time a request that throws an error, catches it and returns a message to the user interface vs a request that processes an if statement and returns a message to the user interface.</p></div>
	</div>
</div>
		