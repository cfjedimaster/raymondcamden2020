
<div class="comment" id="c_1713661829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661829">1</a> by Phillip Senn
		posted on 2/2/2007 at 11:27 PM
		</div>
		<div class="comment_text"><p>I'm am an advocate of Paul Nielsen's approach of an abstration layer in the database.<br>To put as much Business Intelligence (BI) at the server level as you can.<br>The way he advocates is to use sprocs for all interraction with the tables, not triggers, rules, check constraints, etc.<br>If every table has an associated CRUD sproc, then you can have clean error messages coming out of SQL.</p><p>See "Why the Relational Model is Insufficient" at<br><a href="http://disq.us/url?url=http%3A%2F%2Fsqlblog.com%2Fblogs%2Fpaul_nielsen%2Farchive%2F2006%2F12%2F18%2F430.aspx%3AMiL3g39f_9EFVTEdZHnh5SfStMg&amp;cuid=3321886" rel="nofollow noopener" title="http://sqlblog.com/blogs/paul_nielsen/archive/2006/12/18/430.aspx">http://sqlblog.com/blogs/pa...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661817">2</a> by Adam Fortuna
		posted on 2/2/2007 at 11:30 PM
		</div>
		<div class="comment_text"><p>"I'm not quite sure I agree with everything here - but it is definitely something to think about."</p><p>Agreed, this one definitely made me think. I was most amazed with how the service layer had the gateways/DAOs provided automatically by Coldspring (using Reactor), making the only real code he had to write be the services themselves, as well as any extended reactor code. Kind of like autowiring in model-glue or something in how you have what you need without doing any extra work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661834">3</a> by Brian Kotek
		posted on 2/3/2007 at 10:45 PM
		</div>
		<div class="comment_text"><p>Hey Ray, thanks for the kind words!</p><p>Regarding the service layer vs. your "model", we may simply be using different words to describe the same thing. If you have some business objects like "user" or "product" or "cart", you also need some way to orchestrate their actions.</p><p>If someone is checking out of your store, you might want to update something in the model, loop over the cart, get the totals, verify the credit card, update inventory, and based on success or failure, roll back the purchase, etc. Since this involves coordinating several business objects, and you don't want to have this transaction or other logic in your controller, this is where the service layer would be handy. So if your "model" objects do this, we are talking about the same thing.</p><p>Basically I ask myself: "could I do the same thing in response to a web service call directly to my model (service layer components) that bypasses the controller completely?" The answer should be yes.</p><p>So in that sense, the service layer is a layer of abstraction on top of your standard business objects that acts like a coordinator and an API for all external systems to use the underlying model.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661837">4</a> by Raymond Camden
		posted on 2/3/2007 at 10:53 PM
		</div>
		<div class="comment_text"><p>Ah! Now that makes more sense to me. Let me kind of reword this. An example of needing this service layer is when a business process needs to work with multiple aspects of the model. A programmer may be tempted to do this in the Controller (I know I have), but a nicer approach would be to use the service layer which would handle the process instead.</p><p>Am I on the ball?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661835">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661835">5</a> by Brian Kotek
		posted on 2/3/2007 at 11:09 PM
		</div>
		<div class="comment_text"><p>Yes! If you have simple operations that the model performs, you can certainly call the business objects directly (and so could an external web service or Flash remoting call). For more complex sets of actions though, you either have to coordinate things in the Controller (bad! heh) or have some layer on top of the individual Model objects. This would be the service layer.</p><p>Two additional comments. First, for consistency, I create Service layer methods for the whole model anyway. I don't like the idea of some calls going to the service layer and some calls going directly to business objects. Maybe personal preference coming into play here but I prefer to keep things uniform. Yes it does mean you might have some service layer methods that do nothing but call the underlying model (delegation). But the benefit is that with the Service layer in place, if, in the future, you need to ADD more complex orchestrations, you've already got everything talking to the service layer so you're safe. On the other hand, if you had things talking directly to the business objects and later need to change things, you've got a lot of changes to make (probably in the controller in addition to the model).</p><p>Second, when you have a service layer in place, there can be a danger of making the service layer objects very "fat" and your business objects very "dumb". So one must be conscious of not necessarily making the service layer objects some kind of "God" objects and your underlying domain model just becomes a set of dumb beans. As with anything in OO, there are trade offs that must be carefully considered and no perfect answer for all situations. It all depends on the context of the specific app and what it needs to do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661836">6</a> by Scott P
		posted on 2/3/2007 at 11:55 PM
		</div>
		<div class="comment_text"><p>Making sure I am following correctly.</p><p>Taking something like student registration, the student clicks on a link to register for the class.  This calls the service layer, like registerStudent(studentID,courseID).  A ton of things go into play here like what tuition rate, are there any prereqs, is the class full, add student to class, charge for class etc.</p><p>If I understand you are saying that the service would call each of those check functions then if all good call the actual process that puts the student in the class.</p><p>Then down the line if I get asked to put in age restrictions for a course, I just add that as a check in the service layer.  Not the actual code but a call to the function I need.</p><p>That close?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661833">7</a> by Brian Kotek
		posted on 2/4/2007 at 2:09 AM
		</div>
		<div class="comment_text"><p>Maybe. Just to be clear, I'm assuming when you say the service would "call those check functions", you actually mean "call methods on underlying objects in the domain model". The service layer does not replace a domain model. It acts as an abstraction layer on top of the domain model.</p><p>On the same level, don't put so much logic into the service layer that you start to veer back towards a simple procedural system. Keep logic that belongs in the domain model (the "business objects") in those objects. The service layer is more for code that orchestrates things when several business objects need to be called together in some sequence to fill an overall need.</p><p>To use your example, student registration. An external system wants to register a student, so it calls studentService.registerStudent(someStudentData). Your service layer is providing this service to allow the external system to register a student. Internally, this might be a very complex process as you say, with checks for prerequisites, availability of the class, etc. It might involve several objects within your domain model. But the external system doesn't (and shouldn't have to) care how you're doing this within the model. It just wants to register the student.</p><p>And again, note that the "external system" can be anything that can pass the required data into your service layer: A local Fusebox controller, a Flex app using Flash remoting, or an ASP.NET app using a web service.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661839">8</a> by Sean Corfield
		posted on 2/4/2007 at 7:55 AM
		</div>
		<div class="comment_text"><p>To put it in Object Think terms, the service layer helps the business objects in the model collaborate - it takes the (fairly) simple requests coming in from the controller (or the web service or Flex app) and marshalls the interactions with and between the business objects, making sure that they're available to each other in the right combination to allow them to get their jobs done.</p><p>The controller in the HTML MVC app should be pretty dumb. I think most people get that (these days). That means you need *some* degree of collaboration assistance to get the business objects to play together. However, as Brian notes, you need to be careful not to write a big procedural service layer either. The business objects should be smart enough to do their job - they just need someone (the service layer) to help them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661815">9</a> by Raymond Camden
		posted on 2/4/2007 at 8:02 AM
		</div>
		<div class="comment_text"><p>Thanks Sean. Yours and Brian's last comments really cleared it up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661818">10</a> by Scott P
		posted on 2/4/2007 at 12:08 PM
		</div>
		<div class="comment_text"><p>Ditto on Ray's comment - they both helped a lot.</p></div>
	</div>
</div>
		