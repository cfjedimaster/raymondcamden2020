
<div class="comment" id="c_1713713357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713357">1</a> by Bill
		posted on 2/26/2009 at 9:18 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>You'll run into trouble if you setup more than one list of items to sort between as the serialize method will not pick up the parent 'ul' in it's output.</p><p>Just a tip if you get more advanced with your lists..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713356">2</a> by Raymond Camden
		posted on 2/26/2009 at 9:20 AM
		</div>
		<div class="comment_text"><p>I may be slow - but what do you mean more than one list of items to sort? You mean 2 sortable lists? Wouldn't they have different IDs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713358">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713358">3</a> by Scott Stroz
		posted on 2/26/2009 at 5:16 PM
		</div>
		<div class="comment_text"><p>I have been playing aroudn with sortables too.</p><p>I like that you can also format your HTML like this</p><p>&lt;div id="beers"&gt;<br>  &lt;div&gt;Yuengling&lt;/div&gt;<br>  &lt;div&gt;Tenentt's&lt;/div&gt;<br>  &lt;div&gt;JW Dundee's Homey Brown&lt;/div&gt;<br>&lt;/div&gt;</p><p>And still have the innder &lt;div&gt;s be the items that can be sorted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713360">4</a> by Jon Alsbury
		posted on 2/26/2009 at 6:07 PM
		</div>
		<div class="comment_text"><p>Ray, just a quick note to say how useful I've found your series of posts concerning jQuery - I've tried a few AJAX/JS libs over the years before settling on jQuery. In recent weeks, perhaps spurred on by what I've been reading here, it's become an obsession! :-)  Please keep up the good work. J.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713364">5</a> by OTS
		posted on 2/26/2009 at 8:21 PM
		</div>
		<div class="comment_text"><p>Ray,<br> I think Bill is saying that if you have a nested lists, there may be a problem, just a guess</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713376">6</a> by Raymond Camden
		posted on 2/26/2009 at 8:24 PM
		</div>
		<div class="comment_text"><p>I didn't play with nested lists. If that did work fine - I could see it being a bit confusing though. May be a bit too much for the casual user.</p><p>p.s. Working on a Progress Bar demo today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713374">7</a> by Brian Swartzfager
		posted on 2/26/2009 at 9:15 PM
		</div>
		<div class="comment_text"><p>Having taken a stab at sorting nested lists in a production app, I can tell you that while it's possible to do under the right conditions, it's a pain to do and it was hard for my users to tell where they needed to drag the list item in order to drop it into another nesting level.</p><p>For that situation, I ended up replacing the nested sort with a technique (also powered by jQuery) I originally developed for reordering items on a web page when using an iPhone or iPod Touch (since drag-and-drop isn't really an option there) that lets my users move an item with just two mouse clicks.  You can find the original blog post about the technique here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.swartzfager.org%2Fblog%2Findex.cfm%2F2008%2F3%2F20%2FProblem-No-DragandDrop-On-The-iPhoneiPod-Touch--Solution--ClickToClick-Move%3AJaqpTlcdBNfSfRSPM27SNnY50e8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.swartzfager.org/blog/index.cfm/2008/3/20/Problem-No-DragandDrop-On-The-iPhoneiPod-Touch--Solution--ClickToClick-Move">http://www.swartzfager.org/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713367">8</a> by Joel Cox
		posted on 2/26/2009 at 10:56 PM
		</div>
		<div class="comment_text"><p>While you're on the 'sortable' topic, there's a nifty tablesorter plugin at <a href="http://disq.us/url?url=http%3A%2F%2Ftablesorter.com%2Fdocs%2F%3A5-ftVR8a8X5vLz_N9pnnqJFipnw&amp;cuid=3321886" rel="nofollow noopener" title="http://tablesorter.com/docs/">http://tablesorter.com/docs/</a> that adds clickable sort headers to standard HTML tables. It will even zebra-stripe the tables for you in the process.</p><p>I've been using jQuery a lot in my applications, also, I find it very easy to use, even insanely simple at times. I did some earlier work with Spry, but jQuery just seems so much easier to code and maintain.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713363">9</a> by Jonny Shaw
		posted on 2/27/2009 at 1:33 AM
		</div>
		<div class="comment_text"><p>I wonder is you could use this to re-order the links on my fisheye menu?<br><a href="http://disq.us/url?url=http%3A%2F%2Fhome.cfproject.co.uk%3AbXPF-5d-vz0d644VLjpa02xSn4g&amp;cuid=3321886" rel="nofollow noopener" title="http://home.cfproject.co.uk">http://home.cfproject.co.uk</a></p><p>Jonny</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713370">10</a> by Raymond Camden
		posted on 2/27/2009 at 2:01 AM
		</div>
		<div class="comment_text"><p>@Joel Cox: Just checked out the table sorter - that is pretty hot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713375">11</a> by larry c. lyons
		posted on 2/27/2009 at 9:57 PM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>Just thought I'd point out that this is a fairly sweet table sorter:<br><a href="http://disq.us/url?url=http%3A%2F%2Fkryogenix.org%2Fcode%2Fbrowser%2Fsorttable%2F%3ATVSbl-RHLRjzZrCLjkQvhHXWv8U&amp;cuid=3321886" rel="nofollow noopener" title="http://kryogenix.org/code/browser/sorttable/">http://kryogenix.org/code/b...</a></p><p>using what the author calls unobtrusive javascript. its very customizable and fairly fast.</p><p>regards,<br>larry</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713368">12</a> by Kamil
		posted on 1/5/2010 at 4:33 PM
		</div>
		<div class="comment_text"><p>Very nice script!</p><p>I have a problem with database. Could you please provide a little CF code, which would save reordered list into database. I can't figur eit out.</p><p>Plaese help! Many thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713366">13</a> by Raymond Camden
		posted on 1/5/2010 at 7:27 PM
		</div>
		<div class="comment_text"><p>You would modify line 11 in the last code listing to be an insert query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713365">14</a> by GKnight
		posted on 3/12/2010 at 10:36 PM
		</div>
		<div class="comment_text"><p>OK, first off, I am a javascript dummy.  I get your comment about changing line 11 to an insert query, but what if I want it to be an update query?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713371">15</a> by Raymond Camden
		posted on 3/13/2010 at 12:08 AM
		</div>
		<div class="comment_text"><p>Unless I'm misreading you, wouldn't you just put in a cfquery?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713372">16</a> by GKnight
		posted on 3/13/2010 at 1:02 AM
		</div>
		<div class="comment_text"><p>My apologies, I wasn't very detailed in my question.  I thought maybe you were going to use a Jedi mind trick to know what I was thinking :) My initial thought on this scenario is having a database with a ID, title and sortValue.  Once the database call is made I would assign list id with the value of the sortValue or the ID?  When the data is returned to the cfc and the UPDATE query executes, what would you use in the WHERE clause, the ID of the list to the sortValue? I also get a 'java.lang.String cannot be cast to java.util.Map' error with my current attempt....like I said, I am a javascript dummy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713373">17</a> by Raymond Camden
		posted on 3/13/2010 at 2:52 AM
		</div>
		<div class="comment_text"><p>Well remember you are passed the ID the record and the new sort, right? So your update would simply do something like so</p><p>update tblFoo<br>set sortorder = #NEWORDER#<br>where id = #THEID#</p><p>neworder would be the new sort order, and THEID the primary key. In my example above, it's #id# and #x# in the cflog. Oh, and you would use cfqueryparam of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713377">18</a> by John W
		posted on 4/9/2010 at 9:17 PM
		</div>
		<div class="comment_text"><p>very cool - I had 500 errors not passing order using jQuery 1.4.2 but no issues with 1.3.1 (from your download)... any thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713378">19</a> by Raymond Camden
		posted on 4/10/2010 at 8:24 PM
		</div>
		<div class="comment_text"><p>500 errors? I assume you mean HTTP Status Code 500. That's an error. As to why, it depends on what the root error is. :) If you tried jQuery 1.4.2,, also ensure you are using the latest jQuery UI library.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713381">20</a> by Nando
		posted on 5/26/2010 at 6:39 PM
		</div>
		<div class="comment_text"><p>I'm also having trouble getting sortable to work using jQuery 1.4.2 with the latest jQuery UI library and it seems to come down to how "toArray" passes the ids.</p><p>In jQuery 1.3.1, toArray produces the parameters</p><p>sortedIdArr	2504<br>sortedIdArr	2471<br>sortedIdArr	2472</p><p>Source<br>sortedIdArr=2504&amp;sortedIdArr=2471&amp;sortedIdArr=2472</p><p>(From Firebug)</p><p>and now with 1.4.2 it's change to</p><p>sortedIdArr[]	27<br>sortedIdArr[]	26<br>sortedIdArr[]	28</p><p>Source<br>sortedIdArr%5B%5D=27&amp;sortedIdArr%5B%5D=26&amp;sortedIdArr%5B%5D=28</p><p>The brackets seem to break my coldfusion code that loops through the list of values. I get an error that says "Element SORTEDIDARR is undefined"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713383">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713383">21</a> by Joel Cox
		posted on 5/26/2010 at 6:46 PM
		</div>
		<div class="comment_text"><p>This was an "improvement" to jQuery 1.4.2 to work well with "modern" scripting languages. They call it "deep serialization". I call it "breaking things that weren't broke."</p><p>add</p><p>jQuery.ajaxSettings.traditional = true;</p><p>to your document ready function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713382">22</a> by Nando
		posted on 5/26/2010 at 7:17 PM
		</div>
		<div class="comment_text"><p>Joel!</p><p>YES!</p><p>Thank you. You just made my day.</p><p>Nando</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713384">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713384">23</a> by Brittany Hunter
		posted on 5/28/2010 at 6:12 PM
		</div>
		<div class="comment_text"><p>JOEL COX YOU ARE MY HERO<br>i fought with this problem for hours yesterday. Thanks for sharing your solution.</p><p>And thanks Raymond, for this excellent tutorial (and the rest of your blog as well).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713387">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713387">24</a> by jLynn
		posted on 9/29/2010 at 10:32 PM
		</div>
		<div class="comment_text"><p>This  traditional ajaxSettings saved my butt too! Raymond, I love the sortable feature but was having to use old version of jQuery to implement. Thanks for the tip Joel!!</p></div>
	</div>
</div>
		