
<div class="comment" id="c_1713716700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716700">1</a> by Jeff Bouley
		posted on 7/10/2009 at 4:10 PM
		</div>
		<div class="comment_text"><p>Hi Ray and Doug:</p><p>I am a huge proponent of cfqueryparam only in this scenario. I believe the best approach here is to try catch the query and either bubble or handle accordingly with the cflocation.  I wrap all 3rd party calls; db, file, com, etc with try catch as they are ultimately outside the the cf engine and can produce unexpected results (for instance if the db is down or unstable).</p><p>It is also much less code and validation is really an after thought.  I believe the input (text box in html or flex) should be validated client side before ever going to the server as well.</p><p>Hope this code comes out in the comment:<br>&lt;cftry&gt;<br>    &lt;cfquery name="theQuery" datasource="#ds#"&gt;<br>        SELECT this, <br>               that <br>        FROM theTable <br>        WHERE this = &lt;cfqueryparam value="#url.this#" cfsqltype="cf_sql_integer" /&gt;<br>    &lt;/cfquery&gt;<br>	&lt;cfcatch type="database"&gt;<br>    	&lt;!--- Either bubble with cferror and pass on to global handler, i.e. onError in app.cfc<br>		      or just place your cflocation in the catch (used in this example ---&gt;<br>        &lt;cflocation url="/SomePlaceSafe.cfm"&gt;      <br>    &lt;/cfcatch&gt;<br>&lt;/cftry&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716712">2</a> by Raymond Camden
		posted on 7/10/2009 at 4:24 PM
		</div>
		<div class="comment_text"><p>My issue with this is that there is no 'pretty' way to represent the error. Ie, the normal error from cfqueryparam would mean nothing to the end user. However - if you are using client side validation to handle that, then I think you are ok. The combination of client/server validation with the client side being 'elegant' and the server being 'brute' should be acceptable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716711">3</a> by Jim Priest
		posted on 7/10/2009 at 4:59 PM
		</div>
		<div class="comment_text"><p>Jeff's solutions seems much better in the long run. What happens when the validation rules change? You'd have to go back and tweak all the if/else around each query.</p><p>And hopefully everyone is using the jQuery validation plugin :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716718">4</a> by Dan Vega
		posted on 7/10/2009 at 5:04 PM
		</div>
		<div class="comment_text"><p>I think the really problem here is that your trying to combine to separate tasks in to one. A create or update method should just expect that the data its going to receive is going to be good data. The only thing I catch an exception for at that point is a database connection error. The validation should be pulled out and be performed before any save action is taken. A usual case for me is:</p><p>1.) populate my object with data<br>2.) validate<br>3.) if object has errors display them<br>    else save</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716698">5</a> by Joel Cox
		posted on 7/10/2009 at 5:11 PM
		</div>
		<div class="comment_text"><p>Interesting. I usually do my validation in the bean (I almost always use beans to pass data to a function if there are more than one or two arguments to the function...just makes it a bit tidier). I guess my philosophy is that if the bean is reponsible for carrying my data around, then it ought to know what it's carrying and if it is valid for the purpose intended. The bean's validate method returns a boolean value and I test this before ever getting to the object containing the db query. As noted, db exception messages are scary to the end user and tell them nothing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716725">6</a> by Jay Greer
		posted on 7/10/2009 at 5:16 PM
		</div>
		<div class="comment_text"><p>@Jim Priest</p><p>Jim, if you're subscribing to this post, what's the "jQuery validation plugin"..?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716724">7</a> by Dan Vega
		posted on 7/10/2009 at 5:18 PM
		</div>
		<div class="comment_text"><p>I am curious to know why everyone decided to do validation at the beat level? This is by no means a stab at Joel but more of a question to all. Did everyone start doing validation at the bean level because it made sense or because they had nowhere else to do it? A class (component in this case) should do 1 task and do it well. A bean accomplishes 1 task very well and that is representing a single object. I think validation should be done on it's own terms and if that means passing in data or passing in bean I am fine with either. Just my 2c!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716699">8</a> by Jim Priest
		posted on 7/10/2009 at 5:33 PM
		</div>
		<div class="comment_text"><p>@Jay</p><p>Check out Jorn's plugin here: <a href="http://disq.us/url?url=http%3A%2F%2Fbassistance.de%2Fjquery-plugins%2Fjquery-plugin-validation%2F%3Aq7khCEUGYQ3tYK7B4v37cPz5Jfo&amp;cuid=3321886" rel="nofollow noopener" title="http://bassistance.de/jquery-plugins/jquery-plugin-validation/">http://bassistance.de/jquer...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716703">9</a> by JC
		posted on 7/10/2009 at 5:55 PM
		</div>
		<div class="comment_text"><p>Do we really care if hackers get an elegant error message instead of a default error page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716702">10</a> by Joel Cox
		posted on 7/10/2009 at 5:59 PM
		</div>
		<div class="comment_text"><p>@JC,</p><p>Oh, absolutely. If the exception message gives details about the database system, table names, column names, etc, this is valuable information for further attacks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716705">11</a> by Raymond Camden
		posted on 7/10/2009 at 7:10 PM
		</div>
		<div class="comment_text"><p>To follow up on Jim Priet's URL, also note I did about 4 blog entries here on that plugin alone. Just browse my jQuery category.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716704">12</a> by Mary Jo
		posted on 7/10/2009 at 9:30 PM
		</div>
		<div class="comment_text"><p>@JC - also if you generate email reports of your errors to review (which is always a good idea), I'd much rather give a hacker an online error message than one that I have to look at.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716707">13</a> by Dave Crawford
		posted on 7/10/2009 at 9:57 PM
		</div>
		<div class="comment_text"><p>I am not a big fan of causing the database to throw errors, even unintentionally.  If the content of a variable passed to the database is going to cause a DB error, it seems the better approach to protect the DB by prior validation.</p><p>Defense in depth should be the order of the day.  A nice looking default error message is good, but preventing information leakage is better.  User input is pure evil until you prove otherwise.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716708">14</a> by Andy Sandefer
		posted on 7/11/2009 at 1:04 AM
		</div>
		<div class="comment_text"><p>Applying javascript error handlers using ColdFusion.Ajax.submitForm has kind of changed the way I look at this type of issue over the last 2 years.  I know that it is a lot of extra work to some folks but you can flat eliminate passing invalid data to your db if you put in the work up front.<br>My approach has changed quite a bit and I find myself often using cfajaxproxy along with front end javascript validation a lot more than serverside error handling techniques.  I'm  consistent in using cfqueryparam on the back end but trapping crap data up front and stopping the process before the submit even happens is really working out for me.<br>It is a lot of extra work but using cfajaxproxy to check for primary key violations in instances where the user names a key is helpful (subsidiary tables that employ meaningful user defined codes rather than manufactured primary key values to make records unique).  For instance, nobody wants a unit of measure code named 2, they want lbs or units.<br>Just my opinion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716714">15</a> by Doug
		posted on 7/11/2009 at 10:34 PM
		</div>
		<div class="comment_text"><p>Mary Jo hit it spot on.  I get emails from the onError method, but fact of the matter is, I don't want to get emailed for hundreds of failed attempts to inject something into my DB.  So, instead of my website's standard "we're sorry you got this error" message, I'd rather just send the user back to the main page of the section they're in.  This way has the advantage that if it was bad url data passed for some innocent reason (such as mistyping a link), the person won't have to see the error message at all.</p><p>Thanks for the tips Ray!  (And I've gotta put my fear aside and start dabbling in ModelGlue.  Time to read your next blog post...)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716716">16</a> by martin
		posted on 7/12/2009 at 1:49 AM
		</div>
		<div class="comment_text"><p>from what i am reading about objects and oop i reason that data validation should take place where the data belongs. A bean contains data, it is it single responsibility to hold the (correct) data and present it to other parts of the application. So i put validation into the bean and by doing so i also encapsulate the bean from the rest of the application. The other parts of the application do not have to worry about the correctness of beans data, they just assume that it is correct.</p><p>Take a look here: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.martinfowler.com%2Fbliki%2FAnemicDomainModel.html%3A1wh2kvT1vi4wBVv6MJg_EoMQOmw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.martinfowler.com/bliki/AnemicDomainModel.html">http://www.martinfowler.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716715">17</a> by martin
		posted on 7/12/2009 at 1:52 AM
		</div>
		<div class="comment_text"><p>of course cfqueryparam and cftry, cfcatch should always be part of the object that access the database</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716717">18</a> by Jeff Bouley
		posted on 7/12/2009 at 7:28 PM
		</div>
		<div class="comment_text"><p>@Ray, no way would I throw native back to the client!  8-)</p><p>Though, I'm concerned about some of the responses here.  Who says the db throws a native error in my scenario @Dave Crawford?  It never gets to the db if the cfqueryparam fails.</p><p>As for custom error handling that is a given.  I eluded to bubble to a global handler; CF 101 or app dev in general, never show or present native errors to the user.  I usually roll my own error handler .cfc which handles the error per the given process (make the error as pretty as you like here) i.e.  Send an email, custom log with cflog, etc.</p><p>There you can present a more intelligent response to the user so that customer support can do their job effectively.  This kind of information may go as far as including template, line number, and query name info.  Alot of flexibility here or just cflocation afterward per Doug's initial example.</p><p>As for the validation discussion, whether you incorporate that client or server side is personal choice.  I don't like taxing the server if I can do it client side (remember the old cfform js trick?).  This goes years back, but I would have the server gen the js for me and switch back to html form.  Many advances with jQuery here agreeed... I have worked on projects where it is done both client and server.  I personally have no issue with implementing in the Bean per @Martin's response.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716720">19</a> by Jeff Bouley
		posted on 7/12/2009 at 7:30 PM
		</div>
		<div class="comment_text"><p>@Andy, sorry just reread your reply.  Totally agree with your approach.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716721">20</a> by Rob Barthle
		posted on 7/15/2009 at 12:49 AM
		</div>
		<div class="comment_text"><p>Using a form I'll validate with CFFORM using both onSubmit and onServer, that way I know the data is validated by the time it gets there. If I need to do some extra post-submittal validation (like checking to see if a record already exists before allowing an insert) I'll write it up server side.</p><p>Ultimately I don't want to rely on CFQUERYPARAM to catch data type failures, it's the last line of defense for me. I'll cover every variable in a query, but I'm more interested in the performance boosts CFQUERYPARAM provides. The added security is an extra benefit to me, since I should have covered the security needs beforehand.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716722">21</a> by Doug
		posted on 7/15/2009 at 5:04 PM
		</div>
		<div class="comment_text"><p>I guess that's what it boils down to, right?  CFQUERYPARAM is just the last line of defense, which we SHOULD use, but only after all the "elegant" methods are exhausted, (such as client-side and server-side validation, redirecting bad url, form, and cgi submissions, custom error handling, etc.)</p></div>
	</div>
</div>
		