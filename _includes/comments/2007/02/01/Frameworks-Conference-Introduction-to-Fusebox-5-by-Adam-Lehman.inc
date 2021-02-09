
<div class="comment" id="c_1713661741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661741">1</a> by Jim
		posted on 2/1/2007 at 9:24 PM
		</div>
		<div class="comment_text"><p>Ray - are you going to attend Steve's Fusebox presentation? He's supposed to have a 'new' version of Fusebox that only uses CFC's - no XML.</p><p>Jim (who's sitting in a cold office watching it snow)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661763">2</a> by Raymond Camden
		posted on 2/1/2007 at 10:34 PM
		</div>
		<div class="comment_text"><p>I wasn't. I _am_ attending his "CFCs are the framework" presentation. (I'm sitting in it right now.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661769">3</a> by Qasim Rasheed
		posted on 2/1/2007 at 11:45 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>&lt;shamelessplug&gt;<br>You can look at CFDefect which uses Fusebox 5.1 as a learning tool.<br>&lt;/shamelessplug&gt;</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661760">4</a> by Ali
		posted on 2/2/2007 at 1:56 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I would like to hear more of what you don't like about fusebox, and the reasons behind them.</p><p>The reason being, that I think my CF skills evolved parallel to the Fusebox methodology, and I have been incorporating it, one way or another into the CF code I have written for the past 9+ years.</p><p>I have, however had quite a struggle introducing the current XML-based flavors of Fusebox in my current job.  I think, that my colleagues may have some of the same apprehensions about it as you do.  But if I knew your stance, and the pros and cons and your reasoning behind them, I may be able to plead my case better.</p><p>One thing for sure is that they tend to like having everything in one CFM, rather than having one CFM page per query (query fuses).  And in other situations, I may have a separate act file which has the business logic, or looping through the query set to generate variables, then subsequently a separate display page that just outputs the display variables.  The tend to think that this is more overhead, and that now you have 3 or 4 pages to worry about or hunt down, when troubleshooting, rather than one CFM page (which could be upwards of 1100 lines long).</p><p>Thanks for your notes.<br>Since I rarely ever get to go to conferences, I appreciate respected people such as yourself jotting down your experiences at some of the sessions.</p><p>Thanks,<br>Ali</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661765">5</a> by Ali
		posted on 2/2/2007 at 2:00 AM
		</div>
		<div class="comment_text"><p>Sorry for the doublepost.</p><p>The biggest hurdle I have implementing Fusebox 4 and higher at my current job, is the XML syntax.</p><p>The argument against it is that, the XML syntax is something else to learn.  So for people on the team who aren't advanced developers, it may be difficult for them to understand how the application works.  Or if we get new hires with a lower level of CF experience, it will be one more hurdle for them.</p><p>Or for the non-CF developers, it may be difficult for them to understand which part they need to work on.</p><p>I disagree with all of the above, but it would be nice to know what other people who are not pre-disposed to Fusebox think.</p><p>Thanks,<br>Ali</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661766">6</a> by Tracy Smith
		posted on 2/2/2007 at 5:13 AM
		</div>
		<div class="comment_text"><p>Ray - I'm glad to see your keeping an open mind on Fusebox. I enjoyed your presentation on Model-Glue this afternoon.  I've been using Fusebox since the 2.0 version.  I can't tell you how many times I read and re-read Steve and Craig's book Fusebox: Methodology and Techniques.  Once v3.0 was out, I had the concepts down and was beginning to understand.  We had a major site in Fusebox 3.0 for several years.  We just updated to 4.1 which was another leap of faith for several developers.  The hardest part was switching from a CFM based controller/switch file to an XML based one.</p><p>Once you start to understand the concepts of Fusebox it begins to make a lot of sense.  However, after your presentation, I'm being swayed to try a few things in Model-Glue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661771">7</a> by Jason Daiger
		posted on 2/2/2007 at 9:28 AM
		</div>
		<div class="comment_text"><p>Ray, Given your background w/ Model-Glue you probably would have gotten more out of the ColdSpring Powered Fusebox presentation Adam did later in the day.  He demonstrated how to use a custom lexicon to load a value object (a.k.a. bean) from a service (which calls a DAO to load the bean w/ data).  The bean is then passed to the view for display.</p><p>Like Model-Glue, the view knows it is going to get a bean to work on.  In the example Adam gave it essentially used the attributes or request (can't remember which one) struct to stuff values into variables and the view got what it needed out of the stucts instead of the bean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661768">8</a> by Sean Corfield
		posted on 2/2/2007 at 10:12 AM
		</div>
		<div class="comment_text"><p>I'll be very interested to read your experiences learning Fusebox. For one thing, it will give Team Fusebox some great feedback about how we can make the learning process easier. And, of course, I have a vested interest in people learning - and liking - Fusebox 5.x.</p><p>Fusebox 5.1 will be released this Saturday (I have it on a memory stick at the conference if you want a copy one day early ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661770">9</a> by Michael traher
		posted on 2/2/2007 at 2:16 PM
		</div>
		<div class="comment_text"><p>Ali, One of the main advantages I found moving from v3 to 4/5 using the XML syntax to replace the fbx_switch file is that the things you can do are strictly limited. Sounds a strange reason maybe, but let me expand. In the fbx_switch it was possible for -any- cf code to be added and so for less experienced developers it was temping to start straying from the fusebox concepts and coding business logic in a file which should be concerned solely with the flow of control.  Using the XML you can -only- use the valid XML statements and while we do have if and loops these can still only relate to controlling which files are included in the next request.  The way I try and code now is that you should be able to -only- look in the xml files to understand the flow of a system, and then once you can see what goes where you know which .cfm file to open to make changes or fix bugs.  The xml should be a nice simple map to the system. I would take one of your 1000 plus .cfm files and split it down to some nice small fuse files in fusebox 5 and then let an independant developer try and amend both and see which is easier.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661773">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661773">10</a> by Raymond Camden
		posted on 2/2/2007 at 8:07 PM
		</div>
		<div class="comment_text"><p>A few notes for Ali:</p><p>Dislike of Fusebox: I may have overstated it. I don't dislike FB. I did kinda dislike it years and years ago, but to be clear, I haven't looked at it in a long time (well, except for yesterday). Anyway - point is - I'm trying to be open minded now. :)</p><p>You mentioned that it is difficult to get the newbie CF folks understanding the XML configuration. It seems to be that frameworks like FB, MG, etc, allow you to more easily divvy up tasks between experienced and not-so-experienced CF folks. So I wouldn't even let my newbie CF guy worry about that. I'd handle the high leel XML setup and let the newbie implement what it makes sense for him to implement. So for example, views are typically petty simple and a great place to assign a fresh developer.</p><p>Multiple files: Well, one file may be convenient, but w/o proper abstraction you are going to end up duplicating a lot of code. I'd rather have 2 files (as a simple example) setup in such a way so that when I need a new page, I can reuse one file (the query fuse for example), instead of just cutting and pasting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661772">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661772">11</a> by Ali
		posted on 2/3/2007 at 3:56 AM
		</div>
		<div class="comment_text"><p>Thanks to Michael and Ray.</p><p>Your comments will really help me make my case.</p><p>I agree completely with your comments, Ray, in that I would rather reuse one query fuse, rather than cut and paste it or versions of it all over the place.</p><p>And to Michael,  I too think it makes sense to have a display page, be just a display page.  That way if we get a graphics designer or a strictly-HTML person, they can work on the display and understand how it looks without having step over or around CF code.</p><p>I have started a project at work that looks like Fusebox 2.  To get people used to that layout, and the fuses and stuff.</p><p>I think what would be good to do is convert it to Fusebox 5-5.1, and then have them compare the two and see if they agree that the XML syntax and stuff are a better way to do things.</p><p>Thanks again,<br>Ali</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661776">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661776">12</a> by Daniel Greenfeld
		posted on 2/3/2007 at 9:45 AM
		</div>
		<div class="comment_text"><p>Ray said: "Lovely - one of the staff members is actually talking on his cell phone. He left after 5 minutes on the phone. Gee, thanks."</p><p>This sort of behavior is unnacceptable.  Have people no tact?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661774">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661774">13</a> by Raymond Camden
		posted on 2/3/2007 at 7:46 PM
		</div>
		<div class="comment_text"><p>Daniel - I see this at every conference at least once. People just suck. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661780">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661780">14</a> by Devin
		posted on 2/4/2007 at 5:08 AM
		</div>
		<div class="comment_text"><p>that phone call was the least of the disturbances. what really got to me was the fact that during most of the sessions there were a steady stream of people entering for about 15 minutes into the session with constant sounds of the door opening/shutting... making it extremely difficult to give the speaker full attention.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661777">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661777">15</a> by Sean Corfield
		posted on 2/4/2007 at 12:11 PM
		</div>
		<div class="comment_text"><p>Just so folks know, one of the things under discussion for Fusebox 6 is a way to adopt a set of conventions that will let you create a Fusebox application with no XML at all. If you want more control or you want to move away from those conventions, you'll need some XML of course, but the idea is to make Fusebox easier and easier to use. Keep an eye on my blog for more information...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661778">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661778">16</a> by Raymond Camden
		posted on 2/4/2007 at 6:34 PM
		</div>
		<div class="comment_text"><p>Sean, are you seeing a lot of your users (FB users) saying they want to avoid XML because it is too difficult? I know Steve brought that up as well. I find that so odd to me since the XML config nature of MG seems so natural to me now. I find it a nice, higher level description of the application, and not complex at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661779">17</a> by Sean Corfield
		posted on 2/5/2007 at 2:40 AM
		</div>
		<div class="comment_text"><p>Ray, yes, there has been a steady stream of complaints since Fusebox 4 introduced XML in the Summer of 2003. Because Fusebox has a very broad audience - encompassing a large number of procedural programmers and outright newbies - there are always calls to simplify things, to make it easier to learn.</p><p>By introducing a number of simple conventions that allow the XML files to be effectively ignored at first, it would definitely lower the bar to entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661781">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661781">18</a> by Philippe Back
		posted on 12/6/2007 at 11:45 PM
		</div>
		<div class="comment_text"><p>Indeed Fusebox 4 XML syntax is not that easy to get in the first place. But with the ability to inherit from parents, the ability to restructure the files easily and the ability to put the plugins, this is really a superb glue for building apps.</p><p>I used struts, JSF, ASP, ASP.NET and Fusebox 4.1 (the PHP version) and it is with the fusebox version that I have the most pleasure to work. All the others do feel so unsexy.</p><p>Tried my hand at model glue and now back FBX.</p></div>
	</div>
</div>
		