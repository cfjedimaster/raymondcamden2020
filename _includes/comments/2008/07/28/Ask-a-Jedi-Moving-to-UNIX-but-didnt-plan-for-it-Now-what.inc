
<div class="comment" id="c_1713684441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684441">1</a> by Scott P
		posted on 7/29/2008 at 4:55 AM
		</div>
		<div class="comment_text"><p>I might have an example in CFML in an older post, <a href="http://disq.us/url?url=http%3A%2F%2Fwww.scottpinkston.org%2Fblog%2Findex.cfm%2F2007%2F4%2F3%2FConverting-cfincludes-to-lowercase-filenames-using-CF%3ASN9Y9boV1eZg2Uwp6pyRqYNWPxI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.scottpinkston.org/blog/index.cfm/2007/4/3/Converting-cfincludes-to-lowercase-filenames-using-CF">http://www.scottpinkston.or...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684459">2</a> by Raymond Camden
		posted on 7/29/2008 at 4:58 AM
		</div>
		<div class="comment_text"><p>Nice - but you need to remove that use of ListContains. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684461">3</a> by Jim Priest
		posted on 7/29/2008 at 5:00 AM
		</div>
		<div class="comment_text"><p>WHY is Application.cfm capitalized?  Anyone know?</p><p>I'm doing some work on Linux at home for a Windows hosted site and running into this all over the place... I'd agree the 'everything lowercase' just makes things easier in the long run.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684446">4</a> by Scott P
		posted on 7/29/2008 at 5:07 AM
		</div>
		<div class="comment_text"><p>what ListContains?  whistles innocently</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684456">5</a> by Brian Rinaldi
		posted on 7/29/2008 at 5:11 AM
		</div>
		<div class="comment_text"><p>I wrote about this exact problem a while back. Includes the code for handling the file renaming and the URL rewrite using Apache - <a href="http://disq.us/url?url=http%3A%2F%2Fwww.remotesynthesis.com%2Fpost.cfm%2FFixing-Caserelated-Issues-When-Moving-Off-Windows%3AeFODuPkFU73KBqVtuvHqKOk2N3s&amp;cuid=3321886" rel="nofollow noopener" title="http://www.remotesynthesis.com/post.cfm/Fixing-Caserelated-Issues-When-Moving-Off-Windows">http://www.remotesynthesis....</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684454">6</a> by Raymond Camden
		posted on 7/29/2008 at 5:17 AM
		</div>
		<div class="comment_text"><p>Cool Brian. I'd still point out though the need to worry about files being loaded via DB.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684452">7</a> by Michael Sharman
		posted on 7/29/2008 at 5:31 AM
		</div>
		<div class="comment_text"><p>And don't forget that on Linux the database tables names (at least for MySQL) are case sensitive, columns are not however.</p><p>So keep a standard and stick to it!</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.chapter31.com%2F2008%2F07%2F17%2Fcoding-standards-do-you-use-them%2F%3ALooJajnURRh_cW6dYK_lq_kxuc4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.chapter31.com/2008/07/17/coding-standards-do-you-use-them/">http://www.chapter31.com/20...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684463">8</a> by Chad Fenske
		posted on 7/29/2008 at 5:35 AM
		</div>
		<div class="comment_text"><p>I'm currently the lead on a project that is not only moving from a windows environment to an AIX environment, but from CF5 to CF8. We created a PERL script that will open every file in a given directory and lower case all references to .cfm, .js, .html ect. The script looks for these files in cfinclude tags, javascript include tags, stylesheet include tags, you get the idea. We have also added the ability to lower case calls to custom tags as well (thank you 8.01 hotfix 1). We also had to make sure that all the developers started lower casing file names and calls to those files as well. It's a lot of work to do all of this before we move the code to the new servers, but that time pales in comparison to what we would need to go through to fix it after we moved the code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684462">9</a> by Raymond Camden
		posted on 7/29/2008 at 5:38 AM
		</div>
		<div class="comment_text"><p>@MS: I wonder who on the MySQL dev team thought it made sense to check case for tables but not columns? Personally I think case sensitive file systems don't make sense. Why would you want to allow for foo.txt and Foo.txt in one folder anyway.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684465">10</a> by Jim Priest
		posted on 7/29/2008 at 5:41 AM
		</div>
		<div class="comment_text"><p>Right now I'm working on a small site and it's in SVN so renaming files has to be done via SVN (and so far I've been doing it manually).  I'll have to dig around to see if there are any solutions to recursively go through a repo and rename everything to lowercase.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684464">11</a> by Michael Sharman
		posted on 7/29/2008 at 6:44 AM
		</div>
		<div class="comment_text"><p>@Ray - I believe it's because MySQL's table stoage is on the file system as a directory, hence the case sensitivity issue.</p><p>So a database called "blogCFC" would have a directory called "blogCFC" with all the data files in it etc</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684467">12</a> by Raymond Camden
		posted on 7/29/2008 at 6:53 AM
		</div>
		<div class="comment_text"><p>@Michael - that makes sense actually.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684466">13</a> by Tom Mollerus
		posted on 7/29/2008 at 8:34 AM
		</div>
		<div class="comment_text"><p>@Jim: my guess for the reason why  Application.cfm/.cfc needs to be capitalized is so that there wasn't any confusion on case-sensitive systems such as Unix or Linux.</p><p>For instance, on a *nix system it would be possible to have both "Application.cfm" and "application.cfm". Even if CF were built to use one of the two by precendence, I can see all sorts of mistakes being made by developers who couldn't remember which of the two files was in use in a given folder.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684468">14</a> by JC
		posted on 7/29/2008 at 4:33 PM
		</div>
		<div class="comment_text"><p>if you need to rename files like this on windows... this tool is just fantastic:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bulkrenameutility.co.uk%3AH870dAV99fJlw-ilp1WFKSB7PyI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bulkrenameutility.co.uk">http://www.bulkrenameutilit...</a></p><p>Saves me hours and hours and hours when I'm screwing around with log files from clusters, and the few times I've had case issues.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713684470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713684470">15</a> by sandeep
		posted on 7/29/2008 at 5:28 PM
		</div>
		<div class="comment_text"><p>bulkrename is really cool i have used this tool long time back. should make part of the moving to Linux easier.</p></div>
	</div>
</div>
		