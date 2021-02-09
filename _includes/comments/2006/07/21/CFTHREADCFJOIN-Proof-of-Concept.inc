
<div class="comment" id="c_1713655239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655239">1</a> by Derek P.
		posted on 7/21/2006 at 7:05 PM
		</div>
		<div class="comment_text"><p>whoa thats crazy, so if I understand you, you can wrap things in cfthread and have them process in paralell with whatever else is going on on that cfm? I didn't quite get what CFJOIN does though. still very cool :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655252">2</a> by Raymond Camden
		posted on 7/21/2006 at 7:11 PM
		</div>
		<div class="comment_text"><p>Yes to your first question. All the CFHTTPs ran at once.</p><p>To your second question, join means, "Wait here till thead named X is done."</p><p>Again, the need for CFJOIN in my example is a bug. Well, not a bug. If you wanted to show a "All COmplete" as I do, then it is good. But if you wanted to fire and forget, you can't do that quite yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655254">3</a> by Cole
		posted on 7/21/2006 at 7:25 PM
		</div>
		<div class="comment_text"><p>I saw this one coming.</p><p>When I attended the BlueDragon session at CFUnited, they introduced the cfthread tag.  I was really excited about the cfthread tag because I have applications that could really benefit from this.</p><p>My first thought was "I wonder how long until Macrodobe implements these tags." And here we are. I'm glad that they're finally working on it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655258">4</a> by Jay Greer
		posted on 7/21/2006 at 7:46 PM
		</div>
		<div class="comment_text"><p>Somewhere, Adam Smith is smiling. Competition is good.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655257">5</a> by Rob Brooks-Bilson
		posted on 7/21/2006 at 7:51 PM
		</div>
		<div class="comment_text"><p>Technically, you could already do threading, at least in Enterprise by using the asynch event gateway.  What these tags do is make that functionality more accessable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655256">6</a> by Dave Shuck
		posted on 7/21/2006 at 8:47 PM
		</div>
		<div class="comment_text"><p>Asynch gateways allow threading, but this allows a much more controlled way to manage it.  With asynch gateways you kind of lob them out there on their own and carry on.</p><p>One thing notable about this is that where some of us already experience issues with max threads filling up, this idea sure could make that happen faster if you were not careful in how you implemented it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655261">7</a> by Gary Fenton
		posted on 7/21/2006 at 10:10 PM
		</div>
		<div class="comment_text"><p>This is a great tag but more than that it's wonderful to see something from BlueDragon coming over to CF MX. Incompatibility like this helps strengthen the CFML language. It could so easily go the other way if both companies add new tags that are alien to each other. Definitely good news for the CF community. I hope it makes it into CF 8.</p><p>Incidentally, I used CFEXECUTE to fire off new CF threads in CF5. e.g. to generate 1000's of emails as a background task without making the user wait. I don't think CF7 can run cfml scripts from the command line in the same way?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655237">8</a> by Raymond Camden
		posted on 7/21/2006 at 10:21 PM
		</div>
		<div class="comment_text"><p>No, but you can do command line URL hits, so that would be one option.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655249">9</a> by Dan G. Switzer, II
		posted on 7/22/2006 at 12:07 AM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>Be very cafeful w/these tags. My findings are that in your example the variable "loopcounter" is not thread safe and you'll end up with various results. Looping over the &lt;cfthread /&gt; at this point seems very instable. See my comments on Damon's original blog post for more indepth information.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655259">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655259">10</a> by Raymond Camden
		posted on 7/22/2006 at 12:15 AM
		</div>
		<div class="comment_text"><p>Thanks for the warning. Once they get these issues cleared up, this is going to rock.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655264">11</a> by Dan G. Switzer, II
		posted on 7/22/2006 at 12:58 AM
		</div>
		<div class="comment_text"><p>@ Raymond</p><p>This tag will indeed rock. It can already be useful, but just not in a looping context at the moment--there's too much risk of having variables overriden.</p><p>However, the tags seem to work great if they each have individual hard coded procedures. The one thing I'd do is to create a separate structure for each thread (make sure to use duplicate() on complex variables) and store values inside that structure. That way you create a pseudo scope to keep values from overlapping.</p><p>-Dan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655266">12</a> by Aaron West
		posted on 7/22/2006 at 9:15 AM
		</div>
		<div class="comment_text"><p>As a companion blog post, folks can check out my post regarding this functionality in Blue Dragon 7.  That post is located here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.trajiklyhip.com%2Fblog%2Findex.cfm%2F2006%2F7%2F4%2FBlueDragon-7s-New-Features%3Asni9WVInwg-MN28Xy82GZYOunEY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.trajiklyhip.com/blog/index.cfm/2006/7/4/BlueDragon-7s-New-Features">http://www.trajiklyhip.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655265">13</a> by Eric
		posted on 4/23/2008 at 10:49 PM
		</div>
		<div class="comment_text"><p>I know this is an old post, and I know that Dan G. Switzer, II already pointed this out, but I'd like to reinforce that loopcounter is not a thread safe variable to reference inside the loop.  You don't have a guarantee that you'll see the increment of this variable for each thread.  This is still the case in the launch version of ColdFusion 8, it's not just a beta bug.</p><p>For more information, including details on how to handle it, see my post about it: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bandeblog.com%2F2008%2F04%2Fcfthread-and-dividing-up-work.html%3Ap18jgwCoPA9JiMGrRhFUFuzDNk4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bandeblog.com/2008/04/cfthread-and-dividing-up-work.html">http://www.bandeblog.com/20...</a></p><p>(P.S. your comment form rejects email addresses with a + before the @ sign, which are valid)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655267">14</a> by Raymond Camden
		posted on 4/23/2008 at 10:57 PM
		</div>
		<div class="comment_text"><p>Maybe I'm missing the obvious Eric, but why not just pass the value to the thread? That wasn't available when this POC came out, but CF8 lets you do</p><p>cfthrad name="foo" randomarg="2"</p><p>Inside the thread you can use attributes.randomarg.</p><p>From the docs:</p><p>ColdFusion makes a complete (deep) copy of all the attribute variables before passing them to the thread, so the<br>values of the variables inside the thread are independent of the values of any corresponding variables in other<br>threads, including the page thread. Thus, the values passed to threads are thread safe because the attribute values<br>cannot be changed by any other thread</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655263">15</a> by Eric
		posted on 4/23/2008 at 11:37 PM
		</div>
		<div class="comment_text"><p>That's a good observation Ray.  The cf docs didn't make it obvious to me that you could pass custom attributes to the thread.  I'd seen the verbiage about making a deep copy of the attributes before execution, but this didn't imply to me that this one tag accepts custom attributes (are there any other CF tags which do other than custom tags?).</p><p>Updated my blog entry to point this out, thanks for the tip.</p></div>
	</div>
</div>
		