
<div class="comment" id="c_1713662733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662733">1</a> by Sid Wing
		posted on 3/1/2007 at 1:59 AM
		</div>
		<div class="comment_text"><p>You could always use a:<br>[code]<br>&lt;input type="hidden" name="department_required" value="You must choose a department for your comment/questions"&gt;<br>[/code]</p><p>to insure that they chose one</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662751">2</a> by Raymond Camden
		posted on 3/1/2007 at 2:08 AM
		</div>
		<div class="comment_text"><p>Ugh no. Don't use CF's built in form checker.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662758">3</a> by Al
		posted on 3/1/2007 at 2:10 AM
		</div>
		<div class="comment_text"><p>I'd simplify by putting the email addresses in the values for the radio buttons and use CFPARAM as a catch-all on the action page.</p><p>Or, if not, I'd definitely use a CFSWITCH.</p><p>Or, perhaps, #form.department#@mysite.com</p><p>That poor cat.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662734">4</a> by Raymond Camden
		posted on 3/1/2007 at 2:15 AM
		</div>
		<div class="comment_text"><p>You absolutely don't want to make the radio buttons include the TO addresses. If so - it could be used to spam people.</p><p>Now _maybe_ the front part of the @, but even with that a spammer could use it to spam folks at <a href="http://disq.us/url?url=http%3A%2F%2Fmysite.com%3A2-kMGVD3SSL7zZuoKHcPI4DGYRE&amp;cuid=3321886" rel="nofollow noopener" title="mysite.com">mysite.com</a>.</p><p>Using a CFSWITCH is something I considered - but as this was a beginner user, I wanted ot keep it simple.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662739">5</a> by Sid Wing
		posted on 3/1/2007 at 2:44 AM
		</div>
		<div class="comment_text"><p>Sorry, Ray, but I was looking at it from the "novice programmer" perspective...  It would be quick, simple, and it's really nicely documented in the "Using Coldfusion" docs in DW8.  Most of the beginners I know don't understand using isDefined or structKeyExists.  I have to spend at least an hour explaining the uses of those to "beginning" programmers (as well as many other "advanced" features such as structures and arrays, etc)... I realy wonder about people who come on board as "programmers" but that can't tell me what a 2-dimensional array is.  I guess I have gottent to used to dealing with REALLY low-end programmers.</p><p>I do agree with you that CF's built-in form validation leaves much to be desired (especially in an environment where you are hosting multiple domains that are NOT in a J2EE environment).  I, also, like that fact that you were being spam-conscious by keeping the e-mail address processing on the server side of the house.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662737">6</a> by wyldsteed
		posted on 3/1/2007 at 2:58 AM
		</div>
		<div class="comment_text"><p>An additional reason for not having the email address as part of the form that is submitted.  Is someone can use your form for malicious spam themselves.  By spoofing the to address.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662735">7</a> by BJW
		posted on 3/1/2007 at 3:12 AM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>I really like your blog, I find it nice and easy to read. <br>I was curious as to why you used:</p><p>form.department is "overdue"</p><p>rather than something like:</p><p>form.department eq "overdue"</p><p>in your code? Are there any benefits to using "is". I have never used the "is" comparison operator before - actually havent come across - so was wondering on your opinion of it and pros/cons?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662740">8</a> by Raymond Camden
		posted on 3/1/2007 at 3:24 AM
		</div>
		<div class="comment_text"><p>Just personal preference. See:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.houseoffusion.com%2Fgroups%2FCF-Talk%2Fthread.cfm%2Fthreadid%3A50104%3AIxbdpp75hMlMgsLdizzEozLIQX0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.houseoffusion.com/groups/CF-Talk/thread.cfm/threadid:50104">http://www.houseoffusion.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662747">9</a> by Dan
		posted on 3/1/2007 at 3:31 AM
		</div>
		<div class="comment_text"><p>I find the shortest route is sometimes the best. Why not just make the value of the radio button the email address?</p><p>&lt;input type="radio" name="department" value="overdue@library.com"&gt;<br>&lt;input type="radio" name="kids" value="overdue@library.com"&gt;</p><p>&lt;cfmail to="#form.department#" from="#<a href="http://disq.us/url?url=http%3A%2F%2Fform.email%3AvoKRpDCk_gw6yZiWIVr2ybhYUhc&amp;cuid=3321886" rel="nofollow noopener" title="form.email">form.email</a>#" subject="Site Comments"&gt;<br>#form.comments#<br>&lt;/cfmail&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662749">10</a> by Dan
		posted on 3/1/2007 at 3:32 AM
		</div>
		<div class="comment_text"><p>Typo</p><p>the second radio value should be value="kids@library.com".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662750">11</a> by Raymond Camden
		posted on 3/1/2007 at 3:37 AM
		</div>
		<div class="comment_text"><p>Dan - see the earlier comments. If you do this, someone can use this as a way to spamothers. I'd build my own form, set my own TO, and POST to your box.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662754">12</a> by Damon Gentry
		posted on 3/1/2007 at 4:25 AM
		</div>
		<div class="comment_text"><p>I know that your answer was posted for novice readers, so why not take the time to introduce them to the CFSWITCH/CFCASE tags?</p><p>&lt;cfswitch expression="#form.department#"&gt;<br>  &lt;cfcase value="overdue"&gt;<br>    &lt;cfset to="overdue@mysite.com"&gt;<br>  &lt;/cfcase&gt;<br>  &lt;cfcase value="children"&gt;<br>    &lt;cfset to="kids@mysite.com"&gt;<br>  &lt;/cfcase&gt;<br>  &lt;cfcase value="dharma"&gt;<br>    &lt;cfset to="darmainitiative@mysite.com"&gt;<br>  &lt;/cfcase&gt;<br>  &lt;cfdefaultcase&gt;<br>    &lt;cfset to="root@mysite.com"&gt;<br>  &lt;/cfdefaultcase&gt;<br>&lt;/cfswitch&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662752">13</a> by Ben Nadel
		posted on 3/1/2007 at 4:46 AM
		</div>
		<div class="comment_text"><p>I actually ran into a similar situation just recently when working on a newsletter system. The difference was that depending on the newsletter signup, it had to go to multiple different people.</p><p>I handled it this way - not exactly a "novice" oriented approach, but certainly it worked great for me.</p><p>&lt;cfset objEmails = StructNew() /&gt;</p><p>&lt;cfif (FORM.newsletter EQ "foo")&gt;</p><p>...&lt;cfset objEmails[ "ben@test.com" ] = true /&gt;<br>...&lt;cfset objEmails[ "ben2@test.com" ] = true /&gt;</p><p>&lt;cfelseif (FORM.newsletter EQ "bar")&gt;</p><p>...&lt;cfset objEmails[ "ben@test.com" ] = true /&gt;<br>...&lt;cfset objEmails[ "suzzie@test.com" ] = true /&gt;<br>...&lt;cfset objEmails[ "larry@test.com" ] = true /&gt;</p><p>&lt;cfelse&gt;</p><p>...&lt;cfset objEmails[ "ben@test.com" ] = true /&gt;</p><p>&lt;/cfif&gt;</p><p>&lt;cfmail to="#StructKeyList( objEmails )#" ....&gt;&lt;/cfmail&gt;</p><p>What I liked about this was you don't have to maintain a "list" of emails as the Struct does this for you. Also, I found the code to be quite readable and easy to maintain.</p><p>Anyway, this worked great for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662753">14</a> by Aegis
		posted on 3/1/2007 at 11:36 AM
		</div>
		<div class="comment_text"><p>and don't forget CFFormProtect!</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfformprotect.riaforge.org%2F%3A-28gUWqvm9XK3kgOPzRQArcdms4&amp;cuid=3321886" rel="nofollow noopener" title="http://cfformprotect.riaforge.org/">http://cfformprotect.riafor...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662756">15</a> by Wizard of Vos
		posted on 3/1/2007 at 1:07 PM
		</div>
		<div class="comment_text"><p>I wouldn't suggest the "FROM" field being the #<a href="http://disq.us/url?url=http%3A%2F%2Fform.email%3AvoKRpDCk_gw6yZiWIVr2ybhYUhc&amp;cuid=3321886" rel="nofollow noopener" title="form.email">form.email</a>#, since most advanced emailservers block email if it's not from the correct IP-address. Instead use the FROM address being a "website@library.com" address and use the #<a href="http://disq.us/url?url=http%3A%2F%2Fform.email%3AvoKRpDCk_gw6yZiWIVr2ybhYUhc&amp;cuid=3321886" rel="nofollow noopener" title="form.email">form.email</a># in the REPLYTO="" field. That way if receivers press REPLY they will send to the #<a href="http://disq.us/url?url=http%3A%2F%2Fform.email%3AvoKRpDCk_gw6yZiWIVr2ybhYUhc&amp;cuid=3321886" rel="nofollow noopener" title="form.email">form.email</a># address still. It's just good practice.</p><p>Say for instance I would enter bill@gates.com as my emailaddress in the form, and the mailserver that handles the email for the CF-server has DNS-lookup to prevent spam, it will refuse to accept this mail (since GATES.COM doesn't resolve to the local CF-server) and it will end up in the undeliverable folder of CFMAIL. You could setup a trusted-ip for the CF-server in the mailserver-configuration, but not all builders have control over this configuration and it's not manageble across servers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662757">16</a> by duncan
		posted on 3/1/2007 at 3:59 PM
		</div>
		<div class="comment_text"><p>the other advantage of using a hardcoded from address is that if the user enters something not technically valid (e.g. 'n/a'), there's a good chance your mailserver won't deliver it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662760">17</a> by Raymond Camden
		posted on 3/1/2007 at 5:11 PM
		</div>
		<div class="comment_text"><p>@Wizard: I disagree. Using the from as the user's email address makes it easier to reply to the person. Plus, the mails ervers I've dealt with have had no problem with this since CF was using an authenticated connection.</p><p>@Duncan: That's what isValid("email") is for. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662761">18</a> by Wizard of Vos
		posted on 3/1/2007 at 5:21 PM
		</div>
		<div class="comment_text"><p>@Raymond: true, but we are building portable applications that run on any system or could be easily ported. Why bother remembering that if you port your CFM page you have to setup a mailserver to trust your server. <br>I have several CFC which practice this policy, and they are portable amongst clients and addresses. Some of our clients tend to setup email rules to deliver message from "website@....com" to a specific website folder inside Outlook.</p><p>I don't mean the replyto should be strict policy, it's just better practice in the long run.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662762">19</a> by Raymond Camden
		posted on 3/1/2007 at 5:25 PM
		</div>
		<div class="comment_text"><p>I'm all for portability, but I don't agree with this. As I said - every mail server I've dealt with lets you set any FROM as long as you local to the server itself. I've never run into a problem with this. We shall have to agree to disagree.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662763">20</a> by duncan
		posted on 3/1/2007 at 8:03 PM
		</div>
		<div class="comment_text"><p>Raymond, not sure if i trust IsValid() for this.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Findex.cfm%3Fdax%3Dblog%3A265.view%3Ay6s5aiJqPQCs0UzlVqnhgupVHCc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/index.cfm?dax=blog:265.view">http://www.bennadel.com/ind...</a></p><p>The regex seems overly simple:<br>^[a-zA-Z0-9-'\+~]+(\.[a-zA-Z0-9-'\+~]+)*@([a-zA-Z_0-9-]+\.)+[a-zA-Z]{2,7}$</p><p>to be RFC2822 compliant, it should be more like:<br>^[-!#$%&amp;'*+/0-9=?A-Z^_a-z{|}~](\.?[-!#$%&amp;'*+/0-9=?A-Z^_a-z{|}~])*@[a-zA-Z](-?[a-zA-Z0-9])*(\.[a-zA-Z](-?[a-zA-Z0-9])*)+$</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662764">21</a> by tony weeg
		posted on 3/2/2007 at 7:37 PM
		</div>
		<div class="comment_text"><p>to simply do nothing but expound on the email regex... this is by far, my favorite one...</p><p>(\w[-._\w]*\w@\w[-._\w]*\w\.\w{2,3})</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662766">22</a> by Tony
		posted on 3/5/2007 at 1:51 AM
		</div>
		<div class="comment_text"><p>Noob question here in reply to Ray's response to the first comment:</p><p>"Ugh no. Don't use CF's built in form checker."</p><p>Why not? Does this apply to both validateAt="onServer" and validateAt="onSubmit"??</p><p>So you're saying the best way to check forms is on the server side using cfparam an isDefined?<br>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662765">23</a> by Raymond Camden
		posted on 3/5/2007 at 2:34 AM
		</div>
		<div class="comment_text"><p>Because you don't get the fine control over handling the errors.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662768">24</a> by Mohammed suleman khan
		posted on 2/19/2013 at 11:59 PM
		</div>
		<div class="comment_text"><p>If a user wants to send email to many people, do you think it will work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662770">25</a> by Raymond Camden
		posted on 2/20/2013 at 2:45 AM
		</div>
		<div class="comment_text"><p>Many as in a whole heck of a lot? I'd probably use a dedicated solution for mail lists.</p></div>
	</div>
</div>
		