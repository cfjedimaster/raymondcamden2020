
<div class="comment" id="c_1713673701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673701">1</a> by Cutter
		posted on 10/29/2007 at 11:37 PM
		</div>
		<div class="comment_text"><p>Somebody found the Harry Potter books....;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673706">2</a> by Raymond Camden
		posted on 10/29/2007 at 11:39 PM
		</div>
		<div class="comment_text"><p>Somebody found them and read them all over a 2 month period. Don't laugh - I'm close to renaming myself "ColdFusion Wizard". Although "ColdFusion Death Eater" sounds cooler.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673702">3</a> by Will
		posted on 10/30/2007 at 12:29 AM
		</div>
		<div class="comment_text"><p>I did something similar to this when CF7 first came out. Because my mail server was on my web server, I setup directory watcher to watch an email attachment folder. The folder was tied to an email I only sent photos from my camera phone to. I then used a custom tag (pre-cfimage of course) to resize those and also create thumbnails and automatically put them up onto my website. Although there are tons of places you can upload camera phone photos to nowadays, I'm sure that little app would've been much nicer in CF8 especially with the new cfimage. Great tutorial and intro to the DW event gateway! Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673708">4</a> by sal
		posted on 10/30/2007 at 3:03 AM
		</div>
		<div class="comment_text"><p>event gateways in all editions???</p><p>Schweeet!</p><p>;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673707">5</a> by Scott Bennett
		posted on 10/30/2007 at 8:19 AM
		</div>
		<div class="comment_text"><p>Nice! I haven't used event gateways yet, I knew they were there but I never really paid attention to what they were, but now I can see that I have been missing out. Now that I'm taking the time to read about them, I have already thought of a few things I can use them for. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673715">6</a> by Sam Farmer
		posted on 10/30/2007 at 8:01 PM
		</div>
		<div class="comment_text"><p>Very cool example of two cool CF features.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673720">7</a> by RobW
		posted on 10/31/2007 at 12:40 AM
		</div>
		<div class="comment_text"><p>Nice tip about using cflog with the directory watcher gateway. I set up one recently and didn't think of doing something like that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673713">8</a> by Giancarlo Gomez
		posted on 10/31/2007 at 3:36 AM
		</div>
		<div class="comment_text"><p>Hello Ray,</p><p>I tried to implement a feature similar to yours but ended up not doing it do to a problem I encountered (Windows Only Testing). In a scenario where FTP is involved a file is automatically  placed in the folder when an upload is executed. Therefore, if your client is uploading a 25mb file and your directory watcher runs while only 10k has been uploaded it will set of an ADD EVENT. Of course at this point you would then try to run your code and then would fail because the file was not complete. The one good thing is that an event would be called again when the file finishes uploading (sends a CHANGE EVENT). Therefore while writing this message I realized hey why not just wrap a cftry around my function and if it fails well ignore and continue, since it would be called again on the CHANGE EVENT. Of course you would have to tie the same function to your ADD and CHANGE event and if that is ok then there is no problem.</p><p>Instead I just created a scheduled task that looks at the directory and compares the contents based on the last read and when it find a file which has not changed (upload complete) it runs the task.</p><p>See my task waits for a zip file containing an upload and a pdf form generated by the CRM. The app reads the zip makes sure contents are there, reads the pdf and based on the info provided in the pdf, enters info into db and moves the contents of the zip to the appropriate directory and deletes the zip uploaded.</p><p>My example can work with either the gateway or the scheduled task. Funny how sometimes you just need to type things out and the answer comes right back at you. Oh well, I already wrote both so either will work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673714">9</a> by Raymond Camden
		posted on 10/31/2007 at 8:26 PM
		</div>
		<div class="comment_text"><p>Ah good point Giancario - and I now remember reading about this exact same problem. You could always just use the scheduled task to copy the files to the folder the EG uses. Why do that instead of just using the scheduled task to do it all? It would allow me (site admin) to drop files in manually via Copy/Paste, and not FTP.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673712">10</a> by Giancarlo Gomez
		posted on 11/1/2007 at 4:54 AM
		</div>
		<div class="comment_text"><p>Hello Ray,</p><p>The Scheduled task does do it, the only thing is that there is up to a 3:00 minute delay for processing since I run it at 1.5 min intervals. Basically when you add a file and the ST runs it adds the file to a saved query and then will have to compare a minute and a half later. SO you could drop files into the folder but the processing time may take longer.</p><p>The thing is that if a file is corrupt / broken on upload and CF creates an error I log it and move the file to a rejectedUploads directory. So if it fails on the add event I may enter an unnecessary log entry (I am guessing I will not be able to move the file because it should be locked by the FTP process).</p><p>At this point I am bothered by the delay, so again with a little bit of typing I think what I will do is make sure to ignore a read error on the add event and place the processing CFC back to work on the EG rather than the ST.</p><p>The process should run again onChange event which at that point I will process all error properly. THe only thing I see happening here is probably having some files that failed on the add event and never ran an onChange event. WHich I can then just have a ST clean up once a day.</p><p>Going to test now .....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673721">11</a> by Giancarlo Gomez
		posted on 11/1/2007 at 7:02 AM
		</div>
		<div class="comment_text"><p>It worked .... back to EG processing only.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673717">12</a> by David
		posted on 1/11/2008 at 3:04 AM
		</div>
		<div class="comment_text"><p>Hey Ray, I'm having trouble getting the event to fire...I've created a Gateways folder under the webroot, and have the listener CFC and gateway config file in it. Also put in an application.cfc that will email me whenever onError or OnRequestStart are fired. But whenever I upload a new file (or changed file) into the monitored folder, nothing happens. (I've got both the addFunction and changeFunction (in the config) calling the same CFC method). If I call another template in the folder, though, I get the email from the OnRequestStart -- so I know the application.cfc is working. Any ideas what else to check?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673716">13</a> by Raymond Camden
		posted on 1/11/2008 at 4:06 AM
		</div>
		<div class="comment_text"><p>Yes, the eventgateway and exception logs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673719">14</a> by Michael
		posted on 11/20/2008 at 3:01 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I am having a similar problem as David (above) is having. The gateway instance status is "Running", only the CFC method is not invoked when a file is added to the folder. You suggested looking in the eventgateway and exception logs, but I find no errors associated with the gateway. The logs do however indicate gateway initilization, but nothing further.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673723">15</a> by Raymond Camden
		posted on 11/20/2008 at 4:33 AM
		</div>
		<div class="comment_text"><p>Per David's reply, an EG call is NOT a web call. Application.cfc will only run for web calls, not EG calls.</p><p>Maybe try using cflog in your CFC methods to see if they are being run.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673725">16</a> by Michael
		posted on 11/20/2008 at 6:37 AM
		</div>
		<div class="comment_text"><p>Thanks for the reply! I just verified the CFC methods are not being invoked by the gateway. This is pretty puzzling for me as I am not VERY familiar with Java. This should have been a breeze for me.</p><p>1. gateway services are enabled.<br>2. gateway instace:</p><p>Gateway ID ----&gt; Watcher Test<br>Gateway Type ----&gt; Directory Watcher<br>CFC Path ----&gt; C:\Inetpub\wwwroot\tests\watcher.cfc<br>Configuration File ----&gt;C:\Inetpub\wwwroot\tests\config.cfg<br>Status ----&gt; Running</p><p>3. Config:</p><p># The directory you want to watch. If you are entering a Windows path <br># either use forward slashes (C:/mydir) or escape the back slashes (C:\\mydir). <br>directory=C:/Inetpub/wwwroot/tests/watch</p><p># Should we watch the directory and all subdirectories too <br># Default is no. Set to 'yes' to do the recursion. <br>recurse=no</p><p># The interval between checks, in miliseconds <br># Default is 60 seconds <br>interval=10000</p><p># The comma separated list of extensions to match. <br># Default is * - all files <br>extensions=*</p><p># CFC Function for file Change events <br># Default is onChange, set to nothing if you don't want to see these events <br>changeFunction=</p><p># CFC Function for file Add events <br># Default is onAdd, set to nothing if you don't want to see these events <br>addFunction=onAdd</p><p># CFC Function for file Delete events <br># Default is onDelete, set to nothing if you don't want to see these events <br>deleteFunction=onDelete</p><p>--------------------------------------------------<br>4. CFC:</p><p>&amp;lt;cfcomponent&amp;gt;</p><p>&amp;lt;cffunction name="onAdd" access="remote"&amp;gt;</p><p>	&amp;lt;cfargument name="CFEvent" type="struct" required="yes"&amp;gt;</p><p>   &amp;lt;cflog file="Watcher" text="File Added"&amp;gt;</p><p>&amp;lt;/cffunction&amp;gt;</p><p>&amp;lt;cffunction name="onDelete" access="remote"&amp;gt;</p><p>	&amp;lt;cfargument name="CFEvent" type="struct" required="yes"&amp;gt;</p><p>   &amp;lt;cflog file="watcher" text="File Deleted"&amp;gt;</p><p>&amp;lt;/cffunction&amp;gt;</p><p>&amp;lt;/cfcomponent&amp;gt;</p><p>Sorry for the long post. I have it about as simple as it could get and can't get it working. Let me know if you can think of anything else.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673724">17</a> by Raymond Camden
		posted on 11/25/2008 at 5:23 PM
		</div>
		<div class="comment_text"><p>Dumb question - but do you see that the interval is 10000 seconds? That's a HUGE interval. Close to 20 minutes. If you change it to 10 and test again, do you see results?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673728">18</a> by Michael
		posted on 11/25/2008 at 8:46 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks for the suggestions. I was able to get this working:</p><p>1. Stripped config file down to the following:<br>directory=C:/Inetpub/wwwroot/tests/watch<br>interval=10000<br>2. Added access="public" to CFC and each CFC functions (onAdd, onChange, onDelete).</p><p>Not sure which of the two changes made the fix. I'll have to back and try to remove the access properties to verify.</p><p>As far as the interval=10000 goes, I am getting a directory check every ten seconds. I am convinced the interval is measured in milliseconds. If my math serves me correctly 10000/1000 equals 10.</p><p>Again, thank you so much for your help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673730">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673730">19</a> by Raymond Camden
		posted on 11/25/2008 at 9:27 PM
		</div>
		<div class="comment_text"><p>Duh, it plainly said milliseconds and I misread it. Sorry. :)</p><p>Happy you got it working!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673731">20</a> by Tarek Jubaer
		posted on 5/13/2009 at 1:24 PM
		</div>
		<div class="comment_text"><p>I can not find CF Admin &gt; Data &amp; Services &gt; Event Gateways &gt; Gateway Instances option in my local CF admin panel.</p><p>Is there anything that I need to install/configure?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673732">21</a> by Raymond Camden
		posted on 5/13/2009 at 3:34 PM
		</div>
		<div class="comment_text"><p>Do you have CF Standard? It's only available in Enterprise.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673729">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673729">22</a> by Raymond Camden
		posted on 5/13/2009 at 9:08 PM
		</div>
		<div class="comment_text"><p>Sorry - I was on crack. EGs are available in standard, just limited in terms of performance. You will find them NOT under Data and Services, but a root level item, Event Gateways.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673814">23</a> by claude raiola
		posted on 4/1/2014 at 7:21 AM
		</div>
		<div class="comment_text"><p>Hi</p><p>i am trying to get this to work however i to not see any results even though the gateway is running in cfadmin the in /out values remain 0</p><p>and it does not seem to be creating the log file</p><p>Here is my cfc i simply have removed the image editing code as i want to be able to use this for a different application</p><p>&lt;cfcomponent&gt;</p><p>&lt;cffunction name="onAdd"&gt;</p><p>    &lt;cfargument name="cfevent"&gt;<br>    &lt;cfset var myfile = arguments.cfevent.data.filename&gt;<br>    &lt;cfset var newdest = getDirectoryFromPath(myfile)&gt;</p><p>    &lt;cflog file="dirwatcher" text="#myfile# is valid"&gt;</p><p>     &lt;!--- copy to ready ---&gt;<br>    &lt;!--- newdest is the same path as spool, so 'cheat' and switch to ready ---&gt;<br>    &lt;cfset newdest = replace(newdest, "/xmldata", "/xmldata/processed")&gt;<br>    &lt;cffile action="move" source="#myfile#" destination="#newdest#/#getFileFromPath(myfile)#"&gt;</p><p>    &lt;cflog file="dirwatcher" text="Moved to #newdest#/#getFileFromPath(myfile)#"&gt;</p><p>&lt;/cffunction&gt;</p><p>&lt;/cfcomponent&gt;</p><p>the config file is</p><p># The directory you want to watch. If you are entering a Windows path<br># either use forward slashes (C:/mydir) or escape the back slashes (C:\\mydir).<br>directory=C:/home/<a href="http://disq.us/url?url=http%3A%2F%2Fsvr.trackingcentral.com.au%2Fwwwroot%2Fnal%2Fxmldata%3AE3l_mNlwkTWrsG74qgi_V942uYY&amp;cuid=3321886" rel="nofollow noopener" title="svr.trackingcentral.com.au/wwwroot/nal/xmldata">svr.trackingcentral.com.au/...</a></p><p># Should we watch the directory and all subdirectories too<br># Default is no. Set to 'yes' to do the recursion.<br>recurse=no</p><p># The interval between checks, in miliseconds<br># Default is 60 seconds<br>interval=6000</p><p># The comma separated list of extensions to match.<br># Default is * - all files<br>extensions=*</p><p># CFC Function for file Change events<br># Default is onChange, set to nothing if you don't want to see these events<br>changeFunction=</p><p># CFC Function for file Add events<br># Default is onAdd, set to nothing if you don't want to see these events<br>addFunction=onAdd</p><p># CFC Function for file Delete events<br># Default is onDelete, set to nothing if you don't want to see these events<br>deleteFunction=</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673819">24</a> by Raymond Camden
		posted on 4/1/2014 at 5:57 PM
		</div>
		<div class="comment_text"><p>Nothing seems to come to mind - but I can say I haven't used this code since 2007. Did you try the eventgateway.log file?</p></div>
	</div>
</div>
		