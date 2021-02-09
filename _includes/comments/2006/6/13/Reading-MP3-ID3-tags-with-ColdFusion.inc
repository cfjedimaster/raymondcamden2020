
<div class="comment" id="c_1713654015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654015">1</a> by PaulH
		posted on 6/13/2006 at 3:06 PM
		</div>
		<div class="comment_text"><p>i've started to use mark's javaLoader for everythng java these days: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.compoundtheory.com%2F%3Faction%3Djavaloader.index%3A_KOp1AqCZt0wAO1jyFvEz0wIiTY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.compoundtheory.com/?action=javaloader.index">http://www.compoundtheory.c...</a></p><p>even if i can get to the classpath, this approach makes upgrading the backend java bits much easier.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654004">2</a> by Nelson Winters
		posted on 6/13/2006 at 4:05 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>As I understand it, .jar files are the same as .zip files.  So you can just open a jar file using winzip or whatever and see the name of all the class files and their paths.  The class name  is just the path with the class name in dot notation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654019">3</a> by Scott Stroz
		posted on 6/13/2006 at 4:45 PM
		</div>
		<div class="comment_text"><p>Nice!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654018">4</a> by Raymond Camden
		posted on 6/13/2006 at 4:58 PM
		</div>
		<div class="comment_text"><p>Nelson, yep, you are right. My issue was that I saw a lot of files, and couldn't find the mp3file one. The API was just a bit easier.</p><p>Of course, the easiest will be the CFC approach I'll write about tonight.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654025">5</a> by todd
		posted on 6/13/2006 at 5:10 PM
		</div>
		<div class="comment_text"><p>Forgive me if I'm totally off base on this, but would it be possible to apply this concept (modified of course) to say a Word doc or Excel spreadsheet to read the metadata saved in those files?  I'd love to be able to read the author, comments, etc from Coldfusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654028">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654028">6</a> by Raymond Camden
		posted on 6/13/2006 at 5:19 PM
		</div>
		<div class="comment_text"><p>Do a Google search for POI. It's a Java based Excel reader. I'm sure it could handle the metadata no problem. Also, CF's built in Verity will read it as well, but can't be used for simple "get one doc and return just the md" type things.</p><p>I've never used POI, but I know I've heard others recommend it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654026">7</a> by Adam
		posted on 6/13/2006 at 6:02 PM
		</div>
		<div class="comment_text"><p>Well, you _could_ write a CFC. Or you could just use the cfID3 cfc that you edited for DRK3. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654031">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654031">8</a> by Raymond Camden
		posted on 6/13/2006 at 6:06 PM
		</div>
		<div class="comment_text"><p>No, see my first paragraph. That's not open sourced. It wasn't my project. (I just QAed it.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654023">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654023">9</a> by Adam
		posted on 6/13/2006 at 6:44 PM
		</div>
		<div class="comment_text"><p>Sorry, missed that part. It wasn't Christian though... it was actually the first CFC I ever wrote (following the launch of CFMX). Your QA taught me some tremendoulsy good lessons that I still follow. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654034">10</a> by Raymond Camden
		posted on 6/13/2006 at 6:44 PM
		</div>
		<div class="comment_text"><p>Oh, sorry! It was so long ago. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654020">11</a> by Mario Rodrigues
		posted on 6/13/2006 at 6:54 PM
		</div>
		<div class="comment_text"><p>Todd,</p><p>If you are on a windows box, you can use the dsofile.dll (from Microsoft) to read the OLE properties from Office documents.</p><p>See the following code:</p><p>objDSOFile = CreateObject("com","DSOleFile.PropertyReader");<br>try {<br>	objDocProp = objDSOFile.GetDocumentProperties(arguments.file);<br>	flObj.Author = <a href="http://disq.us/url?url=http%3A%2F%2FobjDocProp.author%3AUc0hvs4fNzsYm6qpvUXgIV2TOU0&amp;cuid=3321886" rel="nofollow noopener" title="objDocProp.author">objDocProp.author</a>;<br>	flObj.Name = <a href="http://disq.us/url?url=http%3A%2F%2FobjDocProp.name%3AEMkV8oRXZ7VaTDgcqXlYYp8K_U0&amp;cuid=3321886" rel="nofollow noopener" title="objDocProp.name">objDocProp.name</a>;<br>	flObj.Title = objDocProp.title;<br>	flObj.Company = <a href="http://disq.us/url?url=http%3A%2F%2FobjDocProp.company%3Ap4c1XWJBAwwGODhfG0s3MnEci64&amp;cuid=3321886" rel="nofollow noopener" title="objDocProp.company">objDocProp.company</a>;<br>	flObj.Comments = objDocProp.Comments;<br>} catch(any e) {<br>	//<br>}<br>releaseCOMObject(objDSOFile);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654030">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654030">12</a> by Jeff Houser
		posted on 6/13/2006 at 8:58 PM
		</div>
		<div class="comment_text"><p>It might be worth noting the cfxid3 custom tag in the  developer's exchange.  It would let you read and write ID3 tags on mp3 files.</p><p> (I hope this link works )</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fcfusion%2Fexchange%2Findex.cfm%23view%3Dsn106%26viewName%3DExchange%2520Search%2520Details%26loc%3Den_us%26authorid%3D17006393%26page%3D0%26scrollPos%3D0%26subcatid%3D0%26snid%3Dsn106%26itemnumber%3D4%26extid%3D1003390%26catid%3D0%3A5z8fCDxMlagyspG9qcNdowWUzys&amp;cuid=3321886" rel="nofollow noopener" title="www.adobe.com/cfusion/exchange/index.cfm#view=sn106&amp;viewName=Exchange%20Search%20Details&amp;loc=en_us&amp;authorid=17006393&amp;page=0&amp;scrollPos=0&amp;subcatid=0&amp;snid=sn106&amp;itemnumber=4&amp;extid=1003390&amp;catid=0">www.adobe.com/cfusion/excha...</a></p><p> I've used it for both reading and writing w/ pretty good results.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654003">13</a> by Matthew Reinbold
		posted on 6/14/2006 at 7:41 AM
		</div>
		<div class="comment_text"><p>I was playing around with the provided code but nothing seemed to work. I ended up cfdump'ing the variables at each step and noticed that the line &lt;cfset mp3.init(dir &amp; name)&gt; was actually causing a problem. If 'dir' was 'C:\music' and 'name' was 'cool.mp3' what was being passed to the instance of the java class init was 'C:\musiccool.mp3'... something that it couldn't successfully use.</p><p>I changed the line to read &lt;cfset mp3.init(dir &amp; '\' &amp; name)&gt; and all is well.</p><p>I also used Mark's javaloader to handle grabbing and managing the *.jar file - very handy and useful for those of us on hosted servers which don't allow access to the Admin control panel but enable the cfobject tag.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654005">14</a> by Raymond Camden
		posted on 6/14/2006 at 3:41 PM
		</div>
		<div class="comment_text"><p>I'm glad you got it working. In the CFC version, which is done btw, I have code in there that verified the file exists. It would have caught that earlier for you. I plan on writing about the CFC either today or tomorrow. I will say one thing - the author did a darn good job cuz my job was incredibly easy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654008">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654008">15</a> by Raymond Camden
		posted on 6/17/2006 at 7:04 PM
		</div>
		<div class="comment_text"><p>Just an FYI guys. I did write the CFC for part 2. I just haven't written the article yet. The good news is that it will be short and sweet as the code that the Java project supplied was -super- helpful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654007">16</a> by Jeff Lemmon
		posted on 6/30/2006 at 5:57 AM
		</div>
		<div class="comment_text"><p>Hi Ray, have you had a chance to write the CFC that reads ID3 tags yet? I'm working on a project and would love to integrate this CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654006">17</a> by Raymond Camden
		posted on 6/30/2006 at 3:12 PM
		</div>
		<div class="comment_text"><p>Ugh. Sorry for taking so long. If I don't get this published next week, someone shoot me, ok?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654017">18</a> by Joe P
		posted on 7/8/2006 at 12:39 AM
		</div>
		<div class="comment_text"><p>*bang*</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654032">19</a> by Jeff Lemmon
		posted on 7/10/2006 at 6:08 AM
		</div>
		<div class="comment_text"><p>I hate to keep busting your chops about this! I'd love to use the existing java tool, but it doesn't work in a shared environment. Thanks man!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654029">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654029">20</a> by Raymond Camden
		posted on 7/10/2006 at 6:43 AM
		</div>
		<div class="comment_text"><p>Posted. Sorry guys.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654036">21</a> by Tim Gill
		posted on 7/13/2006 at 11:20 PM
		</div>
		<div class="comment_text"><p>This presumably works for mp3 files with version 1 tags.</p><p>I have files from iTunes on my server.  They return mp3.hasID3v1Tag() as false and mp3.hasID3v2Tag() as true.  So this code creates an error when you access tag.artists because tag is undefined because getID3v1Tag fails.</p><p>The obvious solution was replacing tag = mp3.getID3v1Tag() with tag = mp3.getID3v2Tag(). That "works" though what is returned is a string (with some interesting gibberish) rather than a structure.</p><p>Any ideas?  Maybe I'm just being dense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654035">22</a> by Raymond Camden
		posted on 7/13/2006 at 11:31 PM
		</div>
		<div class="comment_text"><p>Tom, check out my second blog entry. I talk about the API the author created to let you talk to v1 or v2 tags in a simple fashion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654033">23</a> by Chris
		posted on 5/1/2007 at 9:50 PM
		</div>
		<div class="comment_text"><p>Is there any easy way to write mp3s with Java? I have two mp3s that I want to overlay into a single mp3, but I can't find any libraries for doing this. I've seen the JMF, but it appears to be a dead project, and doesn't look like it offers much support anyways.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654037">24</a> by Raymond Camden
		posted on 5/2/2007 at 5:52 AM
		</div>
		<div class="comment_text"><p>I haven't seen anything like that. _Maybe_ ffmpeg could do it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654038">25</a> by Mike Guzzo
		posted on 3/21/2008 at 11:27 PM
		</div>
		<div class="comment_text"><p>How can I use this with my server. I don't have ColdFusion admin rights but I do have admin rights to my domain space. I am at the point where I need to reference the class:</p><p>&lt;cfset mp3 = createObject("java", "org.farng.mp3.MP3File")&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654042">26</a> by PaulH
		posted on 3/22/2008 at 6:18 AM
		</div>
		<div class="comment_text"><p>see the first comment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654039">27</a> by JakeE
		posted on 3/27/2008 at 10:31 PM
		</div>
		<div class="comment_text"><p>The code read ID3 info from mp3's perfectly does anyone know how it could be modified to read id3 info from m4a or m4b files ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654040">28</a> by Ric
		posted on 6/3/2008 at 2:57 AM
		</div>
		<div class="comment_text"><p>is there a way to do this with a WMV file? anyone know of a way to read the artist or metadata from a movie file?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654043">29</a> by Raymond Camden
		posted on 6/3/2008 at 4:48 AM
		</div>
		<div class="comment_text"><p>@Ric: I'd recommend looking at ffmpeg.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654041">30</a> by Leon Chalnick
		posted on 2/3/2009 at 10:03 PM
		</div>
		<div class="comment_text"><p>Ray (or anyone else) - you mentioned being able to determine the MP3 duration using this library. I can't find the method for doing that. I think I understand how to approximate the calculation if you have the file size and bit rate...but I can't get getBitRate() to return anything other than 0...? Any tips?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654044">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654044">31</a> by Raymond Camden
		posted on 2/3/2009 at 10:37 PM
		</div>
		<div class="comment_text"><p>If you have CF8, you can cheat. Got this from an experts exchange site - which I hate, but Google showed the code while EE hid it. I just don't want to take credit.</p><p>&lt;cfset myfile = "/Volumes/MEDIA 2/Music/Gothic/Lycia - Bare.MP3"&gt;</p><p>&lt;cfset mp3File = createObject("java", "coldfusion.util.MP3File").init(myfile)&gt; <br>&lt;cfoutput&gt;mp3File.getDuration() : #mp3File.getDuration()#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654048">32</a> by Leon Chalnick
		posted on 2/3/2009 at 11:39 PM
		</div>
		<div class="comment_text"><p>Thanks Ray; that does seem to work...mostly. I'm not sure where it's coming up with the duration; while it often does correspond to what my MP3 player says, about 10/15% of the time, it doesn't.</p><p>I've actually have found references (in your blog and in houseoffusion) to another library, helliker.id3, that apparently provides similar functionality, but I can't find a download copy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654047">33</a> by todd sharp
		posted on 2/4/2009 at 12:14 AM
		</div>
		<div class="comment_text"><p>@Leon:</p><p>You could get the duration by using FFMPEG (called with cfexecute).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654046">34</a> by todd sharp
		posted on 2/4/2009 at 12:14 AM
		</div>
		<div class="comment_text"><p>....as ray already pointed out (sorry ray, haven't been paying 100% attention to the thread)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654050">35</a> by Leon Chalnick
		posted on 2/4/2009 at 12:20 AM
		</div>
		<div class="comment_text"><p>Thanks Todd. FFMPEG was mentioned in the context of writing mpeg files...didn't realize it could be used in this way too. I'll check it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654051">36</a> by Raymond Camden
		posted on 2/4/2009 at 12:24 AM
		</div>
		<div class="comment_text"><p>ffmpeg can do almost anything audio/video related. Some cool example - going into a video and grabbing stills at certain points.</p><p>The drawback is that _using_ ffmpeg can be extremely difficult. The commands are very complex imho. Once you figure it out though, it just plain works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654052">37</a> by Leon Chalnick
		posted on 2/4/2009 at 12:27 AM
		</div>
		<div class="comment_text"><p>Yeah, looks interesting...but the notion of installing it on my server...and then running cfexecute is well, not making me warm and fuzzy, heheh.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654056">38</a> by Raymond Camden
		posted on 2/4/2009 at 12:29 AM
		</div>
		<div class="comment_text"><p>Two things:</p><p>1) Any media related operation won't be super zippy. But, ffmpeg does run rather quick. I'd say... use with caution, but confidence. You want to ensure you thread/cache/handle errors.</p><p>2) There was a bug with CF+CFExecute+FFMPEG. This was fixed with a ... wait for it... hot fix. Check Adobe's site and ensure you have it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654049">39</a> by Mwoods
		posted on 6/3/2009 at 9:54 PM
		</div>
		<div class="comment_text"><p>Ray (or anyone),</p><p>Have you tried this on a network drive? I have even mapped the drive to my server but I still can't get it to read. It would be nice if I can use this code and dump it all to a database where I can search on etc.</p><p>Any help is appreciated!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654054">40</a> by Raymond Camden
		posted on 6/3/2009 at 9:59 PM
		</div>
		<div class="comment_text"><p>You have to run the CF service as a user that has permissions for the network drive.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654053">41</a> by Mwoods
		posted on 6/3/2009 at 11:30 PM
		</div>
		<div class="comment_text"><p>Ahhh Thanks I forgot about that. I will try that this evening!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654055">42</a> by David Vaccaro
		posted on 11/15/2011 at 9:39 PM
		</div>
		<div class="comment_text"><p>I know this is an old post but I am looking for a solution for wav files.   Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654058">43</a> by David Levin
		posted on 1/19/2014 at 3:21 AM
		</div>
		<div class="comment_text"><p>@David Vaccaro  I don't think WAV files have ID3 tags included in them. My understanding of a standard WAV file is that it contains audio information only and doesn't include the ability to have ID3 tags.</p><p>Source: <a href="http://disq.us/url?url=http%3A%2F%2Fanswers.yahoo.com%2Fquestion%2Findex%3Fqid%3D20110115134002AAekIzX%3A-xum5A7Rs4zwbeKtFiVg3GpzHV4&amp;cuid=3321886" rel="nofollow noopener" title="http://answers.yahoo.com/question/index?qid=20110115134002AAekIzX">http://answers.yahoo.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713654057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713654057">44</a> by Raymond Camden
		posted on 1/19/2014 at 7:42 AM
		</div>
		<div class="comment_text"><p>Wow, David L, thanks for responding to David V's comment from 2 years ago. :) I don't remember it for sure, but i'll ditto David L - WAV files don't have any metadata in it you can read.</p></div>
	</div>
</div>
		