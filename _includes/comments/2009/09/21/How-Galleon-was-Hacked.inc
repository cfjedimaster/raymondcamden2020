
<div class="comment" id="c_1713718497">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718497">1</a> by Dan G. Switzer, II
		posted on 9/21/2009 at 4:17 PM
		</div>
		<div class="comment_text"><p>Good post. I think we can all learn for mistakes like this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718498">2</a> by Phillip Senn
		posted on 9/21/2009 at 4:38 PM
		</div>
		<div class="comment_text"><p>Good job Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718500">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718500">3</a> by tony petruzzi
		posted on 9/21/2009 at 5:24 PM
		</div>
		<div class="comment_text"><p>when you first posted about this whole file upload security problem back in june, i took the liberty of coming up with a udf to hopefully address this. i finally moved the udf from a gist to an actual github repo and i would love if people could look over the code and contribute to the project.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fgithub.com%2Frip747%2Fcffileupload%3Aw2u90nN-Rrozr3xloqJ1wwS8il0&amp;cuid=3321886" rel="nofollow noopener" title="http://github.com/rip747/cffileupload">http://github.com/rip747/cf...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718499">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718499">4</a> by andy matthews
		posted on 9/21/2009 at 5:34 PM
		</div>
		<div class="comment_text"><p>I love the idea of both using a temp directory, and renaming the file to a UUID. I think your reasoning that no one cares what those files are named makes perfect sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718507">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718507">5</a> by Neil Moncur
		posted on 9/21/2009 at 5:56 PM
		</div>
		<div class="comment_text"><p>Interesting post, Ray.  Some good ideas.</p><p>Incidentally, one thing I have done in the past is:</p><p>If I have a directory that I know should not execute any files, I put a one line Application.cfm file in it.  The Application.cfm has a cfabort in it, and that is all (or a cflog and then cfabort).  This prevents any cfm files from executing in the directory.  Just a little idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718502">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718502">6</a> by Harry
		posted on 9/21/2009 at 5:57 PM
		</div>
		<div class="comment_text"><p>Thank you for your explanation here...I better go look at a few of my projects that allow public uploads and do the same.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718510">7</a> by Raymond Camden
		posted on 9/21/2009 at 5:59 PM
		</div>
		<div class="comment_text"><p>@Neil: Actually, that is exactly what I did in my first patch. Except I used cflocation. I added those files to every folder where a CFM existed or where uploads could occur. I still have them there even with the 'better' fix in place.</p><p>Can't be too anal about security.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718503">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718503">8</a> by Paul Dynan
		posted on 9/21/2009 at 6:09 PM
		</div>
		<div class="comment_text"><p>We use a low-tech solution in places where we need to hold uploadable files in the web root:<br>&lt;CFIF ListLast(GetDirectoryFromPath(GetTemplatePath()), "\") IS "user_upload"&gt;<br>  &lt;CFLOCATION URL="http://www.#siteAddress#" ADDTOKEN="No"&gt;<br>&lt;/CFIF&gt;</p><p>We could just as easily bounced them to "http://" oblivion, but we just send them back to the home page if they try to directly access anything in the upload folder.</p><p>Far from comprehensive, and not sure if it would have helped here, but it generally helps prevent shenanigans from those folders.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718511">9</a> by Raymond Camden
		posted on 9/21/2009 at 6:30 PM
		</div>
		<div class="comment_text"><p>One thing to remember about the App.cfm solution - it only works with CFMs. If a hacker can get a PHP/ASP/JSP page up, and your server supports those, then this solution is worthless. That's why my app.cfm solution was just the first draft.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718501">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718501">10</a> by David Boyer
		posted on 9/21/2009 at 6:53 PM
		</div>
		<div class="comment_text"><p>It's things like this that make me wish ColdFusion would supply the filename before you even consider going near CfFile[action=upload].  PHP gives you the $_FILES global with a lot of file information in it (including the original filename) before you even consider using move_uploaded_file().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718506">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718506">11</a> by Daniel Budde
		posted on 9/21/2009 at 6:53 PM
		</div>
		<div class="comment_text"><p>In our file upload manager, we have the &lt;cffile action='upload' immediately save the file as a '[UUID].[odd extension]' within a directory that is located under the webroot.  For example, if I were doing this in galleon it might look like:</p><p>&lt;cffile action="upload" filefield="fileField" destination="#uploadPath##fileUUID#.gal" nameconflict="overwrite" result="fileInfo" /&gt;</p><p>We then store the new file name and the old file name (client file name from the upload result) and then serve up the orginal file name when the file is requested.  We have an allowed file extension list as well that checks the original file name upon upload and then removes it if it is not in the list.</p><p>So, as I save the file as a UUID and different extension in the cffile upload, is it still susceptible to this same attack?  Unfortunetly I do not know enough about the mechanics behind the &lt;cffile upload process to tell.</p><p>I am more than likely going to add the blank application.cfm with the cfabort in it as an additional precaution (as Ray said, can't ever be too safe), but I would still be curious to know if renaming the extension within the upload is a good preventative.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718505">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718505">12</a> by Lola LB
		posted on 9/21/2009 at 7:03 PM
		</div>
		<div class="comment_text"><p>Good work!  Was trying out Galleon on my laptop, and was going to install it at my CF site, but when I saw your tweets, I decided to hold off a bit until you were ready to give more details.  Thanks for doing so . . .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718504">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718504">13</a> by Pete Freitag
		posted on 9/21/2009 at 7:07 PM
		</div>
		<div class="comment_text"><p>Just a reminder folks, that I have a list of security tips for uploading files in ColdFusion: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.petefreitag.com%2Fitem%2F701.cfm%3AWu3iMEayjd_ag_QOn68Dj8smDR0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.petefreitag.com/item/701.cfm">http://www.petefreitag.com/...</a></p><p>I pointed out the potential for this issue in that article, I said there was a "a slight chance that I could execute that file before you can delete it if you uploaded it into the web root (and I could predict where it would be placed)."</p><p>After writing that article I did some testing with this method, and I found that a "slight chance" is probably not accurate, it did not take a great amount of load to accomplish this.</p><p>Thanks for the writeup about this Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718508">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718508">14</a> by Simon
		posted on 9/21/2009 at 7:10 PM
		</div>
		<div class="comment_text"><p>Using this technique all web application languages could be vulnerable. Now if we could only start collaborating on info on the hacker (IP &amp; other CGI data) we could find a couple of these #$%holes and hang them out to dry. I bet the majority of them are at home and not in an internet cafe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718509">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718509">15</a> by Richard Davies
		posted on 9/21/2009 at 7:27 PM
		</div>
		<div class="comment_text"><p>Thanks for the heads up! I hadn't considered this possible security exploit before. It's a very creative attack, but fortunately the fix is pretty easy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718514">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718514">16</a> by Raymond Camden
		posted on 9/21/2009 at 8:59 PM
		</div>
		<div class="comment_text"><p>Let me just triple "ditto" Pete's URL. If folks have not yet read it, please do. (And when I catch up today I need to ensure it is hotlinked from my own security guide.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718512">17</a> by Sean
		posted on 9/22/2009 at 3:13 AM
		</div>
		<div class="comment_text"><p>i've noticed a profiles.cfm file in one of my galleon installation's avatars folder.... it looks dodgy... what's the best way to fix this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718516">18</a> by Raymond Camden
		posted on 9/22/2009 at 3:22 AM
		</div>
		<div class="comment_text"><p>@sean: Um... delete it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718518">19</a> by Sean
		posted on 9/22/2009 at 3:30 AM
		</div>
		<div class="comment_text"><p>Thanks for the reply Ray, I guess it sounded like a dumb question. I have already deleted the file... but after looking at that code... it's obviously executing a whole load of stuff, I was more wondering if there is anything that this code creates, deletes, compromises, anything at all that you know about that I should be looking at?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718515">20</a> by Raymond Camden
		posted on 9/22/2009 at 4:01 AM
		</div>
		<div class="comment_text"><p>Well I know what Galleon's profile.cfm does, but not the file you speak of. After deleting it, be sure to update Galleon and it should not happen again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718517">21</a> by Joshua Curtiss
		posted on 9/22/2009 at 5:20 AM
		</div>
		<div class="comment_text"><p>Hey Ray, your article is a good reminder and your candidness about the matter rocks. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718521">22</a> by Warren Koch
		posted on 9/22/2009 at 11:04 PM
		</div>
		<div class="comment_text"><p>Nice.  I also load files above the web root and move them under the web root if they pass security.  I've extended this to provide CFC security by putting them above the web root too.  No one can introspect the CFC that way.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718523">23</a> by Raymond Camden
		posted on 9/22/2009 at 11:06 PM
		</div>
		<div class="comment_text"><p>Typically people can only introspect the CFC if you leave the CF Admin/RDS password blank - which I hope you never do. Of course, people _can_ see your remote methods if they parse the WSDL. Then again, I'd rather shove rusty nails in my eyes than read WSDL. WSDL is XML done by the Marquis de Sade.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718527">24</a> by Warren Koch
		posted on 9/22/2009 at 11:31 PM
		</div>
		<div class="comment_text"><p>very true on both.  Still, not being able to wsdl is just another tool in the security arsenal.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718529">25</a> by Don
		posted on 9/25/2009 at 1:03 AM
		</div>
		<div class="comment_text"><p>Yup. I was looking for something else when I stumbled on this. It is an age old rule of programming to always know what is coming in before letting it loose inside your program. Classic is the buffer overflow attack or the SQL Injection. But this goes right in there. Quarantine a file until is verified before putting it where you really want it. Renaming a file as soon as it comes in is good. One other thing I've done is use a variable to store IP and then limit how often they can access the upload form. Of course the App.cfc that redirects browsers away from the folder needs to be in there too.</p></div>
	</div>
</div>
		