
<div class="comment" id="c_1713653903">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653903">1</a> by Michael ONeil
		posted on 6/7/2006 at 12:44 AM
		</div>
		<div class="comment_text"><p>Hi Ray, Is there supposed to be a ZIP file with this entry?</p><p>Cheers,<br>Michael</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653905">2</a> by Raymond Camden
		posted on 6/7/2006 at 12:47 AM
		</div>
		<div class="comment_text"><p>Can you say oops. Going to go attach now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653904">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653904">3</a> by Raymond Camden
		posted on 6/7/2006 at 12:48 AM
		</div>
		<div class="comment_text"><p>Fixed, thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653906">4</a> by Michael
		posted on 6/8/2006 at 1:59 AM
		</div>
		<div class="comment_text"><p>You might want to change the verify element to something like HASH(email).  This is because some spam filters will block any incoming email that includes the recipients address in a url.  I ran into this problem when I first started accepting newsletter subscriptions.</p><p>Also it is a good practice to include a time-stamp in the database along with the verified = true field.  That way you can setup a CF task that will send out reminders to your readers after... say a week, month, and so on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653908">5</a> by Andrew
		posted on 6/8/2006 at 8:52 PM
		</div>
		<div class="comment_text"><p>Thank you for this series. I've been developing for years and miss all the new features because I've used the same CRUD methods for eternity. It's nice to look up from the code once and awhile and see how CF has come so far when utilized properly and creatively. Your practical examples, explained practically, is the best way to learn.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653910">6</a> by Steve
		posted on 6/20/2006 at 12:34 AM
		</div>
		<div class="comment_text"><p>How do you pass new variables into the subscribe method? I am trying to add a first and last name fields. I thought I could add them to the form and then use the CFARGUMENT tag with the same name, but I get errors saying that firstName was not passed in.</p><p>Any help would be greatly appreciated.</p><p>Steve</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653907">7</a> by Raymond Camden
		posted on 6/20/2006 at 5:12 AM
		</div>
		<div class="comment_text"><p>Well you modify the call on the public side, where you have subscribe(form var, form var, etc) and you modify it on the CFC side. Also remember that I think I cached the CFC in the Application scope, so you might have to refresh that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653909">8</a> by Steve
		posted on 6/20/2006 at 7:03 PM
		</div>
		<div class="comment_text"><p>I'm pretty new at CFC's and methods. Where on the public side do I call the subscribe(form var, form var, etc)? I think I have everything on the CFC side, but I still don't quite understand how to pass the form vars into the CFC.</p><p>Steve</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653913">9</a> by Raymond Camden
		posted on 6/21/2006 at 12:47 AM
		</div>
		<div class="comment_text"><p>It is in the same page that has the actual subscribe form. Check there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653912">10</a> by Steve
		posted on 6/21/2006 at 1:57 AM
		</div>
		<div class="comment_text"><p>I got it to work. The subscribe(form.var, etc) was in a &lt;cfif&gt; tag and I figured I didn't need to add my new form vars to that specific tag.</p><p>Thanks again for the great tutorial, help, and intro to CFC's!</p><p>Steve</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653911">11</a> by Raymond Camden
		posted on 6/21/2006 at 1:59 AM
		</div>
		<div class="comment_text"><p>Glad you got it. Sorry if I was a bit short - I'm on vacation till tomorrow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653915">12</a> by Steve
		posted on 6/21/2006 at 8:53 AM
		</div>
		<div class="comment_text"><p>Not a problem. Even Jedi need rest.</p><p>Steve</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653914">13</a> by Peter
		posted on 10/22/2006 at 4:31 AM
		</div>
		<div class="comment_text"><p>I have been trying to load the DB into MYSQL thru the MYSQL administrator and it is not working. When i load the file in it says it has 0 tables. Can someone help me out? I am running MYSQL on mc os x</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653916">14</a> by Carlos
		posted on 3/28/2007 at 1:15 AM
		</div>
		<div class="comment_text"><p>Hey Ray, last question (hopefully). Do you know if this mailing list application is capable of sending html newsletters?</p><p>thanks,<br>Carlos</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653918">15</a> by Raymond Camden
		posted on 3/28/2007 at 1:22 AM
		</div>
		<div class="comment_text"><p>No problem on the questions - just remember my wish list. ;)</p><p>If you set the cfmail tag to use type=html, it should work just fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653917">16</a> by Liz Maher
		posted on 5/9/2007 at 10:09 PM
		</div>
		<div class="comment_text"><p>Carlos, I don't see why it can't. The cfmail tag specifies text or HTML email so set it to HTM.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653921">17</a> by James Bixler
		posted on 5/16/2007 at 3:32 AM
		</div>
		<div class="comment_text"><p>First off, Thank You for a great tutorial. I've been working with CFML for three years now (though I am far from being an expert, let alone deemed proficient) and with the aid of your maillist tutorial, I'm ready to add a mailing list feature to my rare book web site. However, instead of using the mySQL, I want to try to run your tutorial using an MS Access Database on my web server (in place of the mySQL). Here’s what I’ve got so far: Your files are loaded on my web server, but every time I run subscribe.cfm, I get this error: Invalid parser construct found on line 7 at position 72. ColdFusion was looking at the following text: <br>.<br>Invalid expression format. The usual cause is an error in the expression structure. <br>The last successfully parsed CFML construct was a CFSET tag occupying document position (7:4) to (7:9).<br>The code at line 7 is: <br>“&lt;cfset token =application.maillist.getsubscriber(form.emailaddress).token&gt;”</p><p>Now I’m unclear about this but guessing that the problem above might be with the term “maillist” and that I don’t have a DSN called maillist. But correct me, and guide me if I’m wrong.</p><p>I have created a table in my Access DB called "Subscribers" and have three columns, ID, email, token. But I'm unclear as to where I would change the DSN name from your calling it "maillist" to my actual DSN that points to the Access DB. Do I have to do a find and replace throughout all the files you provided or only in certain parts? And furthermore, would replacing “maillist” with my actual DSN that points to my Access database actually make the whole thing work, or am I just spinning my wheels here? Your counsel will greatly be appreciated and I've checked out your wishlist. I don't sell any of those books on your list, but you never know when I find stuff... or buy stuff. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653920">18</a> by Raymond Camden
		posted on 5/16/2007 at 5:04 PM
		</div>
		<div class="comment_text"><p>No, it isn't a DSN issue. It doesn't like the syntax. What version of CF are you running?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653919">19</a> by Gavy
		posted on 2/22/2008 at 8:07 PM
		</div>
		<div class="comment_text"><p>Hi, Ray well how about to use the web schedular with the mailing list, like wanna send the mails to 5000 people so it should send 200 mails every one hour using the schedular, how this can be used?</p><p>have you have some idea in this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653923">20</a> by Raymond Camden
		posted on 2/22/2008 at 8:11 PM
		</div>
		<div class="comment_text"><p>You could do that. You would need to record, in the db, a status that records that last # mailed. That way you don't lose track and remail people.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653925">21</a> by M.
		posted on 8/28/2008 at 8:36 AM
		</div>
		<div class="comment_text"><p>So how *would* one change the DSN name? I see the question asked more than once in the comments amongst the 5 entries of this series, but no answer.</p><p>I'm an ex-programmer, started with CF in 2001 and I don't know anything about CFCs, which are new since I got out of the biz. I do have one little CF website that I still maintain pro bono, and now they desperately need an emailer... so I'm torn between my desire for code that's smart/reusable, yet not toooo time-consuming to implement. I don't mean to be lazy, but I'm a busy girl these days and don't have the bandwidth to learn CFC theory! Your code looks really well thought out but being unable to get past DSN name errors is making me feel like a rank n00b all over again... I'd be grateful for any help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653927">22</a> by Raymond Camden
		posted on 8/28/2008 at 6:48 PM
		</div>
		<div class="comment_text"><p>M - the DSN value is set when the CFCs are created. If you go back to step 1 (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2006%2F5%2F22%2FCreating-a-Mailing-List-in-ColdFusion-Part-1%29%3A17hsYg3I6lkLS4i0f9otZEuk9tY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2006/5/22/Creating-a-Mailing-List-in-ColdFusion-Part-1)">http://www.coldfusionjedi.c...</a>, you will see the init function of the CFC takes a DSN argument. So if you define a DSN using an application variable, you can pass it in then.</p><p>I know you don't have a lot of time, but it wouldn't take you more than an hour or so to read the basic docs on CFCs and get acquainted with them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653930">23</a> by Ulric
		posted on 11/18/2009 at 5:26 PM
		</div>
		<div class="comment_text"><p>Great mailing list article! One question: In terms of the backend view - will the lists/s of subscribers be (eventually) really long pages or do you have next and last paging in there. While I can build this sort of feature into my apps - I think I would struggle with the CFC approach.<br>Many thanks Jedi</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653929">24</a> by Raymond Camden
		posted on 11/18/2009 at 7:26 PM
		</div>
		<div class="comment_text"><p>Well your CFC method could simply take arguments to support pagination. Or you could do it in the view only. Doing it in the view isn't as DB efficient, but could be simpler.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653931">25</a> by Sean
		posted on 2/11/2010 at 10:35 PM
		</div>
		<div class="comment_text"><p>Ray, I really enjoyed your series and am learning quite a bit. The app ran fine after the first lesson, but starting with the second lesson, I get this error<br>Message  	 The method getMembers was not found in component foodphilosopher.assets.docs.expendable.mailinglist.maillist.</p><p>Yet, the maillist.cfc is in the directory and it does have the getMembers function. The Subscribe page works fine. Where would I look for a solution?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653932">26</a> by Sean
		posted on 2/11/2010 at 11:03 PM
		</div>
		<div class="comment_text"><p>Ray, I just restarted the CF service. I noticed that the error was referencing the wrong path, an older one. So the restart did the trick. I'm now in the listMembers.cfm page. Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653934">27</a> by Raymond Camden
		posted on 2/12/2010 at 5:46 PM
		</div>
		<div class="comment_text"><p>Glad you got it Sean. One word of warning. This series is VERY old now. It was written for ModelGlue 1. While it still works, note that MG3 is a significant update. If I were to write this series today there would be many changes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653936">28</a> by Mike
		posted on 6/6/2010 at 3:31 PM
		</div>
		<div class="comment_text"><p>Oooh, is that a hint that you might ;) - Id love it if you did!!</p></div>
	</div>
</div>
		