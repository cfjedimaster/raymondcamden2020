
<div class="comment" id="c_1713664041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664041">1</a> by todd sharp
		posted on 4/16/2007 at 12:51 AM
		</div>
		<div class="comment_text"><p>Why not just keep the conditional logic in your last example in the method itself Ray?</p><p>Aren't there also edge cases where createObject won't work - you've mentioned those before I swear (I think it was in one of the Friday puzzlers?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664054">2</a> by Raymond Camden
		posted on 4/16/2007 at 1:29 AM
		</div>
		<div class="comment_text"><p>Todd: I don't think that applies. I mean - I can see cases where such things can be either inside or out depending on business logic.</p><p>As to your second point - I'm not sure what you mean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664055">3</a> by Gary Funk
		posted on 4/16/2007 at 2:13 AM
		</div>
		<div class="comment_text"><p>I asked this question to get a better insight into CF and OOP, after reading Excellent article on running BlogCFC without CreateObject (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.blogcfc.com%2Findex.cfm%2F2007%2F3%2F20%2FExcellent-article-on-running-BlogCFC-without-CreateObject%29%3AlLU2jxWO3tCCVjPgt8VeWxS4Yos&amp;cuid=3321886" rel="nofollow noopener" title="http://www.blogcfc.com/index.cfm/2007/3/20/Excellent-article-on-running-BlogCFC-without-CreateObject)">http://www.blogcfc.com/inde...</a> over at <a href="http://disq.us/url?url=http%3A%2F%2Fblogcfc.com%3Ae9_lb-nHK9ZZsEmuoDuxB5yk0rQ&amp;cuid=3321886" rel="nofollow noopener" title="blogcfc.com">blogcfc.com</a>. Scott Pinkston modified blogCFC to run without using CreateObject.</p><p>So now I'm reading about createObject and I find the entry dated April 5, 2006, Ask a Jedi: cfinvoke versus createObject (<a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Findex.cfm%2F2006%2F4%2F5%2FAsk-a-Jedi-cfinvoke-versus-createObject%29%3A6PoJs4kQu8Y3H84BvELEH_S0jDY&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/index.cfm/2006/4/5/Ask-a-Jedi-cfinvoke-versus-createObject)">http://ray.camdenfamily.com...</a> and the fifth comment mentions that someone changed BlogCFC so it could work on a host that does not allow createObject().</p><p>And of course even more information on cfinvoke vs createObject. And now to my point. I always read Ray's and Sean's blog on a daily basis because at any given point they have the answers to most of the asked questions. Together, these two blogs have such a wealth of information from themselves and the hundreds of other programmers that leave comments.</p><p>To Ray and Sean and the entire CF community, I say Thank You. The time you spend on your respective blogs is well spent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664056">4</a> by todd sharp
		posted on 4/16/2007 at 2:14 AM
		</div>
		<div class="comment_text"><p>Nevermind - I think I was confused :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664067">5</a> by Raymond Camden
		posted on 4/16/2007 at 4:55 AM
		</div>
		<div class="comment_text"><p>Gary, I'm not so sure your question has anything at all to do with OO principals. It is more syntax.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664066">6</a> by Gary Funk
		posted on 4/16/2007 at 5:59 AM
		</div>
		<div class="comment_text"><p>Ahhhhhh...  he says as another l.e.d. goes on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664062">7</a> by Sam Clement
		posted on 4/16/2007 at 7:33 AM
		</div>
		<div class="comment_text"><p>Isn't it also possible to call dynamic methods with CFINVOKE?  I don't think you can do that with createObject.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664064">8</a> by Tom K
		posted on 4/16/2007 at 12:45 PM
		</div>
		<div class="comment_text"><p>But from what you're saying, neither is intrinsically "faster" than the other?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664063">9</a> by Raymond Camden
		posted on 4/16/2007 at 2:15 PM
		</div>
		<div class="comment_text"><p>Tom: Right. As far as I know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664065">10</a> by Raymond Camden
		posted on 4/16/2007 at 2:21 PM
		</div>
		<div class="comment_text"><p>Sam -yes - you can d dynamic methods with cfinvoke. You can't do that with <a href="http://disq.us/url?url=http%3A%2F%2Fob.foo%3A-Df-nVJSoS_-bLRxkea4A2W9xq8&amp;cuid=3321886" rel="nofollow noopener" title="ob.foo">ob.foo</a>() syntax unless you use evaluate.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664070">11</a> by Adam Cameron
		posted on 4/16/2007 at 5:11 PM
		</div>
		<div class="comment_text"><p>&lt;!--- c.cfc ---&gt;<br>&lt;cfcomponent&gt;<br>	&lt;cffunction name="f"&gt;<br>		&lt;cfreturn "first one"&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;cffunction name="g"&gt;<br>		&lt;cfreturn "second one"&gt;<br>	&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p><p>&lt;!--- caller.cfm ---&gt;<br>&lt;cfset o = createObject("component", "c")&gt;</p><p>&lt;cfset dynamicMethod = o["f"]&gt;<br>&lt;cfoutput&gt;#dynamicMethod()#&lt;br /&gt;&lt;/cfoutput&gt;</p><p>&lt;cfset dynamicMethod = o["g"]&gt;<br>&lt;cfoutput&gt;#dynamicMethod()#&lt;br /&gt;&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664069">12</a> by Raymond Camden
		posted on 4/16/2007 at 5:45 PM
		</div>
		<div class="comment_text"><p>Ah, good example Adam!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664074">13</a> by Rahul
		posted on 4/16/2007 at 8:15 PM
		</div>
		<div class="comment_text"><p>I would basically use createObject() in case I need to work on an object more than once.</p><p>eg</p><p>&lt;cfscript&gt;</p><p> user = createObject("component","cfc.user");<br> user.setFName("Rahul");<br> user.setLName("Narula");<br> user.age("31");</p><p>&lt;/cfscript&gt;</p><p>Quickly we can see that all operations are done on single object. <br>Also the object ref is easier using this approach.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664072">14</a> by Tony G.
		posted on 4/16/2007 at 8:27 PM
		</div>
		<div class="comment_text"><p>Sorry -- I don't get Adam's example (kinda dense here)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664073">15</a> by Raymond Camden
		posted on 4/16/2007 at 10:11 PM
		</div>
		<div class="comment_text"><p>Tony, functions can act like variables. They are really just a type of data. So what he did was create a pointer to one using bracket notation. Then you can invoke the method via the pointer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664071">16</a> by Tony G.
		posted on 4/17/2007 at 4:10 AM
		</div>
		<div class="comment_text"><p>Thanks, Ray. I got it now. Cool trick!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664068">17</a> by Sam Clement
		posted on 4/17/2007 at 6:19 AM
		</div>
		<div class="comment_text"><p>Nice one, Adam.  I didn't know you could do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664075">18</a> by Chono Sora
		posted on 4/17/2007 at 11:32 PM
		</div>
		<div class="comment_text"><p>With CreateObject, arguments can still be passed based on some logic. For example:</p><p>&lt;cfscript&gt;  <br>  args = StructNew();  <br>  if (hasField1) args.field1 = "some text";  <br>  if (hasField2) args.field2 = "true";  <br>  myObj = CreateObject("component","cfcs.util").init(argumentCollection=args);<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664084">19</a> by Andy Matthews
		posted on 4/18/2007 at 6:55 AM
		</div>
		<div class="comment_text"><p>Rahul...</p><p>You can still save objects for referencing later using cfinvoke:<br>&lt;cfinvoke component="basecamp" method="init" returnvariable="APPLICATION.cfc.basecamp"&gt;<br>	&lt;cfinvokeargument name="basecampdomain" value="<a href="http://disq.us/url?url=http%3A%2F%2Fgaylordhotels.projectpath.com%3AEAqTi_e_wxcUnquhpQRqH7ck0Y8&amp;cuid=3321886" rel="nofollow noopener" title="http://gaylordhotels.projectpath.com">http://gaylordhotels.projec...</a>"&gt;<br>	&lt;cfinvokeargument name="username" value="ioweray&gt;<br>	&lt;cfinvokeargument name="password" value="awishlistitem&gt;<br>&lt;/cfinvoke&gt;</p><p>then:<br>&lt;cfscript&gt;<br>myvar = APPLICATION.cfc.basecamp.someMethod();<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664076">20</a> by Ahmed El-Rasheedy
		posted on 6/29/2007 at 7:21 PM
		</div>
		<div class="comment_text"><p>I think the issue here is that some developers do not create an init() method for the CFC. This would lead them to use the methods in the CFC as a UDF basically, mostly using the &lt;cfinvoke ..&gt;. This is not saying that you cannot do that using the createObject("","").methodName() but it is less likely.<br>Creating the object and keeping it to reuse it for different methods in different sections of the application (if scoped) would definitely save the instantiation and initlalization time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664077">21</a> by Mike Causer
		posted on 9/14/2011 at 8:28 AM
		</div>
		<div class="comment_text"><p>In cf9 cfscript we can go:<br>var mycfc = new "dynamic.path.to.cfc"()</p><p>It sucks that we cant:<br>mycfc."dynamicMethodName"()<br>or even:<br>mycfc[dynamicMethodNameVariable]()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664078">22</a> by Raymond Camden
		posted on 9/14/2011 at 2:55 PM
		</div>
		<div class="comment_text"><p>You can do so now with evaluate().<br>As to what you demonstrated as an alternative....</p><p>Wait.</p><p>:)</p></div>
	</div>
</div>
		