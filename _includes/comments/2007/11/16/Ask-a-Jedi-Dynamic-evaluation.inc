
<div class="comment" id="c_1713674437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674437">1</a> by Mark Kruger
		posted on 11/17/2007 at 1:49 AM
		</div>
		<div class="comment_text"><p>Ray - I remember a few years ago whenever evaluate was mentioned on one of the email lists that it was always you whow would pipe up first and tell people not to use it. Now you are giving examples.... tsk tsk (ha).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674432">2</a> by Raymond Camden
		posted on 11/17/2007 at 1:55 AM
		</div>
		<div class="comment_text"><p>People change. ;) I still won't use it myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674443">3</a> by Rick O
		posted on 11/17/2007 at 2:39 AM
		</div>
		<div class="comment_text"><p>Silliest use of ColdFusion EVAR:</p><p>&lt;cffunction name="op" returntype="boolean"&gt;<br>	&lt;cfargument name="opName" type="any" required="true"&gt;<br>	&lt;cfargument name="arg1" type="any" required="true"&gt;<br>	&lt;cfargument name="arg2" type="any" required="true"&gt;<br>	&lt;cfswitch expression="#arguments.opName#"&gt;<br>		&lt;cfcase value="and"&gt;&lt;cfreturn arguments.arg1 and arguments.arg2&gt;&lt;/cfcase&gt;<br>		&lt;cfcase value="or"&gt;&lt;cfreturn arguments.arg1 or arguments.arg2&gt;&lt;/cfcase&gt;<br>		&lt;cfcase value="not"&gt;&lt;cfreturn not arguments.arg1&gt;&lt;/cfcase&gt;<br>		&lt;cfcase value="eq"&gt;&lt;cfreturn arguments.arg1 eq arguments.arg2&gt;&lt;/cfcase&gt;<br>		&lt;cfcase value="neq"&gt;&lt;cfreturn arguments.arg1 neq arguments.arg2&gt;&lt;/cfcase&gt;<br>		&lt;cfcase value="gt"&gt;&lt;cfreturn arguments.arg1 gt arguments.arg2&gt;&lt;/cfcase&gt;<br>		&lt;cfcase value="lt"&gt;&lt;cfreturn arguments.arg1 lt arguments.arg2&gt;&lt;/cfcase&gt;<br>		&lt;cfcase value="contains"&gt;&lt;cfreturn arguments.arg1 contains arguments.arg2&gt;&lt;/cfcase&gt;<br>	&lt;/cfswitch&gt;<br>	&lt;cfreturn false&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cfoutput&gt;#<br>op('or',<br>  op('eq','foo','bar'),<br>  op('contains','foobar','foo')<br>)<br>#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674431">4</a> by Rick O
		posted on 11/17/2007 at 2:42 AM
		</div>
		<div class="comment_text"><p>I initially thought you might be able to use a dynamic reference to an underlying Java method (.equals or .compareTo), but CF complains about trying to use a string as a struct.  You could probably finagle it, if you tried hard enough.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674451">5</a> by David McGuigan
		posted on 3/6/2009 at 5:09 AM
		</div>
		<div class="comment_text"><p>Ray, are there real, hard numbers anywhere that talk about the performance of evaluate on ColdFusion 8? I'm trying to make sure I make every worthwhile optimization for the new jCFC plugin and using evaluate really simplifies the readability as well as reduces the code necessary to do what I want to compared to some of the alternatives.</p><p>Also, is there a good place to go to get centralized info on ColdFusion performance and tuning outside of the Wack 3 and the release notes I found from Adobe from 2004 and a few random resources?</p><p>Ex: This page is 2007</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.brianflove.com%2Farticles%2F2007%2F04%2F23%2Fcoldfusion-performance-techniques%2F%3AkfNvv0S0YmcdMBZE2e6KGqVZdiw&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.brianflove.com/articles/2007/04/23/coldfusion-performance-techniques/">http://blog.brianflove.com/...</a></p><p>And advocates avoiding evaluate and iif like the plague. But with normal ?: syntax absent in 8 I love iif and need to know the truth. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674436">6</a> by Raymond Camden
		posted on 3/7/2009 at 2:42 AM
		</div>
		<div class="comment_text"><p>I'm not aware of any 'hard' numbers. I do remember hearing that evaluate was a heck of a lot faster in CF8.</p><p>I think to me it is more a matter of appropriateness. Many times I've seen people use evaluate() when they don't need to. So given the example of a dynamic form field, they may do:</p><p>&lt;cfset key = "name"&gt;<br>&lt;cfoutput&gt;#evaluate("form.#key#")#&lt;/cfoutput&gt;</p><p>Whereas this is just as valid, and in my mind, more appropriate:</p><p>&lt;cfset key = "name"&gt;<br>&lt;cfoutput&gt;#form[key]#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674441">7</a> by Raymond Camden
		posted on 3/7/2009 at 2:43 AM
		</div>
		<div class="comment_text"><p>I realized I just kind of duplicated what I said above. I'm old.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674435">8</a> by David McGuigan
		posted on 3/7/2009 at 2:54 AM
		</div>
		<div class="comment_text"><p>Hahah. No worries grampa.</p><p>The ColdFusion 8 performance brief says that evaluate in 8 is 2.9x faster than 7.0.2</p><p>But I still don't know how fast that is. Oh well.</p><p>I agree with you on usage. I love array access notation almost more than life itself.</p><p>There are some super dynamic situations where evalute (my opinion) is the best and most readable option, which is why I'm looking into this.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674429">9</a> by Jonathan
		posted on 9/10/2009 at 3:59 AM
		</div>
		<div class="comment_text"><p>Curious to get some feedback on any alternatives for this one: using evaluate a dynamic variable when you don't know the scope? I know the scope[variablename] formate, but what if it could be session or application?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674430">10</a> by Raymond Camden
		posted on 9/10/2009 at 6:23 AM
		</div>
		<div class="comment_text"><p>You can use structGet(). It lets you get a pointer to any scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674448">11</a> by Roe
		posted on 10/10/2009 at 8:57 PM
		</div>
		<div class="comment_text"><p>Ok so what about situations where you legitimately need something like evaluate, for example:</p><p>&lt;cfset myvar = 5 /&gt;<br>&lt;cfset equation = "(myvar*2.45)/5" /&gt;<br>&lt;cfset result = Evaluate(equation) /&gt;</p><p>I am doing something like this and right now I'm not happy with the performance I'm seeing from Evaluate can you think of any other way I can do this that might be faster, keeping in mind that this is super simplified and that the solution would need to support the equations being pulled from a database?</p><p>And no I can not put the computation in the database it needs to take place on the front end per environment restrictions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674446">12</a> by David McGuigan
		posted on 10/10/2009 at 11:11 PM
		</div>
		<div class="comment_text"><p>Just write a simple parser that grabs the equation from the database and parses through and executes it inline, letting you get the full performance of natural CF execution and avoid evaluate altogether.</p><p>Just iterate through the string and pop all parenthesis into an array of arrays, with each index in the array being a token, and an array for each sub parenthesis. Then iterate through them all applying the rules of evaluation.</p><p>Your example after being parsed would give you this:<br>[  [ "myvar", "*", 2.45 ], "/", 5 ]</p><p>You'll have to make multiple passes through each array to make sure you follow the rules of mathematical expression evaluation ( like processing all * and /s before + and - ), but it won't be much code and you can just swap in calculated values for the array indexes as you iterate.</p><p>If you end up coding this out, you should CFLib it fo sho.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674445">13</a> by Roe
		posted on 10/11/2009 at 1:49 AM
		</div>
		<div class="comment_text"><p>I may have to give that a try, though to be honest I feel like that approach may be pretty slow as well. Honestly I probably just have to change the way I'm doing this because in it's current form I think it's doomed to be sloooow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674450">14</a> by Steve
		posted on 10/29/2009 at 1:49 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I have a string for example:</p><p>&lt;cfset mystr = "<br>   &lt;cfquery name='qtest' datasource='ds'&gt;<br>     select name, lang from contacts<br>   &lt;/cfquery&gt;</p><p>   &lt;cfloop query='qtest'&gt;<br>      &lt;cfif qtest.lang eq 1&gt;<br>       &lt;p&gt;#<a href="http://disq.us/url?url=http%3A%2F%2Fqtest.name%3AQzS5c5_fTUoV6Cr1-bcqhsQoGx8&amp;cuid=3321886" rel="nofollow noopener" title="qtest.name">qtest.name</a>#&lt;/p&gt;<br>      &lt;/cfif&gt;<br>   &lt;/cfloop&gt;<br>"&gt;</p><p>I want to use this string next, for example:</p><p>&lt;html&gt;<br>&lt;h1&gt;Contact list&lt;/hi&gt;<br>#evaluate(de(mystr))#<br>&lt;/html&gt;</p><p>How i can do this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674438">15</a> by Raymond Camden
		posted on 10/29/2009 at 9:07 AM
		</div>
		<div class="comment_text"><p>You can't. You would need to save it to the file system and cfinclude it (or use the VFS in CF9).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674456">16</a> by Drew
		posted on 3/3/2010 at 11:15 PM
		</div>
		<div class="comment_text"><p>Is there a way to call methods stored in a structure?</p><p>For example,<br>request.lang() returns a string<br>request["lang()"] returns an error</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674458">17</a> by Raymond Camden
		posted on 3/3/2010 at 11:45 PM
		</div>
		<div class="comment_text"><p>Just evaluate it.</p><p>&lt;cfset meth = "lang"&gt;<br>&lt;cfoutput&gt;#evaluate("request.#meth#()")#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674459">18</a> by Renjith
		posted on 5/9/2014 at 4:25 PM
		</div>
		<div class="comment_text"><p>Hi Guys,</p><p>I have a table with values under a column named: str_condition</p><p>values in this column can be : variables.bit_male / application.bit_male / isdefined('session.int_user_id')</p><p>The value can be complex as it can be.</p><p>I need to use the value of the values in the column.</p><p>Currently, what I am doing is</p><p>&lt;cfif evaluate(query.str_condition)  eq true&gt;<br>.....code....<br>&lt;/cfif&gt;</p><p>Now, I need to omit the evaluate and find another alternative. Can you guys help ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674457">19</a> by Raymond Camden
		posted on 5/9/2014 at 4:28 PM
		</div>
		<div class="comment_text"><p>Not sure you can skip the evaluate. In theory you could save to a file and cfinclude it.</p></div>
	</div>
</div>
		