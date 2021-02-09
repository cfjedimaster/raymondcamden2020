
<div class="comment" id="c_1713665818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665818">1</a> by Rony Fayyad
		posted on 5/28/2007 at 4:12 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>The reason I like Application.cfc is that it clearly indicated what was happening in my application via the functions available inside this component.</p><p>Now that each controller has a unique set of functions as found in the application.cfc, I find that the centralized way of identifying what is going on in the application ( via application.cfc ) is now going to be made harder.</p><p>To answer your side question ( if it was meant for me alone) was that i would like to see a state wide application and request startup handler. It just seems to make more sense to me, then breaking it down to individual controllers.</p><p>I am going to place the onsessionstart() in the main MG controller? Is that what i am supposed to be doing? I don't see the the need to have it in each controller, as opposed to the the onrequeststart().</p><p>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665839">2</a> by Raymond Camden
		posted on 5/28/2007 at 9:28 AM
		</div>
		<div class="comment_text"><p>When it comes to sessions, I break the 'rules' and directly access the Session scope in my controller CFCs. I figure this is ok since controllers really aren't the same as the model. So if I needed to do something on session start, I'd probably use onRequestStart and check to see if a particular session var existed. Not a -great- solution mind you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665842">3</a> by Rony Fayyad
		posted on 5/29/2007 at 2:51 AM
		</div>
		<div class="comment_text"><p>The onSessionStart() was nice enough to do all this.</p><p>Now having to manually do it would be frustrating.</p><p>Also, what about on onSessionEnd() and onError()?</p><p>This is what i liked about the application.cfc, it did all this for you and all we had to do was written the code per function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665822">4</a> by Raymond Camden
		posted on 5/29/2007 at 5:01 AM
		</div>
		<div class="comment_text"><p>So session event support could be nice. onError _is_ supported. Model-Glue supports running an event on error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665820">5</a> by Jazon
		posted on 1/23/2008 at 1:01 PM
		</div>
		<div class="comment_text"><p>Great job on the whole series!<br>Is the second time I'm going through the series, first time was a great learning experience, but now I'm paying close attention to things.</p><p>on the IIS section: shouldn't that be C:\Inetpub\wwwroot? you haveit backwards C:\wwwroot\inetpub</p><p>Thanks again!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665821">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665821">6</a> by Raymond Camden
		posted on 1/23/2008 at 5:28 PM
		</div>
		<div class="comment_text"><p>Well, you would use whatever your web root is. I may have changed mine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665823">7</a> by Jazon
		posted on 1/31/2008 at 9:40 AM
		</div>
		<div class="comment_text"><p>Thanks a lot Raymond :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665824">8</a> by Troy
		posted on 1/31/2008 at 9:48 AM
		</div>
		<div class="comment_text"><p>I currently have an application.cfc in which i have code for each of the functions inside this component, onrequeststart(), on applicationstart() etc. How can I integrate this into MG?</p><p>Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665843">9</a> by Troy
		posted on 1/31/2008 at 9:51 AM
		</div>
		<div class="comment_text"><p>Nice idea. Thanks a lot Zimon and the rest of the guys.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665844">10</a> by Raymond Camden
		posted on 1/31/2008 at 5:21 PM
		</div>
		<div class="comment_text"><p>Zimon was actually a spammer. He copied text from me above. I deleted his comment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665845">11</a> by Paul Stewart
		posted on 7/4/2008 at 4:23 PM
		</div>
		<div class="comment_text"><p>Ray, does this still apply in MG 2? i cant see any 'Model-Glue application template' where i can see a controller.cfc init method. And when i try and add an init method to my controller, MG Framework fails to load with this message:</p><p> Element MODELGLUE.FRAMEWORK is undefined in VARIABLES.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665848">12</a> by Raymond Camden
		posted on 7/4/2008 at 6:02 PM
		</div>
		<div class="comment_text"><p>Well the MG app template is just the skeleton application code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665847">13</a> by Paul Stewart
		posted on 7/7/2008 at 2:33 PM
		</div>
		<div class="comment_text"><p>Below is what i have in \modelglue_2.0.304\modelglueapplicationtemplate\controller</p><p>only 3 methods and no sign of init() method<br>--<br>LICENSE INFORMATION:</p><p>Copyright 2007, Joe Rinehart</p><p>Licensed under the Apache License, Version 2.0 (the "License"); you may not <br>use this file except in compliance with the License.</p><p>You may obtain a copy of the License at</p><p>	<a href="http://disq.us/url?url=http%3A%2F%2Fwww.apache.org%2Flicenses%2FLICENSE-2.0%3Af9IdbVmxCCdAOkmzDBzN8YJfLlo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.apache.org/licenses/LICENSE-2.0">http://www.apache.org/licen...</a></p><p>Unless required by applicable law or agreed to in writing, software distributed<br>under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR <br>CONDITIONS OF ANY KIND, either express or implied. See the License for the <br>specific language governing permissions and limitations under the License.</p><p>VERSION INFORMATION:</p><p>This file is part of Model-Glue Model-Glue: ColdFusion (2.0.304).</p><p>The version number in parenthesis is in the format versionNumber.subversion.revisionNumber.<br>---&gt;</p><p>&lt;cfcomponent displayname="Controller" extends="ModelGlue.unity.controller.Controller" output="false"&gt;<br>	&lt;!--- <br>		Any function set up to listen for the onRequestStart message happens before any of the &lt;event-handlers&gt;.<br>		This is a good place to put things like session defaults.<br>	---&gt;<br>	&lt;cffunction name="onRequestStart" access="public" returnType="void" output="false"&gt;<br>	  &lt;cfargument name="event" type="any"&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;!--- <br>		Any function set up to listen for the onQueueComplete message happens after all event-handlers are<br>		finished running and before any views are rendered.  This is a good place to load constants (like UDF<br>		libraries) that the views may need.<br>	---&gt;<br>	&lt;cffunction name="onQueueComplete" access="public" returnType="void" output="false"&gt;<br>	  &lt;cfargument name="event" type="any"&gt;<br>	&lt;/cffunction&gt;</p><p>	&lt;!--- <br>		Any function set up to listen for the onRequestEnd message happens after views are rendered.<br>	---&gt;<br>	&lt;cffunction name="onRequestEnd" access="public" returnType="void" output="false"&gt;<br>	  &lt;cfargument name="event" type="any"&gt;<br>	&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665849">14</a> by Raymond Camden
		posted on 7/7/2008 at 3:19 PM
		</div>
		<div class="comment_text"><p>Oh. I misread you. You can just add the init method. MG will run it automatically on startup.</p></div>
	</div>
</div>
		