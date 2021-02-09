
<div class="comment" id="c_1713748085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748085">1</a> by Michael
		posted on 8/2/2013 at 3:46 AM
		</div>
		<div class="comment_text"><p>Raymond there are actually more and more things you need to know before you get started. When the transition to CLI happened I spent days trying to get Java and Ant properly set up on my machine just to deal with that. Now, Node.js is added to the mix and again upon running commands from the getting started docs nothing works. Right now I have a cmd window sitting here with npm http ................. and a blinking cursor. Does anyone ever test from a PC?</p><p>I think people considering PhoneGap should be aware of all these challenges and at least read the Google groups postings. I'm not saying don't use PhoneGap but at least be aware of what issues are happening.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748072">2</a> by Raymond Camden
		posted on 8/2/2013 at 4:52 AM
		</div>
		<div class="comment_text"><p>I'm not sure it is fair to say you need to know Java or Ant. I use neither in my PG development. (I've done a bit of Java with plugins, but not much.) Yes you need to have them, but you don't need to *know* them. I called out Node here as it was called out in the FAQ.</p><p>That being said - can you provide some more context about your issue? Maybe a screen shot? I don't use Windows, but I've got a VM installed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748084">3</a> by Michael
		posted on 8/5/2013 at 6:44 PM
		</div>
		<div class="comment_text"><p>I think the specifics of my issue are less important than the general issue of Phonegap/Cordova providing clear instructions on how to build a project. It is clear that the people involved in the development of upgrades to something like CLI are not interested in accurately conveying how to implement the change. As developers I think they make a lot of assumptions about the skill set of users. Originally, Phonegap seemed to target web design people who were not necessarily developers. Now it seems to be moving away from that. <br>That is fine, but providing documentation about changes is important. As it is now the information is scattered around a bunch of different blogs. I get that updating how to docs is probably boring as hell for developers but it seems like Adobe could afford to have someone do this.</p><p>I don't think I'm alone in this opinion either. There are tons of issues with getting started docs or building a project. As I've said before though I am grateful to the community for the help. Just seems like a huge pain in the a** to simply get Hello World launched let alone all the other issues with plugins, different OS builds, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748086">4</a> by Raymond Camden
		posted on 8/6/2013 at 2:37 AM
		</div>
		<div class="comment_text"><p>So - to be clear - I work along side some of the PG team so I'm a bit biased.</p><p>I do not agree that the developers are not interested in accurate documentation. I think they are. But like all projects, and all projects run by humans, there are going to be issues. It is an unfortunate truth that many open source projects suffer from documentation issues. It doesn't excuse it, but many times docs are not the most fun thing to do.</p><p>Now - I strongly disagree with your statement that PG originally targeted people who were not developers. I simply do not see how it would be possible to build a PG app without some developer experience. Heck, most of what PG provides is a JavaScript API. You don't need to be a JS Rock Star to use it, but you need to at least know how to _read_ and write basic JS.</p><p>I go back to my original question. W/o knowing your specifics, nothing can be improved. If you did something that was documented and it is a documentation bug, then we can't fit it unless we know (or if you report it - which you can do so at <a href="http://disq.us/url?url=http%3A%2F%2Fissues.cordova.io%3AB1Vvk-EufycPh62ggEbn7DQsCmI&amp;cuid=3321886" rel="nofollow noopener" title="http://issues.cordova.io">http://issues.cordova.io</a>).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748087">5</a> by Michael Tamony
		posted on 8/6/2013 at 9:46 PM
		</div>
		<div class="comment_text"><p>I understand your bias and it is fine. It may not sound like it but I'm a fan of PG. I just think it has gotten more difficult to use as it has progressed which is frustrating. Even your own blog sort of shows that in having a 5 part series to simply have an RSS feed in the app. I have been using zRSSFeed for a while and it took about 10 minutes to set up. Now it no longer works because InApp Browser hijacks links whether I want it to or not. However, ChildBrowser used to give me some flexibility. I will get it working again but it is just tons of time.</p><p>I guess generally my problem is that PG will not build on a PC with the instructions given from PG. I haven't even tried with my Mac yet. Specifically what happens is I download node.js and I go into cmd and type C:\Users\Me&gt; npm install -g phonegap and it runs a bunch of http get or 304 or 200 lines, then it just stops. Right now it has just stopped at npm http 304 <a href="https://disq.us/url?url=https%3A%2F%2Fregistry.npmjs.org%2Fshelljs%3AgaXYDGa00JQFBEZsn0pYY9hv9BQ&amp;cuid=3321886" rel="nofollow noopener" title="https://registry.npmjs.org/shelljs">https://registry.npmjs.org/...</a> another time it stopped at an xml file. So I just sit here while it does nothing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748090">6</a> by Michael
		posted on 8/6/2013 at 10:22 PM
		</div>
		<div class="comment_text"><p>Ok, so I thought perhaps I needed to add the PATH as indicated in the Android Platform guide <a href="http://disq.us/url?url=http%3A%2F%2Fdocs.phonegap.com%2Fen%2F3.0.0%2Fguide_platforms_android_index.md.html%23Android%2520Platform%2520Guide%3A6u_3a8AON4hw4qBqmXCq7Xl4on4&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.phonegap.com/en/3.0.0/guide_platforms_android_index.md.html#Android%20Platform%20Guide">http://docs.phonegap.com/en...</a><br>Did all that and now the cmd prompt just stops at npm http 304 <a href="https://disq.us/url?url=https%3A%2F%2Fregistry.npmjs.org%2Fformidable%2F1.0.11%3AnRBuEDidbN8SgssxVDBh6Ed8E2g&amp;cuid=3321886" rel="nofollow noopener" title="https://registry.npmjs.org/formidable/1.0.11">https://registry.npmjs.org/...</a></p><p>See the frustration? Simply installing PhoneGap is a lengthy multi-step process requiring blogs, multiple getting started pages and lots of Googling. Before we would drag a folder, change some html and js and got started making an app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748092">7</a> by Raymond Camden
		posted on 8/6/2013 at 10:35 PM
		</div>
		<div class="comment_text"><p>"Even your own blog sort of shows that in having a 5 part series to simply have an RSS feed in the app."</p><p>But there is a reason for that. There is a HUGE difference (imo) between "Take this HTML and make a native app" and "Creating a well built mobile app." In theory (and I know you are having issues with this), from &lt;h1&gt;Hello World&lt;/h1&gt; to the mobile device should take a few minutes - a few hours maybe the first day you set up. But for me this is now a 2 minute process.</p><p>But that is NOT the same as using web standards and PhoneGap to build a robust, mobile friendly application. That takes time. That takes knowledge. PG is not really meant to help you in that regards since there are *multiple* solutions out there already. Heck, look at *just* the UI layer. You've got multiple different solutions to this problem. PG, rightly so, is agnostic about it.</p><p>But... I don't want to debate this (well, I do :) instead I want to focus on helping you solve your problem.</p><p>So you say it "stops" in the CMD shell. Do you get a prompt back or does it seem to hang?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748091">8</a> by Michael
		posted on 8/7/2013 at 12:31 AM
		</div>
		<div class="comment_text"><p>You can delete it. It is just a rant from one user. The Google Group has enough of them that we don't need it here. Agnostic</p><p>The cmd just hangs but I just left it and went to lunch. Tada I have an error and a fatal o9ne no less.<br>FATAL ERROR: CALL_AND_RETRY_2 Allocation failed - process out of memory</p><p>Also for the getting started docs, adt-bundle does not exist in the download from Android as far as I can see. The folder created is Android\android-sdk</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748088">9</a> by Michael
		posted on 8/7/2013 at 1:03 AM
		</div>
		<div class="comment_text"><p>One thing I have noticed from another blog about setting up 3.0 is my path for npm seems to be on our office network drive. Within PATH, this what I see:<br>User Variables:<br>\\sbcera-minotaur\appdata$\mtamony\Application Data\npm;C:\Program_Files\Android\android-sdk\platform-tools;C:\Program_Files\Android\android-sdk\tools</p><p>System Variables(only showing relevant ones):<br>C:\Program Files\Android\android-sdk\platform-tools;C:\Program Files\Android\android-sdk\tools;C:\Program Files\Java\jdk1.7.0_09\bin;C:\Program Files\Java\jdk1.7.0_09\bin\javac.exe;C:\Program Files\ant\bin;C:\Program Files\nodejs\</p><p>The blog mentions:<br> User variables:<br>    Path: C:\Users\Joram\AppData\Roaming\npm<br>        Where as Joram is my username and should be yours.<br>System variables:<br>    Path: C:\Program Files\nodejs\</p><p>Maybe the User variables is the problem but I simply followed the node.js download directions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748089">10</a> by Raymond Camden
		posted on 8/7/2013 at 1:57 AM
		</div>
		<div class="comment_text"><p>"Also for the getting started docs, adt-bundle does not exist in the download from Android as far as I can see. The folder created is Android\android-sdk"</p><p>So the guide says this: Install the Android SDK from <a href="http://disq.us/url?url=http%3A%2F%2Fdeveloper.android.com%2Fsdk%3AGvu-8aQkql9XIfzzVJQHW3SCOCo&amp;cuid=3321886" rel="nofollow noopener" title="developer.android.com/sdk">developer.android.com/sdk</a>. You may be presented with a choice of where to install the SDK, otherwise move the downloaded adt-bundle tree to wherever you store development tools.</p><p>If your right (I haven't downloaded the SDK in a while) this could be confusing. Frankly I think they could just remove "adt-bundle tree" and just go with: "otherwise move the downloaded folder to ...."</p><p>That is more generic but the "adt-bundle" thing tripped you up so it wouldn't hurt. Filing a bug report for that now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748093">11</a> by Raymond Camden
		posted on 8/7/2013 at 1:59 AM
		</div>
		<div class="comment_text"><p>FYI, link for last bug: <a href="https://disq.us/url?url=https%3A%2F%2Fissues.apache.org%2Fjira%2Fbrowse%2FCB-4516%3ApQEn21ajdaNl8l6IAqYI67HVz0E&amp;cuid=3321886" rel="nofollow noopener" title="https://issues.apache.org/jira/browse/CB-4516">https://issues.apache.org/j...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748071">12</a> by Raymond Camden
		posted on 8/7/2013 at 2:00 AM
		</div>
		<div class="comment_text"><p>To your next issue - the npm path being on a share seems very suspect. You mentioned that was following the Node.js download instructions, but I do not see that myself. WHen you ran the installer, did it _ask_ you where to install? Maybe you can uninstall/reinstall and ensure it uses a local folder. If it defaulted somehow to the network path, just change it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748073">13</a> by Michael
		posted on 8/7/2013 at 2:10 AM
		</div>
		<div class="comment_text"><p>I also misread "debate" as "delete" so I could be part of the problem too. Feel free to delete though. I don't want to take up your comment space with this debate. Let's just say I'm write and PhoneGap is more complex to set up now. Haha.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748074">14</a> by Michael
		posted on 8/7/2013 at 2:15 AM
		</div>
		<div class="comment_text"><p>Wow, how about "I'm right". I hate not being able to edit posts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748075">15</a> by Michael
		posted on 8/7/2013 at 3:04 AM
		</div>
		<div class="comment_text"><p>Node.js defaults to C:\Program Files\Node.js which seems local to me. Tried there same error. Moved install to my Users folder, ran npm install -g phonegap. Same problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748076">16</a> by Raymond Camden
		posted on 8/7/2013 at 4:31 AM
		</div>
		<div class="comment_text"><p>So to be clear - you get the long wait and then "FATAL ERROR: CALL_AND_RETRY_2 Allocation failed - process out of memory"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748077">17</a> by Michael
		posted on 8/7/2013 at 6:42 PM
		</div>
		<div class="comment_text"><p>Yes.</p><p>I'm now trying to investigate ANT, JAVA, and all these various PATH configurations.</p><p>This blog, <a href="http://disq.us/url?url=http%3A%2F%2Fwww.andrewsavory.com%2Fblog%2F2013%2F2517%3AaXtLBnXv4Jb8wTV7JrMiYXEJj7g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.andrewsavory.com/blog/2013/2517">http://www.andrewsavory.com...</a><br>mentions downloading Cordova from Apache and using that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748078">18</a> by Raymond Camden
		posted on 8/7/2013 at 8:18 PM
		</div>
		<div class="comment_text"><p>1) To your first error, I really have no idea. I've installed the CLI on OSX and Windows, and while I've only done a bit of Windows dev with it, I've never seen that. At this point I'd probably recommend the Google group. (For Phonegap.) To be clear, I'm not saying to go away (grin), I'm just trying to provide another forum with more intelligent people. ;)</p><p>2) "This blog, <a href="http://disq.us/url?url=http%3A%2F%2Fwww.andrewsavory.com%2Fblog%2F2013%2F2517%3AaXtLBnXv4Jb8wTV7JrMiYXEJj7g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.andrewsavory.com/blog/2013/2517">http://www.andrewsavory.com...</a><br>mentions downloading Cordova from Apache and using that." To be clear, there is PhoneGap (our implementation) and Cordova (the Apache open source project). The cordova CLI actually wraps the cordova CLI and provides a bit more functionality.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748079">19</a> by Michael
		posted on 8/7/2013 at 8:40 PM
		</div>
		<div class="comment_text"><p>Well at least I've proven that starting a new Phonegap project is more difficult.</p><p>Have you set up a project in a non-VMWare environment? Like on an actual PC running Windows?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748080">20</a> by Raymond Camden
		posted on 8/8/2013 at 1:17 AM
		</div>
		<div class="comment_text"><p>Nope, just a VM, but i honestly doubt that would make a difference. (Well, I did do PG on Windows about 1.5 years ago, but I've been just OSX for the last year.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748082">21</a> by Michael
		posted on 8/8/2013 at 1:55 AM
		</div>
		<div class="comment_text"><p>I was able to get it working using cordova install and this blog <a href="http://disq.us/url?url=http%3A%2F%2Fwww.andrewsavory.com%2Fblog%2F2013%2F2517%3AaXtLBnXv4Jb8wTV7JrMiYXEJj7g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.andrewsavory.com/blog/2013/2517">http://www.andrewsavory.com...</a><br>I have no idea why the phonegap installation through cli was giving that error. I also have no idea what the directions for getting started on phonegap site are talking about aside from trying to make it look simple.</p><p>If anyone has the misfortune of reading all this discussion Raymond and I had be sure you really look at the PATH settings for ANT, JAVA, Node.</p><p>Thanks Raymond for the discussion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748081">22</a> by sunnysunny987
		posted on 8/30/2013 at 2:00 PM
		</div>
		<div class="comment_text"><p>I started using PG 3.0 a couple of days ago and I was mad, because so many new things scared me: node.js and the whole new build and download stuff with PG 3.0.</p><p>However the getting started tutorial for PG 3.0 is very good and it is working and I really have to say congratulations that you provide such a good quality that everything works and stuff. Only very few companies can achieve this.</p><p>Thank you very much!!! Great job!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748083">23</a> by Andrea
		posted on 8/30/2013 at 2:52 PM
		</div>
		<div class="comment_text"><p>I am with Michael.  Before Cordova 3.0 everything was working ok.  Then started Phonegap 3.0 and setting stuff up was a PITA.  I finally got the environment working.  There should be a main document that says "Set this up like this and you are golden". I have not found it.</p><p>Now I set up my old project (2.8) Cordova plugins in 3.0 helloCordova project and moved my files over and the main activity fails.  I replace the helloCordova names with my applicable names and I thought I could do this to "upgrade" my app.  I guess I should not have my asset files at the root? I should have the manifest file not at the root?  I don't understand the structure and how the files are built to make the apk.  Once again, there should be a main document that says "When you build for platform X these are the files that are used and this is what needs to be set up in your IDE". It could be somewhere but I have not found it. The documentation is not specific.</p></div>
	</div>
</div>
		