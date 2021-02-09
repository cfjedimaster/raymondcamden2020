
<div class="comment" id="c_1713619022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619022">1</a> by Rob Brooks-Bilson
		posted on 7/13/2005 at 11:17 AM
		</div>
		<div class="comment_text"><p>I think the i18n people are going to have something to say about the date format (mm/dd vs. dd/mm) in the URL ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619016">2</a> by Dave Phipps
		posted on 7/13/2005 at 4:23 PM
		</div>
		<div class="comment_text"><p>I have installed and setup BlogCFC 3.8 RC and it doesn't seem to work properly in Firefox.  I am able to enter designmode and login but when clicking "Add New Entry" I get an empty popup.</p><p>In IE6 it all works perfectly.  Is there an issue with Firefox with this new version. I would hazard a guess at the problem being a session issue.</p><p>Any ideas on an otherwise great application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619017">3</a> by Raymond Camden
		posted on 7/13/2005 at 4:38 PM
		</div>
		<div class="comment_text"><p>ROB:I thought YYYY/MMMM/DD was more European than American? Normally we do M/D/Y - right? I'd say Y/M/D is less America.</p><p>DAVE: I've seen this bug before. It occurs when the code that loads the editor is the same code used by SimpleContentEditor. Look in layout.cfm and confirm you see</p><p>function launchBlogEditor(id)</p><p>if it still says lauchEditor, you are using the wrong version. The zip should NOT have that in it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619021">4</a> by Dave Phipps
		posted on 7/13/2005 at 4:50 PM
		</div>
		<div class="comment_text"><p>RAY: I see function launchBlogEditor(id) in both the layout.cfm where the javascript code is located and in the index.cfm where the actual call to the function happens.</p><p>I used the code from this post (<a href="http://disq.us/url?url=http%3A%2F%2Fblogbeta.zip%3ATs2ljPaLcPknrdYhxFWDJRsRqmg&amp;cuid=3321886" rel="nofollow noopener" title="blogbeta.zip">blogbeta.zip</a>).</p><p>If it was this bug then why would it work in IE6 but not firefox.</p><p>Could it be that the session is not carrying over to the new window in firefox and so this code is happening in editor.cfm:</p><p>&lt;cfif not isUserInRole("admin")&gt;<br>	&lt;cfabort&gt;<br>&lt;/cfif&gt;</p><p>Any ideas - would hate to have use IE!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619020">5</a> by Raymond Camden
		posted on 7/13/2005 at 5:00 PM
		</div>
		<div class="comment_text"><p>Hmm. Modify your code so that before the cfabort, you say something. If that shows up then, let me know. I'm using the same code here, and in Firefox, and it runs fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619018">6</a> by Dave Phipps
		posted on 7/13/2005 at 5:09 PM
		</div>
		<div class="comment_text"><p>Hurray! Problem solved.  It was a session issue of sorts!!  In my blog.ini I had the url set to: blogURL=http://localhost/blog/index.cfm</p><p>I was then calling the page from 127.0.0.1 and firefox is a lot more sensitive than IE.</p><p>I changed the url to:<br>blogURL=http://127.0.0.1/blog/index.cfm</p><p>and all is now working - it is always the simplest things that I miss.</p><p>Thanks for your help. - now I just need some content!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619023">7</a> by iamanut
		posted on 7/13/2005 at 9:11 PM
		</div>
		<div class="comment_text"><p>Does BlogCFC support multiple users posting to the same blog under different usernames?  Kind of like a team blog?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619019">8</a> by Raymond Camden
		posted on 7/13/2005 at 9:22 PM
		</div>
		<div class="comment_text"><p>Yes, and has for a while. THe docs cover it. You can use it in the 'real' release or the RC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619027">9</a> by emmet
		posted on 7/14/2005 at 10:00 PM
		</div>
		<div class="comment_text"><p>Damn... I was hoping to submit some css suggestions.  I've almost got a complete skin manager drop in for it with more than just nifty curves support.  I'll see how this new one affects it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619031">10</a> by johnb
		posted on 7/14/2005 at 10:07 PM
		</div>
		<div class="comment_text"><p>I can't get the SES URLs to work - they display fine but they don't take me anywhere nor if i paste them in the address bar - am i missing something?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619033">11</a> by Raymond Camden
		posted on 7/14/2005 at 10:15 PM
		</div>
		<div class="comment_text"><p>John - do you mean MY blog, or your blog? If your blog, pls send me the URL (and tell me your web server).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619030">12</a> by johnb
		posted on 7/14/2005 at 10:18 PM
		</div>
		<div class="comment_text"><p>my bad - i'm running it locally to test stuff...Windows XP, IIS5.1, CFMX7/Jrun4 - not much help huh?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619032">13</a> by Raymond Camden
		posted on 7/14/2005 at 10:28 PM
		</div>
		<div class="comment_text"><p>John - email me offlist, as it may get more complex. Please email me a sample link. Also tell me this. When you click, does NOTHING happen? Does the browser reload but show the same as the default?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619029">14</a> by sebastian mork
		posted on 7/16/2005 at 6:57 PM
		</div>
		<div class="comment_text"><p>Hi,<br>I saw the that the locale is stored in application-scope, it's set when the app is initialized and read from the ini-file. so it's possible to change the lang/locale for the app but I've to change this behavior (eg storing locale in session) when I want to run the blog in two languages, so that users can select their lang. hmm.. did anybody do that already?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619034">15</a> by Raymond Camden
		posted on 7/18/2005 at 6:21 PM
		</div>
		<div class="comment_text"><p>No way to do that "as is" - however - you could kind of cheat. So - here goes an idea - a bit free form - so take it with a grain of salt. Let's say you have the user's desired locale in a session var. You can actually make the application.cfm have 2 different application names. Oh shoot, wait, scratch that. Assume locale is based on a cookie value.  You would modify the application name to include the cookie value (be sure to default to one lang). This means then you are running 2 different applications. Have the blog point to 2 different blogs in the ini file, one using one language and one the other. However, both blogs use the same database.</p><p>So - they share the same data, but they are two different named blogs using different locale values. Not even a hack per se.</p><p>Shoot - you can _skip_ the hack portion if you want and just run 2 blog installs. This means different URLs though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619038">16</a> by Mark S.
		posted on 7/20/2005 at 4:49 AM
		</div>
		<div class="comment_text"><p>I see that someone else posed the question about multiple users, and I have gone over the documentation, but I still can seem to get it to work.  I've changed the blog.ini file where the users entry is to look something similar to this:  users= admin, name1, name2 (with name1 and name2 being in the tblusers), just like the admin account is, but when I try and login it keeps reloading the login page, or resetting the login page.  I have two blogs setup, and have altered the ini file to accomodate both, everything is working great except trying to get multiple users to login.  I also tried to leave the users equal to nothing, or not listing any users and try to allow all users access and this has the same results, with the login form resetting itself.  Any help would be greatly appreciated.  Thanks in Advance.  (CFPadawan)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619035">17</a> by Raymond Camden
		posted on 7/20/2005 at 6:24 AM
		</div>
		<div class="comment_text"><p>Mark: If you really did users=admin, name1, name2 with a space between name1 and name2, then that won't work. The names must not have ANY spaces between them. You should have: users=admin,name1,name2. Also be sure to remember that EVERYTIME you mod the ini file, you must hit your blog with ?reinit=1 in the URL. This refreshes the cache.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619037">18</a> by Yuri Pallada
		posted on 7/21/2005 at 6:54 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I was testing your latest Beta release of the Blog. I set up al the settings I needed to do, created a dsn and put the sql tables and data in the database. <br>In the coldfusion admin I've created a mapping to the org folder, so that should all work fine.</p><p>But, I keep getting an error 'data source not found'. This occurs on line 586 of the blog.cfc.</p><p>I then tried to replace all of the #dsn# and #instance.dsn# strings by the string of the actual dsn,<br>but that still didn't help.</p><p>Maybe you can say what the problem is?<br>thnx!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619041">19</a> by Raymond Camden
		posted on 7/21/2005 at 6:57 PM
		</div>
		<div class="comment_text"><p>You got hit by the cache. First, restore the CFC to the code from the zip. Then hit your blog with yoururl/index.cfm?reinit=1.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619036">20</a> by Raymond Camden
		posted on 7/21/2005 at 6:58 PM
		</div>
		<div class="comment_text"><p>Of course, also ensure that if your DSN is "foo", that foo is valid. You do this in the CF Admin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619040">21</a> by Yuri Pallada
		posted on 7/21/2005 at 6:58 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I was testing your latest Beta release of the Blog. I set up al the settings I needed to do, created a dsn and put the sql tables and data in the database. <br>In the coldfusion admin I've created a mapping to the org folder, so that should all work fine.</p><p>But, I keep getting an error 'data source not found'. This occurs on line 586 of the blog.cfc.</p><p>I then tried to replace all of the #dsn# and #instance.dsn# strings by the string of the actual dsn,<br>but that still didn't help.</p><p>Maybe you can say what the problem is?<br>thnx!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619039">22</a> by Lee Pak
		posted on 7/21/2005 at 8:57 PM
		</div>
		<div class="comment_text"><p>I have tried Korean and works good. But in RSS feed instead of Korean chars I got question marks.</p><p>Any idea?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619042">23</a> by Raymond Camden
		posted on 7/21/2005 at 9:02 PM
		</div>
		<div class="comment_text"><p>Lee: This is the main issue holding up the final release. I have a POTENTIAL fix - please read POTENTIAL. I'm working w/ Paul Hastings. Anyway, try adding this line to the TOP of rss.cfm:</p><p>&lt;cfprocessingdirective pageencoding="utf-8"&gt;</p><p>If this helps, let me know. Btw - my kids are Korean. Small world, eh. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619043">24</a> by Raymond Camden
		posted on 7/21/2005 at 9:09 PM
		</div>
		<div class="comment_text"><p>Lee - my comment to you wasn't delivered. I do hope you check the thread again. I'll try to dig up another email address for you.</p></div>
	</div>
</div>
		