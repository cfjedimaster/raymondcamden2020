
<div class="comment" id="c_1713616512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616512">1</a> by Ryan Guill
		posted on 11/9/2004 at 6:06 AM
		</div>
		<div class="comment_text"><p>I know that trick works with other scopes too... come to think of it, is there any scopes that arent treated as structures?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616513">2</a> by Raymond Camden
		posted on 11/9/2004 at 6:16 AM
		</div>
		<div class="comment_text"><p>Yep, I didn't mention them since the Client scope is the only one with a special function to remove a value.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616520">3</a> by Simon Horwith
		posted on 11/9/2004 at 3:55 PM
		</div>
		<div class="comment_text"><p>Last time I checked, if you structdelete() from the client scope the variable is deleted and doesn't exist for the remainder of that request, but it will be recreated for that user on their next request, as you have not removed it from wherever client vars are being persisted.  Using deleteclientvariable() will remove the variable from the structure AND from wherever you're persisting client variables.  Generally this is what you want, NOT the removal for the duration of a request (though it's possible that this is what you're trying to achieve).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616510">4</a> by Raymond Camden
		posted on 11/9/2004 at 5:06 PM
		</div>
		<div class="comment_text"><p>Nope, I tested that before I posted. structDelete really removes the variable. In CFMX 6.1 and the other version I'm not allowed to talk about.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616514">5</a> by Simon Horwith
		posted on 11/9/2004 at 5:58 PM
		</div>
		<div class="comment_text"><p>That doesn't surprise me.  Many of the "structures" in CF are actually Java Objects under the hood and do have data and functionality under the hood that isn't exposed, in addition to the public data that is.  Removing a key from the client scope could certainly be running other code (the equivalent of a "deleteclientvariable()" call) whenever you remove data from it.  I haven't checked recent documentation, but assuming that you're correct, "deleteclientvariable()" should be marked "deprecated" in the documentation if it isn't already.  I'm all for offering a common, consistent behaviour between all of the scopes of memory in CFML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616515">6</a> by tony petruzzi
		posted on 11/12/2004 at 9:11 PM
		</div>
		<div class="comment_text"><p>I have a better way, just use the DeleteClientVariable() function and forget about trying to come up with your own way.</p><p>Simon and Raymond just made the point, you don't know what the little hack way of yours is going to do between different version of CF. Might work in 6.1, might not in Blackstone. The question is, are you willing to rewrite your application when it does break?</p><p>The functions and tags that Macromedia puts into CF are there for a reason, to help you to easily upgrade from one version to the next without your entire application blowing up in your face. Are there different ways of doing things in CF other than what Macromedia provides, yes there are. Should you be using those different methods and take the chance of your application breaking, no you shouldn't.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616516">7</a> by Raymond Camden
		posted on 11/12/2004 at 9:16 PM
		</div>
		<div class="comment_text"><p>Normally I would agree with you, Tony, but in this case, MACR _specifically_ noted in CFMX that all of these scopes are now structs. Therefore, using structDelete -is- an "official" way to manipulate the client structure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616519">8</a> by Simon Horwith
		posted on 11/12/2004 at 9:33 PM
		</div>
		<div class="comment_text"><p>to play Devil's advocate, "normally, Ray, I would agree with you"... however - there are many scopes that still don't behave the way other scopes do.  URL scope in a SOAP call, the cfcatch scope (a pure java object?), etc.  Until because the client scope is unique in that there's a persistance mechanism behind it, until Macromedia "officially" deprecates the deleteclientvariable() funtion, I'd still use it.  If you want to leave room for easy migration when they do deprecate it, you could do a mass search and replace (using regex) at that time, or you could put the deleteclientvariable() call in a UDF, then change what the UDF does (switch it to a structDelete() on the client scope) at the appropriate time... though you'd still, at that point, want to get rid of the UDF altogether as quickly as you could.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616518">9</a> by tony petruzzi
		posted on 11/12/2004 at 10:49 PM
		</div>
		<div class="comment_text"><p>Point well taken Ray. But just because your car can go 100 mph, doesn't make it legal to do so.</p><p>Same applies to CF. Just because you CAN use structdelete() to remove client variables, doesn't mean that you should.</p><p>Both examples have their own consequences.</p></div>
	</div>
</div>
		