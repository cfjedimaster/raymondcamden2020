
<div class="comment" id="c_1713719295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719295">1</a> by CF Mitrah
		posted on 10/29/2009 at 11:00 PM
		</div>
		<div class="comment_text"><p>Hi Jedi,<br>Do we have any chance to add search functionality in CF Grid.<br>-Muthu</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719312">2</a> by Raymond Camden
		posted on 10/29/2009 at 11:04 PM
		</div>
		<div class="comment_text"><p>I've shown examples of that before. Basically, you first add a new form field, for your search, then your grid bind just adds it:</p><p>&lt;cfgrid autowidth="true" name="entries" format="html" bind="url:getentries.cfm?page={cfgridpage}&amp;pagesize={cfgridpagesize}&amp;sort={cfgridsortcolumn}&amp;dir={cfgridsortdirection}&amp;search={search}"&gt;</p><p>Your CFC has to handle the new argument.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719308">3</a> by Brett
		posted on 10/30/2009 at 12:41 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>This worked perfectly. I appreciate the help and the quick response. As always my customer chnaged their mind AGAIN. Any idea of how this could be done with out a button. When the grid loads the page sixe meets the recordcount. I have been playing with this code and it seems to fail since the grid loads after the page and the grid has not be initialize as yet, so any onload events are failing. Any ideas.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719314">4</a> by Raymond Camden
		posted on 10/30/2009 at 12:42 AM
		</div>
		<div class="comment_text"><p>Use the ajaxOnLoad CF function to run showall.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719315">5</a> by Brett
		posted on 10/30/2009 at 12:57 AM
		</div>
		<div class="comment_text"><p>Sorry for the spelling errors in the previous post. I had tried the ajaxonload, but it still appears that it is occuring before the bind takes place to grab the data. It still keeps kicking back an error that null can not be converted to a number, so I would assume that the datasource had not been estabilshed when it was run.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719316">6</a> by Raymond Camden
		posted on 10/30/2009 at 1:04 AM
		</div>
		<div class="comment_text"><p>Use this entry: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2009%2F4%2F9%2FAsk-a-Jedi-Noticing-an-empty-CFGRID%3AAxta5Gah-ddrXb2JJKoGq0YnMko&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2009/4/9/Ask-a-Jedi-Noticing-an-empty-CFGRID">http://www.coldfusionjedi.c...</a></p><p>It shows how to add an event listener for when the data is done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719311">7</a> by Brett
		posted on 10/30/2009 at 5:40 AM
		</div>
		<div class="comment_text"><p>Thanks Ray,</p><p>You would have to refence the last question I asked you... I was able to get it to work, however it locks up the browser as it seems to be reloading the data over and over. This is not the case with the show all button you created in this example. Any ideas why calling the function via a listener would cause the browser to lock up? Thanks again for the info, it is really appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719305">8</a> by Raymond Camden
		posted on 10/30/2009 at 5:45 AM
		</div>
		<div class="comment_text"><p>No idea - if this is online where I can see it, I'll give it a shot.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719309">9</a> by Ron Charles
		posted on 11/1/2009 at 6:17 PM
		</div>
		<div class="comment_text"><p>Hey Ray. Thanks so much for doing all of this! You sure are a great help! Just one thing though...Do you think you could do some blog post on coldfusion and the facebook api? Gavin Vincent has done a lot but i think you can do way more! Things like using the new newsfeed and there seems to be a few bugs in the cfcs.. I wish it was as stable at blogcfc or Galeon.Thanks a bunch and happy Halloween too</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719317">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719317">10</a> by Raymond Camden
		posted on 11/1/2009 at 7:02 PM
		</div>
		<div class="comment_text"><p>I actually do have an article on Facebook (posted both here and the Adobe Developer Center), but it's a bit old. No real plans yet to add a Facebook project to my list of stuff on my plate. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719318">11</a> by Tim
		posted on 11/4/2009 at 8:16 PM
		</div>
		<div class="comment_text"><p>Ray - will you post your getentries.cfm from the example?</p><p>Also, I'm having a lot of trouble formating an html CF9 cfgrid... IE 6, 7, 8, Safari, FF all render differently... and cannot get the sort to turn off. Seems like I spend more time fixing display issues than developing functionality.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713719320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713719320">12</a> by Raymond Camden
		posted on 11/5/2009 at 1:12 AM
		</div>
		<div class="comment_text"><p>getentries returns a query passed through queryConvertForGrid. So it's nothing much there. If you want the code, email me off blog and I'll send you a copy.</p><p>UI: Heh, well, that's always tricky, isn't it? Remember that if you can't get the grid perfect, you don't _have_ to use it. I recommend the jqGrid plugin for jQuery.</p></div>
	</div>
</div>
		