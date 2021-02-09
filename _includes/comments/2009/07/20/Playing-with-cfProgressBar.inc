
<div class="comment" id="c_1713717229">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717229">1</a> by Matthew Mathers
		posted on 7/20/2009 at 5:36 PM
		</div>
		<div class="comment_text"><p>Would be nice to have an easily implemented progress bar for file uploads NOT based on Flash.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717226">2</a> by Steve Caldwell
		posted on 7/20/2009 at 5:37 PM
		</div>
		<div class="comment_text"><p>This is a cool native feature, I wonder how difficult it would be to bind to cffile upload progress?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717227">3</a> by Raymond Camden
		posted on 7/20/2009 at 5:41 PM
		</div>
		<div class="comment_text"><p>Have you seen the new cffileupload tag? It does this. Should this be my lunch time blog entry? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717228">4</a> by Matthew Mathers
		posted on 7/20/2009 at 5:43 PM
		</div>
		<div class="comment_text"><p>"Have you seen the new cffileupload tag? It does this. Should this be my lunch time blog entry? :)"</p><p>Yes please! ;]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717233">5</a> by Steve Caldwell
		posted on 7/20/2009 at 5:43 PM
		</div>
		<div class="comment_text"><p>Haven't seen that yet-- I'm going to look at the docs NOW!<br>How 'bout a demo?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717236">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717236">6</a> by Robert Gatti
		posted on 7/20/2009 at 6:06 PM
		</div>
		<div class="comment_text"><p>Cool examples! One thing I noticed, when I click on a field and use one of the saved form field values (the values FireFox remembers) it doesn't recognize the field changed or update the progress bar. Could this be something to do with how jQuery registers a change event?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717237">7</a> by Raymond Camden
		posted on 7/20/2009 at 6:07 PM
		</div>
		<div class="comment_text"><p>You mean if you pick from a drop down? If so, I haven't tested that. It should be a change event, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717231">8</a> by Daniel Sellers
		posted on 7/20/2009 at 7:20 PM
		</div>
		<div class="comment_text"><p>I ran into the same thing that Robert did. Whenever I used the autosuggest my browser provided and tabbed to the next input the progress bar did not advance.</p><p>I tested it out locally swapping the .blur event for the .change event and that corrects the issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717235">9</a> by Daniel Sellers
		posted on 7/20/2009 at 7:26 PM
		</div>
		<div class="comment_text"><p>Probably should have included the revised code: $(document).ready(function() {</p><p>   $("input").blur(function() {<br>      var complete = 0<br>      if($("#name").val() != '') complete+=0.25<br>      if($("#age").val() != '') complete+=0.25<br>      if($("#email").val() != '') complete+=0.25<br>      if($("#cheese").val() != '') complete+=0.25<br>      if(complete == 1) {<br>         msg = 'Form Complete!'<br>         $("#save").attr("disabled",false)<br>      } else{ <br>	  	msg = 'Form Status'<br>   		$("#save").attr("disabled",true)<br>	}<br>      ColdFusion.ProgressBar.updateStatus('mycfb',complete,msg)<br>   })<br>})</p><p>added a line that disables the save button if you go back and remove the value from on of the fields. Totally unnecessary for a demo...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717239">10</a> by Matt Williams
		posted on 7/20/2009 at 7:27 PM
		</div>
		<div class="comment_text"><p>@Robert - I just tried FF and clicked on one of the saved values. The status bar updated for me, but only after the field loses focus (i.e., click on the next field). Same as typing it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717230">11</a> by Raymond Camden
		posted on 7/20/2009 at 7:57 PM
		</div>
		<div class="comment_text"><p>I tried your code Daniel:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcf9.coldfusionjedi.com%2Fcfprogressbar%2Ftest5.cfm%3Atd7UYVQQfS2saW3G-EjARA1J904&amp;cuid=3321886" rel="nofollow noopener" title="http://cf9.coldfusionjedi.com/cfprogressbar/test5.cfm">http://cf9.coldfusionjedi.c...</a></p><p>It doesn't seem any better though. Not that it was bad for me before, but I don't see it updating quicker I mean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717234">12</a> by Daniel Sellers
		posted on 7/20/2009 at 8:36 PM
		</div>
		<div class="comment_text"><p>The problem I was running into had nothing to do with speed. It just wouldn't update if I used autocompletion in FF or Safari. Not sure why... I guess that will remain a mystery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717232">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717232">13</a> by Roland Collins
		posted on 7/20/2009 at 11:09 PM
		</div>
		<div class="comment_text"><p>While the AJAX features in CF have come a long way, the page sizes are still abominable.  Your first example comes accross as 849kB in FireBug - and that's just a progress bar!  I know that browser caching helps out here, but still - we have a fully loaded jQuery setup with the core library and jQuery UI, and a first-load page size for us is only around 275kB.</p><p>I don't know, maybe I'm just stingy with bandwidth.  Does anyone else avoid teh CFAjax features because of the file sizes?  Does anyone know a way to reduce the file sizes?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717242">14</a> by Kumar
		posted on 7/20/2009 at 11:54 PM
		</div>
		<div class="comment_text"><p>I think the CF Ajax features prove valuable for the new developer looking to get into Ajax. Thats where I started, and if it hadn't been for for the CF8 Ajax tags I probably would not have been exploring jQuery or Ext JS.</p><p>Yes, they are a bit bloated, but they are perfect for in house or small scale application development. I also think that with Ext JS 3.0 the CF9 stuff should speed up a bit more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717243">15</a> by Sam Farmer
		posted on 7/21/2009 at 1:11 AM
		</div>
		<div class="comment_text"><p>Another good addition.</p><p>The docs don't make this very clear but to use the style attribute just pass in all the options you want to use like this:</p><p>style="progresscolor:Blue;bgcolor:Orange;textcolor:Black;"</p><p>Though I wouldn't suggest using those colors! ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717245">16</a> by Raymond Camden
		posted on 7/21/2009 at 1:14 AM
		</div>
		<div class="comment_text"><p>I would.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcf9.coldfusionjedi.com%2Fcfprogressbar%2Ftest2a.cfm%3ATHZVEASpNSzdWAK5ra9xawlgM_k&amp;cuid=3321886" rel="nofollow noopener" title="http://cf9.coldfusionjedi.com/cfprogressbar/test2a.cfm">http://cf9.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717246">17</a> by Sam Farmer
		posted on 7/21/2009 at 1:15 AM
		</div>
		<div class="comment_text"><p>Heh</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717250">18</a> by Mehdi
		posted on 7/24/2009 at 5:45 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>Anyone here took time to see the load behind that !!</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ftools.pingdom.com%2Ffpt%2F%3Furl%3Dhttp%3A%2F%2Fcf9.coldfusionjedi.com%2Fcfprogressbar%2Ftest.cfm%26treeview%3D0%26column%3DobjectID%26order%3D1%26type%3D0%26save%3Dfalse%3A6AXk7Dd8EDsyzvLstJUSPKiN8Dg&amp;cuid=3321886" rel="nofollow noopener" title="http://tools.pingdom.com/fpt/?url=http://cf9.coldfusionjedi.com/cfprogressbar/test.cfm&amp;treeview=0&amp;column=objectID&amp;order=1&amp;type=0&amp;save=false">http://tools.pingdom.com/fp...</a></p><p>1 MB the whole think if the browser load all the stuff !!! For such cosmectifs it's a bit costly !</p><p>Regards<br>M B</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717253">19</a> by Raymond Camden
		posted on 7/24/2009 at 5:48 PM
		</div>
		<div class="comment_text"><p>Most of that load is the script base - which would be cached once you hit the site.</p><p>As I always say - it's a trade of. EXTREME ease of use over the slimmest performance. For most folks, that 1mg simply won't matter and won't even be noticed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717252">20</a> by Don Blaire
		posted on 8/13/2009 at 10:56 PM
		</div>
		<div class="comment_text"><p>How did you do the styles in your example:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcf9.coldfusionjedi.com%2Fcfprogressbar%2Ftest2a.cfm%3ATHZVEASpNSzdWAK5ra9xawlgM_k&amp;cuid=3321886" rel="nofollow noopener" title="http://cf9.coldfusionjedi.com/cfprogressbar/test2a.cfm">http://cf9.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717254">21</a> by Raymond Camden
		posted on 8/13/2009 at 11:51 PM
		</div>
		<div class="comment_text"><p>Here ya go: &lt;cfprogressbar name="mycfb" bind="cfc:process.getStatus()" interval="600" width="300" style="progresscolor:Blue;bgcolor:Orange;textcolor:Black;"/&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717255">22</a> by Hassan Ellis
		posted on 10/27/2009 at 10:32 PM
		</div>
		<div class="comment_text"><p>Hello Ray, I think the article is great.  I just have a few questions.  I'm just unclear where to bind the progressbar.</p><p>Example: I have a function in a cfc that interacts with gmail with the cfimap feature. Sometimes the retrieval can be lengthy to say the least I want to use a progressbar to give the user a some type of feedback.  Simply enough.   How would I measure the total to the total loaded to report back to the progressbar?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717251">23</a> by Raymond Camden
		posted on 10/27/2009 at 10:33 PM
		</div>
		<div class="comment_text"><p>Sorry - are you asking how to estimate the % done?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717256">24</a> by Hassan Ellis
		posted on 10/27/2009 at 10:52 PM
		</div>
		<div class="comment_text"><p>Help this padawan! :-)</p><p>Yes. All the examples I see bind to a getStatus function in a cfc.  Do I have to place the procedures that I'm trying to do inside that getStatus function?  I guess I'm confused on where the loader itself is placed and how the percentages are reported on a resizing or say In my case cfimap progress.  <br>If that makes any sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717257">25</a> by Raymond Camden
		posted on 10/27/2009 at 10:55 PM
		</div>
		<div class="comment_text"><p>Well the loader itself is on the front end - in your CFM. The CFC method, getStatus, is in the CFC. But the thing is - I can't tell you what to put there. It depends on your application logic. You mentioned using imap. Well if you are asking it to get all messages, you can't really measure that since it is an atomic operation (to CFML anyway).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717258">26</a> by Mahzan
		posted on 1/4/2010 at 7:44 PM
		</div>
		<div class="comment_text"><p>i'm getting an error on the 4th example on this page. it says "Attribute validation error for the CFPROGRESSBAR tag. Either bind or duration needs to be defined. "</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717260">27</a> by Raymond Camden
		posted on 1/4/2010 at 8:05 PM
		</div>
		<div class="comment_text"><p>Looks like this is behavior that changed in the final release.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717259">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717259">28</a> by PaperDot
		posted on 4/20/2010 at 1:00 AM
		</div>
		<div class="comment_text"><p>Anyone know if there is a special trick needed to load the ajax scripts from somewhere? I'm working in a hosted environment and since the progress won't display (even if a really simple example) I'm wondering if I need to load the .js files from somewhere special....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717262">29</a> by Raymond Camden
		posted on 4/20/2010 at 1:02 AM
		</div>
		<div class="comment_text"><p>Try cfajaximport with the scriptSrc argument. You will need to FTP up a copy of the /CFIDE/scripts folder from your local install. (I may not be right on /CFIDE/scripts, but you get the idea.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717261">30</a> by PaperDot
		posted on 4/20/2010 at 2:13 AM
		</div>
		<div class="comment_text"><p>Very cool, thanks man! I was looking at that command but figured the host already had a mapping to the CFIDE directory and was pulling my hair out to make it work.</p><p>In case someone else gets stuck on this, here's the code I used, after posting the whole CFIDE/scripts/ directory to the "scripts" directory on my site:<br>&lt;cfajaximport scriptSrc = "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.mydomainname.com%2Fscripts%2F%3Ag0mkUskJfA3QtEQfgRN7wA6MuZY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mydomainname.com/scripts/">http://www.mydomainname.com...</a>"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717265">31</a> by na,na,nah,na
		posted on 11/2/2010 at 7:48 PM
		</div>
		<div class="comment_text"><p>demos broken</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717266">32</a> by Raymond Camden
		posted on 11/2/2010 at 7:51 PM
		</div>
		<div class="comment_text"><p>Ah well, you can always download the code and run it yourself. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717263">33</a> by Andy
		posted on 3/17/2012 at 6:42 PM
		</div>
		<div class="comment_text"><p>Hi Ray.  I was interested in demo 4 because that's the same thing I'm trying to do... have the progress bar indicate how much of a form has been processed.  But when I clicked your demo link the error said: Attribute validation error for the CFPROGRESSBAR tag. Either bind or duration needs to be defined.</p><p>Do you mind fixing it so I can review your demo?  Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717267">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717267">34</a> by Raymond Camden
		posted on 3/17/2012 at 7:23 PM
		</div>
		<div class="comment_text"><p>I had to fix it by pointing it to a JS bind. You can demo it by going to test4a.cfm, and see the code of the demo here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FyPcqgJMt%3Ab_zbHoj1uA-v7OQlH0z5IV1YDFU&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/yPcqgJMt">http://pastebin.com/yPcqgJMt</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717268">35</a> by Andy
		posted on 3/17/2012 at 10:40 PM
		</div>
		<div class="comment_text"><p>I see.  Very cool.  However I was thinking you set the progress bar up so that it would show the status of the form being processed... not filled out.  Is that something you've played with?  I have yet to see an example and want to utilize cfprogressbar as opposed to jquery.  Let me know.  Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717269">36</a> by Raymond Camden
		posted on 3/18/2012 at 2:38 AM
		</div>
		<div class="comment_text"><p>Then you would need to do a few things.</p><p>a) Make the form use Ajax to post it's data.<br>b) Have the CFM update a shared variable, like a session variable, as it works through it's stuff. So like if it's doing 5 things, it would update a variable like session.status and set it to 1, 2, etc.<br>c) Use an Ajax polling process to hit a file that simply outputs the value of the session variable. Your client side code would then update the progress bar.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713717270">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713717270">37</a> by Andy
		posted on 3/19/2012 at 7:01 PM
		</div>
		<div class="comment_text"><p>Almost there.  http://199.134.225.62/NW_PORTAL/test.cfm</p><p>That is leveraging the example on cf10's help on cfprogressbar.  Now I just need to make it the actual processing time instead of a generic timed function.</p></div>
	</div>
</div>
		