
<div class="comment" id="c_1713649964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649964">1</a> by Scott Stroz
		posted on 2/9/2006 at 3:43 AM
		</div>
		<div class="comment_text"><p>That is quite possibly the clearest, most consise definitions of these items/concepts I have read.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649977">2</a> by Steve Collins
		posted on 2/9/2006 at 3:56 AM
		</div>
		<div class="comment_text"><p>Watch that traffic come in, Ray.  This is hella useful!</p><p>I've pointed back to it from acid.</p><p>And yes, PDF with this and other cogent information - with enough work (I'm happy to help), we could come up with a really useful CFC guide.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649978">3</a> by Phillip Senn
		posted on 2/9/2006 at 4:42 AM
		</div>
		<div class="comment_text"><p>Don't forget Client, Cookies and Request.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.depressedpress.com%2FContent%2FDevelopment%2FColdFusion%2FGuides%2FVariables%3AeyjDmsT8bVtUE0EJRERSE6ioiyk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.depressedpress.com/Content/Development/ColdFusion/Guides/Variables">http://www.depressedpress.c...</a> has a good write-up on scoping.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649979">4</a> by Matthew Wyant
		posted on 2/9/2006 at 5:30 AM
		</div>
		<div class="comment_text"><p>Thanks for this Ray.</p><p>It confirms what I'd suspected, but it's nice to see it laid out in a single place.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649981">5</a> by Jeff Houser
		posted on 2/9/2006 at 6:29 AM
		</div>
		<div class="comment_text"><p>For those who want a Java parallel, you might add:</p><p>variables = protected<br>this = public</p><p> And Java Private doesn't exist in a CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649980">6</a> by rd
		posted on 2/9/2006 at 7:37 AM
		</div>
		<div class="comment_text"><p>Bow down to King Camden he's Rabid with variable scopes!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649969">7</a> by Raymond Camden
		posted on 2/9/2006 at 7:39 PM
		</div>
		<div class="comment_text"><p>P.Senn, added.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649974">8</a> by mikeD
		posted on 2/9/2006 at 7:41 PM
		</div>
		<div class="comment_text"><p>Great list Ray!  Quick follow up question: When/Why would you use a contructor function?  Or, what about accessor functions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649984">9</a> by Raymond Camden
		posted on 2/9/2006 at 7:45 PM
		</div>
		<div class="comment_text"><p>MikeD - I'll answer in a separate blog post later today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649982">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649982">10</a> by Michael White
		posted on 2/9/2006 at 8:21 PM
		</div>
		<div class="comment_text"><p>this is a great post... but now I am confused about using "This" scope. I use it all the time (inside a cfc) and I have a separate instance for each time certain methods are called so that each user can work on a separate instance of a "system" or a "worklog" or an "employee"  I pretty much picked up this method from the ColdfusionMX Bible. Create an instance, initialize it, use a form to make changes, then call the "Set" methods to save the form data to the instance, then call the commit method to save the instance to the database. Have I been doing it all wrong?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649983">11</a> by Jeff Houser
		posted on 2/9/2006 at 9:07 PM
		</div>
		<div class="comment_text"><p>Michael,</p><p> It sounds like you're implementing things, for the most part, the way I would.  The difference between "this" and "Variables" can be explained like this:</p><p>&lt;cfcomponent&gt;<br> &lt;cfscript&gt;<br>   this.MyVar1 = "test";<br>   variables.MyVar2 = "test 2";<br> &lt;/cfscript&gt;<br>&lt;/cfcomponent&gt;</p><p>now, in a page, you create the component instance:<br>&lt;cfscript&gt;<br> MyComponent = CreateObject('component','whatever');<br>&lt;/cfscript&gt;</p><p>This is perfectly valid, as variables in the 'this' scope are public:</p><p>&lt;cfoutput&gt;<br> #MyComponent.MyVar1#<br>&lt;/cfoutput&gt;</p><p>Your can set the value like this:<br>&lt;cfset MyComponent.MyVar1 = ""&gt;</p><p>which completely bypasses your set method.  In some cases, that could (potentially) cause problems in your compoment.</p><p>This, however, will cause errors:<br>&lt;cfoutput&gt;<br> #MyComponent.MyVar2#<br>&lt;/cfoutput&gt;</p><p> Because the "MyVar2" is not public, and cannot be accessed directly outside of the component.</p><p> Does that help explain?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649987">12</a> by Christopher Wigginton
		posted on 2/9/2006 at 9:17 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>How about a "My Quick Refs" pod and slap tables like this into it so that they stay easily accessible over time.</p><p>Wiggy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649986">13</a> by Raymond Camden
		posted on 2/9/2006 at 9:29 PM
		</div>
		<div class="comment_text"><p>Chris - that is freaky. That is exactly what I was going to do. I'm also going to write a cheat sheet for CF Regex, as I always forget things like how to do non-greedy regex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649985">14</a> by Michael White
		posted on 2/10/2006 at 3:39 AM
		</div>
		<div class="comment_text"><p>Jeff, are you saying that using the This scope is bad form because your component methods can be bypassed and you "should" be forcing everything to go through the component methods?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649988">15</a> by Michael White
		posted on 2/10/2006 at 3:41 AM
		</div>
		<div class="comment_text"><p>oops, second part Jeff:<br>or are you saying that you might inadvertantly clobber a variable you didn't mean to causing a "difficult-to-diagnose" problem?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649989">16</a> by Michael White
		posted on 2/10/2006 at 3:50 AM
		</div>
		<div class="comment_text"><p>so Ray, the order of privacy of variables in a cfc is:</p><p>Arguments: only available within the method<br>Var: only available within the method<br>Variables: available to all methods but only in the same cfc<br>This: available to all methods, cfc, and all other pages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649990">17</a> by Raymond Camden
		posted on 2/10/2006 at 3:58 AM
		</div>
		<div class="comment_text"><p>Yeah. By the way - I know fdolks may be a bit surprised by the comments layout. Yes - I am working on things and tweaking layout here and there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649991">18</a> by Jeff Houser
		posted on 2/10/2006 at 4:19 AM
		</div>
		<div class="comment_text"><p>I'm not saying that the "This" scope is bad form.  It really depends what you want to do.</p><p> I prefer to keep my instance variables in a CFC private (in the variables scope), and then provide an interface for API (AKA List of Methods) for accessing this the information.  This is what encapsulation is all about.</p><p> I don't think I explicitly said "you might inadvertently clobber a variable in the this scope and cause a difficult to diagnose problem" however I do believe that is the case.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649992">19</a> by Michael White
		posted on 2/10/2006 at 5:16 AM
		</div>
		<div class="comment_text"><p>Ray, re: cheatsheet for RegEx... Earlier in the day I printed out Pete Freitag's regex thingy:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.petefreitag.com%2Fitem%2F517.cfm%3Awq8FPeI3IawGrmLO2bmZPlkCQiU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.petefreitag.com/item/517.cfm">http://www.petefreitag.com/...</a></p><p>great article from Dec. 2003, but maybe nothing's changed since then.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649993">20</a> by Raymond Camden
		posted on 2/10/2006 at 7:04 AM
		</div>
		<div class="comment_text"><p>I was thinking something more simpler - basically ripping off livedocs's various tables of characters ($ == ...) into one page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649994">21</a> by jim moran
		posted on 2/10/2006 at 8:55 AM
		</div>
		<div class="comment_text"><p>Would it be possible to give an example of encapsulation, with a CFC - or a a walk through, just no code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649997">22</a> by Jeff Houser
		posted on 2/10/2006 at 6:08 PM
		</div>
		<div class="comment_text"><p>I'm not quite sure how to give an example of encapsulation without writing a book.  These two articles I wrote for CFDJ might help:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcoldfusion.sys-con.com%2Fread%2F47203.htm%3AtIZG91dIJKHbx5c1CP6Vwg7JMyc&amp;cuid=3321886" rel="nofollow noopener" title="http://coldfusion.sys-con.com/read/47203.htm">http://coldfusion.sys-con.c...</a> (The concepts behind CFCs)<br><a href="http://disq.us/url?url=http%3A%2F%2Fcoldfusion.sys-con.com%2Fread%2F47446.htm%3A1nHPC2B4sxC0kw_-pmPpUuFf3BM&amp;cuid=3321886" rel="nofollow noopener" title="http://coldfusion.sys-con.com/read/47446.htm">http://coldfusion.sys-con.c...</a> (A CFC example)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649996">23</a> by Mark van &amp;apost Zet
		posted on 2/23/2006 at 1:38 PM
		</div>
		<div class="comment_text"><p>One useful trick I've picked up somewhere for var-scoping variables:</p><p>&lt;CFSET VAR local = StructNew()&gt;</p><p>Everything prefixed with "local." is now var scoped. Very easy for iterator vars and queries one tends to overlook:</p><p>&lt;CFLOOP index="local.i" ..&gt;<br>&lt;CFQUERY name="local.q" ..&gt;</p><p>It just doesn't work with Query of Queries, the following throws an error:</p><p>&lt;CFQUERY name="local.q2" dbtype="query"&gt;<br>SELECT * FROM Local.q<br>&lt;/CFQUERY&gt;</p><p>Seemingly QoQ only works on hard defined scopes such as Caller, Variables, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649999">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649999">24</a> by Joel Johnston
		posted on 4/2/2007 at 8:28 AM
		</div>
		<div class="comment_text"><p>I'm hoping someone will actually see this as I'm having difficulty understanding the session scope from the cfc's perspective.</p><p>I have a site that has a cart.cfc with setters and getters for various functions.  The access of this cfc is set to package and I'm using a facade cfc to call cart.cfc's various methods.<br>Within this cfc I set a structure called session.cart.   All works well from coldfusion, I can add, remove, etc items from that structure.</p><p>Enter Remoting:  When I call the facade (or the cart.cfc's) methods from remoting, it errors saying that the session variable is undefined.</p><p>I was of the understanding that the facade cfc could call the "internal" cfc and scopes such as application and session would persist.   Is there anyone out there that has tackled this issue and can give me advice?</p><p>Extra Site Info:<br>Fusebox 4.1<br>CFMX7 on Linux with Apache-2.0.54<br>J2EE sessions enabled</p><p>Thanks in Advance!</p><p>Joel</p></div>
	</div>
</div>
		