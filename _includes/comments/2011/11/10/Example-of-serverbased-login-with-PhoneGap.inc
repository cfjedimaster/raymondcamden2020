
<div class="comment" id="c_1713736368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736368">1</a> by Aaron
		posted on 11/10/2011 at 8:49 PM
		</div>
		<div class="comment_text"><p>Ray what's up with the "var form" variable you've defined and sprinkle into the jQuery selectors? I'm not following what that is accomplishing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736375">2</a> by Raymond Camden
		posted on 11/10/2011 at 8:51 PM
		</div>
		<div class="comment_text"><p>I'm just caching the selector. When I use it for u, p I'm saying, "Find me this, but search WITHIN this earlier selection." Just helps keep it a bit safer I think.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736376">3</a> by Aaron
		posted on 11/10/2011 at 9:14 PM
		</div>
		<div class="comment_text"><p>OK I get what you're doing but I dont think you need two IDs in your selector. Just var u = $("#username") would suffice rather than creating the unnecessary form variable which amounts to var u = $("#loginForm #username"). It's supposedly faster to use just the one ID and it gives the added bonus of ridding those form variables you declare in each function.</p><p>My original confusion was that I hadn't used that syntax before - $("#username", form) - which looks like it would have its advantages if you were using class names rather than IDs to target your username and password elements, which you may very well do in some situations.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736378">4</a> by Raymond Camden
		posted on 11/10/2011 at 9:16 PM
		</div>
		<div class="comment_text"><p>In jQuery Mobile, new pages are added to the DOM. If I - mistakenly - added another form with the same IDs, then there would be a conflict. So by saying, "Match a, inside b", it feels more secure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736374">5</a> by Aaron
		posted on 11/10/2011 at 9:16 PM
		</div>
		<div class="comment_text"><p>And to conclude, I think you're right it is safer potentially if you had multiple elements with the ID "#username". So I'll grant you that. Consider using find() to do what you're attempting as in:</p><p>var form = $("#loginForm");<br>var u = form.find("#username");</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736379">6</a> by blackjk
		posted on 11/10/2011 at 9:20 PM
		</div>
		<div class="comment_text"><p>Wouldn't it be better to move your script tag to just below the body and then cache the selectors like so? Seems more readable than sprinkling the same cached selectors in multiple function calls and could easily be added to a closure w/ module pattern to reduce the use of globals.</p><p>var $form = $("#loginForm"),<br>     $username = $("#username"),<br>     $password = $("#password"),<br>     $submitButton = $("#submitButton");</p><p>Also, csslint would complain about multiple id's in selectors.  Ex. #loginForm #username.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736377">7</a> by Dan G. Switzer, II
		posted on 11/10/2011 at 9:52 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>You can use my Field Plug-in to make it easier to get form field values. There's a formHash() method which will return all the fields in a form as a hash/struct. By default it also hashes multiple values as a comma separated values--essentially emulating the way CF would see the data if the form was submitted to the server.</p><p>So, instead of having to grab the value for each field, you can just grab all the fields in a form.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.pengoworks.com%2Fworkshop%2Fjquery%2Ffield%2Ffield.plugin.htm%3Ad-CrSpPqcMpLd5MPL6XdQCoSgS8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.pengoworks.com/workshop/jquery/field/field.plugin.htm">http://www.pengoworks.com/w...</a></p><p>There's also a ton of other stuff you can do--including passing in a hash/struct to formHash() to fill in a form. There's many other helpers as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736390">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736390">8</a> by Raymond Camden
		posted on 11/10/2011 at 9:57 PM
		</div>
		<div class="comment_text"><p>@blackjk: I could see that too. jQuery provides way too many ways to do things. ;)</p><p>@Dan: I've not had trouble w/ forms like that before... except in terms of checkboxes/radio fields, where I've had to do my own logic. Next time I need something like that I'll try to remember it. But you have to agree that would be a bit overkill for just grabbing 2 fields. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736389">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736389">9</a> by Igor
		posted on 11/11/2011 at 9:27 AM
		</div>
		<div class="comment_text"><p>...<br>if(u != '' &amp;&amp; p!= '') {<br>...<br>	    	$("#submitButton").removeAttr("disabled");<br>}else{<br>	    	navigator.notification.alert("You must enter a username and password", function() {});<br>	    	$("#submitButton").removeAttr("disabled");<br>}<br>	return false;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736391">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736391">10</a> by Raymond Camden
		posted on 11/11/2011 at 11:37 AM
		</div>
		<div class="comment_text"><p>Um.... were you trying to say something Igor?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736387">11</a> by Igor
		posted on 11/11/2011 at 11:39 AM
		</div>
		<div class="comment_text"><p>The code of the article are not taken into account when the option the user enters a username and password - the button does not stay active (it is disabled until the conditions)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736388">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736388">12</a> by Raymond Camden
		posted on 11/11/2011 at 7:39 PM
		</div>
		<div class="comment_text"><p>Ah, great point Igor. I'm going to edit now. Your mod also adds a message to make it clear they need to enter stuff. I like that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736393">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736393">13</a> by Dan G. Switzer, II
		posted on 11/11/2011 at 7:59 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>But how many projects do you work on where you'll only ever need to grab the value for 2 form fields? :)</p><p>Seriously though, I mentioned it more because most forms become more complex and working in logic for non-text fields can become much more complex, so there's a huge advantage in using code that will automate everything for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736392">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736392">14</a> by Raymond Camden
		posted on 11/11/2011 at 8:00 PM
		</div>
		<div class="comment_text"><p>I'd argue (not because it is helpful, but because I want to argue*) that a complex form may not make sense on a mobile device.</p><p>* Being honest. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736394">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736394">15</a> by steve
		posted on 11/14/2011 at 9:37 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>Thanks for the demo!  I've been retooling it a little and have 1 quick question.  After the user has been authenticated and you come back to the application, is there anyway to supress the android prompt of Confirm: " Do you want the browser to remember the password" - Not Now, OK, Never"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736395">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736395">16</a> by Raymond Camden
		posted on 11/14/2011 at 9:48 PM
		</div>
		<div class="comment_text"><p>@steve: I haven't tried this, but check out the recommendation here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F32369%2Fdisable-browser-save-password-functionality%3ADiVIzCWAtQkyn7_Jscc1C4Jlkd0&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/32369/disable-browser-save-password-functionality">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736396">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736396">17</a> by Vanitas
		posted on 11/20/2011 at 8:21 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>thanks for sharing this. <br>can you upload a sample of this? <br>or a sample how the json should look like?</p><p>V.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736397">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736397">18</a> by Raymond Camden
		posted on 11/21/2011 at 1:46 AM
		</div>
		<div class="comment_text"><p>I'm confused - I did share the code. As for the JSON, it is just a boolean value, so it isn't that complex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736401">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736401">19</a> by Jim O&amp;aposKeefe
		posted on 12/29/2011 at 3:41 AM
		</div>
		<div class="comment_text"><p>So Ray, what's enforcing the security? is it just that in the compiled native app there is no way to get to some.html?  Or is my coldfusion session-based security still usable with phonegap?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736406">20</a> by Raymond Camden
		posted on 12/29/2011 at 3:43 AM
		</div>
		<div class="comment_text"><p>CF handles the authentication. If you decrypt the PhoneGap app, you see a ajax call to some CFC, noething more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736408">21</a> by trikarai
		posted on 1/4/2012 at 12:22 PM
		</div>
		<div class="comment_text"><p>can i use php on the server side, could you give some sample ??</p><p>.........<br>if(u != '' &amp;&amp; p!= '') {<br>        $.post("<a href="http://disq.us/url?url=http%3A%2F%2Fwww.sample.com%2Flogin.php%3AFChEtiAvNe-UEGSeM9Xo0YDvUVg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.sample.com/login.php">http://www.sample.com/login...</a>", {username:u,password:p}, function(res) {<br>            if(res == true) {<br>                //store<br>...........</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736405">22</a> by Raymond Camden
		posted on 1/4/2012 at 5:13 PM
		</div>
		<div class="comment_text"><p>You can use _any_ server side language. But I can't write the PHP for you - I don't know the language.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736407">23</a> by trikarai
		posted on 1/5/2012 at 9:29 AM
		</div>
		<div class="comment_text"><p>can you show your server side source ?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2F2011%2Fnov%2F10%2Fservice.cfc%3Ar2xpKU5VT9aUBaNq-YU7og_d50I&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/2011/nov/10/service.cfc">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736414">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736414">24</a> by Raymond Camden
		posted on 1/5/2012 at 5:47 PM
		</div>
		<div class="comment_text"><p>Sure:</p><p>component {</p><p>	remote boolean function login(string username, string password) {<br>		if(arguments.username == "admin" &amp;&amp; arguments.password == "password") {<br>			session.loggedin = true;<br>			return true;<br>		} else return false;<br>	}</p><p>	remote numeric function randomNumber() {<br>		return randRange(1,10000);<br>	}</p><p>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736410">25</a> by Raymond Camden
		posted on 1/5/2012 at 5:48 PM
		</div>
		<div class="comment_text"><p>In case it isn't obvious, this code isn't meant to be used as is. It's a simple static username/password. Normally this would be a database query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736409">26</a> by Erhan H.
		posted on 1/17/2012 at 11:18 AM
		</div>
		<div class="comment_text"><p>Hi. Is it working with phonegap 1.3.0 ?</p><p>I tried but could not be succeed :(.</p><p>There is no notification nothing. Only page changes and goes to same page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736411">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736411">27</a> by Raymond Camden
		posted on 1/17/2012 at 7:03 PM
		</div>
		<div class="comment_text"><p>Nothing here should stop working in the latest PhoneGap. Have you done any debugging? For example, you say the page changes. I assume you mean that it goes right away to the logged in page. That only happens if you have logged in before. Looking at line 9 in the final code above, add, right after, a simple alert:</p><p>alert("I'm auto logging in.");</p><p>If that runs, it means you logged in once and it remembered it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736413">28</a> by Erhan H.
		posted on 1/17/2012 at 9:07 PM
		</div>
		<div class="comment_text"><p>Thanks for your reply. But i tested it. Yes in the page first loading, checkPreAuth() function is fired.</p><p>But handleLogin ()  is not fired.</p><p>? 've changed the code and test with Firefox, Chrome before build for Phone but alert is not shown :(  :</p><p>function handleLogin() {<br>	alert("Tested HANDLE Login");<br>    var form = $("#loginForm");    <br>    //disable the button so we can't resubmit while we wait<br>    $("#submitButton",form).attr("disabled","disabled");<br>    var u = $("#username", form).val();</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736412">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736412">29</a> by Raymond Camden
		posted on 1/17/2012 at 9:44 PM
		</div>
		<div class="comment_text"><p>You tested with Firefox and Chrome? You do know that that desktop browsers cannot make AJAX requests to other domains, right? Did you check your console for error messages? You would have seen one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736419">30</a> by Erhan H.
		posted on 1/17/2012 at 9:48 PM
		</div>
		<div class="comment_text"><p>Hi again. I made a mistake while importing js files.</p><p>Now it works fine :) Good job Raymond. Also which modification can we do to see Loading animation while waiting json response ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736417">31</a> by Raymond Camden
		posted on 1/17/2012 at 9:50 PM
		</div>
		<div class="comment_text"><p>Assume we have a new div, called status.</p><p>Before the post, do</p><p>$("#status").html("Stand back, doing stuff...");</p><p>In the post result handler, clear it:</p><p>$("#status").html("");</p><p>Obviously you can change the message to your liking.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736415">32</a> by Erhan H.
		posted on 1/17/2012 at 11:31 PM
		</div>
		<div class="comment_text"><p>thanks Raymond,</p><p>also some friends have asked your service file.</p><p>Here is my  .PHP service file that turns boolean value with JSON header</p><p>	      header('Cache-Control: no-cache, must-revalidate');<br>	      header('Expires: Mon, 26 Jul 1997 05:00:00 GMT');<br>		  header('Content-type: application/json');</p><p>	      $u = strip_tags($_POST['username']);<br>		  $p = strip_tags($_POST['password']);</p><p>		  $con = mysql_connect("localhost","db_user","db_pass");<br>		  if (!$con)<br>		  {<br>		  die('Could not connect: ' . mysql_error());<br>		  }<br>				mysql_select_db ("your_database_name");<br>				$sorgu="SELECT * from db_users WHERE username ='$u' AND password ='$p' ";<br>				$ssql_select = mysql_query($sorgu)or die(mysql_error());<br>				if(mysql_num_rows($ssql_select)&gt;0)<br>				{<br>					echo 'true';<br>				}else{<br>					echo 'false'; <br>				}		<br>				mysql_close($con);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736420">33</a> by Erhan H.
		posted on 1/21/2012 at 10:45 AM
		</div>
		<div class="comment_text"><p>Hi Raymond again,</p><p>Now i have another question. We are making a post with the code and check the response data.</p><p>            if(res == true) {<br>                //store<br>                window.localStorage["username"] = u;<br>                window.localStorage["password"] = p;</p><p>Also i want to store USER_ID value from the users table. But how can we read it from JSON. Our response code is just true or false. Can we change it like  true:12311?</p><p>12311 is USERID return value from service</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736416">34</a> by Raymond Camden
		posted on 1/21/2012 at 7:26 PM
		</div>
		<div class="comment_text"><p>Eric - JSON can be used to represent many forms of data. In my case, I returned just a boolean value. You could also JSON encode a structure as well. So you could have a structure that looks like this:</p><p>(Note - the code below isn't exactly real JSON, it's just a representation. You would be responsible to encode it in PHP.)</p><p>On failure:</p><p>{ result="false" }</p><p>On success:</p><p>{ result="true", userid=4}  (4 being the userid and dynamic)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736418">35</a> by Erhan H.
		posted on 1/22/2012 at 2:07 AM
		</div>
		<div class="comment_text"><p>Hi Raymond Thanks for your reply  now i change my service file now the json response is like that</p><p>{"result":"true","memberId":null}</p><p>How should i change this part of code:</p><p>$.post("<a href="http://disq.us/url?url=http%3A%2F%2Fadasdas.com%2Floginservice.php%3AMxQglp7-XqLJG1JDPz2wMHwu_rc&amp;cuid=3321886" rel="nofollow noopener" title="http://adasdas.com/loginservice.php">http://adasdas.com/loginser...</a>", {username:u,password:p}, function(res) {<br>            if(res == true) {<br>                //store<br>                window.localStorage["username"] = u;<br>                window.localStorage["password"] = p;</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736421">36</a> by Erhan H.
		posted on 1/22/2012 at 3:02 AM
		</div>
		<div class="comment_text"><p>Hi again. I've made this</p><p>if(res.result == 'true') {<br>                //store<br>                window.localStorage["username"] = u;<br>                window.localStorage["password"] = p;</p><p>;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736422">37</a> by Raymond Camden
		posted on 1/22/2012 at 8:43 PM
		</div>
		<div class="comment_text"><p>Cool, glad you got it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736425">38</a> by Niels V
		posted on 1/25/2012 at 1:53 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I like your blog ! Just found it when I was searching for a server side based android login (and wauw this was acactly what I was searching for!) in a few minutes, with some tweaks I got it working on my android device. The part I changed was the local storage:</p><p>function checkPreAuth() {<br>    var form = $("#loginForm");<br>	if(typeof(window.localStorage) != 'undefined'){ //HERE IS THE CRASH!<br>    	if(window.localStorage["username"] != undefined &amp;&amp; window.localStorage["password"] != undefined) {<br>    	    $("#username", form).val(window.localStorage["username"]);<br>    		$("#password", form).val(window.localStorage["password"]);<br>			handleLogin();<br>		} <br>		else{ <br>			//alert("ERROR!"); <br>		}     <br>    }<br>}</p><p>It checks if any then exites then it will create and and go to the handLogin, if succeded. els it trows an error (wich is commented out now)</p><p>So after this (GREAT!) script was working in android I tought lets " copy past "  it to my IOS device (I'm developing it for the both of them)<br>But this isn't going for smooth.... it crashes on that part.... I changed it back what you had but this also didn't work. I can't seem to find the issue, meby you can? (its commented where it crashes, without an error....)</p><p>Hope you can help me and I'm looking forward to the other blog posts and your help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736423">39</a> by Raymond Camden
		posted on 1/25/2012 at 7:20 PM
		</div>
		<div class="comment_text"><p>I'm still learning the iOS side of PhoneGap myself, but XCode has a debug type view where you _should_ see an error message. Can you try looking there?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736424">40</a> by Ben
		posted on 1/28/2012 at 1:41 AM
		</div>
		<div class="comment_text"><p>This is great info. Niels V please do report on what error you received if you were able to see the message in the debug type view!<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736427">41</a> by Niels V
		posted on 1/28/2012 at 2:24 AM
		</div>
		<div class="comment_text"><p>IT was quite simple. Just used the ios phonegap js file ! And this works great .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736428">42</a> by Raymond Camden
		posted on 1/28/2012 at 3:08 AM
		</div>
		<div class="comment_text"><p>Ohhhh lord - I shoulda known that. Yeah, I believe the PG guys are working on having _one_ JS file for all.</p><p>Next time I blog on this and share the code, I'll remind folks to replace the phonegap.js file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736429">43</a> by Niels V
		posted on 1/28/2012 at 3:25 AM
		</div>
		<div class="comment_text"><p>Yea that would be nice, also add that jquery 1.7.x is the minimum that you'll need to get this working, first I tried 1.6.4 (I just like that version, stable and clean) but post and other functions wheren't in that one, took me some time to figure that out lol</p><p>neither the less, great post and thanks for every thing!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736431">44</a> by Raymond Camden
		posted on 1/28/2012 at 3:29 AM
		</div>
		<div class="comment_text"><p>post is _definitely_ in 1.6 - shoot, it's been around for a long time. I can say that jQuery Mobile doesn't support 1.7 now- they plan to in the future. You may want to watch out for that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736430">45</a> by Niels V
		posted on 1/28/2012 at 3:44 AM
		</div>
		<div class="comment_text"><p>Are you sure? Couse after upgrading to 1.7.1 it worked for me?</p><p>Well anyhow, it's working like a charm now so, so far 1.7.x isn't giving me any problems ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736432">46</a> by Raymond Camden
		posted on 1/28/2012 at 3:47 AM
		</div>
		<div class="comment_text"><p>I think it's more an issue of support. I'm thinking maybe they found a few edge cases where it didn't work right, so they just stuck with saying 1.6.4 was what they support.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736433">47</a> by Craig
		posted on 3/12/2012 at 1:32 AM
		</div>
		<div class="comment_text"><p>Hello, great work-up here.  Does anyone have a complete working sample with the .php db file?  I've been trying to keep up with the comments here and thank everyone for the input as this is relatively new to me.  Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736436">48</a> by Raymond Camden
		posted on 3/12/2012 at 1:50 AM
		</div>
		<div class="comment_text"><p>Well, to be clear, the front end stuff may be new to you, but the server side stuff should be simple, right? Or are you new to PHP too?</p><p>If anyone on this thread knows PHP, I'd gladly accept a comment pointing to a pastebin demo. I'll even edit the post to put a note at the end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736437">49</a> by Jason
		posted on 3/28/2012 at 1:04 AM
		</div>
		<div class="comment_text"><p>I noticed that you set a session on the server side of your script.  Are you able to access those server side session variables from the app? if yes, How?  Does working with server session with a phonegap app on a device act the same way as if you were on a regular website?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736438">50</a> by Raymond Camden
		posted on 3/28/2012 at 1:16 AM
		</div>
		<div class="comment_text"><p>Technically the answer is no. You can't read server variables from your client side code. You can - of course - expose those values via services.</p><p>And yes - it works the same. So AJAX calls can pick up, and reuse cookies, so cookie-based sessions "just work".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736435">51</a> by jason
		posted on 3/28/2012 at 1:48 AM
		</div>
		<div class="comment_text"><p>Raymond,<br>Thanks for your reply.   If I store values in local storage and close the app, will those local storage values go away?  Or do I have to manually remove them?  if so, how?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736444">52</a> by Raymond Camden
		posted on 3/28/2012 at 1:51 AM
		</div>
		<div class="comment_text"><p>localStorage values stick. If you want to remove them, use the removeItem function:</p><p>localStorage.removeItem("somekey");</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736439">53</a> by jason
		posted on 3/28/2012 at 2:35 AM
		</div>
		<div class="comment_text"><p>Thanks again Raymond,<br>In the last part of your article you mention about the security of local storage.  Here is a link to clear it up. <br><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F3718349%2Fhtml5-localstorage-security%3AGJ_7XY_i98uIq8cdZmaXhpqkKGo&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/3718349/html5-localstorage-security">http://stackoverflow.com/qu...</a></p><p>This would suggest putting the variables in local storage not a good idea if they are sensitive, like a password.  This also assumes that the person has access to the computer.  Now since this is meant to be on a device like a phone or tablet then this may not be a concern.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736441">54</a> by Raymond Camden
		posted on 3/28/2012 at 6:47 AM
		</div>
		<div class="comment_text"><p>Yeah, I'd probably avoid passwords in localStorage, but on a mobile device I'd say it's more secure than a desktop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736440">55</a> by Quentin
		posted on 4/6/2012 at 12:26 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I can't make this work on iOs, despite the comment from Niels. Any idea ?  What does he mean by "Just used the ios phonegap js file" ?</p><p>Thanks,<br>Quentin</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736442">56</a> by Raymond Camden
		posted on 4/6/2012 at 12:28 AM
		</div>
		<div class="comment_text"><p>Currently, the phonegap.js file is platform specific. So in iOS, you have to ensure you copy the iOS version of the phonegap.js file. Does that make sense now?</p><p>One of the things that PG team is working on is moving to ONE file for all the platforms (one JS file).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736446">57</a> by Quentin
		posted on 4/6/2012 at 12:36 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>Thanks for the swift answer! Well that's ok then, I have a phonegap-1.2.0.js file in my project, so that's not it.</p><p>I can't find what's going wrong, no errors when running it in the simulator but the button doesn't do anything.</p><p>Here's my code, if you -or someone- has some time to waste to quickly check on it : <a href="http://disq.us/url?url=http%3A%2F%2Fpastie.org%2F3735130%3A4ZBUC8lzwxp4iYeY4ZUaQtAAquU&amp;cuid=3321886" rel="nofollow noopener" title="http://pastie.org/3735130">http://pastie.org/3735130</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736443">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736443">58</a> by Raymond Camden
		posted on 4/6/2012 at 1:05 AM
		</div>
		<div class="comment_text"><p>What I recommend is a butt load of console.log messages. So for example, add one in init. Add one in deviceRead(),add one in handleLogin. Etc. See where it is failing. Add one before $.post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736447">59</a> by Quentin
		posted on 4/6/2012 at 1:17 AM
		</div>
		<div class="comment_text"><p>Hey,</p><p>Thanks for the advice. I had a whitelist rejection from the URL which I fixed by adding a * in the array, but now I have this :</p><p>2012-04-05 23:17:22.741 LCDemo[5819:13403] Device initialization: DeviceInfo = {"name":"iPhone Simulator","uuid":"8BA3CEC6-27B2-5573-8C42-7A2DB234EF32","platform":"iPhone Simulator","gap":"1.2.0","version":"5.0","connection":{"type":"wifi"}};<br>2012-04-05 23:17:22.759 LCDemo[5819:13403] *** WebKit discarded an uncaught exception in the webView:decidePolicyForNavigationAction:request:frame:decisionListener: delegate: &lt;NSRangeException&gt; *** -[JKArray objectAtIndex:]: index (1) beyond bounds (1)</p><p>Any idea ?</p><p>Thanks,<br>Quentin</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736445">60</a> by Raymond Camden
		posted on 4/6/2012 at 1:28 AM
		</div>
		<div class="comment_text"><p>Does it throw that error anywhere in particular? Did you use the console messages like I suggested to see if it throws that in a certain place? Can you click the submit button?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736448">61</a> by Quentin
		posted on 4/6/2012 at 1:30 AM
		</div>
		<div class="comment_text"><p>Yes I did but no errors except that! I can click the submit button but nothing happens... I'll keep looking and i'll let you know, unless you have another idea of course :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736449">62</a> by Raymond Camden
		posted on 4/6/2012 at 1:31 AM
		</div>
		<div class="comment_text"><p>Is your event handler running? Like I said - using console.log can at least tell you "I got this far..." It's a cheap way to debug, but quick.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736451">63</a> by AdrianT
		posted on 5/9/2012 at 6:25 AM
		</div>
		<div class="comment_text"><p>Thanks for this guide. Manage to set it up with my phonegap app. Now, thinking of security because local storage is in clear text. Maybe use SALT or instead of storing password just store a session code(with expiry) from the return value but not sure the direction yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736453">64</a> by Raymond Camden
		posted on 5/9/2012 at 6:41 AM
		</div>
		<div class="comment_text"><p>You could skip storing the u/p completely if you want - or just store the username, just to make things a bit quicker. If I get access to your phone though this would be the least of my worries though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736454">65</a> by Eric
		posted on 5/23/2012 at 7:19 PM
		</div>
		<div class="comment_text"><p>Hey I was wondering if you could post your server file? Im trying to learn how to do this and having quite some trouble with it, I believe that would really help. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736456">66</a> by Raymond Camden
		posted on 5/23/2012 at 7:25 PM
		</div>
		<div class="comment_text"><p>The server logic was incredibly trivial though. The CFC had a method, login, that took two arguments, username and password, and just did a hard coded check. It didn't hit a database or anything. Are you asking because you are a CF developer and don't know how to build CFCs? Or another reason? I'm not opposed to sharing the code, it's just that it is so simple I'm not sure how it would help you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736463">67</a> by Eric
		posted on 5/23/2012 at 7:44 PM
		</div>
		<div class="comment_text"><p>I apologize, im a student attempting to create an app for a project, I know nothing about coldfusion and Im attempting to do this with php. I just thought maybe a look at the code could help me figure out a php solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736461">68</a> by Raymond Camden
		posted on 5/23/2012 at 8:05 PM
		</div>
		<div class="comment_text"><p>It probably won't help as it's different. Actually, I posted it already in a comment above:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2011%2F11%2F10%2FExample-of-serverbased-login-with-PhoneGap%23cCB18D730-D2AE-364D-35E92E9978331C44%3AxYBm-CFgM8P6YWNGH05cMJZ-mCM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2011/11/10/Example-of-serverbased-login-with-PhoneGap#cCB18D730-D2AE-364D-35E92E9978331C44">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736459">69</a> by Amit
		posted on 5/26/2012 at 2:46 PM
		</div>
		<div class="comment_text"><p>Is is possible to locally store username and password in android mobile using phonegap</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736465">70</a> by Raymond Camden
		posted on 5/26/2012 at 5:43 PM
		</div>
		<div class="comment_text"><p>PhoneGap apps have multiple ways to store data:</p><p>LocalStorage<br>WebSQL (Database)<br>Files</p><p>So yes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736464">71</a> by Sunny
		posted on 5/26/2012 at 7:41 PM
		</div>
		<div class="comment_text"><p>great guide. thanks. one question: i got it work in the android phone. but it doesn't work in chrome on the computer. do you know the reason?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736468">72</a> by Raymond Camden
		posted on 5/26/2012 at 7:46 PM
		</div>
		<div class="comment_text"><p>The deviceready event won't fire. That only works on a real device. When I test PG stuff in the browser, I fake it. Ie I call it in my code.</p><p>Note though that CHrome cannot make remote Ajax calls by default. You can either make use of CORS, or the command line arg that lets you do it. (I can't remember it offhand.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736466">73</a> by Sunny
		posted on 5/26/2012 at 7:57 PM
		</div>
		<div class="comment_text"><p>so the web version will be so different from the phone version then. i thought they can share the same code, just different cordova.js</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736470">74</a> by Raymond Camden
		posted on 5/26/2012 at 9:11 PM
		</div>
		<div class="comment_text"><p>Err, well, I mean it depends. Why build a native app if you aren't going to make use of native capabilities? If you aren't - then I'd just build a mobile friendly site. If you want an app and don't want to do native stuff, you can still make a PG app out of it, but you aren't gaining much.</p><p>And it's not like they can't share any code at all of course. If your desktop web site is using an MVC architecture, then your mobile app can make use of the same model.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736471">75</a> by Quentin
		posted on 5/27/2012 at 4:42 PM
		</div>
		<div class="comment_text"><p>Hi there!</p><p>I tried to modify this a bit in order to retrieve some informations from a database during the login. The web service is built in PHP and is returning an array in JSON but the login is not working anymore. Would you -or anyone- have an idea why ?</p><p>    $.post("<a href="http://disq.us/url?url=http%3A%2F%2Fapp.we3r.net%2Flogin2.php%3AyauuS6NzZjmuZ5Nl_CTdC4kbbcs&amp;cuid=3321886" rel="nofollow noopener" title="http://app.we3r.net/login2.php">http://app.we3r.net/login2.php</a>", {username:u,password:p}, function(data) {<br>            if(data.success == true)<br>            {<br>                window.localStorage["username"] = usernameToSave;<br>                window.localStorage["userId"] = useridToSave;</p><p>                $.mobile.hidePageLoadingMsg();<br>                $.mobile.changePage("dashboard.html");<br>            }<br>            else<br>            {<br>                $.mobile.hidePageLoadingMsg();<br>                navigator.notification.alert("Your login failed", function() {});<br>            }</p><p>               }, "json");</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736472">76</a> by Raymond Camden
		posted on 5/27/2012 at 6:16 PM
		</div>
		<div class="comment_text"><p>When you test outside of phonegap, what do you see? Simply hit your web service in the browser, pass in the values for username and password, and see what comes out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736474">77</a> by Sunny
		posted on 5/29/2012 at 3:01 AM
		</div>
		<div class="comment_text"><p>Hello Raymond,<br>one question: why do you use deviceready?<br>May I do something like:<br>$(document).on('pageinit', '#loginPage', function(event) {<br> handleLogin();<br>});</p><p>will they be the same?</p><p>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736473">78</a> by Raymond Camden
		posted on 5/29/2012 at 6:41 AM
		</div>
		<div class="comment_text"><p>The deviceready event is fired when you are allowed to do device-specific things in your code. Things like use the camera for example. My app isn't doing anything like that, but a "real" app would. Listening for that event is considered the normal best practice.</p><p>Now - as for pageinit - that's another matter. That's jQuery Mobile specific.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736475">79</a> by SorenSA
		posted on 6/5/2012 at 11:12 PM
		</div>
		<div class="comment_text"><p>For server-side PHP an database support, check out this article:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fsamcroft.co.uk%2F2011%2Fupdated-loading-data-in-phonegap-using-jquery-1-5%2F%3Aoc3O76-iKo8jX2-Wa0FSQTjxpjY&amp;cuid=3321886" rel="nofollow noopener" title="http://samcroft.co.uk/2011/updated-loading-data-in-phonegap-using-jquery-1-5/">http://samcroft.co.uk/2011/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736476">80</a> by hery
		posted on 6/7/2012 at 1:20 PM
		</div>
		<div class="comment_text"><p>hi raymond,<br>i am new to phonegap. <br>is your tutorial applicable for blackberry OS 5.0 and higher? where can i find "phonegap-1.2.0.js" for blackberry ?</p><p>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736479">81</a> by Raymond Camden
		posted on 6/7/2012 at 5:39 PM
		</div>
		<div class="comment_text"><p>I'm not sure what PG 1.2 supported since that was a while ago, but PG 1.8, the current release, definitely supports Blackberry OS5+. I'd just download the bits from there. My code should work fine with it. Although my code loads a specific version of phonegap's JS file. You would change it the latest cordova.js file. My code also uses an older version of jQuery Mobile. You should use the latest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736477">82</a> by hery
		posted on 6/8/2012 at 11:27 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, <br>Thank you for your help. So, i just go with <br> o&gt; <a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.1.0.js<br> o&gt; cordova.js<br> o&gt; jquery-1.7.2.min.js<br>i load it to blackberry simulator 9930. When i open the application, it went loading and then crash. It happened whenever i load the "jquery-1.7.min.js". Do you have any idea regarding to this ? and where can i get the error message for debugging ?</p><p>Sorry for bothering you. I really appreciate your help. thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736480">83</a> by Raymond Camden
		posted on 6/8/2012 at 10:36 PM
		</div>
		<div class="comment_text"><p>Hmm. I'd say start from scratch. Ensure a html page with just &lt;h1&gt;Hello World&lt;/h1&gt; can load.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736481">84</a> by Jordan
		posted on 6/13/2012 at 6:16 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>I found something in web that if Phonegap want to communicate with external data, we have to use ajax to connect to server for cross domain.<br>But I read here that you don't need to handle it.<br>Is it true??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736482">85</a> by Raymond Camden
		posted on 6/13/2012 at 3:59 PM
		</div>
		<div class="comment_text"><p>You need to set the whitelist property in XCode. In Android I never needed to. Since that is OS specific and not in the code per se, and since I was primarily only using Android, it's not something I covered in my blog entries very often. But if you go to the PhoneGap docs, it _is_ covered with examples.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736483">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736483">86</a> by jesus Rojas
		posted on 6/20/2012 at 11:26 AM
		</div>
		<div class="comment_text"><p>hy raymond, i read every comment in this post, and i learned so much! so thank you! and everybody that helps with their comments, but i need help with the .php server part, i could make it work with the bolean result, but when i have to make it with json arrays i didn't work, so i anyone can help me plase</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736484">87</a> by Davis
		posted on 6/20/2012 at 6:36 PM
		</div>
		<div class="comment_text"><p>After validating the username and password, is it possible to redirect to a real website address?  <br>For instance <a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%3AB2AkZFqigDdvPfTMfhi05ayA6nc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com">http://www.google.com</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736486">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736486">88</a> by Raymond Camden
		posted on 6/20/2012 at 6:44 PM
		</div>
		<div class="comment_text"><p>You could load a new URL into the main view. Haven't tried that myself, but it should be possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736485">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736485">89</a> by Davis
		posted on 6/21/2012 at 8:37 PM
		</div>
		<div class="comment_text"><p>I was able to get the external URL to load using the code below and I wanted to share.</p><p>window.location.href="<a href="http://disq.us/url?url=http%3A%2F%2Fwebsite.com%3Fusername%3D%3AHZX7PH15B5stURcJ8aEA1e4Dwu4&amp;cuid=3321886" rel="nofollow noopener" title="http://website.com?username=">http://website.com?username=</a>"+u+"&amp;password="+p;</p><p>I have another question.  In your example your program saves the username and password to the local storage.  What if someone changes their password on the server side? I have tried an example and it just sits at the login form.  When I push the button to login, I don't get a message saying login failed.  If I go ahead and type in the new password, it will redirect correctly.  Is there anyway to pop up an alert saying that login failed or check password?  Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736487">90</a> by Raymond Camden
		posted on 6/21/2012 at 8:40 PM
		</div>
		<div class="comment_text"><p>Odd - if you look at handleLogin, you clearly see it has a handler for the auth failing. You don't see "Your login failed" running? Remember that is using the PhoneGap API so if you test on your desktop you won't see it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736488">91</a> by Davis
		posted on 6/21/2012 at 8:52 PM
		</div>
		<div class="comment_text"><p>If it is the first time running the program without saved info on the phone, I can get the alert "your login failed" if I type in the wrong info.  If I save correct info and validate it will then redirect me.  Now if I change the password on the server side and go back to the phone that is where I have the problem.  I don't receive a "your login failed" message when clicking on the Login button.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736489">92</a> by Raymond Camden
		posted on 6/21/2012 at 8:56 PM
		</div>
		<div class="comment_text"><p>Ok, so I recommend adding some logging. See if checkPreAuth is running and see if handleLogin runs. Log the response. Etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736492">93</a> by Davis
		posted on 6/21/2012 at 10:26 PM
		</div>
		<div class="comment_text"><p>I have added logging (console.log("message")) to each one, checkPreAuth, init, and handleLogin.  Each one says it fires.</p><p>My error is this:</p><p>Uncaught TypeError: Cannot call method 'alert' of undefined at file://android_asset/www/index.html</p><p>That is the line of code that should pop up the notification alert that shows "Your login has failed".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736491">94</a> by Raymond Camden
		posted on 6/21/2012 at 10:30 PM
		</div>
		<div class="comment_text"><p>You are running this as a PhoneGap app, on a device, or a simulator, right? Cuz that's using the device API to do a device specific notification. If you are testing on your desktop, you want to use a 'normal' alert.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736497">95</a> by Davis
		posted on 6/21/2012 at 10:33 PM
		</div>
		<div class="comment_text"><p>Testing on a Motorola Razor, android 2.3.6 I believe.  The notification will work fine on the device on the first run, but I'm only having this problem once I have changed the password on the server and try to run the app again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736495">96</a> by Raymond Camden
		posted on 6/21/2012 at 10:34 PM
		</div>
		<div class="comment_text"><p>Wait a tic - are you changing the password on the device, ie,  after the window.location.href?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736493">97</a> by Davis
		posted on 6/21/2012 at 10:40 PM
		</div>
		<div class="comment_text"><p>No, I haven't changed the password on the device yet at this point.</p><p>The idea is that someone might change their password on the server but forget to change on the device.  They will be stuck at the form that won't go anywhere and not have any indicator saying hey your login failed.  I'm trying to make it user friendly :).</p><p>BTW thank you for your assistance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736494">98</a> by Raymond Camden
		posted on 6/21/2012 at 10:45 PM
		</div>
		<div class="comment_text"><p>Omg- so stupid. So - the API I used, navigator.notification.alert, requires you to load the PhoneGap JS file. I never loaded it in my demo. I'm so, so, sorry. Simply load that file (which is now cordova.js) in your HEAD block and you should be good to go. I'll edit the code sample to include it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736498">99</a> by Raymond Camden
		posted on 6/21/2012 at 10:45 PM
		</div>
		<div class="comment_text"><p>Oh crap - I read too quick. It IS being included. Um....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736500">100</a> by Raymond Camden
		posted on 6/21/2012 at 10:49 PM
		</div>
		<div class="comment_text"><p>I think I know what may be going on now. I've got <a href="http://disq.us/url?url=http%3A%2F%2Floginpage.live%3AuxMilHY9oGNbfU9EXSgdkHZMIiA&amp;cuid=3321886" rel="nofollow noopener" title="loginpage.live">loginpage.live</a>("pageinit") running checkPreAuth, which is a jQuery Mobile event. But my use of navigator.notification.alert will only run AFTER deviceReady has fired.</p><p>It is possible that we have a case here where checkPreAuth fires BEFORE deviceReady does which means... bad news.</p><p>If you want a quick fix, change it to just an alert(). Will be a bit ugly, but will work.</p><p>The longer fix is me doing an update to the entry that handles the 2 events correctly so one doesn't fire before the other. (Err, well, that one fires whenever but it correctly waits.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736501">101</a> by Davis
		posted on 6/21/2012 at 10:50 PM
		</div>
		<div class="comment_text"><p>I'm totally sure that your code is not at fault. I wouldn't have gotten this far without your help.  I'm just missing something.  Can you try changing the password in your service.cfc to mimic what I'm doing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736499">102</a> by Davis
		posted on 6/21/2012 at 10:53 PM
		</div>
		<div class="comment_text"><p>The alert() fix works great!!  I really do appreciate your work.  Thank you again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736502">103</a> by Raymond Camden
		posted on 6/22/2012 at 1:15 AM
		</div>
		<div class="comment_text"><p>For folks curious about how I fixed it, see the update here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2012%2F6%2F21%2FUpdate-to-my-ServerBased-Login-PhoneGap-Demo%3AZIqYLJMnsZsktGC520Py1iqmEVA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2012/6/21/Update-to-my-ServerBased-Login-PhoneGap-Demo">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736503">104</a> by Angelina
		posted on 7/24/2012 at 3:15 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>I tried the example which you have posted, but I am facing a problem. The control is not going into the "  $.post("<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2F2011%2Fnov%2F10%2Fservice.cfc%3Fmethod%3Dlogin%26returnformat%3Djson%3Ail8U-7Tr2_ocms2N6nuMq4S_dWM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/2011/nov/10/service.cfc?method=login&amp;returnformat=json">http://www.coldfusionjedi.c...</a>", {username:u,password:p}, function(res) { .... }  "  function.<br>What can be the problem?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736504">105</a> by Raymond Camden
		posted on 7/24/2012 at 5:10 PM
		</div>
		<div class="comment_text"><p>I'd ensure this line is running:</p><p>$("#loginForm").on("submit",handleLogin);</p><p>You can add a console.log before it. You can add a console.log as the first line in handleLogin as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736505">106</a> by Miguel
		posted on 9/4/2012 at 3:58 AM
		</div>
		<div class="comment_text"><p>Hi there,Fanstastic Post.Just a question how can i do a log off account? because the username passsword combination is stuck and its driving me crazy.<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736506">107</a> by ashok
		posted on 9/4/2012 at 1:32 PM
		</div>
		<div class="comment_text"><p>hii<br>thats great work<br>can u mail complete source code to my mail pls</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736508">108</a> by Raymond Camden
		posted on 9/4/2012 at 5:58 PM
		</div>
		<div class="comment_text"><p>@Miguel: Logoff would need to:</p><p>a) Remove the values from localStorage (easy enough)<br>b) Call the remote CFC to clear the session on the server side (again, easy enough in ColdFusion, should be easy in any language).</p><p>@Ashok: What complete source do you want? It is all there except the login routine on the server which really wasn't critical to the blog post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736509">109</a> by William
		posted on 9/15/2012 at 8:18 AM
		</div>
		<div class="comment_text"><p>Hi, just wondering, the data submitted from this forms to the server, are they encrypted? if not, then it will be sending "naked" passwords to the server through the net?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736507">110</a> by William
		posted on 9/15/2012 at 8:47 AM
		</div>
		<div class="comment_text"><p>Sorry about my previous comment. After further looking into your code. i found that you did not send password over the internet, instead you pull password from server and check against the form value. However, the password pulled from the server is in MD5 form. how to check it against the form values?</p><p>$.post("<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2F2011%2Fnov%2F10%2Fservice.cfc%3Fmethod%3Dlogin%26returnformat%3Djson%3Ail8U-7Tr2_ocms2N6nuMq4S_dWM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/2011/nov/10/service.cfc?method=login&amp;returnformat=json">http://www.coldfusionjedi.c...</a>", {username:u,password:p}, function(res) {</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736511">111</a> by Raymond Camden
		posted on 9/15/2012 at 5:48 PM
		</div>
		<div class="comment_text"><p>Actually, we do send the password, otherwise, how would the server have anything to compare too? You should use https for the call, not http as I did for my simple example. THat will make it marginally safer. You could also do a hash client side before sending it, or look for a JS encryption routine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736510">112</a> by Abhijith
		posted on 10/30/2012 at 11:39 AM
		</div>
		<div class="comment_text"><p>Hello Ray , I also followined a style like yours for posting values to server using $.post but my app doesn't send any data to server ,when run in Blackberry Emulator and Device .<br>I build the code using Phonegap BUILD and used a valid Signing key also. But the post doesn't get executed , my code can be seen at <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F13115866%2Fblackberry-phonegap-jquery-post%3AnmTM0Ruv5ykHoZeEutEDkbnMZbE&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/13115866/blackberry-phonegap-jquery-post">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736512">113</a> by Raymond Camden
		posted on 10/30/2012 at 2:50 PM
		</div>
		<div class="comment_text"><p>What is the URL you are trying to hit? On Android if you hit localhost, it means the _device_ localhost, not the machine you are on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736515">114</a> by Budi Subiyakto
		posted on 12/19/2012 at 2:52 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>I tried the example which you have posted, can you give me cfc code ?  thnxx before..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736514">115</a> by Raymond Camden
		posted on 12/19/2012 at 4:49 PM
		</div>
		<div class="comment_text"><p>You can find it in this comment:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2011%2F11%2F10%2FExample-of-serverbased-login-with-PhoneGap%23cCB18D730-D2AE-364D-35E92E9978331C44%3AxYBm-CFgM8P6YWNGH05cMJZ-mCM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2011/11/10/Example-of-serverbased-login-with-PhoneGap#cCB18D730-D2AE-364D-35E92E9978331C44">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736516">116</a> by behzadabf
		posted on 12/29/2012 at 5:27 AM
		</div>
		<div class="comment_text"><p>Hi MR.Raymond.<br>I'm behzad from Iran.<br>your site really great.</p><p>how can i replace PHP instead service.cfc?<br>(i don't know what is the --&gt; .cfc file !)</p><p>i want to get stuff from MYSQL Database by PHP<br> and past it to the phone.</p><p>thank you sir.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736517">117</a> by Raymond Camden
		posted on 12/30/2012 at 6:04 AM
		</div>
		<div class="comment_text"><p>All the ColdFusion code is doing is:</p><p>Running a query.<br>Turning the result into an array.<br>Converting the array into JSON.</p><p>That should be very possibly in PHP. I don't know PHP though so I can't help you with that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736518">118</a> by Neo Jia Jun
		posted on 1/14/2013 at 12:02 AM
		</div>
		<div class="comment_text"><p>Hey Raymond, can this code work on a website like this?<br><a href="https://disq.us/url?url=https%3A%2F%2Fsso.sp.edu.sg%2Flogin%2Fmain.jsp%3FTAM_OP%3Dlogin%26ERROR_CODE%3D0x00000000%26URL%3D%252Fwebapps%252Flogin%26HOSTNAME%3Desp.sp.edu.sg%26PROTOCOL%3Dhttps%3AEI6TOPpQjyuyoQZoGPzm0l1F1j4&amp;cuid=3321886" rel="nofollow noopener" title="https://sso.sp.edu.sg/login/main.jsp?TAM_OP=login&amp;ERROR_CODE=0x00000000&amp;URL=%2Fwebapps%2Flogin&amp;HOSTNAME=esp.sp.edu.sg&amp;PROTOCOL=https">https://sso.sp.edu.sg/login...</a></p><p>I won't be able to edit and they did not do anything on the code related to JSON. Although i tried to login but i failed instead probably because it needed json.</p><p>Please help! thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736520">119</a> by Raymond Camden
		posted on 1/14/2013 at 7:19 AM
		</div>
		<div class="comment_text"><p>I have no idea what that site is and what it does - so I don't think I can properly respond.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736521">120</a> by amrita
		posted on 1/19/2013 at 9:30 PM
		</div>
		<div class="comment_text"><p>Thanks for the demo! but where do I store the below code..i have been trying this but getting errors. so could please help me with this..</p><p>function init() {<br>document.addEventListener("deviceready", deviceReady, true);<br>delete init;<br>}</p><p>function deviceReady() {</p><p>$("#loginForm").on("submit",function(e) {<br>    //disable the button so we can't resubmit while we wait<br>    $("#submitButton",this).attr("disabled","disabled");<br>var u = $("#username", this).val();<br>var p = $("#password", this).val();<br>if(u != '' &amp;&amp; p!= '') {<br>    $.post("<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2F2011%2Fnov%2F10%2Fservice.cfc%3Fmethod%3Dlogin%26returnformat%3Djson%3Ail8U-7Tr2_ocms2N6nuMq4S_dWM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/2011/nov/10/service.cfc?method=login&amp;returnformat=json">http://www.coldfusionjedi.c...</a>", {username:u,password:p}, function(res) {<br>        if(res == true) {<br>            $.mobile.changePage("some.html");<br>        } else {<br>            navigator.notification.alert("Your login failed", function() {});<br>        }<br>         $("#submitButton").removeAttr("disabled");<br>    },"json");<br>}<br>return false;<br>});</p><p>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736522">121</a> by Raymond Camden
		posted on 1/20/2013 at 12:13 AM
		</div>
		<div class="comment_text"><p>Where do you "store" the code? I don't think I understand your question. Are you asking how to use JavaScript?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736523">122</a> by Chris
		posted on 1/21/2013 at 9:06 PM
		</div>
		<div class="comment_text"><p>Hey Ray!  Awesome write-up.  I'm wondering, though, what would be the best method to keep the user from coming back to this page when "some.html" is loaded.  I'm noticing that when I deploy this to my Android phone and hit the hardware back button, it goes back to the login page.  That doesn't seem like the behavior a user would expect!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736524">123</a> by Raymond Camden
		posted on 1/21/2013 at 9:08 PM
		</div>
		<div class="comment_text"><p>Few ways:</p><p>1) Listen for the back button. Example from docs: <a href="http://disq.us/url?url=http%3A%2F%2Fdocs.phonegap.com%2Fen%2F2.3.0%2Fcordova_events_events.md.html%23backbutton%3AcYfiz1XV-jGtFuDhqa_zUxuhZDk&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.phonegap.com/en/2.3.0/cordova_events_events.md.html#backbutton">http://docs.phonegap.com/en...</a></p><p>2) Depending on your UI framework, you can listen for a pageshow type event (that's jQuery Mobile specific) and say (in pseudo-code), "If I'm loading the login page and the dude is logged in, push them to the home page."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736526">124</a> by Chris
		posted on 1/21/2013 at 9:32 PM
		</div>
		<div class="comment_text"><p>Ok, thanks.  I was looking into the back button event listener already but wasn't sure if that was the best mehtod or not.  I've literally copied/pasted your code to test so I'm using jQuery Mobile as well (although, I can't tell why jQuery Mobile is necessary in this example).</p><p>One thing I've had a continual issue with is page transitioning in jQuery Mobile.  It's so confusing and I can't quite wrap my mind around the concept.  Does it actually visit the new page?  Do you need all of the script and css inclusions on each page?  Do you just use multiple divs in ONE page rather than loading a whole new page?  It's just very confusing!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736525">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736525">125</a> by Raymond Camden
		posted on 1/21/2013 at 9:36 PM
		</div>
		<div class="comment_text"><p>"I've literally copied/pasted your code to test so I'm using jQuery Mobile as well (although, I can't tell why jQuery Mobile is necessary in this example)."</p><p>It is absolutely NOT required. In general, I try to make my examples as simple as possible and not mix stuff in. In this case, JQM just made some things easier. As a tech blogger, it is a hard balance. :)</p><p>"Does it actually visit the new page?" Define visit. JQM loads in pages via Ajax and puts them in the DOM. Is that a visit? Probably not.</p><p>"Do you need all of the script and css inclusions on each page?" See the above. You can get away with doing it just once as the other pages are loaded in via Ajax and only the 'page' content is displayed.</p><p>" Do you just use multiple divs in ONE page rather than loading a whole new page?" Normally you have one div per HTML file just to make things simpler.</p><p>" It's just very confusing!" I apologize. I'd suggest the jQuery Mobile web site for more info, or, just think of the basic concepts of this article at a higher level. Don't get hung up on the UI aspects of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736527">126</a> by Max
		posted on 3/6/2013 at 11:53 AM
		</div>
		<div class="comment_text"><p>Hi, I am following your code on phonegap app using Window phone emulater and Visual Studio 2010.</p><p>Issue is, I am not able to call $.post call to http://localhost:55209/Account/Login which is dev server.</p><p>Is it due to cross domain issue?</p><p>I was thing about whitelist but according to phoneGap APi "Domain whitelisting is unsupported on Windows Phone. By default, all domains are accessible."</p><p>What could be the issue? Please help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736529">127</a> by Raymond Camden
		posted on 3/6/2013 at 4:44 PM
		</div>
		<div class="comment_text"><p>On the phone emulator, if you open IE and enter that URL, does it work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736528">128</a> by Max
		posted on 3/7/2013 at 10:28 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond,</p><p>I was able to fix the issue. I just added $.support.cors = true; in my .js file and after that code works like a charm on  the phone emulator.</p><p>Thanks for helping me by this post. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736530">129</a> by Raymond Camden
		posted on 3/7/2013 at 5:09 PM
		</div>
		<div class="comment_text"><p>Nice. I'm getting a Windows phone pretty soon actually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736531">130</a> by Chris
		posted on 3/17/2013 at 10:46 PM
		</div>
		<div class="comment_text"><p>Hi,  I liked the example of the login and I want to ask if you can give me some advice on how to get some data for this user from my server. I have a website and I want a mobile app. I am using ASP.NET MVC 4. I had the idea of just creating new api that can give me user specific data without authentication but that will mean open door for anyone to all the data. Or can I somehow when I login do it like I am logging in from the browser so I can check from the server if I the user is logged or not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736532">131</a> by Raymond Camden
		posted on 3/18/2013 at 3:28 AM
		</div>
		<div class="comment_text"><p>I do not know Asp.Net so I can't really comment. In ColdFusion, you can use Sessions to mark a user as authenticated. This works fine with XHR (Ajax) calls so you could use this to secure your calls for data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736534">132</a> by Will Swain
		posted on 4/9/2013 at 2:01 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Am I reading the above comments correctly in that to deploy this to an iOS device all you would need to do would be change the js file included? The PhoneGap docs imply you need to develop on a Mac, but I'm assuming that's for native development rather than using JQMobile and PhoneGap?</p><p>Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736537">133</a> by Raymond Camden
		posted on 4/9/2013 at 3:21 PM
		</div>
		<div class="comment_text"><p>"Am I reading the above comments correctly in that to deploy this to an iOS device all you would need to do would be change the js file included?" Each platform has a unique JS file. When you use the command line to create your projects, this is handled for you. When you use PG Build, ditto.</p><p>"The PhoneGap docs imply you need to develop on a Mac, but I'm assuming that's for native development rather than using JQMobile and PhoneGap?"</p><p>It depends. You can use PG Build to generate iOS apps based on HTML you write on a PC. If you don't want to use PG Build, you have to use a Mac.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736536">134</a> by Will Swain
		posted on 4/9/2013 at 3:24 PM
		</div>
		<div class="comment_text"><p>Thanks Ray. At the moment I'm using Eclipse to do my dev, but will defo look at PG Build, which seems to be the way to go for cross platform apps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736533">135</a> by CJ
		posted on 4/9/2013 at 9:43 PM
		</div>
		<div class="comment_text"><p>Actually a safer aproach would be not to store the password and username, but instead store the url-location and IP from wich the url-location was called (i.e Your mobile phone).. And just check this against a php-script.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736538">136</a> by Raymond Camden
		posted on 4/9/2013 at 9:53 PM
		</div>
		<div class="comment_text"><p>"php-script" - or any other language. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736540">137</a> by mouradovitch
		posted on 7/30/2013 at 6:05 PM
		</div>
		<div class="comment_text"><p>hello .. i want to create an App Android using phoneGap.. the user musst login befor using the App..  the question is how can i add the HttpRequest Plugin phoneGap/cordova to my project to communicate with the server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736542">138</a> by Raymond Camden
		posted on 7/30/2013 at 6:08 PM
		</div>
		<div class="comment_text"><p>You don't need a HttpRequest plugin. Just use AJAX.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736541">139</a> by mouradovitch
		posted on 7/30/2013 at 6:54 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond..<br> so like this !!</p><p>$.ajax({<br>2  url: '<a href="http://disq.us/url?url=http%3A%2F%2Fyourdomain.com%2Fyour-data-request.php%3Ffoo%3Dbar%27%3AN37-rgV16QSPGZdZjivHYp8xI4I&amp;cuid=3321886" rel="nofollow noopener" title="http://yourdomain.com/your-data-request.php?foo=bar'">http://yourdomain.com/your-...</a>,<br>3 dataType: 'jsonp',<br>4 jsonp: 'jsoncallback',<br>5 timeout: 5000,<br>6 success: function(data, status){<br>7 //data loaded<br>8    },<br>9 error: function(){<br>10 //error loading data<br>11   }<br>12 });</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736543">140</a> by Raymond Camden
		posted on 7/30/2013 at 7:28 PM
		</div>
		<div class="comment_text"><p>Sure, but keep in mind that folks use JSONP because browsers are restricted from making an XHR to another domain. PhoneGap removes that limitation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736539">141</a> by mouradovitch
		posted on 7/31/2013 at 3:52 PM
		</div>
		<div class="comment_text"><p>hi Raymond<br>I dont understand this line..</p><p>$.post("<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2F2011%2Fnov%2F10%2Fservice.cfc%3Fmethod%3Dlogin%26returnformat%3Djson%3Ail8U-7Tr2_ocms2N6nuMq4S_dWM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/demos/2011/nov/10/service.cfc?method=login&amp;returnformat=json">http://www.coldfusionjedi.c...</a>", {username:u,password:p}, function(res)</p><p>so method = login,  login is a method or a variable?<br>if it is a method where it is defined?<br>thanks in advance..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736644">142</a> by Raymond Camden
		posted on 7/31/2013 at 5:45 PM
		</div>
		<div class="comment_text"><p>The URL you see there is specific for ColdFusion servers. If you aren't a ColdFusion dev, then it doesn't matter. It basically says to run a particular method in a particular CFC (think class).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736651">143</a> by mouradovitch
		posted on 7/31/2013 at 8:55 PM
		</div>
		<div class="comment_text"><p>ok .. <br>can I use a php file instead of cfc ??<br>like this : $.post("http://www.earthfaves.bis/dev/ajax/ phonegap/ login.php?   <br>method = login&amp;returnformat=json", {username:u,password:p}, function(res) {<br>  if(res == true) {<br>       do something</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736652">144</a> by Raymond Camden
		posted on 7/31/2013 at 9:43 PM
		</div>
		<div class="comment_text"><p>Absolutely. PhoneGap, hell, even JS code, doesn't really care what your back end is written in. It cares about the response.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736649">145</a> by Mena Ibrahem William
		posted on 8/6/2013 at 5:10 PM
		</div>
		<div class="comment_text"><p>Firstly, i must thank you for that awesome efforts you made on that script.<br>i have a learning problem with JSONP and up till now i'd spent about a month and a half trying to get this done<br>and the last try i made is i packed up your script here as an APK and sent it to my android but the result is one white blank screen with no data in it.<br>i don't know where the problem is !! i'm so desperate.<br>thanks in advance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736650">146</a> by Raymond Camden
		posted on 8/6/2013 at 5:17 PM
		</div>
		<div class="comment_text"><p>You should consider using the Android tools/monitor script to see if you can see the error. It gives you a view of your device and the running applications.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736666">147</a> by Mena Ibrahem William
		posted on 8/8/2013 at 2:48 PM
		</div>
		<div class="comment_text"><p>is it to much for me to ask you for the server side code in PHP or what ever ??<br>i realy had had so much hard time finding it and making it to work and nothing is workin with me.<br>Thanks in advance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736653">148</a> by Raymond Camden
		posted on 8/8/2013 at 3:34 PM
		</div>
		<div class="comment_text"><p>Unfortunately it is for many reasons.</p><p>A) I don't know PHP</p><p>b) If you are working on a server-side project and don't know how to do authentication, then you shouldn't be just copying someone else's code. This is really basic level stuff for a language. You take in two inputs (username and password) and compare them to a database.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736660">149</a> by mouradovitch
		posted on 8/11/2013 at 5:55 PM
		</div>
		<div class="comment_text"><p>can someone test the program in the emulator (Android Galaxy)?<br>I try to test, but that does not work<br>someone has an idea</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736655">150</a> by Raymond Camden
		posted on 8/11/2013 at 6:23 PM
		</div>
		<div class="comment_text"><p>"does not work" isn't enough. You need to provide more detail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736670">151</a> by mouradovitch
		posted on 8/11/2013 at 9:09 PM
		</div>
		<div class="comment_text"><p>Firsty I try to communicate with the server<br> the code looks like this <br>login.html</p><p>&lt;!DOCTYPE HTML&gt;<br>&lt;html&gt;</p><p>&lt;head&gt;<br>    &lt;meta http-equiv="Content-type" content="text/html; charset=utf-8"&gt;<br>    &lt;title&gt;Auth Demo&lt;/title&gt;<br> 	&lt;script type="text/javascript" charset="utf-8" src="js/cordova.js"&gt;&lt;/script&gt;<br>    &lt;script type="text/javascript" src="js/jquery.js"&gt;&lt;/script&gt;<br>	&lt;script type="text/javascript" src="js/jquery.mobile.js"&gt;&lt;/script&gt;</p><p>    &lt;script type="text/javascript" charset="utf-8" src="js/functions.js"&gt;&lt;/script&gt;<br>&lt;/head&gt;</p><p>&lt;body onload="init()"&gt;</p><p>&lt;div id="loginPage" data-role="page"&gt;</p><p>    &lt;div data-role="header"&gt;</p><p>    &lt;/div&gt;</p><p>    &lt;div data-role="content"&gt;</p><p>        &lt;form id="loginForm"&gt;<br>        &lt;div data-role="fieldcontain" class="ui-hide-label"&gt;<br>            &lt;label for="username"&gt;Username:&lt;/label&gt;<br>            &lt;input type="text" name="username" id="username" value="" placeholder="Username" /&gt;<br>        &lt;/div&gt;</p><p>        &lt;div data-role="fieldcontain" class="ui-hide-label"&gt;<br>            &lt;label for="password"&gt;Password:&lt;/label&gt;<br>            &lt;input type="password" name="password" id="password" value="" placeholder="Password" /&gt;<br>        &lt;/div&gt;</p><p>        &lt;input type="submit" value="Login" id="submitButton"&gt;<br>        &lt;/form&gt;</p><p>    &lt;/div&gt;</p><p>    &lt;div data-role="footer"&gt;</p><p>    &lt;/div&gt;</p><p>&lt;/div&gt;</p><p>&lt;/body&gt;<br>&lt;/html&gt;<br>and the file functions.js looks like this</p><p>	function init() {<br>			document.addEventListener("deviceready", deviceReady, true);<br>			delete init;<br>			}</p><p>	function deviceReady() {</p><p>			$("#loginForm").on("submit",function(e) {<br>				//disable the button so we can't resubmit while we wait<br>				$("#submitButton",this).attr("disabled","disabled");<br>			var u = $("#username", this).val();<br>			var p = $("#password", this).val();<br>			if(u != '' &amp;&amp; p!= '') {<br>				$.post("<a href="http://disq.us/url?url=http%3A%2F%2Fwww.kdgkasdg.com%2Fdev3%2Fajax%2Fphonegap%2Flogin.php%3AJuH0bO0TnbdaI942cE8F1wpxooA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.kdgkasdg.com/dev3/ajax/phonegap/login.php">http://www.kdgkasdg.com/dev...</a>", {username:u,password:p}, function(data) {</p><p>					if(res == true) {<br>						alert(res);<br>					} else {<br>						nalert("Your login failed", function() {});<br>					}<br>					 $("#submitButton").removeAttr("disabled");<br>				},"json");<br>			}<br>		return false;<br>	});</p><p>	}<br>and the file login.php is like this</p><p>&lt;?php<br>header('Content-type: application/json');<br>echo 'hello from server';</p><p>?&gt;<br>but i dont now if it is possible to test that in Emulator android or Chrom <br>thanks for your help ..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736658">152</a> by Raymond Camden
		posted on 8/11/2013 at 9:11 PM
		</div>
		<div class="comment_text"><p>Of course you can test PhoneGap apps in the emulator. But that's not really relevant to this blog post. Have you read the core PG docs to know how to run the emulator? If not - please do so.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736659">153</a> by mouradovitch
		posted on 8/11/2013 at 9:43 PM
		</div>
		<div class="comment_text"><p>ok .. <br>thank you for the answer</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736662">154</a> by mouradovitch
		posted on 8/12/2013 at 3:12 PM
		</div>
		<div class="comment_text"><p>Hi<br>hi<br>I am using Phonegap to develop a  app (login)  and I get a 404 error about cordova_plugin.json when I test/view the app I am developing in  chrome(ripple).</p><p>Could someone please let me know what this is and how I can fix this error.</p><p>Thanks very much<br>mouradovitch</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736664">155</a> by Raymond Camden
		posted on 8/12/2013 at 4:49 PM
		</div>
		<div class="comment_text"><p>That error is ignorable w/ Ripple, but I should point out that Ripple and PhoneGap 3 is currently incompatible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736673">156</a> by mouradovitch
		posted on 8/12/2013 at 5:21 PM
		</div>
		<div class="comment_text"><p>i use cordova 2.9.0.<br> but how can I ignore that ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736657">157</a> by Raymond Camden
		posted on 8/12/2013 at 5:27 PM
		</div>
		<div class="comment_text"><p>The 404 error can be ignored is what I meant. I don't believe it matters. As it stands - Ripple has been broken for me since PG 2.6.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736671">158</a> by mouradovitch
		posted on 8/12/2013 at 6:59 PM
		</div>
		<div class="comment_text"><p>What Emulator would you recommend?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736667">159</a> by Raymond Camden
		posted on 8/12/2013 at 7:01 PM
		</div>
		<div class="comment_text"><p>I now mostly use the 'real' emulators, ie the one you get with Android or iOS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736668">160</a> by mouradovitch
		posted on 8/13/2013 at 6:14 PM
		</div>
		<div class="comment_text"><p>the people who use PHP, can someone send me the code for Ajax or write here. I have tried for two weeks to write the correct code but without result.<br>this is my email: mouradovitch@live.de</p><p>Thanks very much</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736661">161</a> by Raymond Camden
		posted on 8/13/2013 at 6:23 PM
		</div>
		<div class="comment_text"><p>I don't use PHP, but honestly, this is taking form input, running a database query, and outputting true or false. Are you saying you can't do that in PHP? That's pretty basic stuff as far as I know.</p><p>Start simple.</p><p>Can you write PHP code that outputs the value of form fields?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736665">162</a> by mouradovitch
		posted on 8/13/2013 at 7:21 PM
		</div>
		<div class="comment_text"><p>now it works ..  thank you Raymond for your help <br>the problem was missing cordova_plugins.json error<br>i just create an empty cordova-plugin.json file with just {} inside.</p><p>and this is my Test_code if someone needs it</p><p>login.html</p><p>&lt;!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fhtml4%2Floose.dtd%3A4qYYiKf19GfiXUEpfUUo4KosJnM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/html4/loose.dtd">http://www.w3.org/TR/html4/...</a>"&gt;<br>&lt;html&gt;</p><p>	&lt;head&gt;</p><p>    &lt;title&gt;First App&lt;/title&gt;</p><p>  &lt;script src="cordova.js"&gt;&lt;/script&gt;<br>  &lt;script src="<a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.3.1.js"&gt;&lt;/script&gt;<br>  &lt;script src="jquery-2.0.0.min.js"&gt;&lt;/script&gt;</p><p>  &lt;script&gt;</p><p>     function onLoad(){</p><p>          	document.addEventListener("deviceready",onDeviceReady, true);</p><p>                 }</p><p>     function onDeviceReady(){<br>		 navigator.notification.alert(" PhoneGap is working!!");</p><p>			 }</p><p>     function LoginTest(){</p><p>    	  var myName = document.getElementById("name").value;<br>    	  alert("Hello " + myName );</p><p>    	  //connect to the server<br>    	  $.ajax({</p><p>        url: '<a href="http://disq.us/url?url=http%3A%2F%2Fwww.domain.com%2Fajax%2Fphonegap%2Flogin.php%27%3AEA4tF10CpCeX-iZOm4Z34aBx9tg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.domain.com/ajax/phonegap/login.php'">http://www.domain.com/ajax/...</a>,<br>              dataType: 'json',<br>             // jsonp: 'jsoncallback',<br>              timeout: 5000,<br>              success: function(data, status){<br>                  //data loaded<br>                  alert(data);<br>              },<br>              error: function(){<br>                  //error loading data<br>                  alert('no data');<br>              }<br>          });</p><p>}</p><p>  &lt;/script&gt;</p><p>  &lt;/head&gt;</p><p>  &lt;body onload="onLoad();"&gt;</p><p>       &lt;h1&gt;Welcome to PhoneGap&lt;/h1&gt;</p><p>        &lt;form&gt;<br>         &lt;p&gt; login: &lt;br/&gt;     <br>         &lt;input type="text" id="name" &gt;&lt;/p&gt;<br>         &lt;p&gt; Password: &lt;br/&gt;<br>         &lt;input type="password" id="pw" &gt;&lt;/p&gt;<br>        &lt;input type="button" value="Login" onclick="LoginTest()" /&gt;<br>    &lt;/form&gt;<br>    &lt;div id=’result’&gt;&lt;/div&gt;<br>  &lt;/body&gt;</p><p>&lt;/html&gt;</p><p>and this is login.php file</p><p>&lt;?</p><p>header('Content-type: application/json');<br>echo json_encode('hello from server ');<br>?&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736669">163</a> by saurabh
		posted on 8/31/2013 at 12:08 AM
		</div>
		<div class="comment_text"><p>Nobody gave a complete serverside code to test the above code using php.</p><p>Can somebody please provide the entire login working example with php ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736663">164</a> by Steve
		posted on 9/1/2013 at 1:51 AM
		</div>
		<div class="comment_text"><p>I would also like to have a nice zip file with all the working files as well if someone could be so kind to post it. I have been trying get  a simple phonegap server based log-in to work for several days, and I can get it to work in Android 2.3 but anything in Android 4.x doesn't work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736674">165</a> by mouradovitch
		posted on 9/2/2013 at 3:21 PM
		</div>
		<div class="comment_text"><p>hi saurabh..<br>my serverside code login.php looks like this</p><p>&lt;?<br>	header('Content-type: application/json');<br>       $email = strip_tags($_POST["username"]);<br>       $p = strip_tags($_POST["password"]);</p><p>	   define ("USER", "database_username");<br>	   define ("PWD", "database_password");<br>	   define ("DBNAME", "databasename");</p><p>	// connect to the server<br>	   function connect_server(){<br>		$_db_host = "localhost";           <br>		$_db_username = USER;<br>		$_db_passwort = PWD;</p><p>		// Serververbindung herstellen<br>		$link = mysql_connect($_db_host, $_db_username, $_db_passwort) or die("Keine Serververbindung möglich: " . mysql_error());<br>		return $link;<br>	}<br>	//connect to the Database<br>	   function connect_db($link){<br>		$_db_name = DBNAME;<br>		// Verbindung zur richtigen Datenbank herstellen<br>		$datenbank = mysql_select_db($_db_name, $link) or die("Failed to connect to DB " . mysql_error());<br>		if (!$datenbank){	<br>				mysql_close($link);      	  # Datenbank schliessen<br>				echo 'Failed to connect to DB  &lt;br/&gt;';        <br>				exit;	# Programm beenden !<br>		}</p><p>		return $datenbank;<br>	}</p><p>	 $con = connect_server();<br>	 connect_db($con);</p><p>	 //Email and Pass testen</p><p>	 $result1=mysql_query("SELECT username, password FROM users <br>	                      WHERE username = '$email'<br>						  AND  password = '$p' ")or die(mysql_error());</p><p>            if(mysql_num_rows($result1)&gt;0)<br>            { <br>			    //do something<br>				}else{</p><p>                       // email or password is incorrect</p><p>			           }      <br>            mysql_close($con);<br>	?&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736672">166</a> by Raymond Camden
		posted on 9/3/2013 at 12:12 AM
		</div>
		<div class="comment_text"><p>Steve, if you can provide more details on how it fails in Android 4.X, I can try to help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736683">167</a> by Steve
		posted on 9/3/2013 at 1:50 AM
		</div>
		<div class="comment_text"><p>The problem was with my config.xml file... I had the <br>&lt;access uri="<a href="http://disq.us/url?url=http%3A%2F%2Fmydomain.com%3AIndwFAd-t_EgOr9y0s--nK8Qc78&amp;cuid=3321886" rel="nofollow noopener" title="http://mydomain.com">http://mydomain.com</a>"/&gt; Tag (Blackberry), but I was missing &lt;access origin="<a href="http://disq.us/url?url=http%3A%2F%2Fmydomain.com%3AIndwFAd-t_EgOr9y0s--nK8Qc78&amp;cuid=3321886" rel="nofollow noopener" title="http://mydomain.com">http://mydomain.com</a>"/&gt; (Android)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736684">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736684">168</a> by Raymond Camden
		posted on 9/3/2013 at 1:58 AM
		</div>
		<div class="comment_text"><p>Ah cool - thanks for sharing the solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736685">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736685">169</a> by Tusar
		posted on 9/14/2013 at 4:43 PM
		</div>
		<div class="comment_text"><p>Hi</p><p>I tried creating the android app using phonegap with php-mysql. But encountered the issue. The app is not atall communicating with the php file.</p><p>What I did is:</p><p>Created a html file (jndex.html)</p><p>&lt;!DOCTYPE HTML&gt;<br>&lt;html&gt;</p><p>&lt;head&gt;<br>    &lt;meta name="viewport" content="width=320; user-scalable=no" /&gt;<br>    &lt;meta http-equiv="Content-type" content="text/html; charset=utf-8"&gt;<br>    &lt;title&gt;Auth Demo&lt;/title&gt;<br>    &lt;link rel="stylesheet" href="<a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%2Fjquery.mobile-1.0rc2.css%3A7QnFdmLnXfrax0AspYFrOkDUpyI&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile/jquery.mobile-1.0rc2.css">jquery.mobile/jquery.mobile...</a>" type="text/css" charset="utf-8" /&gt;<br>    &lt;link href="jquery-mobile/jquery.mobile.theme-1.0.min.css" rel="stylesheet" type="text/css"/&gt;<br>    &lt;link href="jquery-mobile/jquery.mobile.structure-1.0.min.css" rel="stylesheet" type="text/css"/&gt;<br>    &lt;script type="text/javascript" charset="utf-8" src="js/cordova.js"&gt;&lt;/script&gt;<br>    &lt;script src="jquery-mobile/jquery-1.6.4.min.js" type="text/javascript"&gt;&lt;/script&gt;<br>    &lt;script src="jquery-mobile/<a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.0.min.js" type="text/javascript"&gt;&lt;/script&gt;<br>    &lt;script type="text/javascript" charset="utf-8" src="js/main.js"&gt;&lt;/script&gt;<br>&lt;/head&gt;</p><p>&lt;body onload="onLoad();"&gt;</p><p>&lt;div id="loginPage" data-role="page"&gt;</p><p>    &lt;div data-role="header"&gt;<br>        &lt;h1&gt;Auth Demo&lt;/h1&gt;<br>    &lt;/div&gt;</p><p>    &lt;div data-role="content"&gt;</p><p>        &lt;form&gt;<br>            &lt;p&gt; login: &lt;br/&gt; <br>            &lt;input type="text" id="name" &gt;&lt;/p&gt;<br>            &lt;p&gt; Password: &lt;br/&gt;<br>            &lt;input type="password" id="pw" &gt;&lt;/p&gt;<br>            &lt;input type="button" value="Login" onclick="LoginTest()" /&gt;<br>        &lt;/form&gt;</p><p>        &lt;div id=’result’&gt;&lt;/div&gt;</p><p>    &lt;/div&gt;</p><p>    &lt;div data-role="footer"&gt;<br>        &lt;h4&gt;&amp;copy; Camden Enterprises&lt;/h4&gt;<br>    &lt;/div&gt;</p><p>&lt;/div&gt;</p><p>&lt;/body&gt;<br>&lt;/html&gt;</p><p>Otherthan this index.html file, I have the js directory that contains the js files.</p><p>one config.xml file -</p><p>&lt;?xml version="1.0" encoding="UTF-8" ?&gt;<br>&lt;widget xmlns = "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2Fns%2Fwidgets%3AMx2Q6mlsaVXFcKRQbK6r_lqjmP8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/ns/widgets">http://www.w3.org/ns/widgets</a>"<br>    xmlns:gap = "<a href="http://disq.us/url?url=http%3A%2F%2Fphonegap.com%2Fns%2F1.0%3ArGhMg6lWaDHTWuxdL2I7p9NsCqU&amp;cuid=3321886" rel="nofollow noopener" title="http://phonegap.com/ns/1.0">http://phonegap.com/ns/1.0</a>"<br>    id        = "com.gita.example"<br>    version   = "1.0.0"&gt;</p><p>&lt;name&gt;Gandhi Institute of Technological Advancement&lt;/name&gt;</p><p>&lt;description&gt;<br>Gandhi Institute of Technological Advancement<br>&lt;/description&gt;</p><p>&lt;author href="<a href="https://disq.us/url?url=https%3A%2F%2Fthemingpress.com%3A3UyfJ6CcaZ5TJAbIXaY9PXRNGAE&amp;cuid=3321886" rel="nofollow noopener" title="https://themingpress.com">https://themingpress.com</a>" email="admin@themingpress.com"&gt;<br>Themingpress<br>&lt;/author&gt;</p><p>&lt;access origin="<a href="http://disq.us/url?url=http%3A%2F%2Fpixelmarketing.com%3A5UrInty2os2ZkUBrB-Vqr4MbOK0&amp;cuid=3321886" rel="nofollow noopener" title="http://pixelmarketing.com">http://pixelmarketing.com</a>" subdomains="true" /&gt;<br>&lt;preference name="splash-screen-duration" value="5000" /&gt;<br>&lt;gap:splash src="splash.png" /&gt;</p><p>&lt;/widget&gt;</p><p>In the server side at my staging server, I have created a file login.php that includes:</p><p>&lt;?php<br>header('Content-type: application/json');<br>$email = strip_tags($_POST["username"]);<br>$p = strip_tags($_POST["password"]);</p><p>	define ("USER", "username");<br>	define ("PWD", "password");<br>	define ("DBNAME", "dbname");</p><p>	// connect to the server<br>	function connect_server(){<br>	$_db_host = "localhost"; <br>	$_db_username = USER;<br>	$_db_passwort = PWD;</p><p>      // Serververbindung herstellen<br>      $link = mysql_connect($_db_host, $_db_username, $_db_passwort) or die("Keine Serververbindung möglich: " . mysql_error());<br>      return $link;<br>   }<br>   //connect to the Database<br>    function connect_db($link){<br>      $_db_name = DBNAME;<br>      // Verbindung zur richtigen Datenbank herstellen<br>      $datenbank = mysql_select_db($_db_name, $link) or die("Failed to connect to DB " . mysql_error());<br>      if (!$datenbank){   <br>            mysql_close($link);     # Datenbank schliessen<br>            echo 'Failed to connect to DB &lt;br/&gt;'; <br>            exit;   # Programm beenden !<br>      }</p><p>      return $datenbank;<br>   }</p><p>    $con = connect_server();<br>    connect_db($con);</p><p>    //Email and Pass testen</p><p>    $result1=mysql_query("SELECT email, password FROM users WHERE email = '$email' AND password = '$p' ")or die(mysql_error());</p><p>if(mysql_num_rows($result1)&gt;0)<br>{ <br>     return true;<br>}else{</p><p>	echo "email or password is incorrect";</p><p>} <br>mysql_close($con);</p><p>?&gt;</p><p>=======================</p><p>Using Postman restclient in google chrome  i have checked that the php file returns the perfect result, but not the android app after developing and installing in on my android phone</p><p>Being a newbie, i am unable to understand the issue. Can you (Raymond) or anyone else here help me in getting what is the issue where i am lacking in.</p><p>Thanks <br>Tusar</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736680">170</a> by Raymond Camden
		posted on 9/14/2013 at 8:05 PM
		</div>
		<div class="comment_text"><p>Can you confirm the AJAX call is being made? Perhaps with a simple alert?</p><p>Also, in the future, please do not post blocks of code. Please use a Gist or Pastebin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736682">171</a> by Lukas
		posted on 9/18/2013 at 6:41 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>is there any way to hide the login Screen when preAuth? When I start the app the Login Screens appears for about half a second and after successful login it redirects to my first page. I want to get rid of that half a second login screen.</p><p>Thank you in advance. <br>Btw: Great Blog, helped a lot in the past!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736690">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736690">172</a> by Raymond Camden
		posted on 9/19/2013 at 6:12 PM
		</div>
		<div class="comment_text"><p>Oh yeah, you definitely could. I don't have the code for that, but I'd use some logic to simply load a different page if preAuth can be tried, and if not, load the normal login screen.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736681">173</a> by Buby-
		posted on 10/12/2013 at 11:58 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, <br>I can't make the handleLogin() fired..</p><p>I've put an alert in it but it doesn't appear.<br>all my code is the same as the code above.<br>when I clicked the button Login, the alert won't come.</p><p>function handleLogin() {<br>    var form = $("#loginForm");   <br>	alert("I'm submit");  <br>    //disable the button so we can't resubmit while we wait<br>    $("#submitButton",form).attr("disabled","disabled");<br>..................................<br>..................................</p><p>thanks for your help, Regards.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736686">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736686">174</a> by Raymond Camden
		posted on 10/13/2013 at 5:47 PM
		</div>
		<div class="comment_text"><p>Is deviceready firing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736687">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736687">175</a> by xavier
		posted on 10/31/2013 at 5:37 AM
		</div>
		<div class="comment_text"><p>I have used this login concept and works fine. Now I am trying to add an auto check which would run for every change of page, every button click by the user. In my app, the requirement is that once the user is logged in, the login is valid for only that day. So, after a successful login, the login date is stored in localStorage. The next day, the first action by the user should take him to the login screen. For this to happen, I need to keep checking if the login is current at every point.</p><p>Wondering if there is a clean way to do this, other  than adding the check in every function and every page init code. Some event I can tap into using jQuery to do this and where to place that code.</p><p>Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736688">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736688">176</a> by Raymond Camden
		posted on 11/1/2013 at 3:20 PM
		</div>
		<div class="comment_text"><p>I can't think of any simple way to say, "before any action, run X", in vanilla JS. I'm sure Angular or Backbone has an easy way to do this but I assume you aren't using this or you would have mentioned it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736689">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736689">177</a> by Ali
		posted on 11/5/2013 at 7:37 AM
		</div>
		<div class="comment_text"><p>I dont understand. I need attached file :/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736692">178</a> by Raymond Camden
		posted on 11/5/2013 at 5:15 PM
		</div>
		<div class="comment_text"><p>I've provided all the client side code and explained in multiple comments how the back end would work. If that isn't sufficient, then I'm not sure what else to give you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736691">179</a> by Martin
		posted on 12/2/2013 at 8:55 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>how would you organize the logout? through $pagechange?</p><p>martin</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736696">180</a> by Raymond Camden
		posted on 12/2/2013 at 9:17 PM
		</div>
		<div class="comment_text"><p>If we assume a logout button, like in the footer, then on click I'd call the server and run logout there and redirect the user to the home page on the PG app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736699">181</a> by nleggatt
		posted on 12/4/2013 at 12:58 AM
		</div>
		<div class="comment_text"><p>I'm curious about the security of the login form. It's posting over ajax (obviously because it's an app that communicates with the remote server) But couldn't that be sniffed and the u/p revealed? What other options do we have though??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736693">182</a> by Raymond Camden
		posted on 12/4/2013 at 2:41 AM
		</div>
		<div class="comment_text"><p>You would - I assume - be hitting a https server for the login.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736695">183</a> by Sejal
		posted on 12/28/2013 at 4:05 PM
		</div>
		<div class="comment_text"><p>Hi i want to use a "window.location.href="some.html" instead of "$.mobile.changePage("some.html")" this but when i used this way its not redirect "some.html" page</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736700">184</a> by Raymond Camden
		posted on 12/28/2013 at 5:56 PM
		</div>
		<div class="comment_text"><p>If you do that then you will need to wait for the deviceready event to fire again before you can use anything from PhoneGap. Just FYI.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736697">185</a> by JohnShea
		posted on 1/14/2014 at 8:50 PM
		</div>
		<div class="comment_text"><p>Hi i am having difficultly gettin this working with php. I know raymond is familiar with php but can someone else provide the php code that works with a mysql database</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736698">186</a> by Raymond Camden
		posted on 1/14/2014 at 9:03 PM
		</div>
		<div class="comment_text"><p>Um, Google "php database"? Isn't working with a database one of the core things PHP does?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736702">187</a> by Hnin Yee Maung Maung
		posted on 1/17/2014 at 3:17 PM
		</div>
		<div class="comment_text"><p>Thanks ..<br>Its very helpful to me...</p><p>Hnin Yee Maung Maung</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736703">188</a> by Briguez Abdulghafur
		posted on 1/25/2014 at 2:20 PM
		</div>
		<div class="comment_text"><p>i'm trying to run this code in <a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2F%3AwqvZuH4uGNLJxHEav6nGD8F2EEk&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/">http://jsfiddle.net/</a> and i'm getting such kind of error {"error": "Please use POST request"}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736704">189</a> by Raymond Camden
		posted on 1/25/2014 at 7:00 PM
		</div>
		<div class="comment_text"><p>So where is the jSFiddle link so I can run it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736705">190</a> by Briguez Abdulghafur
		posted on 1/26/2014 at 1:32 AM
		</div>
		<div class="comment_text"><p>that is the link with the same code you implement <a href="http://disq.us/url?url=http%3A%2F%2Fjsfiddle.net%2FWLmaz%2F%3APYJAGrlyGniRxcUx5StjTiOtl3Q&amp;cuid=3321886" rel="nofollow noopener" title="http://jsfiddle.net/WLmaz/">http://jsfiddle.net/WLmaz/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736706">191</a> by Raymond Camden
		posted on 1/26/2014 at 1:48 AM
		</div>
		<div class="comment_text"><p>Oh wait, you tried to run it at JSFiddle? You can't do cross domain XHR requests in a desktop browser unless you use CORS or JSON/P. You can also use the Ripple emulator.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736708">192</a> by Brieda Abdulghafur
		posted on 1/28/2014 at 3:10 PM
		</div>
		<div class="comment_text"><p>Thx Ray, it's working very fine... I'm a new on this phonegap platform i'm building my software project in jsp and phonegap.... and i'm using my jsp in another computer when i'm connecting that project on the browser to this address "http://192.168.0.103:8080/Myproject/api/books " i can be in its apache server and see my json file but if i'm trying to that web server on my phonegap application i'm able to connected with that, i have tried with the android ip which is 10.0.2.1 or x.x.x.2 or .3... can u plz help me out</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736707">193</a> by Raymond Camden
		posted on 1/29/2014 at 8:20 PM
		</div>
		<div class="comment_text"><p>I'm not sure I understand your English. It sounds like you are saying that you are testing on a mobile device trying to hit your dev server. If the IP is not working, I'd recommend looking at the &lt;access&gt; config docs at PhoneGap's site to ensure your app has access to the remote site. Another test - open your web browser on the device and type in the address. Ensure that works as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736709">194</a> by Briguez Abdulghafur
		posted on 1/30/2014 at 12:54 PM
		</div>
		<div class="comment_text"><p>when i'm using my web browser it works fine but when i'm testing on a mobile device or the emulator it's still loading and nothing is changed</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736713">195</a> by Raymond Camden
		posted on 1/30/2014 at 7:45 PM
		</div>
		<div class="comment_text"><p>So check the &lt;access&gt; docs: <a href="http://disq.us/url?url=http%3A%2F%2Fcordova.apache.org%2Fdocs%2Fen%2F3.3.0%2Fguide_appdev_whitelist_index.md.html%23Whitelist%2520Guide%3AVa-J167immYvgZXZG_Uhkx8oUmg&amp;cuid=3321886" rel="nofollow noopener" title="http://cordova.apache.org/docs/en/3.3.0/guide_appdev_whitelist_index.md.html#Whitelist%20Guide">http://cordova.apache.org/d...</a></p><p>Ensure you've added it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736712">196</a> by Briguez Abdulghafur
		posted on 2/4/2014 at 3:28 PM
		</div>
		<div class="comment_text"><p>thanks so much, i have handled that problem</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736711">197</a> by Brian
		posted on 2/9/2014 at 7:30 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I have tried to get this working with php connecting to a mysql database loads of times but still wont work. Could someone please upload an example to github using php and Raymonds code. Please</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736716">198</a> by Sagnik
		posted on 2/12/2014 at 12:11 PM
		</div>
		<div class="comment_text"><p>Hello!,<br>I am a student and trying to build my first html5 jquery mobile page. I am using dreamweaver. Can I get the files to the login page so that I can open it with chrome to view and dreamweaver cc to design?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736717">199</a> by Raymond Camden
		posted on 2/12/2014 at 5:46 PM
		</div>
		<div class="comment_text"><p>All the files are available in the blog post. The server side code is in one of the comments above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736715">200</a> by Sagnik
		posted on 2/14/2014 at 2:29 PM
		</div>
		<div class="comment_text"><p>I need to access the mssql database even when I am offline. Is it somehow possible to create  a database in html5 local storage and periodically update it when net is available? Or is there some other way? Please guide.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736714">201</a> by Raymond Camden
		posted on 2/15/2014 at 2:42 AM
		</div>
		<div class="comment_text"><p>Well, technically yes, it isn't really related to login though, but yes. You can use localStorage or Web SQL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736718">202</a> by swathi
		posted on 3/20/2014 at 1:50 PM
		</div>
		<div class="comment_text"><p>i tried this example with my webservice.. which checks with thedatabase and returens true when sucess login.. but nothing works..<br>please help me out</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736719">203</a> by swathi
		posted on 3/20/2014 at 2:23 PM
		</div>
		<div class="comment_text"><p>&lt;!DOCTYPE HTML&gt;</p><p>&lt;html&gt;</p><p>&lt;head&gt;</p><p>&lt;title&gt;PhoneGap Demo&lt;/title&gt;</p><p>&lt;meta name="viewport" content="width=device-width, initial-scale=1"&gt;<br>&lt;link rel="stylesheet" type="text/css" href="errorfile.css"/&gt;<br>&lt;link rel="stylesheet" type="text/css" href="jquery/css/<a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.4.0.min.css"/&gt;<br>&lt;script type="text/javascript" charset="utf-8" src="jquery/jquery-1.8.2.min.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" charset="utf-8" src="jquery/<a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.4.0.min.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" charset="utf-8" src="jquery/jQuery.Validate.min.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" charset="utf-8" src="cordova-2.7.0.js"&gt;&lt;/script&gt;<br>&lt;script type='text/javascript'&gt;<br>function init() {<br>document.addEventListener("deviceready", deviceReady, true);<br>delete init;<br>}</p><p>function deviceReady() {<br> navigator.notification.alert("login ");<br>$("#frmLogin").on("submit",function(e) {</p><p>    //disable the button so we can't resubmit while we wait<br>     $("#submit",this).attr("disabled","disabled");<br> var u = $("#username", this).val();<br> var p = $("#password", this).val();<br> if(u != '' &amp;&amp; p!= '') {<br>     $.post("http://10.0.11.103/amismobileapps/amismobileservices.asmx?", {UserName:u,pwd:p}, function(res) {<br>         if(res == true) {<br>            $.mobile.changePage("list.html");<br>        } else {<br>           navigator.notification.alert("Your login failed", function() {});<br>       }<br>        $("#submit").removeAttr("disabled");<br>    },"json");<br>}<br>return false;<br>});</p><p>}<br>&lt;/script&gt;</p><p>&lt;/head&gt;</p><p>&lt;body onload="init()"&gt;<br>&lt;div data-role="page"  data-theme="a" id="login" &gt;<br>&lt;div data-role="header" data-theme="b"&gt;<br>&lt;h1&gt;PhoneGap Demo&lt;/h1&gt;<br>&lt;/div&gt;<br>&lt;div data-role="content"&gt;<br> &lt;form id="frmLogin" data-ajax=false method="get" &gt;<br>      &lt;div data-role="fieldcontain"&gt;<br>        &lt;label for="username"&gt;<br>          &lt;em&gt;* &lt;/em&gt; UserName: &lt;/label&gt;<br>          &lt;input type="text" id="username" <br>            name="username" class="required" /&gt;<br>      &lt;/div&gt;</p><p>      &lt;div data-role="fieldcontain"&gt;<br>        &lt;label for="password"&gt; <br>          &lt;em&gt;* &lt;/em&gt;Password: &lt;/label&gt;<br>          &lt;input type="password" id="password" <br>            name="password" class="required" /&gt;<br>      &lt;/div&gt;</p><p>      &lt;div class="ui-body ui-body-b"&gt;<br>        &lt;button class="button" type="submit" id="submit"<br>          data-theme="a" minlength="5"&gt;Login&lt;/button&gt;<br>      &lt;/div&gt;<br>    &lt;/form&gt;<br> &lt;/div&gt;<br>&lt;/div&gt;<br>&lt;/body&gt;</p><p>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736721">204</a> by swathi
		posted on 3/20/2014 at 2:30 PM
		</div>
		<div class="comment_text"><p>nothing happens when i click on login button.. no errors too.. <br>have written the webservice to access the database of our service and returns boolean value on login..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736720">205</a> by Raymond Camden
		posted on 3/20/2014 at 3:09 PM
		</div>
		<div class="comment_text"><p>First, please do not post large code blocks in comments. Please use a Pastebin or Gist instead.</p><p>I'd start by seeing if the submit handler is working. Add an alert inside there and see if it fires.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736722">206</a> by KORIPALLI
		posted on 4/4/2014 at 9:08 AM
		</div>
		<div class="comment_text"><p>&lt;script type='text/javascript' &gt;<br> $(document).ready(function()  <br>{<br>$("#submit").click(function (e) {<br>e.preventDefault();</p><p>          var u = $("#username").val();<br>       var p = $("#password").val();<br>            authenticate(u, p);<br>        });<br>    });<br>    //  data: {UserName: userName, pwd: password},  <br> function authenticate(u, p) {<br> var serviceurl= "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fdemos%2F2011%2Fnov%2F10%2Fservice.cfc%3Fmethod%3Dlogin%26returnformat%3Djson%3A5dbSmmmtQkf7EauB-oM5jcprOMo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/demos/2011/nov/10/service.cfc?method=login&amp;returnformat=json">http://www.raymondcamden.co...</a>";<br>          $.ajax({<br>            url:serviceurl,<br>            type: 'GET',            <br>            contentType: "application/javascript",<br>            data: {username:u,password:p },<br>            dataType: 'JSONP', <br>            async : true,<br>            crossDomain: true,  <br>            jsonp: 'callback',<br>             jsonpCallback: 'jsonpCallback',         <br>            success: function(res)<br>           {<br>            alert("Web service call succeeded." );<br>        },<br>    error: function (error) <br>    { <br>    alert('ERROR has occurred!');<br>    alert(JSON.stringify(error))<br>     }<br>        })<br>    }<br>     &lt;/script&gt;</p><p>this is my script.. even though tour webservice is returning true or false why is it not going to sucess function it is going to error function.. this is the warning which i see in chrome</p><p>Resource interpreted as Script but transferred with MIME type text/html: "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Fdemos%2F2011%2Fnov%2F10%2Fservice.cfc%3Fmethod%3Dlogin%26ret%E2%80%A6on%26callback%3DjsonpCallback%26username%3Dadmin%26password%3Dpassword%26_%3D1396588140095%3ACbplioRtpddG7jP5aENSWtVfEuQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/demos/2011/nov/10/service.cfc?method=login&amp;ret…on&amp;callback=jsonpCallback&amp;username=admin&amp;password=password&amp;_=1396588140095">http://www.raymondcamden.co...</a>". jquery-1.8.2.min.js:2</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736723">207</a> by Raymond Camden
		posted on 4/4/2014 at 3:53 PM
		</div>
		<div class="comment_text"><p>*Please* do not post large blocks of code!</p><p>Tell me the URL of your instance of this and I'll give it a run to see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736727">208</a> by KORIPALLI
		posted on 4/5/2014 at 10:04 AM
		</div>
		<div class="comment_text"><p>am using your webservice in my script code... just to check whether its working for me or not.. guess its because your webservice just returns true or false not in exact json format..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736725">209</a> by Raymond Camden
		posted on 4/5/2014 at 3:57 PM
		</div>
		<div class="comment_text"><p>Um, is that a question, a comment?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736726">210</a> by mutago
		posted on 5/12/2014 at 9:22 AM
		</div>
		<div class="comment_text"><p>thank you so much for this app. i want to pass the session storage to a page eg. (welcome .html). so that when the user login, she will see something like "welcome mutago" where mutago is the name from session or localstorage.</p><p>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736724">211</a> by Raymond Camden
		posted on 5/12/2014 at 3:53 PM
		</div>
		<div class="comment_text"><p>Not quite sure I get your question here. Once a session is defined on the server, further AJAX calls will pass along the cookies required to associate the connection with the session. So if you hit a service on your server that returns the username, then it will work. That's how ColdFusion works w/ sessions and I'm sure other app servers are similar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736730">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736730">212</a> by shubham jaiswal
		posted on 5/13/2014 at 11:14 AM
		</div>
		<div class="comment_text"><p>Hi Raymond Sir,</p><p>I am a new developer. I have designed a login page which has to fetch data from remote server but its not working. Can u please suggest me</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736731">213</a> by Raymond Camden
		posted on 5/13/2014 at 4:27 PM
		</div>
		<div class="comment_text"><p>You need to figure out *how* it isn't working. Just saying "its not working" is not nearly helpful enough. Look into remote debugging (see my About Me page for links to articles I've done on this) and dig deeper.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736732">214</a> by shubham jaiswal
		posted on 5/15/2014 at 4:23 PM
		</div>
		<div class="comment_text"><p>I am using jsop for the interaction with server and using post method but somehow post is converted into get.what to do to correct this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736737">215</a> by Raymond Camden
		posted on 5/15/2014 at 4:25 PM
		</div>
		<div class="comment_text"><p>You can't post with JSON/P, you can only get. Why use JSON/P? Cordova apps can make XHR requests to other domains w/o using JSON/P.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736734">216</a> by shubham jaiswal
		posted on 5/15/2014 at 4:39 PM
		</div>
		<div class="comment_text"><p>yeah I have to authenticate the user.....Earlier I had used json but it was not working</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736738">217</a> by Raymond Camden
		posted on 5/15/2014 at 5:00 PM
		</div>
		<div class="comment_text"><p>It should work. Check to ensure your access value in config.xml is set to * or to the host you are trying to hit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736733">218</a> by Amyth Arora
		posted on 5/28/2014 at 9:04 PM
		</div>
		<div class="comment_text"><p>Hey Raymond,</p><p>First of, thanks for the great writeup. I see that in the above tutorial, we are trying to log the user in everytime the application is launched, does that mean the user is automatically logged-out when the application is closed ? Is there a way to keep the user logged-in (like sessions) as I require to send some push notifications to the device ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736735">219</a> by Raymond Camden
		posted on 5/28/2014 at 9:31 PM
		</div>
		<div class="comment_text"><p>Hmm, well, technically I'd have to guess no. The ajax calls from your application to the server pass on cookies that the server gave it originally. So if you close the app and restart it, the cookies should (afaik!) still exist and if you are within the session "window" of your remote server, it may not be required.</p><p>So you could write code to do a ping to the box to return a boolean for the current login status.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736736">220</a> by sergio
		posted on 5/30/2014 at 6:57 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, <br>thanks for your code, when I press login the application stuck and I from my logcat I get only this text "Ignore this event" of tag SoftKeyboard Detect, do you know why?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736740">221</a> by Raymond Camden
		posted on 5/30/2014 at 7:09 PM
		</div>
		<div class="comment_text"><p>I'd recommend using Chrome Remote Debugging instead. It should provide more detail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736739">222</a> by raunak
		posted on 6/3/2014 at 10:30 AM
		</div>
		<div class="comment_text"><p>Hello. I tried the following code but whenever i click the login button the app is stuck. wht should i do next?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736741">223</a> by raunak
		posted on 6/3/2014 at 10:40 AM
		</div>
		<div class="comment_text"><p>hello..Its mentioning an error " has no method "live" ". how should i sort it out?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736742">224</a> by thomas
		posted on 6/3/2014 at 11:16 AM
		</div>
		<div class="comment_text"><p>HI..I have an error while i run this code.. it shows "changePage of undefined" and its not able to load the some.html file. any help would be appreciated. thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736743">225</a> by Raymond Camden
		posted on 6/3/2014 at 6:32 PM
		</div>
		<div class="comment_text"><p>@raunak: You may be using a version of jQuery that no longer supports live, and requires on instead. You would need to update the core, or use the version of jQuery I did for the demo.</p><p>@thomas: If changePage is undefined, it sounds like the JS file didn't load right. Check your dev tools and see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736746">226</a> by kevin
		posted on 8/14/2014 at 11:10 AM
		</div>
		<div class="comment_text"><p>what if I want to create a login system which username and passwords are base on the active directory user lists? Any suggestion?</p><p>Thanks before :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736748">227</a> by Raymond Camden
		posted on 8/14/2014 at 2:32 PM
		</div>
		<div class="comment_text"><p>That would depend on your server. If you use PHP, then I'd Google for active directory and PHP.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736749">228</a> by kevin
		posted on 8/18/2014 at 6:16 AM
		</div>
		<div class="comment_text"><p>okay thanks sir :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736751">229</a> by Alice
		posted on 8/19/2014 at 6:29 PM
		</div>
		<div class="comment_text"><p>Hi,<br>i used the code it shows up but does not 'pushes' tothe other page. I added main.js and main page with loggin in, how to go to the next page after clicking 'submit' button?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736750">230</a> by Raymond Camden
		posted on 8/19/2014 at 6:32 PM
		</div>
		<div class="comment_text"><p>Can you confirm that changePage is being run after login? Simply add a console message before and after. Also check your console in general for any errors.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736752">231</a> by shabber
		posted on 9/18/2014 at 11:35 AM
		</div>
		<div class="comment_text"><p>Hi,<br>I am new to build phonegap apllication.<br>can anyone help me out to do it in a best way</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736753">232</a> by Raymond Camden
		posted on 9/18/2014 at 2:22 PM
		</div>
		<div class="comment_text"><p>@shabber: Your question is so overly broad I cannot really help you. I recommend you start with the documentation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736754">233</a> by Jonas
		posted on 9/21/2014 at 2:15 AM
		</div>
		<div class="comment_text"><p>Why storing the password into localStorage? that's very insecure in my opinion. From then on it's accessible also from other parts of the mobile phone, that's dangerous.</p><p>Why not doing that with a session having an ID that could be created on the server-side, saved to database and the sessionID is saved to authenticate again, later. Or something like that.<br>However, there are much better solutions!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736755">234</a> by Raymond Camden
		posted on 9/21/2014 at 3:54 AM
		</div>
		<div class="comment_text"><p>Fair point. If I did this now I'd only store the username.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736756">235</a> by Shankari
		posted on 10/10/2014 at 11:57 AM
		</div>
		<div class="comment_text"><p>Hello sir,<br>   I am new to learn the Phonegap.Basically am a .NET developer .But now i need to convert my php coding to phonegap sir.Please explain me from the top to bottom of this converting concept sir.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736757">236</a> by Raymond Camden
		posted on 10/10/2014 at 2:51 PM
		</div>
		<div class="comment_text"><p>I believe I may have mentioned this before, but I do not know PHP.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736758">237</a> by Ajay
		posted on 11/12/2014 at 5:13 PM
		</div>
		<div class="comment_text"><p>I want to store following json file on server .  <br>var employees = [<br>    {<br>    "firstName":"John",<br>    "lastName":"Doe"<br>    }, <br>    {<br>    "firstName":"Anna",<br>    "lastName":"Smith"<br>    },<br>    {<br>    "firstName":"Peter",<br>    "lastName":"Jones"<br>    },<br>];</p><p>when we store data on server side any code require on server side??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713736761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713736761">238</a> by Raymond Camden
		posted on 11/12/2014 at 6:57 PM
		</div>
		<div class="comment_text"><p>Not quite sure I get you. If you want to store something on the server, then yes, you need a server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1889376138">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_hls3t22T68.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1889376138">239</a> by Fernando
		posted on 3/5/2015 at 3:11 PM
		</div>
		<div class="comment_text"><p>Ray, this is great info! I have a question, do you think it is a good idea to store the user &amp; password values and use them on every call that you do to the server, to extract or post info into the database? I mean, like an alternative to create cookies... Thanks in advance!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1889515256">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1889515256">240</a> (In reply to <a href="#c_1889376138">#239</a>) by Raymond Camden
		posted on 3/5/2015 at 4:18 PM
		</div>
		<div class="comment_text"><p>I'd use session cookies instead - most app servers should support this and your Ajax requests will use them automatically.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1889645446">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_hls3t22T68.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1889645446">241</a> (In reply to <a href="#c_1889515256">#240</a>) by Fernando
		posted on 3/5/2015 at 5:07 PM
		</div>
		<div class="comment_text"><p>Thanks Ray! Keep up this good work! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2019797020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2019797020">242</a> by Javed
		posted on 5/12/2015 at 7:23 AM
		</div>
		<div class="comment_text"><p>HI Raymond. Thanks for this article. Forgive me if this sound stupid. But sending the username and password in the url, will it not expose to security threat.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2019939648">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2019939648">243</a> (In reply to <a href="#c_2019797020">#242</a>) by Raymond Camden
		posted on 5/12/2015 at 9:49 AM
		</div>
		<div class="comment_text"><p>I'd use a https url to help prevent it from being sniffed, and it isn't in the URL, but the form data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2092522314">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Ykgv6GTDwt.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2092522314">244</a> by Ramu
		posted on 6/22/2015 at 10:29 AM
		</div>
		<div class="comment_text"><p>Hi Richard, <br>First of all thanks for your source code, I'm new to phonegap and I tried the code above as follows but i used cordova.js instead of phonegap.js and i'm trying to check the login in mozilla browser i can't see any response in the mozilla console and when i ran the php api url with parameters, the api ulr is showing the values it is working fine.</p><p>I'm trying to alert the  res value , but it is not alerting  and in Android virtual device when i click the login button nothing happens<br>$.post("http://localhost/android_api/api.php?method=login&amp;returnformat=json", {username:u,password:p}, function(res) {</p><p>please help me to solve this problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2092636363">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2092636363">245</a> (In reply to <a href="#c_2092522314">#244</a>) by Raymond Camden
		posted on 6/22/2015 at 12:30 PM
		</div>
		<div class="comment_text"><p>localhost means your phone, not your local machine. You need to use the IP address of your computer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2094093058">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Ykgv6GTDwt.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2094093058">246</a> (In reply to <a href="#c_2092636363">#245</a>) by Ramu
		posted on 6/23/2015 at 4:37 AM
		</div>
		<div class="comment_text"><p>Thanks for your reply Raymond, I will check and get you back..</p></div>
	</div>
</div>
		
<div class="comment" id="c_2094106175">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Ykgv6GTDwt.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2094106175">247</a> (In reply to <a href="#c_2094093058">#246</a>) by Ramu
		posted on 6/23/2015 at 4:54 AM
		</div>
		<div class="comment_text"><p>Hi Raymond. I tried with the IP address but it is not working, please check the attached screen shot once. Please help me to solve this issue ASAP.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fmapp.post%3AmBd2FJ9s1otk15wv3nCl9ytFhLU&amp;cuid=3321886" rel="nofollow noopener" title="mapp.post">mapp.post</a>("http://192.168.0.102/android_api/api.php?method=login&amp;returnformat=json", {username:u,password:p}, function(res) {</p></div>
	</div>
</div>
		
<div class="comment" id="c_2094500401">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2094500401">248</a> (In reply to <a href="#c_2094106175">#247</a>) by Raymond Camden
		posted on 6/23/2015 at 12:29 PM
		</div>
		<div class="comment_text"><p>Oh you are testing in the browser? You said this, "i'm trying to check the login in mozilla browser", but I missed it. You need to enable CORS in your PHP code. It should be simple, but as I don't do PHP, I can't tell you how to do it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2095967768">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Ykgv6GTDwt.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2095967768">249</a> (In reply to <a href="#c_2094500401">#248</a>) by Ramu
		posted on 6/24/2015 at 4:25 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, <br>Thanks for your response and tried with that and it is working fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2098452211">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Ykgv6GTDwt.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2098452211">250</a> (In reply to <a href="#c_2095967768">#249</a>) by Ramu
		posted on 6/25/2015 at 5:03 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Thanks  in advance, I  want to logout from the app, can you please help me how can i logout from the app and redirect to  home page. I tried with different things on click on logout button  with jquery like<br>window.location="index.html";<br>navigator.app.loadUrl('index.html'); <br>window.history.go(-(history.length - 1));<br>but these are not working, and i'm checking in browser , once the user clicks the logout button it has to redirect the home page but it is staying on the same page and the logout jQuery code is as follows</p><p>$( "#logoutButton" ).click(function() {<br>window.localStorage.removeItem("username");<br>window.localStorage.clear(); <br>//window.location="index.html";<br>//navigator.app.loadUrl('index.html'); <br>window.history.go(-(history.length - 1));<br>//alert('cleaned');<br>});</p><p>Please help me to solve this issue ASAP.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2098896178">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2098896178">251</a> (In reply to <a href="#c_2098452211">#250</a>) by Raymond Camden
		posted on 6/25/2015 at 12:57 PM
		</div>
		<div class="comment_text"><p>Well, first off, jQuery Mobile provides an API to change views. See: <a href="http://disq.us/url?url=http%3A%2F%2Fapi.jquerymobile.com%2FjQuery.mobile.changePage%2F%3A2cKcluRE4CYU4QBxLJQ4pUO0icQ&amp;cuid=3321886" rel="nofollow noopener" title="http://api.jquerymobile.com/jQuery.mobile.changePage/">http://api.jquerymobile.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2101099284">
	<div>
		<img src="https://disqus.com/api/users/avatars/codesundar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2101099284">252</a> by Sundaravel M
		posted on 6/26/2015 at 10:06 AM
		</div>
		<div class="comment_text"><p>Login System using PHP &amp; MySQL <a href="http://disq.us/url?url=http%3A%2F%2Fbit.ly%2F1GN5aEt%3Am4ML7kmqp_Iekxy9AY991Wo3JX0&amp;cuid=3321886" rel="nofollow noopener" title="http://bit.ly/1GN5aEt">http://bit.ly/1GN5aEt</a>  <br>Build using @Ionicframework @phonegap @apachecordova</p></div>
	</div>
</div>
		
<div class="comment" id="c_2344366244">
	<div>
		<img src="https://disqus.com/api/users/avatars/m_mexia.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2344366244">253</a> by M.Mexia
		posted on 11/5/2015 at 4:49 PM
		</div>
		<div class="comment_text"><p>Hey Ray, would this code also work for a login in a web environment for desktop?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2344372486">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2344372486">254</a> (In reply to <a href="#c_2344366244">#253</a>) by Raymond Camden
		posted on 11/5/2015 at 4:52 PM
		</div>
		<div class="comment_text"><p>Sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2464416428">
	<div>
		<img src="https://disqus.com/api/users/avatars/ecribin.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2464416428">255</a> by Eoin Ó Cribín
		posted on 1/18/2016 at 12:34 PM
		</div>
		<div class="comment_text"><p>Hey saw you have a youtube channel do you have a video for this tutorial? Thanks though it looks great</p></div>
	</div>
</div>
		
<div class="comment" id="c_2464426701">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2464426701">256</a> (In reply to <a href="#c_2464416428">#255</a>) by Raymond Camden
		posted on 1/18/2016 at 12:44 PM
		</div>
		<div class="comment_text"><p>Sorry, no.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2464446406">
	<div>
		<img src="https://disqus.com/api/users/avatars/ecribin.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2464446406">257</a> (In reply to <a href="#c_2464426701">#256</a>) by Eoin Ó Cribín
		posted on 1/18/2016 at 1:03 PM
		</div>
		<div class="comment_text"><p>Probably a stuipid question but I am new to javascript and for some reason this isn't loading my main.js when I click submit in the browser! is there anything I need to add?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2464489360">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2464489360">258</a> (In reply to <a href="#c_2464446406">#257</a>) by Raymond Camden
		posted on 1/18/2016 at 1:38 PM
		</div>
		<div class="comment_text"><p>You should use Chrome Remote Debug or Safari Remote Debug to see if you can find an error. See my "About Me" page where I link to articles I've written on the topic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2464644204">
	<div>
		<img src="https://disqus.com/api/users/avatars/ecribin.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2464644204">259</a> (In reply to <a href="#c_2464489360">#258</a>) by Eoin Ó Cribín
		posted on 1/18/2016 at 3:33 PM
		</div>
		<div class="comment_text"><p>It's saying$<br>$("#loginPage").live("pageinit", function(e) {</p><p>checkPreAuth();</p><p>});</p><p>Reference can't be found</p></div>
	</div>
</div>
		
<div class="comment" id="c_2464669216">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2464669216">260</a> (In reply to <a href="#c_2464644204">#259</a>) by Raymond Camden
		posted on 1/18/2016 at 3:49 PM
		</div>
		<div class="comment_text"><p>Looks like jQuery is not loading. Did you include it? Do you see, earlier in console, an error for it loading?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2986132263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2986132263">261</a> (In reply to <a href="#c_1713736754">#233</a>) by Vright
		posted on 11/5/2016 at 2:08 PM
		</div>
		<div class="comment_text"><p>how does Facebook remember your password? through your browser ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3313208226">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_BygRvuXF2g.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3313208226">262</a> by Shaun Pritchard
		posted on 5/18/2017 at 9:27 PM
		</div>
		<div class="comment_text"><p>if you wanted to assign an ID for everyone who joined so you could track the user submissions. For example if I built another page that could take photos and collect a parigraph of text and they submit it to the data base then on another page I call the data to see the image, text and there ID. How can this be done??</p></div>
	</div>
</div>
		
<div class="comment" id="c_3313501023">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3313501023">263</a> (In reply to <a href="#c_3313208226">#262</a>) by Raymond Camden
		posted on 5/19/2017 at 1:34 AM
		</div>
		<div class="comment_text"><p>Well this demo has login, not registration, but that could be done. User registration would depend on your back end system, but there are many examples of that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3480819895">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_bSHoeO0qPD.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3480819895">264</a> by tom
		posted on 8/22/2017 at 9:42 AM
		</div>
		<div class="comment_text"><p>"Another issue - and one I do not have a good feel for - is how secure <br>the local storage data will be on the device. Use with caution!"</p><p>Don not use this code!!! This guy does not even understand the basic of security!!!<br>Also, since he has no clues, you will send the password in CLEAR TEXT!! LMAO, what a noob.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3480907219">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3480907219">265</a> (In reply to <a href="#c_3480819895">#264</a>) by Raymond Camden
		posted on 8/22/2017 at 11:26 AM
		</div>
		<div class="comment_text"><p>Hey Tom. thanks for the comments. Let me address them.</p><p>* send in clear text: My assumption was that no one would use this on a http server. My blog (at the time) was using http, but that was just for the demo. However, I should have made that clear. I'm going to add some text on that now.</p><p>* Since I wrote this six years ago, there is now a plugin to handle secure local storage. I'd recommend that as well. I'll add a note on that too. (I wrote a blog post much more recent that covers that.)</p><p>Again, thanks for the feedback!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3767161973">
	<div>
		<img src="https://disqus.com/api/users/avatars/jemanehaklog.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3767161973">266</a> by Jemaneh Aklog
		posted on 2/20/2018 at 11:41 AM
		</div>
		<div class="comment_text"><p>hello sir, can i have a project, please!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3767344135">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3767344135">267</a> (In reply to <a href="#c_3767161973">#266</a>) by Raymond Camden
		posted on 2/20/2018 at 2:25 PM
		</div>
		<div class="comment_text"><p>All of the code is available in the blog post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3835028069">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_tE67s4varT.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3835028069">268</a> by Susanto
		posted on 4/2/2018 at 3:14 AM
		</div>
		<div class="comment_text"><p>Are you passing the password to "Online" Web service without any encryption? if there was a way, may you give suggestions?</p><p>I want to pass login username and password from Phonegap to my web service in other server. If i pass it un-encrypted, i think it will be unsecured.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3835436830">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3835436830">269</a> (In reply to <a href="#c_3835028069">#268</a>) by Raymond Camden
		posted on 4/2/2018 at 1:24 PM
		</div>
		<div class="comment_text"><p>No - you should POST to a https URL only.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3958434948">
	<div>
		<img src="https://disqus.com/api/users/avatars/rudyraito.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3958434948">270</a> by Rudy Raito
		posted on 6/24/2018 at 7:54 AM
		</div>
		<div class="comment_text"><p>hi raymond, i tried your code, but the style cannot appear, it is just like basic form.<br>i use <a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.4.5 so I change several times your code but there is no change.<br>Here it is one of example change.</p><p>&lt;link rel="stylesheet" href="<a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.4.5/<a href="http://disq.us/url?url=http%3A%2F%2Fjquery.mobile%3AuujMvSFcfuqCiEljo0g2drnq9j0&amp;cuid=3321886" rel="nofollow noopener" title="jquery.mobile">jquery.mobile</a>-1.4.5.css" type="text/css" charset="utf-8"/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_3960122391">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3960122391">271</a> (In reply to <a href="#c_3958434948">#270</a>) by Raymond Camden
		posted on 6/25/2018 at 3:17 PM
		</div>
		<div class="comment_text"><p>Best I can suggest is using remote debug to see if something failed to load.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4273143454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4273143454">272</a> by divs
		posted on 1/7/2019 at 6:27 AM
		</div>
		<div class="comment_text"><p>Hi. I am new to the ajax request to the server. Can you explain this line.https://<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdemos%2F2011%2Fnov%2F10%2Fservice.cfc%3Fmethod%3Dlogin%26returnformat%3Djson%3Ail8U-7Tr2_ocms2N6nuMq4S_dWM&amp;cuid=3321886" rel="nofollow noopener" title="www.coldfusionjedi.com/demos/2011/nov/10/service.cfc?method=login&amp;returnformat=json">www.coldfusionjedi.com/demo...</a>"<br>And lease provide the code specified in the service.cfc</p></div>
	</div>
</div>
		
<div class="comment" id="c_4273757915">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4273757915">273</a> (In reply to <a href="#c_4273143454">#272</a>) by Raymond Camden
		posted on 1/7/2019 at 5:00 PM
		</div>
		<div class="comment_text"><p>service.cfc simply checked the values to see if they were valid for login - which in my demo was hard coded. As to your first request, it got garbled - can you ask again?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4464674096">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ZnfEJ0sNRF.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4464674096">274</a> by Ki Ki
		posted on 5/16/2019 at 12:16 PM
		</div>
		<div class="comment_text"><p><a href="https://uploads.disquscdn.com/images/7a80fb85e1168204aab63d7612ec566809e3167593735964b9e2dd64957d067a.png" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/7a80fb85e1168204aab63d7612ec566809e3167593735964b9e2dd64957d067a.png">https://uploads.disquscdn.c...</a></p><p>Hi, I get this error. I dont know what it is and how to fix it.<br>I hope some one can help me with this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4464781465">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4464781465">275</a> (In reply to <a href="#c_4464674096">#274</a>) by Raymond Camden
		posted on 5/16/2019 at 1:47 PM
		</div>
		<div class="comment_text"><p>You're trying to hit a file:// URL? That's not going to work - you need to hit a proper server using https. (http is allowed, but I'd avoid it.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4464792199">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ZnfEJ0sNRF.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4464792199">276</a> (In reply to <a href="#c_4464781465">#275</a>) by Ki Ki
		posted on 5/16/2019 at 1:56 PM
		</div>
		<div class="comment_text"><p>I'm trying to get this working on localhost. My connection with the DB is fine. But when I'm trying to register some one or something I get this error and nothing will write to the DB.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4464793620">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4464793620">277</a> (In reply to <a href="#c_4464792199">#276</a>) by Raymond Camden
		posted on 5/16/2019 at 1:57 PM
		</div>
		<div class="comment_text"><p>Well remember localhost on the phone is the phone, not your desktop.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4464797418">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ZnfEJ0sNRF.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4464797418">278</a> (In reply to <a href="#c_4464793620">#277</a>) by Ki Ki
		posted on 5/16/2019 at 2:00 PM
		</div>
		<div class="comment_text"><p>I first wanna build it on desktop. With my localhost. When it works I wanna build it to mobile.</p><p>Or is it impossible to get this working on desktop with localhost?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4464824277">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4464824277">279</a> (In reply to <a href="#c_4464797418">#278</a>) by Raymond Camden
		posted on 5/16/2019 at 2:21 PM
		</div>
		<div class="comment_text"><p>You'll need to set up a proper application server to handle your login though, not something you'd hit via file://.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4464831560">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ZnfEJ0sNRF.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4464831560">280</a> (In reply to <a href="#c_4464824277">#279</a>) by Ki Ki
		posted on 5/16/2019 at 2:26 PM
		</div>
		<div class="comment_text"><p>How can I do it the right way? Can u show me how? How to write/code it? U would help me allot!</p></div>
	</div>
</div>
		
<div class="comment" id="c_4464936722">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4464936722">281</a> (In reply to <a href="#c_4464831560">#280</a>) by Raymond Camden
		posted on 5/16/2019 at 3:44 PM
		</div>
		<div class="comment_text"><p>I can't help you to write a back end service. If you have -no- experience with back end stuff I'd suggest picking up Node. Also, if you just want authentication in a simple way, see <a href="http://disq.us/url?url=http%3A%2F%2FAuth0.com%3Al1UJ-3sPYNyjvH0sZ_gBJrlDKME&amp;cuid=3321886" rel="nofollow noopener" title="Auth0.com">Auth0.com</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4465853298">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ZnfEJ0sNRF.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4465853298">282</a> (In reply to <a href="#c_4464936722">#281</a>) by Ki Ki
		posted on 5/17/2019 at 8:16 AM
		</div>
		<div class="comment_text"><p>I can write thing to database and get data from database. Thanks for helping with that problem. Now I have a new problem.<br>When I try to login it gets stuck at Authenticatin.... and it will not redirect to the welcome.html page</p></div>
	</div>
</div>
		
<div class="comment" id="c_4466223560">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4466223560">283</a> (In reply to <a href="#c_4465853298">#282</a>) by Raymond Camden
		posted on 5/17/2019 at 2:59 PM
		</div>
		<div class="comment_text"><p>Do you see any errors in the console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4467618982">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ZnfEJ0sNRF.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4467618982">284</a> (In reply to <a href="#c_4466223560">#283</a>) by Ki Ki
		posted on 5/18/2019 at 5:31 PM
		</div>
		<div class="comment_text"><p>No errors in the console</p></div>
	</div>
</div>
		
<div class="comment" id="c_4469722154">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4469722154">285</a> (In reply to <a href="#c_4467618982">#284</a>) by Raymond Camden
		posted on 5/20/2019 at 1:48 PM
		</div>
		<div class="comment_text"><p>Sorry not sure what else to tell you. You would need to look at the code handling the result. See why it isn't doing the redirect. Add some simple logging if you have to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4469724916">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ZnfEJ0sNRF.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4469724916">286</a> (In reply to <a href="#c_4469722154">#285</a>) by Ki Ki
		posted on 5/20/2019 at 1:50 PM
		</div>
		<div class="comment_text"><p>Thanks tot the support. I just fixed it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4895278640">
	<div>
		<img src="https://disqus.com/api/users/avatars/dariusperini.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4895278640">287</a> by dariusperini
		posted on 4/30/2020 at 1:17 AM
		</div>
		<div class="comment_text"><p>Thank you very much for your tutorial ! It helped me a lot to build my own first login app !</p></div>
	</div>
</div>
		