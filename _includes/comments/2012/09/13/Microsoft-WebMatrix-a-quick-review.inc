
<div class="comment" id="c_1713742884">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742884">1</a> by Prabhakar Bikkaneti
		posted on 9/14/2012 at 5:50 AM
		</div>
		<div class="comment_text"><p>6 months back, I happened to encounter the MS WebMatrix. I wasn't able to understand it. So, I gave it up.<br>I think, I should give it an another try.</p><p>Thanks for the article.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742878">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742878">2</a> by Mark
		posted on 9/14/2012 at 10:20 AM
		</div>
		<div class="comment_text"><p>It needs .NET (shudder)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742879">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742879">3</a> by Raymond Camden
		posted on 9/14/2012 at 2:17 PM
		</div>
		<div class="comment_text"><p>Meh. I don't use .Net, but it seems like a decent enough platform. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742882">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742882">4</a> by Mark
		posted on 9/14/2012 at 6:12 PM
		</div>
		<div class="comment_text"><p>.NET frightened my mother when I was in the womb.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742881">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742881">5</a> by David Fekke
		posted on 9/18/2012 at 12:49 AM
		</div>
		<div class="comment_text"><p>I have used WebMatrix for a couple of web sites, including my own. I would not recommend for heavy development. I would still use Visual Studio or Eclipse if you are building an enterprise level web application. WebMatrix is perfect for building a web site using a CMS like WordPress or DotNetNuke locally, then deploying when you are ready to push the site out to a host. It uses IIS Express as the web server. It would be interesting to see if anyone has tried using this with ColdFusion?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742880">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742880">6</a> by rolanstein
		posted on 10/3/2012 at 6:36 AM
		</div>
		<div class="comment_text"><p>It should be noted that WebMatrix runs into big problems when publishing to hosts not using Windows-type servers. I have been using it to develop a website using Wordpress as the CMS, and all went fine until it came time to publish. The problems have been unending.</p><p>I have been engaged in a marathon to-and-fro with my host Support, who have been terrifically patient throughout. Their servers are Linux, and they have concluded that I would be far better in future to just do the site development live in a subdomain, then migrate across to the URL location when complete. This migration process is something I was trying to avoid. I've done it before with Wordpress and it's protracted and a pain, but much less problematic than using WebMatrix. I still haven't got my new site up!</p><p>Note: I'm no techie. Doubtless, geeks will not have my problems using WebMatrix to publish WP sites. But if you're not a geek and your host does not use Windows-type servers, beware!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742883">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742883">7</a> by Raymond Camden
		posted on 10/3/2012 at 2:48 PM
		</div>
		<div class="comment_text"><p>Can you explain exactly what went wrong? You said problems, but didn't elaborate into what went wrong. I'd *never* recommend doing development on the server itself. I'd change IDEs first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742885">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742885">8</a> by rolanstein
		posted on 10/4/2012 at 6:30 PM
		</div>
		<div class="comment_text"><p>Hi Raymond. The first problem was that the initial attempts at publishing failed. I kept getting this notice: Error creating directory "www/www": File exists (550). My host Support told me to make sure that I entered "/www/www" in the Site path field, which I did - but it was clear after several more failed attempts to publish that the error was going to keep happening. Support checked into it and advised: "It would appear that for some reason, the software is trying to create such a "/www/www/" folder on the server, but it since it already exists and it's owned by the 'root' user on the server, it cannot overwrite it."</p><p>Support created an additional FTP subaccount with a new user and pw, and associated this user directly with the /www/www/ folder where I was attempting to upload. This seemed to solve the problem, but only so far as it turned out. After a VERY long time (1 hour and 20 mins), the publishing was complete, but only of the Wordpress script. The database was not published. Apparently, WebMatrix had no option for transferring databases when FTP mode is used (which was the only way I could get it to publish anything).</p><p>I had to FTP the database to my host account separately using Filezilla. Support concluded that WebMatrix is designed for Windows-type servers, and its publishing capabilities are very limited when used in conjunction with Linux servers.</p><p>Once the Support guys made the changes necessary to get my site working at the destination URL, it quickly became evident that there were all sorts of irregularities at variance with the localhost version.</p><p>For example, when I decided to delete some plugins that were 'broken' in the course of the uploading of the database (with the intention to later reinstall them afresh)I received the following message:</p><p>"Connection Information</p><p>To perform the requested action, WordPress needs to access your web server. Please enter your FTP credentials to proceed. If you do not remember your credentials, you should contact your web host." blah blah...</p><p>I have never been asked for my FTP credentials with my long-running Wordpress blog. Support had to append some code in wp-config.php to remedy the situation.</p><p>I have spent hours since then changing all the other things that were somehow lost in translation during the publishing. eg: backgournd colour had been changed, weird fonts had appeared out of nowhere within my content, paragraph indentation had been changed, my customised header had been replaced my the Twenty Eleven theme rotating headers, and so on and so on.</p><p>All in all, a frustrating experience that ended up taking far more time than if I'd just installed Wordpress in my host account and copied and pasted the content from my localhost, along with all the other modding of stylesheet etc.</p><p>Cheers<br>R</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742887">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742887">9</a> by Raymond Camden
		posted on 10/4/2012 at 7:57 PM
		</div>
		<div class="comment_text"><p>Ah, interesting. In general, I never use an IDE's "Push to Server" type feature just because there are normally complications. FOr example, the database can't just be pushed up unless you are using an old MS Access db. Anyway - thank you for sharing your experience here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742889">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742889">10</a> by rolanstein
		posted on 10/4/2012 at 8:11 PM
		</div>
		<div class="comment_text"><p>So Raymond, how do you publish from an IDE to your host account, then? The blurb on Webmatrix led me to believe it was a simple matter of clicking on 'Publish' - that the task would be done more or less automatically, fast and with a minimum of fuss. Should have known that was too good to be true.</p><p>Perhaps my expectations were unrealistic (or perhaps the creators of WM have a whole lot of refinement to do before it lives up to the claims that MS make about it). It was good working on my website in the localhost environment, and WM certainly was pretty easy to install and set up as an IDE. That may be the extent of its usefulness at this point. If you could share some tips about the publishing side of things, would be appreciative.</p><p>Cheers<br>R</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742888">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742888">11</a> by Raymond Camden
		posted on 10/4/2012 at 8:14 PM
		</div>
		<div class="comment_text"><p>In the ideal world, I use a tool like ANT to deploy a build from source control onto production. This can ensure I don't miss any files and works the quickest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742891">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742891">12</a> by rolanstein
		posted on 10/5/2012 at 5:36 AM
		</div>
		<div class="comment_text"><p>Thanks. Haven't heard of ANT - will check it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742893">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742893">13</a> by rolanstein
		posted on 10/5/2012 at 5:40 AM
		</div>
		<div class="comment_text"><p>Hmm, assume you're referring to Apache Ant? Just had a look - way too complicated for a non-techie like me. Do you perchance have any recommendations for publishing options that might be more accessible to the tech-challenged?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742894">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742894">14</a> by Raymond Camden
		posted on 10/5/2012 at 6:03 AM
		</div>
		<div class="comment_text"><p>Not really - no. Outside of a FTP client.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742896">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742896">15</a> by rolanstein
		posted on 10/5/2012 at 6:42 AM
		</div>
		<div class="comment_text"><p>OK, thanks Raymond. Just one last question, if you don't mind.</p><p>I know how to FTP the WP content and other files to my host, but not sure about the WP script itself. Can you FTP a Wordpress script (including mods done in a localhost environment using, say, WebMatrix - eg: customised header, changed background colour etc) to a host server, or is it best to install WP on the host server, then one by one copy the mods done on the localhost? Would this be the best option for someone like me, do you think?</p><p>Cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742898">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742898">16</a> by Raymond Camden
		posted on 10/5/2012 at 6:46 AM
		</div>
		<div class="comment_text"><p>I don't use WordPress, but I'd imagine that since it is built on PHP, there is nothing wrong with FTPing the files up to the production server just like normal HTML files.</p></div>
	</div>
</div>
		