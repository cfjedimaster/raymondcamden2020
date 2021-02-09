
<div class="comment" id="c_1713652662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652662">1</a> by Tony Petruzzi
		posted on 5/8/2006 at 6:34 PM
		</div>
		<div class="comment_text"><p>I'll bite and give me 2 cents here (expect change).</p><p>Since CFMX7 with the application.cfc, the locking issues vanishing and components actually working correctly; I would say that the request scope is dead. I can't really see a reason to use it anymore. In the old days, I would use it for exactly what Ray said, UDFS. Today I put all my UDFS into a component and then throw that component into memory using:</p><p>&lt;cfset application.function = CreateObject("component", "UDFS")&gt;.</p><p>Why you ask. Because now I have one place to add / edit UDFS and I can include them into any other component I need them in. I also take any setting I'm going to be using throughout the application and put them into the application scope using:</p><p>&lt;cfset application.setting.dsn = "myDSN"&gt;</p><p>All this stuff get done in the onApplicationStart(). Probably 90% of the CF programmers out there are doing the same.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652673">2</a> by Raymond Camden
		posted on 5/8/2006 at 6:38 PM
		</div>
		<div class="comment_text"><p>One thing about Tony's comment. My issue with custom tags and how to "address" them would _also_ be solved by using the app scope as he described.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652680">3</a> by Sam Curren
		posted on 5/8/2006 at 7:34 PM
		</div>
		<div class="comment_text"><p>I use the request scope for one specific purpose in a few of my applications.<br>In a few of my applications, I have objects that I store in memory for each user. This makes things like session.user.getFirstName() really easy to use. The problem is that these applications need to be able to update the information about a user, and have it apply to ALL instances of the user cfc. To solve this problem, I copy a reference of my user cfc instance into the request scope at the beginning of each request. I copy it from an object cache manager that handles updating information and expiring the appropriate cache objects.<br>That might sound a little convoluted, but the end result is that my code has become much easier to maintain without session based side effects. I don't use this technique often, but when I need it, it's beautiful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652689">4</a> by Jeff Houser
		posted on 5/8/2006 at 9:15 PM
		</div>
		<div class="comment_text"><p>Sam,</p><p> It doesn't sound like you should be using a session variable if you need to 'update it' for all users of your application.  Sessions, by definition, are user-specific.</p><p>Unlike Tony, I never used to use the request scope, but because of application.cfc have started to do so.</p><p> I would set 'local' variables in the variables scope, such as a dsn name, site URL, directory path, etc...  <br> At some point (probably for legacy cflock reasons) I decided it didn't make sense to do this in the application scope and moved everything to the variables scope.</p><p> Since the variables scope of Application.cfc is no longer avaiable to the page (unless the onRequest method is used), I moved all such variables to the request scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652668">5</a> by John Farrar
		posted on 5/8/2006 at 9:38 PM
		</div>
		<div class="comment_text"><p>Herre is a senario.</p><p>You build a framework that can call itself for event handlers. Each call stores the current call passed variables in "attributes" scope. Yet you want to have access to the iniating call attributes also.</p><p>Answer: Request for global scope. Attributes for more granular process calls.</p><p>Note: My goal is to have a feature ritch API, but not lose touch with originating request. I completely agree with using CFCs and think that there is still a place for custom tags. (Things like a better grid than the one the ships with CF. A grid that handles forms in HTML and has AJAX capability.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652681">6</a> by Teddy Payne
		posted on 5/8/2006 at 9:39 PM
		</div>
		<div class="comment_text"><p>To use or not to the use the request scope.  That my dear friends is the question that plagues us today.</p><p>The answer is both clear and vague.  The answer is simple though.  ColdFusion provides you the choice for setting commonly reused variables and objects.</p><p>If you want the data or object to exist on just the current page, then albeit enjoy the request scope.  If you want the data or object to persist application wide, have at it.</p><p>Each developer maintains his/her code.  For a given situation it may be clear to use one or the other.  If the decision is not clear and amorphous, choose the option you feel comfortable with and can maintain easily.</p><p>Ease of use is subjective to the developer.</p><p>Enjoy and blog on!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652687">7</a> by Sam Curren
		posted on 5/8/2006 at 9:46 PM
		</div>
		<div class="comment_text"><p>Teddy: Very much in agreement.</p><p>Jeff: My 'session' objects are 99% read only, but need to be able to update on demand when the underlying (persisted) data does change. I assume by your comment that you thought I was updating non-persistant information in my 'session' components. The only updating I do is persistant data, and I update from a management interface, not from any one of multiple user sessions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652683">8</a> by Jeff Houser
		posted on 5/8/2006 at 11:16 PM
		</div>
		<div class="comment_text"><p>Teddy,</p><p> The request scope 'persists' beyond the current page.  It is avaiable to custom tags, CFCs, and User Defined Functions that the page calls.  ( All our part of the 'request', but not necesarilly part of the 'page').  Minor semantics.</p><p>Sam,</p><p> I'm really confused with your usage.</p><p> You said that you update information about a user and have to update ALL instances if a CFC to reflect this updated information.  If that is truly the case, then ALL instances of the CFC must have the same data.  If ALL CFCs have the same data, why does each session need to store it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652676">9</a> by Sam Curren
		posted on 5/8/2006 at 11:40 PM
		</div>
		<div class="comment_text"><p>Simplicity of code. The Session does not store an individual instance, but a reference to a single instance maintained in the application scope. By copying the reference (from my cache manager) to the session (or request) scope, I can use the object methods very easily. Retrieving the object from the cache manager on each request (and storing it in the request scope) allows the cache manager to decide when to reuse the cached copy and when to re-create the object and reload persisted data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652678">10</a> by dave
		posted on 4/20/2007 at 10:07 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I am still confused about the persistency of Request variable. The Doc says it only lasts for the duration of the page request. If I use CFLocation to other template, is it still persistent? If I submit a page to the action page either the same page or another page, is it still persistent? Thanks for the clarification.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652669">11</a> by Raymond Camden
		posted on 4/20/2007 at 10:15 PM
		</div>
		<div class="comment_text"><p>When you cflocate, CF tells the browser to go to another URL. THerefore it is a new request, so no, it won't persist. When you submit you are making a new request, so no, it won't persist.</p></div>
	</div>
</div>
		