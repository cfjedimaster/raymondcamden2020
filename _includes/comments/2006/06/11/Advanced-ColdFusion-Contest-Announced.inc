
<div class="comment" id="c_1713653948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653948">1</a> by Nathan D
		posted on 6/12/2006 at 5:42 AM
		</div>
		<div class="comment_text"><p>Just to be clear, you are the judge and jury on this, right?  No all-star panel of judges?  No "vote for your favorite"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653967">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653967">2</a> by Raymond Camden
		posted on 6/12/2006 at 5:52 AM
		</div>
		<div class="comment_text"><p>Yes. I had ideas for a contest where the actual code would decide the winner. For example, stock pickers or code that would "fight". Maybe later. But for this - yes - it's all me and my personal opinion. Of course, as with the other contests, it is more about the group discussion than anything else.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653972">3</a> by bradley
		posted on 6/12/2006 at 8:08 AM
		</div>
		<div class="comment_text"><p>Trying to rack my brain as how to best apply "rules".  First thought was "case", but no...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653973">4</a> by Michael Dinowitz
		posted on 6/12/2006 at 4:14 PM
		</div>
		<div class="comment_text"><p>While the rules and engine are rather easy to implement, the issue is one of what rules are 'right'. While everyone would agree with IsDefined over ParameterExists (and a rule to warn if IsDefined does not have a proper scope), StructKeyExists is not universally accepted as better.<br>As someone who has 'suggested' some of the best practice rules we use, I can tell you that there has always been controversy over what to use. Not Len(var) vs. var="" for example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653968">5</a> by Raymond Camden
		posted on 6/12/2006 at 4:58 PM
		</div>
		<div class="comment_text"><p>Michael, I thought I had made it clear. The goal is an easy to extend system. Notice how I said a good system with 2 rules will beat a bad system with 200 rules. Do not get hung up on what the rules actually check for.</p><p>As it stands - your solution should let someone pick the rules they want to apply. So if they don't agree with the "StructKeyExists is better than IsDefined" rule, they can disable it. (Again, this is all described above, but just making sure folks get it.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653977">6</a> by Michael Dinowitz
		posted on 6/12/2006 at 5:03 PM
		</div>
		<div class="comment_text"><p>Just trying to be clear on things. :)<br>I already have this system built for my personal anti-spam system and have been meaning to release it as something for the community (time).</p><p>Looks like a good time to reiterate what I consider good rules on Blog of Fusion. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653979">7</a> by Justice
		posted on 6/12/2006 at 5:14 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>You should send this out on the CF-Talk message list, maybe you will get more people interested in building a solution.  I can see how this would be very useful, especially scanning old code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653971">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653971">8</a> by Steve Durette
		posted on 6/12/2006 at 6:40 PM
		</div>
		<div class="comment_text"><p>You did know that there is a commercial product that already does this right?</p><p>It's the code review tool from activSoftware (formerly <a href="http://disq.us/url?url=http%3A%2F%2FCFDev.com%3AuCvO27ZJDSsIE1xkkJJ8PVZ8zOk&amp;cuid=3321886" rel="nofollow noopener" title="CFDev.com">CFDev.com</a>).</p><p>I'm not an employee of the company, but I did buy the software when it first came out.  It works pretty well for code reviews.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653978">9</a> by Raymond Camden
		posted on 6/12/2006 at 6:47 PM
		</div>
		<div class="comment_text"><p>Yep. But this will be an open source project. Also, what is wrong with reinventing the wheel? :) I've done that for all my projects and I found it to be a great way to learn.</p><p>The real point of this contest is for folks to try to write it - and for my readers and I to look at the entries and talk about it. What works - what doesn't work - etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653950">10</a> by Michael Dinowitz
		posted on 6/12/2006 at 7:40 PM
		</div>
		<div class="comment_text"><p>[posted with Raymond's permission]<br>For those who may have questions with this contest, there is a ColdFusion-centric Regular Expressions list on House of Fusion:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.houseoffusion.com%2Fgroups%2Fregex%3AqgGCBzxTrIOinELhFcJs2RzVrgU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.houseoffusion.com/groups/regex">http://www.houseoffusion.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653957">11</a> by Teddy R Payne
		posted on 6/12/2006 at 8:58 PM
		</div>
		<div class="comment_text"><p>This sounds like an intriguing project.  I may have to sacrifice some sleep to enter in this contest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653969">12</a> by Michael Dinowitz
		posted on 6/13/2006 at 4:27 AM
		</div>
		<div class="comment_text"><p>For those using activsoftware for a list of rules, please note that their list is partially based on CF 5 and is not 100% true. For example IIF compiles down to the exact same code as a CFIF and is not slower at all. Might be harder for some to read, but that's a style thing, not a performance one. <br>There is NO speed increase using the <br>&lt;CFSET variable="var"&gt;<br>syntax over the <br>&lt;CFSET SetVariable('variable', 'var')<br>Not setting the overwrite argument in StructInsert does not slow the function down.<br>There are more that get a bit esoteric (such as the CFERROR mention) but the point is the same. Any rule you make should be something you have personal experience with and know for sure should be a rule or should be something that is well known by the community. If it's not, then whoever offered the rule should be able to put forward some good reasoning as to why it should be a rule.</p><p>(I put forward the IIF rule in CF 5 based on experimentation and I retracted it in CFMX based on more experimentation. But don't trust me, try it yourself) :)</p><p>This is going to be the best contest yet!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653970">13</a> by Roland Collins
		posted on 6/13/2006 at 4:49 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Any restrictions on databases, etc?  I know it adds some external dependencies, but it *would* allow for some cool tracking of fixes, etc over time and the ability to add things like blame reports.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653975">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653975">14</a> by Roland Collins
		posted on 6/13/2006 at 4:49 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Any restrictions on databases, etc?  I know it adds some external dependencies, but it *would* allow for some cool tracking of fixes, etc over time and the ability to add things like blame reports.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653976">15</a> by Raymond Camden
		posted on 6/13/2006 at 5:04 AM
		</div>
		<div class="comment_text"><p>Roland - I'd rather it be SQL Server, MySQL, or Access, so that I can test it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653982">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653982">16</a> by Raymond Camden
		posted on 6/13/2006 at 6:12 PM
		</div>
		<div class="comment_text"><p>New prize listed.</p></div>
	</div>
</div>
		