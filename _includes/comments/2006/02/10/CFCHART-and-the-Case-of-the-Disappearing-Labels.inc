
<div class="comment" id="c_1713650052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650052">1</a> by Steve
		posted on 2/11/2006 at 6:01 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>If you use the Chart utility tool that is buried in CF you can do tons of things with charts.</p><p>Open CFusionMX7\lib\wc50.jar and create the chart you want.  This utility lets you take "full" advantage of the Web Charts license.  Unfortunately some of the chart types are not available.  The utility will even write the xml code for you.</p><p>I did my own chart at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.clinfrastructure.com%2Fclineng%2Findex.cfm%3Ag6k2ZfdtEgZoLVogNiPsdFAq4OM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.clinfrastructure.com/clineng/index.cfm">http://www.clinfrastructure...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650056">2</a> by Raymond Camden
		posted on 2/11/2006 at 6:18 AM
		</div>
		<div class="comment_text"><p>Hey Steve, I thought it was obvious - I _did_ use the tool. :) That's how I fixed my xml.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650054">3</a> by noname
		posted on 2/11/2006 at 10:48 PM
		</div>
		<div class="comment_text"><p>I got an error, it says Cannot locate gallery files in C:\CFusionMX7\lib\gallery ... I checked and I don't have that folder in either of my installations.  Do you guys?  Can I get it from somewhere?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650057">4</a> by Michael White
		posted on 2/11/2006 at 10:57 PM
		</div>
		<div class="comment_text"><p>This all just goes to show you how handy Moderate to Advanced information on creating Charts and Reports would be. I'm still trying to claw my way out of a wet paper bag. Such wonderful and powerful features, so little info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650053">5</a> by noname
		posted on 2/11/2006 at 11:03 PM
		</div>
		<div class="comment_text"><p>True ...</p><p>Just out of curiosity, have you gotten webcharts to work?  I created a blank direcotry called gallery and it got rid of the error, but now I go in and I can't load any charts ... hmmm ... help?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650055">6</a> by noname
		posted on 2/11/2006 at 11:10 PM
		</div>
		<div class="comment_text"><p>Okay, I figured it out ... I ran the .bat from \CFusionMX7\charting\webcharts.bat ... 1 word:  WOW</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650058">7</a> by Steve
		posted on 2/12/2006 at 1:01 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Sorry I missed the obvious, but most people don't even know the utility exists much less where to find it.  What other poorly documented features are buried in CF7?  Maybe the cookbook could have a category called EasterEggs...:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650059">8</a> by Ryan Guill
		posted on 2/13/2006 at 7:09 PM
		</div>
		<div class="comment_text"><p>Yeah Ray, I just found the charting utility recently, and tried it out, but I dont have a clue how to use it... It generates the xml, but how do you use that in your cf apps...  Could you do a blog entry or cookbook article?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650060">9</a> by Raymond Camden
		posted on 2/13/2006 at 7:15 PM
		</div>
		<div class="comment_text"><p>It may be the kind of thing that is a bit too detailed for the cookbook, but I'll consider it. As for using it - you just save the file (foo.xml), and in your cfchart, do style="foo.xml" (assuming it is in the same folder). If you download Soundings, you can see this in action. If you save the XML file with the built-in chart styles, you can use style="foo", but I wouldn't recommend that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650061">10</a> by Ryan Guill
		posted on 2/13/2006 at 7:22 PM
		</div>
		<div class="comment_text"><p>ahh, I see...</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650063">11</a> by Tom Forrest
		posted on 2/28/2006 at 5:55 PM
		</div>
		<div class="comment_text"><p>Is there a way I can give a developer access to the charting stuff without giving them access to the server?  Or installing CF on their workstation?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650067">12</a> by Raymond Camden
		posted on 2/28/2006 at 6:08 PM
		</div>
		<div class="comment_text"><p>I'm thinking you could install a developer edition. If you wanted to make sure they don't actually run CFM pages, you could disable the cf services.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650068">13</a> by Tom Forrest
		posted on 2/28/2006 at 6:11 PM
		</div>
		<div class="comment_text"><p>Thanks Ray.</p><p>I went on a test run.  Grabbed wc50.jar and the gallery folder, put them together in a folder on a workstation and just did java -jar wc50.jar and it seems to work just fine (even with Java 1.5!).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650069">14</a> by Lina Haddad
		posted on 12/6/2011 at 10:12 PM
		</div>
		<div class="comment_text"><p>hi Raymond, i am kind of stuck in this chart xml,and need your help please,, my chart contains 4 lines one of them is the main line and the others are like baseline ,average..,the line width for all of this lines is the same ,but i want to have the main line thicker or the other lines thinner ,, is it doable ? thank you in advance..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650071">15</a> by Raymond Camden
		posted on 12/6/2011 at 10:33 PM
		</div>
		<div class="comment_text"><p>In the chart editor, go to</p><p>Elements</p><p>Then go to Series.</p><p>In the upper left hand box, enter 0 for your first line, or whatever you want. Basically it's a 0 index system for your data. I entered 0 and hit add.</p><p>Then with 0 selected on the left, you can modify lineWidth and lineStroke. I noticed it was a bit slow to update when I clicked apply, so you may want to clicky-clicky to see it apply. But it does work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650070">16</a> by Lina Haddad
		posted on 12/7/2011 at 12:11 AM
		</div>
		<div class="comment_text"><p>thank you so much ,that helps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650072">17</a> by Kelli Forrister
		posted on 2/2/2012 at 1:39 AM
		</div>
		<div class="comment_text"><p>I did get the chart styles to work as a string.</p><p>Take the XML for your chart style and save it as a variable using cfsavecontent.  Then set the cfchart style to be that value.</p></div>
	</div>
</div>
		