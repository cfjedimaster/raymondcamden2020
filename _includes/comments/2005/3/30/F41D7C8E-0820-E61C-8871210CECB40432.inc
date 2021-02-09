
<div class="comment" id="c_1713617805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617805">1</a> by Rob Brooks-Bilson
		posted on 3/30/2005 at 10:03 PM
		</div>
		<div class="comment_text"><p>Ray, and idea how well this control scales?  We've used JS versions of this in several CF apps, and early on had a hard time finding one that would scale to support thousands of items.  In our case, we finally settled on the one that comes with qForms as it scales quite nicely.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617807">2</a> by Roland Collins
		posted on 3/31/2005 at 12:58 AM
		</div>
		<div class="comment_text"><p>It's got an ordering bug!  It doesn't properly maintain the order of the items when using the "move all items" buttons.  It appears to reverse the order of the selected items.  This is bad when the order is important.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617811">3</a> by Raymond Camden
		posted on 3/31/2005 at 1:05 AM
		</div>
		<div class="comment_text"><p>Rob: I'd assume it would suck if 1k entries were added... but I don't think it would suck cuz of the code per se, but just because the amount of data. What I mean is - if a 1k select item by itself is ok , I'd bet this would be ok as well.</p><p>Roland: The intent of this tag, at least in my opinion, is to allow for the selection of multiple items. Therefore, order is not relevant.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617817">4</a> by Roland Collins
		posted on 3/31/2005 at 1:59 AM
		</div>
		<div class="comment_text"><p>Order is _always_ releveant!  If the list gets to be very large and a user has added a number of items to the "selected" list, chances are that the user may want to review the list of selected items to see what they have added.  It's quite confusing to see that list in a completely different order than the way you created it.  Not to mention these lists are often used to create ordered sets of information, so it's very counter-intuitive to reverse the ordering on them.</p><p>We use these all over the place with a very large user base, and our original version did not take order into account - our users were very quick to point out this fault.  Maintaining the order has become the expected behavior, and it really doesn't make any sense to reverse the order anyway!</p><p>Anyway, check your email - I sent you a fixed version that maintains the order.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617816">5</a> by pim
		posted on 4/22/2005 at 12:52 PM
		</div>
		<div class="comment_text"><p>Do you think it would be useful doing the same with a drag and drop datagrid for example?<br>I did it based on some Flex examples, but I haven't come out with a good implementation idea :(<br>You can see it there : <a href="http://disq.us/url?url=http%3A%2F%2Fcfpim.coffeeflower.com%2FtreeDragAndDrop%2F%3Ab8qWaXcmKGLKV9bR4vtjYFgeKJk&amp;cuid=3321886" rel="nofollow noopener" title="http://cfpim.coffeeflower.com/treeDragAndDrop/">http://cfpim.coffeeflower.c...</a><br>In flash 2004 components, there is something called delataPacket, which is an XML that holds what's been inserted, deleted, updated in a dataset, it would great to have such feature in the CF flash components.<br>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617809">6</a> by Raymond Camden
		posted on 4/22/2005 at 7:14 PM
		</div>
		<div class="comment_text"><p>That is a pretty hot example. FYI, you _can_ get a record of what changed using grid components in CF. I don't remember the syntax - but check the docs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617821">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617821">7</a> by pim
		posted on 4/25/2005 at 4:39 PM
		</div>
		<div class="comment_text"><p>Well i tried but no way :(<br>Using selectMode=edit allows you to change values in the datagrid and get the changes in the posted values, but it won't track added or removed records.  Maybe a cfgridupdate could catch those changes, but I don't see a good use for it.  Maybe in a future version of adobe coldfusion ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617810">8</a> by Raymond Camden
		posted on 4/25/2005 at 6:20 PM
		</div>
		<div class="comment_text"><p>I would check again. I'm 99% certain that you can track additions and deletions, otherwise the feature would be completely useless. Try doing a dump of the FORM scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617822">9</a> by pim
		posted on 4/25/2005 at 8:50 PM
		</div>
		<div class="comment_text"><p>I have updated the code so it dumps the form on submit, added selectMode=edit, insert=Yes in the grids attributes.<br>Try inserting a new row in Grid1 and dragging it in Grid2, the posted form will say that you have inserted a row in Grid1.  <br>It just doesn't see anything from the drag operations.  I think it is well handled in Flex, but CF has not been designed for it :(<br>I have tried triggering all kind of events, I have let them commented in the code.  I will ask Mike Nimer if he has an idea ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617806">10</a> by Raymond Camden
		posted on 4/25/2005 at 8:52 PM
		</div>
		<div class="comment_text"><p>Ohhh - you mean it's not working with your drag/drop. Ok, now I get it. Sorry. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617814">11</a> by Raymond Camden
		posted on 4/25/2005 at 8:52 PM
		</div>
		<div class="comment_text"><p>I'd go visit <a href="http://disq.us/url?url=http%3A%2F%2Fcfform.com%3AdNX9h9rWBbWc0ylE8sBnFea4Roo&amp;cuid=3321886" rel="nofollow noopener" title="cfform.com">cfform.com</a> and leave a note for Nimer. He may know a way around it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617815">12</a> by Ron Pasch
		posted on 5/2/2005 at 7:33 AM
		</div>
		<div class="comment_text"><p>I wrote the code as we were busy writing the Moving To CFMX 7 course. The main objective for me was to write it as compact and simple as possible to show people how you could leverage the power of actionscript in combination with flashforms. I'm not sure if it was eventually used in the course but as far as I know it was meant to be a demo in the course.</p><p>I see raymond and some others have picked it up, expanded it and made it into a nice custom tag :-) Good job!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617818">13</a> by Roger Chew
		posted on 1/19/2006 at 12:58 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>There is a 1 to 1 relationship btw the display column and the firstname. I have firstname and lastname in 2 separate database tables. Therefore, how would I be able to have the firstname AND lastname displayed in the one display column?</p><p>thanks.<br>roger</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617824">14</a> by Raymond Camden
		posted on 1/19/2006 at 4:13 AM
		</div>
		<div class="comment_text"><p>Just change your query. In other words, write your query to join the first and last name together.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617819">15</a> by Roger Chew
		posted on 1/19/2006 at 4:46 AM
		</div>
		<div class="comment_text"><p>Why didnt I think of that? Thanks Ray.<br>Here is my query:<br>select id, firstname + ' ' + lastname as name from member</p><p>roger</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617826">16</a> by Roger Chew
		posted on 1/20/2006 at 4:23 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>So I modified slushy just a bit so that it would accept 2 queries. One query to populate data for the left column and another query to populate data for the right column.</p><p>Im creating a slushy form for a student/teacher application. In this slushy, the teacher would be able to see a list of all students in the left column. The right column would contain a list of students currently enrolled in the class.</p><p>I would like it so that the teacher would be able to add and/or remove students from the class. The problem is how to capture that change. So for example, the teacher removes the student Joe and adds the student Jane. How do I capture that Joe needs to be removed and Jane needs to be added to the class after the teacher clicks on the submit button? Do I need to do some comparison with the original current list of students and the new current list of students? Or do I need to capture in real time a list of students that need to be removed and a list of students that need to be added?</p><p>thanks,</p><p>roger</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617825">17</a> by Raymond Camden
		posted on 1/21/2006 at 12:46 AM
		</div>
		<div class="comment_text"><p>Nod - yo uwould need to compare. I believe Slushly passes in both values, so you compare them to the original.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617828">18</a> by Jeff Bouley
		posted on 3/23/2006 at 7:55 PM
		</div>
		<div class="comment_text"><p>Pim,</p><p>I really like your drag drop and see where it is not populating the target grid.  I am able to do an addItem for the target grid via the selectedItem property of the source grid.  As long as your gridcolumn names match up you're golden.  An addItem... one line of code, good stuff.  Not sure if I'm missing something here, but to get around the submit issues you are having I suggest remoting and relocating the browser via a _root.loader_mc.getURL("your targetURL", "_self","GET"); after successful remote to submit the form.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617829">19</a> by Peter Tanswell
		posted on 7/6/2006 at 2:37 PM
		</div>
		<div class="comment_text"><p>I like the slush example</p><p>A couple of questions.</p><p>What do I need to do to allow the elft hand column to show names that are currently stored in a database table.</p><p>The second column on the right will also be a table in the database.  It may or maynot have names in the table.  How do I show these names in the column as well.</p><p>Also when I click submit I guess what I want to do is use the top data area and have it so a user can enter a day &amp; date in that field.  Then I will creat a table in the database for day and date and then with the names in the right hand column.  These will be the people who are rostered on duty for a particular day.</p><p>Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617830">20</a> by Ryan
		posted on 8/14/2009 at 5:50 PM
		</div>
		<div class="comment_text"><p>The link to download the slushy code is broken!  Please let me play with it!!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617831">21</a> by Raymond Camden
		posted on 8/14/2009 at 6:15 PM
		</div>
		<div class="comment_text"><p>Just change any <a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%3Anr8Wfzs5RNhu5OZT_80z8UhvscU&amp;cuid=3321886" rel="nofollow noopener" title="ray.camdenfamily.com">ray.camdenfamily.com</a> address to <a href="http://disq.us/url?url=http%3A%2F%2Fcoldfusionjedi.com%3AJ8pERI_trwqQzNfJuj3ekUNZkfU&amp;cuid=3321886" rel="nofollow noopener" title="coldfusionjedi.com">coldfusionjedi.com</a>.</p></div>
	</div>
</div>
		