
<div class="comment" id="c_1713731987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731987">1</a> by CF Gurney
		posted on 5/4/2011 at 11:28 PM
		</div>
		<div class="comment_text"><p>For those of you new to jQuery Mobile (jQM), be aware that the default files included by Adobe are version 1.0a3. A significant amount of change has happened since that release, so our advice is to get the latest release files if you are doing local work (this link gets you to tips about accessing the daily builds - <a href="http://disq.us/url?url=http%3A%2F%2Fjquerymobile.com%2Fblog%2F2011%2F04%2F16%2Fnightly-and-up-to-date-builds%2F%29%3A9y529_uvuaTMio0dhHB7z1J62hg&amp;cuid=3321886" rel="nofollow noopener" title="http://jquerymobile.com/blog/2011/04/16/nightly-and-up-to-date-builds/)">http://jquerymobile.com/blo...</a> or get release a4.1 (referenced here <a href="http://disq.us/url?url=http%3A%2F%2Fjquerymobile.com%2Fdownload%2F%29%3AiJZqmvLwgkY1eX6E3g6uuRKyGQs&amp;cuid=3321886" rel="nofollow noopener" title="http://jquerymobile.com/download/)">http://jquerymobile.com/dow...</a>.</p><p>The jQM team is tackling some key issues leading up to the 1.0 release, so it is important to keep up with their blog.</p><p>In general, the jQM integration is helpful. However, once a code block is inserted, you will need to be familiar with the various jQM attributes to handle more detailed presentations. Some of the code complete will help, but you have to know something about which 'data-' attributes to use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732003">2</a> by Raymond Camden
		posted on 5/4/2011 at 11:47 PM
		</div>
		<div class="comment_text"><p>I wonder if there is a simple way to change the defaults for the libraries?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732004">3</a> by CF Gurney
		posted on 5/5/2011 at 12:40 AM
		</div>
		<div class="comment_text"><p>@ray There seem to be two dirs on MacOS that have related files (don't have this installed on my WIN7 instance).</p><p>/Applications/Adobe Dreamweaver CS5.5/Configuration/Objects/jquery/</p><p>/Applications/Adobe Dreamweaver CS5.5/Configuration/Third Party Source Code/jquery-mobile/</p><p>This latter dir has the actual jquery (1.5) and the jQM js and css a3 files and associated images. There must be a place to change the "create from..." template so that the includes are what is in this directory. I just don't know DW well enough from this aspect to make a recommendation. Maybe your Adobe colleagues might provide some advice, Ray?</p><p>The larger question is what should you put into production? Anything? Wait? Depends? All of the above and your mileage may vary?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732005">4</a> by Joseph Potthast
		posted on 5/5/2011 at 4:12 AM
		</div>
		<div class="comment_text"><p>Well I will admit I've been a Dreamweaver user from the very begging. The biggest reason is it is what I was taught with when I started learning Coldfusion. In previous classes I was taught on notepad, MS Frontpage (it was a long time ago sad to say) and Dreamweaver. Between those three DW was of course the best. I used it as a tool to oversee the whole site making use of the basic features like file renaming across the whole site, code autocomplete, etc. I know they weren't exclusive to DW but it's what I used. I will say I am intrigued about with the jqm support as a tool to learn some of the set up but as with CF I plan to do most of my serious coding by hand.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731988">5</a> by Danilo Celic
		posted on 5/5/2011 at 6:31 AM
		</div>
		<div class="comment_text"><p>You can update the starter pages (File -&gt; New -&gt; Page From Sample -&gt; Mobile Starters) by editing files in the following locations:<br>Windows: <br>C:\Program Files\Adobe\Adobe Dreamweaver CS5.5\Configuration\BuiltIn\Mobile Starters\<br>Mac:<br>/Applications/Adobe Dreamweaver CS5.5/Configuration/BuiltIn/Mobile Starters/<br>Edit the HTML files to point to the newer versions of the files, which can be found found at:<br>Windows:<br>C:\Program Files\Adobe\Adobe Dreamweaver CS5.5\Configuration\Third Party Source Code\jquery-mobile\<br>Mac:<br>/Applications/Adobe Dreamweaver CS5.5/Configuration/Third Party Source Code/jquery-mobile/</p><p>However, please keep in mind that there have been changes in the code that jQuery Mobile uses, and it's possible that the starter files won't work, or won't work well once you're updated to the latest JQM files, so back up everything. The JQM widgets may also insert "old" code formats for certain widgets or pages, etc.</p><p>Also, please note that your changes will likely be overwritten if/when CS5.5 is updated to have the latest files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731990">6</a> by Raymond Camden
		posted on 5/5/2011 at 6:33 AM
		</div>
		<div class="comment_text"><p>Thanks both CF Gurney and Danilo!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731993">7</a> by Mike
		posted on 5/5/2011 at 6:39 AM
		</div>
		<div class="comment_text"><p>Will these features be available in CF Builder?</p><p>I just bought an upgrade to CFBuilder 2 (less than a year after buying version 1) so I don't feel like buying DW :(</p><p>Mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731992">8</a> by Raymond Camden
		posted on 5/5/2011 at 6:41 AM
		</div>
		<div class="comment_text"><p>@Mike - That's the thing - they aren't. You can do jQuery hinting, but it's for 1.3, and frankly, not as descriptive as DW. You _could_ add an extension to CFB that did some of what DW does in terms of building. All the Android stuff is possible via command line and a CFB extension can run command line via cfexecute. So it's _possible_.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731994">9</a> by Tom Jenkins
		posted on 5/17/2011 at 12:30 PM
		</div>
		<div class="comment_text"><p>I would love to use this. Followed your steps above to the letter but get the error below when I try to build and emulate:</p><p>CUsing latest target:</p><p>ERROR: Cannot copy phonegap files. Terminating.java.io.FileNotFoundException: com.interdirect.firstapp\src\com\interdirect\firstapp\<a href="http://disq.us/url?url=http%3A%2F%2FDefaultActivity.java%3AChQ_s-kfcGhB68NbJHvMVWIT-WI&amp;cuid=3321886" rel="nofollow noopener" title="DefaultActivity.java">DefaultActivity.java</a> (The system cannot find the path specified)</p><p>ERROR: Clone failed<br>OPERATION CANCELED</p><p>Any help would be massively appreciated as I have used DW for 10 years now and don't want to have to start learning the eclipse IDE unnecessarily (Recommended on the phonegap website) :(</p><p>Thank you</p><p>:D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731995">10</a> by Raymond Camden
		posted on 5/17/2011 at 3:57 PM
		</div>
		<div class="comment_text"><p>Shoot- not sure what tell you here. I'd recommend posting to the Adobe Dreamweaver forums: <a href="http://disq.us/url?url=http%3A%2F%2Fforums.adobe.com%2Fcommunity%2Fdreamweaver%3A_awSTF4ilrXmvgKWFwEBzYLno4w&amp;cuid=3321886" rel="nofollow noopener" title="http://forums.adobe.com/community/dreamweaver">http://forums.adobe.com/com...</a></p><p>And if you can't ever get Dreamweaver to work, you can switch to Eclipse as described here - <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2011%2F3%2F23%2FThoughts-on-PhoneGap%3AQ9FnANWgfUs4mOOeHM7cfmHCM1c&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2011/3/23/Thoughts-on-PhoneGap">http://www.coldfusionjedi.c...</a></p><p>I'd post to the DW forums first. Let us know please!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731996">11</a> by Patrick Whittingham
		posted on 6/22/2011 at 6:33 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Are you running on a MAC or PC? I'm getting the 'common' error even with DW CS5.5 build 5344. First, I'm getting an error with Easy Install for Android. Second, when I manually install, JAVA SE and Android SDK, the "Application Setting..." is grayed out. Do you have any solutions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713731997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713731997">12</a> by Raymond Camden
		posted on 6/22/2011 at 6:34 PM
		</div>
		<div class="comment_text"><p>I'm on PC. You? Not sure what to recommend for this - I do know there was an update released. You may want to see if that helps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732001">13</a> by Utsav
		posted on 3/22/2012 at 9:41 AM
		</div>
		<div class="comment_text"><p>Dreamweaver-CS-5.5 is too Good.You can Build an app within a day If you are ready with Your concept.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732000">14</a> by Bijoy Mistry
		posted on 8/25/2013 at 9:01 PM
		</div>
		<div class="comment_text"><p>I want to do php,html,joomla, etc coding in my ceel. Is this possible if yes in which device. I want to buy that and use. As I travel a lot and I want to use this while...</p><p>Pls help</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732002">15</a> by Raymond Camden
		posted on 8/25/2013 at 9:21 PM
		</div>
		<div class="comment_text"><p>I would try out the most recent DW (Dreamweaver CC), and see if you like it. As far as devices you can play with, the easiest is any recent Android device.</p></div>
	</div>
</div>
		