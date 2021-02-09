
<div class="comment" id="c_1713649822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649822">1</a> by Joe Rinehart
		posted on 2/7/2006 at 1:04 AM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>You can also give the searchterms arg a default value and save a check in the &lt;cfif&gt; statement:</p><p>&lt;cffunction ...&gt;<br>  &lt;cfargument name="searchterms" required="false" default="" /&gt;</p><p>  &lt;cfif len(arguments.searchterms)&gt;<br>    ...do stuff...<br>  &lt;/cfif&gt;<br>&lt;/cffunction&gt;</p><p>-Joe</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649838">2</a> by Raymond Camden
		posted on 2/7/2006 at 1:06 AM
		</div>
		<div class="comment_text"><p>Ah - but see my note about not "cluttering" up getAll. Obviously it isn't a lot of 'clutter', but I could see it bugging me, know what I mean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649837">3</a> by Raymond Camden
		posted on 2/7/2006 at 2:13 AM
		</div>
		<div class="comment_text"><p>You know - I want to rethink my position a bit. So while I definitely think it is ok to have the one method being used different ways (well, not different ways, but slightly different), you may want to consider using separate methods anway, even if all they do is call the core method. Why? Taking my example, if search() for some reason STOPS being just like getAll(), you client code will not need to be updated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649839">4</a> by Nathan Dintenfass
		posted on 2/7/2006 at 2:19 AM
		</div>
		<div class="comment_text"><p>The more abstract point I think Ray is getting at here is that you should focus on the design of the API itself, then worry about implementation.  If you are comfortable that the search() method will take a single search string, then you shouldn't need to worry too much about that API changing later.  Inside your CFC you can use the getAll() internally to make the magic happen.  Or, as I often do in a case like that you have a private method that does all the actual work and has a relatively complicated set of arguments, all of which are required, then have your public methods with relatively simple arguments call the private method, passing the proper combination of arguments.  That way you can give the developer using your CFC a semantically rich API while saving yourself duplicative implementation internally.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649840">5</a> by Raymond Camden
		posted on 2/7/2006 at 2:26 AM
		</div>
		<div class="comment_text"><p>Nathan, thank you for making my original intentions so much more wise sounding. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649842">6</a> by Michael White
		posted on 2/7/2006 at 8:18 PM
		</div>
		<div class="comment_text"><p>I am relatively new to the whole implementation vs. interface concept... design patterns, etc. but I am starting to realize how little I know. I quite often will use a form to submit criteria to a cfc with a list of optional arguments, testing existance and what not and I thought I was really clever but I'm starting to realize how rudimentary my understanding is. Maybe Nathan could write an article for CFDJ? between that and Ray's input checking we might really have something there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649841">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649841">7</a> by Raymond Camden
		posted on 2/7/2006 at 8:52 PM
		</div>
		<div class="comment_text"><p>Something else you may want to consider is taking a look at a MVC approach. If you read my blog, you know how I feel about Model-Glue. I'm definitely NOT an OO-expert,or much of a design pattern person, but the setup of MG really clicks with me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649843">8</a> by Michael White
		posted on 2/8/2006 at 4:32 AM
		</div>
		<div class="comment_text"><p>yeah, I THOUGHT I knew about MVC because I have three pages to handle each operation: one page for the display, one page to do the "processing" and the component to do the database interaction, but I guess that's wrong, wrong, wrong. All of my Processing should be in CFCs and the controller just directs traffic. I don't think most coldfusion newbies "get it" because there are only a few books on Coldfusion 7 and they don't teach MVC.</p></div>
	</div>
</div>
		