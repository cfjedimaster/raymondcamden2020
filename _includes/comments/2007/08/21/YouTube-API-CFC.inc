
<div class="comment" id="c_1713670705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670705">1</a> by Tampa ColdFusion
		posted on 8/22/2007 at 7:51 AM
		</div>
		<div class="comment_text"><p>This is downright freaky!  You are reading my mind!  I just googled "YouTube CFC" yesterday and didn't find much.  I looked over their API and thought "hmmm, I could build one... if I ever get the time."</p><p>Thanks for saving me the time!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670706">2</a> by CeeVee
		posted on 8/22/2007 at 6:57 PM
		</div>
		<div class="comment_text"><p>Really cool Ray. How would we sort the results of a keyword search by most recent upload?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670707">3</a> by Raymond Camden
		posted on 8/22/2007 at 6:59 PM
		</div>
		<div class="comment_text"><p>Just use query of query on the results.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670710">4</a> by CeeVee
		posted on 8/22/2007 at 8:02 PM
		</div>
		<div class="comment_text"><p>Thanks for the above response.</p><p>Another simple question... using the getVideosByTag function, how would I get the total # of records returned so I could set up "paging" links? It seems that I need to have a default perpage value. Without the total # of records returned based on my search term, I cannot create the paging links.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670708">5</a> by Raymond Camden
		posted on 8/22/2007 at 9:09 PM
		</div>
		<div class="comment_text"><p>It is not currently in the API.</p><p>FYI, I have a very cool demo I'll be blogging soon. Mixes CF8+YouTube.cfc together.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670709">6</a> by CeeVee
		posted on 8/23/2007 at 4:57 PM
		</div>
		<div class="comment_text"><p>I contacted YouTube API dev forum about finding the total number of records when searching by a tag. Here was their response:</p><p>"Each youtube.videos.list_by_tag response includes the<br><a href="http://disq.us/url?url=http%3A%2F%2Fvideo_list.total%3APUWVWp0VqaOVPywdkArjLjpIiYM&amp;cuid=3321886" rel="nofollow noopener" title="video_list.total">video_list.total</a> element, which contains the total<br>number of records."</p><p>I can't figure out what I need to do using your CFC to view the total number of records. Am I missing something? Could you help?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670711">7</a> by Raymond Camden
		posted on 8/23/2007 at 5:00 PM
		</div>
		<div class="comment_text"><p>My code doesn't support it - so it isn't anyhting you are doing wrong. I'll see if I can add this today. Most likely I will forget to post back here - so watch <a href="http://disq.us/url?url=http%3A%2F%2Fyoutubecfc.riaforge.org%3AIUi9M79gWudBnVl3-fD5HHNWIOE&amp;cuid=3321886" rel="nofollow noopener" title="youtubecfc.riaforge.org">youtubecfc.riaforge.org</a> for the update.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670712">8</a> by CeeVee
		posted on 8/23/2007 at 5:10 PM
		</div>
		<div class="comment_text"><p>Thanks so much! I was pretty sure this was possible. I'm glad you'll be incorporating this.</p><p>BTW, either go buy Bioshock or add to your wishlist. It's amazing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670714">9</a> by Raymond Camden
		posted on 8/23/2007 at 5:15 PM
		</div>
		<div class="comment_text"><p>Bioshock is already on my wishlist - and already bought. :)</p><p>Ok the code is done. I'll be uploading to RIAForge in 5 minutes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670716">10</a> by FALCONSEYE
		posted on 10/16/2008 at 10:46 PM
		</div>
		<div class="comment_text"><p>Hey Raymond,<br>I am trying to use your cfc to upload videos to youtube but got some errors.<br>The cfhttp statement on youtube.cfc line 484 is not returning anything. When I do a cfdump, I see an empty authtoken. Could you please help?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670718">11</a> by Raymond Camden
		posted on 10/16/2008 at 10:50 PM
		</div>
		<div class="comment_text"><p>Falconseye - This was discussed on another blog entry of mine, but there is a bug w/ CF7 and 8 that is blocking this feature. This HAS been fixed by Adobe and Adobe WILL be releasing a hot fix. Once they do, I'll be announcing the hot fix and uploading my latest YouTubeCFC. I was told sometime this week.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670720">12</a> by FALCONSEYE
		posted on 10/16/2008 at 11:41 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond. I got an authtoken back from my upload. My code is :</p><p>&lt;cfset devid = "AI39si4J8K77YGl7yRXabWq9CFb0M-86TcuYFcYlEmnMDv4XL3OtoK7q1N4ApXYC5Y5ntbFurXGCmGi_U8mRy-CdUHezoMLIXQ"&gt;</p><p>&lt;cfset yt = createObject("component", "youtube")&gt;<br>&lt;cfset yt.setDeveloperKey("#devid#")&gt;</p><p>&lt;cfset yt.login("myUserName", "myPassword")&gt;<br>&lt;cfset r = yt.upload('video.wmv','Test Upload','Playing with youtube','Music','testing,fun')&gt;</p><p>This returns no error. When I do the following:</p><p>&lt;cfdump var="#yt.getVideosByUser('myUserName')#" label="Videos by user."&gt;</p><p>The cfdump returns nothing. Do you think this is still caused by the same problem?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670721">13</a> by Raymond Camden
		posted on 10/16/2008 at 11:43 PM
		</div>
		<div class="comment_text"><p>No - but I'd just hold off. The new CFC updates a lot of code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670724">14</a> by Jason Brookins
		posted on 10/20/2008 at 8:31 PM
		</div>
		<div class="comment_text"><p>@Ray:</p><p>Any word on the hotfix for CF7/CF8 from Adobe?</p><p>Also, what is the best way to go about tweaking the YouTube CFC for CF7 usage?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670722">15</a> by Jason Brookins
		posted on 10/20/2008 at 8:35 PM
		</div>
		<div class="comment_text"><p>Another note at the YouTube Developer Site:</p><p>"The APIs accessed by this developer ID program have been deprecated and are no longer supported. To use the new APIs or get information about migrating your applications, please visit the YouTube Developer site at <a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%3AVGle6iGLLvgFNm7m1_fCUZfkKGs&amp;cuid=3321886" rel="nofollow noopener" title="code.google.com">code.google.com</a>."</p><p>Does that impact YouTube CFC?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670727">16</a> by Raymond Camden
		posted on 10/20/2008 at 8:51 PM
		</div>
		<div class="comment_text"><p>@Jason - 1: Not yet. I just checked. I'll give them a day or two and check again. Please feel free to remind me here.</p><p>@Jason - 2: It should be CF7 compat. The hot fix they are releasing will be for CF7 as well. If I did use any CF8 functionality, it was probably by accident and a small snippet like X++, which would need to change to x=x+1.</p><p>@Jason - 3: This was all tested with the new API.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670726">17</a> by Sasha
		posted on 11/12/2008 at 1:50 AM
		</div>
		<div class="comment_text"><p>I checked the demo of this CFC, its really great. BUT, I am unable to find how you display the videos for a search query when youtube gdata returns no videos. For example : "Sizzling Model Scorch The Runway " query on <a href="http://disq.us/url?url=http%3A%2F%2Fyoutube.com%3A4aIaA6RJuiQccDACB0JRR8PvGyQ&amp;cuid=3321886" rel="nofollow noopener" title="youtube.com">youtube.com</a> doesnt return any videos, but it returns the videos for "runway model" and so does your cfc example/demo page, but when I use your cfc files and do the same search, I do not get any videos in return. Please advice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670728">18</a> by Raymond Camden
		posted on 11/12/2008 at 2:12 AM
		</div>
		<div class="comment_text"><p>I see you emailed me directly. I responded there asking for some sample code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670730">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670730">19</a> by Anthony Escribens
		posted on 10/6/2009 at 5:58 AM
		</div>
		<div class="comment_text"><p>Hello Ray!</p><p>First of, great job on youtube.cfc !</p><p>Do you have an example on how to delete a video?  I saw the function on the .cfc page and tried calling it using the following:</p><p>&lt;cfset yt = createObject("component", "/yt/youtube")&gt;<br>&lt;cfset yt.setDeveloperKey("mydevkey")&gt;<br>&lt;cfset yt.login("myusername", "mypassword")&gt;<br>&lt;cfset r = yt.delete('#form.deleteytvideoid#')&gt;</p><p>But it doesn't seem to be working.  I'm only passing the video id as "form.deleteytvideoid".  I am missing anything?</p><p>Thanks!<br>Anthony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670729">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670729">20</a> by Anthony Escribens
		posted on 10/6/2009 at 6:33 AM
		</div>
		<div class="comment_text"><p>Hello Again Ray!  :)</p><p>I found the answer to my question above.</p><p>The url had actually changed to:</p><p>&lt;cfset var theurl = "<a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%2Ffeeds%2Fapi%2Fusers%2F%23variables.username%23%2Fuploads%2F%3Aa5wznoiT9HewwTdCTiHYaK1Z5sA&amp;cuid=3321886" rel="nofollow noopener" title="http://gdata.youtube.com/feeds/api/users/#variables.username#/uploads/">http://gdata.youtube.com/fe...</a>"&gt;</p><p>Now it's working!</p><p>Thanks again for a great code and everything you do for the CF Community!</p><p>- Anthony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670734">21</a> by Raymond Camden
		posted on 10/6/2009 at 8:08 AM
		</div>
		<div class="comment_text"><p>Glad you got it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670732">22</a> by Anthony Escribens
		posted on 10/7/2009 at 4:15 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>When uploading a video, what does it mean when I get this error:</p><p>"YouTubeCFC Upload Error: Domain=yt:validation, Code=too_short"</p><p>Does it have to do with the number of entries into the video name or description?</p><p>Thanks,<br>Anthony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670731">23</a> by Raymond Camden
		posted on 10/7/2009 at 7:33 PM
		</div>
		<div class="comment_text"><p>Sometimes YouTube can be a real pain about the data you sent - especially in the keywords area. Can you send me the code you used to upload? It's probably something in that area.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670736">24</a> by Anthony Escribens
		posted on 10/8/2009 at 3:00 AM
		</div>
		<div class="comment_text"><p>This is the code I ran:</p><p>&lt;cfset yt = createObject("component", "/yt/youtube")&gt;<br>&lt;cfset yt.setDeveloperKey("&lt;key&gt;")&gt;<br>&lt;cfset yt.login("&lt;login&gt;", "&lt;password&gt;")&gt;<br>&lt;cfset r = yt.upload('&lt;path_to_video&gt;','Cow Test Number 3','This is a test description for the new cause/project.','Music','Cow Test Number 3, United States, Charity, Donation, Help, ')&gt;</p><p>- Anthony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670735">25</a> by Raymond Camden
		posted on 10/8/2009 at 9:26 AM
		</div>
		<div class="comment_text"><p>Ahah. The issue is YouTube's freaky keyword parsing. You are not allowed to use a keyword with a space in it. So your "Cow Test Number 3" becomes "Cow,Test,Number,3". 3 is too short for a keyword. Just get rid of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670733">26</a> by Anthony Escribens
		posted on 10/10/2009 at 2:03 AM
		</div>
		<div class="comment_text"><p>Yes, that did the trick.  Thanks again Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670738">27</a> by santosh
		posted on 12/15/2009 at 11:09 AM
		</div>
		<div class="comment_text"><p>hello ray,how can we increment the no.of results more than 25.I have a problem regarding getvideosbycategoryandtag() this function is in the 2007 model of cfc.But in the new  cfc it doesnot exist so i tried it in a different way.First i searched thru the tag and then filtered the results with the category the user has selected.but iam getting less results by doing filtering.By searching thru tag iam getting only 25 video results how to increament it in order to get more results after filtering also.<br>this is my code:<br>&lt;cfset yt = createObject("component", "youtube")&gt;<br>&lt;cfset result = yt.getVideosByTag('#form.tag#')&gt;<br>&lt;!---&lt;cfdump var="#result#"&gt;---&gt;<br>&lt;table width="100%" height="100%" border="0"&gt;<br>&lt;cfoutput&gt;<br>&lt;cfset catname = "#<a href="http://disq.us/url?url=http%3A%2F%2Fform.cat%3A1_DxGYaJ7Gy9Yv2aggnqBazsn1M&amp;cuid=3321886" rel="nofollow noopener" title="form.cat">form.cat</a>#"&gt;<br>&lt;h4&gt;Reslts for Tag : &lt;em&gt;#form.tag#&lt;/em&gt; and Category : &lt;em&gt;#catname#&lt;/em&gt;&lt;/h4&gt;<br>&lt;cfloop query="result" &gt;<br>&lt;cfif catname eq "#result.CATEGORIES#"&gt;<br>&lt;cfset vid=listgetAt('#result.THUMBNAIL_URl#',4, '/')&gt;<br>&lt;tr&gt;&lt;td&gt;Title :  #result.TITLE#&lt;/td&gt;&lt;/tr&gt;<br>&lt;tr&gt;&lt;td&gt;&lt;a href="test_getvideo.cfm?v=#vid#" &gt;&lt;img src="#result.THUMBNAIL_URL#" /&gt;&lt;/a&gt;&lt;/td&gt;&lt;/tr&gt;<br>&lt;/cfif&gt;<br>&lt;/cfloop&gt;<br>&lt;/cfoutput&gt;<br>&lt;/table&gt;</p><p>the function i used is:</p><p>&lt;!---Changed to GDATA yotube API---&gt;<br>&lt;cffunction name="getVideosByTag" access="public" returnType="query" output="false" hint="Searches videos by tag."&gt;<br>	&lt;cfargument name="tag" type="string" required="true"&gt;<br>	&lt;cfargument name="page" type="numeric" required="false" default="1"&gt;<br>	&lt;cfargument name="perpage" type="numeric" required="false" default="40"&gt;</p><p>	&lt;cfset arguments.perpage = pageFix(arguments.perpage)&gt;<br>	&lt;cfreturn getVideos("#variables.rooturl#feeds/api/videos?vq=#urlEncodedFormat(arguments.tag)#&amp;page=#<a href="http://disq.us/url?url=http%3A%2F%2Farguments.page%3A0Fw4DOBsJ-BeUlWgf8cltSXNqNs&amp;cuid=3321886" rel="nofollow noopener" title="arguments.page">arguments.page</a>#&amp;per_page=#arguments.perpage#")&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670737">28</a> by Raymond Camden
		posted on 12/17/2009 at 7:37 AM
		</div>
		<div class="comment_text"><p>I'm not quite sure I understand your issue. Did you try increasing the value used for pagesize? Also remember the YouTube's API itself puts a hard cap in - I think at 50.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670741">29</a> by Misty
		posted on 3/22/2011 at 8:28 PM
		</div>
		<div class="comment_text"><p>Hi ray! I agree with Santosh! Even it shows 239090 records, but after 25 or 50 records whatever its default of showing it, it will not resturn furthur rsults!</p><p>I do not know if this is an issue with API or something else</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670742">30</a> by Raymond Camden
		posted on 3/22/2011 at 8:30 PM
		</div>
		<div class="comment_text"><p>So your're saying you can't get the second page of results? Again - there is a cap PER page you can't go over.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670743">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670743">31</a> by Misty
		posted on 3/22/2011 at 11:29 PM
		</div>
		<div class="comment_text"><p>Well Ray!</p><p>What you exactly mean by "Cap PER Page you can't go over"?</p><p>:(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670745">32</a> by Raymond Camden
		posted on 3/22/2011 at 11:32 PM
		</div>
		<div class="comment_text"><p>Google limits how many results you can get in one request. Not sure how else to say it. You may have 500 videos, but you can only get 50 at a time. Note - I'm not saying the limit is 50, I'm just giving an example. So to get videos 51-100, you would ask for the second page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670747">33</a> by Misty
		posted on 3/22/2011 at 11:40 PM
		</div>
		<div class="comment_text"><p>Yeah Pretty right, but how would i ask the api to give me next batch of records, also i was just comparing your previous youtube CFC with new Youtube CFC i found, in the new one you have removed the function</p><p>getMostLinkedVideos()</p><p>whay so! is that function is of no more usage</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670746">34</a> by Misty
		posted on 3/22/2011 at 11:40 PM
		</div>
		<div class="comment_text"><p>Yeah Pretty right, but how would i ask the api to give me next batch of records, also i was just comparing your previous youtube CFC with new Youtube CFC i found, in the new one you have removed the function</p><p>getMostLinkedVideos()</p><p>whay so! is that function is of no more usage</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670749">35</a> by Raymond Camden
		posted on 3/22/2011 at 11:45 PM
		</div>
		<div class="comment_text"><p>First off, which API are you using. I did not build in support for paging in all of them. I did for getVideosBySearch though. In it there is an attribute "start" that defines what value you start with. So you would use that to get the next page of items.</p><p>As for getMostLinkedVideos - it may have been removed by YouTube's API. If it still exists I could add it back end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670750">36</a> by Misty
		posted on 3/22/2011 at 11:49 PM
		</div>
		<div class="comment_text"><p>Yes! i am taking about the search page, not about anything else!</p><p>because search can return me 500+ records, so your say i fetched 50 records and displayed on a page,</p><p>then i clicked again next and it again ran the query and fetched next records, but what parameters i pass so it start from next onwards, any IDEA</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670748">37</a> by Raymond Camden
		posted on 3/22/2011 at 11:50 PM
		</div>
		<div class="comment_text"><p>I just told you. The CFC method takes an argument, Start, that defines where to start. So if you got 50 back and see that 500+ exist, you call the CFC again and ensure you pass start=51.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670751">38</a> by Misty
		posted on 3/22/2011 at 11:53 PM
		</div>
		<div class="comment_text"><p>hmm! Will try it out &amp; check if it works or not, will post later</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670753">39</a> by Misty
		posted on 3/23/2011 at 8:27 AM
		</div>
		<div class="comment_text"><p>Well! ray, i could find a way to do it!</p><p>I hope you might have some IDEA which you would like to share</p><p>if not then this cannot be an easy way out</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670752">40</a> by Raymond Camden
		posted on 3/23/2011 at 2:49 PM
		</div>
		<div class="comment_text"><p>I'm confused. Did you use the start argument? It should just plain work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670754">41</a> by Misty
		posted on 3/24/2011 at 10:38 AM
		</div>
		<div class="comment_text"><p>i used but i have no idea how it will work</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670757">42</a> by Raymond Camden
		posted on 3/24/2011 at 3:14 PM
		</div>
		<div class="comment_text"><p>Misty, I'm sorry, but I do not know what to tell you. I've said multiple times now how the argument works. Do you know how to call methods in ColdFusion and pass arguments at all? If not - it may make sense to review some of the basic documentation.</p><p>Can you show me how you are calling my CFC with the start parameter?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670758">43</a> by Misty
		posted on 3/25/2011 at 12:06 AM
		</div>
		<div class="comment_text"><p>yep! I know what u are taking about and i know how to call/pass arguments!</p><p>here what i am doing!</p><p>&lt;cfif IsDefined('url.showNext') AND url.showNext IS NOT 0&gt;<br>	&lt;cfset mostRecent = #yt.getRecentlyFeaturedVideos(#url.showNext#,#url.showNext#)#&gt;<br>&lt;cfelse&gt;<br>	&lt;cfset mostRecent = #yt.getRecentlyFeaturedVideos()#&gt;    <br>&lt;/cfif&gt;</p><p>at the end i am just doing a recordcount so it should count the records on page and then add the nbext 50 or 25 in it, i might be wrong the way i am doing, but that is all what i found!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670760">44</a> by Raymond Camden
		posted on 3/25/2011 at 12:07 AM
		</div>
		<div class="comment_text"><p>And url.shownext is 50? Or some other number?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670764">45</a> by Misty
		posted on 3/25/2011 at 8:16 AM
		</div>
		<div class="comment_text"><p>it is a number, on first page, it will show 25 as ur api says 25 is default maximum is 50, so recount comes to 25 and then again it queries the cfc to start from 25 onwarsd ro next 25 but i am not sure it is working fine or not!</p><p>i tested it a bit was not working as i expected,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670761">46</a> by Raymond Camden
		posted on 3/25/2011 at 6:23 PM
		</div>
		<div class="comment_text"><p>I'm having a hard time parsing your last comment. Are you saying you passed 25,25 (ie, start at 25 and show 25), and the results were the exact same? That would mean paging is broken. You said you weren't sure - so please double check.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670768">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670768">47</a> by Raymond Camden
		posted on 3/25/2011 at 6:26 PM
		</div>
		<div class="comment_text"><p>I just ran a test:</p><p>&lt;cfset vids = yt.getRecentlyFeaturedVideos()&gt;<br>&lt;cfdump var="#vids#"&gt;<br>&lt;cfset vids = yt.getRecentlyFeaturedVideos(25)&gt;<br>&lt;cfdump var="#vids#"&gt;</p><p>and the second dump shows results 25-50. It's working. I'm not sure what else to tell you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670763">48</a> by Jacob
		posted on 4/7/2011 at 10:10 PM
		</div>
		<div class="comment_text"><p>Hi, I have made a test online and local and in both I receive this error "An error occured while Parsing an XML document.<br>Premature end of file"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670762">49</a> by Raymond Camden
		posted on 4/8/2011 at 5:29 PM
		</div>
		<div class="comment_text"><p>Interesting. Can you debug the CFC a bit log the response from the http call?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670766">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670766">50</a> by Mark
		posted on 11/22/2012 at 4:38 AM
		</div>
		<div class="comment_text"><p>Just tried it running CF9:</p><p>An error occured while Parsing an XML document.  <br>Premature end of file.</p><p>The error occurred in C:\web\freetabs\youtube\youtube.cfc: line 60</p><p>58 : 	<br>59 : 	&lt;cfhttp url="#variables.rooturl#youtube.users.get_profile&amp;user=#urlEncodedFormat(arguments.user)#" result="result"&gt;<br>60 : 	&lt;cfset xresult = xmlParse(result.fileContent)&gt;<br>61 : <br>62 : 	&lt;cfif structKeyExists(xresult.ut_response, "error")&gt;</p><p>Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670765">51</a> by Mark
		posted on 11/22/2012 at 4:50 AM
		</div>
		<div class="comment_text"><p>Really all I am hoping to do is to check YouTube to see if a video still exists. I have a database with YouTube codes, but don't want to render the embedd code if the video is no longer online. So some sort of call like your example #yt.getVideo('3rz5L0LYRqI')#" . Not sure how to do this? Maybe &lt;cfif #yt.getVideo('3rz5L0LYRqI')# IS NOT ""&gt;?<br>Can't really experiment as I am getting the error as noted in the above comment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670769">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670769">52</a> by Raymond Camden
		posted on 11/22/2012 at 7:02 AM
		</div>
		<div class="comment_text"><p>1) Try to cfdump result and see what it is.</p><p>2) So yes, getVideo should throw an error for an invalid/non-existent ID. It should.</p><p>Although - does your problem with 1 go away if you use a video ID you _know_ is good?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670770">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670770">53</a> by Mark
		posted on 11/25/2012 at 12:30 AM
		</div>
		<div class="comment_text"><p>Can't get past the: "An error occured while Parsing an XML document. Premature end of file. " regardless of whether it's a valid YouTube video or not. Guess I've have to seek out a different way to do this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713670771">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713670771">54</a> by Raymond Camden
		posted on 11/25/2012 at 1:40 AM
		</div>
		<div class="comment_text"><p>Don't give up. Did you see where I said to cfdump? That will tell you what was returned and will help explain why the xmlParse is failing.</p></div>
	</div>
</div>
		