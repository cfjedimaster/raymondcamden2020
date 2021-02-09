
<div class="comment" id="c_1713673402">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673402">1</a> by Brian Rinaldi
		posted on 10/19/2007 at 12:27 AM
		</div>
		<div class="comment_text"><p>I agree, that extension of the tag doesn't make sense. In my opinion you should write a remote facade to remote any methods, thereby only exposing the ones you want. I never use the same component for my app as I do for remote. This also allows me to take into account any differences that might need to be accommodated in the data for a remote version of the methods (though usually there isn't any).</p><p>I think the cfajaxproxy tag is awesome too! I have a public facing prototype of my open-source list using it (as well as a number of other CF8 Ajax tags) that is available at:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.remotesynthesis.com%2Fprojects%2Fcfopensourcelist%2F%3AdDr9B2o39zseX5RKZHwTIFCh5U8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.remotesynthesis.com/projects/cfopensourcelist/">http://www.remotesynthesis....</a></p><p>It uses cfajaxproxy to handle retrieving the record detail of the item you click. I am trying to figure out however why the initial load of the grid is sometimes *very* slow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673401">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673401">2</a> by Sam Farmer
		posted on 10/19/2007 at 12:34 AM
		</div>
		<div class="comment_text"><p>I think I would put cfdiv up there on the same coolness level as cfajaxproxy.  We're using it in production (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.interfolio.com%3A5KExEXys9ZqsCx_r6hhK-Z9jI3E&amp;cuid=3321886" rel="nofollow noopener" title="www.interfolio.com">www.interfolio.com</a>).  Since cfdump?  Hmmm, might throw cfdocument in there but then I've been doing a lot of pdf work the last couple years.  But its definitely on that level.</p><p>I agree with you on the security ramifications and there is no need for the expose and omit attributes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673404">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673404">3</a> by Brian Kotek
		posted on 10/19/2007 at 1:14 AM
		</div>
		<div class="comment_text"><p>The obligatory note that ColdSpring can automatically generate remote proxy objects that expose only the methods you specify.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673403">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673403">4</a> by Yaron
		posted on 10/19/2007 at 8:09 PM
		</div>
		<div class="comment_text"><p>I'm the type of guy that doesn't like to waste resources, and have cleanly formatted source code (even if they are client side). Using cfajaxproxy causes ColdFusion to write JavaScript that exposes all remote component functions. If you look at the source code of a “proxied” page you will find JavaScript like this:</p><p>(Widgets never get old)<br>	var _cf_Widgets =ColdFusion.AjaxProxy.init('/cfc/Widgets.cfc','Widgets');<br>	_cf_Widgets.prototype.setWidget1=function() { return ColdFusion.AjaxProxy.invoke(this, "setWidget1", {});};<br>	_cf_Widgets.prototype.setWidget2=function() { return ColdFusion.AjaxProxy.invoke(this, "setWidget2", {});};<br>	_cf_Widgets.prototype.setWidget3=function() { return ColdFusion.AjaxProxy.invoke(this, "setWidget3", {});};<br>	_cf_Widgets.prototype.setWidget4=function() { return ColdFusion.AjaxProxy.invoke(this, "setWidget4", {});};<br>...</p><p>Now, why would I want to see all my remote methods on the page if I'm only going to use one of them?</p><p>Every time a function is set it wastes Client side browser memory, I know it's very little...but I'm anal.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673405">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673405">5</a> by Andrew Scott
		posted on 10/24/2007 at 9:35 AM
		</div>
		<div class="comment_text"><p>Has anyone else had any problems using this tag under linux?</p><p>for example..</p><p>&lt;cfajaxproxy cfc="proxy" jsclassname="proxy" /&gt;</p><p>Throws an error that /proxy.cfc can't be found if the directory is something like this.</p><p>http://127.0.0.1/andrews/index.cfm</p><p>And the /andrews/ is an alias to another directory..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673410">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673410">6</a> by Raymond Camden
		posted on 10/24/2007 at 8:48 PM
		</div>
		<div class="comment_text"><p>Can you hit http://127.0.0.1/andrews/proxy.cfc in your browser?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673407">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673407">7</a> by Andrew Scott
		posted on 10/25/2007 at 3:59 AM
		</div>
		<div class="comment_text"><p>Yes I can.</p><p>In firefox, and using the index.cfm?cfdebug option I can see that it is trying to load the proxy.cfc from /proxy.cfc</p><p>So I am at a loss?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673406">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673406">8</a> by Sam Farmer
		posted on 10/25/2007 at 4:03 AM
		</div>
		<div class="comment_text"><p>I believe CF will try and find the cfc in the file system, which, in this case it won't be able to.  It does this to verify the cfc exists.  Although thats not gonna help much in your configuration...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673408">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673408">9</a> by Andrew Scott
		posted on 10/25/2007 at 4:35 AM
		</div>
		<div class="comment_text"><p>@Sam - Yes I am aware of this, and my belief like all cfc's it should be found from the current called template. So the problem I see is if I have an alias /andrews and browse http://127.0.0.1/andrews/proxy.cfc it is found.</p><p>But &lt;cfajaxproxy cfc="proxy" jsclassname="proxy" /&gt;</p><p>Tries to find the proxy.cfc at /proxy.cfc, so the problem I see is this how do you chenge this and load it from another location. Because to me this is saying that all ajaxproxies have to be in the root.</p><p>Hope that makes a bit more sense of the problem I am seeing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673409">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673409">10</a> by Yaron Kohn
		posted on 10/25/2007 at 5:28 AM
		</div>
		<div class="comment_text"><p>Andrew,<br>I had the same exact problem with IIS(6). I had IIS home page setup on a network directory and a virtual directory on another machine...I was running my app on the aliased directory. I thought the cfc mapping in the CF admin would be sufficient enough to find the CFC but ColdFusion kept trying to map to my root like yours "/componentxxx.cfc" instead of "/cfc/componentxxx.cfc". Instead of using the aliased directory I mapped IIS home to the root of my app and it was fixed. I think it's a bug in CF8.  Haven't tried this but try placing your component in another aliased directory and call it like cfc="cfcWhatever.proxy".<br>BTW did you try calling it like  cfc="andrews.proxy"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673413">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673413">11</a> by Andrew Scott
		posted on 10/25/2007 at 6:13 AM
		</div>
		<div class="comment_text"><p>Yaron,</p><p>This is an apache alias not a cf mapping, and yes I did try your suggestions to no avail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673414">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673414">12</a> by Rex
		posted on 11/9/2007 at 11:09 PM
		</div>
		<div class="comment_text"><p>I had the same problem with aliased directories in IIS7 so I moved my components to a directory off CFIDE (not an aliased directory) and it worked fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673415">13</a> by al seyoum
		posted on 9/5/2008 at 2:52 PM
		</div>
		<div class="comment_text"><p>Two notes: <br>   1) Create an empty Application.cfm or cfc with just session management in the CFC folder<br>   2) Dir structure should be "ProjectFolder where main application.cfm is / CFC containing FOlDER / then CFC file name with no extention" ex: childroot/cfcs/proxy when using CFC for url just use the absolute or relative path to the proxy.cfc</p><p>Thanks!</p></div>
	</div>
</div>
		