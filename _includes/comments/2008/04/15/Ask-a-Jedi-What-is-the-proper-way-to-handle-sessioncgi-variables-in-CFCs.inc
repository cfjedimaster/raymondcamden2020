
<div class="comment" id="c_1713679616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679616">1</a> by Justice
		posted on 4/15/2008 at 6:16 PM
		</div>
		<div class="comment_text"><p>I have adopted others approach that, much like Ray mentioned he does to have a function so he can change it in only 1 place, I do in a more generic method by having a facade component with generic get/set type methods, that is loaded up and told what scope it works with initially.  So, I load up a singleton called anything you want, say userState.  Then all throughout your application you do userState.get("username"), userState.exists(), userState.set("username","chris").  Then if you ever had to swap from session to client, you just change your initialization of your facade component, and none of your application has to be modified. =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679613">2</a> by Rob Gonda
		posted on 4/15/2008 at 8:34 PM
		</div>
		<div class="comment_text"><p>Good point Ray ... I always create some sort of Scope Facade, which is a CFC with a sole purpose of communicating with a scope, 'session' for example. Then I end up with a single point of communication and other CFCs that require it can use my sessionFacade. That allows to abstract session from all CFCs, which means I could even change how I handle sessions and throw it into a shared database layer if I wanted, or as a simple example, change the storage location inside the session scope... Furthermore, I never store directly under session, or application. I create a structure to hold my data because I dont want any CFC with access to the application facade to be able to access by application functions, name, timeout, etc...</p><p>HTH</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679620">3</a> by Adrian J. Moreno
		posted on 4/15/2008 at 10:50 PM
		</div>
		<div class="comment_text"><p>I wrote up how we're using a Session Facade here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.iknowkungfoo.com%2Fblog%2Findex.cfm%2F2007%2F2%2F12%2FUsing-a-Session-Facade-to-handle-evolving-session-variables%3Aep23k7IBHHAT9iUbSmPA8OkbWDU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.iknowkungfoo.com/blog/index.cfm/2007/2/12/Using-a-Session-Facade-to-handle-evolving-session-variables">http://www.iknowkungfoo.com...</a></p><p>We now have a base SessionFacade.cfc and each application has their own that extends the base. We pass the SessionFacade into other objects as needed so that no other object is directly accessing the session scope.</p><p>This gives us focal points for managing session variables across applications and it makes sure that everything is locked correctly for reads and writes.</p><p>Our old site read from and wrote to the session scope anywhere it pleased. People would log in and get someone else's session info so often, we just told them to log in again and see if that helped.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679617">4</a> by Ken Sykora
		posted on 4/16/2008 at 1:42 AM
		</div>
		<div class="comment_text"><p>We use a session facade very similar to what Rob posted above. It works fantastic in the CFCs and eliminates the session dependency.</p><p>Another common practice we have which isn't as nice but gets the job done, is pass the variable as an argument to functions but give it a default value of value="#session.whatever#" so it only needs to be passed in by functions that don't have access to the session scope.</p><p>I tend to agree with Ray, however that dependency injection is really the way to go here with a session facade.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679619">5</a> by Jaime Metcher
		posted on 4/16/2008 at 2:39 AM
		</div>
		<div class="comment_text"><p>The "Session facade" thing is definitely the way to go.  I have a couple of nitpicking gripes about the name, though.</p><p>1. Session Facade is also a J2EE pattern that provides a stateful facade in front of a set of stateless beans.  IOW, the client interacts directly with the session facade, which then talks to the back end system.  This sounds like a facade to me.  The "Session facade" that CFers talk about is just plain old encapsulation.  Yep, I told you it was nitpicking!</p><p>2. Name the object for what it represents, not how it's implemented.  I don't call my Invoice object InvoiceDatabaseRecordFacade, I just call it Invoice.  This thing is an abstraction that represents a user's session, so what's wrong with UserSession.cfc?  Or even just Session.cfc.</p><p>Ok, gripe over.  Apologies for the inconvienece, we now return you to the scheduled programming...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679621">6</a> by django
		posted on 6/23/2010 at 1:00 PM
		</div>
		<div class="comment_text"><p>ray, question for you.  i know it's a good idea to use the duplicate() function when pulling a variable out of the session, but what about when setting a variable IN to the session?</p><p>found some info on it from adobe (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fdevnet%2Fserver_archive%2Farticles%2Fcf_locking_best_practices.html%29%3AK5osvitsm3e2fZ2Ty-i34d1zKQ0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/devnet/server_archive/articles/cf_locking_best_practices.html)">http://www.adobe.com/devnet...</a> that i understood as not to worry if the original variable was not of shared scope...but i am looking for a 2nd opinion.</p><p>thanks in advance.</p><p>thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679622">7</a> by Raymond Camden
		posted on 6/23/2010 at 5:03 PM
		</div>
		<div class="comment_text"><p>"i know it's a good idea to use the duplicate() function when pulling a variable out of the session"</p><p>Actually, no, it isn't. In the "old days" (pre-CFMX) it was, but not anymore.</p><p>As for setting a variable, you wouldn't use duplicate either, unless you explicitly  needed to. (And you probably don't.)</p><p>As to that article - it is probably close to 10 years old. Unfortunately, there is no date stamp on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679625">8</a> by django
		posted on 6/23/2010 at 8:48 PM
		</div>
		<div class="comment_text"><p>thanks for the feedback ray.</p><p>tricky adobe...going for 'timeless' i guess!</p></div>
	</div>
</div>
		