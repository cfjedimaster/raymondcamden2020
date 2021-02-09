
<div class="comment" id="c_1713649499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649499">1</a> by Daniel Greenfeld
		posted on 1/24/2006 at 2:13 AM
		</div>
		<div class="comment_text"><p>In Python and Lsp, you have the Lamda anonymous function.  Perhaps the user is looking for this sort of functionality?  On my own, I have played around with created a lambda library for ColdFusion, but more as an academic excercise rather than anything else.  In fact, in the next major Python release (going from 2.x series to 3.x series), they may get rid of the Lambda function and force you to more clearly define what you are doing.</p><p>Of course, in CFMX, the CFFUNCTION tag seems to lend itself to dynamic function design.  Which if enabled, I'm sure would lead to some fun obfusctated CFMX contests.</p><p>For reference, here are my thoughts on instituting a lambda function in ColdFusion:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfcodemonkey.blogspot.com%2F2006%2F01%2Flambda-fun-coming-from-my-liberal-arts_19.html%3A-vYvgNQQY9qS8QqW0wOV9mimpiU&amp;cuid=3321886" rel="nofollow noopener" title="http://cfcodemonkey.blogspot.com/2006/01/lambda-fun-coming-from-my-liberal-arts_19.html">http://cfcodemonkey.blogspo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649500">2</a> by Raymond Camden
		posted on 1/24/2006 at 2:19 AM
		</div>
		<div class="comment_text"><p>Oh I agree that it is interesting from a code perspective, but I'm really wanting to see a _need_ for it, know what I mean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649501">3</a> by Rob Cameron
		posted on 1/24/2006 at 2:35 AM
		</div>
		<div class="comment_text"><p>I do something similar to this with ColdFusion on Wheels. The results are saved out to a file but that file is then called immediately.  When a user makes a change to a model or database schema, a script behind the scenes generates a new CFC file with new functions depending on the user's changes, saves it and then in the next line of code calls those new functions.  I do this so that the user doesn't need to refresh their browser twice (once to create the new file, again to actually use it) to see their changes, they show up immediately.  I suppose if you wanted to you could then go and delete the file you just created to simulate having those functions around only at runtime.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649506">4</a> by Daniel Greenfeld
		posted on 1/24/2006 at 2:36 AM
		</div>
		<div class="comment_text"><p>I know _exactly_ what you mean.</p><p>I just wish I could get the problem out of my head.  Or come up with an elegant solution that didn't make me flinch.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649504">5</a> by Daniel Greenfeld
		posted on 1/24/2006 at 2:40 AM
		</div>
		<div class="comment_text"><p>My last post was to Ray.  This is to Rob from ColdFusion on Wheels:</p><p>See, you have a good reason for doing it, in that it supports setting up the database scaffolding that is so integral to a Ruby on Rails style system.  You might be able to get around this, but I think I can see your reasoning.  Perhaps you could use a class factory?  Or are you indeed generating code that will serve the system for its lifetime?  If so, perhaps you could store your scaffolding in some sort of auto-generated XML file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649508">6</a> by Seth Petry-Johnson
		posted on 1/24/2006 at 3:03 AM
		</div>
		<div class="comment_text"><p>Looking back over my growth as a developer, it seems I ask fewer of these types of questions as I learn more about software engineering (as opposed to just hacking stuff together).  The other day I came across some code I wrote 5 years or so ago, and it blew me away.  Nested structs with nested arrays of nested structs with dynamic evaluation of this and that... talk about a tighly coupled nightmare!</p><p>I'm not saying there AREN'T any good uses for this technique, or that the person asking the question isn't a good developer.  I'm just saying that experience has taught me that a very complex approach is often a very WRONG approach.  Dynamically generating and then executing code isn't something you should do unless you already know exactly WHY you shouldn't be doing it :)</p><p>BOCTAOE.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649507">7</a> by Hans
		posted on 1/24/2006 at 3:37 AM
		</div>
		<div class="comment_text"><p>Dynamic methods are used in Rails' ActiveRecord to create search methods for database tables.  For example, a users table might have methods such as find_by_firstname, find_by_lastname, find_by_firstname_and_lastname, and so on.  By dynamically creating these methods, no code needs to change in the model when the underlying database changes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649503">8</a> by Raymond Camden
		posted on 1/24/2006 at 3:47 AM
		</div>
		<div class="comment_text"><p>Why would you need dynamic code for that? I mean, if the cod eknows "firstname" is a column and varchar, it could easily generate sql like:  where #col# like '....'.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649505">9</a> by Roger Benningfield
		posted on 1/24/2006 at 12:27 PM
		</div>
		<div class="comment_text"><p>Ray: Do template compilers count as "dynamic"? If so, then this is something my code has to do all the time... take a user's blog template, scan for security issues, convert the template markup language to CFML, and then write out the file to be executed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649511">10</a> by Raymond Camden
		posted on 1/24/2006 at 5:15 PM
		</div>
		<div class="comment_text"><p>Roger, it sounds like you are replace tokens, like %foo%, with values, is that right? If so, I don't consider that dynamic CFML. It is nothing more then a templating system, which is really just replacing strings. (I don't mean that to say it's bad -just not what the original writer meant.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649510">11</a> by Vince Collins
		posted on 1/24/2006 at 8:45 PM
		</div>
		<div class="comment_text"><p>Hey all,</p><p>About five years ago I wrote a basic content management system.  It was really simple, just parent and children style hirearchy and bulk text fields to dump whatever style html/text the admin wanted to include.  It was administered by a junior web developer at the time and all was good.  Later, that developer wanted to do things like query a table and spit it out within one of those pages by simply writing the cfquery code within the text field along with the content.  At the time, I was bummed that Coldfusion couldn't do this in a way other than writing it out to a file and then including it.  I think this is an example of where the original question came from.</p><p>My thoughts now on the subject is that doing that would have been a cludge and would be a nightmare to administer.  Busines logic wouldn't be seperated from the content management system.</p><p>I think I understand his/her frustration.  It could be that they know the real answer is to redesign whatever application they have written but that it is just too painful to think about that and they are hoping to solve it with a 'cludge'.</p><p>That's my two cents anyway...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649509">12</a> by Roger Benningfield
		posted on 1/25/2006 at 4:34 AM
		</div>
		<div class="comment_text"><p>"...is that right?"</p><p>Ray: To an extent. The reason I was thinking it might apply is that it isn't simply a matter of "replace [footag] with <a href="http://disq.us/url?url=http%3A%2F%2Fmyquery.foo%3AIH9vhwoRprL3n6_-ardzNDjdXl0&amp;cuid=3321886" rel="nofollow noopener" title="myquery.foo">myquery.foo</a>". The template language is an actual language, with flow control, user variables, remote and local includes, and so on.</p><p>For example, users can have the template fetch an RSS feed, loop over it, and perform operations on the contents. The result is that the compiler routinely generates chunks of arbitrary, semi-unpredictable CFML.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649513">13</a> by Raymond Camden
		posted on 1/25/2006 at 7:32 PM
		</div>
		<div class="comment_text"><p>Roger - maybe I'm picking hairs - but I still think what you are doing is different from what the original author was doing. In your case, you have set logic. Token so and so for flow control. In his case, the entire logic would be dynamic. At least thats the way I read it. What you are doing makes sense. What he had wanted, again, to me, does not. Either way - you should blog about what you are doing. It sounds cool. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649517">14</a> by Hans
		posted on 1/26/2006 at 6:22 PM
		</div>
		<div class="comment_text"><p>Ray - you're correct that you wouldn't _need_ dynamic code for this.  It's more a matter of convenience.</p><p>Let's say I have a users table:</p><p>CREATE TABLE users (<br>  id int(10) unsigned NOT NULL auto_increment,<br>  firstname varchar(45) NOT NULL,<br>  lastname varchar(45) NOT NULL,<br>  email varchar(45) NOT NULL,<br>  PRIMARY KEY (id)<br>);</p><p>In Rails, I'd create a model to represent this table (/app/models/user.rb):</p><p>class User &lt; ActiveRecord::Base<br>end</p><p>Then I'd call the methods on the model from a controller (/app/controllers/user_controller.rb):</p><p>class UserController &lt; ApplicationController<br>  def list<br>    @users = User.find_by_firstname_and_lastname(params[:first], params[:last]);<br>  end<br>end</p><p>Notice I didn't define any methods in my model.  The find_by_firstname_and_lastname method was dynamically added based on introspection of the database schema.  This certainly isn't earth shattering, but it's one example of how dynamic methods are being used in other languages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649514">15</a> by Raymond Camden
		posted on 1/26/2006 at 7:06 PM
		</div>
		<div class="comment_text"><p>Hans - Again - maybe I'm being too anal - but I wouldn't consider this the same. I haven't used Rails, so forgive me if I'm wrong, but it seems like Rails generates logic by using DB metadata. That to me is still a firm business rule. "Create select logic based on table schema."</p><p>It may be that I'm splitting hairs on what is meant by dynamic. Yes, what you proposed is dynamic and did not require writing code. But it isn't dynamic _logic_. Your example, find_by_firstname_and_lastname - I assume Rails supports find_by_X ... where X must be a column name. I doubt you would be able to do (and correct me I'm wrong, find_age_less_then_20_greater_then_10_gender_is_male etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649519">16</a> by Sunny Hirai
		posted on 1/26/2006 at 8:46 PM
		</div>
		<div class="comment_text"><p>Lambda functions are particularly useful when creating frameworks. Let's say you create a CFCOMPONENT and you want to automatically generate getters and setters for it.</p><p>It would be nice to be able to call generateGettersAndSetters("id,firstname,lastname,sex,dateOfBirth"). I can then, from within the generateGettersAndSetters() function, have statements like:</p><p>...loop through each field in list...<br>this["get#field#"]=function(){return this[field];}<br>this["set#field#"]=function(value){this[field]=value;}</p><p>This is the first step in generating a more complete framework. You can then expand on this to get better frameworks.</p><p>You may argue why we couldn't just create generic get(field) and set(field,value) functions. You can't because you increase the coupling.</p><p>Let's say later I wanted setDateOfBirth() to automatically update the age property. I couldn't do this. With the lambda functions, I could simply remove the "DateOfBirth" getters/setter from the generateGettersAndSetters() function and create my own that does set the age.</p><p>Sunny</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649520">17</a> by Hans
		posted on 1/26/2006 at 10:00 PM
		</div>
		<div class="comment_text"><p>You could support whatever complex find methods you want using method_missing(), a Ruby method that catches any method names that are called but not defined on the given object.  (This is also how Rails handles calls to the find_by_column(s) methods.)</p><p>I haven't tried it, but one alternative to writing out a file could be to catch function not found errors and handle the undefined functions in the exception sort of similar to method_missing().  (Yes, I know, it'd be ugly as sin and you wouldn't _really_ be creating dynamic functions.  But if someone _really_ needed to, it might be a workaround.)</p><p>Anyway, back to the question.  This sort of functionality can be useful for meta-programming--writing code that writes or updates itself or other code.  This is less important for CF developers though since we're already at a pretty high level.  And that's one of the things I appreciate most about ColdFusion.</p></div>
	</div>
</div>
		