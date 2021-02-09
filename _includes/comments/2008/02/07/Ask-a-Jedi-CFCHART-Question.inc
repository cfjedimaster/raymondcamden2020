
<div class="comment" id="c_1713676859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676859">1</a> by Emilie
		posted on 2/7/2008 at 6:42 PM
		</div>
		<div class="comment_text"><p>Thanks Ray. This is very topical for me as I was about to do some cfchart work. Out of curiosity how would you handle the missing values with SQL? Would you use the ISNULL function?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676862">2</a> by Raymond Camden
		posted on 2/7/2008 at 7:03 PM
		</div>
		<div class="comment_text"><p>Would you hate me if I said I was something of a SQL noob? I _believe_ that is how I'd do it - or with CASE. For sure I'd stumble around a bit. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676861">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676861">3</a> by todd sharp
		posted on 2/7/2008 at 7:06 PM
		</div>
		<div class="comment_text"><p>Forgive me for not reading the whole post - but - isNull() (or coallesce()) can be used for null values.  Either that or wrap your chart values in val().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676863">4</a> by Emilie
		posted on 2/7/2008 at 10:02 PM
		</div>
		<div class="comment_text"><p>How could I? The blog &lt;em&gt;is&lt;/em&gt; called Coldfusion Jedi not SQL :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676864">5</a> by Magnus
		posted on 2/8/2008 at 3:45 AM
		</div>
		<div class="comment_text"><p>I have another cfchart question (Maybe I am cheating by tacking it on here). I tried to chart some data based on ranked lists, like a bestseller list. I wanted to chart the position of a "book" on the list over the weeks. On the list, 1 is higher than 2 is higher than 10, so when it charted it came out upside down. I didn't see anything in the cfchart attributes that allowed me to invert this.</p><p>I have to admit, it wasn't a crucial need to chart this so I moved on to other problems, but it has sort of bugged me since then. Was I missing something easy?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676865">6</a> by Raymond Camden
		posted on 2/8/2008 at 4:00 AM
		</div>
		<div class="comment_text"><p>Ahah, I think I found it. If you use the chart editor, there is an option to reverse the yaxis. It seems to reverse the bars though as well.</p><p>If you want - send me some data, in the form of a fake query like above, and I'll try to get it working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676867">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676867">7</a> by Scott
		posted on 2/27/2008 at 9:33 PM
		</div>
		<div class="comment_text"><p>With cfchart, you can do this by looping through a distinct list of months, but if you used the same dataset, how could you chart this in Flex?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676866">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676866">8</a> by Josh
		posted on 3/28/2008 at 10:33 PM
		</div>
		<div class="comment_text"><p>Running into this "CFChart gets confused issue".  Not all of my datasets have values for each item.  My query happens to be a predefined view that uses alot of SQL UDF's.</p><p>Just wanted to state that I think it stinks that CF cant handle a dataset for multiple series unless each set is the same and has values.  Anyone know if they evolved in CF8 to solve this problem?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676868">9</a> by Don
		posted on 2/25/2010 at 1:26 AM
		</div>
		<div class="comment_text"><p>For missing data there is a setting in the default chart that cures this problem. <br>I had to go here<br>C:\JRun4\servers\cfusion\cfusion-ear\cfusion-war\WEB-INF\cfusion\charting\styles<br>But just search for the charting folder if you need to.<br>There you will find the file default.xml which you can open for editing. Find this line :<br>&lt;frameChart autoAdjust="false" is3D="false" isInterpolated="true"&gt; and change the isInterpolated to false.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676869">10</a> by Raymond Camden
		posted on 2/25/2010 at 2:48 AM
		</div>
		<div class="comment_text"><p>I don't think I'd recommend doing it globally. I'd do it in a style instead.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2008%2F9%2F17%2FAsk-a-Jedi-Handling-nulls-in-a-chart%3ADMy8XhiaaHQznjg5B3msMOtn9pg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2008/9/17/Ask-a-Jedi-Handling-nulls-in-a-chart">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676871">11</a> by Don
		posted on 2/25/2010 at 3:14 AM
		</div>
		<div class="comment_text"><p>Now how would you do this so it shows it grouped by month instead of employee? That's what I have to do. Each month how many sales each employee does. Not working for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676872">12</a> by Raymond Camden
		posted on 3/1/2010 at 9:52 PM
		</div>
		<div class="comment_text"><p>I got it to work by modifying this at the bottom:</p><p>&lt;cfchart title="Sales" show3d="true" showLegend="true"&gt;<br>	&lt;cfloop query="getNames"&gt;<br>		&lt;cfquery name="databyemp" dbtype="query"&gt;<br>		select	*<br>		from	data<br>		where	name = &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#name#"&gt;<br>		&lt;/cfquery&gt;<br>		&lt;cfdump var="#databyemp#" output="/Users/ray/Desktop/test.html" format="html"&gt;<br>		&lt;cfchartseries type="bar" itemColumn="month" valueColumn="cost" query="databyemp" seriesLabel="Sales for Name #name#"&gt;<br>		&lt;/cfchartseries&gt;<br>	&lt;/cfloop&gt;</p><p>&lt;/cfchart&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676873">13</a> by Lina Haddad
		posted on 2/4/2012 at 12:20 AM
		</div>
		<div class="comment_text"><p>i need your help cfchart please ,, i have a chart that has a title (charttitel) and i am seeing some examples that have the ability to show onhover on the title it called altText...<br>i looked in  WebChart3D and couldn't figure it out,also one more thing please i see the autoAdjust property there and i don't see it in the xml file ,do you know what is it?<br>thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676874">14</a> by Raymond Camden
		posted on 2/4/2012 at 12:28 AM
		</div>
		<div class="comment_text"><p>To your first question, there is a root level altText property in the chart editor. I assume that isn't altText for the title, but alt text for the entire Flash or JPG chart.</p><p>I also see autoadjust in the editor too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676883">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676883">15</a> by Lina Haddad
		posted on 2/4/2012 at 2:03 AM
		</div>
		<div class="comment_text"><p>thanks you ,about atlText i saw it in this link <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F3851477%2Fcoldfusion-cfchart-stacked-order%3AelsSdisGThoALXjrDp5e9s5iURg&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/3851477/coldfusion-cfchart-stacked-order">http://stackoverflow.com/qu...</a> if you scroll down to the chart and have your mouse over the title(Cluster Referral....)you will see tooltip (alt text) that i want to do in my app but i don't how..<br>and about my second questin autoAdjust ,i see it in the editor but i don't see it in the xml file ,can you please paste a copy of the xml that include the auto adjust in it..<br>thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676882">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676882">16</a> by Raymond Camden
		posted on 2/4/2012 at 2:24 AM
		</div>
		<div class="comment_text"><p>The reason you don't see autoAdjust in the XML is that it defaults to on. If you turn it off, you will see it in the XML.</p><p>As for alt Text, did you try it? Specify a value for it and it shows up in XML. For me, I saw it like so:</p><p>&lt;frameChart is3D="false" altText="mmoo"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676885">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676885">17</a> by Lina Haddad
		posted on 2/4/2012 at 3:03 AM
		</div>
		<div class="comment_text"><p>Thank you Raymond ,i got the autoAdjust to work,<br>about the altText ,i applied it to both my chart and to the WebChart3D chart ,it didn't give an error but it doesn't show up when the mouse is over the chart or over the title box,<br>does it requir any oth settings?<br>thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676884">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676884">18</a> by Raymond Camden
		posted on 2/4/2012 at 3:09 AM
		</div>
		<div class="comment_text"><p>It may be usable for Flash based charts. What happens if you try the PNG version?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676886">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676886">19</a> by Lina Haddad
		posted on 2/4/2012 at 3:20 AM
		</div>
		<div class="comment_text"><p>same thing with PNG format , but i could not test it with flas because it is erroring out for some reason.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676888">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676888">20</a> by Raymond Camden
		posted on 2/5/2012 at 3:06 AM
		</div>
		<div class="comment_text"><p>Well, you may have me. You can always use JavaScript to add alt-Text to a region by hand.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676889">21</a> by Lina Haddad
		posted on 2/7/2012 at 1:46 AM
		</div>
		<div class="comment_text"><p>yeah i used my own html tag for the titel and added the tolltip to it.<br>Thank Raymond to your help,i really appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676890">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676890">22</a> by Tim Rubel
		posted on 9/28/2014 at 9:26 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Isn't there something that can be done in cfchart so that It auto creates or skips the missing values in the series?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676892">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676892">23</a> by Raymond Camden
		posted on 9/28/2014 at 10:14 PM
		</div>
		<div class="comment_text"><p>Yep - you want this: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2F2008%2F9%2F17%2FAsk-a-Jedi-Handling-nulls-in-a-chart%3A4VsA7G6gw56q4M2EhDJ6vI8jRas&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/2008/9/17/Ask-a-Jedi-Handling-nulls-in-a-chart">http://www.raymondcamden.co...</a></p><p>But to be clear, that charting engine is ancient. You should use something newer.</p></div>
	</div>
</div>
		