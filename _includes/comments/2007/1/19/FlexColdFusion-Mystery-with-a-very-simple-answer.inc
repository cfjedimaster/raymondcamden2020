
<div class="comment" id="c_1713661305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661305">1</a> by Tom Mollerus
		posted on 1/19/2007 at 9:01 PM
		</div>
		<div class="comment_text"><p>I still get a few empty errors (detail and message are each "null") on my CF7 production server, and I have no idea how to identify the real nature of the problem. Does anyone know of a way to intercept the error detail before it gets passed to the error template?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661307">2</a> by Ted Patrick
		posted on 1/19/2007 at 9:10 PM
		</div>
		<div class="comment_text"><p>Ray, Flex will do anything you ask it to. In this case AMF is being asked to serialize a component instance into AMF3 binary. The issue is that the component, has inner references to the app itself so if you pull something on the displayList or a member of the Application class, the whole thing goes with it.</p><p>It is like taking a chair out the front door and the rest of the house is dragged out the front door inside out. Careful with passing component instances through remoting. Flex will try do everything you ask.</p><p>Ted :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661297">3</a> by darron
		posted on 1/19/2007 at 11:11 PM
		</div>
		<div class="comment_text"><p>If you had strongly typed your core.addAdminUser to accept 2 parameters of type String, the compiler would've smacked you silly before you had a chance to get into trouble.  :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661302">4</a> by Mike Rankin
		posted on 1/19/2007 at 11:45 PM
		</div>
		<div class="comment_text"><p>Hey, I want to do the chair/house thingy. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661301">5</a> by Raymond Camden
		posted on 1/20/2007 at 1:29 AM
		</div>
		<div class="comment_text"><p>Darron, good point. Would you mind posting a simple example of this? I know how to type it on the server side.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661308">6</a> by darron
		posted on 1/20/2007 at 2:11 AM
		</div>
		<div class="comment_text"><p>Sure, but I need to see more of your code for context.  What type of object is "core"?  Is it just defined via the RemoteObject tag with id="core"?  Assuming that's the case, the general style would be to create a wrapper class that allows you to define an interface for communicating with the server, and then invoke your RemoteObject inside of that interface:</p><p>// In a separate delegate class<br>public function addAdminUser( username:String, password:String )<br>{<br>   core.addAdminUser( username, passwrod );<br>   // possibly add responder here depending on what the<br>   // rest of your code looks like<br>}</p><p>Then, all server communication goes through the delegate ensuring that the interface for client/server communication is the same on both ends.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661304">7</a> by Raymond Camden
		posted on 1/20/2007 at 8:13 AM
		</div>
		<div class="comment_text"><p>Darron, yeah, core was my RemoteObject (talking to a CFC). Thanks for the example!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661306">8</a> by Rob Gonda
		posted on 1/20/2007 at 9:37 AM
		</div>
		<div class="comment_text"><p>I strongly recommend strict typing arguments, as well as function return types. I'm actually surprised that you were able to compile AS3/Flash 9 code w/o them. Strict typing is part of what makes Flash9 movies run 20x faster than Flash8.</p><p>public function addAdminUser( username:String, password:String ):Void<br>{ ... }</p><p>You 'should' strict type every function's return type, except the class constructors, which unlike ColdFusion, cannot have a return type.</p></div>
	</div>
</div>
		