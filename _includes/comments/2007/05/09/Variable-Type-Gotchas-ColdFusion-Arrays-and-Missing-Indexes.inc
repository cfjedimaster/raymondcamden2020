
<div class="comment" id="c_1713664910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664910">1</a> by pete
		posted on 5/10/2007 at 6:25 AM
		</div>
		<div class="comment_text"><p>Why on earth would you want to do this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664925">2</a> by Raymond Camden
		posted on 5/10/2007 at 7:07 AM
		</div>
		<div class="comment_text"><p>Have an array with missing indexes? I don't know. But it happens. Not saying it is a GOOD thing. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664919">3</a> by Andrew Clark
		posted on 5/10/2007 at 4:37 PM
		</div>
		<div class="comment_text"><p>Is there a way for loop over the array with an iterator-type syntax?</p><p>Something along the lines of...</p><p>&lt;cfloop index="x" from="data.first()" to="#data.end()#" step="#<a href="http://disq.us/url?url=http%3A%2F%2Fdata.next%3ARQTtfgjsLshz7lHJdh9D5rS-GjU&amp;cuid=3321886" rel="nofollow noopener" title="data.next">data.next</a>()#"&gt;<br>...<br>&lt;/cfloop&gt;</p><p>OR</p><p>&lt;cfloop index="x" array="#data#"&gt;<br>...<br>&lt;/cfloop&gt;</p><p>Am I just thinking wishfully here?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664923">4</a> by Jeremy French
		posted on 5/10/2007 at 4:40 PM
		</div>
		<div class="comment_text"><p>&gt;Why on earth would you want to do this?</p><p>Here's an example I've run into: An array of error codes and their text equivalents:</p><p>arrErrors[10] = "Unexpected Result from the database";<br>arrErrors[13] = "Improperly formed parameter";<br>arrErrors[14] = "Action not allowed";</p><p>Say you wanted error #10 to be "Unexpected Result from the database" across your entire app, but errors 1-9 aren't applicable to the object you're coding.  So you call an error handler with setError(10), which looks up the right error in the arrErrors array.</p><p>You could code it as a struct, but an array is a faster lookup.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664918">5</a> by Jeremy French
		posted on 5/10/2007 at 4:42 PM
		</div>
		<div class="comment_text"><p>Sorry, that should be an error thrower, not an error handler.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664915">6</a> by dc
		posted on 5/10/2007 at 5:39 PM
		</div>
		<div class="comment_text"><p>Cheers Andrew, funny how this prob came up for me just after I read this post.</p><p>The iterator works a treat, cheers for the pointers.</p><p>&lt;cfset test = arrayNew(1)/&gt;<br>&lt;cfset test[1] = "one"/&gt;<br>&lt;cfset test[3] = "three"/&gt;<br>&lt;cfset test[5] = "five"/&gt;</p><p>&lt;cfset testIterator = test.iterator()/&gt;</p><p>&lt;cfloop condition="testIterator.hasNext() eq true"&gt;<br>	&lt;cfoutput&gt;#<a href="http://disq.us/url?url=http%3A%2F%2FtestIterator.next%3AWXaFwPMmh2LefRxfBsjshzPAuVc&amp;cuid=3321886" rel="nofollow noopener" title="testIterator.next">testIterator.next</a>()#&lt;/cfoutput&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664931">7</a> by Cozmo
		posted on 5/10/2007 at 6:08 PM
		</div>
		<div class="comment_text"><p>I ran into this before and what I did was use variable variables to create a pseudo-Array and then checked for their existence. There could be anywhere between 1 and 5 results. Probably not the most elegant solution but it was how I got around the isDefined() problem at the time.</p><p>&lt;cfquery name="Get_RFP" datasource="#application.DSN#"  &gt;<br>		SELECT  tblRPEmp.RespID, tblRP.ID,  tblRP.CtrlNum<br>			FROM tblRP   Etc Etc <br>	 &lt;/cfquery&gt;</p><p>	&lt;!--- See if there are more than one  RespID / CtrlNum---&gt; <br>&lt;cfset tblRP_CtrlNum_Valuelist =  ValueList(Get_RFP.CtrlNum) &gt;</p><p>&lt;!--- Find out who is the Responsible partner ---&gt;<br> &lt;cfoutput query="Get_RFP"&gt;<br> &lt;cfset  "RspNames_#CtrlNum#_#RespID#" = #LName#&gt; <br> &lt;/cfoutput&gt;</p><p>   &lt;!--- 	See how many CtrlNum's there are ---&gt;<br>    &lt;cfset TMPListValueCount = ListValueCount(tblRP_CtrlNum_Valuelist, CtrlNum)&gt;<br>    &lt;!--- if more than one ---&gt;		<br>   &lt;cfif TMPListValueCount NEQ 1&gt;  <br>   		&lt;!--- See if they exist and then Spit out who the Responsible partners ---&gt;  <br>	   &lt;cfLoop Index="L" FRom="2" To="5"&gt; <br>			&lt;cfif IsDefined("RspNames_#CtrlNum#_#L#")&gt;  #Evaluate("RspNames_#CtrlNum#_#L#")# - #L# &lt;br /&gt; &lt;/CFIF&gt; <br>	   &lt;/CFLOOP&gt;<br>	&lt;/CFIF&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664921">8</a> by Andrew Clark
		posted on 5/10/2007 at 6:57 PM
		</div>
		<div class="comment_text"><p>You're welcome dc :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664916">9</a> by Tom Mollerus
		posted on 5/10/2007 at 7:53 PM
		</div>
		<div class="comment_text"><p>@dc- Is the iterator method part of Java?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664922">10</a> by Tero Pikala
		posted on 5/10/2007 at 10:35 PM
		</div>
		<div class="comment_text"><p>Array with missing index isn't that special. It's quite often nice to load data from some related tables to memory indexed by primary keys.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664930">11</a> by Rick Osborne
		posted on 5/11/2007 at 5:03 AM
		</div>
		<div class="comment_text"><p>I did some metrics testing on access times for arrays and structures and sparse arrays and sparse structures.  Anyone using sparse arrays might want to reconsider:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Frickosborne.org%2Fblog%2Findex.php%2F2007%2F05%2F10%2Fstruct-vs-array-read-times-sparse-arrays-considered-harmful%2F%3AS1GhwxSumjXNs_Syk1rAMrreg-c&amp;cuid=3321886" rel="nofollow noopener" title="http://rickosborne.org/blog/index.php/2007/05/10/struct-vs-array-read-times-sparse-arrays-considered-harmful/">http://rickosborne.org/blog...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664929">12</a> by Jason Morgan
		posted on 5/11/2007 at 5:09 AM
		</div>
		<div class="comment_text"><p>@dc</p><p>This syntax works as well.</p><p>&lt;cfset elements = arr.elements() /&gt;<br>&lt;cfloop condition="#elements.hasMoreElements()#"&gt;<br>	#elements.nextElement()#&lt;br /&gt;<br>&lt;/cfloop&gt;</p><p>Keep in mind that both of these return empty strings for undefined array elements.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664924">13</a> by dc
		posted on 5/11/2007 at 2:42 PM
		</div>
		<div class="comment_text"><p>@Tom - Yes, dropping out into Java and the java.util.Vector object</p><p>@jason - that seems a little more elegant, might go and revisit my code again, cheers :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664932">14</a> by Charlie Arehart
		posted on 6/7/2007 at 9:19 AM
		</div>
		<div class="comment_text"><p>Hey Ray, maybe you already knew this, but for those coming along later, the RC changed arraydefinedat to arrayisdefined (which actually is named more like the older isdefined). Just an FYI.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713664934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713664934">15</a> by Raymond Camden
		posted on 6/7/2007 at 3:24 PM
		</div>
		<div class="comment_text"><p>Nope, I had missed that. Thanks Charlie.</p></div>
	</div>
</div>
		