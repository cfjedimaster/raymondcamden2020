
<div class="comment" id="c_1713650721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650721">1</a> by Ryan Guill
		posted on 3/9/2006 at 3:19 AM
		</div>
		<div class="comment_text"><p>Ray, do you know why it is that we can't duplicate?  I know the tricks and ways around it (i definately use them!) but is there a technical reason why adobe cant make it work, a philisophical reason why its a bad idea, or is it just that they havent done it?  I can think of several places where it would make life easier...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650709">2</a> by Justice
		posted on 3/9/2006 at 6:58 PM
		</div>
		<div class="comment_text"><p>OK, I must ask why in the world you would want to dupe a .cfc, as opposed to just sticking an instance into the server or application scope....</p><p>For instance, I use an image handling .cfc, and I just plunk that puppy into the server scope so multiple applications can use it at once.  Why would I want to make a true 'copy'??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650724">3</a> by Raymond Camden
		posted on 3/9/2006 at 7:12 PM
		</div>
		<div class="comment_text"><p>In your example, an Image CFC serves like a service. You only need one. But inthe user's example, he was using beans, differnet instances of a CFC where each was unique.</p><p>Ryan: Why? No, I don't know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650722">4</a> by Bob Everland
		posted on 3/9/2006 at 8:53 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I think Justice is at the point I was a few weeks ago. I used cfc to run queries and do data manipulation, but was setting things specific to users in the session scope. When I was dissecting your LightHouse app to add in Oracle I finally had the eureka moment where it made sense as to why anyone would put a cfc in a session scope.</p><p>Justice,</p><p>Ray is talking about Beans and DAO and to understand it better, imagine where every user comes to your shopping site. Instead of setting session.whatever for that user you create a cfc called a bean in the session scope. That bean holds all of the normal information you would keep in your session scope. session.userid wold become session.userBean.getUserID, in your cfc the only thing it would do is return variables. To get some more information on this disect some of Ray's applications. I worked on LightHouse and can vouch for that one giving you a better understanding of this process. Now that I have seen how this works I have gone out of my way to try and use this method because it just makes sense. Instead of having session variables set all over my application a developer can open up the bean cfc and know exactly what variables they will have access to throughout the application.</p><p>Hope that helps some.</p><p>Bob Everland</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650723">5</a> by Justice
		posted on 3/9/2006 at 9:12 PM
		</div>
		<div class="comment_text"><p>Hrmmm, that is interesting for sure.  I can see how it would be nice to have everything encapsulated, and really the only difference from using a structure in the application scope would be that you could perform function inside your bean and then 'read' variables from it wherever you needed, as well as being able to dispose of it with 1 command.</p><p>Now, if you do a &lt;cfset application.myUserData = CreateObject('Component', 'myUserManagerComponent') /&gt;, does that not create an instance of your component that can do the same thing without having to duplicate() it?</p><p>As a side note, where did the name 'bean' come from, I am assuming its a java thing?  =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650726">6</a> by Bob Everland
		posted on 3/9/2006 at 11:16 PM
		</div>
		<div class="comment_text"><p>Well keep in mind that if you do it in the application scope it would be available to the whole app, if it was specific to the user you would want to create it in the session scope. You don't HAVE to create it in the session scope at all. The main idea behind creating a user bean is that in other languages you can pass an object around, but you can't in ColdFusion(perhaps other web programming languages, can't comment for sure on that though). To get around that and to get around having to read the database each time I want to get a user's information I just put the bean in the session scope(you could work with a bean as a local variable and use your application cfc to read the user recrod each time, this is not a great method because you have to hit the database each time). Another benefit of doing it the bean method is that you can pass a whole bean into an update, or create method. So for instance if you normally have a function that looks like this application.userManager.createRecord(firstName, lastName, email, phone, address1, address2, city, state, zip) you could do this application.userManager.createRecord(userBean). Then inside of that createrecord instead of saying update record set firstname = arguments.firstname you can say update record set firstname = arguments.getfirstname() . That's where it is very helpful for me. I had some functions that I was passing in like 30 parameters, it was becoming unmanageable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650725">7</a> by Bob Everland
		posted on 3/9/2006 at 11:18 PM
		</div>
		<div class="comment_text"><p>I should clarify, when I said you can't pass the bean around, I meant from page to page. You can pass the bean(local variable) in the page you are, but to pass it to another page it would need to be recreate (hence the duplication issue) or put into a sesion variable. Sorry if I made some confusion</p></div>
	</div>
</div>
		