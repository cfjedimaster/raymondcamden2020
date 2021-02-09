
<div class="comment" id="c_1713726833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726833">1</a> by Ed
		posted on 10/8/2010 at 10:07 PM
		</div>
		<div class="comment_text"><p>Is there anything wrong in restarting CF from itself? i used this approach many times and it worked fine. Did it both doing a call to jrunx.kernel.JRun and also as CFEXECUTE to a BAT file that do NET STOP/START.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726835">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726835">2</a> by Raymond Camden
		posted on 10/8/2010 at 10:13 PM
		</div>
		<div class="comment_text"><p>If it works - sure. I'd just get the willies.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726834">3</a> by Bruno Soares
		posted on 10/8/2010 at 11:07 PM
		</div>
		<div class="comment_text"><p>The question is why keep restarting the server? solve the problem itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726837">4</a> by Tyler Clendenin
		posted on 10/8/2010 at 11:43 PM
		</div>
		<div class="comment_text"><p>I recommend not relying on restarting cf from itself, because if you need a restart, it is unlikely that the page you are running your restart from will respond anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726838">5</a> by Raymond Camden
		posted on 10/9/2010 at 12:34 AM
		</div>
		<div class="comment_text"><p>I don't think that is a question Bruno - the reader knows he needs to solve the problem. This was just a temporary solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726836">6</a> by Jim Priest
		posted on 10/9/2010 at 12:47 AM
		</div>
		<div class="comment_text"><p>I've blogged about cron a bit and just recently on automating startup/shutdown of services - <a href="http://disq.us/url?url=http%3A%2F%2Fthecrumb.com%2F2010%2F09%2F01%2Fautomate-this-managing-services%2F%3ACvmWj7L-MfreGfqVB4-t97khFqk&amp;cuid=3321886" rel="nofollow noopener" title="http://thecrumb.com/2010/09/01/automate-this-managing-services/">http://thecrumb.com/2010/09...</a></p><p>Need to finish that series of posts :)</p><p>I agree with the others - I'd figure out why it needs restarting first. Also remember if you are using any kind of framework, caching etc there will be  a penalty on the first hit to your application(s) - so you may want to automate a web request with wget or something similar to get all your apps up and running after you have restarted things.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726839">7</a> by JC
		posted on 10/9/2010 at 6:47 AM
		</div>
		<div class="comment_text"><p>I know exactly how this reader feels.  I have an Intranet that worked fine with CF8.  Once I upgraded, I've discovered that memory leaks are occurring and I have to restart the services every few days.  I need to learn how to monitor pages in order to discover which code is causing the server to leak now.  I would love to hear if anyone else is experiencing this and the methods they use to find the "bad" code.  Definitely a CF9 thing for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726841">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726841">8</a> by Raymond Camden
		posted on 10/9/2010 at 6:51 AM
		</div>
		<div class="comment_text"><p>Have you tried running varScoper?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726844">9</a> by JC
		posted on 10/9/2010 at 6:23 PM
		</div>
		<div class="comment_text"><p>@Ray - I just downloaded varScoper this morning.  It's finding lot of unscoped variables in my components.  Do unscoped variables really cause all these memory leaks?  I'm green when it comes to setting local variables as opposed to global.  Have you discussed how to use local variables to help with memory leaks?  Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726842">10</a> by Raymond Camden
		posted on 10/9/2010 at 7:02 PM
		</div>
		<div class="comment_text"><p>Under load it can cause all kinds of problems. I'd recommend fixing them asap. Shouldn't take long.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726843">11</a> by JC
		posted on 10/10/2010 at 7:08 PM
		</div>
		<div class="comment_text"><p>So far, so good.  However, I have a dynamic variable that's getting set inside a loop.  So I expected the following code to work, but it throws an error.</p><p>&lt;cfloop index="FLOOP" list="#VALUELIST(QYEARDATA.FACILITYID)#"&gt;<br>&lt;cfset var "TEMP_FIDCOUNT_#FLOOP#" = '' /&gt;<br>&lt;/cfloop&gt;</p><p>Is there a correct syntax for the cfset statement above or am I trying to do something that's not possible?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726845">12</a> by Raymond Camden
		posted on 10/10/2010 at 7:12 PM
		</div>
		<div class="comment_text"><p>In CF8, var statements must come first. In CF9, they can be anywhere in the method. However, you want to change your syntax to make use of the local scope. The local scope is the same as the var scope.</p><p>&lt;cfset local["TEMP_FIDCOUNT_#FLOOP#"] = ""&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726846">13</a> by JC
		posted on 10/10/2010 at 7:56 PM
		</div>
		<div class="comment_text"><p>As always, you rock.  ;-)  Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726847">14</a> by Josh
		posted on 10/24/2010 at 8:37 PM
		</div>
		<div class="comment_text"><p>Was reading through the comments, and a question came to mind.  I have an app that used to run on CF8 and now lives on a CF9 box.  When it was on CF8, I made use of the &lt;cfset var local = StructNew()&gt; trick in most of my components.  Now that it's running on CF9, am I screwing myself by creating that faux-local struct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726848">15</a> by Raymond Camden
		posted on 10/24/2010 at 8:39 PM
		</div>
		<div class="comment_text"><p>Because so many people made use of var local, Adobe tried to make it work anyway. That's what I've heard. So if you are having an issue, it may not be that.</p></div>
	</div>
</div>
		