
<div class="comment" id="c_1713680701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680701">1</a> by Dan G. Switzer, II
		posted on 5/8/2008 at 7:09 PM
		</div>
		<div class="comment_text"><p>@Raymond:</p><p>It sounds like he may be wanting to get the directory relative to the webserver, not from the OS path--but I could be wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680691">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680691">2</a> by Raymond Camden
		posted on 5/8/2008 at 7:13 PM
		</div>
		<div class="comment_text"><p>I don't know - he said specifically folder - which to me means a full path. Let's see what he says (I pinged him to let him know I blogged it).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680692">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680692">3</a> by Dan G. Switzer, II
		posted on 5/8/2008 at 7:13 PM
		</div>
		<div class="comment_text"><p>Oh yeah, and if that's really want he wants I wrote a UDF a while back that will parse a URL:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.pengoworks.com%2Findex.cfm%2F2006%2F9%2F27%2FCFMX-UDF-Parsing-a-URI-into-a-struct%3AosfQSwdsastUD3O0dx5ypzCC1nk&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.pengoworks.com/index.cfm/2006/9/27/CFMX-UDF-Parsing-a-URI-into-a-struct">http://blog.pengoworks.com/...</a></p><p>This script will parse out the path to in the URL. You could easily modify the code to only generate the path if that's all you wanted as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680695">4</a> by Gary Gilbert
		posted on 5/8/2008 at 7:13 PM
		</div>
		<div class="comment_text"><p>@Ray and Patrick</p><p>If understand correctly you want to get the directory, relative to your webroot, of the currently executing template right?</p><p>For example:</p><p>URL:http://localhost/mycfstuff/samples/index.cfm</p><p>Full Path:C:\Inetpub\wwwroot\mycf\samples\index.cfm</p><p>Want:\mycf\samples\</p><p>You can use expandPath("/") to get the path to webroot<br>C:\Inetpub\wwwroot\</p><p>you can use getDirectoryFromPath(getCurrentTemplatePath()) to get the full directory: C:\Inetpub\wwwroot\mycf\samples\</p><p>The some simple majik to get just the directory.</p><p>right(getdirectoryfrompath(getcurrenttemplatepath()),len(getdirectoryfrompath(getcurrenttemplatepath()))-len(expandpath("/"))+1)</p><p>gives you: \mycf\samples\</p><p>You have to add the +1 at the end in order to keep the slash in the front.</p><p>Perhaps not the most elegant way but from what I understood of your question you get JUST the path from the webroot to your template.</p><p>Cheers,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680693">5</a> by Dan G. Switzer, II
		posted on 5/8/2008 at 7:15 PM
		</div>
		<div class="comment_text"><p>@Gary:</p><p>One problem with the solution you posted is that it may not work in all cases--for example when virtual directories are being used with the webserver. In those cases the URL path is much different than the OS path.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680694">6</a> by jdbo
		posted on 5/8/2008 at 7:18 PM
		</div>
		<div class="comment_text"><p>A related question (more theoretical than anything else, I've just always wondered if this can be done) - what if you have a template that is included by another template (i.e. via CFMODULE, CFINCLUDE, etc.) - is there a way to determine the path of the parent (calling) template?  Or retrieve the stack of calling templates up to the base template?</p><p>I'm wondering because the CFCATCH exception variable includes the complete calling stack (this is probably not the right term), and I could imagine some potential uses for accessing that info at runtime.</p><p>( Note: I'm thinking of something more elegant than throwing an exception and extracting the data from the CFCATCH variable; I write some ugly code, but that seems like overkill. )</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680696">7</a> by Gary Gilbert
		posted on 5/8/2008 at 7:19 PM
		</div>
		<div class="comment_text"><p>@Dan,</p><p>Thats very true, but then you could also use the PATH_INFO cgi variable to give you the relative path to the executing page, id does give you the page as well but you could also quite simply remove it.</p><p>PATH_INFO=/mycf/samples/index.cfm</p><p>But it really depends on what you are looking for as you mentioned in your first post, the os path or the web path</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680697">8</a> by Dan G. Switzer, II
		posted on 5/8/2008 at 7:23 PM
		</div>
		<div class="comment_text"><p>@Gary:</p><p>Just a heads up that not every webserver will populate the cgi.path_info. I believe IIS might be the only webserver that does. You always have to be a bit wary when using CGI variables, since what's returned varies by webserver.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680698">9</a> by Raymond Camden
		posted on 5/8/2008 at 7:24 PM
		</div>
		<div class="comment_text"><p>@jdbo:</p><p>Yep. getBaseTagList will give you a list of everyone above you. To get the guy right above you, it would just be the last item.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680707">10</a> by Trent Richardson
		posted on 5/8/2008 at 7:29 PM
		</div>
		<div class="comment_text"><p>Just to mix things up a bit, and I've been doing some url rewrites &amp; php lately, what kind of curveball does this throw here(of course in CF)? Where according to the web root we might see</p><p>/dir1/dir2/what-im-viewing</p><p>but it might actually be</p><p>/some/dir/index.cfm</p><p>I'm actually not at all familiar with rewrites and ColdFusion, and I am asking this out of curiosity.  Would the solutions provided be fore the actual url, or the rewritten url?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680708">11</a> by Steve Withington
		posted on 5/8/2008 at 8:28 PM
		</div>
		<div class="comment_text"><p>I think Patrick is actually looking for this:</p><p>&lt;cfset thisDirectory = ExpandPath(".")&gt;<br>&lt;cfoutput&gt;#getFileFromPath(thisDirectory)#&lt;/cfouptut&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680719">12</a> by Dan G. Switzer, II
		posted on 5/8/2008 at 8:34 PM
		</div>
		<div class="comment_text"><p>Just in case people are actually wanting to get the "web path" and not the OS path, I wiped up a little UDF that should return the correct web path:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.pengoworks.com%2Findex.cfm%2F2008%2F5%2F8%2FGetting-the-URLweb-folder-path-in-ColdFusion%3A0DQX3L15gbZ7DQ1Lx3-AsV9gEww&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.pengoworks.com/index.cfm/2008/5/8/Getting-the-URLweb-folder-path-in-ColdFusion">http://blog.pengoworks.com/...</a></p><p>This uses the getPageContext() to return the path info--which should be more reliable than CGI.path_info.</p><p>@Trent:<br>This *should* work for virtual or remapped folders as well (since it should be return the path as seen by the browser,) but I have not tested it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680715">13</a> by Rachel
		posted on 5/8/2008 at 8:37 PM
		</div>
		<div class="comment_text"><p>A clever developer once showed me a handy trick for dealing with paths - and getting certain parts - by using list functions (listFirst,listLast,listGetAt) and passing slashes (back or forward) as a delimiter in the list. As someone else mentioned, it all depends on what you're trying to get, but I have found that trick quite useful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680714">14</a> by Patrick
		posted on 5/8/2008 at 9:33 PM
		</div>
		<div class="comment_text"><p>Hi @ all and thanks for all the hints.<br>Ray wrote me, i should use listlast(<a href="http://disq.us/url?url=http%3A%2F%2Fapplication.directory%3A_iK30jUOpHjy9Sd-TfVrwbzaVAg&amp;cuid=3321886" rel="nofollow noopener" title="application.directory">application.directory</a>,"/\"), 'cause i have set this:<br>&lt;cfset application.Path = ExpandPath(CGI.SCRIPT_NAME)&gt;<br>&lt;cfset application.Directory = GetDirectoryFromPath(application.Path)&gt;</p><p>What i need is the path relative to the executed template.<br>So if my URL is <a href="http://disq.us/url?url=http%3A%2F%2Fwww.example.com%2Fsome%2Fother%2Ffolders%2Findex.cfm%3AQIIBQOAX2oLUc_5mpyrXZzJwsfI&amp;cuid=3321886" rel="nofollow noopener" title="www.example.com/some/other/folders/index.cfm">www.example.com/some/other/...</a><br>I only want folders. The listlast works, but only if i'm in a subdirectory. Calling the listlast from the webroot returns htdocs, of course. But this can be handled.</p><p>My problem is, that i don't know if the project i'm currently work on, will be placed in the webroot or in some subfolder(s).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680720">15</a> by Raymond Camden
		posted on 5/8/2008 at 9:38 PM
		</div>
		<div class="comment_text"><p>Patrick, I read your comment 3 times and I'm still confused. What do you mean "I only want folders". Maybe you can give us an example of the result you want? Ie a real example. (Url = x, I want y).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680717">16</a> by Patrick
		posted on 5/8/2008 at 9:42 PM
		</div>
		<div class="comment_text"><p>Me again. I now tried the UDF from Dan. This exactly what i searched for! Thanks!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680716">17</a> by Patrick
		posted on 5/8/2008 at 10:12 PM
		</div>
		<div class="comment_text"><p>@ Ray</p><p>If the URL is <a href="http://disq.us/url?url=http%3A%2F%2Fwww.example.com%2Fshop%2Fproducts%2Fcomputers%2Findex.cfm%3AeEZIG-rh9_ICVcbsnnB3IYknV3Q&amp;cuid=3321886" rel="nofollow noopener" title="www.example.com/shop/products/computers/index.cfm">www.example.com/shop/produc...</a></p><p>I want computers. With / or not never mind. (hope this is correct english, i'm german ;))</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680712">18</a> by Steve Withington
		posted on 5/8/2008 at 10:17 PM
		</div>
		<div class="comment_text"><p>@Patrick,</p><p>Did you see my comment?  It gives you just that without having to use a UDF.</p><p>I blogged it at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.stephenwithington.com%3AG6nMgsrHVkgKTjAedfeMi9eCRwA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.stephenwithington.com">http://www.stephenwithingto...</a></p><p>If you use this:</p><p>&lt;cfset thisDirectory = ExpandPath(".") /&gt;<br>&lt;cfoutput&gt;#getFileFromPath(thisDirectory)#&lt;/cfoutput&gt;</p><p>The result is "folder"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680718">19</a> by Raymond Camden
		posted on 5/8/2008 at 10:23 PM
		</div>
		<div class="comment_text"><p>Ditto Steve. You could also use the code I originally suggested, but add the listLast to get the last folder. Steve's is shorter though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680724">20</a> by Raymond Camden
		posted on 5/8/2008 at 10:24 PM
		</div>
		<div class="comment_text"><p>By the way, it's nice to know this 'simple' blog entry has gotten so much discussion. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680713">21</a> by Patrick
		posted on 5/8/2008 at 10:30 PM
		</div>
		<div class="comment_text"><p>@ Steve<br>Sorry, i missed your post. It's another good solution, of course!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680722">22</a> by jdbo
		posted on 5/8/2008 at 11:50 PM
		</div>
		<div class="comment_text"><p>@ray re:getbasetaglist</p><p>Thanks!  I'd never looked closely at this tag, always having considered it one of the odder additions - now I see how it could be useful, thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680725">23</a> by Dan G. Switzer, II
		posted on 5/9/2008 at 7:07 PM
		</div>
		<div class="comment_text"><p>@Steve:</p><p>The only issue with your solution is it does not work if you're using virutal folders or using a remapping rule. If those are an issue, it works fine.</p><p>I wrote the UDF with the intent on working on the actually URL in the browser--which can vary drastically from the OS path.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713680723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713680723">24</a> by Edward Beckett
		posted on 9/19/2008 at 6:53 AM
		</div>
		<div class="comment_text"><p>&lt;h5&gt;&amp;#171; &amp;#171; &amp;#171; &lt;cfset up = ExpandPath(".")&gt;&lt;a href="./")"&gt;&lt;cfoutput&gt;#getFileFromPath(up)#&lt;/a&gt;&lt;/cfoutput&gt;&lt;/a&gt; &lt;/h5&gt;</p><p>Bread Crumbs ... :)</p></div>
	</div>
</div>
		