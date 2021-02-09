
<div class="comment" id="c_1713617963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617963">1</a> by Shimju David
		posted on 4/18/2005 at 7:11 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>this is not what we wanted.Can u please explain specifically?</p><p>Copy the following files from the flextemp\flex\WEB-INF\lib directory to the ColdFusion MX cf_server_root\WEB-INF\lib directory: <br>flex-bootstrap.jar <br>commons-beanutils.jar <br>commons-collections.jar <br>flashgateway.jar files .</p><p>When I did above steps these two jar files(commons-beanutils.jar,commons-collections.jar)  were already in cfmmx lib folder. Do I want to replace it?</p><p>2)Copy all assets required by your Flex application into the root directory of your deployed ColdFusion server instance. For example, if you deployed ColdFusion on JRun 4, the root directory of your deployed ColdFusion server instance might be C:\JRun4\servers\default\cfusion.</p><p>What exactly meant by "assets"??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617958">2</a> by Ray Camden
		posted on 4/18/2005 at 7:19 PM
		</div>
		<div class="comment_text"><p>1) Yes - you should replace those 2 jars. I backed up mine first though.</p><p>2) Ignore all of that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617959">3</a> by Steven Erat
		posted on 4/18/2005 at 7:37 PM
		</div>
		<div class="comment_text"><p>Its not immediately obvious to me why you would want to merge the Flex web application with the ColdFusion web application since the release of ColdFusion 7 and the new "rich forms" features.</p><p>Although, rather than merge them, you can deploy the Flex war and ColdFusion war to the same J2EE server instance very easily.  See:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.newsarch.com%2Farchive%2Fmailinglist%2Fcold-fusion%2Fgeneral%2Fmsg37053.html%3ABZ9ZBvlyxlZ7J-DK0cRC5mWSl08&amp;cuid=3321886" rel="nofollow noopener" title="http://www.newsarch.com/archive/mailinglist/cold-fusion/general/msg37053.html">http://www.newsarch.com/arc...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617960">4</a> by Ray Camden
		posted on 4/18/2005 at 7:45 PM
		</div>
		<div class="comment_text"><p>Woah ... Steven... I may be misreading you here... but I respectfully disagree with you - and in a big way. Let me reply to each point:</p><p>"Its not immediately obvious to me why you would want to merge the Flex web application with the ColdFusion web application since the release of ColdFusion 7 and the new "rich forms" features."</p><p>Are you saying Flex is the same as rich forms? I know you don't mean that - but it almost sounds like you are saying a CFMX7 person doesn't need Flex. Flex is _way_ beyond what is in CFMX7. (This is not to knock Rich Forms - I love em.) Speaking for myself - I didn't want to run another app server to do Flex dev. I wanted both CF+Flex tied to my local web server.</p><p>"Although, rather than merge them, you can deploy the Flex war and ColdFusion war to the same J2EE server instance very easily."</p><p>Yes, but remember, I'm talking about a "simple" CFMX install. Most people I know simply install CF as is and run it with IIS or Apache. They don't run it with JRun. This is how I have it running, and all my clients as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617961">5</a> by Christopher Wigginton
		posted on 4/18/2005 at 8:26 PM
		</div>
		<div class="comment_text"><p>I think the best reason for integrating Flex and CFMX is being able to have the MXML and CFM files in the same directory structure.  This gives you some sweet options for development, including JSP/CFMX/MXML along with the ability to include the Flex tag lib in your JSP and CFM pages.  It's been working beautifully using IIS6 on Windows 2003 server.</p><p>What I wish is that if you have both a flex and CFMX license, you could essentially unlock the locked down bits of CFFORM.  Imagine being able to use ALL the flex UI elements in a CFFORM.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617962">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617962">6</a> by charlie arehart
		posted on 4/18/2005 at 8:52 PM
		</div>
		<div class="comment_text"><p>FWIW, it's also possible to integrate Flex with BlueDragon/J2EE. I have done it, for the same reasons and benefits described above (just for testing purposes, using the available developer edition of Flex). And the steps are the same as described above for integrating it with the CFMX J2EE web app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617965">7</a> by Steven Erat
		posted on 4/18/2005 at 9:02 PM
		</div>
		<div class="comment_text"><p>My comments were based on my experience with a few people before CFMX 7 who only really wanted to have nice flash widgets such as what is now CFCalendar, or flash forms that integrated with  CF.  In those cases, the scope of what they wanted to accomplish was much more narrow than what Flex has to offer.</p><p>By deploying the Flex and the CF wars to the same server instance, you can have the '/' context root handle .cfm/.cfc requests, and another context root to handle .mxml requests where the mxml swf  data is provided by AMF calls to CFCs.  In this configuration, you have all of Flex and all of CF on one J2EE server instance, one webserver connector, and data integration.  Deploying the wars here is really quite easy.</p><p>As far as a simple "Server configuration" combined installation, yes I can understand the desire to have the most effortless installation possible.  I'm usually of the mindset that I'll work with what I've got.</p><p>In my current experience, I think a lot more ColdFusion customers that I encounter are going for the multiserver JRun installation, perhaps almost as much as the Server Config.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617969">8</a> by Ray Camden
		posted on 4/18/2005 at 9:23 PM
		</div>
		<div class="comment_text"><p>Steven: In terms of your first para - I do agree with you.</p><p>As for your experience with server folks - I think we definitely move in different directions (grin). I think Macromedia feels that Flex will only be used by those customers (hence one of the reasons for the high price tag), so I guess I see the reason to not bother with a simpler installer for folks running CF as a simple server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617975">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617975">9</a> by Shimju David
		posted on 4/19/2005 at 9:41 AM
		</div>
		<div class="comment_text"><p>When I run one of flex example like http://localhost/dataModel/dataModel.mxml</p><p>I got an error"Webservice Fault" <br>"Could not load  wsdl"</p><p>Well I just have intsalled FLex on normal CFMMX7 server. but none of my examples works perfectly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617982">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617982">10</a> by Shimju David
		posted on 4/19/2005 at 9:44 AM
		</div>
		<div class="comment_text"><p>when i run another example http://localhost/blogreader/blogreader.mxml,  I got another erorr "<br>HTTP Service Fault: <br>Java.lang.RuntimeException: You are not allowed to acces the URL http://localhost/blogreader/blogreader.mxml vai this proxy. URL is not in the proxy's whitelist.</p><p>Please advise?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617966">11</a> by Shimju David
		posted on 4/19/2005 at 9:47 AM
		</div>
		<div class="comment_text"><p>when i run another flex example http://localhost/flexstore/flexstore.mxml, I got another error :<br>Could not load WSDL<br>Server.java.lang.RuntimeException:Bad service name : FlexStoreCatalogWS.</p><p>please advice</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617981">12</a> by Steven Erat
		posted on 4/19/2005 at 5:31 PM
		</div>
		<div class="comment_text"><p>Running the Flex examples requires more changes than just merging Flex with ColdFusion web applications, including adding webservice and httpservice mappings, and configuring the whitelist.</p><p>This technote shows how to do it with Flex 1.0 and CFMX 6.1, which can serve as a rough equivalent for Flex 1.5 and CFMX 7 I think:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.macromedia.com%2Fsupport%2Fflex%2Fts%2Fdocuments%2Fsamples_cfmx.htm%3ADjQaH5Z2N5juk4TzjucYZlmMGLA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.macromedia.com/support/flex/ts/documents/samples_cfmx.htm">http://www.macromedia.com/s...</a></p><p>Also see this blog entry for more on configuring the whitelist and setting up Webservice mappings:</p><p>Flex Store Application: A Web Service from ID to Implementation - <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.talkingtree.com%2Fblog%2Findex.cfm%3Fmode%3Dentry%26entry%3D25AA59DE-45A6-2844-7EBE24A1B0901E20%3ATdlVRzaFQ6joorIxkl96xQWkuFw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.talkingtree.com/blog/index.cfm?mode=entry&amp;entry=25AA59DE-45A6-2844-7EBE24A1B0901E20">http://www.talkingtree.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617976">13</a> by Raymond Camden
		posted on 4/19/2005 at 6:09 PM
		</div>
		<div class="comment_text"><p>Thanks for responding to him, Steven!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617977">14</a> by Christopher Wigginton
		posted on 4/19/2005 at 6:53 PM
		</div>
		<div class="comment_text"><p>In regards to merging the Flex samples,  IMHO, the difficultly in doing that outweighs the minor usage usually associated with samples.</p><p>I suggest just dragging the samples.war to a new samples server (assuming you don't already have a samples server) and hot deploying.  You usually don't want your samples in production anyways so it's much easier to just launch the samples server when you need it rather than cluttering up your production environment config files with unwanted servlets, services and so on, that you'll just remove later on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617972">15</a> by Shimju David
		posted on 4/20/2005 at 11:30 AM
		</div>
		<div class="comment_text"><p>Now all my flex examples  working perfectly except those which requires WSDL, for example "Flex Store". It is showing "Could not load Wsdl" Error!!.<br>Even after adding all services(bean mapping) to server-config.wsdd.</p><p>Can anybody help me please.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617973">16</a> by jets
		posted on 4/22/2005 at 5:09 PM
		</div>
		<div class="comment_text"><p>Is it popssible for you to supply a copy of your web.xml so i can compare - find the spot i went wrong - as you said it is complex and i thing i got it wrong some where as the mxmxl dont show they just download.</p><p>Please send it via email.</p><p>Thanks<br>jet</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617979">17</a> by nenad
		posted on 5/31/2005 at 4:38 PM
		</div>
		<div class="comment_text"><p>Could you send me web.xml file so I can compare it with my own... I too have problems setting up Flex to run with CFMX7.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617968">18</a> by Raymond Camden
		posted on 6/3/2005 at 5:50 PM
		</div>
		<div class="comment_text"><p>nenad - I recently moved to a new PC, and no longer have my Flex integrated. If you send me an email in a few weeks though, I'm sure it will be done and I'll send you the file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617984">19</a> by Michael Tyler
		posted on 7/20/2005 at 1:33 AM
		</div>
		<div class="comment_text"><p>Does anyone have a working example of the web.xml for CFMX 7 standalone? I have installed it on CFMX 7 without Jrun4 in IIS6. I believe I have the web.xml file somewhat right, yet when I run mxml files, it states " Either the Macromedia application server is unreachable or it does not have a mapping to process this request.". It is there in it the web.xml, and I also have mapped .mxml in IIS, per the technote. Also SWF files dont load at all unless I remove the mapping in IIS.</p><p>Anyone have suggestions for me to try?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617978">20</a> by Keith Miller
		posted on 7/20/2005 at 9:54 PM
		</div>
		<div class="comment_text"><p>Please help.  I have read every link I can find on the web regarding getting FLEX and CFM to work ahppily together.  I am running IIS and although I have rebuilt my web.xml file over and over, I keep getting this error when I try and view a page that conatins CFM HTML and MXML code in it:</p><p>Exception Type: class java.lang.NoClassDefFoundError<br>Servlet Name: CfmServlet</p><p>As others have asked prior to me, does someone have a copy of a web.xml file that works?</p><p>Thanks,</p><p>Keith</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617983">21</a> by Keith Miller
		posted on 7/20/2005 at 10:42 PM
		</div>
		<div class="comment_text"><p>This link might help some people:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cflex.net%2Fshowfiledetails.cfm%3FChannelID%3D1%26Object%3DFile%26objectID%3D177%3AJJmBPtuSqF1be9xn7GXIVjfuuF8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cflex.net/showfiledetails.cfm?ChannelID=1&amp;Object=File&amp;objectID=177">http://www.cflex.net/showfi...</a></p><p>Keith</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617980">22</a> by Nenad
		posted on 7/21/2005 at 11:22 AM
		</div>
		<div class="comment_text"><p>Hi,<br>Ray has sent me a while ago web.xml file as I too have had problems with integration, and I must say it works perfectly. Keith, if you still need it e-mail me and I'll send you the file. If it's OK with Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617971">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617971">23</a> by Raymond Camden
		posted on 7/21/2005 at 6:37 PM
		</div>
		<div class="comment_text"><p>Nenad - you can share my XML file, I don't mind.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617970">24</a> by Keith Miller
		posted on 7/21/2005 at 6:46 PM
		</div>
		<div class="comment_text"><p>Nenad or Ray, How do I get your email address?  I'm obviously missing something here, but I can't find anywhere on this site that allows me to get your address or send you an email.  I am definately in need of the file still.</p><p>Thanks,</p><p>Keith</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617985">25</a> by Raymond Camden
		posted on 7/21/2005 at 6:53 PM
		</div>
		<div class="comment_text"><p>Heh, we hide email addresses so spammers can't get to it. Keith, post a comment again with your email address in the comment. I'd make it 'spam safe' by doing something like.</p><p>My address is foo, followed by the at symbol, and the rest of my email address is <a href="http://disq.us/url?url=http%3A%2F%2Fgoo.com%3AAkE-SSx4loVmq6GQz7gE5TrRLE8&amp;cuid=3321886" rel="nofollow noopener" title="goo.com">goo.com</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617986">26</a> by Keith Miller
		posted on 7/21/2005 at 6:57 PM
		</div>
		<div class="comment_text"><p>My email address is cfdaddy, followed by the at symbol, and then <a href="http://disq.us/url?url=http%3A%2F%2Fhotmail.com%3ASPSGbmLpPKQXN1esmICxs-DYnCk&amp;cuid=3321886" rel="nofollow noopener" title="hotmail.com">hotmail.com</a>.</p><p>Thanks again,</p><p>Keith</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617987">27</a> by Sonni Richardson
		posted on 7/21/2005 at 7:44 PM
		</div>
		<div class="comment_text"><p>Hey,<br>I have been going through this very issue! May I also receive a copy of the web.xml file? Thanks much. My e-mail is saeedrichardson, followed by the at sign, followed by <a href="http://disq.us/url?url=http%3A%2F%2Fgmail.com%3AuvPsgZx2R42Lf5XtxEgW0ncdM54&amp;cuid=3321886" rel="nofollow noopener" title="gmail.com">gmail.com</a> (and if you want a gmail account I can send you one, too!).</p><p>Thanks again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617989">28</a> by Keith Miller
		posted on 7/22/2005 at 4:31 PM
		</div>
		<div class="comment_text"><p>Well, the XML file does not seem to work either.  I get the same errors I did before.  I get this one right after I restart the CF service upon calling a CFM_mxml mixed page.</p><p>HTTP Status Code: 500<br>Exception Type: class java.lang.ExceptionInInitializerError<br>Servlet Name: CfmServlet</p><p>If I refresh, I get this one from that point on:</p><p>HTTP Status Code: 500<br>Exception Type: class java.lang.NoClassDefFoundError<br>Servlet Name: CfmServlet</p><p>I just went and rebuilt a new box and installed only CF and flex following the instruction and using the xml file with the exact same results.  So now I've got two seperate servers with the same issue happening.  One in a Win2K workstation, while the other is a Win2K Advanced Server, both of which are running IIS as the web server, CFMX 7, and FLEX 1.5.</p><p>Anybody have any other ideas I can try or know of an easy fix for this?</p><p>Thanks for everyones help,</p><p>Keith</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617988">29</a> by Raymond Camden
		posted on 7/22/2005 at 4:34 PM
		</div>
		<div class="comment_text"><p>Keith - this won't help much, but I'd suggest you do NOT start off by mixing MXML and CF. I'd build a simple "Hello World" MXML file and get that running first. In the past I've seen issues where I only got MXML files working, not both together. Obviously you want both working - but start simple.</p><p>Lastly - do not forget that if you are a paying customer for Flex, you can call MACR support. It may cost you money, but it would be a solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617990">30</a> by Agha Mehdi
		posted on 8/4/2005 at 7:21 AM
		</div>
		<div class="comment_text"><p>I have the same problem as Michael Tyler had. I have done everything by the book but when I try to run the app, it says "Either the Macromedia application server is unreachable or it does not have a mapping to process this request".</p><p>I haven't seen any solution to this problem on the thread so wondering if Michael was able to get it figured out.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618000">31</a> by Michael Tyler
		posted on 8/4/2005 at 3:32 PM
		</div>
		<div class="comment_text"><p>I actually just copyed the entire web.xml file:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cflex.net%2FChannelFiles%2F1%2Fweb.xml%3A-bKuOFzs4wxihn5TiSD8_QjmuHA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cflex.net/ChannelFiles/1/web.xml">http://www.cflex.net/Channe...</a></p><p>and replaced my orig one with it. It started to work after that. I went back and tweaked it a bit for what I was doing extra.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617998">32</a> by Agha Mehdi
		posted on 8/4/2005 at 9:31 PM
		</div>
		<div class="comment_text"><p>Michael,</p><p>Will you be able to tell me what steps did you take for the whole merger process from extracting the flex.war file to creating the mapping in IIS for .mxml and .swf?</p><p>I will appreciate that a lot</p><p>Thanks</p><p>Agha</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618003">33</a> by Michael Tyler
		posted on 8/8/2005 at 3:01 PM
		</div>
		<div class="comment_text"><p>1. Extract Flex - Default install extracts them to  C:\Program Files\Macromedia\Flex\<br>2. Copy the entire C:\Program Files\Macromedia\Flex\flex\WEB-INF\flex\ to C:\CFusionMX7\wwwroot\WEB-INF\<br>   so that you end up with C:\CFusionMX7\wwwroot\WEB-INF\flex\ <br>   Inside the C:\CFusionMX7\wwwroot\WEB-INF\flex\ folder you should end up looking like this:</p><p>   C:\CFusionMX7\wwwroot\WEB-INF\flex\frameworks<br>   C:\CFusionMX7\wwwroot\WEB-INF\flex\frameworks_debug<br>   C:\CFusionMX7\wwwroot\WEB-INF\flex\jars<br>   C:\CFusionMX7\wwwroot\WEB-INF\flex\system_classes<br>   C:\CFusionMX7\wwwroot\WEB-INF\flex\user_classes<br>   and with the follow files:</p><p>   mxml-manifest.xml<br>   gateway-config.xml<br>  flex-config.xml<br>  flash-unicode-table.xml</p><p>3. Copy the JAR files from C:\Program Files\Macromedia\Flex\flex\WEB-INF\lib\ to C:\CFusionMX7\wwwroot\WEB-INF\lib\<br>   flex-bootstrap.jar<br>   flashgateway.jar<br>   commons-collections.jar<br>   commons-beanutils.jar<br>    ### Backup your old ones first ####<br>4.  I edited my web.xml file. I have a link you can download it from in a zip file:<br>    <a href="http://disq.us/url?url=http%3A%2F%2Fwww.abinidi.com%2Fflex%2Fweb.zip%3AwudEtT2A6FDl2mmKQV100MbLN0w&amp;cuid=3321886" rel="nofollow noopener" title="http://www.abinidi.com/flex/web.zip">http://www.abinidi.com/flex...</a><br>    ### backup your old one prior before edited anything ###</p><p>5. In IIS on the master site, I have mapped:</p><p>   .mxml - C:\CFusionMX7\runtime\lib\wsconfig\jrun_iis6.dll<br>   .swf - C:\CFusionMX7\runtime\lib\wsconfig\jrun_iis6.dll</p><p>Restarted CFMX and IIS</p><p>I hope this helps. I hope I didnt just get lucky getting it to run. If you have any questions, email me directly, and I can see what I may help with. abinidi@abinidi.com</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617999">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617999">34</a> by AndyC
		posted on 9/29/2005 at 6:46 PM
		</div>
		<div class="comment_text"><p>I'm a bit late to the party but I tried the<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cflex.net%2FChannelFiles%2F1%2Fweb.xml%3A-bKuOFzs4wxihn5TiSD8_QjmuHA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cflex.net/ChannelFiles/1/web.xml">http://www.cflex.net/Channe...</a> version after the other changes referred to above<br>and just got a<br>"There is no web application configured to service your request" error</p><p>Michael's<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.abinidi.com%2Fflex%2Fweb.zip%3AwudEtT2A6FDl2mmKQV100MbLN0w&amp;cuid=3321886" rel="nofollow noopener" title="http://www.abinidi.com/flex/web.zip">http://www.abinidi.com/flex...</a> no longer appears available <br>So Nenad/Ray could I try your version please (although this may not be the solution)<br>My address is agcur, followed by the at symbol, and the rest of my email address is <a href="http://disq.us/url?url=http%3A%2F%2Frogers.com%3A9oaF4_hg_sBTyivZq3GiLuqXAmc&amp;cuid=3321886" rel="nofollow noopener" title="rogers.com">rogers.com</a>.<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618002">35</a> by Mike Collins
		posted on 10/10/2005 at 7:52 PM
		</div>
		<div class="comment_text"><p>Just reading this today.  My vote is for doing what Steven is suggesting. I would even go a step farther and make Flex its own server.  You then bring in Flex via Flash object tags.  You use swf.mxml as the file suffix.</p><p>You will most likely need a crossdomain.xml to talk to the Flex server but that should not be a major issue.</p><p>Two reasons for this:<br>1. Enforces MVC architecture.  <br>2. Upgrades between CF and Flex can be done independently.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713618001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713618001">36</a> by Barry Evans
		posted on 2/7/2006 at 5:40 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>i have tried my best to get this CF MX7 and Flex integrated using the tutorials provided.</p><p>I worked through the one at : <a href="http://disq.us/url?url=http%3A%2F%2Fwww.macromedia.com%2Fsupport%2Fdocumentation%2Fen%2Fflex%2F1_5%2Fflexforcf.html%23installflex%3A_q80UQC9XQnukCEVmMKS_vm-gHA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.macromedia.com/support/documentation/en/flex/1_5/flexforcf.html#installflex">http://www.macromedia.com/s...</a></p><p>and i have done it to the letter IMHO.  I am running a CF MX7 Enterprise (Devnet) edition server with integrated JRun server.  I listed my system info at the bottom of the post.</p><p>I tried to run the mxml sample files using the following url:<br>http://localhost:8500/flexstore/flexstore.mxml</p><p>Am i right in trying to use the 8500 port (what CF is configued to listen on)?</p><p>I installed the Flex server with its own web server and i got the mxml files coming up no bother, then i hit a snag with the Web Services section of the tutorials (i did have a look at that article and it will help me)</p><p>I really am coming to the end of my patience as the whole process seems to not be working.  Im wondering if i should just get the Flex running its own JRun web server, but I wanted to know if there are any benefits of merging the CF/Flex compilers/servers to work together under one server instance.</p><p>Any help would be appreciated!!!</p><p>my email is bazza_ni, the at symbol, hotmail dot com</p><p>Thanks,</p><p>Barry</p><p>-------------------------------------------------------------<br>CF MX7 Server System Information</p><p>Server Details</p><p>Server Product 	ColdFusion MX<br>Version 		7,0,1,116466  <br>Edition 		Enterprise (DevNet)  <br>Serial Number 	<br>Operating System 	Windows XP  <br>OS Version 		5.1</p><p>JVM Details</p><p>Java Version 	1.4.2_05  <br>Java Vendor 	Sun Microsystems Inc.  <br>Java Vendor URL <a href="http://disq.us/url?url=http%3A%2F%2Fjava.sun.com%2F%3Aqf-j-nL5g9_jxvCnMMoo_uxcOT4&amp;cuid=3321886" rel="nofollow noopener" title="http://java.sun.com/">http://java.sun.com/</a><br>Java Home 		e:\CFusionMX7\runtime\jre  <br>Java File Encoding 	Cp1252  <br>Java Default Locale 	en_GB  <br>File Separator 	\  <br>Path Separator 	;  <br>Line Separator 	Chr(13)<br>User Name 		        SYSTEM  <br>User Home 		        C:\  <br>User Dir 		        e:\CFusionMX7\runtime\bin  <br>Java VM Specification Version 	1.0  <br>Java VM Specification Vendor 	Sun Microsystems Inc.  <br>Java VM Specification Name 	Java Virtual Machine Specification  <br>Java VM Version 		1.4.2_05-b04  <br>Java VM Vendor 			Sun Microsystems Inc.  <br>Java VM Name 			Java HotSpot(TM) Server VM  <br>Java Specification Version 	1.4  <br>Java Specification Vendor 	Sun Microsystems Inc.  <br>Java Specification Name 	Java Platform API Specification  <br>Java Class Version 		48.0</p><p>Java Class Path</p><p>CF Classpath<br>;e:/CFusionMX7/runtime/../lib/ant-launcher.jar;  <br>e:/CFusionMX7/runtime/../lib/ant.jar;  <br>e:/CFusionMX7/runtime/../lib/axis.jar;  <br>e:/CFusionMX7/runtime/../lib/bcel.jar;  <br>e:/CFusionMX7/runtime/../lib/cdo.jar; <br>e:/CFusionMX7/runtime/../lib/cdohost.jar;  <br>e:/CFusionMX7/runtime/../lib/cf4was.jar;  <br>e:/CFusionMX7/runtime/../lib/cf4was_ae.jar;  <br>e:/CFusionMX7/runtime/../lib/cfmx-ssl.jar;  <br>e:/CFusionMX7/runtime/../lib/cfusion.jar;  <br>e:/CFusionMX7/runtime/../lib/commons-beanutils-1.5.jar;  <br>e:/CFusionMX7/runtime/../lib/commons-collections-2.1.jar;  <br>e:/CFusionMX7/runtime/../lib/commons-digester-1.3.jar;  <br>e:/CFusionMX7/runtime/../lib/commons-discovery-0.2.jar;  <br>e:/CFusionMX7/runtime/../lib/commons-discovery.jar;  <br>e:/CFusionMX7/runtime/../lib/commons-logging-1.0.2.jar;  <br>e:/CFusionMX7/runtime/../lib/commons-logging-api-1.0.2.jar;  <br>e:/CFusionMX7/runtime/../lib/commons-net-1.2.2.jar;  <br>e:/CFusionMX7/runtime/../lib/crystal.jar; <br>e:/CFusionMX7/runtime/../lib/flashgateway.jar;  <br>e:/CFusionMX7/runtime/../lib/httpclient.jar;  <br>e:/CFusionMX7/runtime/../lib/ib61patch.jar;<br>e:/CFusionMX7/runtime/../lib/ib6addonpatch.jar;  <br>e:/CFusionMX7/runtime/../lib/ib6core.jar;  <br>e:/CFusionMX7/runtime/../lib/ib6swing.jar;  <br>e:/CFusionMX7/runtime/../lib/ib6util.jar;  <br>e:/CFusionMX7/runtime/../lib/im.jar;  <br>e:/CFusionMX7/runtime/../lib/iText.jar;  <br>e:/CFusionMX7/runtime/../lib/iTextAsian.jar;  <br>e:/CFusionMX7/runtime/../lib/izmado.jar;  <br>e:/CFusionMX7/runtime/../lib/jakarta-oro-2.0.6.jar;  <br>e:/CFusionMX7/runtime/../lib/java2wsdl.jar;  <br>e:/CFusionMX7/runtime/../lib/jaxrpc.jar;  <br>e:/CFusionMX7/runtime/../lib/jdom.jar;  <br>e:/CFusionMX7/runtime/../lib/jeb.jar; <br>e:/CFusionMX7/runtime/../lib/jintegra.jar;  <br>e:/CFusionMX7/runtime/../lib/ldap.jar;  <br>e:/CFusionMX7/runtime/../lib/ldapbp.jar;  <br>e:/CFusionMX7/runtime/../lib/log4j.jar;  <br>e:/CFusionMX7/runtime/../lib/macromedia_drivers.jar; <br>e:/CFusionMX7/runtime/../lib/mail.jar; <br>e:/CFusionMX7/runtime/../lib/msapps.jar; <br>e:/CFusionMX7/runtime/../lib/pbclient42RE.jar; <br>e:/CFusionMX7/runtime/../lib/pbembedded42RE.jar; <br>e:/CFusionMX7/runtime/../lib/pbserver42RE.jar;  <br>e:/CFusionMX7/runtime/../lib/pbtools42RE.jar;  <br>e:/CFusionMX7/runtime/../lib/poi-2.5.1-final-20040804.jar;  <br>e:/CFusionMX7/runtime/../lib/poi-contrib-2.5.1-final-20040804.jar; <br>e:/CFusionMX7/runtime/../lib/ri_generic.jar;  <br>e:/CFusionMX7/runtime/../lib/saaj.jar;  <br>e:/CFusionMX7/runtime/../lib/smack.jar;  <br>e:/CFusionMX7/runtime/../lib/smpp.jar;  <br>e:/CFusionMX7/runtime/../lib/STComm.jar; <br>e:/CFusionMX7/runtime/../lib/tools.jar; <br>e:/CFusionMX7/runtime/../lib/tt-bytecode.jar;  <br>e:/CFusionMX7/runtime/../lib/vadmin.jar;  <br>e:/CFusionMX7/runtime/../lib/verity.jar;  <br>e:/CFusionMX7/runtime/../lib/vparametric.jar; <br>e:/CFusionMX7/runtime/../lib/vsearch.jar; <br>e:/CFusionMX7/runtime/../lib/wc50.jar; <br>e:/CFusionMX7/runtime/../lib/webchartsJava2D.jar; <br>e:/CFusionMX7/runtime/../lib/wsdl2java.jar;  <br>e:/CFusionMX7/runtime/../lib/wsdl4j-1.5.1.jar; <br>e:/CFusionMX7/runtime/../lib/wsdl4j.jar; <br>e:/CFusionMX7/runtime/../lib/xalan.jar;<br>e:/CFusionMX7/runtime/../lib/xercesImpl.jar;  <br>e:/CFusionMX7/runtime/../lib/xml-apis.jar; <br>e:/CFusionMX7/runtime/../lib/;<br>e:/CFusionMX7/runtime/../gateway/lib/examples.jar;<br>e:/CFusionMX7/runtime/../gateway/lib/; <br>e:/CFusionMX7/runtime/../wwwroot/WEB-INF/cfform/jars/batik-awt-util.jar; <br>e:/CFusionMX7/runtime/../wwwroot/WEB-INF/cfform/jars/batik-css.jar; <br>e:/CFusionMX7/runtime/../wwwroot/WEB-INF/cfform/jars/batik-ext.jar; <br>e:/CFusionMX7/runtime/../wwwroot/WEB-INF/cfform/jars/batik-transcoder.jar; <br>e:/CFusionMX7/runtime/../wwwroot/WEB-INF/cfform/jars/batik-util.jar; <br>e:/CFusionMX7/runtime/../wwwroot/WEB-INF/cfform/jars/commons-discovery.jar; <br>e:/CFusionMX7/runtime/../wwwroot/WEB-INF/cfform/jars/commons-logging.jar; <br>e:/CFusionMX7/runtime/../wwwroot/WEB-INF/cfform/jars/concurrent.jar; <br>e:/CFusionMX7/runtime/../wwwroot/WEB-INF/cfform/jars/flex.jar; <br>e:/CFusionMX7/runtime/../wwwroot/WEB-INF/cfform/jars/jakarta-oro-2.0.7.jar; <br>e:/CFusionMX7/runtime/../wwwroot/WEB-INF/cfform/jars/jcert.jar;  <br>e:/CFusionMX7/runtime/../wwwroot/WEB-INF/cfform/jars/jnet.jar; <br>e:/CFusionMX7/runtime/../wwwroot/WEB-INF/cfform/jars/jsse.jar; <br>e:/CFusionMX7/runtime/../wwwroot/WEB-INF/cfform/jars/oscache.jar;  <br>e:/CFusionMX7/runtime/../wwwroot/WEB-INF/cfform/jars/;</p><p>Server Classpath<br>e:\CFusionMX7\runtime\servers\lib;<br>e:\CFusionMX7\runtime\servers\lib\jrun-patch.jar;<br>e:\CFusionMX7\runtime\..\lib\macromedia_drivers.jar;<br>e:\CFusionMX7\runtime\lib\cfmx_mbean.jar;<br>e:\CFusionMX7\runtime\lib;<br>e:\CFusionMX7\runtime\lib\cfmx_mbean.jar;<br>e:\CFusionMX7\runtime\lib\instutil.jar;<br>e:\CFusionMX7\runtime\lib\java2wsdl.jar;<br>e:\CFusionMX7\runtime\lib\jrun-ant-tasks.jar;<br>e:\CFusionMX7\runtime\lib\jrun-xdoclet.jar;<br>e:\CFusionMX7\runtime\lib\jrun.jar;<br>e:\CFusionMX7\runtime\lib\jspc.jar;<br>e:\CFusionMX7\runtime\lib\migrate.jar;<br>e:\CFusionMX7\runtime\lib\oem-xdoclet.jar;<br>e:\CFusionMX7\runtime\lib\sniffer.jar;<br>e:\CFusionMX7\runtime\lib\webservices.jar;<br>e:\CFusionMX7\runtime\lib\wsconfig.jar;<br>e:\CFusionMX7\runtime\lib\wsdl2java.jar;<br>e:\CFusionMX7\runtime\lib\xmlscript.jar;<br>e:\CFusionMX7\runtime\lib\jrun.jar</p><p>Java Ext Dirs 	e:\CFusionMX7\runtime\jre\lib\ext</p></div>
	</div>
</div>
		