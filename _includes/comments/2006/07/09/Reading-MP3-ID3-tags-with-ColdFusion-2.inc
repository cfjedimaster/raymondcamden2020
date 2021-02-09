
<div class="comment" id="c_1713654806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654806">1</a> by dickbob
		posted on 7/10/2006 at 2:17 PM
		</div>
		<div class="comment_text"><p>Interesting posting Ray.</p><p>I'm working on a project where I need to write ID3 tags to a MP3 file as a simple form of copyright protection. The idea is that the file would be stamped with the person who downloaded the file. Not fool proof I know but a cheap form of DRM.</p><p>How easy do you think it would be to extend your cfc to offer wrting methods?</p><p>dickbob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654807">2</a> by Raymond Camden
		posted on 7/10/2006 at 3:20 PM
		</div>
		<div class="comment_text"><p>His library does support writing. I'd suggest going to his site and checking the API out. It isn't that hard.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654809">3</a> by Raymond Camden
		posted on 7/10/2006 at 3:21 PM
		</div>
		<div class="comment_text"><p>Check his quick start too. Notice the simple API like setSongTitle(), and then save(). Very trivial.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654808">4</a> by Phillip Senn
		posted on 7/10/2006 at 5:12 PM
		</div>
		<div class="comment_text"><p>I would have made the "read" function returntype="string" and did a &lt;cfreturn result&gt;, with result being either getID3v1Tag or getID3v2Tag.</p><p>OK, I'm a little slow on the uptake.<br>How do we use this component again?<br>So far I've got:</p><p>&lt;cfset mp3Obj = createObject("Component", "mp3")&gt;<br>&lt;cfset dir = "c:\inetpub\wwwroot\mymusic\"&gt;<br>&lt;cfdirectory name="music" action="list" directory="#dir#" filter="*.mp3"&gt;<br>&lt;cfloop query="music"&gt;<br>   &lt;cfoutput&gt;<br>   Filename = #name#&lt;br /&gt;<br>   Album Title = #mp3Obj.getAlbumTitle#&lt;br /&gt;<br>   &lt;/cfoutput&gt;<br>&lt;/cfloop&gt;</p><p>Do I call the read function?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654810">5</a> by Raymond Camden
		posted on 7/10/2006 at 5:20 PM
		</div>
		<div class="comment_text"><p>Read is my way of saying load, so I think void makes sense.</p><p>Phillip, check the last entry. I believe I attached a simple test script that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654812">6</a> by Phillip Senn
		posted on 7/10/2006 at 5:25 PM
		</div>
		<div class="comment_text"><p>I reread the last entry (dated June 13, 2006) but couldn't find a test script.  So then I reread the last entry before this one, but it was about Upcoming Speaking Engagements.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654811">7</a> by Raymond Camden
		posted on 7/10/2006 at 5:30 PM
		</div>
		<div class="comment_text"><p>Ok, here is my test script. Forgive any freaky formatting.</p><p>&lt;cfset mp3 = createObject("component", "mp3").init()&gt;</p><p>&lt;cfset dir = "g:\music\80s\"&gt;</p><p>&lt;cfdirectory action="list" directory="#dir#" filter="*.mp3" name="music"&gt;</p><p>&lt;cfloop query="music"&gt;<br>	&lt;cfoutput&gt;filename = #name#&lt;br&gt;&lt;/cfoutput&gt;</p><p>	&lt;cftry&gt;<br>		&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fmp3.read%3AQ1rrnDi9rbziyfwh_17Ds0iaGEg&amp;cuid=3321886" rel="nofollow noopener" title="mp3.read">mp3.read</a>(dir &amp; name)&gt;<br>		&lt;cfoutput&gt;<br>		has v1? #mp3.hasid3v1()#&lt;br&gt;<br>		has v2? #mp3.hasid3v2()#&lt;br&gt;<br>		title: #mp3.getSongTitle()#&lt;br&gt;<br>		album: #mp3.getAlbumTitle()#&lt;br&gt;<br>		genre: #mp3.getSongGenre()#&lt;br&gt;<br>		track: #mp3.getTrackNumber()#&lt;br&gt;<br>		year: #mp3.getYearReleased()#&lt;br&gt;<br>		&lt;/cfoutput&gt;<br>		&lt;cfcatch&gt;<br>		bad file &lt;cfoutput&gt;#cfcatch.message#&lt;/cfoutput&gt;<br>		&lt;/cfcatch&gt;<br>	&lt;/cftry&gt;<br>	&lt;hr&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654813">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654813">8</a> by Jeff Lemmon
		posted on 7/11/2006 at 10:26 AM
		</div>
		<div class="comment_text"><p>Many thanks for knocking this out so quickly. I did have one question. I'm getting the message:</p><p>Class not found: org.farng.mp3.MP3File</p><p>I assume I'm supposed to download the Java files from <a href="http://disq.us/url?url=http%3A%2F%2Fjavamusictag.sourceforge.net%2F%3ARWS9tc9TuMj18WQLzAOQDzoUcEc&amp;cuid=3321886" rel="nofollow noopener" title="http://javamusictag.sourceforge.net/">http://javamusictag.sourcef...</a> and map the component to those files? Any ideas on how this might work in a shared environment where I have no ability to load these via the CF administrator? Sorry for the dumb question, but my CF skills aren't what they used to be.</p><p>-Jeff</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654816">9</a> by Raymond Camden
		posted on 7/11/2006 at 5:18 PM
		</div>
		<div class="comment_text"><p>Jeff, yes, please read the first entry as I think it makes it a bit more clear. On a shared environment, you would need to contact tech support.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654815">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654815">10</a> by Gideon Marken
		posted on 7/12/2006 at 4:19 AM
		</div>
		<div class="comment_text"><p>Hi Ray - I was considering using this on <a href="http://disq.us/url?url=http%3A%2F%2Fwww.ArtistServer.com%3AUPCyrMMX25ZPVGEUhUWH3DMeEus&amp;cuid=3321886" rel="nofollow noopener" title="http://www.ArtistServer.com">http://www.ArtistServer.com</a> - which is a site running on ColdFusion. I'm currenlty hosting 5,800 mp3s, and have 15,000 registered members. Your CFC didn't include a few things I need (bitrate, channel mode, frequency, and sample rate) so I looked in the API docs and found the methods for these settings.</p><p>Unfortunately, my modification either didn't work, or these methods are not complete in in the Java Library.</p><p>Before I try to seek help with the Java Library, I wanted to make sure there wasn't anything wrong with my CF code? Could you give this a quick look over? :)</p><p>I added this after your "checkLoaded" function:<br>==================================================</p><p> &lt;!--- MP3 File Attributes  ---&gt;  <br>   &lt;cffunction name="getMp3BitRate" access="public" returnType="string" output="false"<br>            hint="Returns the mp3 bit rate."&gt;<br>      &lt;cfreturn variables.mp3.getBitRate()&gt;<br>   &lt;/cffunction&gt;<br>   &lt;cffunction name="getMp3Frequency" access="public" returnType="any" output="false"<br>            hint="Returns the mp3 frequency."&gt;<br>      &lt;cfreturn variables.mp3.getFrequency()&gt;<br>   &lt;/cffunction&gt;<br>    &lt;cffunction name="getMp3Mode" access="public" returnType="string" output="false"<br>            hint="Returns the mp3 channel mode."&gt;<br>      &lt;cfreturn variables.mp3.getMode()&gt;<br>   &lt;/cffunction&gt;  <br>   &lt;cffunction name="getMp3Version" access="public" returnType="string" output="false"<br>            hint="Returns the mp3 Mpeg version."&gt;<br>      &lt;cfreturn variables.mp3.getMpegVersion()&gt;<br>   &lt;/cffunction&gt;  <br> &lt;!--- MP3 File Attributes ---&gt;</p><p>This is the API documentation page with these methods:<br><a href="http://disq.us/url?url=http%3A%2F%2Fjavamusictag.sourceforge.net%2Fapi%2Forg%2Ffarng%2Fmp3%2FMP3File.html%3Azye3Ib2mgF903X_0B6BJzdC2C0E&amp;cuid=3321886" rel="nofollow noopener" title="http://javamusictag.sourceforge.net/api/org/farng/mp3/MP3File.html">http://javamusictag.sourcef...</a></p><p>This is what I get back for a <br>stereo 44100 128k mp3 file:<br>======================</p><p>bitrate: 0<br>frequency: cfmp32ecfc1980346658$funcGETMP3FREQUENCY@6df9bc<br>channel mode: 0<br>mpeg version: 0</p><p>===================<br>And this is what I added to the demo code, after 'year':</p><p>&lt;div style="background-color:##F5F5F5"&gt;<br>	  bitrate: #mp3.getMp3BitRate()#&lt;br /&gt;<br>	  frequency: #mp3.getMp3Frequency#&lt;br /&gt;<br>	  channel mode: #mp3.getMp3Mode()#&lt;br /&gt;<br>	  mpeg version: #mp3.getMp3Version()#<br>&lt;/div&gt;</p><p>Thank you for your time and your effort on this code.</p><p>- Gideon</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654817">11</a> by Raymond Camden
		posted on 7/12/2006 at 5:40 AM
		</div>
		<div class="comment_text"><p>You are using the wrong variable. You want to use variables.id3tag. Notice how my other methods did.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654818">12</a> by Michael White
		posted on 7/12/2006 at 7:35 AM
		</div>
		<div class="comment_text"><p>this is a lame question: <br>ok, so all my mp3's are on another server... how do (or can I) use cfdirectory on another server's file system? I know this would be crazy on a production environment but just on my home servers so i can play around</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654820">13</a> by Raymond Camden
		posted on 7/12/2006 at 5:14 PM
		</div>
		<div class="comment_text"><p>You need to run ColdFusion as a user who has access to that other server and then make a mapped drive for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654836">14</a> by Jeff Lemmon
		posted on 7/13/2006 at 3:26 AM
		</div>
		<div class="comment_text"><p>Does anyone know how to read a MP3 duration using this CFC?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654832">15</a> by Anthony Webb
		posted on 8/2/2006 at 6:20 AM
		</div>
		<div class="comment_text"><p>On the surface it looks like adding some other fields and functions to the CFC would be a real no brainer but I am having a devil of a time trying to get songlength, bitrate, genre etc!  Can someone post a sample or a revised cfc or even directions on how in the world you can pull some more info from the ID3 tag?</p><p>Thanks, and BTW this is a pretty cool cfc, I have been looking everywhere for this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654835">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654835">16</a> by Raymond Camden
		posted on 8/2/2006 at 6:24 AM
		</div>
		<div class="comment_text"><p>What is going wrong? Also, if you are storing the CFC in the app scope, don't forget to refresh it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654830">17</a> by Anthony Webb
		posted on 8/3/2006 at 2:20 AM
		</div>
		<div class="comment_text"><p>It must be the whole app scope thing, how do I refresh that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654837">18</a> by Anthony Webb
		posted on 8/3/2006 at 2:26 AM
		</div>
		<div class="comment_text"><p>When I call the mp3.getMp3BitRate() I get the following repeated all the way down the page.</p><p>bitrate: bad file The selected method getBitRate was not found</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654838">19</a> by Anthony Webb
		posted on 8/3/2006 at 2:27 AM
		</div>
		<div class="comment_text"><p>Sorry, and my function is:</p><p>&lt;cffunction name="getMp3BitRate" access="public" returnType="string" output="false"<br>	hint="Returns the mp3 bit rate."&gt;<br>	&lt;cfreturn variables.id3tag.getBitRate()&gt;<br>	&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654840">20</a> by Raymond Camden
		posted on 8/3/2006 at 5:52 PM
		</div>
		<div class="comment_text"><p>If you are caching the creation of the CFC, then you want to stop that whole you test.</p><p>Oh - I found your issue. The Mp3 bit rate is NOT a method of the ID3 object. It is a method of the mp3 object.</p><p>This _should_ work inside a new getBitRate() method that you would add yourself to the CFC.</p><p>&lt;cfreturn variables.mp3.getBitRate()&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654839">21</a> by anthony webb
		posted on 8/3/2006 at 8:46 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>You were spot on for the getBitrate method!  My test files show a '0' for bitrate, but that may be an issue with my test files.  I am just glad it doesnt error out.  Now I am trying to get the length and have hit some issues that are very similar.  I have:</p><p>&lt;!--- MP3 File Attributes ---&gt;<br>	&lt;cffunction name="getMp3BitRate" access="public" returnType="string" output="false"<br>	hint="Returns the mp3 bit rate."&gt;<br>	&lt;cfreturn variables.mp3.getBitRate()&gt;<br>	&lt;/cffunction&gt;<br>	&lt;cffunction name="getMp3Length" access="public" returnType="string" output="false"<br>	hint="Returns the mp3 length."&gt;<br>	&lt;cfreturn variables.mp3.getLength()&gt;<br>	&lt;/cffunction&gt;<br>	&lt;!--- MP3 File Attributes ---&gt;</p><p>But the getMP3length returns an error saying the method path was not found.  Any ideas on this?  I tried out the cfx id3 tag mentioned above which works great and is very very fast but it bombs on some files and your cfc reads them great.  Problem is the cfc lacks some prety critical fields for me like length.</p><p>I am so close.</p><p>Thanks again for dealing with some dumb questions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654849">22</a> by Raymond Camden
		posted on 8/3/2006 at 8:51 PM
		</div>
		<div class="comment_text"><p>In looking at the API doc for mp3,</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjavamusictag.sourceforge.net%2Fapi%2Forg%2Ffarng%2Fmp3%2FMP3File.html%3Azye3Ib2mgF903X_0B6BJzdC2C0E&amp;cuid=3321886" rel="nofollow noopener" title="http://javamusictag.sourceforge.net/api/org/farng/mp3/MP3File.html">http://javamusictag.sourcef...</a></p><p>I do not see a getLength().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654842">23</a> by anthony webb
		posted on 8/3/2006 at 9:03 PM
		</div>
		<div class="comment_text"><p>I saw this:<br>getLength() - Method in class org.farng.mp3.object.ObjectNumberFixedLength</p><p>So I tried:<br>variables.object.getLength()</p><p>But that didnt work either :(  I'm sure I am way off, I just have never dealt with java before so reading these docs is greek to me.</p><p>-Anthony</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654843">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654843">24</a> by Raymond Camden
		posted on 8/3/2006 at 10:36 PM
		</div>
		<div class="comment_text"><p>You got me there. I don't see a way to get the object class from the Mp3.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654847">25</a> by Jeff Lemmon
		posted on 8/8/2006 at 5:28 AM
		</div>
		<div class="comment_text"><p>I found a java class called helliker that can pull the duration from an MP3. I actually found it when I downloaded the wimpyplayer:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.wimpyplayer.com%2Fdownloads%2Findex.php%3AzWoR0QMJvlKqNbO9RixQcI5XQNY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.wimpyplayer.com/downloads/index.php">http://www.wimpyplayer.com/...</a></p><p>Get the demo CF version and extract the helliker directory, placing it into C:\CFusionMX7\wwwroot\WEB-INF\classes. Restart CF. Then:</p><p>&lt;CFOBJECT type="JAVA" action="CREATE" name="MP3File" class="helliker.id3.MP3File"&gt; <br>&lt;CFSET ret = MP3File.init("C:\MP3\test.mp3")&gt; <br>&lt;CFOUTPUT&gt; <br>Exists? #MP3File.id3v1Exists()#&lt;BR&gt; <br>Is MP3? #MP3File.isMP3()#&lt;BR&gt; <br>File Size? &lt;CFSET sizeMB = Round(((MP3File.getFileSize()/ 1024)/1024))&gt;#sizeMB# MB&lt;BR&gt; <br>File Name? #MP3File.getFileName()#&lt;BR&gt;<br>Play Time? #MP3File.getPlayingTimeString()#&lt;BR&gt; <br>Bitrate? #MP3File.getBitRate()#&lt;BR&gt; <br>&lt;/CFOUTPUT&gt;</p><p>I pulled this little gem from here :-)</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.houseoffusion.com%2Fgroups%2FCF-Talk%2Fmessage.cfm%2Fmessageid%3A206463%3AThuZtkZ9jix2PfQijnIVZkEiwPU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.houseoffusion.com/groups/CF-Talk/message.cfm/messageid:206463">http://www.houseoffusion.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654844">26</a> by Jeff Lemmon
		posted on 8/8/2006 at 7:44 AM
		</div>
		<div class="comment_text"><p>Here are the methods for helliker:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.jukex.org%2Fdocs%2Fapi%2Fhelliker%2Fid3%2FMP3File.html%3AwaoCKh4GSP5ZZJ-qvpxByxVaWQI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.jukex.org/docs/api/helliker/id3/MP3File.html">http://www.jukex.org/docs/a...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654848">27</a> by Anthony Webb
		posted on 8/25/2006 at 12:28 PM
		</div>
		<div class="comment_text"><p>Ya!  Worked great for me, thanks for the tip man!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654841">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654841">28</a> by Lance
		posted on 12/19/2006 at 1:09 AM
		</div>
		<div class="comment_text"><p>Hi, Ray.  I am trying to implement this on my server and am having problems returning the Genre for just some .mp3s.  This doesn't happen to all, but some show like (17) for Rock, etc.  The ID3 data looks fine everywhere else...I don't know what to do for this.  Anyone else experienced this?</p><p>Thanks,<br>Lance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654850">29</a> by Raymond Camden
		posted on 12/19/2006 at 2:20 AM
		</div>
		<div class="comment_text"><p>If I remember the spec right - Genres _are_ numbers, or maybe they were for the older ID3 spec. So 1=Country,2=Rap, etc. You may be seeing that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654845">30</a> by Riyaz
		posted on 1/17/2008 at 4:44 PM
		</div>
		<div class="comment_text"><p>@ Jeff Lemmon</p><p>Wow, great post man, i have been looking for this and infact i am torturing the clients to add the mp3 file duration themself, lol,<br>really you made my day :) thumbs up , million stars</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654846">31</a> by Writing to an MP4
		posted on 8/7/2008 at 11:03 AM
		</div>
		<div class="comment_text"><p>Has anyone out there had any luck figuring out how to write. I looked at the API documentation but I'm having a hard time figuring out where to even start. If anyone can help me out that would be awesome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654855">32</a> by simspace
		posted on 10/15/2008 at 9:50 PM
		</div>
		<div class="comment_text"><p>I was not able to figure out how to write with this java library. However, I found a great ID3 library named MyID3 at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.fightingquaker.com%2Fmyid3%2F%3Aw6qfESYRNE96BeDLrhkiNTQmgRw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.fightingquaker.com/myid3/">http://www.fightingquaker.c...</a>. And it worked the first time!. Very easy to use you will just need to download the Jakarta Regexp and Nanoxml jars as well.</p><p>Head over to my blog (<a href="http://disq.us/url?url=http%3A%2F%2Fflexdojo.blogspot.com%2F%29%3Ac9au6tKq9d3pKNASfh28KV5tCwE&amp;cuid=3321886" rel="nofollow noopener" title="http://flexdojo.blogspot.com/)">http://flexdojo.blogspot.com/)</a> for a simple mp3Manager cfc that uses the MyID3 library.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654852">33</a> by Adrian Lynch
		posted on 10/16/2008 at 4:58 PM
		</div>
		<div class="comment_text"><p>Is this a mistake maybe?</p><p>If you pass the filename into via the init method, you don't set VARIABLES.filename before attempting to use it in the read() method.</p><p>So:</p><p>&lt;cfif structKeyExists(ARGUMENTS, "filename")&gt;<br>	&lt;!--- read it in ---&gt;<br>	&lt;cfset read(VARIABLES.filename)&gt;<br>&lt;/cfif&gt;</p><p>should be:</p><p>&lt;cfif structKeyExists(ARGUMENTS, "filename")&gt;<br>	&lt;!--- read it in ---&gt;<br>	&lt;cfset VARIABLES.filename = ARGUMENTS.filename&gt;<br>	&lt;cfset read(VARIABLES.filename)&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654853">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654853">34</a> by Raymond Camden
		posted on 10/16/2008 at 10:56 PM
		</div>
		<div class="comment_text"><p>Certainly is. I'll edit the blog entry now. Thanks Adrian.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654856">35</a> by amclean
		posted on 10/9/2009 at 3:49 AM
		</div>
		<div class="comment_text"><p>I wondered if you or anyone could explain how to add song *duration* to the class. I read through the documentation but I have a bit of trouble understanding anything java.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654854">36</a> by Lee Boardman
		posted on 6/1/2010 at 7:29 PM
		</div>
		<div class="comment_text"><p>Can somebody help me out with extracting 'comments' from an MP3 file. The original post by Ray included this but with that code the 'title' was only returning 30 characters. Using the CFC on this post I can now get the full title but am unable to get the comments... Thanks in advance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654857">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654857">37</a> by Raymond Camden
		posted on 6/1/2010 at 7:31 PM
		</div>
		<div class="comment_text"><p>Lee - sorry, which CFC? It sounds like you said my code doesn't get the title right but does do comments, but then some other CFC does title right and not comments. Which CFC?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654859">38</a> by Lee Boardman
		posted on 6/1/2010 at 7:59 PM
		</div>
		<div class="comment_text"><p>Ray, sorry for any confusion. What I mean is, when I run the code on your original post I see the comments for all MP3s, but the output for the title weirdly only shows the first 30 characters.</p><p>I'm now running the CFC on this second post, along with the example code posted in a comment by you on 10 July 2006, at 8:30 AM (a long time ago, I appreciate!) and the full title is being displayed, which is great! However, I can't see any way of extracting the comments by using this CFC.</p><p>Hope that makes sense and thanks for the quick reply!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654858">39</a> by Raymond Camden
		posted on 6/1/2010 at 8:01 PM
		</div>
		<div class="comment_text"><p>It does make sense. I'll try to tackle this @ lunch.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654860">40</a> by Raymond Camden
		posted on 6/1/2010 at 9:03 PM
		</div>
		<div class="comment_text"><p>Add this to the CFC:</p><p>	&lt;cffunction name="getSongComment" access="public" returnType="string" output="false"<br>				hint="Returns the song title."&gt;<br>		&lt;cfreturn variables.id3tag.getSongComment()&gt;<br>	&lt;/cffunction&gt;</p><p>That's all you need. Surprised this library still works after 4 years. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654862">41</a> by Raymond Camden
		posted on 6/1/2010 at 9:03 PM
		</div>
		<div class="comment_text"><p>Add this to the CFC:</p><p>	&lt;cffunction name="getSongComment" access="public" returnType="string" output="false"<br>				hint="Returns the song title."&gt;<br>		&lt;cfreturn variables.id3tag.getSongComment()&gt;<br>	&lt;/cffunction&gt;</p><p>That's all you need. Surprised this library still works after 4 years. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654863">42</a> by Lee Boardman
		posted on 6/3/2010 at 12:56 PM
		</div>
		<div class="comment_text"><p>Thanks Ray. I added this to the CFC and tried it out. The MP3 I tested it out on had a comment of 'purina.jpg' (the client stores logo info in the MP3 meta-data - the idea being that this info can be extracted and then used to display a logo). The code on your original post pulls this fine but with the addition to the CFC it pulls this -</p><p>cfmp32ecfc95810042$funcGETSONGCOMMENT@144b1056</p><p>I've got no idea where that comes from ?!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654865">43</a> by Raymond Camden
		posted on 6/3/2010 at 3:10 PM
		</div>
		<div class="comment_text"><p>You did use parens, ie, getSongComment(), in your code, right? Instead of getSongComment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654864">44</a> by Lee Boardman
		posted on 6/3/2010 at 3:42 PM
		</div>
		<div class="comment_text"><p>Ooops! I've put them in. Now it's not displaying anything</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654866">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654866">45</a> by Raymond Camden
		posted on 6/3/2010 at 3:44 PM
		</div>
		<div class="comment_text"><p>Then you are out of luck. :) If the Java app doesn't see that comment, then ... it doesn't work right with that mp3.</p><p>Although wait - does it work with the pre-CFC code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654867">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654867">46</a> by Ronnie Duke
		posted on 2/24/2014 at 5:11 AM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>Do you know if this is limited to mp3, or could this theoretically work for all id3 tags (aac, m4p, etc)?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654869">47</a> by Raymond Camden
		posted on 2/24/2014 at 7:11 AM
		</div>
		<div class="comment_text"><p>Did you try? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654868">48</a> by Ronnie Duke
		posted on 2/24/2014 at 7:12 AM
		</div>
		<div class="comment_text"><p>I will now :-)</p><p>I was just seeing if anyone else had done it before before I went down a dead end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3510619700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3510619700">49</a> by Michael G Kear
		posted on 9/10/2017 at 10:43 AM
		</div>
		<div class="comment_text"><p>Ray,    this is quite old now, but I have been using it since you wrote it.    And it's proved very useful.  I"m webmaster for a radio station and of course we do a LOT of work with music files,  mostly MP3s.    I'm using this CFC with a few tweaks for the following:  <br>Library maintanance:    When we load new files into our library drive,  I scan through the drive periodically and read in details of any mp3s i havent indexed and load the details into the SQLServer database.   It's 90% reliable  - the errors are related to mp3s not being properly tagged rather than issues with the cfc. <br>Program generation -  I have a number of scripts that scan through the hard drive pulling out details of mp3s we havent played before,  or are new,  or are of a particular genre to make up program playlists.<br>On-air assistance for show hosts -   I display the song currently  being played  or next on the list for the host so he has something to say about the song<br>Timing shows:     when a show is designated to be a 3 hour show,  that means 3 hours,  plus or minus 1 second.   When the show is coming up to a commitment like the end of the show or a news satellite link or an ad break, its important to time it correctly.   You can't do that before the show starts because you dont know exactly how many seconds the host is going to speak for in the hour.    So about 10-15 minutes to the commitment the host clicks on a link and a script calculates which songs he should play to time up to the commitment with about 5 seconds to spare for the host to speak,  e.g.  "News sport and weather is next, then lots more  music.  Stay tuned!" <br>Thank you for all the many contributions you made to us ColdFusion developers in your Adobe days.  I just wanted you to know that it's still useful.</p><p>Mike Kear, <br>Windsor, NSW, Australia.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3512111714">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3512111714">50</a> (In reply to <a href="#c_3510619700">#49</a>) by Raymond Camden
		posted on 9/11/2017 at 1:09 PM
		</div>
		<div class="comment_text"><p>Thank you for sharing this. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3512121719">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3512121719">51</a> (In reply to <a href="#c_3512111714">#50</a>) by Raymond Camden
		posted on 9/11/2017 at 1:17 PM
		</div>
		<div class="comment_text"><p>FYI, I'm pushing up a fix to the code formatting.</p></div>
	</div>
</div>
		