
<div class="comment" id="c_1713732660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732660">1</a> by MB
		posted on 5/31/2011 at 8:07 PM
		</div>
		<div class="comment_text"><p>the link seems to be broken to the file.</p><p>404 - File or directory not found.<br>The resource you are looking for might have been removed, had its name changed, or is temporarily unavailable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732659">2</a> by Raymond Camden
		posted on 5/31/2011 at 8:10 PM
		</div>
		<div class="comment_text"><p>Looks to be an IIS issue. Need to make it treat FXP as binary so it will be downloaded.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732662">3</a> by Raymond Camden
		posted on 5/31/2011 at 8:17 PM
		</div>
		<div class="comment_text"><p>Try now please.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732664">4</a> by MB
		posted on 6/1/2011 at 2:25 AM
		</div>
		<div class="comment_text"><p>All good..thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732665">5</a> by Brian Bishop
		posted on 9/22/2011 at 12:24 PM
		</div>
		<div class="comment_text"><p>Boom! this is exactly what I needed. Was previously trying to have a ViewNavigatorApplication that then switches to a TabbedNavigatorApplication - was a bit bulky</p><p>P.S. I have a demo on my blog and links to a tutorial on how to get mobile Flex apps to run in the browser... would be really cool for this sort of demo... let me know if you get it up and running:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732667">6</a> by vinod
		posted on 2/3/2012 at 11:49 AM
		</div>
		<div class="comment_text"><p>Thanks working good .<br>Is this possible to use the sqlite for storing username and password.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732663">7</a> by Raymond Camden
		posted on 2/3/2012 at 4:57 PM
		</div>
		<div class="comment_text"><p>Sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732670">8</a> by Matt
		posted on 4/15/2012 at 4:28 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, I found your post very useful but I'm still facing a problem that I can't seem to resolve and maybe you could help me with it (I've been programing on FB for only two months and I'm still on a learning stage).</p><p>In your code for username verification, you showed us this:</p><p>09   protected function handleLogin(event:MouseEvent):void {<br>10        if(username.text == "user" &amp;&amp; password.text == "password") {<br>11            FlexGlobals.topLevelApplication.loadMain();<br>12        } else {<br>13            statusLabel.text = "Incorrect. (Try user/password)";</p><p>Now, I believe that if I type "user" as my username and "password" as the password, the app would allow me to go to the next stage.</p><p>Having said that, my main issue comes when I create new users in the registration view. I've created a db using SQLite where I store Users/Passwords but I can't seem to find a validation method so that new users/passwords could function next time I try to login to the app.</p><p>Would you mind helping me with that or at least share any link where this problem is solved? I've been surfing the web for over an hour now and I can't seem to find what I'm looking for.</p><p>Thanks a lot!<br>Matt</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732668">9</a> by Raymond Camden
		posted on 4/16/2012 at 12:26 AM
		</div>
		<div class="comment_text"><p>The main thing would be to change line 10 above to a SQL call that takes in the input and sees if it matches a row in the table. Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732669">10</a> by PhamHuyAnh
		posted on 4/28/2012 at 9:54 PM
		</div>
		<div class="comment_text"><p>Perfect sample!!<br>You rock!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732671">11</a> by Jeremy Keczan
		posted on 9/5/2012 at 9:34 PM
		</div>
		<div class="comment_text"><p>After working with Flex Mobile for the past year I find the best practice is to avoid Flex Globals because it severely limits the reuse of code.</p><p>The easiest way in my opinion is to completely incapsulate the login as a component and simple create a LoginComponentEvent to pass events from the login into something else.</p><p>I usually does this with VGroups if the login will be put in a view or use an actual view if the login is meant to stand alone.</p><p>Just my two cents</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732666">12</a> by Yogesh
		posted on 9/6/2012 at 9:37 PM
		</div>
		<div class="comment_text"><p>Hey m very new.. i have used this code bt it throwing exception..</p><p>ReferenceError: Error #1069: Property loadMain not found on LoginRegister and there is no default value.<br>	at views::LoginView/handleLogin()[D:\Work\LoginRegister\flex_src\views\LoginView.mxml:11]<br>	at views::LoginView/___LoginView_Button1_click()[D:\Work\LoginRegister\flex_src\views\LoginView.mxml:29]</p><p>hey plz tell me how can i remove this..m nt a professional developer but want to develop an app in flex. this is my very first try.. so plz help me ..Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732672">13</a> by Jeremy Keczan
		posted on 9/11/2012 at 7:47 PM
		</div>
		<div class="comment_text"><p>It looks like either the function is private in your code, can you post the file you are using?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732673">14</a> by Yogesh
		posted on 9/12/2012 at 3:42 PM
		</div>
		<div class="comment_text"><p>Oh sry sir I loss the code..<br>Sir will u guide me about developing a mobile application in flex 4.6.?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732675">15</a> by Jeremy Keczan
		posted on 9/12/2012 at 6:01 PM
		</div>
		<div class="comment_text"><p>I can not guide you personally but there is some really good tutorials out there and the adobe evangelicals do a create job of posting updates on their blogs about flex 4.6. I would advise starting there .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732676">16</a> by Danny
		posted on 9/12/2013 at 6:55 PM
		</div>
		<div class="comment_text"><p>how to login out after being load to main application.. pls help tq</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732677">17</a> by xiangrumei
		posted on 6/25/2014 at 8:42 AM
		</div>
		<div class="comment_text"><p>when i add icon to vn1, var vn1:ViewNavigator = new ViewNavigator();  like this<br> vn1.icon  = "@Embed('assets/pageimg/my.png')"; it isn't work, can you tell me why. how can i do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732680">18</a> by Raymond Camden
		posted on 6/25/2014 at 6:03 PM
		</div>
		<div class="comment_text"><p>Sorry, I haven't used Flex Mobile in over 2 years.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732683">19</a> by Vijay
		posted on 7/14/2014 at 10:48 AM
		</div>
		<div class="comment_text"><p>Is there a way to keep Flex Mobile Application logged in always as of gmail and other mobile applications do, on smartphones. It should ask for login only once and stay logged in even if i don't use application for long, unless i personally logout</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732681">20</a> by Raymond Camden
		posted on 7/14/2014 at 5:52 PM
		</div>
		<div class="comment_text"><p>You could cache the authentication values locally, but that could be insecure. You could issue a token from the server that is timed, ie, if the remote device passes the token, it auto logs in but the token only works for 7-14 days.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1865055155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1865055155">21</a> (In reply to <a href="#c_1713732680">#18</a>) by Andy
		posted on 2/20/2015 at 3:32 AM
		</div>
		<div class="comment_text"><p>Hey Raymond,<br>Found this tip on switching tabs really useful, thanks for that. I felt compelled to say thanks, specially when I read that you havent used Flex Mobile in over 2 years. That made me a bit sad ;-) What do you use instead these days? I left for a while too, but came back to Apache Flex 4.14 recently, and am liking the way Flex works again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1865056701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1865056701">22</a> (In reply to <a href="#c_1713732680">#18</a>) by Andy
		posted on 2/20/2015 at 3:33 AM
		</div>
		<div class="comment_text"><p>By the way, you helped me a fair bit back in the day. Adobe Evangelists were omnipresent in Google, and you and Devgirl always had the answers! Happy days...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1865062903">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1865062903">23</a> (In reply to <a href="#c_1865056701">#22</a>) by Raymond Camden
		posted on 2/20/2015 at 3:39 AM
		</div>
		<div class="comment_text"><p>Glad to have been helpful. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1865063165">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1865063165">24</a> (In reply to <a href="#c_1865055155">#21</a>) by Raymond Camden
		posted on 2/20/2015 at 3:40 AM
		</div>
		<div class="comment_text"><p>I use Cordova pretty much exclusively. :)</p></div>
	</div>
</div>
		