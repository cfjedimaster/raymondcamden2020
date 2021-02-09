
<div class="comment" id="c_1713665617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665617">1</a> by Bruce
		posted on 5/23/2007 at 7:03 PM
		</div>
		<div class="comment_text"><p>First off thanks to Simeon for participating in the Newbie Contest.  It takes guts to put your code out where others can pick at it.</p><p>One improvement I'd recommend to the CFCs is to combine some of the CFCs into one.  For example, there are three CFCs (augra, yoda, and mork) that just have a greeting function.  Why not create a greetings.cfc with an instance variable of greetingsStruct?  Then you could have a set and get functions for this variable.  The set function would enable you to provide whatever values are appropriate for the  greeting.</p><p>If you need the greeting object throughout your application, then you can place the object in your application scope.</p><p>In many of the functions in the CFCs, you have used variables that are not part of the function's local scope or even the CFC's variable scope. For example in command.cfc:</p><p>&lt;cffunction name="dispCommands" access="public" returntype="struct"&gt;</p><p>	&lt;cfset var cmdStruct = structNew()&gt;<br>	&lt;cfset cmdStruct["pet"] = "Gives #session.creature# a petting"&gt;<br>	&lt;cfset cmdStruct["feed"] = "Gives #session.creature# some tastey morsels"&gt;<br>	&lt;cfset cmdStruct["walk"] = "Takes #session.creature# for a walk of variable length"&gt;<br>	&lt;cfset cmdStruct["shop"] = "Goes to the creature shop where more items can be bought to enrich your pets life"&gt;<br>	&lt;cfreturn cmdStruct&gt;<br>&lt;/cffunction&gt;</p><p>The above function refers to session.creature.  If your function needs to refer to a variable that is not part of the functions local scope (var) and not an instance variable of the CFC (variables scope) then you should pass that variable into the function by using cfargument.  You could rewrite the above function as follows:</p><p>&lt;cffunction name="dispCommands" access="public" returntype="struct"&gt;<br>&lt;cfargument name="creature" type="string" required="true" /&gt;<br>	&lt;cfset var cmdStruct = structNew()&gt;<br>	&lt;cfset cmdStruct["pet"] = "Gives #arguments.creature# a petting"&gt;<br>	cfset cmdStruct["feed"] = "Gives #arguments.creature# some tastey morsels"&gt;<br>	&lt;cfset cmdStruct["walk"] = "Takes #arguments.creature# for a walk of variable length"&gt;<br>	&lt;cfset cmdStruct["shop"] = "Goes to the creature shop where more items can be bought to enrich your pets life"&gt;<br>		&lt;cfreturn cmdStruct&gt;<br>	&lt;/cffunction&gt;</p><p>This avoids tying your CFC's function to the session scope and better encapsulates your CFCs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665613">2</a> by Justice
		posted on 5/23/2007 at 9:39 PM
		</div>
		<div class="comment_text"><p>I think to elaborate on Bruce a bit, passing many variables into a cfc is where the whole 'bean' idea comes in.  You have one object that represents your 'thing'.  That object has internal variables like happiness, etc.  You would then pass the entire bean into your CFC as one argument.  This would ensure that you have complete control over what goes in, as your init method on your object bean would setup defaults on any values you required.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665624">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665624">3</a> by Simeon
		posted on 5/25/2007 at 1:59 AM
		</div>
		<div class="comment_text"><p>Thanks Guys for the comments :D</p></div>
	</div>
</div>
		