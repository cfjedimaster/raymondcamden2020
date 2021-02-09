
<div class="comment" id="c_1713685281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685281">1</a> by Dean
		posted on 8/23/2008 at 1:02 AM
		</div>
		<div class="comment_text"><p>Ray, this was exactly what I was looking for! I really appreciate you taking the time to figure this out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685282">2</a> by Nathan Mische
		posted on 8/23/2008 at 2:48 AM
		</div>
		<div class="comment_text"><p>Nice post. A couple of quick comments. First, using the Model-Glue event approach you can use ColdFire to debug your AJAX calls. Second, in the ColdSpring approach you don't need to call getBean() to generate your remote proxy. Instead you can have ColdSpring generate it by using the constructNonLazyBeans argument of the loadBeansFromXML method. Brian Kotek had a good post on this here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.briankotek.com%2Fblog%2Findex.cfm%2F2008%2F5%2F19%2FMore-on-ColdSpring-and-Remote-Facades%3A0ndIv-MjdW6N-Sd2i1T1Oqgkda4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.briankotek.com/blog/index.cfm/2008/5/19/More-on-ColdSpring-and-Remote-Facades">http://www.briankotek.com/b...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685284">3</a> by todd sharp
		posted on 8/23/2008 at 5:07 AM
		</div>
		<div class="comment_text"><p>Ray - one of the best posts I've seen in a long time!  Very thorough and helpful.  I'd like to see a bit more, perhaps a part 2 if you get to playing with this more.  Specifically I'd like to see how a DAO could be used remotely.</p><p>Would you mind zipping up the sample app and adding it to this post?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685291">4</a> by Daniel Kim
		posted on 8/23/2008 at 10:31 AM
		</div>
		<div class="comment_text"><p>Awesome post. I wish I could have referenced this when I tried to get ColdSpring remoting up and running. You basically described each of the errors I ran into - I had to piece together a solution from a variety of other posts and discussion lists.</p><p>The last issue I ran into was the case sensitivity of the ColdFusion application name. It worked fine when doing HTTP requests, but when doing RemoteObject AMF calls from Flex, it couldn't find the beanFactory variable in the Application scope. At some point, after copying and pasting, I saw that the difference was in the casing of the application name in the two Application.cfcs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685287">5</a> by richard
		posted on 8/26/2008 at 1:44 PM
		</div>
		<div class="comment_text"><p>Great, comprehensive and instructive post Ray. NB a little off topic, but i spotted the appetizing snippet</p><p>"By the way, Model-Glue 3 makes this even easier. You just add beans="..." to your component tag."</p><p>I've been looking to try MG3 and have been a bit frustrated by the lack of any details about the new features - not documentation as such but maybe some kind of list of the new XML vocabulary to give a head start on the samples provided. Is there such a thing around? Doesn't need to be comprehensive</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685295">6</a> by Raymond Camden
		posted on 8/26/2008 at 3:14 PM
		</div>
		<div class="comment_text"><p>@richard: Joe gave a demo of Model-Glue 3 at cfobjective this year. I reviewed it here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2008%2F5%2F2%2FModelGlue-3--The-New-Frakin-Awesomeness%3Ad8mazlL6ciP2kvFFbBynAd7GBRU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2008/5/2/ModelGlue-3--The-New-Frakin-Awesomeness">http://www.coldfusionjedi.c...</a></p><p>As it is still in development, no real docs exist yet. It makes sense for Joe to wait until things are locked down a bit more before getting the docs written.</p><p>Essentially - if I do beans="a,b" in my controller cfcomponent tag, Model-Glue will autowirte A and B into my controller. So variables.a would equal whatever A is in ColdSpring.xml.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685283">7</a> by richard
		posted on 8/26/2008 at 11:23 PM
		</div>
		<div class="comment_text"><p>@ray - thanks. Sorry I hope I didn't sound mealy-mouthed (gimme,gimme,gimme) and I really appreciate all the effort going in here. Just trying to make a decision about platforms for new projects which will gestate over the next few months. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685288">8</a> by Henry Ho
		posted on 8/28/2008 at 1:13 AM
		</div>
		<div class="comment_text"><p>"Basically, I just need to initialize and setup ColdSpring myself (not a big deal!) and then tell Model-Glue to use the same application variable."</p><p>It wasn't a big deal until later I found out that I need to do ?init=true almost every time I change my controller or model.  I wonder if there's a way to work around that...</p><p>One thing I want to added, I wish ColdSpring remote proxy bean can support the CF8 specific features in CFFUNCTION like <br>"returnformat, secureJSON, and verifyClient attributes"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685289">9</a> by Raymond Camden
		posted on 8/28/2008 at 1:16 AM
		</div>
		<div class="comment_text"><p>@Ho: You can turn off caching in MG. Doing though slows things down though.</p><p>As for returnFormat. DId you try it? The ability to pass returnFOrmat=JSON to a CFC is a CF thing, not a ColdSpring thing. It happens behind the scenes. So if your ColdSpring proxy returned an array and you used returnFormat=json, you should get a proper result. Now verifyCLient,secureJSON can't be passed in, but I think people will make much more use of returnFormat.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685292">10</a> by Henry Ho
		posted on 8/28/2008 at 2:03 AM
		</div>
		<div class="comment_text"><p>@Raymond Camden:</p><p>turn off MG cache where?  I already set reload=true, but objects that are managed by the parent Coldspring bean factory are still cached.  Somehow I need to add code to capture the ?init in URL scope, and then reinitialize the beanfactore in onRequestStart() myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685296">11</a> by Raymond Camden
		posted on 8/28/2008 at 2:04 AM
		</div>
		<div class="comment_text"><p>Oh duh - sorry. Well, if you add a simple hook to the App.cfm file (isdefined("url.init") you could manage this easily enough, right? Seems like you could use the same vals as MG for the reinit via query string operation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685299">12</a> by Henry Ho
		posted on 8/28/2008 at 3:08 AM
		</div>
		<div class="comment_text"><p>@Ray:</p><p>The MG doc for reload property says:<br>"When TRUE, the application will re-read the ModelGlue.xml, ColdSpring.xml and Reactor.xml  files on each request, reloading the framework and using any changes made to these files."</p><p>However, by just setting reload to true in MG's coldspring.xml will not re-read the xml that  ModelGlue_PARENT_BEAN_FACTORY instance uses.  So additional code is needed in application.cfc/cfm to reinitialize the ModelGlue_PARENT_BEAN_FACTORY.</p><p>Solution 1: reinitialize ModelGlue_PARENT_BEAN_FACTORY only when URL.init is defined at application.cfc's onRequestStarT().  However, this is not ideal since the devloper would need to call ?init to the URL everytime the model or controller cfc is updated.</p><p>Solution 2: reinitalize ModelGlue_PARENT_BEAN_FACTORY depending on the reload property in MG's coldspring.xml.  But how?  use cffile and parse the mg configuration xml to get the reload value, and then reinialize ModelGlue_PARENT_BEAN_FACTORY based on the reload value?  No one would want this much extra IO overhead for every request.</p><p>Solution 3: reinitalize ModelGlue_PARENT_BEAN_FACTORY in onRequestStart() depending on a boolean var in application scope, and use URL scope to set that boolean var true or false.</p><p>What solution do you use when you need your ModelGlue_PARENT_BEAN_FACTORY reinitialized?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685294">13</a> by Raymond Camden
		posted on 8/28/2008 at 4:54 AM
		</div>
		<div class="comment_text"><p>I do not agree that solution 1 is unideal (is that a word?) Right now most people put MG in 'dont reload mode' early on since MG can slow down after a bit of development. So I think most devs are used to doing ?init=true during development. In fact, I'll use a tab in Firefox _just_ for that. So I'll have one tab where I'm working, and the second tab I can just hit reload on.</p><p>So that being said - I'd simply use the same QS for CS that I'd use for MG, and you can handle both with one simple reload.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685297">14</a> by Chris H
		posted on 9/25/2008 at 8:05 PM
		</div>
		<div class="comment_text"><p>Hey Ray, quick question:<br>the generated CFC returns the data as WDDX, which sucks for a regular Ajax call receiving the data. what's the best to handle this (either by CF or JavaScript)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685298">15</a> by Raymond Camden
		posted on 9/25/2008 at 8:11 PM
		</div>
		<div class="comment_text"><p>Chris - by default, CFCs format their result in WDDX. Unless...</p><p>1) If you use returnType=xml, CF will NOT wddx-encode the result.</p><p>2) If you use returnFormat (you can pass this in the URL), you can specify plain (dont do squat), wddx (old style default), json (serialize to json).</p><p>So normally your ajax app would do: somecfc?method=getfoo&amp;returnformat=json</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685300">16</a> by Chris H
		posted on 9/25/2008 at 8:18 PM
		</div>
		<div class="comment_text"><p>ah yes, forgot you could specify the returnformat in the parameters! thanks a lot!</p></div>
	</div>
</div>
		