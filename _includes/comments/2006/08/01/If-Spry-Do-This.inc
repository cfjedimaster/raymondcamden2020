
<div class="comment" id="c_1713655741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655741">1</a> by BL
		posted on 8/2/2006 at 3:27 AM
		</div>
		<div class="comment_text"><p>Thanks Ray.  It works.  Man, I'm really liking Spry.</p><p>I posted this one on the forums.  Have you tried the double sort?  It works good:</p><p>ds.sort(['col1','col2']);</p><p>But now I want to set one to "toggle" and the other to always "ascending".  I can't figure this one out.  This gives an error:</p><p>ds.sort(['col1','col2'],['toggle','ascending']);</p><p>Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655745">2</a> by Harin
		posted on 8/2/2006 at 5:00 AM
		</div>
		<div class="comment_text"><p>I've been following your blog for some time now, Ray, and I wanted to thank you for your excellent demos and examples on Spry.</p><p>I've been loving Spry myself and I've starting using it in our database web applications.</p><p>In regards to Spry conditionals, I'd like to embed the choose/when or if constructs inside a single tag so I can do something like this:</p><p>&lt;cfinput spry:if="{ds_CurrentRowID} &lt; 0" value="#DateFormat(today,'m/d/yyyy')#" spry:if="{ds_CurrentRowID} &gt;= 0" value ="{dtmcontactdate}" ... /&gt;</p><p>I know I've mixed in some server-side CF and client-side JS in there but if something like this was supported, it should work.  Probably would require some intensive parsing.</p><p>Instead, what I have to do now is very undesirable:</p><p>&lt;cfinput spry:if="{ds_CurrentRowID} &lt; 0" value="#DateFormat(today,'m/d/yyyy')#" .. /&gt;</p><p>&lt;cfinput spry:if="{ds_CurrentRowID} &gt;= 0" value="{dtmcontactdate}" .. /&gt;</p><p>Basically I need another tag for each condition which replicates a lot of stuff like the name, id, size, maxlength cfinput attributes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655742">3</a> by Raymond Camden
		posted on 8/2/2006 at 5:12 AM
		</div>
		<div class="comment_text"><p>BL: You got me. You should post this to the Spy forums.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655746">4</a> by Raymond Camden
		posted on 8/2/2006 at 5:32 AM
		</div>
		<div class="comment_text"><p>Harin, I may be crazy, but why do you have  check for current row &lt; 0? That doesn't seem possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655744">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655744">5</a> by Harin
		posted on 8/2/2006 at 4:14 PM
		</div>
		<div class="comment_text"><p>On initial load of the page, I'd like this date cfinput to default to the current date.  Maybe there's a better way to do this?</p><p>I have this in the beginning of the cfm page: <br>&lt;cfparam name="form.warrantyRowID" default="-1"&gt;</p><p>Then later on:<br>var obs = new Object;<br>obs.onPostLoad = function(notifier, data) {<br>	var current_row = &lt;cfoutput&gt;#form.warrantyRowID#&lt;/cfoutput&gt;</p><p>	// Affects spry:detailregion below after a data load<br>	dsWarranties.setCurrentRow(current_row);</p><p>};</p><p>dsWarranties.addObserver(obs);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655743">6</a> by Raymond Camden
		posted on 8/2/2006 at 5:23 PM
		</div>
		<div class="comment_text"><p>I'm confused. If yo just want a form field to default to the current date, then you just do</p><p>&lt;input type="text" name="goober" value="#dateFormat(now())#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655753">7</a> by Harin
		posted on 8/2/2006 at 5:36 PM
		</div>
		<div class="comment_text"><p>The cfinput in question is also inside of a spry:detailregion, which I want to change according to the master region row clicked on.  When the page loads initially, I don't want Spry to automatically select the details of the first row like it normally does, but rather, I'd like the cfinput controls in the details region to be mostly blank.  For that particular date cfinput, I'd like it to default to the current date.</p><p>One of the things I like about Spry is its master/detail data relationships and many of our interfaces lend themselves nicely to that structure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655748">8</a> by Harin
		posted on 8/2/2006 at 6:08 PM
		</div>
		<div class="comment_text"><p>I'm sorry, I'm not sure if I'm making any sense.  Basically, I want Spry to control my input values after the page has loaded using region/detailregion.  Initially, I want them to be blank except for this particular date input.  Most of the examples I've seen of detailregion 's have to do with dumping text on the page, not with input or select tags.  So maybe this is just a bad idea in general.</p><p>Here's another checkbox example of what I have do with spry conditionals, maybe this makes more sense:</p><p>&lt;input spry:if="'{ysnresolved}' == '1'" <br>	 type="checkbox" <br>	 id="ysnresolved"<br>	 name="ysnresolved" <br>	 onclick="populateResDate();"<br>	 style="background-color: white; border:none;"<br>	 checked="true" /&gt;</p><p>&lt;input spry:if="'{ysnresolved}' != '1'" <br>	 type="checkbox" <br>	 id="ysnresolved"<br>	 name="ysnresolved" <br>	 onclick="populateResDate();"<br>	 style="background-color: white; border:none;"  /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655752">9</a> by Raymond Camden
		posted on 8/2/2006 at 10:26 PM
		</div>
		<div class="comment_text"><p>So you can use Spry with form fields, I've done it with select boxes. Still though I'm not quite sure I get you. You want dynamic input boxes and the values come from Spry, is that right so far?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655751">10</a> by BL
		posted on 8/3/2006 at 1:18 AM
		</div>
		<div class="comment_text"><p>Ray, maybe if you show an example using your spry blog interface where you default one of the select boxes to something other than the first choice in the select drop down, on initial page load.</p><p>I think that's the concept he's getting at.  No?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655749">11</a> by BL
		posted on 8/3/2006 at 1:34 AM
		</div>
		<div class="comment_text"><p>For example, take:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cflib.org%2Fspry%2Findex2.cfm%3AEsKnXA-EjY7u_9VB-_X_EKD9mV8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cflib.org/spry/index2.cfm">http://www.cflib.org/spry/i...</a> ..</p><p>and show how you can do something like this<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cflib.org%2Fspry%2Findex2.cfm%3Flibrary%3DdateLib%3AookKD7pF5hqBOS9xRkpRclq0bvM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cflib.org/spry/index2.cfm?library=dateLib">http://www.cflib.org/spry/i...</a></p><p>and what that should do is make the drop down default to dateLib selected and show the all dateLib functions.</p><p>this is not word for word what he's asking for but i think he's just asking how do i set a default value for a user input field.  do i use a "spry:if" or do i use cf directly in my &lt;input&gt;?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655750">12</a> by Raymond Camden
		posted on 8/3/2006 at 1:53 AM
		</div>
		<div class="comment_text"><p>Hmm. So is the default server or client side? What logic determines what your default values will be?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655747">13</a> by BL
		posted on 8/3/2006 at 2:05 AM
		</div>
		<div class="comment_text"><p>server-side logic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655755">14</a> by Harin
		posted on 8/3/2006 at 4:43 PM
		</div>
		<div class="comment_text"><p>Yeah I was using server-side logic for the default values since Spry automatically selects the first row of your xml dataset for the detailregion.  For example, in your  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cflib.org%2Fspry%2Findex2.cfm%3AEsKnXA-EjY7u_9VB-_X_EKD9mV8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cflib.org/spry/index2.cfm">http://www.cflib.org/spry/i...</a> example, instead of having the details of the execute function shown to me right away when I select UtilityLib, I'd like it to be blank (or something else) until I click on Execute row.</p><p>I thought about inserting a "dummy" row in my xml dataset as my first row so the detailregion defaults to this row, but I'm not sure that's the best solution either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655767">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655767">15</a> by Raymond Camden
		posted on 8/3/2006 at 5:22 PM
		</div>
		<div class="comment_text"><p>So to make this simpler, your question could be:</p><p>If using a detail region, how do I make it NOT auto-set to row 1 when the data is loaded.</p><p>Would that be it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655760">16</a> by Harin
		posted on 8/3/2006 at 5:31 PM
		</div>
		<div class="comment_text"><p>Sure ;&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655758">17</a> by Raymond Camden
		posted on 8/3/2006 at 5:45 PM
		</div>
		<div class="comment_text"><p>So, I don't know. :) I posted to the Spry forums:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fcfusion%2Fwebforums%2Fforum%2Fmessageview.cfm%3Fcatid%3D602%26threadid%3D1179300%26enterthread%3Dy%3AD87XXCfomcHq2uTkbifOTJOhiao&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/cfusion/webforums/forum/messageview.cfm?catid=602&amp;threadid=1179300&amp;enterthread=y">http://www.adobe.com/cfusio...</a></p><p>You don't have to monitor that thread though, when I hear back I'll post.</p><p>I had a few ideas as you will see in that thread. You could simply hide the detail region until someone clicks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655759">18</a> by Harin
		posted on 8/3/2006 at 6:02 PM
		</div>
		<div class="comment_text"><p>Thank you!</p><p>Right now, I'm setting the currentRow to -1 onPostLoad, and using Spry conditionals to default to a different value for certain form input's.</p><p>Hiding the entire detail region I'm not sure would be best in my situation as I'd like to allow users to add new records using a (mostly) blank form.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655763">19</a> by BL
		posted on 8/3/2006 at 10:08 PM
		</div>
		<div class="comment_text"><p>I'd still like to see what I mentioned with the cflib example.. default the library drop down to something other than the first or last selection, on initial page load.</p><p>Consider this:<br>Based on a user controlled setting (ex: client.libraryDefault), a user has a preset library that makes the page default to on initial load.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655765">20</a> by Raymond Camden
		posted on 8/3/2006 at 10:14 PM
		</div>
		<div class="comment_text"><p>BL, you wouldn't use client vars, but could use a cookie. What you would do is detect when the Spry data loads, use JS to read the cookie, and then set the variable. Would be simple.</p><p>If folks like - let me whip up an example where I use cookies to store stuff like that in the CFLib example, so that, in theory, you could close browser, return, and all settings remain.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655764">21</a> by BL
		posted on 8/3/2006 at 10:25 PM
		</div>
		<div class="comment_text"><p>Yes, anything to show how (on initial page load) you default a drop down and it's associated dynamic region to something based on server side logic/var.</p><p>That's really what I'm getting at.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655762">22</a> by Raymond Camden
		posted on 8/4/2006 at 12:35 AM
		</div>
		<div class="comment_text"><p>Check out</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fcfusion%2Fwebforums%2Fforum%2Fmessageview.cfm%3Fcatid%3D602%26threadid%3D1179300%26forumid%3D72%3AuSCqWahJyB0FsvcSHuzgT5udjm0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/cfusion/webforums/forum/messageview.cfm?catid=602&amp;threadid=1179300&amp;forumid=72">http://www.adobe.com/cfusio...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655769">23</a> by Harin
		posted on 8/4/2006 at 4:42 AM
		</div>
		<div class="comment_text"><p>Neato. dougsm has developed some nice "add-on" features to Spry that Adobe should incorporate!  I was just looking for a total-row-count property for my xml dataset too.  Thanks for looking into this so much, Ray/BL.</p><p>By the way, as much as I love the master/detail region relationships that Spry offers, I've decided to remove my detail region completely and instead handle it another way.  With only 3 rows in my xml dataset, initially loading 10 form input/select 's in the detail region was starting to get unacceptably slow.</p><p>What I did instead is pass the ds_RowNumber of the row clicked on to a Javascript function which loops through all the input/select/hidden form elements and sets their values using the dsWarranties.getData()[rowid]["Column Name"] notation.  What makes this work nicely in my case is that my form names are exactly the same as the node names in the xml dataset.  So I had elem[i].value = dsWarranties.getData()[rowid][elem[i].name] inside the loop.</p><p>This also allowed me to set the initial (default) form values on the server side as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655766">24</a> by BL
		posted on 8/5/2006 at 9:44 AM
		</div>
		<div class="comment_text"><p>Harin, sounds interesting.  Maybe you can share your code with a working example?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655771">25</a> by BL
		posted on 8/8/2006 at 12:14 AM
		</div>
		<div class="comment_text"><p>I solved my own problem with the double sort, and double sort orders.  I had to modify one word in the SpryData.js file.</p><p>By the way, the Spry js code is very well written.  It's a thing of beauty.  Some of the cleanest js code I've ever seen.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655761">26</a> by Raymond Camden
		posted on 8/8/2006 at 12:17 AM
		</div>
		<div class="comment_text"><p>BL, be _sure_ to post your fix to the forums so the Spry team knows.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655773">27</a> by BL
		posted on 8/8/2006 at 1:22 AM
		</div>
		<div class="comment_text"><p>Nobody ever responded to my post, so screw them.  Okay, okay, just kidding.  I'll post something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655770">28</a> by BL
		posted on 8/8/2006 at 1:33 AM
		</div>
		<div class="comment_text"><p>Ray, quick question on your rss feed.  I can't email you (for some reason i always get a bounce back) so I'll post it here.</p><p>Is there a way to do something like what your doing with the MXNA feed.  The sortBy=mostRecentEntry thing.</p><p>But I would like to have the ability to sort by "most recent response" and it can either return a list of entries or a list of responses (and maybe even a parameter for the count of how many to return).</p><p>Let me know if that makes sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655775">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655775">29</a> by Raymond Camden
		posted on 8/8/2006 at 1:52 AM
		</div>
		<div class="comment_text"><p>If the XML data has it, then you can sort by anything. So if my RSS feed had a &lt;lastcomment&gt; type field, you could sort by that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655772">30</a> by 11
		posted on 9/20/2006 at 11:41 AM
		</div>
		<div class="comment_text"><p>11</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655776">31</a> by Ed
		posted on 11/1/2006 at 9:20 PM
		</div>
		<div class="comment_text"><p>Do you guys know how to count the values within an XML node via Spry?  And more in depth, how to count the values within that node.</p><p>For example, I have a node called "test".  The possible values are "lorem1", "lorem2", and "lorem3".  I have a bunch of data I'm displaying, but at the bottom of the table display, I want to display:</p><p>- The total number of "test" nodes.<br>- The total number of "test" nodes with value "lorem1"<br>- The total number of "test" nodes with value "lorem2"<br>- The total number of "test" nodes with value "lorem3"</p><p>I need to set a spry variable I think, but I'm not sure how to do that.  Something to act as a counter of some sort.</p><p>Any suggestions?</p><p>Thanks much.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655774">32</a> by Raymond Camden
		posted on 11/1/2006 at 9:23 PM
		</div>
		<div class="comment_text"><p>I know you can get the total Dataset length easily enough. It is jsvarname.getDat().length I believe. My code for this as at home. You would use JavaScript to manually write this out, and would need to do it on the onLoad event for the DS obviously.</p><p>There _may_ be a {ds_*} variable for it though. I need to write a quick blog post as a reference to what ds_ variables exist.</p><p>FYI - watch this space soon for a new Proof of Concept CF/Spry mashup.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655777">33</a> by Raymond Camden
		posted on 11/1/2006 at 9:31 PM
		</div>
		<div class="comment_text"><p>Yep - ds_RowCount.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655780">34</a> by Ed
		posted on 11/1/2006 at 9:33 PM
		</div>
		<div class="comment_text"><p>Hmm .. So I would think something like this (but it doesn't work):</p><p>var dsEmployees = new Spry.Data.XMLDataSet("data/theList.xml", "/employees/employee");</p><p>var employeeCount = dsEmployees.length;</p><p>alert(employeeCount);</p><p>Or am I missing something?</p><p>Thanks for the help thus far also.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655779">35</a> by Raymond Camden
		posted on 11/1/2006 at 9:37 PM
		</div>
		<div class="comment_text"><p>Ed - Spry loads the data asynch. You need to use the onLoad observer (ie, tell Spry to run a function when the data is loaded.) I don't think it is onLoad, but onPostLoad. Check the docs though as I had to do this last night. (The code is back home, sorry I can't share it.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655781">36</a> by Ed
		posted on 11/1/2006 at 9:41 PM
		</div>
		<div class="comment_text"><p>Will do, thanks.  I'll take a look.  I'll continue reading here as well for more Spry info.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655782">37</a> by venkat
		posted on 5/6/2009 at 2:44 AM
		</div>
		<div class="comment_text"><p>Hi Raymond I am looking for a solution about onload function for spry detail region. the first row of spry-xml-dataset is displaying in spry region and detail region when page loads intially. But on page loading i dont want to dispay any thing in DetailRegion (later if cliked on spry region item then only related item has to be displayed in DetailRegion.)</p><p>can please help me how can i achieve this.</p><p>Tannk you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655784">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655784">38</a> by Raymond Camden
		posted on 5/6/2009 at 3:14 AM
		</div>
		<div class="comment_text"><p>This help?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2008%2F8%2F28%2FSpry-Detail-Regions-and-hiding-content-until-a-click%3AP4MA1kyTXFtzkXqF4XqNT6cQsPE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2008/8/28/Spry-Detail-Regions-and-hiding-content-until-a-click">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655794">39</a> by venkat
		posted on 5/6/2009 at 4:39 AM
		</div>
		<div class="comment_text"><p>Hi ray, Thank you very much for quick reply.</p><p>1. I am able hide detail region with CSS but it couldn't display item when i clicked on spry:region ietm. Iam getting "console is undefined" java script error.</p><p>2. My requirement is not to hide detail region when the page is loading, i nedd to add some static text when it loads.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655787">40</a> by Raymond Camden
		posted on 5/6/2009 at 4:43 AM
		</div>
		<div class="comment_text"><p>1) The console messages are debug things sent to Firebug. You can delete them.</p><p>2) Ah, well, for that, you would need a bit more code. I'd maybe just add a new div:</p><p>&lt;div id="temp"&gt;Please wait&lt;/div&gt;</p><p>In the JS code that shows the dregion div, hide the temp dir.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655788">41</a> by venkat
		posted on 5/6/2009 at 4:51 AM
		</div>
		<div class="comment_text"><p>Thanks Ray.  I will try that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655797">42</a> by venkat
		posted on 5/6/2009 at 5:27 AM
		</div>
		<div class="comment_text"><p>Hi Ray its working 99%, i strucked with small problem here.<br>i have two functions to call on  onclick;</p><p> onclick="callToActionscript('{@src} {@add}') &amp;&amp; showit()";</p><p>Each function is working fine individually with onclick.<br>please can u tell me how can i call two javascript functions with onclick. i tried like below but only one function is working.<br>onclick="return(callToActionscript('{@src} {@add}') &amp;&amp; showit());"</p><p>Thank you Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655798">43</a> by venkat
		posted on 5/6/2009 at 5:48 AM
		</div>
		<div class="comment_text"><p>Hi Ray, My problem is solved just because of you.<br>You understood it and gave me the answer in single attempt .</p><p>Iam thanking you very much. and all the best for your rest of things.</p><p>Byeeee RAY.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655789">44</a> by Raymond Camden
		posted on 5/6/2009 at 5:56 AM
		</div>
		<div class="comment_text"><p>@venkat: You are welcome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655791">45</a> by BhavM
		posted on 6/25/2012 at 5:35 PM
		</div>
		<div class="comment_text"><p>Hi Ray, My problem is very similar to the one that Venkat has asked you in the previous post. I am trying to call a javascript function with the values coming back and displayed in a spry tag.</p><p>&lt;a href="..." onclick="addrow({ID});"&gt; linkhere &lt;/a&gt;</p><p>I am getting an error on IE but works absolutely fine on FF. Please help.</p><p>Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655793">46</a> by Raymond Camden
		posted on 6/25/2012 at 5:38 PM
		</div>
		<div class="comment_text"><p>To be honest, I strongly recommend not using Spry anymore. It isn't being updated.</p><p>As it stands - I kinda remember this, but not how it was fixed for IE in Spry. That doesn't help you I guess. Sorry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655795">47</a> by BhavM
		posted on 6/25/2012 at 6:21 PM
		</div>
		<div class="comment_text"><p>I got it.. Its onclick="addnewrow('{ID}');"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655792">48</a> by BhavM
		posted on 6/25/2012 at 6:22 PM
		</div>
		<div class="comment_text"><p>Well as a part of editing old code that has spry i was asking you these questions. Personally, i feel its hard to debug code in spry.</p><p>Thanks Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655790">49</a> by Raymond Camden
		posted on 6/25/2012 at 6:40 PM
		</div>
		<div class="comment_text"><p>Sorry if I sounded like I was trying to push you away. We all have old code we have to deal with. :)</p></div>
	</div>
</div>
		