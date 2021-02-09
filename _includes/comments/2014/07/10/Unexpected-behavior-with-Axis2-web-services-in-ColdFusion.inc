
<div class="comment" id="c_1714083342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083342">1</a> by Joe Rinehart
		posted on 7/10/2014 at 7:21 PM
		</div>
		<div class="comment_text"><p>That sounds more like a difference in behavior in the ColdFusion adapter that talks to Axis 2 - Axis itself wouldn't know anything about CFCs.</p><p>Anyhow...</p><p>&gt; Also, don't use web services. Seriously. Unless <br>&gt; someone is holding a gun to your head, just use <br>&gt; simple JSON services and don't overcomplicate stuff.</p><p>...amen.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083344">2</a> by Raymond Camden
		posted on 7/10/2014 at 7:23 PM
		</div>
		<div class="comment_text"><p>Oh yeah - I didn't even account for the possibility it may just be a bug in CF. I'll file a report now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083352">3</a> by Raymond Camden
		posted on 7/10/2014 at 7:24 PM
		</div>
		<div class="comment_text"><p>Bug report: <a href="https://disq.us/url?url=https%3A%2F%2Fbugbase.adobe.com%2Findex.cfm%3Fevent%3Dbug%26id%3D3787631%3Anz5Anj7NWTZbqLT-pJDwpSdRUn8&amp;cuid=3321886" rel="nofollow noopener" title="https://bugbase.adobe.com/index.cfm?event=bug&amp;id=3787631">https://bugbase.adobe.com/i...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083351">4</a> by Toby Reiter
		posted on 7/10/2014 at 7:31 PM
		</div>
		<div class="comment_text"><p>So, If we're trading data back and forth between servers behind the scenes, how do we do a "simple JSON service"? Wouldn't that be a _cfhttp_ call? To me, a web service seems a much more direct approach than serializing all of my values and submitting them as a post request.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083350">5</a> by Miguel_F
		posted on 7/10/2014 at 7:36 PM
		</div>
		<div class="comment_text"><p>[subscribe]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083348">6</a> by Raymond Camden
		posted on 7/10/2014 at 7:40 PM
		</div>
		<div class="comment_text"><p>Toby, I can go deeper if you want, but for a while now CF has had an easy way to output JSON since CF6.</p><p>Imagine the CFC above. I can call it from JS using this URL:</p><p>some.cfc?method=testWeird&amp;returnformat=json</p><p>The URL argument, returnformat, tells CF to auto turn the result into JSON.</p><p>It really is easy to use.</p><p>In terms of calling the CFC with data, if you add crap to the url, like &amp;name=ray, then it is passed like an argument to the function. So <a href="http://disq.us/url?url=http%3A%2F%2Farguments.name%3AQqOM0eK7v9LDCdUJ173Sj4NsEtM&amp;cuid=3321886" rel="nofollow noopener" title="arguments.name">arguments.name</a> works. Ditto for FORM posts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083349">7</a> by Steve Seaquist
		posted on 7/10/2014 at 7:54 PM
		</div>
		<div class="comment_text"><p>In my experience, refreshing the WSDL made no difference. But I used cfinvoke's refreshWSDL="Yes". Are you saying refreshing the WSDL in ColdFusion Administrator resets Variables.weird?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083366">8</a> by Raymond Camden
		posted on 7/10/2014 at 7:56 PM
		</div>
		<div class="comment_text"><p>I refreshed it in cfinvoke. I'm pretty darn sure that fixed it. Will confirm in a bit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083363">9</a> by Steve Seaquist
		posted on 7/10/2014 at 8:03 PM
		</div>
		<div class="comment_text"><p>It could have been that you did a some.cfc?method=testWeird test and that's what actually reset it. Then on the next WS call with refreshWSDL="Yes", it masqueraded as a fix.</p><p>Or maybe it was something else you did amid many tests. Whatever it was, it would be great to have an Axis2 solution less painful than restarting CF Server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083365">10</a> by Steve Seaquist
		posted on 7/10/2014 at 8:05 PM
		</div>
		<div class="comment_text"><p>Are you sure you didn't leave wsversion="1" in the cfcomponent tag?</p><p>That would do it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083369">11</a> by Toby Reiter
		posted on 7/10/2014 at 9:01 PM
		</div>
		<div class="comment_text"><p>@Ray - I'm familiar with getting data returned as JSON from AJAX requests, but in this case, I have to submit a serialized object with dozens of its own fields as well as one or more child objects that also have dozens of fields (basically, to perform data transfer between servers).  While a CFHTTP post can handle that much data (I think), it was more straightforward to submit it as a struct with nested arrays as opposed to a serialized JSON string.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083362">12</a> by Raymond Camden
		posted on 7/10/2014 at 9:56 PM
		</div>
		<div class="comment_text"><p>@Steve: I only used that arg in a copy of my WS file so I could easily test.</p><p>@Toby: I'm not quite sure I get you. If you have a complex struct, you can serialize it very easily.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083364">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083364">13</a> by serializing structs
		posted on 7/10/2014 at 10:28 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F11059219%2Fcoldfusion-passing-a-struct-as-string-through-url%3Aggw1jtyLD2Jo1MZIVHHJps3cYY8&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/11059219/coldfusion-passing-a-struct-as-string-through-url">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083367">14</a> by Steve Seaquist
		posted on 7/10/2014 at 10:54 PM
		</div>
		<div class="comment_text"><p>The benefit of using web services is performance. By precompiling the arguments negotiation, it becomes a much faster remote invocation mechanism. That's why you have to refresh WSDLs when they change.</p><p>My site is a very heavy user of web services, so it's not just syntactic sugar to us. We were actually hoping to gain a 4x to 5x performance improvement in the move to Axis2: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.wso2.net%2F2006%2F05%2Faxis2_performance_testing_round_1%3A-vmSp64-yS7rs-ySycaX4kAQEd8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.wso2.net/2006/05/axis2_performance_testing_round_1">http://www.wso2.net/2006/05...</a></p><p>Too bad it imposes such a recoding burden (so far) to prevent this stateful behavior.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083371">15</a> by Steve Seaquist
		posted on 7/10/2014 at 10:57 PM
		</div>
		<div class="comment_text"><p>That URL got trashed by the underscore = italics mechanism. Trying again with %5f for underscore:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.wso2.net%2F2006%2F05%2Faxis2%255fperformance%255ftesting%255fround_1%3AFGaQX5c2eZ8te0buF6bYbztCwQ0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.wso2.net/2006/05/axis2%5fperformance%5ftesting%5fround_1">http://www.wso2.net/2006/05...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083372">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083372">16</a> by Raymond Camden
		posted on 7/10/2014 at 11:03 PM
		</div>
		<div class="comment_text"><p>Woah now, while I will not argue that Axis2 is more performant, I'm not going to agree that related network calls to web service X versus the same CFC doing JSON is going to be faster, especially with how verbose SOAP is. CFC instantiation is *incredibly* fast, especially since CF8 and onwards. Also, if you have any particularly complex CFCs you can cache them in RAM and call them via your remote CFC as a proxy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083368">17</a> by Steve Seaquist
		posted on 7/11/2014 at 12:09 AM
		</div>
		<div class="comment_text"><p>It's not our code calling our code. It's customers calling our code with all manner of platforms and differing client software. Sometimes they have no choice but to use web services because they're passing through 3rd party software.</p><p>Perhaps I should've been more specific, sorry. I'm sure, if the caller has no need for WSDL, you can save a ton of processing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083370">18</a> by Dana K
		posted on 7/12/2014 at 10:53 AM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F24313528%2Fcf10-cf11-web-services-using-axis2-restarting-existing-java-objects%3AAXtMGIVrHH1w7vvlf1cMA7oNgfE&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/24313528/cf10-cf11-web-services-using-axis2-restarting-existing-java-objects">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083374">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083374">19</a> by Melvin T
		posted on 7/17/2014 at 8:21 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>On the 'serviceaddress' property of a cfc, can you make the name dynamic? Say, I have an application.wsdl_srvaddr = 'https://mydevsite/mycomp.cfc" in my DEV environment, then in my QA, I have application.wsdl_srvaddr = 'https://myQAsite/mycomp.cfc". I know that if you remove the serviceaddress on the cfcomponent tag, it will just defaults to whatever protocol+location the cfc resides. Thing is, our SSL certs are installed in F5, so if I take it out, the protocal will always show SSL. I was hoping to just do -</p><p>&lt;cfcomponent output="false" serviceaddress="#application.wsdl_srvaddr#"&gt;</p><p>... but this always breaks with</p><p>Fault - Error attempting to create Java skeleton for CFC web service.; nested exception is: <br>	coldfusion.xml.rpc.CFCInvocationException: [java.lang.ExceptionInInitializerError : null][java.lang.ClassCastException : [Ljava.lang.Object; cannot be cast to java.lang.String]</p><p>Any suggestions? (- and shoutout to my homie Steve S!)</p><p>Thanks! -M</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083373">20</a> by Raymond Camden
		posted on 7/21/2014 at 6:48 PM
		</div>
		<div class="comment_text"><p>Um, you got me. It *may* be that when CF generates the skeleton, there is no Application scope. If you change that variable to foo, and before cfcomponent do</p><p>cfset foo = something</p><p>Does it work then?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083376">21</a> by Steve Seaquist
		posted on 7/22/2014 at 10:42 PM
		</div>
		<div class="comment_text"><p>Hi Melvin!</p><p>Try doing it outside of the cfcomponent tag:</p><p>this.serviceAddress                        = Application.wsdl_srvaddr; // doesn't work. <br>getMetaData(this).serviceAddress = Application.wsdl_srvaddr; // does work.</p><p>The getMetaData moves the "this" reference up to the cfcomponent level. Pretty cool, huh!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083377">22</a> by Steve Seaquist
		posted on 7/22/2014 at 10:43 PM
		</div>
		<div class="comment_text"><p>Stupid underscores again:</p><p>this.serviceAddress = Application.wsdl%5fsrvaddr; // doesn't work.<br>getMetaData(this).serviceAddress = Application.wsdl%5fsrvaddr; // does work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083378">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083378">23</a> by Steve Seaquist
		posted on 7/22/2014 at 10:47 PM
		</div>
		<div class="comment_text"><p>Why did it do THAT??? Trying again without copy/paste:</p><p>this.serviceAddress = Application.wsdl%5fsrvaddr; // doesn't work. <br>getMetaData(this).serviceAddress = Application.wsdl%5fsrvaddr; // does work.</p><p>That's in the pseudo-constructor, so I'm not sure about the Application reference, but I'm dead certain about the getMetaData(this) allowing code in the pseudo-constructor to modify the serviceAddress.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083375">24</a> by Steve Seaquist
		posted on 7/22/2014 at 10:48 PM
		</div>
		<div class="comment_text"><p>Well, %5f used to work to get underscores into the code here. I guess that changed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083379">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083379">25</a> by Raymond Camden
		posted on 7/22/2014 at 11:00 PM
		</div>
		<div class="comment_text"><p>Sorry for the issues. This is why I suggest a Pastebin or Gist for code. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083382">26</a> by Steve Seaquist
		posted on 7/23/2014 at 12:52 AM
		</div>
		<div class="comment_text"><p>No problem. For the benefit of those who couldn't read it, Melvin had an underscore between Application.wsdl and srvaddr.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714083381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714083381">27</a> by Raymond Camden
		posted on 8/21/2014 at 6:14 PM
		</div>
		<div class="comment_text"><p>Follow up: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2F2014%2F8%2F21%2FFollow-up-to-ColdFusion-Axis2-Web-Service-Issue%3AJzDJLYIt6neMBq8pbvD95VD4c_E&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/2014/8/21/Follow-up-to-ColdFusion-Axis2-Web-Service-Issue">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		