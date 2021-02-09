
<div class="comment" id="c_1713682163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682163">1</a> by Raymond Camden
		posted on 6/23/2008 at 6:19 PM
		</div>
		<div class="comment_text"><p>Ugh - so the cold medicine may be slowing me down - the third comment in the older post, by Mikkel Johansen, has the same solution.</p><p>Sorry all for the waste of space. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682161">2</a> by todd sharp
		posted on 6/23/2008 at 6:29 PM
		</div>
		<div class="comment_text"><p>Never hurts to repeat yourself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682164">3</a> by Joerg Zimmer
		posted on 6/23/2008 at 7:15 PM
		</div>
		<div class="comment_text"><p>Hi,<br>just did something similar... I also tried cfcalendar first, but as the flash stuff slowed the hole process down, I used Spry together with jscalender... This is pretty cool!</p><p>Joerg</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682167">4</a> by Scott Stroz
		posted on 6/23/2008 at 8:09 PM
		</div>
		<div class="comment_text"><p>Wait...do you mean to tell me that in the 23rd century there will be no movies?  What a travety!</p><p>BTW - how do you know this? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682169">5</a> by Raymond Camden
		posted on 6/23/2008 at 8:14 PM
		</div>
		<div class="comment_text"><p>@Scott - I hopped in my TARDIS and confirmed it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682165">6</a> by Michael
		posted on 6/23/2008 at 10:40 PM
		</div>
		<div class="comment_text"><p>This worked like a charm. I had to reformat the month value because it runs on a 0-11 so march would be 02 and april would be 03... +1 worked and I now have the groundwork to build off of...THANKS!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682166">7</a> by Michael
		posted on 6/24/2008 at 12:36 AM
		</div>
		<div class="comment_text"><p>I've researched this until i was blue but is there a way to have multiple dates highlighted in a cfcalendar? Say there is an event on 6/24 and 6/25 to have those dates highlighted?</p><p>My research tells me its not possible but is there a way to have multiple startdates/endates and have dates where no events exists to be disabled and those with events to have a normal enabled status? I hope im being clear...;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682172">8</a> by Andy Sandefer
		posted on 10/15/2008 at 5:18 PM
		</div>
		<div class="comment_text"><p>@Ray and others<br>This was helpful but do you any of you know how to trigger this to fire after the cfcalendar initially loads?  The onChange is working fine but I have to click on a date to make this work and I wish I could make the cfgrid initially load based on the default date in the cfcalendar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682190">9</a> by Raymond Camden
		posted on 10/15/2008 at 5:22 PM
		</div>
		<div class="comment_text"><p>You could hard code it. cfcalendar takes a selectedDate attribute. If you defaulted to date X, you could make your grid do the same for it's initial data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682184">10</a> by Andy Sandefer
		posted on 10/15/2008 at 5:44 PM
		</div>
		<div class="comment_text"><p>Thanks for the help @Ray<br>If anyone else needs to do this then you can simply make a javascript function like this...</p><p>	initPage = function() {<br>		var todaysDate = new Date();<br>		var year = todaysDate.getFullYear();<br>		var month = todaysDate.getMonth();<br>		var date = todaysDate.getDate();<br>		loadReminderGrid(year, month, date);<br>	}</p><p>and then call it using AjaxOnLoad...</p><p>&lt;cfset AjaxOnLoad("initPage")&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682186">11</a> by Chris Luksha
		posted on 2/5/2009 at 10:12 PM
		</div>
		<div class="comment_text"><p>I just tried this method and all works great - until I hit the calendar a second time.  I did a little formatting of the date so I could verify the end user put in a good date and didn't try typing in some bogus code.</p><p>I started with <br>&lt;cfif isDefined('<a href="http://disq.us/url?url=http%3A%2F%2FURL.date%3A0f1uGR2yWDOrKEluBFaAinWBRBY&amp;cuid=3321886" rel="nofollow noopener" title="URL.date">URL.date</a>')&gt;<br>	&lt;cfset FORM.activityDate = <a href="http://disq.us/url?url=http%3A%2F%2FURL.date%3A0f1uGR2yWDOrKEluBFaAinWBRBY&amp;cuid=3321886" rel="nofollow noopener" title="URL.date">URL.date</a>&gt;<br>&lt;cfelse&gt;<br>	&lt;cfparam name="FORM.activityDate" default="#dateformat(now(),'mm/dd/yyyy')#"&gt; <br>&lt;/cfif&gt;</p><p>Then I added your js in the head (a little manipulated)<br>&lt;cfoutput&gt;<br>function loadit(y,m,d) {<br>var datefield = m+'/'+d+'/'+y;<br>alert(m+'/'+d+'/'+y);//Just for testing before the page is submitted   window.location.href='#request.ThisPage#?date='+escape(datefield);<br>}&lt;/cfoutput&gt;</p><p>Then I called the calendar like this...<br>&lt;cfcalendar name="cal" selecteddate="#FORM.activityDate#" onChange="if(cal.selectedDate) getURL('javascript:loadit(\''+cal.selectedDate.getFullYear()+'\',\''+cal.selectedDate.getMonth()+'\',\''+cal.selectedDate.getDate()+'\')')"&gt;&lt;/cfform&gt;</p><p>This worked great when I loaded the page and then changed the date - the form submitted and hte page reloaded and the calendar had the appropriate date selected.  But then if I clicked on the calendar a second time - the alert popped up telling me that the date I was submitting was 0/14/2009 and when the form submitted the cfcalendar threw me the error "0/14/2009 is an invalid date or time string"</p><p>So - my question is can you see anything that I did that may have changed dates stored in the calendar?  Or is this some kind of fluke in the cfcalendar tag when you set it based on an escaped url date?</p><p>Thanks,<br>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682189">12</a> by Andy Sandefer
		posted on 2/5/2009 at 10:15 PM
		</div>
		<div class="comment_text"><p>@Chris<br>The months start at 0.  Add 1 to them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682191">13</a> by Chris Luksha
		posted on 2/5/2009 at 10:22 PM
		</div>
		<div class="comment_text"><p>Interesting conundrum - It would seem that the calendar is returning the previous month when clicking.</p><p>So when I first load the page - the calendar says Feb 5, 2009, but when I click on a date I noticed (and missed completely before) that the date it was returning was Jan 9, 2009 (I clicked on the 9th of course)  so that click worked but I was then in a January calendar.</p><p>Then when I click on another date - say Jan 14 - I am returned 0/14/09  Or (Jan[1] - 1) / 14/09</p><p>Really odd behavior.<br>I'm stumped.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682185">14</a> by Chris Luksha
		posted on 2/5/2009 at 10:24 PM
		</div>
		<div class="comment_text"><p>@Andy - I hadn't seen your post when I typed my last one - thanks for that.  It makes sense so now I jsut need to correct for it via my JS.</p><p>thanks<br>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682183">15</a> by Chris Luksha
		posted on 2/5/2009 at 10:42 PM
		</div>
		<div class="comment_text"><p>You know I am actually still confused.</p><p>Why - if I load the page via activityForm.cfm?date=12/09/1970 - why does the calendar say it is december - but clicking on a date in December - returns that date in November.</p><p>It shouldn't do that.  I tried uploading the file to my server for all to see - but it would seem that for some reason cfcalendar is not functioning on my nice pretty little cf8 shared hosting box :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682194">16</a> by Chris Luksha
		posted on 2/6/2009 at 12:08 AM
		</div>
		<div class="comment_text"><p>Never mind - my brain - yes - was in the dirt.  It took me some playing around to get the sense of it but it still freaks me out.  Who thought of this anyway?  Can I shoot him/her?  Maybe dock their pay?  What is the reasoning behind January being 0 and not 1 like we all think, write an say?  Why does programming have to be different just to have fun with us.</p><p>Oh well off the soap box - I get it.  Now I just have to get my host to actually support it in some way.  They say that they do but that flash elements are inherently quirky in cf8 - that part I'm not so sure I'm down with.  Anyone know why cfcalendar wouldn't work on my live cf8 server and it would on my local cf8 server?  The developer edition got some extra cheerios in the box that the production version ain't got?  Maybe some help I could point my isp to?  I haven't found anything stating as much.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682187">17</a> by Jc
		posted on 2/6/2009 at 2:19 AM
		</div>
		<div class="comment_text"><p>Ok do you have a live example of this somewhere? I am doing something quite similar, and would like to take a peek. Thx</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682188">18</a> by Chris Luksha
		posted on 2/6/2009 at 3:10 AM
		</div>
		<div class="comment_text"><p>I would except it only functions on my local server.  My isp says<br>"This is a flash based component. And unfortunately, the ColdFusion flash based components are not terribly stable in ColdFusion 8. I sure do wish I had a better answer for you. We have actually spent a significant amount of time trying to stabilize flash based components on ColdFusion 8 without any success...."</p><p>They are looking into it more which I am grateful of - but for now I don't have a live example b/c I can't get it to work on any of my sites on their servers.  I have tried 6 sites with no joy.</p><p>In the end I had to do a little jQuerying and get teh calendar running using <a href="http://disq.us/url?url=http%3A%2F%2Fkeith-wood.name%2Fdatepick.html%3A85aKTEEWKeScNSwYCiHh0Ib4g4M&amp;cuid=3321886" rel="nofollow noopener" title="http://keith-wood.name/datepick.html">http://keith-wood.name/date...</a></p><p>I hope this helps some<br>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682193">19</a> by Jc
		posted on 2/6/2009 at 11:38 PM
		</div>
		<div class="comment_text"><p>Well to explain I was attempting to take the basic cfcalendar form and add some functionality so as with a script on the back end I would be able to highlight a date, and possibly add some text for appt's etc. any input?</p></div>
	</div>
</div>
		