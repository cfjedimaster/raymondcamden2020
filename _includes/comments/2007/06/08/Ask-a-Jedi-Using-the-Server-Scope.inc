
<div class="comment" id="c_1713666921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666921">1</a> by Jim Priest
		posted on 6/9/2007 at 5:14 AM
		</div>
		<div class="comment_text"><p>I could see this working in a corporate / intranet setting.  Where I work we have several employee lookup functions and I'm sure each and every application on our servers has an instance of that firing off.  Seems like that would be perfect for the server scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666920">2</a> by Tom Mollerus
		posted on 6/9/2007 at 3:45 PM
		</div>
		<div class="comment_text"><p>I work at a dot-com where we run several different finance sites on the same CPU. They all refer to certain common information (such as U.S. federal and state tax rates, for example.) In that instance, we use the server scope since it's more efficient than duplicating the information in each application. That being said, that information hardly ever changes, so we don't worry about race conditions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666908">3</a> by Aegis
		posted on 6/9/2007 at 4:52 PM
		</div>
		<div class="comment_text"><p>Unfortunately you need to be aware of it's use in some third party code. eg: FCKeditor's CF filebrowser used (just checked, still does in 2.4.2 release) a SERVER var for the filepath in it's backwards compatibility checks. I ran into an issue recently where a modified version we deployed to a local government server had it's userFilesPath hijacked by the backwards compatibility stuff as there was another FCKeditor instance running in an older application elsewhere on the system. Thought I was going nuts initially!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666919">4</a> by Allen
		posted on 6/10/2007 at 8:36 PM
		</div>
		<div class="comment_text"><p>To me the question would be what are the risks versus what the gains are from doing this.  I would think the only way you could claim you gain much from using the server scope would be that you're running each application in it's own instance or that you've actually taken the time to ensure that the employee object is more or less exactly the same for every application.  Now if you're running multiple instances of CF you don't risk the cross over.  But at that point isn't the server scope essentially the application scope?  And if you're not doing that, I have a hard time believing that you can assume that the employee object is and will continue to be the same for all applications.  And even if it is, are all the business rules involving it going to be the same?  I can see where we may see "employee.cfc" in 4 different applications but I'd be cautious about it since while they're the same in name, they may be different in practice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666918">5</a> by Joe FitzGerald
		posted on 6/11/2007 at 8:57 PM
		</div>
		<div class="comment_text"><p>I tend not to use the server scope either -- I don't think that general "policy" is fuddy-duddy, I think it is good practice.  The simple fact of the matter is that "you" don't have control over the scope.  Even in corporate environments where "you" do, are you really the only one coding on the box?  Even if that is the case, do you want to add that layer of dependency into your code?  Are you going to flesh out a system to ensure the server scope vars are maintained properly?  What if your system goes from a single-server environment to a multi-server environment...?</p><p>I think the motivation is quite understandable and I certainly wouldn't consider the approach "wrong"...just not the one I would probably choose given the implications.  I think in general I'd be more apt to create a web service that provides that information to multiple applications (or perhaps even more likely, just let all the apps do the work).</p><p>Also, in general, that is one of the last types of optimization I'd be looking at...I'd only consider the additional "complexity" of that type of optimization if my app was still not meeting performance requirements and I had exhausted the myriad of other options available to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666917">6</a> by Todd
		posted on 6/12/2007 at 3:13 AM
		</div>
		<div class="comment_text"><p>I wanted to say thank you for the comments.  This has been very helpful and raised some points I hadn't considered.  I really appreciate it.</p></div>
	</div>
</div>
		