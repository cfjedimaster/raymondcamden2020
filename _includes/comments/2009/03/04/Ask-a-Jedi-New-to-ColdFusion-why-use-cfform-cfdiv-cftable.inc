
<div class="comment" id="c_1713713492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713492">1</a> by Sam Farmer
		posted on 3/4/2009 at 9:29 PM
		</div>
		<div class="comment_text"><p>I agree with what Ray says.</p><p>The clientside cf tags and features allow for RAD development.  Generally I will start with those tags and if the look or complexity needs to go further than what CF provides will look to jQuery or Spry.  The back end code at most then just needs to be tweaked.</p><p>I also find the CF clientside features to be very useful for admin or internal facing sites.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713490">2</a> by Scott Stroz
		posted on 3/4/2009 at 9:52 PM
		</div>
		<div class="comment_text"><p>I have to admit, for a lot of admin or internal facing apps, I find my self using &lt;cfgrid format="html" /&gt; quite a bit.</p><p>Its quick, its easy and I like the UI.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713487">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713487">3</a> by Caleb Horton
		posted on 3/4/2009 at 10:04 PM
		</div>
		<div class="comment_text"><p>In Ray's latest twit he says this is "exactly why I'm not allowed to do design work".</p><p>This brings up a good point. I've heard about companies who let the developers produce the raw content and allow the designers to mark it up and display it as they see fit.<br>Do you think this would be a hit against those tags as it would require either the developers to take on some of the design work or the designers to learn CF.</p><p>Also does CSS treat a &lt;cftable&gt; the same as it would a &lt;table&gt;? Maybe I should just test it instead of adding it in a comment. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713493">4</a> by Raul Riera
		posted on 3/4/2009 at 10:05 PM
		</div>
		<div class="comment_text"><p>There is a bug in the &lt;cftable&gt; &lt;cfcol&gt; when you pass a blank value to the &lt;cfcol&gt; it will not close the &lt;td&gt; tag. So he should be avoiding that tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713495">5</a> by Scott Stroz
		posted on 3/4/2009 at 10:09 PM
		</div>
		<div class="comment_text"><p>Wow...peole actually use &lt;cftable&gt; enough to know that a bug exists?</p><p>I am stupified ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713496">6</a> by Raymond Camden
		posted on 3/4/2009 at 10:11 PM
		</div>
		<div class="comment_text"><p>Caleb - In the tags you mentioned, I think only cftable really falls into the category of 'complete lock down' in terms of UI. Stuff like cfgrid can be styled to some extent. I think it is a trade off. You can build an ajax-based grid w/ cfgrid in 4 minutes. With 0 JS experience. That is incredible. But you may not be able to style it as much as jqGrid (and I just throw that plugin out since it is fresh on my mind).</p><p>I kinda discussed this recently in my jQuery versus CFAjax post (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2009%2F2%2F11%2FAsk-a-Jedi-jQuery-or-ColdFusion-8-Ajax-Or-both%29%3Aj3uQ7FwybeZY0aZD6MGxA6SkRyM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2009/2/11/Ask-a-Jedi-jQuery-or-ColdFusion-8-Ajax-Or-both)">http://www.coldfusionjedi.c...</a> so this post may be a bit of a dupe (sorry!), but kinda the same rules apply.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713488">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713488">7</a> by Caleb Horton
		posted on 3/4/2009 at 10:30 PM
		</div>
		<div class="comment_text"><p>You guys are awesome and thanks Ray for the prompt response to my e-mail. I honestly didn't expect a reply for at least 24 hours.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713489">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713489">8</a> by Adam Cameron
		posted on 3/4/2009 at 10:52 PM
		</div>
		<div class="comment_text"><p>Hey, Raul... have you raised that bug... errr... "somewhere" (don't answer that)?  Now's a good time to try to get these things fixed, after all...</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713491">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713491">9</a> by Dan Vega
		posted on 3/4/2009 at 10:58 PM
		</div>
		<div class="comment_text"><p>I am with Scott on this one. I am amazed someone actually used cftable to the point to find a bug!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713494">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713494">10</a> by Raymond Camden
		posted on 3/4/2009 at 11:01 PM
		</div>
		<div class="comment_text"><p>@Adam - Don't forget that anyone can report bugs: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2Fwish%3AeVByS_kB5f-F_Xb5m4vrRNXZtoA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/go/wish">http://www.adobe.com/go/wish</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713500">11</a> by Raul Riera
		posted on 3/5/2009 at 12:11 AM
		</div>
		<div class="comment_text"><p>Yo are right Adam, raised on both places</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713497">12</a> by JC
		posted on 3/5/2009 at 12:40 AM
		</div>
		<div class="comment_text"><p>CFTable rocks for generating fixed width content. We use it fairly often to feed data to back end processes. Just strip out the pre tags &amp; you're good to go. The HTML version's fairly handy for quick output of data, but not much faster to code than just doing your own table and looping the rows (and most of the time I wanted something that fast I'd just cfdump it anyway)</p><p>CFGrid is a really useful tool. I use it for a fair number of things, but the most interesting one is a data entry/cleansing tool. Couple of dozen columns, anywhere up to 1000 or so rows... before we built this thing in house we had a vendor product that tried to do the whole thing using HTML... one big table full of input type=text fields. Took a couple of minutes just to render for some clients, and then IIRC you could only update one row at a time.</p><p>Now if only I could get the flash version of it to let me switch the form action based on which button I push....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713499">13</a> by Raymond Camden
		posted on 3/5/2009 at 12:41 AM
		</div>
		<div class="comment_text"><p>@JC - No one should be using the Flash versions. Use Flex 3 man, it's free now!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713498">14</a> by Brandon Hansen
		posted on 3/5/2009 at 1:26 AM
		</div>
		<div class="comment_text"><p>Ray,<br>I appreciate all of your work in the CF community.  One of my thoughts with the front-end tags (cfdiv, cftable, cfform) is that the markup they create is usually not optimal.  First, the server needs to process more markup (minimal overhead) and then the client needs to process additional js (again, pretty minimal).  But a developer could, with jQuery write the same (or better) functionality that ColdFusion creates in about 70% less code.  And if they are using the Google JS API to include jQuery, then there is no overhead in using jQuery.</p><p>I have no problems at all using those front-end tags, it is just important that we understand what they actually do.  Use them and then look at the html markup that is generated to see what CF is doing for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713505">15</a> by Raymond Camden
		posted on 3/5/2009 at 1:33 AM
		</div>
		<div class="comment_text"><p>I agree it is important to recognize the performance impact, but I'd argue for 99% of the sites out there it won't matter one iota. You can relate this to the whole 'valid xhtml' issue too. I 'get' why developers think it is important, but for the vast majority of users out there it is a non-issue. (Once again, I am prepared to be flamed! ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713509">16</a> by Adam Cameron
		posted on 3/5/2009 at 2:07 AM
		</div>
		<div class="comment_text"><p>Thanks Ray, but I think you, Raul and I all knew exactly what I meant when I said what I did.</p><p>[taps side of nose, and winks in a very unsubtle way]</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713507">17</a> by Brandon Hansen
		posted on 3/5/2009 at 2:49 AM
		</div>
		<div class="comment_text"><p>I know that there are a lot of counter-arguments to this (use what you have available, etc), but one of the reasons that I don't use the cfform, cfgrid, etc is so that I learn how to do it myself.</p><p>There may be projects that I work on in PHP and I may need to still implement validation, etc.</p><p>Again, I am not against using the tags, I just don't want to see us developers getting complacent (or lazy)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713508">18</a> by Henry Ho
		posted on 3/5/2009 at 6:30 AM
		</div>
		<div class="comment_text"><p>Out of all of them, cftable is the worse.  Good luck with making it look good, i.e. odd and even row with alternative background colour (w/o JS that is).</p><p>cfform with bind is very powerful and neat, if u don't mind the multiple JS files that comes with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713511">19</a> by trent
		posted on 3/5/2009 at 8:09 PM
		</div>
		<div class="comment_text"><p>Call me old fashion, but I prefer to leave the client side code on the client side, and server side code on the server side..  This is how things start getting sloppy in my opinion.  Good practice always keeps these two separated as much as possible.  Although ColdFusion may be separating the two behind the scenes it doesn't give me that warm cozy feeling inside.</p><p>But for beginners these probably are good to get your footing until you learn other ways..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713510">20</a> by JC
		posted on 3/5/2009 at 8:33 PM
		</div>
		<div class="comment_text"><p>@Ray: I've never used Flex. Haven't even really looked at it. We've had a corporate policy of "no flash allowed" for ages and I had to jump through a lot of hoops to get an exception in for the grid stuff. :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713512">21</a> by Charles Sherman
		posted on 3/5/2009 at 10:21 PM
		</div>
		<div class="comment_text"><p>I use cfform all the time. The preserve data option is one of my favorite things in CF. Saves me a ton of time.</p><p>I do the the validation on the server side and that preserve data feature saves me all the time it takes to repopulate the form with the data the client just entered.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713514">22</a> by Rt
		posted on 7/1/2013 at 11:28 PM
		</div>
		<div class="comment_text"><p>Is there any way to use jquery mobile inside of a cfdiv? When i load jquery mobile on the page and go directly to that page it works fine and the form elements are styled based on jquery mobile's design.. but when I go to the same page loaded inside of my cfdiv on a parent page the jquery mobile code does not render the form correctly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713513">23</a> by Raymond Camden
		posted on 7/2/2013 at 2:09 AM
		</div>
		<div class="comment_text"><p>Code being loaded via cfdiv cannot use JavaScripts in the form of:</p><p>function foo() { ... }</p><p>and instead must be defined as</p><p>foo = function() { }</p><p>So to make jQM work inside cfdiv you would need to seriously re-engineer it probably. I would simply skip cfdiv and consider an iframe instead.</p></div>
	</div>
</div>
		