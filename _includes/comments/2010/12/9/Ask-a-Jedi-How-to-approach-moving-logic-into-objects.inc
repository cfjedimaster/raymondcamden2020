
<div class="comment" id="c_1713728257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728257">1</a> by todd sharp
		posted on 12/9/2010 at 7:54 PM
		</div>
		<div class="comment_text"><p>I think the key is that each item is a business object.  Policies, balances, state/country logic - each of these can be represented as an entity in your ORM application.  The key is to keep any of that other logic _out_ of your entities.  The calculation activity that needs to take place with these things should go in your service layer.  The key is to keep it simple - think of each item as a small unit of work and don't get overwhelmed by the big picture.  And as you said Ray, just _do it_ -- it may "feel wrong" as you're learning - but make it work and come back later and ask yourself how you can make it better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728269">2</a> by James Brown
		posted on 12/9/2010 at 8:27 PM
		</div>
		<div class="comment_text"><p>Like Todd said, don't try to see the big picture in your objects. Look at your object as JUST what that object is and not what it does. Use the service layer to put together what the objects do. Break everything down into small units and put your focus there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728280">3</a> by David Hammond
		posted on 12/9/2010 at 8:33 PM
		</div>
		<div class="comment_text"><p>This reminds me of a nice article from a few days ago:<br><a href="http://disq.us/url?url=http%3A%2F%2Finfoworld.com%2Fd%2Fdeveloper-world%2F12-programming-mistakes-avoid-292%3A5VTm6zpYzgRKEM15vLikuenjjPM&amp;cuid=3321886" rel="nofollow noopener" title="http://infoworld.com/d/developer-world/12-programming-mistakes-avoid-292">http://infoworld.com/d/deve...</a></p><p>I like that each example has a counter-example, showing that if you try too hard to avoid one mistake you're likely to go too far in the opposite direction.  "...lending further proof that programming may in fact be transforming into an art -- one that requires a skilled hand and a creative mind to achieve a happy medium between problematic extremes."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728281">4</a> by Tim Garver
		posted on 12/9/2010 at 8:36 PM
		</div>
		<div class="comment_text"><p>You're right! the custom tag has worked well up until now, but as time goes on its harder and harder to add company polices and do the calculations. Encapsulation or modularization is needed in order to make it easier to maintain. Its some of the last pieces of spaghetti code I wrote 8 years ago to solve a problem then. And now its time to move it forward with the rest of my code base.</p><p>I can build all the objects and call all the functions, but I was wondering if there is a best practice to follow when creating Object Logic.</p><p>I am using CF9 and ORM along with a framework (still playing with them all to figure out which will work best for this application). Most of the code base is already in good shape just not wrapped up in a nice framework. But what I was pulling my hair out with is these few sections of business logic and how they would work well with a framework.</p><p>Anyway, thanks for the post its definitely helps put it into perspective for me.<br>Tim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728282">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728282">5</a> by Ed
		posted on 12/9/2010 at 10:55 PM
		</div>
		<div class="comment_text"><p>Interesting question. Here's one pragmatic approach. I'm no OO expert, just a CFer who's been through exactly your experience in migrating a complex, old, procedural app into a largely CFC-based app.</p><p>Background: this app was an asset management tool. It stored and displayed large quantities of assets (each with many representations, or individual files) in a complex matrix layout.</p><p>A rule of thumb which worked for us was to start by looking at your database structure. Someone - your DBA, you - has already had to model real-world entities and relationships into a relational model. What are the schemas and tables and what does each represent, and store? In our case we had an asset table, a file table, and various many-to many relationship tables. Presumably you have a user table, a countries table etc etc? As a starting point, we modelled basic CFCs for each of the important entity tables (thanks to Peter Bell for the automated CFC bean-from-DB creator; getters/setters for each table column), then added functionality (methods) to each CFC as required. Once the data model had been created as a series of CFCs, we looked at how the data behaved and interacted in different contexts, and built a service layer in CFCs to handle those interactions.</p><p>In our case, the business logic drove the display logic to create complex matrices of assets in the UI, so we chose to  maintain the business logic in vanilla procedural CF code. The procedural code just calls data from the CFC beans and service layer as required, and makes decisions or displays data accordingly. It would have been time consuming and difficult to model the complexities of the display logic using CFCs, and we're still satisfied with the route we took.</p><p>I'm not advocating this data model-centric approach as a best practise, but if you're looking at a substantial project and feeling uncertain about where to begin then it might be a useful point to start (even if only to trigger further thinking about how to structure your CFCs).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728283">6</a> by Phillip Senn
		posted on 12/10/2010 at 12:14 AM
		</div>
		<div class="comment_text"><p>Willy Wonka had Object Oriented programmers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728284">7</a> by Sean Corfield
		posted on 12/10/2010 at 2:40 AM
		</div>
		<div class="comment_text"><p>Todd made a comment I'd like to elaborate on:</p><p>"The key is to keep any of that other logic _out_ of your entities. The calculation activity that needs to take place with these things should go in your service layer."</p><p>You need to be careful with this approach. It's common when folks first move from procedural to OO code and they have "dumb" entities that contain just data and getters / setters and put all their logic in a "service layer". Instead, what you're really trying to achieve with OO is modeling the real world and putting relevant logic and data _together_ in an object that represents something in the problem space.</p><p>I'd probably have the vacation calculation in the User CFC because: a user 'knows' their vacation profile and should also know about their employer / company - and therefore, as an employee, they should have read the handbook and would 'know' the company vacation policy - and of course a user 'knows' how much vacation they've already taken.</p><p>Right now you have a custom tag that calculates this and it's really acting as your 'service layer', separate from any business objects, so if you simply move that into a CFC (perhaps an HRDepartment CFC since that's where many companies perform the 'service' of calculating employee vacation balance? :) then you'll be in the same situation that you're in today: namely a file that goes and gets a bunch of data and calculates a value (and stores it somewhere perhaps) - all that will have changed will be the filename extension!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728285">8</a> by todd sharp
		posted on 12/10/2010 at 2:44 AM
		</div>
		<div class="comment_text"><p>Fair point Sean.  I'd probably do the same, but I do admit I like to keep my objects as lean as possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728286">9</a> by Sean Corfield
		posted on 12/10/2010 at 2:56 AM
		</div>
		<div class="comment_text"><p>Lean code is fine but remember that Anemic Domain Model is an anti-pattern for a reason :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728287">10</a> by Raymond Camden
		posted on 12/10/2010 at 3:02 AM
		</div>
		<div class="comment_text"><p>I think Sean is dead on with the "and of course a user 'knows' how much vacation they've already taken." When it comes to deciding if a method should in some service layer or an entity, I use the logic. Would the entity expect to have knowledge or would the higher level service expect to. How much vacation time left makes sense for a user. How much vacation time across a department or a company would make sense in a service. (Ok, or maybe a company entity - but as we know - there isn't one way to do this. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728289">11</a> by Tim Garver
		posted on 12/11/2010 at 1:48 AM
		</div>
		<div class="comment_text"><p>Thank you guys for the input.</p><p>I just need to sit down and model out all the logic into usable objects.</p><p>I guess the whole reason I am doing this is because the app is going global and that means double the logic and calculations.</p><p>Right now its all hard coded, and is not maintainable by someone other than a programmer.</p><p>So i need to revise the policy's and profiles tables to accommodated all the changes. Then just encapsulate the new tables, then on the user object transform the policy and profile objects into calculate-able values and add a vacation object to the user object. <br>Or at least thats the way I think it needs to go. but I could be way off.</p><p>Thanks again all for the great points.</p><p>Happy holidays<br>Tim</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728288">12</a> by Ben B
		posted on 12/11/2010 at 3:00 AM
		</div>
		<div class="comment_text"><p>One option to consider would be the "Strategy Pattern".  <a href="http://disq.us/url?url=http%3A%2F%2Fgoo.gl%2FxBhiZ%3ASNUDXBeHFuvYjK3LmbphSdLmF4Q&amp;cuid=3321886" rel="nofollow noopener" title="http://goo.gl/xBhiZ">http://goo.gl/xBhiZ</a>  I think this could be another way to do something in the middle between an anemic domain and a very heavyweight one.</p><p>You could have a user CFC that knows which vacation profile it uses, and has a getBalance() method.  But it only has generic logic, not the logic specific to a particular vacation profile.  You'd pass a VacationProfile object to the getBalance() method and the VacationProfile object would contain the logic specific to the relevant profile.  You could do something similar with company policies, etc.</p><p>For an example (in Java) of the Strategy pattern, look at the Collections.sort() method.  <a href="http://disq.us/url?url=http%3A%2F%2Fgoo.gl%2FQWUuH%3AG6AJM-QigKGWZzax9v_fF6RPoWE&amp;cuid=3321886" rel="nofollow noopener" title="http://goo.gl/QWUuH">http://goo.gl/QWUuH</a>  You pass the sort() method a list of items to sort, as well as a Comparator object which provides the logic to determine ordering.</p><p>This approach may or may not be appropriate for your scenario -- depends on the complexity of the logic for the vacation profile and on how much each vacation profile differs from the others.  The question to ask is, "Is it saving me time and grief or creating more?"</p><p>If nothing else, it's good exercise to think about different ways to implement things.  The takeaway being that there's always more than one solution to a problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728291">13</a> by Andy Sandefer
		posted on 12/14/2010 at 1:44 AM
		</div>
		<div class="comment_text"><p>COBOL is the answer!<br>Just kidding Tim :O</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728290">14</a> by Tim Garver
		posted on 12/14/2010 at 6:05 AM
		</div>
		<div class="comment_text"><p>Ben,<br>That sounds like a good approach for my situation. Since i could have N number of VacationProfile objects.</p><p>I think in the end it will save me time, because I will only have to create the new profile object, and everything else will just work. As long as I plan out the design of the interface well enough to have room for future growth it should be great.</p><p>COBOL? :) i was thinking Pascal ha haa</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728293">15</a> by Raymond Camden
		posted on 12/14/2010 at 6:43 AM
		</div>
		<div class="comment_text"><p>Don't knock Pascal. That was my second language. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713728292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713728292">16</a> by Tim Garver
		posted on 12/14/2010 at 8:11 AM
		</div>
		<div class="comment_text"><p>Mine too Ray or at least it was 20 years ago :)</p></div>
	</div>
</div>
		