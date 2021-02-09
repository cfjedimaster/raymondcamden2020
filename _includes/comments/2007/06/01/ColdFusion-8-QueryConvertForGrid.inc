
<div class="comment" id="c_1713666185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666185">1</a> by Steve Bryant
		posted on 6/2/2007 at 2:22 AM
		</div>
		<div class="comment_text"><p>I haven't played with this yet, so I am probably missing something obvious.</p><p>Why can't you just pass in a query to cfgrid (seems like that would be easier and more consistent with the rest of the language)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666190">2</a> by todd sharp
		posted on 6/2/2007 at 3:12 AM
		</div>
		<div class="comment_text"><p>Steve:  You can.  This is just an alternative for built in paging.  When you use the Ajax grid with a bind statement and return paged results from a CFC the grid will automatically build in controls for next/previous, etc for you - taking some of the grunt work out of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666187">3</a> by todd sharp
		posted on 6/2/2007 at 3:16 AM
		</div>
		<div class="comment_text"><p>And Ray - I'm sure you'll touch on this in your next entry on the topic - but those of us who don't have the luxury of easy DB paging could also use a cached query to speed things up a bit.  And since cfquery now supports caching with cfqueryparam we now have no excuse not to cache the heck out of queries wherever possible.  Hey that sounds like another blog post (or has that been done already)...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666184">4</a> by Steve Bryant
		posted on 6/2/2007 at 3:30 AM
		</div>
		<div class="comment_text"><p>Todd,</p><p>Glad to hear it! So why does paging require the extra structure?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666188">5</a> by Holly Jones
		posted on 11/30/2007 at 2:01 AM
		</div>
		<div class="comment_text"><p>Is it possible to use a variable for the bind cfc?  I'm trying to do something like this in a Model-Glue app.  I can access the cfc thru ColdSpring via the application scope, but if I try something like this:</p><p>&lt;cfset myCFC = application.serviceFactory.getBean("ArticleGateway")&gt;</p><p>I can do this: &lt;cfset newsList = myCFC.getNewsForGrid(1,20)&gt;</p><p>But I can't do this:</p><p>&lt;cfgrid name="news"<br>        format="html"<br>        pagesize="10"<br>        striperows="yes"		       bind="cfc:myCFC.getNewsForGrid({cfgridpage},<br>		                              {cfgridpagesize},<br>		                              {cfgridsortcolumn},<br>		                              {cfgridsortdirection})" <br>		        selectmode="column" <br>		        appendKey="true"&gt;</p><p>Is it just not possible to get the CFC thru ColdSpring/Model-Glue and use the grid in this way?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666186">6</a> by Raymond Camden
		posted on 11/30/2007 at 2:07 AM
		</div>
		<div class="comment_text"><p>No, you can't use a CF variable like that - remember - this all ends up as client side code. Just point to a CFM:</p><p>index.cfm?event=getcrapforgrid&amp;etcetc</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666191">7</a> by xavier
		posted on 3/22/2008 at 10:51 PM
		</div>
		<div class="comment_text"><p>I have a weird problem in using QueryConvertForGrid in a new CF 8 server (the same code works in a different CF 8 server). The Problem is that the JSON returned by this function comes back with some leading white space and the following lines before the JSON: <br>&lt;!-- <br>1: HIDE ERROR CODE FROM USER<br>0: SHOW ERROR CODE FROM USER<br>1 = ON ;  0=OFF <br>--&gt;<br>I have used &lt;cfsetting showdebugoutput="no"&gt; also. In comparing the response of both the servers (using Firebug), I suspect the problem lies with the _cf_rc value which is 0, while in the working version the value is 1. Is this the problem, If so, what is this variable and how do I control it? Any help will be greatly appreaciated.<br>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666194">8</a> by Raymond Camden
		posted on 3/23/2008 at 3:25 AM
		</div>
		<div class="comment_text"><p>It could be a few things. First off, the white space can come from a number of places, but if you add a &lt;cfcontent reset="true"&gt; before you output the json, the whitespace will be removed, just be sure output the json right after the cfcontent.</p><p>As for the text you shared, that is not from CF, it is from something else in your code. I'd do a multi-file search for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666192">9</a> by xavier
		posted on 3/23/2008 at 7:56 AM
		</div>
		<div class="comment_text"><p>You are right. I did a global search and found the comments in the application.cfm! Changing the comments to CF comments fixed the issue - the white space was part of the comments, so it fixed itself.</p><p>I tested by inserting some HTML comments in the CFC just before the json output and the comments did not cause a problem. It is a problem only if it is in the appplication.cfm. I wonder why.<br>Thanks,<br>-Xavier</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666189">10</a> by John Fournier
		posted on 8/18/2008 at 7:59 PM
		</div>
		<div class="comment_text"><p>Big puzzler for me... How can I use this in Model Glue? I haven't had any success finding examples of data binding within Model Glue (Unity, v2), and the event handlers circumvent direct references to CFCs. If anyone knows how, it would have to be you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666193">11</a> by Raymond Camden
		posted on 8/18/2008 at 8:28 PM
		</div>
		<div class="comment_text"><p>@JF: Well, this is kind of a big subject and a bit hard to 'fit' into a comment here, but this is one way I've done in the past.</p><p>I simply point my Ajax to an event, like json.getFoo. The event does what it needs to do to get data, and then the view outputs the JSON.</p><p>I've even taken this a step further where I can broadcast "toJSON" in an event. I pass the name of the view State key to use, and then the generic toJSON event will get the value, convert to JSON, and use one generic view to output it.</p></div>
	</div>
</div>
		