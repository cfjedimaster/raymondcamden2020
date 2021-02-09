
<div class="comment" id="c_1713715032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715032">1</a> by Willis Frye
		posted on 4/29/2009 at 9:59 PM
		</div>
		<div class="comment_text"><p>Thank you very much Ray...this is exactly what I needed.  I really like the jQuery example.  I think I will use that one to solve my issue.</p><p>Again...thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715030">2</a> by Gary Fenton
		posted on 4/29/2009 at 10:07 PM
		</div>
		<div class="comment_text"><p>Ha-ha, I just implimented the jQuery solution a couple of days ago. A query was taking 3 secs to return from the db so now the user experience is significantly better. 3 secs felt like an enternitity!</p><p>The only minor downside doing this to every slow page is it takes 2 server requests instead of 1, but it's a price well worth paying for.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715028">3</a> by Raymond Camden
		posted on 4/29/2009 at 10:10 PM
		</div>
		<div class="comment_text"><p>Of course - and "Bad Ray" for not making this clear, stuff like this should ONLY be done after you are SURE there is nothing that can be done server-side.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715033">4</a> by Andy Sandefer
		posted on 4/30/2009 at 7:46 AM
		</div>
		<div class="comment_text"><p>@Ray,<br>You probably already know this but I'll say it anyway because you mentioned it in this post.  I'm not a jQuery-er so for those of you who use the CFAjax stuff you too can control your loading message like so...</p><p>&lt;script type="text/javascript"&gt;<br>	_cf_loadingtexthtml="Loading...jQuery is NOT the only AJAX platform around - it just seems to be very popular - but I am not sold because dollar signs in code just remind me too much of qBasic";</p><p>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715027">5</a> by Gary Fenton
		posted on 4/30/2009 at 1:30 PM
		</div>
		<div class="comment_text"><p>@Andy. Most people love dollar signs, particularly followed by several digits. ;-) You don't have to use $ to use a jQuery function, you can change it to anything you like. Or simply replace it with the full object name "jquery".</p><p>If jQuery becomes too popular I'm just gonna have to find some other little known js framework to become a fan of. ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715031">6</a> by Rob
		posted on 4/30/2009 at 4:35 PM
		</div>
		<div class="comment_text"><p>"As I'm an expert at writing slow code"...</p><p>In addition to the knowledge, thanks for the morning chuckle.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715019">7</a> by Willis Frye
		posted on 4/30/2009 at 7:13 PM
		</div>
		<div class="comment_text"><p>We are still using CF7 so I have to go with the jQuery example (unless there is an easy way to do the Ajax sample in CF7).</p><p>Using the jQuery method, how would I pass a url variable to slow.cfm?  Is it as simple as saying:</p><p> $('#slowdiv').load('slow.cfm?&lt;cfoutput&gt;#somevariable#&lt;/cfoutput&gt;')</p><p>I have tried this but can't seem to get it to work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715029">8</a> by Raymond Camden
		posted on 4/30/2009 at 7:16 PM
		</div>
		<div class="comment_text"><p>@WF: Your URL isn't valid. If somevariable is 4, your URL is</p><p>slow.cfcm?4</p><p>Get it? You need to do</p><p>'slow.cfm?&lt;cfoutput&gt;x=#somevariable#&lt;/cfoutput&gt;'</p><p>Of course, to be safe, you need to wrap somevariable in a urlEncodedFormat call.</p><p>What's nice is jQuery also lets you pass parameters in an object as the second argument to load:</p><p>.load('slow.cfm',{x:#somevariable#})</p><p>This will pass X as a form variable. You'd want to wrap that in jsStringFormat though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715035">9</a> by Willis Frye
		posted on 4/30/2009 at 7:46 PM
		</div>
		<div class="comment_text"><p>sorry Ray, I left off the 'x=' when I did the post.  My code actually does have the x=.  Here is the exact jQuery header from my page called requestdetails.cfm:</p><p>&lt;script&gt;<br>		$(document).ready(function() {</p><p>		   $('#moratdiv').html('Loading...')<br>		   $('#moratdiv').load('moratorium_check.cfm?&lt;cfoutput&gt;request_id=#url.request_id#&lt;/cfoutput&gt;')   <br>		})<br>	&lt;/script&gt;</p><p>Here is the div code line:</p><p>&lt;div id="moratdiv"&gt;&lt;/div&gt;</p><p>In the moratorium_check.cfm page I have this (I actually have a cfc on this page but I just want to test if the url is being passed so I have this one line so I can see the output):</p><p>&lt;cfoutput&gt;#url.request_id#&lt;/cfoutput&gt;</p><p>but on requestdetails.cfm the url.request_id value is not being displayed in the div.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715036">10</a> by Raymond Camden
		posted on 4/30/2009 at 7:48 PM
		</div>
		<div class="comment_text"><p>jQUery may be switching to POST. Check the form scope. Firebug would tell you too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715045">11</a> by Willis Frye
		posted on 4/30/2009 at 8:33 PM
		</div>
		<div class="comment_text"><p>Not sure what is wrong...but when I run your jQuery example on my local machine it works.  However, when I run it in our prod environment it does not.  It just displays the Loading... text and it never goes away.</p><p>My local machine is running CF8 but the prod machine is running CF7.</p><p>Are there any settings that I should check in our prod environment?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715041">12</a> by Raymond Camden
		posted on 4/30/2009 at 8:37 PM
		</div>
		<div class="comment_text"><p>What does Firebug tell you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715042">13</a> by Willis Frye
		posted on 4/30/2009 at 8:51 PM
		</div>
		<div class="comment_text"><p>I have never used Firebug...I just installed it for firefox but I am not sure what I am looking for.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715044">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715044">14</a> by Andy Sandefer
		posted on 4/30/2009 at 8:53 PM
		</div>
		<div class="comment_text"><p>You caaaaan do it @Ray - you must resist the urge to strike him down and instead you must convert him to the light side of the force!!!</p><p>The firebug is strong with this one!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715039">15</a> by Raymond Camden
		posted on 4/30/2009 at 9:09 PM
		</div>
		<div class="comment_text"><p>@Willis: Firebug can be a bit overwhelming at first. I'm planning a video (have been for about 2 months, need ot find time) that focuses on just this issue.</p><p>Ok, so you should have a Firebug icon in the bottom right corner of your browser. Click on it, and the FB panel loads in the bottom. You may be asked to enable 3 things, net, console, and debugger I think. Just enable them all and the page reloads.</p><p>Click on the Net tab. Then click XHR. This will now show all your ajax requests. When you run the test, you should see the HTTP call, and probably, an error. You can then click on the event to see the response and the error.</p><p>Hope this helps</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715022">16</a> by Willis Frye
		posted on 4/30/2009 at 10:29 PM
		</div>
		<div class="comment_text"><p>Got it.  Interestingly Firebug says there is a 500 Internal Server Error when trying to GET slow.cfm.  The file is there in the same folder, however it can't call it...hmmmm</p><p>This is only happening on our prod server (CF7) and not my local machine (CF8).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715026">17</a> by Willis Frye
		posted on 4/30/2009 at 10:31 PM
		</div>
		<div class="comment_text"><p>GOT IT.  I dug a little deeper in firebug and its throwing an error in your cfc...apparently you are using the sleep function which is only available in CF8 and not CF7.</p><p>That's why it would not work in our prod environment but worked on my local machine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715025">18</a> by Raymond Camden
		posted on 4/30/2009 at 10:48 PM
		</div>
		<div class="comment_text"><p>And now you know why Firebug is the bee's knees. :)</p><p>If you really care, there is a Sleep UDF at CFLib I believe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715037">19</a> by Michael Kassing
		posted on 5/1/2009 at 4:33 AM
		</div>
		<div class="comment_text"><p>Just to set the record straight; it is official, I love you Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715038">20</a> by Raymond Camden
		posted on 5/1/2009 at 5:26 AM
		</div>
		<div class="comment_text"><p>I'm a little bit scared now, but thanks. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715043">21</a> by Chris
		posted on 5/1/2009 at 5:47 AM
		</div>
		<div class="comment_text"><p>@WF:  Might want to take a look at this "Intro to Firebug" video:  <a href="http://disq.us/url?url=http%3A%2F%2Fcss-tricks.com%2Fvideo-screencasts%2F15-introduction-to-firebug%2F%3Af7EjKFRkTtV4GmuubVcnjrDUCnc&amp;cuid=3321886" rel="nofollow noopener" title="http://css-tricks.com/video-screencasts/15-introduction-to-firebug/">http://css-tricks.com/video...</a></p><p>Any web developer worth his salt will have this in his tool belt along with the Web Developer Firefox plugin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715040">22</a> by Christophe
		posted on 12/8/2012 at 4:38 AM
		</div>
		<div class="comment_text"><p>Hi Ray, I must be doing something wrong. Copying your simple cfdiv example, I have:</p><p>(some text)<br>&lt;cfdiv bind="url:slow.cfm" /&gt;<br>(some text)</p><p>and my slow.cfm looks like this:</p><p>&lt;cfscript&gt;<br>     objWP = createObject("component", "<a href="http://disq.us/url?url=http%3A%2F%2Fcom.mpi.mps.foo%3A1LGX0FbIeRIKiYWYP2lbflQx57U&amp;cuid=3321886" rel="nofollow noopener" title="com.mpi.mps.foo">com.mpi.mps.foo</a>");<br>&lt;/cfscript&gt;</p><p>&lt;cfoutput&gt;#objWP.doSomethingSlow()#&lt;/cfoutput&gt;</p><p>My doSomethingSlow() is written the same as yours, but nothing is displaying in that cfdiv. Am I missing something in slow.cfm?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715046">23</a> by Raymond Camden
		posted on 12/8/2012 at 7:56 PM
		</div>
		<div class="comment_text"><p>Not sure. Is this online where I can see? Your best bet is to look in the CHrome Dev Tools?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715048">24</a> by Christophe
		posted on 12/8/2012 at 9:23 PM
		</div>
		<div class="comment_text"><p>No, unfortunately - it's for an in-house app. Definitely nothing wrong with slow.cfm; I reduced it to nothing but a line of text and still got nothing in the cfdiv. Thanks, I'll check it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715049">25</a> by Christophe
		posted on 12/8/2012 at 10:09 PM
		</div>
		<div class="comment_text"><p>Figured it out - based on the js error I just noticed ('ColdFusion' is not defined), looks like there's no mapping to the CFIDE directory. Ref - <a href="http://disq.us/url?url=http%3A%2F%2Fforums.adobe.com%2Fthread%2F86187%3AOy5svzhyAFrfArE1lXFAmlDSCPo&amp;cuid=3321886" rel="nofollow noopener" title="http://forums.adobe.com/thread/86187">http://forums.adobe.com/thr...</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715051">26</a> by Raymond Camden
		posted on 12/8/2012 at 10:19 PM
		</div>
		<div class="comment_text"><p>Cool, glad you got it.</p></div>
	</div>
</div>
		