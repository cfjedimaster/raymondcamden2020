
<div class="comment" id="c_1713655198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655198">1</a> by Sean Coyne
		posted on 7/21/2006 at 12:23 AM
		</div>
		<div class="comment_text"><p>Love the Ghostbusters reference...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655209">2</a> by Raymond Camden
		posted on 7/21/2006 at 12:26 AM
		</div>
		<div class="comment_text"><p>My favorite line in that movie: "Ray, what did you do?"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655200">3</a> by Nathan Dintenfass
		posted on 7/21/2006 at 1:08 AM
		</div>
		<div class="comment_text"><p>Does it look for var scoped variables that aren't used?  That would be a great way to find the most common source of trouble I have seen -- typos in the var declaration.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655201">4</a> by Raymond Camden
		posted on 7/21/2006 at 1:19 AM
		</div>
		<div class="comment_text"><p>Well, if you typo, it would catch the unscoped one, but if you had a var x and you never use x, I don't think it would catch that. Maybe recommend it to him.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655204">5</a> by Mike Schierberl
		posted on 7/21/2006 at 1:31 AM
		</div>
		<div class="comment_text"><p>It will catch typos in the var declaration, take a look at coldspring, it caught a case where a var was declared as "funtion" and then referenced as "function".  If you take a look at the dump output you can see that I actually track which variables are "used" and "unused", but this only tracks variables that are "used" by setting.  For example, it would identify that foo was used if you specified (cfset foo = ""), but it would not identify that foo was used if you specified (cfset myfunction(argument=foo))</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655203">6</a> by TJ
		posted on 7/21/2006 at 4:32 AM
		</div>
		<div class="comment_text"><p>Dammit Ray. Everytime I think i got my code perfect you have to show me somethign that makes me go back and rewrite stuff. THANKS! (no seriously, thanks! This is a great tool!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655205">7</a> by Daniel D
		posted on 7/21/2006 at 4:37 AM
		</div>
		<div class="comment_text"><p>CFUnit also has a test that checks for Var scope.  Would love to see something like this included in CFEclipse also.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655206">8</a> by Raymond Camden
		posted on 7/21/2006 at 5:01 AM
		</div>
		<div class="comment_text"><p>Don't thank me, thank Mike. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655208">9</a> by Lola Lee Beno
		posted on 7/21/2006 at 5:20 AM
		</div>
		<div class="comment_text"><p>Yes, this is definitely quite useful and I'll be using this from now on . . . thanks, Mike!  Looking forward to seeing it rolled into CFEclipse . . .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655207">10</a> by Tom Chiverton
		posted on 7/21/2006 at 12:23 PM
		</div>
		<div class="comment_text"><p>Hurrah ! One of the reason I like the internet is because it saves me having to write stuff :-)<br>I'm off to run our code through it :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655212">11</a> by Gabriel
		posted on 7/21/2006 at 1:57 PM
		</div>
		<div class="comment_text"><p>Good post!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655216">12</a> by Gabriel
		posted on 7/21/2006 at 4:36 PM
		</div>
		<div class="comment_text"><p>Well, if you typo, it would catch the unscoped one, but if you had a var x and you never use x, I don't think it would catch that. Maybe recommend it to him.<br>I think so!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655215">13</a> by Danielle
		posted on 7/21/2006 at 8:37 PM
		</div>
		<div class="comment_text"><p>There is an online demo which uses a copy of BlogCFC as one of it's samples. It found a few false positives, but it found some real issues as well. (Fixed in the latest release!) <br>Cool!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655213">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655213">14</a> by Carl V
		posted on 7/22/2006 at 4:43 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>in regards to this var scope I do things a little different..</p><p>What about doing something like this?</p><p>I var the struct then return that in cfreturn</p><p>&lt;cffunction name="foo"&gt;</p><p>&lt;cfscript&gt;<br> var stReturn = StructNew();<br> stReturn.bSuccess = True;<br> stReturn.message = "";<br> <a href="http://disq.us/url?url=http%3A%2F%2FstReturn.data%3AJY0yngHsxDkzkjywpirydqBxb18&amp;cuid=3321886" rel="nofollow noopener" title="stReturn.data">stReturn.data</a> = "";<br> stReturn.stError = structNew();<br>&lt;/cfscript&gt;</p><p>&lt;!--- Do some query here qGetSomethingFromDatabase ---&gt;</p><p>&lt;cfscript&gt;<br> if( Not qGetSomethingFromDatabase.RecordCount )<br>  {  <br>  stReturn.bSuccess = false;<br>  stReturn.message = "Some message about no records found"<br>  }<br>   else<br>    {<br>      stReturn.bSuccess = true;<br>      <a href="http://disq.us/url?url=http%3A%2F%2FstReturn.data%3AJY0yngHsxDkzkjywpirydqBxb18&amp;cuid=3321886" rel="nofollow noopener" title="stReturn.data">stReturn.data</a> = qGetSomethingFromDatabase;<br>    }<br>&lt;/cfscript&gt;</p><p>&lt;cfreturn stReturn&gt;</p><p>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655211">15</a> by Mike Schierberl
		posted on 7/22/2006 at 7:27 PM
		</div>
		<div class="comment_text"><p>Carl-</p><p>The code example above is 90% ok.  Scoping a struct with a var statement works, in this case though my tool wouldn't pick it up because it is in cfscript.  Also, in your case you would definitely want to include the following statement as well.</p><p>var qGetSomethingFromDatabase = "";</p><p>cfquery statements create variables based on the name attribute,  and as a result could be thread unsafe.</p><p>-Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655214">16</a> by Raymond Camden
		posted on 7/23/2006 at 5:16 AM
		</div>
		<div class="comment_text"><p>Carl, I've seen other people who return structs like this. I don't care for it. I thnk you should return the data and just that. I can go into it more, but thats my opinion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655217">17</a> by Aaron Longnion
		posted on 7/26/2006 at 1:49 AM
		</div>
		<div class="comment_text"><p>Hi Ray -</p><p>Could you go into detail as to why you don't care for creating a local struct as a shortcut to make sure all the variables in your functions have a "local scope".... as in the following example, posted in various places across the internet:</p><p>&lt;cffunction name="myFunction"&gt;<br>  &lt;!--- define a local scope ---&gt;<br>  &lt;cfset var local = structnew()&gt;<br>  &lt;!--- use whatever vars we like in the local scope ---&gt;<br>  &lt;cfset local.firstvar = "Hello"&gt;<br>  &lt;cfset local.another = arraynew(1)&gt;<br>  &lt;!--- run a query without declaring the var first ---&gt;<br>  &lt;cfquery name="local.qMyQuery" datasource="blah"&gt;<br>    ...<br>  &lt;/cfquery&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655219">18</a> by Raymond Camden
		posted on 7/26/2006 at 5:50 PM
		</div>
		<div class="comment_text"><p>It isn't for any performance/security reasons, it is just my personal preference. I don't know why, but I like knowing all the variables being used inside the method. Maybe I'm anal that way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655218">19</a> by todd
		posted on 10/6/2006 at 2:13 AM
		</div>
		<div class="comment_text"><p>Here's another good reason:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.briankotek.com%2Fblog%2Findex.cfm%2F2006%2F10%2F5%2FSpecial-Cases%23c1A343DF6-C0BA-AD13-7F31C4EA83CDCF1F%3ACQ1b52awJVzf--P4sGQXJYeciFw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.briankotek.com/blog/index.cfm/2006/10/5/Special-Cases#c1A343DF6-C0BA-AD13-7F31C4EA83CDCF1F">http://www.briankotek.com/b...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F94-LOCAL-Variables-Scope-Conflicts-With-ColdFusion-Query-of-Queries.htm%3An8uXMwak_JzV6zncY8pjzyytjF4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/94-LOCAL-Variables-Scope-Conflicts-With-ColdFusion-Query-of-Queries.htm">http://www.bennadel.com/blo...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655221">20</a> by todd
		posted on 10/6/2006 at 2:19 AM
		</div>
		<div class="comment_text"><p>I should have mentioned to take note of the comments in Brian Kotek's post - that is where the discussion regarding the 'local' scope is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655220">21</a> by NonNerd
		posted on 11/19/2008 at 8:11 AM
		</div>
		<div class="comment_text"><p>Quote:</p><p>"if you forget to var scope, you will end up in big trouble. (That's right, big trouble. Human sacrifice, dogs and cats living together - mass hysteria.)"</p><p>And people wonder why computer nerds don't have girlfriends?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655223">22</a> by Raymond Camden
		posted on 11/19/2008 at 9:01 PM
		</div>
		<div class="comment_text"><p>I think someone forgot to take their Sense of Humor pill today. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655222">23</a> by Tom Chiverton
		posted on 11/19/2008 at 9:07 PM
		</div>
		<div class="comment_text"><p>"people wonder why computer nerds don't have girlfriends"<br>Worse, some of us have wives :-)</p></div>
	</div>
</div>
		