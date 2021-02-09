
<div class="comment" id="c_1713614594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614594">1</a> by Hilary Bridel
		posted on 6/1/2003 at 3:56 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>I am getting the following error on the example 1:</p><p>Cannot set variable with name . The variable name is illegal. Variable name must start a letter and can include only letters, numbers and underscores.</p><p>The Error Occurred in C:\CFusionMX\wwwroot\formProcess\plp.cfm: line 15</p><p>13 : &lt;cfparam name="attributes.r_bComplete" default="" type="variableName"&gt;<br>14 : <br>15 : &lt;cfif len(attributes.r_bComplete)&gt;<br>16 : 	&lt;cfset setVariable("caller.#attributes.r_bComplete#",false)&gt;<br>17 : &lt;/cfif&gt;</p><p>Example 2 works ok.<br>Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614593">2</a> by Hilary Bridel
		posted on 6/1/2003 at 4:11 PM
		</div>
		<div class="comment_text"><p>The r_bComplete="done" seems to be missing as an attribute of the cfModule tag in test.cfm of the first example..</p><p>If I include r_bComplete="done", it works.</p><p>Hilary</p><p>--</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713614590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713614590">3</a> by Raymond Camden
		posted on 6/1/2003 at 9:38 PM
		</div>
		<div class="comment_text"><p>For your first comment, r_bComplete is optional - the first test doesn''t use it. As for your second example, I think I may have set it up so that if you DON''T pass it, you get the error. I''ll take a look a bit later tonight. The correct behavour is that it should be optional.</p></div>
	</div>
</div>
		