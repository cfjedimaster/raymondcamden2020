
<div class="comment" id="c_1713675618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675618">1</a> by Will Swain
		posted on 12/19/2007 at 10:13 PM
		</div>
		<div class="comment_text"><p>Thanks Ray,</p><p>However, I'm concerned that your example is redundant. Not sure Ms Hilton ever had dignity! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675611">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675611">2</a> by ziggy
		posted on 2/27/2008 at 7:48 AM
		</div>
		<div class="comment_text"><p>This syntax errors in BD7 too. Found out using Project Tracker which incorporated it and couldn't be started.</p><p>For the sake of one character, best to change all "&lt;" to "LT" so it works in everything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675616">3</a> by Raymond Camden
		posted on 2/27/2008 at 7:54 AM
		</div>
		<div class="comment_text"><p>Well, I did clearly point out it was cf8 only because of the &lt;. Folks are welcome to mod it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675622">4</a> by Steve Glachan
		posted on 6/25/2009 at 5:11 AM
		</div>
		<div class="comment_text"><p>Thanks Ray, I'm now using this in a Twitter RSS feed reader. Mixed in GetTimeZoneInfo() to get our Australian offset hours and it's working great!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675621">5</a> by Misty
		posted on 7/19/2014 at 11:04 PM
		</div>
		<div class="comment_text"><p>Hi ray, Coming back to this post very late,</p><p>I am using the UDF from cflib for the timezone: <a href="http://disq.us/url?url=http%3A%2F%2Fcflib.org%2Fudf%2FgetTimeInterval%3A8HLC6OMwSv625MUZX311nTyADiU&amp;cuid=3321886" rel="nofollow noopener" title="http://cflib.org/udf/getTimeInterval">http://cflib.org/udf/getTim...</a></p><p>I have included the weeks also in this:</p><p>else if (dateDiff("w", now(), <a href="http://disq.us/url?url=http%3A%2F%2Farguments.date%3ADPwqMIiobsTuMvC-3lFobxjsdlI&amp;cuid=3321886" rel="nofollow noopener" title="arguments.date">arguments.date</a>)){<br>				offset    = dateDiff("w",now(), <a href="http://disq.us/url?url=http%3A%2F%2Farguments.date%3ADPwqMIiobsTuMvC-3lFobxjsdlI&amp;cuid=3321886" rel="nofollow noopener" title="arguments.date">arguments.date</a>);<br>				interval = offset == 1 ? "week":"weeks";<br>				result    = "#offset# #interval# left";</p><p>working okay, but week is off 7 days and if the date with which i am comparing is say 9 days, i want this to be appearing as 1 week 2 days, i am missing something, not sure what, can you guide</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675623">6</a> by Raymond Camden
		posted on 7/20/2014 at 1:48 AM
		</div>
		<div class="comment_text"><p>I'm not quite sure I get your question here. It sounds like you are saying the week difference is off by 7 days - or by one?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675612">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675612">7</a> by Misty
		posted on 7/20/2014 at 11:28 AM
		</div>
		<div class="comment_text"><p>Hi Ray, Here is the Pastebin, It is working as of now, but i have removed the weeks as they were not giving me correct results, so what i am actually trying is:</p><p>5 days left or 5 days ago</p><p>1 week 3 days left</p><p>2 months 10 days left</p><p>if for specific month, days are 30 or 31, it should say 1 month.</p><p>I hope you can guide me what changes can be made to fix these above things:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FPZkxb78E%3ArFXkf_UUEBaODVRnMIa3RR1A4oE&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/PZkxb78E">http://pastebin.com/PZkxb78E</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675610">8</a> by Raymond Camden
		posted on 7/21/2014 at 4:35 AM
		</div>
		<div class="comment_text"><p>I honestly don't know what your doing in that code, but here is a modified version of my code that supports weeks. It is not heavily tested.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2Fcfjedimaster%2Fe63ac27cfd7df62d2651%3AwpoiQ3eZehy1DpgsqVfCOapb6A8&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/cfjedimaster/e63ac27cfd7df62d2651">https://gist.github.com/cfj...</a></p></div>
	</div>
</div>
		