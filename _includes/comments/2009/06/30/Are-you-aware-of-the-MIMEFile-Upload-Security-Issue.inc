
<div class="comment" id="c_1713716518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716518">1</a> by Jason Brookins
		posted on 6/30/2009 at 8:16 PM
		</div>
		<div class="comment_text"><p>Wow. I don't do a whole lot of file uploading (esp. to public-facing sites), but I will for sure mark this one down and pass it around to my other developers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716519">2</a> by Pete Freitag
		posted on 6/30/2009 at 8:17 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, I've been meaning to update the post to mention using isImageFile, I will get around to it, but thanks for mentioning it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716524">3</a> by Jules Gravinese
		posted on 6/30/2009 at 8:20 PM
		</div>
		<div class="comment_text"><p>So how does this work? The hacker uploads a .jpg that is really a plain text file with cfml in it? If so... then what? I don't understand how anything.jpg would get parsed by cf.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716531">4</a> by Sid Wing
		posted on 6/30/2009 at 8:25 PM
		</div>
		<div class="comment_text"><p>Added this to the "Security Checklist" for my dev team - along with var scoping and queryparams.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716523">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716523">5</a> by Chad
		posted on 6/30/2009 at 8:25 PM
		</div>
		<div class="comment_text"><p>With image upload we store them in a folder that is secured with a login/password.  Then use ImageCR to generate images off of them in a different folder.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716520">6</a> by Chad
		posted on 6/30/2009 at 8:29 PM
		</div>
		<div class="comment_text"><p>@Jules  they spoof the mime type so that CFFile thinks it is an image but really it is a text file with CFM code in it.  Then they can browse to the upload folder and run the CFM file.</p><p>IE.  <a href="http://disq.us/url?url=http%3A%2F%2Ffoo.com%2FimageUPloads%2FuploadedFile.cfm%3ASaesWBDBqbLDQkOH8v_OwzVmRpo&amp;cuid=3321886" rel="nofollow noopener" title="http://foo.com/imageUPloads/uploadedFile.cfm">http://foo.com/imageUPloads...</a></p><p>The CFM file runs and they can do what ever they want.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716521">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716521">7</a> by Pete Freitag
		posted on 6/30/2009 at 8:40 PM
		</div>
		<div class="comment_text"><p>@Jules there is a code example in my blog entry of how that works: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.petefreitag.com%2Fitem%2F701.cfm%3AWu3iMEayjd_ag_QOn68Dj8smDR0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.petefreitag.com/item/701.cfm">http://www.petefreitag.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716532">8</a> by Jules Gravinese
		posted on 6/30/2009 at 8:51 PM
		</div>
		<div class="comment_text"><p>Oh, I see. Then isn't the simple solution to make sure the file ends in a proper extension? I think you can then prety much ignore the mime type. Is that right?<br>And if a file manager is in use, make sure files cannot be renamed with as anything.cfm?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716522">9</a> by Joshua Cyr
		posted on 6/30/2009 at 9:14 PM
		</div>
		<div class="comment_text"><p>Just so people know.  This is an active attack on CF applications.  They are targeting a well known shopping cart and probably other applications. I have seen multiple servers on different hosts go down because of this.  If you offer software commercial or open source be sure to check it and inform your clients/users if they need to upgrade.</p><p>As for what it does beyond just the basics... it creates a web service, uploads executables, and reinfects periodically. I hadn't heard about the login recording, but not a surprise. This is what I got from one web host.</p><p>--</p><p>The Windows service name appeared to be randomized. I believe it started with a “w”, though. That’s probably to ensure that it ended up at the bottom of the list. The service pointed to the following file:</p><p>C:\windows\system32\wjqpoo.kll</p><p>The older version of Computer Associates eTrust which had been on the server did not catch it, but ESET anti-virus did. It identified it as “Win32/PcClient.NEF”. Unfortunately, the ESET site doesn’t provide much information about this threat. It appears to be a back door Trojan. This write-up on Symantec’s site seems to describe a similar variant:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.symantec.com%2Fsecurity_response%2Fwriteup.jsp%3Fdocid%3D2006-071010-2417-99%26tabid%3D2%3AtQcmwP-o-QVpX2dW_q13stP11w0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.symantec.com/security_response/writeup.jsp?docid=2006-071010-2417-99&amp;tabid=2">http://www.symantec.com/sec...</a></p><p>It appeared to poll a remote host periodically. It received a binary from the remote host which it downloaded to the Windows temp folder. The binary had a random name which appeared to be a signed integer. The service would then execute the binary. The binary deleted all Web log files, disabled logging on the Web sites, and appended the malicious JavaScript to the bottom of HTML and JS pages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716525">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716525">10</a> by Tom Mollerus
		posted on 6/30/2009 at 11:16 PM
		</div>
		<div class="comment_text"><p>I think the most basic, essential security requirement about accepting files via upload is NEVER to store them inside the web root. This is more important than checking the extension, mime type, or size.</p><p>If you need to serve the file back to the user somehow, then just deliver it via CFCONTENT to make sure that it's not executed on the server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716529">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716529">11</a> by tony petruzzi
		posted on 6/30/2009 at 11:54 PM
		</div>
		<div class="comment_text"><p>not for nothing, but this is a HUGE security hole and bug in CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716526">12</a> by Joshua Cyr
		posted on 6/30/2009 at 11:56 PM
		</div>
		<div class="comment_text"><p>@Tony How is this a CF bug?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716530">13</a> by Raymond Camden
		posted on 6/30/2009 at 11:56 PM
		</div>
		<div class="comment_text"><p>I respectfully disagree Tony. The MIME type is sent by the browser. Pete's blog entry details that. Therefore CF has no other choice but to trust the MIME type. You told CF, "Check for mime type X", and it did that, exactly. CF can't be held responsible for the browser (requestor) lying about the mime type. Ditto for the user agent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716527">14</a> by papichulo
		posted on 6/30/2009 at 11:59 PM
		</div>
		<div class="comment_text"><p>Is this all happening on Hostmysite shared servers? I've had many Coldfusion associates for months talking about hostmysite servers being hacked. Nobody I know has had it happen anywhere else.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716533">15</a> by tony petruzzi
		posted on 7/1/2009 at 12:03 AM
		</div>
		<div class="comment_text"><p>@ray,</p><p>so you're saying that Adobe shouldn't address this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716528">16</a> by Raymond Camden
		posted on 7/1/2009 at 12:06 AM
		</div>
		<div class="comment_text"><p>Tony, based on what I said above, can you explain how this is Adobe's responsibility?</p><p>That being said, a security note on the Adobe site wouldn't hurt. But again, this is not their responsibility.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716545">17</a> by Tony Petruzzi
		posted on 7/1/2009 at 12:31 AM
		</div>
		<div class="comment_text"><p>@ray,</p><p>for the sake of argument, i'll give in and say that you're right: it's not an adobe issue, a security hole or a bug.</p><p>that out of the way.</p><p>you can't tell me it wouldn't make sense for adobe to write a patch or issue a hotfix that checks that the mimetype of an uploaded file conforms to the specified mimetype(s) listed in the accept attribute after it has been written to the server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716540">18</a> by Raymond Camden
		posted on 7/1/2009 at 12:33 AM
		</div>
		<div class="comment_text"><p>But it isn't a mime type on the file - it is a value sent by the requestor. (Pete, or anyone else, correct me if I'm wrong.) To me, this is like asking CF to 'fix' a bad user agent. It can't. It is what it is based on the info sent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716536">19</a> by tony petruzzi
		posted on 7/1/2009 at 12:39 AM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionmuse.com%2Findex.cfm%2F2006%2F8%2F2%2Fmime.types%3AwgzOqkYmBUOXikFSoQOAS_4A7i0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionmuse.com/index.cfm/2006/8/2/mime.types">http://www.coldfusionmuse.c...</a></p><p>this post has some information on getting the mimetype of file that has been written to the server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716547">20</a> by Pete Freitag
		posted on 7/1/2009 at 12:40 AM
		</div>
		<div class="comment_text"><p>@Ray that's correct the mime-type is sent in the http request.</p><p>Most web servers have a huge list of mime-type to file extension mappings, it would be possible to create such a list and put it in a config file, and throw an exception if the uploaded file extension is not corresponding to the mime-type mappings. But at that point you might as well just add an attribute for allowed file extensions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716543">21</a> by Pete Freitag
		posted on 7/1/2009 at 1:06 AM
		</div>
		<div class="comment_text"><p>@papichulo From what I have heard (second hand) many of the attacks on hostmysite have been from a virus that grabs saved FTP passwords from local FTP clients, and then uploads a cross site scripting attack to the files on the web sites.</p><p>There isn't anything in particular that would make a hosting company more at risk for this attack, except perhaps hosting companies that force you to upload into the web root. And those that don't allow file uploads would not be at risk.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716538">22</a> by papichulo
		posted on 7/1/2009 at 1:30 AM
		</div>
		<div class="comment_text"><p>@pete Thanks for the tidbit of info. I was asking because my upload form is in my admin panel behind SSL, and uses encrypted password just to get in the admin to upload. Our sites were getting owned, and people were saying it was because the hackers were using an upload form. That didn't make sense to me, because my form was only in my admin panel. Then I changed my admin password and asp,php,js,and cf pages were being written to the sites within 10 minutes of changing the admin password. Hostmysite acknowledge the problems, but when I saw this post it caught my attention because they had told me about upload forms. Now what you heard makes more sense than what I was thinking. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716539">23</a> by Christopher
		posted on 7/1/2009 at 2:28 AM
		</div>
		<div class="comment_text"><p>So I'm confused.</p><p>How was ColdFusion executing the .cfm file that was being uploaded? Was it being uploaded directly to a folder the user could instantly access and execute? Or are you saying somehow ColdFusion invoked the uploaded .cfm file itself?</p><p>Because if Mike was uploading directly to a user-accessible folder, this exploit is certainly not news.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716537">24</a> by Brent Frye
		posted on 7/1/2009 at 3:13 AM
		</div>
		<div class="comment_text"><p>As has been mentioned this is a direct attack on a shopping cart, according to the makers the newest version does not have this vulnerability, yet another reason to keep yourself patched and updated.  On most of the servers I've seen, unless you have proper sandboxing and have disabled cfexecute, these attackers are creating local users and also uploading key loggers to track your passwords.  The web shell their using also allows them to wipe your web logs, execute programs directly on your server, and inject malicious JavaScript into all the files on your server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716551">25</a> by Brent Frye
		posted on 7/1/2009 at 3:20 AM
		</div>
		<div class="comment_text"><p>@Christopher</p><p>The cffile accept argument implicitly trusts the MIME types sent by the browser, so having image/jpeg in there, the attacker would simply send a .cfm file to the action page, but say its a jpeg with the MIME type.  In this application, it directly uploads to an images folder, obviously not the best option - as you'd want to upload somewhere not accessible on the web and then perform additional checks on the file before moving it somewhere publicly accessible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716542">26</a> by Christopher
		posted on 7/1/2009 at 3:31 AM
		</div>
		<div class="comment_text"><p>@Brent Frye,</p><p>So, this is a case of uploading to a public directory. I thought someone found a way to upload a .cfm file and have the server execute the file, no matter where it was stored.</p><p>I crapped myself for nothing.</p><p>I was always under the impression that filtering out file types on the browser side was like validating form input with JavaScript, it's more for the user than for security.</p><p>That said, I don't bother with client-side restrictions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716544">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716544">27</a> by Brent Frye
		posted on 7/1/2009 at 3:41 AM
		</div>
		<div class="comment_text"><p>@Christopher</p><p>Yeah - if you already upload outside of the web root and take extra precautions to validate those files prior to making them public you should be fine.  As has been stated, this is the client side telling the server that its uploading something it isn't.  When its public - that allows the attacker to execute the code like it were any other cfm file on the server.  In this case, look up the C99 php web shell - they are using essentially the same thing, only written in ColdFusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716546">28</a> by Steve Glachan
		posted on 7/1/2009 at 4:25 AM
		</div>
		<div class="comment_text"><p>This is crazy interesting. Thanks for the notice.</p><p>I've been trying to read through this while at work so forgive me if this has already been brought up but, is this exclusive to CF? All the comments seem CF related so just wondering if this is specific or experienced across the board with Java, PHP, .NET, etc.?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716548">29</a> by Brent Frye
		posted on 7/1/2009 at 5:17 AM
		</div>
		<div class="comment_text"><p>@Steve,</p><p>This could likely be exploited in any language if all you trust for uploads is the MIME type provided by the user and automatically upload to a publicly accessible location.  There are web shells written in just about every language (Perl, .Net, PHP, CF, and classic ASP), so most of the discussion is applicable to any language used for web applications where the public can freely upload files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716550">30</a> by tony petruzzi
		posted on 7/1/2009 at 5:35 AM
		</div>
		<div class="comment_text"><p>i took the time to code an almost drop in replacement for cffile to handle this issue until something could be sorted out. it uses the gettempdirectory() function to upload, performs some checks against and then will move the file to the original destination if it's ok.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fgist.github.com%2F138542%3AAUDKPDxg29Y64G5xah17xBCEZm8&amp;cuid=3321886" rel="nofollow noopener" title="http://gist.github.com/138542">http://gist.github.com/138542</a></p><p>if anything, if you can look over the code and tell me what i'm missing, i would appreciate it. i want to implement this into all my sites tomorrow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716552">31</a> by John Whish
		posted on 7/1/2009 at 2:20 PM
		</div>
		<div class="comment_text"><p>I might be being dense, but when I do file uploads I have a list of allowed file extension and check against that when a file is uploaded so I don't rely on the mime type. That way the server won't execute the script.</p><p>Something like:<br>&lt;cffile action="upload" .../&gt;<br>&lt;cfif ListFindNoCase( "jpg,png,gif,jpeg", cffile.serverfileext ) EQ 0&gt;<br>&lt;!--- delete the file ---&gt;<br>&lt;cfelse&gt;<br>&lt;!--- file has an expected extension so carry on ---&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716553">32</a> by Joseph Lamoree
		posted on 7/1/2009 at 3:23 PM
		</div>
		<div class="comment_text"><p>I ran a quick search on some of my applications to see if any files that use CFFILE are accessible by a non-admin user, or if any publicly accessible upload forms place a file in a directly accessible path:</p><p>find . -name '*.cfm' -exec grep -Hoi -E '&lt;cffile.*action="upload".*&gt;' {} \;</p><p>I might write something more sophisticated, but that does the trick for now.</p><p>-joseph</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716554">33</a> by Sammy Larbi
		posted on 7/1/2009 at 3:42 PM
		</div>
		<div class="comment_text"><p>Mike says "We could not find a scanning program that could identify and remove these trojans."</p><p>If you shared the uploaded file, we could at least write a program that would scan our drives for similar ones, to know if we've been compromised and then decide to rebuild the servers.</p><p>If not the whole thing, could you specify some things to look for? Rarely used tags that could be scanned for and examined by hand might be useful, for instance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716555">34</a> by The Innocent
		posted on 7/1/2009 at 4:17 PM
		</div>
		<div class="comment_text"><p>And here is an example of how easy it can be to have your server pwned if you don't take care.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusion.tv%2FviewVideo.cfm%3FvideoID%3D1000011%3A6O9nxq15Rz2Fw5Q178zGAgccAvU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusion.tv/viewVideo.cfm?videoID=1000011">http://www.coldfusion.tv/vi...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716556">35</a> by Jules Gravinese
		posted on 7/1/2009 at 4:31 PM
		</div>
		<div class="comment_text"><p>@The Innocent</p><p>That script looks very familiar. I had to clean that off of a server recently. It was used by EL_MuHaMMeD:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.zone-h.org%2Farchive%2Fdefacer%3DEL_MuHaMMeD%3AuX9Y5WRm0_D_hJqoENXXQl-ku4c&amp;cuid=3321886" rel="nofollow noopener" title="http://www.zone-h.org/archive/defacer=EL_MuHaMMeD">http://www.zone-h.org/archi...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716558">36</a> by Matt Osbun
		posted on 7/1/2009 at 4:57 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fxkcd.com%2F327%2F%3AxV6Hs_5WQtGWVARTXLUJAkZdTcw&amp;cuid=3321886" rel="nofollow noopener" title="http://xkcd.com/327/">http://xkcd.com/327/</a></p><p>Not exactly the same thing, but this issue is a lot like putting a hand grenade in a vase simply because it was delivered by FTD.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716557">37</a> by DanaK
		posted on 7/1/2009 at 6:18 PM
		</div>
		<div class="comment_text"><p>This seems like more of a problem for shared hosting folks. I never would put uploaded files in a web accessible folder myself.</p><p>Hopefully posts like this makes it's rounds enough for people to be aware and protect themselves!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716561">38</a> by Wil Genovese
		posted on 7/1/2009 at 6:30 PM
		</div>
		<div class="comment_text"><p>This isn't a new thing.  It's always been possible to do this with pretty much any web server that allows file uploads.  Back in the day I would never let an uploaded file be saved into the accessible web root. I had a locked down 'dump' folder for these files that could not be executed via URL.  With today's social media craze we all want our uploaded content visible like now!  So, we must take even greater steps to ensure the file uploaded is safe.</p><p>Good catch on this and it is always the right time to raise a security concern.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716559">39</a> by Pete Freitag
		posted on 7/1/2009 at 7:05 PM
		</div>
		<div class="comment_text"><p>@John Whish - yes checking the file extension as you show is key, the other thing that you must do is upload outside the webroot, otherwise I might be able to write a script that uploads the file and then spawns a fury of requests for the file, there is a chance that I could execute it before you deleted it. That's why you need to upload to a destination outside the web root.</p><p>@Wil Genovese - No it certainly is not new, I've been talking about this issue for a long time, I never blogged it until recently unfortunately. I have always found that whenever I talk about this issue, about half of the room has to run and fix their code. So this issue is one that we all need to be vocal about as frequently as possible (just like cfqueryparam, yay!).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716560">40</a> by Raymond Camden
		posted on 7/1/2009 at 7:08 PM
		</div>
		<div class="comment_text"><p>Hey Pete - attending MAX? I think you may be volunteered to speak on this at CF Unconference. If you are attending MAX, consider yourself drafted. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716565">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716565">41</a> by Pete Freitag
		posted on 7/1/2009 at 7:16 PM
		</div>
		<div class="comment_text"><p>@Ray - Yeah I'll be at Max Sunday-Wednesday, is the unconference on Sunday?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716564">42</a> by Raymond Camden
		posted on 7/1/2009 at 7:19 PM
		</div>
		<div class="comment_text"><p>Unconference is all week, M-W. See my other post on it (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2009%2F6%2F29%2FMAX-2009-ColdFusion-Unconference--Call-for-SpeakersComments%29%3AHMEWhOxQGOT7toVG1Tj_jyOVvM0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2009/6/29/MAX-2009-ColdFusion-Unconference--Call-for-SpeakersComments)">http://www.coldfusionjedi.c...</a>. Thanks for "volunteering" Pete.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716563">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716563">43</a> by Brett
		posted on 7/1/2009 at 7:19 PM
		</div>
		<div class="comment_text"><p>Our server was attacked even with sandboxing, cfexecute disabled, service factory calls disabled. I have not yet tried to determine how they got around the sandboxing but<br>one preventative measure is to run ColdFusion under a user with limited permissions instead of running the service as local system.</p><p>Most of the hack (on our particular server) appears to be specific to Windows IIS servers. Some distinguishing features of the hack .cfm file are:<br>- the name seraph<br>- references to cmd.exe, adsutil.vbs, MetaBase.xml, cscript.exe<br>- comments that show up as question marks or gibberish in a text editor (but may be a foreign language)</p><p>Other signs of this particular hack:<br>- Unknown virtual directory (particularly in IIS default web site)<br>- Registry entry HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Winlogon\Notify\wminotify (records server admin passwords)<br>- Unknown service which is difficult to disable<br>- Executables (.exe) in C:\windows\temp<br>- IIS logs deleted and disabled<br>- Script tag added to html, htm, asp, js, and application.cfm files</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716568">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716568">44</a> by Pete Freitag
		posted on 7/1/2009 at 7:43 PM
		</div>
		<div class="comment_text"><p>@Brett - your attack may not have come through CF, see my previous comment about the FTP attack as one possibility.</p><p>@Ray - Sure, lets schedule it for Monday sometime.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716566">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716566">45</a> by Mike
		posted on 7/1/2009 at 7:56 PM
		</div>
		<div class="comment_text"><p>Please note that this is NOT a HostMySite issue. My servers were hacked and they have nothing to do with HostMySite.</p><p>I'm sure the hackers (based in China) crawled all the HMS IP addresses looking for Coldfusion sites to hit. This attack may be clustered around HMS at this time, but I am sure it will spread over time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716569">46</a> by Jules Gravinese
		posted on 7/1/2009 at 8:42 PM
		</div>
		<div class="comment_text"><p>@Mike<br>Sometimes they do a google search. For instance, "cffm.cfm" to find that particular CF file manager. Then test if it's open. Then test uploading a file, etc etc.<br>I found that out by looking at the logs around the time EL_MuHaMMeD stopped by. I was able to retrace his every step, watching how he wiggled his way deeper and deeper:</p><p>(referring to log line numbers to my client)<br>(2) It looks like this hacker used our file manager to get a file 'tmpfiles.gif.cfm' onto the server. The file manager is locked so that you can only upload files into the /media/ folder or below. But what this guy did was upload a CFM which is its own file manager.</p><p>(4) He accessed that uploaded CFM as a regular web page.</p><p>(6-13) He's looking around for a safe place to upload/hide another hack file manager.<br>(14) He uploads another file manager</p><p>(16-21) He deletes the original hack file manager.</p><p>(33) He checks to see if he can run PHP code as well. But cannot.</p><p>(58) He uploads the defaced home page.<br>(59) And tests it.<br>(60) And deletes the real home page.</p><p>(61-73) He looks for other weaknesses, finds none, and leaves.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716570">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716570">47</a> by Hazen
		posted on 7/1/2009 at 8:50 PM
		</div>
		<div class="comment_text"><p>Hi all, regarding Bret's post about Registry entries, Registry entry HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Winlogon\Notify\wminotify (records server admin passwords)</p><p>Should this entry be removed and if so is the entire Notify Entry to be removed? or some entries contained with in???  I guess I am asking because we have have had an attack on another server, but just this week recommissioned a new server, and started serving sites again from the new box. I want to be sure that the new box stays safe,(as much as is possible), and so I have checked for this registry and YES, Notify is in the Reg. So what's to be done?</p><p>Thanks,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716573">48</a> by Paul
		posted on 7/2/2009 at 6:15 AM
		</div>
		<div class="comment_text"><p>Erg...I think we were just attacked by this at 1:45am 07-01-09.</p><p>What we're seeing is essentially every web file (.htm(l),.cfm,.php,.js, etc) being appended with a script code trying to load a swf from "<a href="http://disq.us/url?url=http%3A%2F%2Fchanm.3322.org%2Fflash%2F%3AeQ4Qv5mQoASZpmjXXqEb9K9AV6g&amp;cuid=3321886" rel="nofollow noopener" title="chanm.3322.org/flash/">chanm.3322.org/flash/</a>".</p><p>We scrubbed all of these files with a massive search and replace and then they just got reinfected again.</p><p>We're trying to find the source that is running this attack automatically, but we're having difficulties finding it.  Any tips/ideas on how to isolate the malicious program thats causing this and get our servers back online??</p><p>Thanks!<br>Paul</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716571">49</a> by Jules Gravinese
		posted on 7/2/2009 at 6:40 AM
		</div>
		<div class="comment_text"><p>Paul, check the server log files during that time period.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716572">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716572">50</a> by John P
		posted on 7/2/2009 at 6:16 PM
		</div>
		<div class="comment_text"><p>@Brett - make sure you have JSP on the server disabled. This is how the hacker is able to get around sandboxing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716575">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716575">51</a> by Jeff Hubbach
		posted on 7/2/2009 at 11:56 PM
		</div>
		<div class="comment_text"><p>Who allows users to upload files to a web-accessible folder anymore? Seriously? All uploads go into a non web-accessible directory. To serve them back to the user, use cfcontent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716574">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716574">52</a> by Raymond Camden
		posted on 7/3/2009 at 12:02 AM
		</div>
		<div class="comment_text"><p>@Jeff: Who does? A lot of people. Don't forget - the mere fact that you READ a blog puts you in the minority. The vast majority of devs out there don't do any due diligence, don't spend time researching, etc. They just do their day job.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716577">53</a> by CC
		posted on 7/3/2009 at 12:44 AM
		</div>
		<div class="comment_text"><p>FYI: This vulnerability has been picked up by SANS:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fisc.sans.org%2Fdiary.html%3Fstoryid%3D6715%3AvxPEnvKwzOd7nZKLvYWoEV1uHpc&amp;cuid=3321886" rel="nofollow noopener" title="http://isc.sans.org/diary.html?storyid=6715">http://isc.sans.org/diary.h...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716576">54</a> by Raymond Camden
		posted on 7/3/2009 at 6:27 AM
		</div>
		<div class="comment_text"><p>More info: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.codfusion.com%2Fblog%2Fpost.cfm%2Fcf8-and-fckeditor-security-threat%3As46shiGabhoH-T9lUBDF4pn5Sgc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.codfusion.com/blog/post.cfm/cf8-and-fckeditor-security-threat">http://www.codfusion.com/bl...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716579">55</a> by barry.b
		posted on 7/4/2009 at 6:36 PM
		</div>
		<div class="comment_text"><p>"I had heard a few rumblings of this recently but had not really paid it much attention."</p><p>not you're fault, Ray, that "not really paid it much attention" ... where was the flashing red lights from Adobe? Where was the official word so you could pick it up and blog/retweet?</p><p>sure it involves a 3rd party product. I'm just shocked that it's a case of the tail (community) wagging the dog (Adobe's psirt).</p><p>In the Enterprise space, we're quite happy to pay for CF licencing even when it includes 3rd party products, because they've been tested by Adobe and have their seal of approval on them. But this is an on-going things, not "just a forget it after it's released" - that means being tightly plugged into the 3rd party products and hearing of any issues to see if it has an impact on their use in CF.</p><p>how to kill a platform in the Enterprise space - be really sloppy with security responses...</p><p>my 2c.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716580">56</a> by Jon Cavanaugh
		posted on 8/5/2009 at 9:23 PM
		</div>
		<div class="comment_text"><p>After applying the patch in advisory  APSB09-09, we need to allow uploads via fckeditor. Following these OPTIONAL steps to enable, we're not able to start ColdFusion. The specific step that is applied causing CF to not start is:</p><p>Edit jvm.config file and add the JVM argument “–Dcoldfusion.fckupload=true”</p><p>I have verfied that the "update" hf800-77218.jar was active and that the default JVM was being used for ColdFusion. Anyone else try enabling the upload and run into this problem?</p><p>Thanks for any help,</p><p>Jon C.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716578">57</a> by Ray Majoran
		posted on 1/17/2010 at 5:24 AM
		</div>
		<div class="comment_text"><p>The easiest way to get around this is to make sure the directory that you're uploading the files to does not have Script or Executable permissions (i.e in IIS).  That way, even if they upload a CFM (or ASP, NET, PHP, EXE, DLL) file, it doesn't really matter -- it can't execute.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716582">58</a> by Doug Trojanowski
		posted on 2/5/2010 at 6:23 AM
		</div>
		<div class="comment_text"><p>@Ray Majoran</p><p>Is that true Script/Executable trun off?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716581">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716581">59</a> by EL_MuHaMMeD
		posted on 3/22/2010 at 8:35 PM
		</div>
		<div class="comment_text"><p>:) <br>I'm Turkish Hacker....</p><p>Raymond :P</p></div>
	</div>
</div>
		