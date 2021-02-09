
<div class="comment" id="c_1713678402">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678402">1</a> by Sid Wing
		posted on 3/26/2008 at 4:54 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I e-mailed you the SRC with the Legend fixed and some other warnings cleaned up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678407">2</a> by Raymond Camden
		posted on 3/26/2008 at 5:17 AM
		</div>
		<div class="comment_text"><p>I'm still going through email, but if you didn't explain your fix, please do so here so I can learn, and others. And if you did explain it in the email, I'll blog it tomorrow. (And take full credit. Muhahaha!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678408">3</a> by Sid Wing
		posted on 3/26/2008 at 5:23 AM
		</div>
		<div class="comment_text"><p>OK -<br>There were a number of warnings about vars that were not properly/strongly typed - so I typed those appropriately. Then I commented out 2 styles that weren't used so that they would quit throwing warnings too.  Then, when I looked at the &lt;mx:Legend&gt; tag - I saw that you were using the same dataprovider that you were using to generate your chart.  the thing with Legend is - the CHART is the dataprovider for the Legend.  Changed the dataprovider for your &lt;mx:Legend&gt; tag and viola - she works!  Now trying to figure out why "Today's Hours" doesn't load data on start (or at all apparently) when there are hours for today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678410">4</a> by Raymond Camden
		posted on 3/26/2008 at 5:37 AM
		</div>
		<div class="comment_text"><p>Hey now - those warnings were a feature, not a bug. ;) I swear I was going to fix them.</p><p>Thanks for the legend fix. It makes sense now - but I swear the dcos didn't say it. (Or maybe I didn't read clearly.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678418">5</a> by Sid Wing
		posted on 3/26/2008 at 5:52 AM
		</div>
		<div class="comment_text"><p>Took a little digging when I first did it too... but found it here:<br>-----------------------------------------------</p><p>Flex Data Visualization Developer's Guide / Flex Charting Components / Displaying Data and Labels</p><p>Midway down the page under the section: "Adding a Legend control to your chart"</p><p>"You use the Legend class to add a legend to your charts. The Legend control displays the label for each data series in the chart and a key that shows the chart element for the series.</p><p>The simplest way to create a Legend control is to bind a chart to it by using the dataProvider property..."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678413">6</a> by Sid Wing
		posted on 3/26/2008 at 5:53 AM
		</div>
		<div class="comment_text"><p>Granted I think it should read:</p><p>"The simplest way to create a Legend control is to bind a chart to it by using the CHART AS THE dataProvider property..."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678415">7</a> by Gary Funk
		posted on 3/26/2008 at 6:26 AM
		</div>
		<div class="comment_text"><p>Hery Ray,  would you mind showing your code and Sid's code so we can see the change. Maybe you could comment the code so we can learn by 'our' mistakes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678416">8</a> by Leif Wells
		posted on 3/26/2008 at 6:27 AM
		</div>
		<div class="comment_text"><p>A couple of issues:<br>1) There is something wonky about your Enter Time form... I think that I hit enter in the description field and it saved the time... it also reset everything. That seems ok if I wanted to submit from there, but I was actually trying to add rows of stuff I did for that project.<br>2) The Today's Hours on the Enter Time tab are not showing anything even though I've recorded time.<br>3) If I make a mistake (see #1) there is no way for me to adjust, edit or delete my time (and where is the logical place to do that? In the Today's Hours datagrid or in the Hours Log tab?)</p><p>I can go ahead and make these changes/fixes myself (thanks for the source), but I wanted run it past you first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678417">9</a> by Raymond Camden
		posted on 3/26/2008 at 6:30 AM
		</div>
		<div class="comment_text"><p>@Gary - See Sid's comment, it was a very small tweak to point the dataProvider right. In the next build I'll show the exact change.</p><p>@Leif - yea, the app kinda expects you to enter stuff perfectly. I don't quite get your first comment - hitting enter submitted, but you wanted to enter more? Wouldn't you need to submit more?</p><p>As for the hours not showing up - are you running this the first time? If not - find the db for me, zip it, and send it to me. I'll use the SQLite sql tool I have and see why it's not working.</p><p>As you guys know, I struggled with this date crap, so if it isn't working still, I guess I'm not all that surprised.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678421">10</a> by Leif Wells
		posted on 3/26/2008 at 6:47 AM
		</div>
		<div class="comment_text"><p>Ray, what I was saying in #1 from my first comment was this. I was entering text in the description field and wanted to add a new line so that I could list some of the tasks I completed for that project. Something like:</p><p>"Worked on Features:<br>- Added new type to database.<br>- Added new view for the new type<br>- Reviewed new wireframes"</p><p>As you can see, I wasn't entering items on a per task basis, but basically entering them as I remembered them and placing them under one task/time entry.</p><p>I peeked into the "data.db" file on my system... I am not seeing much in those tables that makes me think that there is something wrong with dates/times as far as that goes. I'll send it to you offline.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678423">11</a> by Sid Wing
		posted on 3/26/2008 at 8:01 AM
		</div>
		<div class="comment_text"><p>Ray,<br>Think I found what may be part of the problem... Every SQLite tool I use refuses to display the "date" field in the hours table.  You may want to change the NAME of the date field to something other than "date" which is a reserved word in SQLite.  Also, having a field named "hours" in a table named "hours" can cause a mixup as well. Just some "poking" I did in the db to see what I could see.  I know this app was never meant to be a Project like Lighthouse, Canvas, CFCBlog, and the like - but doggone it - I actually LIKE this app (as I have all your others) and I could make USE of it to track the 50 some projects I seem to end up with. All in all - Good Work, my friend.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678419">12</a> by Raymond Camden
		posted on 3/26/2008 at 8:49 AM
		</div>
		<div class="comment_text"><p>Sid - I haven't yet had a chance to catch up on your earlier notes, or look at your db (just got done playing WoW) - but I can say that I had no issues with the 'date' col on my side. I'm going to test your db though to see if yours act differently.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678420">13</a> by Sid Wing
		posted on 3/26/2008 at 4:47 PM
		</div>
		<div class="comment_text"><p>Yeah, I've looked at the db in both SQLAmdinistrator and SQLite Maestro and both of them show the date field as 'null' even though I know the data is in there.  Means that data is either being stored in a very "odd" fashion (as in not the EXPECTED fashion that SQLite expects for a field of type DATE) or that there is some kind of conflict with a reserved word (date) being used as a field name.  I have run into this issue (reserved words as field names) in MS SQL, MySQL, and Oracle - so I can't imagine that SQLite is much different in that respect.  My true suspect is that the data is being stored in an "unexpected" format - as I can view the dates inside the App with the "log" view - but that it after your item renderer "massages" it a bit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678429">14</a> by Shaun W,
		posted on 3/26/2008 at 5:10 PM
		</div>
		<div class="comment_text"><p>Nice app. Ray I can really use this!</p><p>One question... can hour records not be deleted?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678422">15</a> by Raymond Camden
		posted on 3/26/2008 at 5:44 PM
		</div>
		<div class="comment_text"><p>There is no delete yet. I was thinking I'd add a delete, but no edit, since the records are, in general, so small.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678430">16</a> by Raymond Camden
		posted on 3/26/2008 at 5:45 PM
		</div>
		<div class="comment_text"><p>@Sid - we may need to move to IM for this. I opened your DB on my system here, and it showed the column as date. I was also able to do date type sql operations on it.</p><p>How about you hit me up via IM. It may be quicker that way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678426">17</a> by Raymond Camden
		posted on 3/26/2008 at 6:00 PM
		</div>
		<div class="comment_text"><p>@Leif - I see what you mean. I think it's a change Kyle made to make it easier to enter hours, but it's definitely a bad idea now. I'll fix that after I apply Sid's fixes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678403">18</a> by Raymond Camden
		posted on 3/26/2008 at 6:30 PM
		</div>
		<div class="comment_text"><p>FYI, I found a new bug that maybe you guys can help me with. I removed the code to make the Enter key submit hours, but when I submit a description with line breaks, only line 1 is stored. It seems like my insert statement is barging on multi-line strings, even though I'm using bound parameters.</p></div>
	</div>
</div>
		