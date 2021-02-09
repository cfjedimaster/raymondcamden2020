
<div class="comment" id="c_1713650807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650807">1</a> by kelly
		posted on 3/15/2006 at 7:05 PM
		</div>
		<div class="comment_text"><p>hey fyi your "last entry" link currently takes you back to this entry, or are you just trying to confuse us this morning? lol :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650802">2</a> by Raymond Camden
		posted on 3/15/2006 at 7:12 PM
		</div>
		<div class="comment_text"><p>Fixed, thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650798">3</a> by kelly
		posted on 3/15/2006 at 7:25 PM
		</div>
		<div class="comment_text"><p>no worries.  thank you for your site and all your great code. i run a dream journal site which i'll be upgrading soon and members  want the dream dictionary to be updatable by them, the more i think about it wiki is the way to go. i'm very glad you came out with Canvas, can't wait to check it out. Anyway keep up the great work, I love CF, got my start in it almost 9 years ago back in DC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650815">4</a> by Scott Stroz
		posted on 3/15/2006 at 7:29 PM
		</div>
		<div class="comment_text"><p>Do you add the:</p><p>&lt;broadcasts&gt;<br>   &lt;message name="getAuthenticated"&gt;<br>&lt;/broadcasts&gt;<br>&lt;results&gt;<br>   &lt;result name="notAuthenticated" do="Logon" /&gt;<br>&lt;/results&gt;</p><p>to each event handler?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650817">5</a> by Raymond Camden
		posted on 3/15/2006 at 7:34 PM
		</div>
		<div class="comment_text"><p>Scott, yes. I didn't mention it in this entry since I'm trying hard to make each entry as simple as possible. Either the 3rd or 4th entry will cover this. Although now that I think about it, I should have mentioned it probably.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650813">6</a> by Scott Stroz
		posted on 3/15/2006 at 8:33 PM
		</div>
		<div class="comment_text"><p>Joe has mentioned that MG 1.1 will allow you to add 'results' in the onRequestStart events, and have them acted upon.</p><p>Then, unless only some of your pages require login, you will be able to put the login logic in onRequestStart and add an appropraite event to trigger a login form.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650811">7</a> by Dave Carabetta
		posted on 3/15/2006 at 9:01 PM
		</div>
		<div class="comment_text"><p>Hey Ray. Do use the #viewstate.getValue("myself")# shortcut for login forms? I ask because your form action doesn't take in to account that it should be posting over SSL. Granted, I know this is an academic exercise, but would you just do:</p><p>action="<a href="https://disq.us/url?url=https%3A%2F%2Fwww.mysite.com%2F%23viewstate.getValue%28%3A79-XhQ4bIFIwZ3ki0b8AC_i7ssk&amp;cuid=3321886" rel="nofollow noopener" title="https://www.mysite.com/#viewstate.getValue(">https://www.mysite.com/#vie...</a>"myself")#logonattempt"</p><p>in that case?</p><p>Also, what's your opinion on Sean's notion that events should not be named the same as the Controller method? So instead of "getAuthentication" being announced and mapping to getAuthentication(), you'd announce "needAuthentication" which maps to getAuthentication(). Again, I know this is academic and I'm not advocating a change in the code. I'm just curious as to your thoughts on it in general. I've personally taken to the "need" approach, as I've found that when bringing my team up to speed, it helps them more clearly separate (mentally) an event from a Controller method.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650808">8</a> by Brendan
		posted on 3/15/2006 at 9:06 PM
		</div>
		<div class="comment_text"><p>message tag needs to be terminated</p><p>&lt;message name="getAuthenticated" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650803">9</a> by Raymond Camden
		posted on 3/15/2006 at 9:10 PM
		</div>
		<div class="comment_text"><p>Brendan, I fixed that in my code, I forgot to in the entry. Will edit in 2 minutes.</p><p>Dave:</p><p>Well, I typically only use SSL when doing ecommerce type stuff. For simple logons it would be overkill probably. But if I did want to forcve SSL, I'd do as you did.</p><p>I haven't heard Sean's views on that - so I can't comment. Do you know why? Personally I've never liked that. It feels weird, but as a MG newbie myself, I'm willing to admit I could be wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650804">10</a> by Dave Carabetta
		posted on 3/15/2006 at 9:41 PM
		</div>
		<div class="comment_text"><p>Yeah, so you ask the logical question and of course I can't find the reference! (Aside: We really need to do something about Topica's atrocious search functionality for the MG list. Anyway...) I know I saw Jared use it in his great MG security tutorial he posted a while back:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.web-relevant.com%2Fmg_tutorial%2F%3APnRIQotF16_bSGFjw00haq7clHk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.web-relevant.com/mg_tutorial/">http://www.web-relevant.com...</a></p><p>It was some comments in response to that from *somewhere* (wow, I'm being really helpful, aren't I?) that the discussion of "need" vs. "get" came up. Like everything else if ColdFusion, I certainly don't think there's a "right" and a "wrong" way to accomplish the same task, particularly in this case. Like I said, I've just found (for whatever reason) that when I have to show my developers the difference between the message broadcast and the controller handling, the distinct naming helps "solidify" the concept a bit quicker. That being said, you're approach is certainly reasonable and probably the most common.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650805">11</a> by Raymond Camden
		posted on 3/15/2006 at 9:48 PM
		</div>
		<div class="comment_text"><p>Interesting. Well, let's leave it as an "open issue" for now. ;)<br>One of my plans is, post completion, is another entry on random crap I'd change. Ie, small updates here and there. One change would be multiple controllers. (As just an excample.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650806">12</a> by Dave Carabetta
		posted on 3/15/2006 at 9:51 PM
		</div>
		<div class="comment_text"><p>Fair enough. Incidentally, a nice MG reference that answers some high-level questions can be found at:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fawads.net%2Fwp%2F2005%2F06%2F24%2Fmodel-glue-faq%2F%3AdbIsPRpLFe6GbEkrHO1SnsiB9wE&amp;cuid=3321886" rel="nofollow noopener" title="http://awads.net/wp/2005/06/24/model-glue-faq/">http://awads.net/wp/2005/06...</a></p><p>I'm sure you're getting to most, if not all, of these in your future posts, but it's convenient to have a concise reference too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650810">13</a> by Dan Sorensen
		posted on 3/15/2006 at 9:52 PM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>This is excellent! Does your wish list include Amazon gift cards?</p><p>A quick typo: (2 paragraphs above the summary) "Notice that the Home event uses TWO views."</p><p>And a question: In this app, everyone needs to login regardless, so it makes sense that you're checking authentication at the home page. But in some apps, a login menu appears on every page for member logins. In that case, it would be nice to pass the originating page URL with the event and then return to that page once login is complete. Can that be done with MG?</p><p>Thanks a lot, this is great even though you've been pressed for time this week!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650809">14</a> by Raymond Camden
		posted on 3/15/2006 at 10:53 PM
		</div>
		<div class="comment_text"><p>1) No gift cards, but you can send one to my snail mail if you want. No obligation for sure. I'm not writing this to get rich. ;)</p><p>2) Typo fixed thanks. I plan on offering a PDF 'book' when all done.</p><p>3) You can get the current event. So yes, you could return. A quick, off the cuff response is, I'd make my logon link (or form) pass the current event asn an arg, like oldEvent=XXXX. Therefore you can send the user back when done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650814">15</a> by Dan Sorensen
		posted on 3/16/2006 at 12:12 AM
		</div>
		<div class="comment_text"><p>I think that oldEvent=xxxx will do exactly what I'm looking for. I believe that would even be retained through other events (as long as I didn't delete or overwrite it), in case the user ended up mistyping their password or needing to register (additional events) before continuing on with their original event.</p><p>Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650816">16</a> by Tim Forcelle
		posted on 3/16/2006 at 1:00 AM
		</div>
		<div class="comment_text"><p>As a M-G newbie I would like to say thanks for example and keep them comming.  I have one question.  I have the Logon form displaying but how do you logon?  What are the username and password?  Is this functionality not currently part of this or is going to be added?  Where do I go from here with this example.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650821">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650821">17</a> by Raymond Camden
		posted on 3/16/2006 at 1:02 AM
		</div>
		<div class="comment_text"><p>Tim, the app, so far, is the most secure app ever, because, as you have guessed, no, you cannot logon. ;)</p><p>That will be in the next article.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650818">18</a> by Melanie Williams
		posted on 3/17/2006 at 4:16 AM
		</div>
		<div class="comment_text"><p>"The first thing I did was add a new setting, DSN, to my ModelGlue.xml file. This setting will be available to my code. You can think of it like Application variables."</p><p>I don't actually see this step in your walk-through.  Was it in a different post?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650820">19</a> by Raymond Camden
		posted on 3/17/2006 at 4:17 AM
		</div>
		<div class="comment_text"><p>Not yet. In part 3 I start on the model, and it uses a DSN value, but you don't see it passed in. Part 4 will show me hooking up the control to the model and you will see it there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650797">20</a> by Michael White
		posted on 3/17/2006 at 6:15 AM
		</div>
		<div class="comment_text"><p>My first question has nothing to do with Model-Glue (I think). I notice in your form you do not use cfform tags, only standard html tags. Is this because you're just used to it or is there a specific reason such as speed or simplicity?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650796">21</a> by Raymond Camden
		posted on 3/17/2006 at 6:52 AM
		</div>
		<div class="comment_text"><p>Just a preference. I only use cfform when I do flash forms.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650799">22</a> by Raymond Camden
		posted on 3/17/2006 at 8:07 AM
		</div>
		<div class="comment_text"><p>Melanie, I just realized that I dropped the ball on that setting there. I will get it into part 4. Sorry for the confusion!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650801">23</a> by hibiscusroto (Chris Vigliotti)
		posted on 8/8/2007 at 5:37 PM
		</div>
		<div class="comment_text"><p>What a great tutorial...I'm starting to catch on....thanks Ray!</p></div>
	</div>
</div>
		