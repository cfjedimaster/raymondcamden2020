
<div class="comment" id="c_1713682469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682469">1</a> by Gus
		posted on 6/27/2008 at 4:43 PM
		</div>
		<div class="comment_text"><p>Is the "y" variable also put into the var scope automatically?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682451">2</a> by Raymond Camden
		posted on 6/27/2008 at 4:44 PM
		</div>
		<div class="comment_text"><p>No - y is an argument.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682462">3</a> by Gus
		posted on 6/27/2008 at 5:05 PM
		</div>
		<div class="comment_text"><p>@Ray<br>DUH! &lt;cfgroggy who='gus'/&gt;  I haven't finished my first cup of coffee yet!</p><p>y is a variable in the argument scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682467">4</a> by Sean Corfield
		posted on 6/27/2008 at 10:57 PM
		</div>
		<div class="comment_text"><p>I didn't realize this wasn't already in Railo? They have a lot of language configuration stuff in the admin like this which all helps performance. They have a scope cascade setting to make variable lookup faster, settings for Application.cfc to make lookup of that faster on every request and so on.</p><p>Good to know about the array / struct shorthand.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682459">5</a> by Raymond Camden
		posted on 6/27/2008 at 10:59 PM
		</div>
		<div class="comment_text"><p>Yeah, the stuff in the admin is -very- interesting. I should maybe do a blog entry on these options.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682470">6</a> by Pat Santora
		posted on 6/27/2008 at 11:02 PM
		</div>
		<div class="comment_text"><p>What if x is setup as variable.x within the component and the developer forgets to place variable. before x when it is used within a method.</p><p>Because, correct me if i'm wrong, but if variable.x is set on the component level then x (without variables.) will refer to the variable scoped x?</p><p>Is the engine smart enough to know that x is set on the variable scope level so setting x to a var scope can be bypassed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682472">7</a> by Raymond Camden
		posted on 6/27/2008 at 11:41 PM
		</div>
		<div class="comment_text"><p>I just tested this (and btw, you should test this too, it is SUPER trivial to download, unzip, and run railo. No install is required). I added</p><p>cfset varibles.x = "orig"</p><p>on top of my script. When I ran the CFM, it correctly considered my X a local var scope variable automatically. So X worked fine in the UDF and did not overwrite my variables.x. So basically with this function on, if you do 'x' it will ALWAYS assume its variable scope.</p><p>To me - that's a good thing. If you want to use the variables scope inside a udf or method, it makes sense to properly address it (ie, variables.x)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682454">8</a> by Pat Santora
		posted on 6/28/2008 at 12:45 AM
		</div>
		<div class="comment_text"><p>Right. That's what I thought.</p><p>So it sounds like there may need to be a cleanup strategy that developers may need to take if they happen to not have "variable." before variable scoped variables.</p><p>Good to know info. Thanks for testing this Ray and hope things are going well for you and Sean at the new place!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682458">9</a> by Raymond Camden
		posted on 6/28/2008 at 12:55 AM
		</div>
		<div class="comment_text"><p>Luckily this works fine with my own personal naming rules.</p><p>CFMs: Always use full scope for everything but variables scope. So X means variables. And I use url.x for, well, url.x</p><p>CFCs: Full scope for everything possible. You can't "scope" var scope stuff, so if I see "x" by itself, it means var scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682466">10</a> by Dale Fraser
		posted on 6/28/2008 at 4:08 AM
		</div>
		<div class="comment_text"><p>Hey,</p><p>Cool feature, would like to see that in Adobe version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682461">11</a> by Allen
		posted on 6/28/2008 at 7:15 AM
		</div>
		<div class="comment_text"><p>I've always been curious why ColdFusion doesn't assume that these variables are private / local unless otherwise specified.  Anyone know?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682457">12</a> by Raymond Camden
		posted on 6/28/2008 at 8:20 AM
		</div>
		<div class="comment_text"><p>It is following the same rules as JavaScript. Consider this block:</p><p>&lt;script&gt;<br>function foo() {<br>	x = 1;<br>	return x*2;<br>}</p><p>function goo() { alert(x); }</p><p>foo();<br>goo();<br>&lt;/script&gt;</p><p>This will alert 1 showing that x 'leaked' out. But if you var scope x, then goo will have an error because x is not defined.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682460">13</a> by Mary Jo Sminkey
		posted on 7/12/2008 at 5:18 AM
		</div>
		<div class="comment_text"><p>I'm not quite sure I follow the logic of making it match javascript, particularly when it detracts from the whole idea of RAD. The need to var scope everything just requires a lot more typing (and overlooking even one can cause real headaches and wasted time tracking down the problem). I really applaud the folks at Railo because they really seem to have a great feel for adding things to the language that really can save developers a lot of time. Since I have to code for both platforms though, I'll just have to hope these kinds of features make their way into ColdFusion eventually as well!</p></div>
	</div>
</div>
		