
<div class="comment" id="c_1713717272">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717272">1</a> by Todd Rafferty
		posted on 7/21/2009 at 4:24 PM
		</div>
		<div class="comment_text"><p>Typo: This is a hard coded account "idea" for RIAForge</p><p>idea = id</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717273">2</a> by Raymond Camden
		posted on 7/21/2009 at 4:33 PM
		</div>
		<div class="comment_text"><p>Fixed, thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717275">3</a> by David
		posted on 7/23/2009 at 2:27 AM
		</div>
		<div class="comment_text"><p>Hi Ray, i'm really loving this idea and want to implement it but i'm pulling out my hair in frustration, i keep getting this error on the cfhttp calls to google:</p><p>I/O Exception: peer not authenticated</p><p>i looked into it a bit and people are saying that error is normally that the JVM needs the site's SSL cert added to it's keystore, but it seems strange that google's SSL would require such a hack as they'd be using a tier 1 cert provider surely.</p><p>did you experience anything like this as i'm sure you are on a similar configuration to me: OSX 10.5.7, cf  	 8,0,1,195765, jvm 1.6.0_13</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717274">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717274">4</a> by Raymond Camden
		posted on 7/23/2009 at 3:47 PM
		</div>
		<div class="comment_text"><p>Nope, didn't have any issue with this at all. I just installed Todd's code and it plain worked.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717281">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717281">5</a> by David
		posted on 7/26/2009 at 9:58 AM
		</div>
		<div class="comment_text"><p>Hi Ray, this issue has turned into a far greater one for me as i realised now no SSL via cfhttp is working, i'm just wondering if you've run OSX's java update 4 as i suspect that the lastest update has broken SSL in java for me?<br>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717276">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717276">6</a> by Raymond Camden
		posted on 7/26/2009 at 2:55 PM
		</div>
		<div class="comment_text"><p>I have CF on my Mac talking to a beta Java update. A 1.6.0 version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717284">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717284">7</a> by Scott Stroz
		posted on 8/3/2009 at 6:01 PM
		</div>
		<div class="comment_text"><p>@David - I am having similar issues with SSL - were you able to find a solution?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717280">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717280">8</a> by Marc
		posted on 11/18/2009 at 1:02 AM
		</div>
		<div class="comment_text"><p>Anyone have any luck with formating the output? I was actually hoping to get them into cfchart or cfgraph, but really have not had any luck doing anything but outputing the tables on the test page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717277">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717277">9</a> by Raymond Camden
		posted on 11/18/2009 at 1:24 AM
		</div>
		<div class="comment_text"><p>What kind of issues are you having with charts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717278">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717278">10</a> by Marc
		posted on 11/18/2009 at 2:28 AM
		</div>
		<div class="comment_text"><p>well, they are not showing up. I got the table to all worm in the <br>analyticsTestPublic.cfm that comes with the coldfusion google api, but can not figure our how to do anything other than cfdump them. I also tried to copy your code above and change out the customizations to make it work for mine and I can not get anything but the bean info to output.  Do you know of any other examples of using the google api and cutomzing output.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717283">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717283">11</a> by Raymond Camden
		posted on 11/18/2009 at 2:33 AM
		</div>
		<div class="comment_text"><p>Errr well - the result is data and you pass that data to cfchart. How you pass it depends on what you want to chart. Have you read the docs on cfchart/cfchartseries/cfchartdata? Knowing the syntax should give you a clue as to how to convert the data returned from the CFC into something the chart can use. Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717285">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717285">12</a> by Marc
		posted on 11/18/2009 at 3:20 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond, let me look at the cfchartdata tag and see if I can get a clearer view on how to get the data from the google api into the cfchart.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717287">13</a> by Marc
		posted on 11/18/2009 at 6:10 AM
		</div>
		<div class="comment_text"><p>I guess, I am getting ahead of myself.  And forgive me if this is a really basic question, but what I am having trouble with is how to access the data that comes back. I guess it comes back as a struct.  but there does not seem to be anything in the documentation that talks about how to use the return data. It is possible that I am just a bit over my head, but hat is really what I am looking for is other than cfdump var code that is used in the public test I am not sure how to access the data back.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717286">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717286">14</a> by Raymond Camden
		posted on 11/18/2009 at 9:37 AM
		</div>
		<div class="comment_text"><p>When you dump the data, what do you see in the struct? I believe you get a query and another struct. So the query object would be like any other database query. You can cfloop over it, cfoutput query it, etc. You may want to consider reading some of the CF docs, specifically on data types (like structs :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717289">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717289">15</a> by Ryan
		posted on 11/21/2009 at 1:55 AM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>Following up on your's and Marc's conversation, can you explain why the following code isn't working for me?</p><p>&lt;cfchart format="flash" show3d="true" chartwidth="680" chartheight="300" pieslicestyle="solid" title="Top 10 pages" style="#style#"&gt;<br>&lt;cfchartseries type="pie" query="getContentOverview" valueColumn="pageviews" itemColumn="pagepath" /&gt;<br>&lt;/cfchart&gt;</p><p>I've added this to the bottom of the analyticstestpublic.cfm file and keep getting an error... I've tried changing the query name to all variants of above that seemed relevant and keep getting the "Query not found: getContentOverview ".</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717288">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717288">16</a> by Raymond Camden
		posted on 11/21/2009 at 2:04 AM
		</div>
		<div class="comment_text"><p>Well the error says getCOntentOverview isn't a query. Does that variable exists? If you do:</p><p>&lt;cfdump var="#getContentOverview#"&gt;</p><p>what do you see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717290">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717290">17</a> by Ryan
		posted on 11/21/2009 at 2:16 AM
		</div>
		<div class="comment_text"><p>Actually, the cfdump part is working fine and I am getting both a struct and a query returned....</p><p>the test page I'm working on is:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.danhynes.com%2FpubtoolMySQL%2Fgoogle%2Fanalyticstestpublic.cfm%3AqiHCmOYOzbA8CETFqZ1E4zDfwZ4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.danhynes.com/pubtoolMySQL/google/analyticstestpublic.cfm">http://www.danhynes.com/pub...</a></p><p>and as you'll see both the struct and query are there and have data... I just cant figure out why I cant access the query...</p><p>thanks so much for your help and this killer component!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717291">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717291">18</a> by Raymond Camden
		posted on 11/21/2009 at 2:29 AM
		</div>
		<div class="comment_text"><p>I'm sorry - but where are you dumping getCOntentOverview? I don't see it. Please add that dump and use label="This is getContentOverview". Also, paste your code to pastebin please.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717292">19</a> by Ryan
		posted on 11/21/2009 at 2:37 AM
		</div>
		<div class="comment_text"><p>Ok, fixed a couple things:</p><p>I actually originally pasted the wrong version of the code... here it is with the query set to the "#contentOverview#" dump... I added the label you asked about and here is the pastebin link of my source:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2Fm55ca107f%3A5M1LjjNTpv3t_C_Bb2f8FLPYCwM&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/m55ca107f">http://pastebin.com/m55ca107f</a></p><p>live site file updated and link is same as above:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.danhynes.com%2FpubtoolMySQL%2Fgoogle%2Fanalyticstestpublic.cfm%3AqiHCmOYOzbA8CETFqZ1E4zDfwZ4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.danhynes.com/pubtoolMySQL/google/analyticstestpublic.cfm">http://www.danhynes.com/pub...</a></p><p>I greatly appreciate your help and patience sir!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717295">20</a> by Raymond Camden
		posted on 11/21/2009 at 3:12 AM
		</div>
		<div class="comment_text"><p>Look at the dump of contentover. It isn't a query! It is a struct. Inside the struct is a query, specifically the data key. You want to use</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcontentoverview.data%3A7Bl51ZSydX8xVhCUnlQXhVa1EDc&amp;cuid=3321886" rel="nofollow noopener" title="contentoverview.data">contentoverview.data</a></p><p>As your query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717293">21</a> by Ryan
		posted on 11/21/2009 at 3:47 AM
		</div>
		<div class="comment_text"><p>you sir, truly are a king amongst men!!</p><p>I was misunderstanding the structure of what the dump was giving me... Cannot thank you enough sir!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717294">22</a> by Raymond Camden
		posted on 11/21/2009 at 3:52 AM
		</div>
		<div class="comment_text"><p>Glad you got it. FYI, don't thank me for the code (although I'll take thanks for the help ;) Todd Sharp wrote the component.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717298">23</a> by Marc
		posted on 11/21/2009 at 6:07 AM
		</div>
		<div class="comment_text"><p>Yes, thanks for all your help over the last couple of days on this. Happy to have had been your Padawan learner this week.</p></div>
	</div>
</div>
		