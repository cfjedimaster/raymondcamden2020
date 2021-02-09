
<div class="comment" id="c_1713662436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662436">1</a> by Jeff Houser
		posted on 2/20/2007 at 9:57 AM
		</div>
		<div class="comment_text"><p>In the initial code snippets, it looks like 'player' creates an instance of 'planet'.  <br> In the 2nd to last code snippet, the cfargument types are all planet.</p><p> If I'm reading this correctly, it looks like when you call a Factory for "ship", it is using the get method to try to retrieve component instances that were never created.  Should the last code segment call "getComponent" instead of just 'get'?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662441">2</a> by Rob Gonda
		posted on 2/20/2007 at 10:20 AM
		</div>
		<div class="comment_text"><p>Jeff, the get call for ship works fine. See that it uses get methods which will recursively resolve their own dependencies.  The get function invokes the getComponent method, and then stores the instance of the object inside the variables.instances structure.</p><p>Ray, thanks for posting this and forcing me to write about my sessions. I just posted a small summary of what was covered at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.robgonda.com%2Fblog%2Findex.cfm%2F2007%2F2%2F19%2FIntro-to-Object-Factories-with-slides-and-code%3AFr2F47HD68h8UPATO-PcF4BlXSc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.robgonda.com/blog/index.cfm/2007/2/19/Intro-to-Object-Factories-with-slides-and-code">http://www.robgonda.com/blo...</a></p><p>Cheers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662449">3</a> by Jeff Houser
		posted on 2/20/2007 at 5:15 PM
		</div>
		<div class="comment_text"><p>Rob,</p><p> That was the piece I needed.  I didn't see that 'get' called 'getComponent'.  The code makes a lot more sense understanding that.</p><p> The questions now is, why store the new component as an instance variable in the factory instead of just passing it around as a parameter?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662446">4</a> by Rob Gonda
		posted on 2/20/2007 at 5:54 PM
		</div>
		<div class="comment_text"><p>Jeff,</p><p>The reason to store it inside the factory is because it needs to persist. You should get the same instance each time you get that object.<br>E.g.<br>--inside user controller--<br>cfset emailService = application.factory.get('emailService')</p><p>--inside logService controller--<br>cfset emailService = application.factory.get('emailService')</p><p>In essence, both emailService variables have to use the same instance of the object. The only way to achieve this to make the factory store the instance.</p><p>Another reason is lazy loading. You will note that the factory does not initialize any component until first load. However, if the userService needs the loggingService, but the loggingService gets initialized right away, and the userService only gets initialized a few minutes after, you will still need the same instance of the loggingService to be passed to the userService. Making the factory store these instances solves the problem.</p><p>HTH</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662450">5</a> by Jeff Houser
		posted on 2/20/2007 at 6:07 PM
		</div>
		<div class="comment_text"><p>It seems to me that there are cases where you would want a new object of the same type, not the same object.  Is that also correct in your version of the world?</p><p> In Ray's sample to date, I see no way to differentiate between "get new" and "get preexisting".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662444">6</a> by Raymond Camden
		posted on 2/20/2007 at 6:15 PM
		</div>
		<div class="comment_text"><p>@Jeff - first comment: It was a typo. I will fix it after I reply to the comments.</p><p>@Rob - thanks for replying while I was in dreamland. :)</p><p>@Jeff - yes - as Rob said, "get" is the core API to get a component now. Sorry I didn't make that clear.</p><p>Lastly - yes - this facgtory ALWAYS returns a singleton. Later today I'll blog a mod that lets you get new instances.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662448">7</a> by Craig Drabik
		posted on 2/20/2007 at 7:44 PM
		</div>
		<div class="comment_text"><p>One of the things I have trouble with getting through to some of my own staff is how to identify when you can use a singleton and when you can't.  You may want to cover that for your readers.</p><p>I generally use ColdSpring for all of this - I would only custom-code a factory when you're going to have some decision-making process in how your dependencies get resolved.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662453">8</a> by Raymond Camden
		posted on 2/20/2007 at 8:16 PM
		</div>
		<div class="comment_text"><p>Craig, I intentionally did NOT use ColdSpring. Not because I think it is bad - but because I am _just_ getting into this topic. You have to walk before you run... :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662452">9</a> by phill.nacelli
		posted on 2/20/2007 at 8:29 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>A while ago, I blogged about this same subject, the result was  a collaboration between Nic Tunney, Kelly Brown and myself.  We have created an ObjectFactory that works much like a lite version of ColdSpring.  You can register objects via an xml file, tell which objects are singletons, and pass other objects into the constructor method so your objects don't have to carry that burden.  You can check it out here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.phillnacelli.net%2Fblog%2Findex.cfm%2F2006%2F11%2F21%2FObjectFactory-Explained%3ADLLzGIaT2huKNfPrkN_MV_nD-K8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.phillnacelli.net/blog/index.cfm/2006/11/21/ObjectFactory-Explained">http://www.phillnacelli.net...</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.nictunney.com%2Findex.cfm%3Fmode%3Dentry%26entry%3D6DACBE6F-65B8-F252-76EC106E89049009%3Ar8zSFVoKtqjbotF_d4nCmGW8BT8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.nictunney.com/index.cfm?mode=entry&amp;entry=6DACBE6F-65B8-F252-76EC106E89049009">http://www.nictunney.com/in...</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.kellyjo.com%2Fblog%2Findex.cfm%2F2006%2F12%2F11%2FDueling-Object-Factories%3AElIzD58SGBMiTJ_MdK9Bxp71_sE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.kellyjo.com/blog/index.cfm/2006/12/11/Dueling-Object-Factories">http://www.kellyjo.com/blog...</a></p><p>All the best, have a great Mardi Gras!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662454">10</a> by Raymond Camden
		posted on 2/20/2007 at 8:35 PM
		</div>
		<div class="comment_text"><p>Phill, I didn't know. I'll definitely check it out. That is a -very- smart list of people. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662439">11</a> by DK
		posted on 2/21/2007 at 1:29 AM
		</div>
		<div class="comment_text"><p>Being fairly new to using factories and the like in CF can someone maybe briefly discus the performance impact using the different factory approaches (coldspring vs dependency etc) vs   just initializing the objects in your onappstart. Given the size of an application I always have a hard time wrapping my head around adding complexity sometimes (similar to the joelonsoftware factory factory to make factory which will magically deliver your hammer analogy). Thanks much.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662437">12</a> by Raymond Camden
		posted on 2/21/2007 at 3:55 AM
		</div>
		<div class="comment_text"><p>I think the point here is to reduce complexity. If you look at the first blog entry where I showed all the createObjects - to me that was more complex then simple foo = factory.get("name") calls.</p></div>
	</div>
</div>
		