
<div class="comment" id="c_1713667173">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667173">1</a> by Robert Owen
		posted on 6/14/2007 at 5:10 PM
		</div>
		<div class="comment_text"><p>Getting this error on the online demo:</p><p> Variable HAPPYSTATE is undefined.</p><p>The error occurred in C:\Websites\73172bkj\Index\CamdenFamily\Tamagotchi\Index.cfm: line 96</p><p>94 : 			&lt;/cfloop&gt;<br>95 : 			&lt;/ul&gt;<br>96 : 			&lt;cfif HappyState GT 0&gt;<br>97 : 				&lt;cfset CreatureStateQry = Session.CreatureStateObj.View2(Session.CreatureID,session.HungerStatID)&gt;<br>98 : 				&lt;cfif CreatureStateQry.CreatureState LE CreatureStateQry.MaxState&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667167">2</a> by Raymond Camden
		posted on 6/14/2007 at 5:13 PM
		</div>
		<div class="comment_text"><p>Yep, I pinged him. For now I'd just download. Even if you don't have time to setup the app, I'd look at the code. The more I think about it the more impressed I get.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667175">3</a> by Robert Owen
		posted on 6/14/2007 at 5:15 PM
		</div>
		<div class="comment_text"><p>will do</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667174">4</a> by Phillip Senn
		posted on 6/14/2007 at 6:04 PM
		</div>
		<div class="comment_text"><p>Well THAT was embarrassing!<br>I assumed there would only be one creature, for the sake of not having to write a login script.<br>So when someone (naturally) added their own creature, it threw an error.<br>Sorry 'bout that.<br>I think I should take the time to make it multiplayer and send the zip to Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667185">5</a> by Scott Krebs
		posted on 6/15/2007 at 2:50 AM
		</div>
		<div class="comment_text"><p>Something that never really used to be a problem but is these days is the cfif bit of code that you like Ray (the first code snippet you show above). It makes the assumption that cgi.HTTP_USER_AGENT exists, and these days that's not always the case. Legitimate users running certain versions of, for example, Norton have the ability to suppress reporting of HTTP_USER_AGENT. I can't even count the number of "Error resolving parameter HTTP_USER_AGENT" I've seen in error logs lately. People, possibly potential customers, are unable to use sites because the developer(s) made the *assumption*  that something, that cgi var in this case, would exist when it does not (nor does it say in any spec that it has to). There's no easy answer to this, plenty of bots don't report it but now legit users aren't reporting it to the web server either. One can avoid a CF error by cfparam'ing cgi.HTTP_USER_AGENT to "", but the user still wouldn't be allowed to use the site given the code shown.</p><p>I bring this up because I had to fix a customer's site on Monday that had this exact problem - a customer of one of our hosting customers tried to do some work shopping from home on Sunday night (it's a persistent, multiple cart system for schools to order and re-order supplies) and was met with:</p><p>An error occurred while evaluating the expression:</p><p>#HTTP_USER_AGENT#</p><p>Error near line 232, column 7.<br>--------------------------------------------------------------------------------</p><p>Error resolving parameter HTTP_USER_AGENT</p><p>because the original developer of the code had made that assumption. FWIW I also see this problem with cgi.HTTP_REFERER on occasion too, and I'm sure there are others. Just something to keep in mind when writing code, you don't want to be unintentionally losing customers...</p><p>btw - Ray, this must be on the new server now? Your site is orders of magnitude faster for me today. Or is it just that it's not running that slow Kontera stuff right now? Anyway, I like it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667184">6</a> by Raymond Camden
		posted on 6/15/2007 at 2:59 AM
		</div>
		<div class="comment_text"><p>This is the first new box. I am going to be moving again to an even faster box. In the past my slow downs were: old box + lots of JS code here. I have a new box now - and CF8 - and I still have lots of JS, but the server side stuff screams now. And will only get faster on my new box.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667179">7</a> by Phillip Senn
		posted on 6/16/2007 at 12:32 AM
		</div>
		<div class="comment_text"><p>With the issue of hardcoding, I wrote the original "game" as a showpiece for database normalization.<br>But after seeing how tortured the cf code was in order to determine what action affected what state, I decided to simplify the ColdFusion part and hardcode some of it.<br>I think I had in the back of my mind an article about how we sometimes make things overly complex by softcoding everything.</p><p>Well, anyway....<br>Thanks Ray, for the opportunity and the review.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667166">8</a> by Scott A. Wimmer
		posted on 6/17/2007 at 12:54 AM
		</div>
		<div class="comment_text"><p>I am going to try and implement his cfc techniques. I too tend to just write on the fly and when it is time to refine data calls, I have to run through and find all instances of the queries.</p><p>Hats off to Phil.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667170">9</a> by Scott Stevens
		posted on 6/19/2007 at 1:47 AM
		</div>
		<div class="comment_text"><p>Nice work Phillip.  In true programmer fashion, you put some solid work in on the code side, and made the interface very simple.  I liked his usage of cfc's and will be experimenting with some of his code on my projects in the near future.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713667169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713667169">10</a> by Ryan Hartwich
		posted on 6/19/2007 at 8:28 AM
		</div>
		<div class="comment_text"><p>CFC usage - Good use of CFCs, including the use of an error message (database.cfc)</p><p>Style - I liked the use of capitalizations in the variable names, indentions, CFCs, queryparams, etc.  I also liked how you separated the javascript into a separate file for ConfirmDelete.js.  I liked your use of cftry/catch.</p><p>Database - great use of stored procedures.  It allows for extra security and separates your code from the database a bit more than most people tend to do.  The down side to this is that your relatively simple application is now bonded to MS SQL.  Of course, changing to another database would be a bit harder with stored procedures instead of simple inserts/updates.  Having the majority of changes in a few files is nice though.</p><p>Select * - it would be preferable if you wrote out the column names in a select instead of using a *.</p><p>Good job!</p><p>--note, I haven't examined the other 9 entries yet--</p></div>
	</div>
</div>
		