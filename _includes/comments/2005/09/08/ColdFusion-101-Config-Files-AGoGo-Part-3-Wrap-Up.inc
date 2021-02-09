
<div class="comment" id="c_1713620633">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620633">1</a> by Jake
		posted on 9/9/2005 at 2:01 AM
		</div>
		<div class="comment_text"><p>Wonderful series, loved loved it. I really like how you've compared and contrasted the methods - which is always what I feel is missing in books about CF... they often say "here's method 1, here's method 2....now onto the next subject". I'm always left wanting to track down the author and say "yeah, but which way would YOU do it??"</p><p>Personally, I'd really really like to see the actual example of how you might do something like this in the database. Obviously  the code to retreive settings is basically a standard CFQUERY... but every schema example I come up with doesn't feel right, and I'm not quite sure the best way of caching that intial config query.</p><p>Thanks, Ray. Can't wait to see more of these. If you ever bind them into a book, put my name on the purchase list.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620638">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620638">2</a> by kola
		posted on 9/9/2005 at 3:27 PM
		</div>
		<div class="comment_text"><p>Ray</p><p>This is good timing as I've been having a bit of a debate about this with some colleagues. Currently they use a similar technique to the one above, which sets a number of settings in the application.cfm/cfc based on the environment. I'm still not 100% this is a good idea (basing your app's setting on environment variables) - what do you do if you're using a clustered environment or an app split across a number of subdomains? Although I will admit it works for most cases - what they do not do ..which I (think they should be doing) is using seperate config files. I'm just not convinced that the app should be responsible for determining what environment or configuration it should be using</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620636">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620636">3</a> by Raymond Camden
		posted on 9/9/2005 at 5:03 PM
		</div>
		<div class="comment_text"><p>Kola: What I could do is a post on handling generic data. One of the issues I've seen in various projects - its easy enough to model the MAIN date for a site (products, reviews, etc). But then you typically have "stuff" - "stuff" being stuff the client wants to edit, but "stuff" not fitting into a nice 'type' like Products. You could almost just call it "Random Content" or "Text Snippets."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620635">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620635">4</a> by Mickey
		posted on 3/7/2009 at 5:32 AM
		</div>
		<div class="comment_text"><p>I realize I'm coming a little late to this party, but I just wanted you to know that this 101 series is still helping people like me who have recently changed jobs and are using CF for the first time.</p><p>For now I'm populating my application variables using ini files since I think I have a better chance of writing a good admin page for those. I'm taking your suggestion to have separate ini files for development, staging, and production servers.</p><p>But I do like the flexibility XML offers and may decide to tackle it that way later. I suppose the logic is the same either way... Read the config file, create the struct, populate a form, and overwrite the file if the form is submitted.</p><p>I've added 2 cfincludes to run this code from application.cfc (Your "Application.cfc Methods and examples" blog was also very helpful). I know you suggested writing a method or UDF to handle that but I'm not quite there yet. Soooon soooon. <br>If you have time can you briefly discuss the benefits/differences of doing it that way as opposed to just using a cfinclude.</p><p>Thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620637">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620637">5</a> by Raymond Camden
		posted on 3/7/2009 at 5:22 PM
		</div>
		<div class="comment_text"><p>You are cfincluding an INI file? Why aren't you just using the getProfile stuff I mentioned in the first entry?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620641">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620641">6</a> by Mickey
		posted on 3/10/2009 at 2:01 AM
		</div>
		<div class="comment_text"><p>No sorry... I am not including the ini files themselves.</p><p>In the application.cfc "OnApplicationStart" function I cfIncluded a cfml template that runs something similar to the getprofile code you mentioned. In the "OnRequestStart" function I check for a "reinit" URL value and if present I cfinclude the same template to refresh the application scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620640">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620640">7</a> by Raymond Camden
		posted on 3/10/2009 at 6:14 AM
		</div>
		<div class="comment_text"><p>Ok, sounds good to me, unless I'm missing a question.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620642">8</a> by Mickey
		posted on 3/10/2009 at 6:21 PM
		</div>
		<div class="comment_text"><p>Not really... the only question I had was if there is any downside to using an include to run the getprofile code as opposed to a udf or other method as I think you alluded to in the original article.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713620639">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713620639">9</a> by Raymond Camden
		posted on 3/10/2009 at 6:59 PM
		</div>
		<div class="comment_text"><p>No, I think that's fine.</p></div>
	</div>
</div>
		