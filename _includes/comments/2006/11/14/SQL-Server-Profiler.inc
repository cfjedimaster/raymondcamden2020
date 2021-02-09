
<div class="comment" id="c_1713659258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659258">1</a> by Justice
		posted on 11/15/2006 at 12:41 AM
		</div>
		<div class="comment_text"><p>SQL profiler is pretty awesome.  What else is cool is taking the resulting trace file and feeding it through the optimizer to see if you need to tweak your indexes.  A few times I have found things to increase SQL performance almost 30% or more!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659270">2</a> by Gus
		posted on 11/15/2006 at 2:01 AM
		</div>
		<div class="comment_text"><p>SQL profiler is one of my favorite tools for debugging/optimizing applications.</p><p>Now that you have discovered it's usefulness, you will also soon discover one of the down-sides of using cfqueryparam !</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659269">3</a> by Raymond Camden
		posted on 11/15/2006 at 2:07 AM
		</div>
		<div class="comment_text"><p>Which is? I was testing w/ a .net app.</p><p>Do you mean that the SQL statements contain weird crap for the bind params? If so - I saw them, and I saw the values later in the profile line, so it was still readable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659268">4</a> by Greg Nilsen
		posted on 11/15/2006 at 2:08 AM
		</div>
		<div class="comment_text"><p>Being a full-time MS SQL DBA, Profiler is one of those essential tools for my job.  Not just for debugging, but for optimizing stored procedures and identifying resource hogs in our production environment.</p><p>Don't feel left out though, Ray.  Nobody at our company was even familiar with it before I came on board.  It's often overlooked by those who don't have an immediate and regular need for it's help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659272">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659272">5</a> by Tero Pikala
		posted on 11/15/2006 at 2:25 AM
		</div>
		<div class="comment_text"><p>Quest seems to have Spotlight on MySQL ( <a href="http://disq.us/url?url=http%3A%2F%2Fwww.quest.com%2Fspotlight_on_mysql%2F%3A2tYA4TaqLKisjAvJ5QL6kPqXCgE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.quest.com/spotlight_on_mysql/">http://www.quest.com/spotli...</a> )</p><p>I've used Spotlight with Oracle and have to say that it's impressive piece of software. Not only you get to see what is happening within database but you will also get suggestions what you could change to make it work better.</p><p>Definitely a tool I would suggest if you can afford it - but I haven't tried MySQL version so I can't comment about it.</p><p>Tero</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659273">6</a> by Denis The SQL menace
		posted on 11/15/2006 at 3:05 AM
		</div>
		<div class="comment_text"><p>The best part is that you can save the trace into a table. That way you can delete all the garbage data that you don't need. You can also create your own template that just looks for certain usernames etc etc</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659274">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659274">7</a> by Scott P
		posted on 11/15/2006 at 4:21 AM
		</div>
		<div class="comment_text"><p>Anyone got a tip for setting the app name in the cfadmin connection string?</p><p>Have tried both app=foo; and Application Name=foo;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659277">8</a> by Tero Pikala
		posted on 11/15/2006 at 2:09 PM
		</div>
		<div class="comment_text"><p>With SQL Server 2000 it seems to be "ProgramName" according to JDBC documentation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659275">9</a> by Phil Duba
		posted on 11/15/2006 at 4:44 PM
		</div>
		<div class="comment_text"><p>Ray, the problem with CFQUERYPARAM and trying to debug with SQL Profiler is the fact that the query comes out as SP(all your parameters). There is no SQL in the profiler and you have to do a lot of digging to try and figure out where the original SQL was created and then try and match it up to the SP. It is very difficult. I believe the benefits of CFQUERYPARAM far outweigh this problem, it is something I fight with my DBA and managers on all the time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659278">10</a> by Raymond Camden
		posted on 11/15/2006 at 4:50 PM
		</div>
		<div class="comment_text"><p>Interesting. When I was profiling my .net app, I saw SQL statements that looked just like how CF shows SQL in the debugger that includes cfqueryparams, ie it used a ?1 or some such, and at the end there was a list of values.</p><p>Since it looked just like CF's print of queries with queryparam, I just assumed.</p><p>I'm going to play with this today as I wanted to do a Captivate movie of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659257">11</a> by Aaron West
		posted on 11/15/2006 at 5:48 PM
		</div>
		<div class="comment_text"><p>Yes Ray you're the last one to figure this out. ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659256">12</a> by Tony Petruzzi
		posted on 11/15/2006 at 6:56 PM
		</div>
		<div class="comment_text"><p>Just wait till he finds Query Analyzer :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659260">13</a> by Raymond Camden
		posted on 11/15/2006 at 7:17 PM
		</div>
		<div class="comment_text"><p>Hey now - at least THAT I know about. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659259">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659259">14</a> by Ali
		posted on 11/16/2006 at 2:07 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Would you care to post a primer on SQL Profiler?<br>For people who are not too savvy with the administration side of SQL Server, (such as myself), I'd love to be able to leverage this tool, and monitor which of my db calls may be taking longer to execute or creating bottlenecks.</p><p>Maybe like an idiot's guide to the SQL Profiler.</p><p>Thanks,<br>Ali</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659265">15</a> by Raymond Camden
		posted on 11/16/2006 at 2:12 AM
		</div>
		<div class="comment_text"><p>I plan on doing a Captivate demo of it. I don't consider myself knowledgeable enough to make a guide. All I learned was how to monitor the SQL. But I can show that for sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659262">16</a> by Ali
		posted on 11/16/2006 at 9:01 PM
		</div>
		<div class="comment_text"><p>Cool, can't wait to check it out.<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713659263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713659263">17</a> by kebab dylan
		posted on 11/20/2006 at 6:35 PM
		</div>
		<div class="comment_text"><p>you are actually the second to last person on earth to know that. I think I am the last. You beat me to it.</p></div>
	</div>
</div>
		