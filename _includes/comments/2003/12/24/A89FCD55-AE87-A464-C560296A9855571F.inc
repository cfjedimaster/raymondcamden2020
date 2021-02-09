
<div class="comment" id="c_1713615297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615297">1</a> by Mike Kollen
		posted on 12/30/2003 at 1:57 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Being the ColdFusion Jedi Master, can you provide any hints as why?  I have been doing the same thing lately. I am learning C# because I have a Flash Remoting project that requires it.  Secondly, I am comparing Java to C#.</p><p>Regards,</p><p>Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615295">2</a> by wang
		posted on 12/30/2003 at 7:29 PM
		</div>
		<div class="comment_text"><p>www</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615293">3</a> by Raymond Camden
		posted on 12/31/2003 at 5:38 PM
		</div>
		<div class="comment_text"><p>I just like C#, at least what I see so far. I don't know if it is better than Java, but I'm feeling a better "groove" with it if that makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615288">4</a> by Mike Kollen
		posted on 12/31/2003 at 5:55 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Sure, that makes sense.  What have you discovered about using C# using ColdFusion?  How can interact the best? Web Services is certainly on the list.  Can you write CFX tags with C#?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615291">5</a> by Raymond Camden
		posted on 12/31/2003 at 5:59 PM
		</div>
		<div class="comment_text"><p>I haven't even gotten close to the point where I can write a WS in C#. As for CFX tags, I believe Montarra Software (spelling may be off) sells something called BlackKnight which lets you use C# CFX tags in CF. (Please note I'm only unsure of the spelling, product name, I KNOW they did release such a product.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615289">6</a> by AJ
		posted on 1/3/2004 at 6:36 AM
		</div>
		<div class="comment_text"><p>FWIW, writing a webservice in C# is relatively simple if you know how to write a class:<br>&lt;code&gt;<br>&amp;lt;%@ WebService Language="C#" class="TestService" %&amp;gt;<br>using System;<br>using System.Web;<br>using System.Web.Services;<br>[WebService(Namespace="urn:myserver/soap:MyService")]<br>public class TestService : WebService{<br>	[WebMethod]<br>	public string HelloWorld(string yourName) {<br>		return "Hello " + yourName + "!";<br>	}<br>}</p><p>Also note that you could conceivably write a C# class and use it just like you would a COM object, although I haven't tried it.</p><p>hth,</p><p>AJ</p></div>
	</div>
</div>
		