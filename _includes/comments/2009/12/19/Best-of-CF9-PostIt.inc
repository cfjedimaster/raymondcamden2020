
<div class="comment" id="c_1713720654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720654">1</a> by Scott
		posted on 12/19/2009 at 10:09 PM
		</div>
		<div class="comment_text"><p>Ray- having an issue downloading the postit code...Looks interesting though!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720659">2</a> by Kumar
		posted on 12/19/2009 at 10:22 PM
		</div>
		<div class="comment_text"><p>Looks really good, time to try it out.</p><p>Ext styling really looks good on applications, it looks more polished and proffesional. You could stick with the default styles for an enterprise application if using Ext.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720663">3</a> by Corey
		posted on 12/19/2009 at 11:32 PM
		</div>
		<div class="comment_text"><p>Thanks for the review, and I'm sorry for so many issues with the installer. Honestly, the biggest challenge with the installer was time. At the 11th hour, I realized there was a problem with the PGSQL dialect. I thought I covered everything, but I think I ended up opening up a can of worms instead of making many fixes.</p><p>A few clarity pointers. First, the download size is enormous because it includes the full ExtJS 3.0 library. Really, it would be best to download it from ExtJS, and this will actually be a requirement when PostIt is released (i.e. it will not be packaged with the download in order to adhere to ExtJS licensing terms).</p><p>As for the {@URL}... that should have been replaced by the installer. I use ANT to build most of my apps against shared resources &amp; the installer was supposed to mimic the ANT build. Shame on me for missing that.</p><p>As for the surveys themselves, I also agree that a hard coded path isn't a best practice. The app determines the path by the setting in the config file. I personally set it to use a mapped folder, IF I even use take.cfm. The idea behind this is that take.cfm could be replaced by anything, ideally your own display page. Heck, it doesn't even have to be CF (though why would you want to use anything else? :) You just need to be able to read the XML.</p><p>In order to use the Server.cfc, you need to set the path in the CF Admin to point to the one included in PostIt. This is responsible for setting some hard coded latitude/longitude coordinates used in the survey reporting. Not everyone is going to want to change the Server.cfc path, so the checkbox in the installer will run the code for you (i.e. bypass Server.cfc). This is only useful for getting started... i.e. to see if you like the app enough to use it, then you'll want to use the Server.cfc method.</p><p>Finally, I agree that CFC's &amp; their native ability to output JSON would be better. This app was originally written with ExtJS 2.0, which had some issues with CF's JSON output. There were situations where the JSON had to be manually constructed. It's since been fixed, but part of my choice in using this app was to show off that a CF8 app could be converted to a CF9 app.</p><p>Again, sorry for the installer issues. More testing/time should clear those up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720665">4</a> by Raymond Camden
		posted on 12/20/2009 at 12:06 AM
		</div>
		<div class="comment_text"><p>Corey, if you want to offer up a slimmer download, please do. You can post the URL here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720667">5</a> by Todd Sharp
		posted on 12/20/2009 at 1:21 AM
		</div>
		<div class="comment_text"><p>Why include/require ExtJS at all when it's already included in CF9 (including a full license - a $1200 value from what I understand).  Couldn't you just point at /CFIDE for the scripts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720666">6</a> by Corey
		posted on 12/20/2009 at 3:54 AM
		</div>
		<div class="comment_text"><p>I've temporarily posted a slimmer version of the file at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.ecorgroup.com%2Fpostit_slim.zip%3Ajr32AiEDbnqehScrBcs78VCz9YY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.ecorgroup.com/postit_slim.zip">http://www.ecorgroup.com/po...</a>. Including the docs, it's a little under 2MB. To use this, you'll need to download ExtJS 3.0 (<a href="http://disq.us/url?url=http%3A%2F%2Fextjs.com%3AYyXL5_ckvL5N_rTOisZEHsy8bXU&amp;cuid=3321886" rel="nofollow noopener" title="extjs.com">extjs.com</a>). You'll need to modify the JS path in the HTML file.</p><p>I have intentions of releasing this in some form on RIAForge at some point after I work out the installer issues. There were also a few things thrown in purely for demo purposes that I'd like to rework for practical use of the tool.</p><p>@Todd - I really wish I could. However; there are two flavors of ExtJS, the full version with the UI components and the core version that focuses almost entirely on data I/O. According to the docs, CF uses a customized version of the core. In a nutshell, Adobe took the core version and added a few basic JS classes from the full version, which is why things like cfmessagebox work. They also added a CSS theme... which is why the JS tools have that grey look. BTW - PostIt is completely skinnable.</p><p>Also, for everyone, ExtJS is kind of open source, regardless of version. Costs come into play when you release a commercial application or redistribute it commercially, and it's only relevant to the full version. However; I believe it's pretty reasonable... I think it's $275/developer for unlimited use. There is also an extra advantage to not using the version baked into CF... Google hosts ExtJS-Core on their CDN, along with JQuery &amp; some other AJAX libraries. However; for simple apps that don't need a big GUI or just pieces, the CF version is going to be simpler to work with.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720664">7</a> by Corey
		posted on 12/20/2009 at 3:59 AM
		</div>
		<div class="comment_text"><p>@Ray - I forgot to ask, did you happen to catch what kind of issues were cropping up with the debugging turned on? I didn't have any issues with that so didn't even think to check. Maybe you could PM me so I can address them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720662">8</a> by Raymond Camden
		posted on 12/20/2009 at 9:18 PM
		</div>
		<div class="comment_text"><p>@Corey: I didn't test w/ debugging on. When Brian said it was an issue, I just insured it was turned off.</p><p>Also - one small nit. Your code uses a include() udf. Don't forget CF9 supports include in script now. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720675">9</a> by Marko Simic
		posted on 12/25/2009 at 6:48 PM
		</div>
		<div class="comment_text"><p>I really wanted to test this app, but had no luck.<br>I followed, with full attention (no slacking :)), installation instructions and tips provided by Ray and Brain, and still could not make it work. Maybe some issues with PostgreSQL (no MySQL installed)?</p><p>UI looks very nice. Survey maker is something that I would like to check out and see how it's working.</p><p>Corey, is it possible to set application online?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720668">10</a> by Corey
		posted on 12/26/2009 at 7:54 AM
		</div>
		<div class="comment_text"><p>Marko - Can you provide some more detail around the issues? Any error messages?</p><p>The app was built &amp; tested against PostgreSQL 8.3. It's possible there could be a DB version issue... you may want to try adding this.ormsettings.dialect='PostgreSQLDialect' to Application.cfc in the &lt;cfscript&gt; block at the top.</p><p>As for an online demo, I'll see what I can do. I know I won't have time until after things settle down from the holidays though. In the meantime, I'm happy to help troubleshoot if you can post a little more detail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720670">11</a> by Marko Simic
		posted on 12/31/2009 at 11:45 AM
		</div>
		<div class="comment_text"><p>Corey, Sorry for late response but end of the year is always bit chaotic.<br>However, I installed it again on my home PC and this time I succeeded :) Only difference was that I unpacked archive in "qa"</p><p>dir instead "postit/qa".</p><p>All I can say it was worth of installation hassle  ;)<br>Application UI is excellent. I have no experience working with this type of software, but hence I created a survey in single</p><p>breath, I found it, from aspect of intuitiveness and usability quite a peace of work.</p><p>What I didn't like is code which, imho, is too "spaghetti"....and  I like "spaghetti milanese" a lot :))</p><p>Happy New Year</p></div>
	</div>
</div>
		