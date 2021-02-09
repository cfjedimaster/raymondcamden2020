
<div class="comment" id="c_1713670154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670154">1</a> by Joel
		posted on 8/13/2007 at 6:57 PM
		</div>
		<div class="comment_text"><p>Ray--</p><p>Thanks for response on this.  I have been debating with myself over which method to use.  However, given the greater flexibility and validation possible with the more explicit argument methodology, I will continue to use that.</p><p>Thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670151">2</a> by todd sharp
		posted on 8/13/2007 at 7:15 PM
		</div>
		<div class="comment_text"><p>Don't forget you can pass an argumentCollection without using cfinvoke - and it will be treated as individual arguments that can be type checked.</p><p>So in your second example you could have declared your arguments in the UDF and passed:</p><p>&lt;cfset res = test2(argumentCollection=s)&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670171">3</a> by Ryan Guill
		posted on 8/13/2007 at 7:27 PM
		</div>
		<div class="comment_text"><p>Todd has an excellent point.  But notice that in both the examples that ray and todd use, you still have to specify the cfargument for each argument you want to pass in that you want to be type checked.  And while that can be a drag (and a lot of code) it is, in my opinion still a better option, if nothing else so that your code is more maintainable and readable, but also for the type checking.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670150">4</a> by Brian Kotek
		posted on 8/13/2007 at 7:43 PM
		</div>
		<div class="comment_text"><p>I agree with Ryan. Given how easy it is to have code or a CFEclipse snippet generate cfargument tags for you, and given that you really only have to do it one time, there's not much reason to be lazy when it comes to documenting the API for your method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670153">5</a> by David Herman
		posted on 8/13/2007 at 9:14 PM
		</div>
		<div class="comment_text"><p>Dont forget that arguments can be typed arguments, so you could have a single argument be lets say com.blah.myData then if you have multiple cfc's that are using those specific arguments you can create an object of type com.blah.myData and pass that in, you dont lose your documentaion, and you don't have to have the same column names typed everywhere...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670170">6</a> by Brian Kotek
		posted on 8/13/2007 at 9:36 PM
		</div>
		<div class="comment_text"><p>True, and that can be a useful option. However, all that really does is move the argument names into the CFC. Which means (if you're still going the argumentCollection route to populate your data container CFC) that you still have to pass in the arguments with the proper names. You're just passing them into the data container CFC instead of the original target CFC by name.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670155">7</a> by Sean Coyne
		posted on 8/13/2007 at 10:36 PM
		</div>
		<div class="comment_text"><p>You can also use &lt;cfparam&gt; for the different elements of the struct that you want to validate.</p><p>&lt;cfargument name="theStruct" type="struct" /&gt;</p><p>&lt;cfparam name="arguments.theStruct.numericValue" type="numeric" /&gt;</p><p>then if you pass in a struct with a key called numericValue that holds a string, it will fail validation as well.</p><p>Not ideal but could be used with older code already taking a struct to ensure the validation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670156">8</a> by todd sharp
		posted on 8/13/2007 at 10:40 PM
		</div>
		<div class="comment_text"><p>Personally I've gotten in the habit of checking things myself - that way I can handle the issues accordingly.  But that's a whole other discussion I think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670158">9</a> by Darth Sidious
		posted on 8/13/2007 at 11:41 PM
		</div>
		<div class="comment_text"><p>We've used both, and if it's just you using your stuff the passing of the struct is a time saver.</p><p>And it's definitely convenient when your function can expect a lot of optional parameters.</p><p>But I've found that the benefit of cfargument acting as a vehicle to communicate to other programmers what you're expecting, and as an automatic way to enforce things (otherwise you have to do a bunch of validation yourself), outweighs the convenience factor when you have a bunch of developers on the project.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670159">10</a> by Joe Rinehart
		posted on 8/14/2007 at 3:38 PM
		</div>
		<div class="comment_text"><p>I think David's got the best approach here:  when we start dealing in OO systems, it's important to think of the data that moves between method calls not as "parameters" but as a "message" - in this case, it looks like a User object is the message.</p><p>It's a few extra keystrokes (wizards abound), but when you properly model, you get a strongly typed API that can handle changes to what a user is (what if a third property gets added?) without regards to implementation. A book called "The OO Thought Process" has a good passage that says something like "once you go beyond a single simple parameter, see if the parameters represent a type of object:  if so, model that object and pass it."</p></div>
	</div>
</div>
		