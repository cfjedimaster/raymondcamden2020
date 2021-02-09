
<div class="comment" id="c_1713732469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732469">1</a> by Lou
		posted on 5/19/2011 at 9:53 PM
		</div>
		<div class="comment_text"><p>Is that chart editor in dreamweaver or CFbuilder?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732475">2</a> by Raymond Camden
		posted on 5/19/2011 at 9:55 PM
		</div>
		<div class="comment_text"><p>The chart editor ships with ColdFusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732480">3</a> by Steve W
		posted on 5/19/2011 at 11:15 PM
		</div>
		<div class="comment_text"><p>For those that aren't familiar, webcharts.bat can found in the charting folder.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732484">4</a> by Raymond Camden
		posted on 5/19/2011 at 11:17 PM
		</div>
		<div class="comment_text"><p>Thanks Steve. Yeah, that detail woulda been helpful. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732482">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732482">5</a> by Jenny Gavin-Wear
		posted on 5/20/2011 at 6:18 PM
		</div>
		<div class="comment_text"><p>The cause of the currency hitch is the underlying JRE from which CF takes the locale setting, not from setlocale.</p><p>If you have control of your server you can make the locale change to the JRE.</p><p>Here is an example in CFadmin =&gt; Server Settings =&gt; Java and JVM</p><p>-server -Dsun.io.useCanonCaches=false -XX:MaxPermSize=128m -Dcoldfusion.rootDir={application.home}/../ -Dcoldfusion.libPath={application.home}/../lib -Duser.language=en -Duser.region=GB</p><p>To change the locale, just append the last two entries:-</p><p>-Duser.language=en -Duser.region=GB</p><p>With your language and locale.  This will need a server reboot.</p><p>Just to add a little to Ray's post about using styles and xml. <br>Firstly, you can either have all of the cfchart attribues in styles, or none of them, you can't mix.</p><p>If you are using a xml file instead of cfsavecontent, the path to is is the same as if you were using a cfinclude.</p><p>For reference, here is a list of all of the JRE locales:-</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdownload.oracle.com%2Fjavase%2F1.4.2%2Fdocs%2Fguide%2Fintl%2Flocale.doc.html%3AJnJaEHc03s0XgkL3JvSg3yrZ9ho&amp;cuid=3321886" rel="nofollow noopener" title="http://download.oracle.com/javase/1.4.2/docs/guide/intl/locale.doc.html">http://download.oracle.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713732481">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713732481">6</a> by Raymond Camden
		posted on 5/20/2011 at 6:30 PM
		</div>
		<div class="comment_text"><p>Thanks for adding that Jenny!</p></div>
	</div>
</div>
		