
<div class="comment" id="c_1713654216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654216">1</a> by Phillip Senn
		posted on 6/16/2006 at 1:39 AM
		</div>
		<div class="comment_text"><p>One argument we're having here is where to put validation.  One person wants to put it client side so that it happens quickly, but I want to put as much validation on the server side as possible.  Paul Nielsen states that the closer you can put your validation to the data, the better.  If you define a field as Integer, there's no way a fraction can get in there.  If you use check constraints, rules, triggers, referential integrity, unique indexes and stored procedures, that's better than relying on the ColdFusion page to do the validation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654203">2</a> by Andrew Steele
		posted on 6/16/2006 at 1:41 AM
		</div>
		<div class="comment_text"><p>"I use tabs instead of spaces. I hate spaces for tabs. Don't know why."</p><p>What's funny is the exact opposite is true for me.  I think it is because depending on the IDE being used tabs can end up being huge identations.  I like a double space syntax for each child.</p><p>Concerning child indentation do you indent your HTML tags based on their proceeding CFML tags?  Ie HTML that is inside a CFIF?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654218">3</a> by Phillip Senn
		posted on 6/16/2006 at 1:42 AM
		</div>
		<div class="comment_text"><p>So along those lines, when I have a table called OrderHeader and another table called Customer, then <br>1. OrderHeader has an autonumber field (OrderHeaderID) as its Primary Key<br>2. Customer has an autonumber field: CustomerID<br>3. Table names a singular, not plural<br>4. OrderHeaderView contains an INNER JOIN between OrderHeader and Customer (but CustomerView doesn't have a join back to OrderHeader).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654219">4</a> by Raymond Camden
		posted on 6/16/2006 at 1:43 AM
		</div>
		<div class="comment_text"><p>Andrew, if I understand you right, yes. So if line one is cfif, line two, whether it be html or CF, will be indented.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654215">5</a> by John Farrar
		posted on 6/16/2006 at 2:25 AM
		</div>
		<div class="comment_text"><p>Then there is the holy grail of scriptless or scripted code also. Some like it and some don't. In fact there are those who say they cannot understand CFScript. (Perhaps they should consider another career, lol.) Clean readable code is the goal for programming and debugging. Use sensible variable names rather than thinking like the days when we had eight letters for file names in dos and three letters for extentions. Those days tended to give us bad habits of over abreviating everything. Abreviations aren't bad, but they aren't a virtue as much now as they are just styles. Don't crimp anothers style, and don't force yours on someone else. (Unless it's a team project of course.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654220">6</a> by Nathan Strutz
		posted on 6/16/2006 at 2:38 AM
		</div>
		<div class="comment_text"><p>Ladies &amp; Gents,<br>Please remember the Coldfusion Coding Style Guide written by Sean and enforced at the former Macromedia web team.<br><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.macromedia.com%2Fwtg%2Fpublic%2Fcoding_standards%2Fcontents.html%3AkgfLm_GZzciVegGfZU0Al2KrYcc&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.macromedia.com/wtg/public/coding_standards/contents.html">http://livedocs.macromedia....</a><br>While it may not work for every team, it's a great place to get started.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654221">7</a> by Raymond Camden
		posted on 6/16/2006 at 2:39 AM
		</div>
		<div class="comment_text"><p>Very good link Nathan. I should have remembered that. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654223">8</a> by John C. Bland II
		posted on 6/16/2006 at 3:10 AM
		</div>
		<div class="comment_text"><p>I'd have to agree with all of your coding practices Ray.</p><p>- I hate spaces for indents.<br>- I have to space child tags (it is all xml, in terms of structure, to me so I enforce my xml "standards" on it)<br>- I don't like Hungarian for variable names and HATE it for databases. It really urks me because of 1 simple fact. If intColumnName becomes a varchar every little piece of code (views, stored procedures, application [whether cf or otherwise]) has to change to vchColumnName (or whatever you prefix it with). That is just annoying.</p><p>Nate, I would say that is a great resource. I don't agree with all of the guidelines (especially using underscores) but I did reference this when I was ramping up my CF skills. The biggest thing I took from it, as I remember, is the "is", "has", etc. I can't even recall what I did before implementing this. :-)</p><p>Either way...there are tons of opinions on this...thought I'd add mine. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654224">9</a> by Lola Lee Beno
		posted on 6/16/2006 at 4:59 AM
		</div>
		<div class="comment_text"><p>Well, personally, I don't like tabs and will always convert these to two spaces, or set the IDE to use spaces in place of tab and set it to 2.  The indentation is not so huge when you set it to 2 instead of 4.  And then there's consistency.  Suppose you have a few programmers who love to use 2 spaces, and others who use the tab, which may get inerpreted as 4 spaces.  What happens when code is modified over a period of time by different programmers with two different indentation preferences?  Yes, eventually, the indentation gets really funky, especially when you're bringing in a block back one indentation or indenting these further out because you've added surrounding code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654226">10</a> by Nathan D
		posted on 6/16/2006 at 5:35 AM
		</div>
		<div class="comment_text"><p>I have to comment on Phillip's comment about validation -- to validate only on the client is to open up potentially serious security problems in your application.  It's oh so easy for anyone with even modest web skills and some time on their hands to send you bad data if you rely on client-side validation, and you are "trusting" the client you are likely not doing the necessary checks to prevent SQL injection or other data corruption attacks.  A simple rule of thumb on the web is: NEVER TRUST THE CLIENT.  Unfortunately, the implication for modern application is often doing validation on both the front end and the back-end because it's certainly true that validation on the client can yield better user experience more often than not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654205">11</a> by djuggler
		posted on 6/16/2006 at 5:48 AM
		</div>
		<div class="comment_text"><p>"In the old days I used to capitalize all of my code"<br>I think we all did!</p><p>&lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Findex.cfm%2F2006%2F6%2F15%2FAsk-a-Jedi-Coding-for-Review%23cD9A279AD-BED9-C1E2-8D86FB5171D37477%3AkL0QefWnSANhTkp4cKaYzxLhEcY&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/index.cfm/2006/6/15/Ask-a-Jedi-Coding-for-Review#cD9A279AD-BED9-C1E2-8D86FB5171D37477">http://ray.camdenfamily.com...</a>"&gt;Phillip wrote&lt;/a&gt;: "One argument we're having here is where to put validation."<br>I agree with &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Findex.cfm%2F2006%2F6%2F15%2FAsk-a-Jedi-Coding-for-Review%23cDA7A5329-F034-97C0-6015373E3C3C6CA5%3AUSSWGhOF2spC0Z64mkXly2pPMUY&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/index.cfm/2006/6/15/Ask-a-Jedi-Coding-for-Review#cDA7A5329-F034-97C0-6015373E3C3C6CA5">http://ray.camdenfamily.com...</a>"&gt;Nathan&lt;/a&gt;. Big security flaw.<br>Basic rule: Client-side validation for user interface; Server-side for security. Both are required. See &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.owasp.org%2Findex.php%2FUnvalidated_Input%3AmXvcUZ0Nql7egfTHiRBNgOMsOmg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.owasp.org/index.php/Unvalidated_Input">http://www.owasp.org/index....</a>"&gt;The OWASP Top Ten A1&lt;/a&gt;. &lt;blockquote&gt;A surprising number of web applications use only client-side mechanisms to validate input. Client side validation mechanisms are easily bypassed, leaving the web application without any protection against malicious parameters. Attackers can generate their own HTTP requests using tools as simple as telnet. They do not have to pay attention to anything that the developer intended to happen on the client side. Note that client side validation is a fine idea for performance and usability, but it has no security benefit whatsoever. Server side checks are required to defend against parameter manipulation attacks. Once these are in place, client side checking can also be included to enhance the user experience for legitimate users and/or reduce the amount of invalid traffic to the server.&lt;/blockquote&gt;</p><p>Side note: When did owasp change to a wiki?! It looks horrible compared to what it used to be!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654207">12</a> by Nolan
		posted on 6/16/2006 at 6:10 AM
		</div>
		<div class="comment_text"><p>As is usually the case, I'm the odd man out here when it comes to standards and naming conventions.</p><p>I nearly always use Hungarian Notation (or some variant thereof) when writing code.  Regarding John's comment above, while swapping "intColumnName" to "vchColumnName" might be tedious a) I'd rather spend an hour doing a tedious search/replace than spend WAY more time digging through code only to find a "fooPoorlyNamed" variable (with no prefix) that was *supposed* to store ints, is somehow now being used to store character strings.  Prefixing variable names gives us an extra level of already-commented code.</p><p>...and really, if you're changing the type of data that a variable stores, THAT late in development, doesn't it really show a flaw in the app's design that maybe should have been caught earlier?  How often does the type of a variable change once the feature set on a project has been approved and signed off?</p><p>Also, in languages such as C or C++ where pointers are very common, I find "pVarName" to help my brain think about which variables are "variables holding data" and which are "variables holding just an address to something"....a concept that my brain seems to process much faster when prefixing pointer variables with "p".</p><p>Any time I hear the "but i don't want to type that many characters" excuse as to why someone uses a short/unintuitive variable name, I get disgusted. It's the same logic as above:  10 months from now "fn" will mean *nothing* to the new developer on your team, but "firstName" (or better yet strFirstName if it's a string *g*) will be that much easier to read for everyone.</p><p>Granted, part of my reasoning for these things is, it's the way some of my college instructors taught us (and we were marked down if the code wasn't self-documenting).  However I've also worked at shops where queries were named things like (true story, actual variable names I had to deal with) "KoolMoeDee", "ScoobyDoo", "theQuery", "q" and so on.  There is no reason for that kind of laziness, and it makes code that much harder to deal with for everyone.</p><p>That Macromedia Coding Guidelines document is indeed a great place to start, and I cannot recommend it enough to other CF programmers (hell, most of it is even useful for other languages as well!).</p><p>My 2 cents.</p><p>-nolan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654208">13</a> by Andrew Steele
		posted on 6/16/2006 at 6:55 AM
		</div>
		<div class="comment_text"><p>"...and really, if you're changing the type of data that a variable stores, THAT late in development, doesn't it really show a flaw in the app's design that maybe should have been caught earlier"</p><p>I would have to disagree.  Recently, I changed the type of a database variable from char to varchar.  The original database had been designed in Sybase where char often times made more sense.  As this column appeared in our adjustment_history table if we had, had to switch the column name throughout our database it would have become a major undertaking.  My point is it wasn't a bad design, initially, but the application has moved on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654209">14</a> by John C. Bland II
		posted on 6/16/2006 at 7:53 AM
		</div>
		<div class="comment_text"><p>"Regarding John's comment above, while swapping "intColumnName" to "vchColumnName" might be tedious a) I'd rather spend an hour doing a tedious search/replace than spend WAY more time digging through code only to find a "fooPoorlyNamed" variable (with no prefix) that was *supposed* to store ints, is somehow now being used to store character strings. Prefixing variable names gives us an extra level of already-commented code."</p><p>Obviously properly named variables would be used, or maybe not. As Andrew stated, your situation isn't always the case. We seriously had to change an int to a varchar after the project was done. It wasn't because of bad design. The client wanted 0's prepended to the employee id's if they didn't have 6 numbers. What did we have to change? cf_sql_integer to cf_sql_varchar in 1 cfc. No db changes, no other code changes, etc and this wasn't a small site by any means.</p><p>The majority of the time, IMO, the variable type won't matter unless you are doing some sort of evaluation on the variable (comparisons, etc). I'm speaking here regarding general output scenarios. #intMyColumn# is the same as #vchMyColumn# to cfoutput, know what I mean?</p><p>Bottom line for me, I'd rather not change every view or sproc (which could be a lot) in a database just because the client decided they wanted 0's in front of the employee id. Yes, you could script your database, find and replace, change to alter statements, and run the script but that still takes some unnecessary massaging.</p><p>Well, I guess the bottom line is we have our ways of doing things and we are sticking to them. We just don't agree as to which is easier/better. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654206">15</a> by Neil Merton
		posted on 6/19/2006 at 8:11 PM
		</div>
		<div class="comment_text"><p>Here's an interesting fact to add to the spaces vs tabs debate: If you use spaces your file size (on Windows OS) will be larger than that of the same file that uses tabs.</p><p>:¬)</p></div>
	</div>
</div>
		