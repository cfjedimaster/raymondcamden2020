
<div class="comment" id="c_1713679760">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679760">1</a> by Bob
		posted on 4/20/2008 at 8:00 AM
		</div>
		<div class="comment_text"><p>Hey Ray, this is great - thank you! I was wondering if you planned to add a GetVideo function akin to the one in the CFC with the first API, so that you could grab all of the data about a specific video.</p><p>Regardless, this is really helpful - thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679754">2</a> by Geoff
		posted on 4/20/2008 at 3:40 PM
		</div>
		<div class="comment_text"><p>Great CFC Ray! I have a quick question about error trapping on cfhttp.</p><p>I'm always concerned about timeouts / problems connecting to third party services - how would getVideos() tell the calling app "sorry, I couldn't contact the youtube website"</p><p>Could (should?) you change getVideos() to return a struct - one key has the results recordset, and one key has a "statuscode" message maybe?</p><p>Then put a timeout on the cfhttp call, and try/catch it?</p><p>just a thought...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679757">3</a> by Raymond Camden
		posted on 4/20/2008 at 5:42 PM
		</div>
		<div class="comment_text"><p>I should have more error handling, but no, I don't believe in returning structs like that. I know some folks do - but in my mind, if an error occurs, I should cfthrow. However, I like to throw my own error, using a common type and message format, so you can look for it in the code that calls my cfc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679755">4</a> by Raymond Camden
		posted on 4/20/2008 at 5:45 PM
		</div>
		<div class="comment_text"><p>@Bob - the odd thing is that what getVideo used to do is mostly contained in the get* feeds. Ie, when you get a list of videos, it contains the same info, per video, that a singular getVideo would contain. I believe. I don't believe - and I have to research this more - that you can get just ONE video based on ID. I meant to actually look into that last night but forgot. I'll make that my next priority.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679756">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679756">5</a> by Bob
		posted on 4/20/2008 at 6:35 PM
		</div>
		<div class="comment_text"><p>Thanks Ray. This morning I just used CFHTTP to grab and then XMLParse() to parse the individual video XML page at <a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%2Ffeeds%2Fapi%2Fvideos%2F%28videoID%29%3AK0cv3RapN7JVgRg1FCi1WM6HVds&amp;cuid=3321886" rel="nofollow noopener" title="http://gdata.youtube.com/feeds/api/videos/(videoID)">http://gdata.youtube.com/fe...</a>. It's doing the job.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679759">6</a> by Raymond Camden
		posted on 4/21/2008 at 3:10 AM
		</div>
		<div class="comment_text"><p>I didn't read the whole spec, but I do remember trying to find docs for getitng one video. Where did you find that? (I'm sure it works and I'll confirm/add it later, but I'd like to be sure it is SUPPOSED to work if you know what I mean.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679758">7</a> by Bob
		posted on 4/21/2008 at 6:19 AM
		</div>
		<div class="comment_text"><p>I actually used your CFC to pull the list of videos for the user. The ID column contained the feed URL for each video, which I pulled up in Firefox and found the detailed XML. So no, I can't confirm it's SUPPOSED to work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679763">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679763">8</a> by Raymond Camden
		posted on 4/21/2008 at 5:28 PM
		</div>
		<div class="comment_text"><p>I did some more looking last night, and it does seem to be kinda documented - when you look specifically at the Entry field it does talk about the links.</p><p>So I will add this later today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679764">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679764">9</a> by jason
		posted on 6/24/2008 at 8:06 AM
		</div>
		<div class="comment_text"><p>hi, great tool, but i can't seem to make it work.</p><p>trying the test2.cfm file in the youtubeapi1 folder and keep getting "Bad, unknown, or disabled dev_id specified."</p><p>i want to test the upload function and can't get started.</p><p>the cfc is installed and i have a valid dev key.</p><p>any advice or other documentation? where to start with uploads?</p><p>thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679761">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679761">10</a> by Raymond Camden
		posted on 6/24/2008 at 11:50 AM
		</div>
		<div class="comment_text"><p>Don't use the youtubeapie1 folder. That's the older code. I include it for folks who may insist upon it - but in general don't support it anymore. Make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679762">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679762">11</a> by Louis Plante
		posted on 9/23/2008 at 4:03 AM
		</div>
		<div class="comment_text"><p>Hey Ray, excellent work on the api, i have one question though. I wanted to order the videos by the newest to the oldest. Here is the code that I'm using</p><p>&lt;cfset yt = createObject("component", "<a href="http://disq.us/url?url=http%3A%2F%2Fassets.cfcs.youtube%3Arb1qrmts5qQfCyUxs3Fxp9qVMMk&amp;cuid=3321886" rel="nofollow noopener" title="assets.cfcs.youtube">assets.cfcs.youtube</a>")&gt;<br>&lt;cfset pl = yt.getVideosByUser('marjenningstv')&gt;</p><p>any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679765">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679765">12</a> by Raymond Camden
		posted on 9/23/2008 at 4:48 AM
		</div>
		<div class="comment_text"><p>My CFC returns a query. If you want to re-order it, you can use a query of query. I can investigate, later on, adding sorting.</p><p>FYI - upload is currently broken. I hope to have it fixed w/n a week. It turns out there is a bug in CF that only gets exposed with the YT api.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679890">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679890">13</a> by Greg E.
		posted on 10/14/2008 at 2:12 AM
		</div>
		<div class="comment_text"><p>Hi Ray, Do you have any documentation or examples on uploading videos? This is what I have at this point and the results follow: (thanks for your help and this .cfc)</p><p>&lt;cfinvoke component="youtube" method="init" returnvariable="yt"&gt;&lt;cfinvokeargument name="devkey" value="#request.YouTubeDeveloperKey#"&gt;&lt;/cfinvoke&gt;</p><p>&lt;cfdump var="#yt.upload(video='#cffile.SERVERDIRECTORY#\#cffile.SERVERFILE#',title='Upload Test',description='Testing',categories='Education',keywords='YouTube ColdFusion')#"&gt;</p><p>Upload Result:<br>--------------<br>ErrorDetail: I/O Exception: Software caused connection abort: socket write error<br>Filecontent: Connection Failure<br>Mimetype: Unable to determine MIME type of file.<br>Statuscode: Connection Failure. Status code unavailable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679891">14</a> by Raymond Camden
		posted on 10/14/2008 at 2:17 AM
		</div>
		<div class="comment_text"><p>Greg - video uploads is currently broken. I have worked w/ Adobe and there IS a fix, but the fix involves a hot fix that is not yet released to the public. I'm going to bug them again about that and see when it will go public.</p><p>Long story short: You can't do the upload now- period. But you will be able to with a hotfix sometime in the (I would assume!) near future.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679894">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679894">15</a> by aviva
		posted on 12/1/2008 at 3:29 AM
		</div>
		<div class="comment_text"><p>i found the hotfix:<br><a href="http://disq.us/url?url=http%3A%2F%2Fkb.adobe.com%2Fselfservice%2FviewContent.do%3FexternalId%3Dkb406660%3AcrYKNkKZB6-igynWDGFwUU9BV64&amp;cuid=3321886" rel="nofollow noopener" title="http://kb.adobe.com/selfservice/viewContent.do?externalId=kb406660">http://kb.adobe.com/selfser...</a></p><p>but i get an error when trying to upload:<br>the error is in your cfc, trying to read an error.</p><p>can you give an example of the code needed to upload a video?</p><p> Element ERRORS.ERROR.DOMAIN.XMLTEXT is undefined in RESXML.</p><p>The error occurred in /home/mylifesp/dev_html/my-account/youtube.cfc: line 691</p><p>689 : 			&lt;cfset resxml = xmlParse(result.fileContent)&gt;<br>690 : 			<br>691 : 			 &lt;cfthrow message="YouTubeCFC Upload Error: Domain=#resxml.errors.error.domain.xmlText#, Code=#resxml.errors.error.code.xmlText#"&gt; <br>692 : 		&lt;cfelse&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679900">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679900">16</a> by Raymond Camden
		posted on 12/1/2008 at 3:40 AM
		</div>
		<div class="comment_text"><p>The only real 'doc' for upload is by reading the CFC method and looking at the arguments. Can you show me how you tried to do an upload?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679897">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679897">17</a> by Derek
		posted on 12/22/2008 at 8:27 PM
		</div>
		<div class="comment_text"><p>I noticed it says you need a dev key and YT username and pwd, but in the api docs it says</p><p>Both the Client ID and Developer Key should be provided in every API request (see Using a developer key and client ID). Each application/product should have its own unique Developer Key and Client ID.<br><a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fapis%2Fyoutube%2Fdashboard%2FproductSignup%3AVu0wbsVvuFgAKRE2WSYw218OzmI&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/apis/youtube/dashboard/productSignup">http://code.google.com/apis...</a></p><p>Has it changed since the last update?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679895">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679895">18</a> by Raymond Camden
		posted on 12/22/2008 at 8:36 PM
		</div>
		<div class="comment_text"><p>I think ClientID is the name of the 'tool' using the service, which in this case is my tool, and is hard coded in the CFC. So basically, you don't need to worry about it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679901">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679901">19</a> by Derek
		posted on 12/22/2008 at 8:37 PM
		</div>
		<div class="comment_text"><p>ahh..ok so they aren't tied together?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679898">20</a> by Raymond Camden
		posted on 12/22/2008 at 8:40 PM
		</div>
		<div class="comment_text"><p>No, it's like your cell phone. Your phone number is unique to you, but your brand name is iPhone. So my code's "brand" is, um, whatever I used (probably something with Camden in it since I'm an egotistical twit), and the dev key is what you are responsible for.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679899">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679899">21</a> by Derek
		posted on 1/15/2009 at 7:50 PM
		</div>
		<div class="comment_text"><p>ok, back again. This issue is related to just retrieving videos. <br>Everything was working at first. Then I started getting connection failures. I did some testing and by removing the V2 param, I got it working again.</p><p>So now the past couple of days it is no longer working on the prod server which is 7,0,2,142559 , but works fine on 8 from my home dev box.</p><p>Charset  	 [empty string]<br>ErrorDetail 	Unknown host: <a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%3AFxQ6ki109f4cNNMjf7aXbxK_LUg&amp;cuid=3321886" rel="nofollow noopener" title="gdata.youtube.com">gdata.youtube.com</a>: <a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%3AFxQ6ki109f4cNNMjf7aXbxK_LUg&amp;cuid=3321886" rel="nofollow noopener" title="gdata.youtube.com">gdata.youtube.com</a><br>Filecontent 	Connection Failure<br>Header 	[undefined struct element]<br>Mimetype 	Unable to determine MIME type of file.<br>Responseheader 	<br>struct [empty]<br>Statuscode 	Connection Failure. Status code unavailable.<br>Text 	YES</p><p>here is a test page I am using<br><a href="http://disq.us/url?url=http%3A%2F%2Fjusts10.com%2Fvideos%2Ft.cfm%3A7I70VFTFcQaMNalQ4wiZLf2nRKc&amp;cuid=3321886" rel="nofollow noopener" title="http://justs10.com/videos/t.cfm">http://justs10.com/videos/t...</a></p><p>If anyone could help, be mucho appreciated.</p><p>Thanks,<br>D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679902">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679902">22</a> by Raymond Camden
		posted on 1/15/2009 at 8:08 PM
		</div>
		<div class="comment_text"><p>Unfortunately this sounds like a Google/YT issue. I'm not sure what I can recommend for that. Removing the v2 param isn't a solution for me as I know I'm relying on some v2 stuff in some calls. You may want to check the network settings on production box.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679903">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679903">23</a> by Lamar
		posted on 2/5/2009 at 1:16 AM
		</div>
		<div class="comment_text"><p>Ray - trying to use the upload capability but am a little clueless as to where to start. Any sample code you have for uploading?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679906">24</a> by Raymond Camden
		posted on 2/5/2009 at 1:18 AM
		</div>
		<div class="comment_text"><p>Wasn't there one in the zip?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679905">25</a> by Raymond Camden
		posted on 2/5/2009 at 1:22 AM
		</div>
		<div class="comment_text"><p>Here is an example, with login/key info changed:</p><p>&lt;cfset yt = createObject("component", "youtube")&gt;<br>&lt;cfset yt.setDeveloperKey("AI39n2n17CzpcDAt6GMrXc8z6DA")&gt;<br>&lt;cfset yt.login("cfjedimaster", "password")&gt;<br>&lt;cfset r = yt.upload(expandPath('./<a href="http://disq.us/url?url=http%3A%2F%2Factual.mov%3AdqZgcVXZsaFAOHVTvCbrThAzvbc&amp;cuid=3321886" rel="nofollow noopener" title="actual.mov">actual.mov</a>'),'Test/Upload Jack-O-Latern','Playing/with Jack-O-Latern youtube aug29','Music','testing fun')&gt;<br>&lt;cfoutput&gt;id=#r#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679907">26</a> by tj
		posted on 9/3/2009 at 6:30 PM
		</div>
		<div class="comment_text"><p>Hi Ray - great component.</p><p>Everything is working just as it should with the exception of the upload. I used the example upload code you supplied (altered to my id, login and video location) and I'm getting the:<br>Element ERRORS.ERROR.DOMAIN.XMLTEXT is undefined in RESXML.</p><p>Any thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679908">27</a> by tj
		posted on 9/3/2009 at 6:43 PM
		</div>
		<div class="comment_text"><p>So I just had it return resXML and it appears it does not like my DeveloperKeyID...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679909">28</a> by Raymond Camden
		posted on 9/5/2009 at 1:44 AM
		</div>
		<div class="comment_text"><p>Looks like my error handling could be nicer. Did you get a new dev id though?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679910">29</a> by tj
		posted on 9/5/2009 at 4:48 AM
		</div>
		<div class="comment_text"><p>Yep - working great. Great component and allows me to put off the purchase of a media encoder... for now anyways.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679911">30</a> by Misty
		posted on 9/28/2009 at 11:51 AM
		</div>
		<div class="comment_text"><p>Ok! Very Nice Work Ray!</p><p>One last question does not it return rows more than 25 either try to fetch by category or keywords:</p><p>Just curious</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679916">31</a> by Raymond Camden
		posted on 9/28/2009 at 3:13 PM
		</div>
		<div class="comment_text"><p>According to the getVideosBySearch function, there is a max attribute which defaults to 25, but can go up to 50. You can paginate by using the start attribute.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679918">32</a> by Shaveta
		posted on 9/28/2009 at 7:27 PM
		</div>
		<div class="comment_text"><p>Hi ray! when i try to use getplaylist, it just keeps on loading:</p><p>i am just using getplaylist, not getplaylists</p><p>is there any example to that</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679917">33</a> by Raymond Camden
		posted on 9/28/2009 at 7:28 PM
		</div>
		<div class="comment_text"><p>Are you saying getPlaylist() never finishes? If so, can you tell me the playlist ID you tried?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679919">34</a> by Shaveta
		posted on 9/29/2009 at 6:36 AM
		</div>
		<div class="comment_text"><p>well i never did tried any ID:</p><p>i just used #yt.getplaylist#</p><p>and it keeps on loading. how can i know in youtube playlists</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679920">35</a> by Misty
		posted on 9/29/2009 at 6:42 AM
		</div>
		<div class="comment_text"><p>Thanks Ray! but for all functions it only returns 25, it something needs to be reworked to make it work to fetch all. and once it fetches all, pagination can be donr</p><p>Regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679922">36</a> by Raymond Camden
		posted on 9/29/2009 at 7:08 AM
		</div>
		<div class="comment_text"><p>@Shaveta: Errr - that's not how you call a method. Have you used CFCs before?</p><p>@Misty: It only returns 25 if you don't set a max attribute. You can set it to 50. Also, look at the result query. It tells you how many total items there are. With that, you can build your own pagination.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679923">37</a> by Shaveta
		posted on 9/29/2009 at 8:02 AM
		</div>
		<div class="comment_text"><p>Yes! i have used CFC's Before but when i see you playlists example: first you are calling a getplaylists function with pasing yourname and then u did the recordcount and then purl=[1] so the second part is bit ambigious as to u passed it 1. will playlists be visible only for a specific user and not for all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679921">38</a> by Misty
		posted on 9/29/2009 at 9:55 AM
		</div>
		<div class="comment_text"><p>Alright:<br>i am fetching the gettopratedvideos, when i run it, it just returns 25 results, if u can show me a viable example here, I shall be nice. i wanna get all results and show like 1 to 10 of 3773438 results:, then i can add my pagination. currently i am bit confused as there seems to me no result query in cfc which does that stuff</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679924">39</a> by Raymond Camden
		posted on 9/29/2009 at 3:17 PM
		</div>
		<div class="comment_text"><p>I don't think you are listening Misty. :) Did you look at the query result? Did you see the total number of results returned? It is in the column: total. So if you have the total _possible_, and you have the ability to pass in a start argument, then you have everything you need.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679925">40</a> by Raymond Camden
		posted on 9/29/2009 at 3:47 PM
		</div>
		<div class="comment_text"><p>@Shaveta: My demo code first gets all of them - this is a query. So when I then call getPlaylist, I'm simply passing in the first URL. I don't pass 1, I pass the value of the purl column, row 1. If this doesn't work for you, please share the code you used.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679926">41</a> by Shaveta
		posted on 9/29/2009 at 4:58 PM
		</div>
		<div class="comment_text"><p>in this first i tried my code which apparently did not worked. then i used you example and same did a copypaste. i did returned 2 results by your names but after that it gave me error</p><p>the error i encountered is</p><p>The web site you are accessing has experienced an unexpected error.<br>Please contact the website administrator.</p><p>The following information is meant for the website developer for debugging purposes.<br>Error Occurred While Processing Request<br>Element ENTRY.CONTENT.XMLTEXT is undefined in ARGUMENTS.</p><p>The error occurred in C:\inetpub\wwwroot\project2\admin\com\youtube.cfc: line 392<br>Called from C:\inetpub\wwwroot\project2\admin\com\youtube.cfc: line 167<br>Called from C:\inetpub\wwwroot\project2\admin\com\youtube.cfc: line 83<br>Called from C:\inetpub\wwwroot\project2\playlist.cfm: line 8</p><p>390 : 	&lt;cfset s.categories = categoryList&gt;<br>391 : 	&lt;cfset s.title = arguments.entry.title.xmlText&gt;<br>392 : 	&lt;cfset s.content = arguments.entry.content.xmlText&gt;<br>393 : 	&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fs.author%3A8v0PqZItyF6Y3IDvEXIKNWsJ5OM&amp;cuid=3321886" rel="nofollow noopener" title="s.author">s.author</a> = arguments.entry.author.name.xmlText&gt;<br>394 : 	&lt;cfset s.authorurl = entry.author.uri.xmlText&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679927">42</a> by Raymond Camden
		posted on 9/29/2009 at 5:06 PM
		</div>
		<div class="comment_text"><p>Having a hard time understanding you. Did you say one of my samples failed? Or did you modify it? If it was my sample, tell me the filename. If you modified it, please email me (ray at camdenfamily dot com) the script.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679928">43</a> by shaveta
		posted on 9/29/2009 at 5:06 PM
		</div>
		<div class="comment_text"><p>I noted one thing i used this and it gave me another error:</p><p>&lt;cfset yt = createObject("component", "youtube")&gt;<br>&lt;cfset pl = yt.getPlaylists("PhilipDeFranco")&gt;</p><p>&lt;cfdump var="#pl#"&gt;</p><p>&lt;cfif pl.recordCount&gt;<br>	&lt;cfset plurl = pl.url[1]&gt;<br>	&lt;cfdump var="#yt.getPlaylist(plurl)#"&gt;<br>&lt;/cfif&gt;</p><p>Error i got</p><p> Element FEED.ENTRY is undefined in RESULT.</p><p>The error occurred in C:\inetpub\wwwroot\project2\admin\com\youtube.cfc: line 98</p><p>96 : 	&lt;cfhttp url="#baseurl#" result="result"&gt;<br>97 : 	&lt;cfset result = xmlParse(result.filecontent)&gt;<br>98 : 	&lt;cfif not arrayLen(result.feed.entry)&gt;<br>99 : 		&lt;cfreturn results&gt;<br>100 : 	&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679929">44</a> by shaveta
		posted on 9/29/2009 at 5:10 PM
		</div>
		<div class="comment_text"><p>I just coped from you demo file:</p><p>test_getplaylists.cfm and ran it but encountered above errors. if i change the users' name it shows</p><p>Element FEED.ENTRY is undefined in RESULT. error.</p><p>i have changed nothing in youtube.cfc code. i am just running it as copied from your demo folder and that's it</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679930">45</a> by Raymond Camden
		posted on 9/29/2009 at 8:39 PM
		</div>
		<div class="comment_text"><p>I confirmed this bug. The issue was that the playlist had no videos, and the check for that was wrong. I also found another bug as well. I've uploaded the new CFC to:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdownloads%2Fyoutubecfc.sep29.zip%3A-WwvuwZucWxDD14RYnMx3JA8VxE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/downloads/youtubecfc.sep29.zip">http://www.coldfusionjedi.c...</a>.</p><p>Please download and confirm. Once you do, I will update the main project.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679931">46</a> by shaveta
		posted on 9/29/2009 at 8:43 PM
		</div>
		<div class="comment_text"><p>I am unable to download it</p><p>Please check the url again for download</p><p>Regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679932">47</a> by shaveta
		posted on 9/29/2009 at 8:44 PM
		</div>
		<div class="comment_text"><p>Getting this Error:</p><p>404 - File or directory not found.<br>The resource you are looking for might have been removed, had its name changed, or is temporarily unavailable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679934">48</a> by Raymond Camden
		posted on 9/29/2009 at 8:46 PM
		</div>
		<div class="comment_text"><p>Try</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdownloads%2Fyoutube.sep29.zip%3AiNttMHQ1yNfij3Q0iJfb0zSWl-Q&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/downloads/youtube.sep29.zip">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679933">49</a> by shaveta
		posted on 9/29/2009 at 9:11 PM
		</div>
		<div class="comment_text"><p>Awesome! Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679935">50</a> by Raymond Camden
		posted on 9/29/2009 at 9:14 PM
		</div>
		<div class="comment_text"><p>Please be sure to let me know if it works. Then I can update the official release.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679936">51</a> by Misty
		posted on 9/30/2009 at 5:29 AM
		</div>
		<div class="comment_text"><p>Hi! I tried your way saying use of Max attribute but really I am lost how do i make it work to fetch all videos not only limited to 25 only. plz plz.</p><p>just let me know one example like gettopratedtags video or any other. it should all videos not only 25 please</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679937">52</a> by Raymond Camden
		posted on 9/30/2009 at 5:34 AM
		</div>
		<div class="comment_text"><p>Misty, I'm not going to write the entire thing for you. I gave you the basics. You have a start argument and you know the total # of results. Your code basically needs to use pagination. Here is an example that is similar: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2006%2F4%2F24%2FColdFusion-and-Pagination%3Aeqj1z9WKrFxMOlM15zTaOCcyv4I&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2006/4/24/ColdFusion-and-Pagination">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679942">53</a> by Misty
		posted on 9/30/2009 at 6:38 AM
		</div>
		<div class="comment_text"><p>I successfully build up the pagination. it has been a no worry. the only issues which is making me think again &amp; gain is that when i do like gettoprated or other it defaults to 25 only. i added the pagination showing 1 to 10 of 25. so my question is hardly it matters to paginate it returns only 25 not more.</p><p>while i am trying to get all related to that function gettoprated</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679940">54</a> by Raymond Camden
		posted on 9/30/2009 at 6:40 AM
		</div>
		<div class="comment_text"><p>@Misty: Um.... are you saying you have pagination working, but you want to show 50 per page, not 25?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679945">55</a> by Misty
		posted on 9/30/2009 at 7:00 AM
		</div>
		<div class="comment_text"><p>When i fetch results, It shows to me only 25. I use cfdump but it restricts itself to only 25 while i am looking forward to fetch all the topratedvideos.</p><p>suppose 100 topratedvideos are listed on youtube, i ran query it just returned 25. i have added pagination but it has restricted itself to 25 only, while i want the ful youtube 100 listings as on youtube. The same is the case with all queries.</p><p>Maybe i am able to clarify what exactly my point is</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679944">56</a> by Raymond Camden
		posted on 9/30/2009 at 7:07 AM
		</div>
		<div class="comment_text"><p>Ah, I think I see what you mean. Only the Search API now supports max/start. My funcs for 'get so and so' do not. I'll look at adding in that as well, but no promises yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679949">57</a> by Misty
		posted on 9/30/2009 at 7:46 AM
		</div>
		<div class="comment_text"><p>No Problem!</p><p>I am happy i am able to pinpoint my message clearly to you</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679947">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679947">58</a> by Raymond Camden
		posted on 9/30/2009 at 5:08 PM
		</div>
		<div class="comment_text"><p>Please download</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fdownloads%2Fyoutube.sep30.zip%3AGjMRAjRchM6BLIyV6Faso7jPJ2Q&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/downloads/youtube.sep30.zip">http://www.coldfusionjedi.c...</a></p><p>It contains updates to support max/start for the 'top' video type searches. Note max still has a MAX value of 100.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679948">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679948">59</a> by Misty
		posted on 10/1/2009 at 5:20 AM
		</div>
		<div class="comment_text"><p>Thanks Ray! Looking forward to this to gets more support for this youtube CFC. Its an Awesome tag you have done a Great Great job.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679946">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679946">60</a> by Misty
		posted on 10/1/2009 at 6:07 AM
		</div>
		<div class="comment_text"><p>I noted one thing. It shows 1 to 10 of total of 100. but it counts only to 50.</p><p>i mean API does not go beyong 50 records for every function</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679951">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679951">61</a> by Raymond Camden
		posted on 10/1/2009 at 6:08 AM
		</div>
		<div class="comment_text"><p>Did you try the start argument?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679950">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679950">62</a> by Misty
		posted on 10/1/2009 at 7:12 AM
		</div>
		<div class="comment_text"><p>Yes Id did. i passsed it like:</p><p>getTopratedvideos("jshjsdsd",1,50)</p><p>it retur 50 recs</p><p>if try</p><p>getTopratedvideos("jshjsdsd",1,100)</p><p>it automatically comes to 25</p><p>so i have checked it does fetch more than 50, maybe issue with youtube api fetching results</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679954">63</a> by Raymond Camden
		posted on 10/1/2009 at 7:14 AM
		</div>
		<div class="comment_text"><p>Right, because the MAX is 50. When you set it to 100 it was too much. Keep it at 50 max.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679952">64</a> by Misty
		posted on 10/1/2009 at 7:18 AM
		</div>
		<div class="comment_text"><p>am i skipping something big, you aid start argument. do i need to pass the start dynamically at the end of first 50 records and then start the next from 51st. is that so</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679956">65</a> by Raymond Camden
		posted on 10/1/2009 at 7:21 AM
		</div>
		<div class="comment_text"><p>When you run the query the first time, you should START with 1 and ask for 50 records. Check the TOTAL column in the query. If it is more than 50, then you need to call the CFC again, this time with 1+50, but the same max. Ie, start with 51 and get 50 rows. This will return the next 50.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679957">66</a> by Misty
		posted on 10/1/2009 at 11:03 AM
		</div>
		<div class="comment_text"><p>I have this when i searched: Displaying 1 to 12 of 1000000 Records.</p><p>now if i use like this:<br>&lt;cfset query = #yt.getVideosBySearch("song",1,50)#&gt;</p><p>Element FEED is undefined in PACKET.</p><p>if i remove 1,50, it shows records but only 25. i think i have very hard time locating this that if i return total of 1000000. i can use it can get max of 50 in one shift and that shift also needs pagination to say 10 in a row.</p><p>question arises. when it reached end of the 50, how does it know to run th cfc again to get another. i think i am doing wrong</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679958">67</a> by Misty
		posted on 10/1/2009 at 11:10 AM
		</div>
		<div class="comment_text"><p>error, i found and removed but below the error the confusion still remains</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679960">68</a> by Raymond Camden
		posted on 10/1/2009 at 3:38 PM
		</div>
		<div class="comment_text"><p>The CFC doesn't do it for you. You have to do it. As I described - you check the TOTAL value (not the number of records in the column, but the TOTAL column) and if you SEE that more exist, you build links to load the next page. It is a manual process.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679959">69</a> by Raymond Camden
		posted on 10/1/2009 at 5:14 PM
		</div>
		<div class="comment_text"><p>Folks, please test with the version at:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fyoutubecfc.riaforge.org%3AIUi9M79gWudBnVl3-fD5HHNWIOE&amp;cuid=3321886" rel="nofollow noopener" title="http://youtubecfc.riaforge.org">http://youtubecfc.riaforge.org</a></p><p>I've updated it there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679961">70</a> by Misty
		posted on 10/1/2009 at 10:48 PM
		</div>
		<div class="comment_text"><p>Thanks For pointing, it is a manual task. a thought of a solution like it should feych 10 records at a time and every next prev link, the cfc should again to fetch next 10 and do it until it reaches 100.</p><p>i am correct, but exactly i do not know how this can be done</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679962">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679962">71</a> by Raymond Camden
		posted on 10/1/2009 at 10:51 PM
		</div>
		<div class="comment_text"><p>Misty, I'm sorry, but I'm not going to write this code for you. I linked to an article on doing pagination above. Here is that link again:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2006%2F4%2F24%2FColdFusion-and-Pagination%3Aeqj1z9WKrFxMOlM15zTaOCcyv4I&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2006/4/24/ColdFusion-and-Pagination">http://www.coldfusionjedi.c...</a></p><p>If you google for ColdFusion and Pagination, you will see other examples. This is not a Youtube specific issue. Pagination can be done to any set of data, and there are many examples out there, not just the blog entry I linked to above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679963">72</a> by Misty
		posted on 10/2/2009 at 7:12 AM
		</div>
		<div class="comment_text"><p>Ray! i never said you write code for me of pagination, pagination is easy and i have done it. my issue comes where i told you already that run the cfc first time and fetc the first 10 records. next page, rerun the cfc and fetch the next 10 records.</p><p>i tried to make it simple by means that rather than fetching 50 first time and paginate, why not fetch 10 at a time and then paginate, but issue persists, how to fetch the next 10 after first 10.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679964">73</a> by Raymond Camden
		posted on 10/2/2009 at 7:16 AM
		</div>
		<div class="comment_text"><p>Misty, I'm just at a loss. I simply cannot understand what you are asking here. It sounds like you are saying you want 2 calls to the same method to paginate automatically. Ie, first call gets 1-10, second gets 11-20. The CFC can't do that. You have to manually change the start parameter yourself.</p><p>If I'm still not reading you right... well, I hate to say I give up, but the language barrier is difficult here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679965">74</a> by Misty
		posted on 10/2/2009 at 7:33 AM
		</div>
		<div class="comment_text"><p>This time you read me right, Language barrier is a issue here but as you said, it is not possible to do like this. i cannot browse all 100 records. only first 50.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679966">75</a> by Raymond Camden
		posted on 10/2/2009 at 7:35 AM
		</div>
		<div class="comment_text"><p>But you can! Unless there is a bug in the code, you just pass a start value of 51. Again, my CFC won't do this for you. You have to a) determine you have to page and b) write the code to fetch the next page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679967">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679967">76</a> by Misty
		posted on 10/2/2009 at 8:19 AM
		</div>
		<div class="comment_text"><p>Ok lets leave that point for the time being:</p><p>suppose there is a method which does not have start and max attributes, can i add to it/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679971">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679971">77</a> by Misty
		posted on 10/2/2009 at 2:28 PM
		</div>
		<div class="comment_text"><p>Ok! I am not as experienced as you are but i think you cannot browse all records of youtube. like if founded are 1025. it is nearly no way i found that it can go beyond 50 records. might be you cold find a way instead</p><p>Regards</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679970">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679970">78</a> by Raymond Camden
		posted on 10/2/2009 at 3:22 PM
		</div>
		<div class="comment_text"><p>Misty - let me ask you this. Did you try passing a start value higher than 51? I did. It works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679969">79</a> by Misty
		posted on 10/2/2009 at 7:14 PM
		</div>
		<div class="comment_text"><p>Hmmmm! passing 51 to 100, it works but that i have to pass manually. i mean i have to tamper the file to fetch the next 50.</p><p>so i tried the start and max in the url also but still no luck as:</p><p>abc.cfm?start=1&amp;max=10&amp;pagenumber=2</p><p>but it did not worked either way too</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679972">80</a> by Raymond Camden
		posted on 10/2/2009 at 7:19 PM
		</div>
		<div class="comment_text"><p>I think you are still not getting a core concept of pagination in CF. Did you read my article? In the article, I use links that point back to the script. The starting value defaults to 1, and when I link back, I pass in a new start value. So the page basically links to itself to allow for pagination, all via URL parameters which define where to start.</p><p>I really think you need to look at the blog entry I mentioned before as it _does_ explain this concept.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679973">81</a> by Misty
		posted on 10/2/2009 at 7:50 PM
		</div>
		<div class="comment_text"><p>Ok! i am using another pagination but i seems i should try yours. ok let me try with your pagingnation tool and see what i gets</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679975">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679975">82</a> by Misty
		posted on 10/2/2009 at 8:02 PM
		</div>
		<div class="comment_text"><p>I used Your pagination system which is quite simple to which i am using. it creates link with the start of 1 and then 11 and then 21 and it stops at 25.</p><p>how i rerun the cfc again to fetch next 25 or 50 recs,</p><p>I am going my blow my balls away with a shotgun! i am too much confused</p><p>:((</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679974">83</a> by Raymond Camden
		posted on 10/3/2009 at 6:57 AM
		</div>
		<div class="comment_text"><p>You rerun the code when you link to yourself. I honestly do not think you have read the article I linked to. In that article, I show how you create a link back to the current document and pass in a new START value.</p><p>_Thats_ how the CFC is run the 2nd time. The first time the user hits the page, url.start doesn't exist, so it defaults to 1, right? You determine there are more than 50 records so you build a link (again, look at the article), and now url.start is 51 and that is passed to the CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679976">84</a> by Misty
		posted on 10/3/2009 at 8:49 AM
		</div>
		<div class="comment_text"><p>Ok! i am doing it like this:</p><p>&lt;cfset perpage = 10&gt;<br>&lt;cfparam name="url.start" default="1"&gt;<br>&lt;cfif not isNumeric(url.start) or url.start lt 1 or url.start gt toprated.recordCount or round(url.start) neq url.start&gt;<br>    &lt;cfset url.start = 1&gt;<br>    	&lt;cfif StructKeyExists(URL,'time')&gt;	<br>  			&lt;cfset tr = #yt.getTopRatedVideos("#url.time#",#url.start#,50)#&gt;<br>  		&lt;cfelse&gt;<br>  			&lt;cfset tr = #yt.getTopRatedVideos("")#&gt;<br>		&lt;/cfif&gt;<br>&lt;/cfif&gt;</p><p>but it does seems to work, i think i am missing one big step, i am near the end but can't find the end</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679979">85</a> by Misty
		posted on 10/3/2009 at 8:57 AM
		</div>
		<div class="comment_text"><p>recordcount returns 25 and if parameters are used it returns 50.</p><p>now running pagination on 25 or 50 is easy and it works, how it should fetch next 50.</p><p>because pagination has toprated.recordcount which is count to every time 50 or 25, so it is possible it keeps on fetching the very next records. seems impossible to me instead</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679977">86</a> by Misty
		posted on 10/3/2009 at 10:17 AM
		</div>
		<div class="comment_text"><p>What i have noted, cfc cannot fetch more than 50.<br>That all</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679978">87</a> by Misty
		posted on 10/3/2009 at 10:42 AM
		</div>
		<div class="comment_text"><p>I tried this way:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%2Ffeeds%2Fapi%2Fstandardfeeds%2Ftop_rated%3F%26start-index%3D51%26max-results%3D100%3AAeg3oRGJXpunbOv-tRLUfxUFKsw&amp;cuid=3321886" rel="nofollow noopener" title="http://gdata.youtube.com/feeds/api/standardfeeds/top_rated?&amp;start-index=51&amp;max-results=100">http://gdata.youtube.com/fe...</a></p><p>it clearly indicated that it cannot go and fetch the records, max 50 allowed, so i think there is no way how it can done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679980">88</a> by Misty
		posted on 10/7/2009 at 8:55 PM
		</div>
		<div class="comment_text"><p>Hi ray! any Update on this</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679981">89</a> by Raymond Camden
		posted on 10/7/2009 at 8:58 PM
		</div>
		<div class="comment_text"><p>It is 50 per time. Just change it to 50. Your starting at 51, so you will get 51-101. One arg says where to start, one says how many to get. You will ALWAYS ask for 50 at a time, your just changing the starting position.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679983">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679983">90</a> by ewilkinson
		posted on 10/18/2009 at 2:57 AM
		</div>
		<div class="comment_text"><p>Hi Ray. First I must say thank you for your endless contributions to the CF community. Your CFCs for youtube and amazon s3 have really saved my butt this week. In regards to the youtube CFC, I found some minor issues with the delete method. 1. '<a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%2Ffeeds%2Fapi%2Fvideos%2F%27%3A3LyAxkPXnuhubelOTGfxy3U7J9E&amp;cuid=3321886" rel="nofollow noopener" title="http://gdata.youtube.com/feeds/api/videos/'">http://gdata.youtube.com/fe...</a> must be stripped from the videoID before it is passed to the delete method. Other methods in the CFC  include this in the code. The delete method does not. 2. The first cfhttp param should be "Host" with a value of "<a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%3AFxQ6ki109f4cNNMjf7aXbxK_LUg&amp;cuid=3321886" rel="nofollow noopener" title="gdata.youtube.com">gdata.youtube.com</a>". Ex: "&lt;cfhttpparam type="header" name="Host" value="<a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%3AFxQ6ki109f4cNNMjf7aXbxK_LUg&amp;cuid=3321886" rel="nofollow noopener" title="gdata.youtube.com">gdata.youtube.com</a>"&gt;" before the content-type param. I discovered this by reviewing the youTube API documentation here: <a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fapis%2Fyoutube%2F2.0%2Fdevelopers_guide_protocol.html%23Deleting_a_video%3AOAAerYB3NGGXLKuo88KQDedMqeo&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/apis/youtube/2.0/developers_guide_protocol.html#Deleting_a_video">http://code.google.com/apis...</a></p><p>I downloaded version 6 from RIAForge early last week, I'm wondering if I have the latest version. Thanks again for the great CFC's.<br>Cheers,<br>Eric Wilkinson</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679982">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679982">91</a> by Raymond Camden
		posted on 10/18/2009 at 6:36 PM
		</div>
		<div class="comment_text"><p>Thank you for the kind words, but I'm not the person behind Amazon S3 support. :)</p><p>Anyway, I took your changes as is and pushed it live. Download and check it out please.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679987">92</a> by Anthony
		posted on 11/17/2009 at 3:14 PM
		</div>
		<div class="comment_text"><p>Hello Ray,</p><p>I'm trying to use the "update" function of youtube.cfc.  When I do, I get a 400 / Explanatioin: Bad Request error.</p><p>Here is the code that I'm using:</p><p>&lt;cfset yt = createObject("component", "/yt/youtube")&gt;<br>&lt;cfset yt.setDeveloperKey("mykey")&gt;<br>&lt;cfset yt.login("uname", "pword")&gt;<br>&lt;cfset r = yt.update('#form.cause_name#','#form.before_description#','Music','#cause.tags#','#cause.before_video_ytid#')&gt;</p><p>Here are the values to the above:</p><p>form.cause_name = sample cause<br>form.before_description = This is a test description.<br>cause.tags = Online, Contribution<br>cause.before_video_ytid = my video id displays here...</p><p>I checked the URLs and they seem to be correct, not sure what else to try.  Any help is greatly appreciated!</p><p>- Anthony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679985">93</a> by Raymond Camden
		posted on 11/18/2009 at 4:08 AM
		</div>
		<div class="comment_text"><p>Google is super anal about tags. I've tried to 'massage' the tags value to make them Google happy. I don't have time to test this second - but can you run a quick test where you send one value for tags, something simple like:  "Testing". No periods, commas, or spaces. Just one word - and make sure it is at least 4 characters or so long.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679988">94</a> by Anthony
		posted on 11/18/2009 at 5:32 AM
		</div>
		<div class="comment_text"><p>Thanks Ray.  I updated the code to generate all static simple values and I'm still getting the same error.  Here is the new code:</p><p>&lt;cfset yt = createObject("component", "/yt/youtube")&gt;<br>&lt;cfset yt.setDeveloperKey("mykey")&gt;<br>&lt;cfset yt.login("uname", "pword")&gt;<br>&lt;cfset r = yt.update('Test Name','This is a description','Music','Testing','videoidvalue')&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679989">95</a> by Raymond Camden
		posted on 11/18/2009 at 7:27 PM
		</div>
		<div class="comment_text"><p>Oh shoot - you are doing an UPDATE, not an Upload. Sorry. Testing now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679991">96</a> by Raymond Camden
		posted on 11/18/2009 at 7:46 PM
		</div>
		<div class="comment_text"><p>I fixed it. Please get the latest from Subversion on RIAForge, not the zip, confirm, and then I'll release it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679990">97</a> by Anthony
		posted on 12/1/2009 at 6:49 AM
		</div>
		<div class="comment_text"><p>Hi Ray, I hope you had a great Thanksgiving!  I downloaded the new upload code (youtube.cfc), tried the same code with the static values and get the same error.</p><p>Can you maybe provide me with a sample code?  I may be missing something.</p><p>Thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679992">98</a> by Raymond Camden
		posted on 12/2/2009 at 4:01 AM
		</div>
		<div class="comment_text"><p>Please ping me directlyu and pass along your credentials - if you feel comfortable. Obviously it works for me so I need to test exactly as you have it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679993">99</a> by Robert Whitton
		posted on 4/2/2010 at 2:54 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Thanks for being such an active and professional commentator and teacher over the years.  I know I have certainly benefited from your examples and posts.</p><p>You are probably tired of talking about this CFC, but...<br>I am trying to use the YouTubeCFC, and like many above, can get everything working except the upload.</p><p>I think I may be missing something conceptually about the authorization process, but here is what I am trying.</p><p>I had to modify your CFC to work in openBlueDragon (ver 1.2)- basically replace all =&amp; and also the ReMatch function in the keywords wasn't happy.  For this example I am just passing a single word to avoid YT formatting issues with keywords.</p><p>&lt;cfset yt = createObject("component", "youtube")&gt;<br>&lt;cfset yt.login("whittonr", "mypassword")&gt;<br>&lt;cfset r = yt.upload('E:\Video_Files\B\Cyprinus_carpio_Common_carp_Wide_Angle_742_S5Q5_ID~33085.m2t','Koi','Test description','Tech','Koi')&gt;<br>&lt;cfoutput&gt;id=#r#&lt;/cfoutput&gt;</p><p>I keep getting "YouTubeCFC Upload Error: Status: 415 / Explanation: Unsupported Media Type".  I have gone and manually added the same clip to YouTube with not problem, so I do not believe that the file is bad.</p><p>The authtoken... where is that coming from?  My username and password? Is that the session authorization required to then submit the uploaded file?</p><p>The DevKey - that is your specific key to go with your YouTubeCFC tool, correct?  I don't need to use my Google Dev Key. correct?</p><p>Thanks in advance for your help,</p><p>Rob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679994">100</a> by Raymond Camden
		posted on 4/3/2010 at 1:14 AM
		</div>
		<div class="comment_text"><p>The authtoken is made from the login. You don't need to recreate it. Basically the login command does it and stores it. It uses for the next calls.</p><p>DevKey - don't need to change it.</p><p>So - I'd like you to try something. I know that m2t may work for you on the public site, but the API may be more anal about what it requires. Try one of the more common types and see if it works ok.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680004">101</a> by Robert Whitton
		posted on 4/7/2010 at 9:30 AM
		</div>
		<div class="comment_text"><p>Aloha Ray,<br>Sorry for the delay.  I just tried both an mpg and an mp4, and had the same error: YouTubeCFC Upload Error: Status: 415 / Explanation: Unsupported Media Type.</p><p>Both uploads took several minutes before failing, as both files were large - around 50mb.  I then tried a smaller mp4 - 2.7MB and received the same error.</p><p>Here is the code I am using:</p><p>&lt;cfset filename="M.grandoculis640x480.mp4"&gt;<br>&lt;cfset fileLocation = "D:\Explorers_Log\webapps\log\Temp\"&gt;<br>&lt;cfset yt = createObject("component", "youtube")&gt;<br>&lt;cfset yt.login("whittonr", "mypassword")&gt;<br>&lt;cfset r = yt.upload('#fileLocation##filename#','Angelfish','Test description','Tech','Shark,Reef,Whitton')&gt;<br>&lt;cfoutput&gt;id=#r#&lt;/cfoutput&gt;<br>&lt;cfdump var="#yt.getVideosByUser('whittonr')#" top="5"&gt;<br>&lt;cfabort&gt;</p><p>Any other ideas on things I should try to narrow down the issue?</p><p>Thanks again for your help,</p><p>Rob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680000">102</a> by Raymond Camden
		posted on 4/8/2010 at 12:21 AM
		</div>
		<div class="comment_text"><p>Robert, would you feel comfortable sending me a test mp4 and your login credentials so I can recreate here? Obviously NOT in a blog comment. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679998">103</a> by Jason Long
		posted on 7/12/2010 at 5:27 PM
		</div>
		<div class="comment_text"><p>Hi Ray, this is a fantastic CFC. I have had it running on my dev server for the the past 5 months but last week every thing went a bit wrong.</p><p>When ever i try and upload a video im getting this error, is this anything you have seen before?</p><p>Thanks for taking the time to read this.</p><p>Jason</p><p>Element XMLATTRIBUTES.REASONCODE is undefined in a Java object of type class coldfusion.xml.XmlNodeMap referenced as ''</p><p>The error occurred in F:\sports\webroot\youtube.cfc: line 816<br>Called from F:\sports\webroot\youtube.cfc: line 388<br>Called from F:\sports\webroot\video-view.cfm: line 150<br>Called from F:\sports\webroot\video-view.cfm: line 138<br>Called from F:\sports\webroot\video-view.cfm: line 1<br>814 : 	&lt;cfset s.videostatus = "public"&gt;<br>815 : 	&lt;cfif structKeyExists(arguments.entry, "app:control")&gt;<br>816 : 		&lt;cfset s.videostatus = arguments.entry["app:control"]["yt:state"].xmlAttributes.reasonCode&gt;<br>817 : 	&lt;/cfif&gt;<br>818 :</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679997">104</a> by Raymond Camden
		posted on 7/12/2010 at 5:31 PM
		</div>
		<div class="comment_text"><p>It looks like maybe I made an assumption about the xml result. Add a quick cfdump to arguments.entry. Tell me what you see under app:control.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679999">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679999">105</a> by Jason Long
		posted on 7/13/2010 at 1:39 PM
		</div>
		<div class="comment_text"><p>I don't seem to be able to dump it?! Despite the error the videos seem to be passing through &amp; saving to youtube fine.</p><p>Jason</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680001">106</a> by Raymond Camden
		posted on 7/13/2010 at 3:43 PM
		</div>
		<div class="comment_text"><p>You need to add an abort after the dump probably.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680003">107</a> by Jason Long
		posted on 7/13/2010 at 6:10 PM
		</div>
		<div class="comment_text"><p>I did need that, thanks, I am still fairly new to CF.<br>I am getting:</p><p>&lt;app:control&gt;<br>     &lt;app:draft&gt;yes&lt;/app:draft&gt;<br>     &lt;yt:state name='processing'/&gt;<br>&lt;/app:control&gt;</p><p>I have worked out that the problem is that once a user uploads a video I relocate them back to the video page where it displays the latest video &amp; if it has not been processed yet then it throws up the error.  I have a feeling youtube might be taking a little longer to process video than the were when I originally put the page together.</p><p>I shall check yt:state before displaying the video and get round it that way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680005">108</a> by Raymond Camden
		posted on 7/13/2010 at 7:13 PM
		</div>
		<div class="comment_text"><p>Ok - so to be clear though, this is a bug in my code though. It isn't you 'doing it too quickly'. I should update my code to NOT assume the code is there all the time. If I work on a fix, would you be willing to test it out?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680006">109</a> by Jason Long
		posted on 7/13/2010 at 8:10 PM
		</div>
		<div class="comment_text"><p>yeah, there is, I have got round it rather than say using:</p><p>            &lt;cfset yt = createObject("component", "youtube")&gt;<br>            &lt;cfset foo = "<a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%2Ffeeds%2Fapi%2Fvideos%2F%23videoId%23%3A8Z5ImywpIrmLj0v3xa11WzRKjAA&amp;cuid=3321886" rel="nofollow noopener" title="http://gdata.youtube.com/feeds/api/videos/#videoId#">http://gdata.youtube.com/fe...</a>"&gt;<br>            &lt;cfset z = yt.getVideo(foo)&gt;</p><p>I have used:</p><p>&lt;cfhttp url="<a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%2Ffeeds%2Fapi%2Fvideos%2F%23videoId%23%3A8Z5ImywpIrmLj0v3xa11WzRKjAA&amp;cuid=3321886" rel="nofollow noopener" title="http://gdata.youtube.com/feeds/api/videos/#videoId#">http://gdata.youtube.com/fe...</a>"&gt;<br>&lt;cfif #cfhttp.Statuscode# contains '200' AND #cfhttp.Filecontent# DOES NOT CONTAIN "&lt;yt:state name='processing'/&gt;"&gt;<br>	&lt;cfset yt = createObject("component", "youtube")&gt;<br>    &lt;cfset foo = "<a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%2Ffeeds%2Fapi%2Fvideos%2F%23videoId%23%3A8Z5ImywpIrmLj0v3xa11WzRKjAA&amp;cuid=3321886" rel="nofollow noopener" title="http://gdata.youtube.com/feeds/api/videos/#videoId#">http://gdata.youtube.com/fe...</a>"&gt;<br>    &lt;cfset z = yt.getVideo(foo)&gt;<br>    &lt;cfdump var="#z#"&gt;<br>&lt;cfelse&gt;<br>    #errorMSG#            <br>&lt;/cfif&gt;</p><p>If you do work on a fix id be more than happy to test it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680002">110</a> by Raymond Camden
		posted on 7/13/2010 at 10:24 PM
		</div>
		<div class="comment_text"><p>Please try this version: <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FVFVbdizL%3ADChHQkUy-fs5dO-ZL2xcSeCCeJc&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/VFVbdizL">http://pastebin.com/VFVbdizL</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680007">111</a> by Jason Long
		posted on 7/14/2010 at 12:00 PM
		</div>
		<div class="comment_text"><p>By changing:</p><p>	&lt;cfset result = result.filecontent&gt;<br>	&lt;cfif result is "Invalid id"&gt;<br>		&lt;cfthrow message="YouTubeCFC: Invalid id"&gt;<br>	&lt;/cfif&gt;<br>to:<br>        &lt;cfset statuscode = result.Statuscode&gt;<br>	&lt;cfset result = result.filecontent&gt;<br>	&lt;cfif result is "Invalid id" OR statuscode EQ "403 Forbidden"&gt;<br>		&lt;cfthrow message="YouTubeCFC: Invalid id"&gt;<br>	&lt;/cfif&gt;</p><p>It is now throwing up the message when I pass it the ID of a invalid/deleted/duplicate video.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680008">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680008">112</a> by Raymond Camden
		posted on 7/15/2010 at 1:23 AM
		</div>
		<div class="comment_text"><p>Sorry - what block of code is that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680010">113</a> by Jason Long
		posted on 7/15/2010 at 11:51 AM
		</div>
		<div class="comment_text"><p>From line 378 in here <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FVFVbdizL%3ADChHQkUy-fs5dO-ZL2xcSeCCeJc&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/VFVbdizL">http://pastebin.com/VFVbdizL</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680011">114</a> by Raymond Camden
		posted on 7/20/2010 at 1:32 AM
		</div>
		<div class="comment_text"><p>Ok, seems smart. I used</p><p>	&lt;cfhttp url="#arguments.myid#" result="result"&gt;	<br>	&lt;cfset resulttext = result.filecontent&gt;<br> 	&lt;cfif resulttext is "Invalid id" OR result.statuscode EQ "403 Forbidden"&gt;<br> 		&lt;cfthrow message="YouTubeCFC: Invalid id"&gt;<br>	&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680012">115</a> by Das Nobel
		posted on 8/26/2010 at 7:37 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>It seems like there is another bug.  Please review the error below.  It seems like the code is making an assumption that app:control existence will result in status attribute.  If you have fixed it thats great.  If you are going to explore a solution my suggestion would be to add to the conditional statement where you check for the attribute before assigning the value.  I will be happy to test this for <a href="http://disq.us/url?url=http%3A%2F%2FFYEGUY.com%3AHxiuiFZ7bmLs1yQ564_svny-oy8&amp;cuid=3321886" rel="nofollow noopener" title="FYEGUY.com">FYEGUY.com</a> site.</p><p>Thanks for your help</p><p>Element yt:state is undefined in a Java object of type class coldfusion.xml.XmlNodeList.</p><p>  The error occurred in E:\<a href="http://disq.us/url?url=http%3A%2F%2Ffyeguy.com%3AK-cbxf7yWJnp30hKtG0ihD1KpAk&amp;cuid=3321886" rel="nofollow noopener" title="fyeguy.com">fyeguy.com</a>\youtube2\youtubecfc\youtube.cfc: line 799<br>Called from E:\<a href="http://disq.us/url?url=http%3A%2F%2Ffyeguy.com%3AK-cbxf7yWJnp30hKtG0ihD1KpAk&amp;cuid=3321886" rel="nofollow noopener" title="fyeguy.com">fyeguy.com</a>\youtube2\youtubecfc\youtube.cfc: line 400<br>Called from E:\<a href="http://disq.us/url?url=http%3A%2F%2Ffyeguy.com%3AK-cbxf7yWJnp30hKtG0ihD1KpAk&amp;cuid=3321886" rel="nofollow noopener" title="fyeguy.com">fyeguy.com</a>\youtube2\youtubecfc\youtube.cfc: line 650<br>Called from E:\<a href="http://disq.us/url?url=http%3A%2F%2Ffyeguy.com%3AK-cbxf7yWJnp30hKtG0ihD1KpAk&amp;cuid=3321886" rel="nofollow noopener" title="fyeguy.com">fyeguy.com</a>\promotions\lolla\lookup.cfm: line 5<br>797 : 	&lt;cfset s.videostatus = "public"&gt;<br>798 : 	&lt;cfif structKeyExists(arguments.entry, "app:control")&gt;<br>799 : 		&lt;cfset s.videostatus = arguments.entry["app:control"]["yt:state"].xmlAttributes.reasonCode&gt;<br>800 : 	&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680015">116</a> by Raymond Camden
		posted on 8/26/2010 at 7:39 PM
		</div>
		<div class="comment_text"><p>I fixed this in source already. Do you have the latest from RIAForge?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680013">117</a> by Das Nobel
		posted on 8/26/2010 at 7:55 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>I just saw the latest file and indeed that is what I was exploring and I can confirm that its fixed.</p><p>Thanks,<br>Das</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680016">118</a> by David
		posted on 4/12/2011 at 6:41 PM
		</div>
		<div class="comment_text"><p>This is one of the best CFCs out there.  I have been using it for quite some time now (1.5 years) in production, but for some reason starting yesterday or the day before, I started getting the following error:</p><p>&lt;b&gt;Element SUMMARY.XMLTEXT is undefined in ENTRY.&lt;/b&gt;</p><p>The error occurred in youtube.cfc: line 249</p><p>247 : 		&lt;cfset querySetCell(results, "updated", handleDate(entry.updated.xmlText))&gt;<br>248 : 		&lt;cfset querySetCell(results, "title", entry.title.xmlText)&gt;<br>249 : 		&lt;cfset querySetCell(results, "summary", entry.summary.xmlText)&gt;<br>250 : 		&lt;cfset querySetCell(results, "url", entry["gd:feedLink"].xmlAttributes.href)&gt;<br>251 : 		&lt;cfset querySetCell(results, "videocount", entry["gd:feedLink"].xmlAttributes.countHint)&gt;</p><p>I just finished spending about 30 minutes looking into this and can't for the life of me figure out why the entry.summary.xmlText value is not available in the output.  I dumped the entire "result" and sure enough it's not there.  Interestingly, neither is the videocount.</p><p>Can anyone else duplicate this?  The only way I was able to get my code working again was to comment out those two lines in the CFC, which if fine for now, but I hate when things all of the sudden break (after 1.5 years of no trouble) and I can't figure out why.  Any idea?  Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680014">119</a> by Raymond Camden
		posted on 4/12/2011 at 6:44 PM
		</div>
		<div class="comment_text"><p>My guess would be that the code should check for their existence now. Perhaps Youtube changed something in their API.</p><p>Anyway - it would be trivial to check for this. Do you have a reproducable case though so I can confirm it here? If your case involves NDA crap, you can send it to me directly and I'll delete when done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680017">120</a> by David
		posted on 4/12/2011 at 7:47 PM
		</div>
		<div class="comment_text"><p>Thanks for the quick reply!  I just sent you the code by replying to the blog notification email.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680018">121</a> by Raymond Camden
		posted on 4/12/2011 at 10:17 PM
		</div>
		<div class="comment_text"><p>YouTubeCFC has been updated to handle cases where summary/countHint do not exist. You can get the latest at <a href="http://disq.us/url?url=http%3A%2F%2Fyoutubecfc.riaforge.org%3AIUi9M79gWudBnVl3-fD5HHNWIOE&amp;cuid=3321886" rel="nofollow noopener" title="http://youtubecfc.riaforge.org">http://youtubecfc.riaforge.org</a>.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680020">122</a> by Jeff
		posted on 4/28/2011 at 6:13 AM
		</div>
		<div class="comment_text"><p>Ray, does youtube.cfc support Browser Based Uploading.. ( <a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fapis%2Fyoutube%2F2.0%2Fdevelopers_guide_protocol_browser_based_uploading.html%3A8rD-J4Nz0PkOTmCw9jU7OLO44Yk&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/apis/youtube/2.0/developers_guide_protocol_browser_based_uploading.html">http://code.google.com/apis...</a> ).  Ideally I'd like to have the user upload straight to YouTube versus the pain of uploading to my webserver and then uploading to Youtube.  By the looks of things, that might not be available in this version?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680021">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680021">123</a> by Raymond Camden
		posted on 4/28/2011 at 3:06 PM
		</div>
		<div class="comment_text"><p>Right, this is not available in my CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680023">124</a> by Jeff Mack
		posted on 12/10/2011 at 9:01 PM
		</div>
		<div class="comment_text"><p>I have been trying to figure out how to remove a video from playlist.  I keep getting 400 errors. I see an authtoken in the cfc, where does that come from and is that needed to do this?  I can use all the other functions just fine.  Does anyone have an idea on how to this based on Rays code?</p><p>here is the link to the api info:<br><a href="http://disq.us/url?url=http%3A%2F%2Fcode.google.com%2Fapis%2Fyoutube%2F2.0%2Fdevelopers_guide_protocol_playlists.html%23Deleting_a_video_from_a_playlist%3AsQxSMNyzU5eABRlP2hntMOndxxc&amp;cuid=3321886" rel="nofollow noopener" title="http://code.google.com/apis/youtube/2.0/developers_guide_protocol_playlists.html#Deleting_a_video_from_a_playlist">http://code.google.com/apis...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680022">125</a> by Raymond Camden
		posted on 12/10/2011 at 10:30 PM
		</div>
		<div class="comment_text"><p>400 is coming from Google, it means the call is done wrong. I checked, and that functionality is not in my CFC. So I assumed you added it yourself? Can you share your version?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680025">126</a> by Jeff Mack
		posted on 12/10/2011 at 11:18 PM
		</div>
		<div class="comment_text"><p>Thanks for responding Ray.  I have been trying various different methods based on the code you have there.  I guess i really don't see where the "delete" part comes in to play in their code examples.  This code below was really just based on one of your other functions, i just made sure that i was passing in the playlistID and the videoID</p><p>&lt;cffunction name="deleteFromPlaylist" access="public" returnType="any" output="false" hint="I delete a video."&gt;<br>	&lt;cfargument name="playlistId" type="string" required="true"&gt;<br>	&lt;cfargument name="videoId" type="string" required="true"&gt;</p><p>	&lt;cfset var theurl = "<a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%2Ffeeds%2Fapi%2Fplaylists%2F%23arguments.playlistid%23%2F%23arguments.videoId%23%3A5suZTHbPXCdUT0HAE8PCBGj-PqM&amp;cuid=3321886" rel="nofollow noopener" title="http://gdata.youtube.com/feeds/api/playlists/#arguments.playlistid#/#arguments.videoId#">http://gdata.youtube.com/fe...</a>"&gt;<br>	&lt;cfset var result = ""&gt;<br>	&lt;cfset var resxml = ""&gt;</p><p>	&lt;!--- Video ID may include the URL, strip it ---&gt;<br>	&lt;cfset arguments.videoid = replace(arguments.videoid, "<a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%2Ffeeds%2Fapi%2Fvideos%2F%3AMQr2uZDrTjMVXBDcdgyfmiQ_3MM&amp;cuid=3321886" rel="nofollow noopener" title="http://gdata.youtube.com/feeds/api/videos/">http://gdata.youtube.com/fe...</a>","")&gt;<br>	&lt;cfset arguments.videoid = listFirst(arguments.videoid, "&amp;")&gt;</p><p>	&lt;cfset theurl &amp;=  arguments.videoId /&gt;</p><p>	&lt;cfhttp url="#theurl#" method="delete" result="result"&gt;<br>		&lt;cfhttpparam type="header" name="Host" value="<a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%3AFxQ6ki109f4cNNMjf7aXbxK_LUg&amp;cuid=3321886" rel="nofollow noopener" title="gdata.youtube.com">gdata.youtube.com</a>"&gt;<br>		&lt;cfhttpparam type="header" name="Content-Type" value="application/atom+xml"&gt;<br>		&lt;cfhttpparam type="header" name="Authorization" value="GoogleLogin auth=#variables.authtoken#"&gt;<br>		&lt;cfhttpparam type="header" name="X-GData-Client" value="youtubecfc"&gt;<br>		&lt;cfhttpparam type="header" name="X-GData-Key" value="key=#variables.devkey#"&gt;<br>	&lt;/cfhttp&gt;<br>	&lt;cfif result.responseheader.explanation is "OK"&gt;<br>		&lt;cfreturn "Video successfully removed."&gt;<br>	&lt;cfelse&gt;<br>		&lt;cfif isXml(result.filecontent)&gt;<br>			&lt;cfset resxml = xmlParse(result.fileContent)&gt;<br>			&lt;cfthrow message="YouTubeCFC Upload Error: Domain=#resxml.errors.error.domain.xmlText#, Code=#resxml.errors.error.code.xmlText#"&gt;<br>		&lt;cfelse&gt;<br>			&lt;cfthrow message="YouTubeCFC Upload Error: Status: #result.responseheader.status_code# / Explanation: #result.responseheader.explanation#"&gt;<br>		&lt;/cfif&gt;	<br>	&lt;/cfif&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680026">127</a> by Jeff Mack
		posted on 12/10/2011 at 11:44 PM
		</div>
		<div class="comment_text"><p>Acutally i posted the wrong one..</p><p>&lt;cffunction name="deleteFromPlaylist" access="public" returnType="any" output="false" hint="I delete a video from playlist."&gt;<br>	&lt;cfargument name="playlistId" type="string" required="true"&gt;<br>	&lt;cfargument name="videoId" type="string" required="true"&gt;</p><p>	&lt;cfset var theurl = "<a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%2Ffeeds%2Fapi%2Fusers%2F%23variables.username%23%2Ffavorites%2F%23arguments.videoid%23%3ArnQL3lG-ao87y71FkCFOT8yKw8Y&amp;cuid=3321886" rel="nofollow noopener" title="http://gdata.youtube.com/feeds/api/users/#variables.username#/favorites/#arguments.videoid#">http://gdata.youtube.com/fe...</a>"&gt;<br>	&lt;cfset var result = ""&gt;</p><p>	&lt;cfhttp url="#theurl#" method="delete" result="result"&gt;<br>		&lt;cfhttpparam type="header" name="Host" value="<a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%3AFxQ6ki109f4cNNMjf7aXbxK_LUg&amp;cuid=3321886" rel="nofollow noopener" title="gdata.youtube.com">gdata.youtube.com</a>"&gt;<br>		&lt;cfhttpparam type="header" name="Content-Type" value="application/atom+xml"&gt;<br>		&lt;cfhttpparam type="header" name="Authorization" value="GoogleLogin auth=#variables.authtoken#"&gt;<br>		&lt;cfhttpparam type="header" name="X-GData-Client" value="youtubecfc"&gt;<br>		&lt;cfhttpparam type="header" name="X-GData-Key" value="key=#variables.devkey#"&gt;<br> 	&lt;/cfhttp&gt;</p><p>    &lt;cfreturn result&gt;<br>&lt;/cffunction&gt;</p><p>This is what i was using, the return i get with this is:</p><p>401 Token invalid</p><p>So i think has to do with the second part of my original question about the authtoken in the cfc, where would i get that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680028">128</a> by Raymond Camden
		posted on 12/10/2011 at 11:46 PM
		</div>
		<div class="comment_text"><p>The Authtoken is generated when you login. My example code should show you how you first authenticate, then you can do methods like that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680031">129</a> by Jeff Mack
		posted on 12/11/2011 at 12:28 AM
		</div>
		<div class="comment_text"><p>Ok, so i see your login and i can confirm its giving me a token.  I am now back to 400 error.  This is how i am calling it</p><p>&lt;cfset yt = createObject("component", "youtube")&gt;<br>&lt;cfset yt.login("username", "password")&gt;<br>&lt;cfset dp = yt.deleteFromPlaylist('62D2AB95BFB9F362','<a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%2Ffeeds%2Fapi%2Fplaylists%2F62D2AB95BFB9F362%2FtEsesCpfljtRwPoN3EsbyNJj-7_B22CT%27%29%3E%3A4Bi1MHz7ASX0IwhZIoe64oB9Hxw&amp;cuid=3321886" rel="nofollow noopener" title="http://gdata.youtube.com/feeds/api/playlists/62D2AB95BFB9F362/tEsesCpfljtRwPoN3EsbyNJj-7_B22CT')>">http://gdata.youtube.com/fe...</a><br>&lt;cfdump var="#dp#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680029">130</a> by Raymond Camden
		posted on 12/11/2011 at 12:31 AM
		</div>
		<div class="comment_text"><p>Add a debug dump, ie, &lt;cfdump var="#result#" abort&gt; before your cfreturn. Let's look at more of the result.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680030">131</a> by Jeff Mack
		posted on 12/11/2011 at 12:48 AM
		</div>
		<div class="comment_text"><p>i think i got it, even though the ID in the playlist is the big long url which i was using, i tried just making it like the call below and that returned a good status 200, and it was removed from my list..</p><p>&lt;cfset dp = yt.deleteFromPlaylist('62D2AB95BFB9F362','tEsesCpfljvXjvB_LBoDK-aBCrzoWfdG')&gt;</p><p>So for anyone looking to do this, here is the function i added to the cfc.</p><p>&lt;cffunction name="deleteFromPlaylist" access="public" returnType="any" output="false" hint="I delete a video."&gt;<br>	&lt;cfargument name="playlistId" type="string" required="true"&gt;<br>	&lt;cfargument name="videoId" type="string" required="true"&gt;</p><p>	&lt;cfset var theurl = "<a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%2Ffeeds%2Fapi%2Fplaylists%2F%23arguments.playlistid%23%2F%23arguments.videoid%23%3AICo8rCya-UmYUy8NkqjdWzsB3B0&amp;cuid=3321886" rel="nofollow noopener" title="http://gdata.youtube.com/feeds/api/playlists/#arguments.playlistid#/#arguments.videoid#">http://gdata.youtube.com/fe...</a>"&gt;<br>	&lt;cfset var result = ""&gt;</p><p>	&lt;cfhttp url="#theurl#" method="delete" result="result"&gt;<br>		&lt;cfhttpparam type="header" name="Host" value="<a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%3AFxQ6ki109f4cNNMjf7aXbxK_LUg&amp;cuid=3321886" rel="nofollow noopener" title="gdata.youtube.com">gdata.youtube.com</a>"&gt;<br>		&lt;cfhttpparam type="header" name="Content-Type" value="application/atom+xml"&gt;<br>		&lt;cfhttpparam type="header" name="Authorization" value="GoogleLogin auth=#variables.authtoken#"&gt;<br>		&lt;cfhttpparam type="header" name="X-GData-Client" value="youtubecfc"&gt;<br>		&lt;cfhttpparam type="header" name="X-GData-Key" value="key=#variables.devkey#"&gt;<br> 	&lt;/cfhttp&gt;<br>    &lt;cfreturn result&gt;<br>&lt;/cffunction&gt;</p><p>Ray, as always, thank you for you time and masterful knowledge.  The new site template looks fantastic by the way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680032">132</a> by Terry Bankert
		posted on 1/14/2012 at 3:00 AM
		</div>
		<div class="comment_text"><p>Hey Ray was able to get addPlaylist to work by changing the function a little<br>&lt;cffunction name="addPlaylist" access="public" returntype="any" output="false"	hint="Adds a playlist for a user."&gt;<br>	&lt;cfargument name="title" type="string" required="true"&gt;<br>	&lt;cfargument name="description" type="string" required="true"&gt;</p><p>	&lt;cfset var theurl = "<a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%2Ffeeds%2Fapi%2Fusers%2Fdefault%2Fplaylists%3AYFvYCPEBPcrL9wDrqTFAhuAT7vE&amp;cuid=3321886" rel="nofollow noopener" title="http://gdata.youtube.com/feeds/api/users/default/playlists">http://gdata.youtube.com/fe...</a>"&gt;<br>	&lt;cfset var result = ""&gt;<br>	&lt;cfset var meta = ""&gt;<br>	&lt;cfset var tmpFile = expandPath("./#replace(createUUID(),'-','_','all')#")&gt;<br>	&lt;cfset var resxml = ""&gt;</p><p>&lt;cfsavecontent variable="meta"&gt;<br>&lt;cfoutput&gt;<br>&lt;?xml version="1.0" encoding="UTF-8"?&gt;<br>&lt;entry xmlns="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2F2005%2FAtom%3AHiwAqs3UoiBFYjI_RR5GoCJETag&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/2005/Atom">http://www.w3.org/2005/Atom</a>" xmlns:yt="<a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%2Fschemas%2F2007%3AEDEltXYo2_URvuGxRrUuEGJh4L4&amp;cuid=3321886" rel="nofollow noopener" title="http://gdata.youtube.com/schemas/2007">http://gdata.youtube.com/sc...</a>"&gt;<br>&lt;title type="text"&gt;#xmlFormat(arguments.title)#&lt;/title&gt;<br>&lt;summary&gt;#XMLFormat(arguments.description)#&lt;/summary&gt;<br>&lt;/entry&gt;<br>&lt;/cfoutput&gt;<br>&lt;/cfsavecontent&gt;</p><p>	&lt;cfset meta = trim(meta)&gt;</p><p>	&lt;cfhttp url="#theurl#" method="post" result="result"&gt;<br>		&lt;cfhttpparam type="header" name="Host" value="<a href="http://disq.us/url?url=http%3A%2F%2Fgdata.youtube.com%3AFxQ6ki109f4cNNMjf7aXbxK_LUg&amp;cuid=3321886" rel="nofollow noopener" title="gdata.youtube.com">gdata.youtube.com</a>"&gt;	<br>	  	&lt;cfhttpparam type="header" name="Content-Type" value="application/atom+xml"&gt;<br>	    &lt;cfhttpparam type="header" name="Content-Length" value="#len(meta)#"&gt;<br>		&lt;cfhttpparam type="header" name="Authorization" value="GoogleLogin auth=#variables.authtoken#"&gt;		<br>	    &lt;cfhttpparam type="header" name="X-GData-Client" value="youtubecfc"&gt;<br>		&lt;cfhttpparam type="header" name="X-GData-Key" value="key=#variables.devkey#"&gt;<br>		&lt;cfhttpparam type="body" value="#meta#"&gt;		<br> 	&lt;/cfhttp&gt;</p><p>&lt;cfdump var="#result#"&gt;&lt;cfabort&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		