
<div class="comment" id="c_1713676823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676823">1</a> by James Allen
		posted on 2/1/2008 at 6:02 PM
		</div>
		<div class="comment_text"><p>I'm currently doing something like this on the project I'm working on.</p><p>I basically do it like this:</p><p>Ajaxproxy CFC (in webroot) -&gt; RemoteFacade.cfc (maintained by Coldspring) -&gt; Service layer.</p><p>The frontend Ajaxproxy is a very simple CFC that takes params and then calls a method in the RemoteFacade.</p><p>The RemoteFacade takes these params and then makes calls to the service layer and returns anything that needs returning.</p><p>I have found this quite useful as the intermediate layer (RemoteFacade) can filter params so you aren't just sending the entire memento back to the client.</p><p>E.G I have a userLogin() method in Ajaxproxy and RemoteFacade. The Ajaxproxy method just passes over username and password, but then the RemoteFacade calls the login function in the UserService to retrieve a fully populated user bean which is automatically persisted in Session.</p><p>What I do now - in RemoteFacade - is to create a simple struct and only set the data I need. E.G:</p><p>&lt;cfset returnData.isLoggedIn = user.isLoggedIn()&gt;<br>&lt;cfset returnData.error = user.getError()&gt;<br>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2FreturnData.name%3ApLOxRRxuC1J6K4OUzeF8sZVZr0g&amp;cuid=3321886" rel="nofollow noopener" title="returnData.name">returnData.name</a> = user.getName()&gt;</p><p>I like this as it's filtering the data that is sent back as many of the fields in the user bean are not needed by the client.</p><p>Using a remote facade is nice as I can inject all of the dependencies using Coldspring which leaves the frontend Ajaxproxy.cfc nice and lightweight.</p><p>This should make refactoring much easier down the line..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676834">2</a> by Mark Mazelin
		posted on 2/1/2008 at 8:33 PM
		</div>
		<div class="comment_text"><p>Ray:</p><p>Thanks for blogging about this! I think your first solution (and the ideas James submitted) would work, but I still am a bit frustrated by it.</p><p>After thinking through this a bit more, I thought of an analogy of what I want to do. I like how Flex and ColdFusion can pass CFC objects "back-and-forth" where the CFC object maps to an AS class. It would be oh-so-cool to have a CF tag (and/or wizard) that creates a JS class from a CFC that would enable you to do this with JS/CF. In fact it would be cool to be able to instantiate the JS object and chain the requests a la reactor and jquery: myJSObj = new JSObj then myJSObj.init().setid(1).load().getSomeAttr(). This would give you access to more than just the attributes of a bean, but also to other functions that bean may have.</p><p>But alas, since that functionality doesn't exist (should it?), I'll look into either returning a structure with the data I need or creating some type of intermediate ajax service layer.</p></div>
	</div>
</div>
		