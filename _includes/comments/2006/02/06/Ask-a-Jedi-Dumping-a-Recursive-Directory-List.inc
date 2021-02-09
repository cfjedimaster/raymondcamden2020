
<div class="comment" id="c_1713649823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649823">1</a> by todd
		posted on 2/7/2006 at 7:38 AM
		</div>
		<div class="comment_text"><p>This is really ironic...I was thinking about this exact topic on my way home from work today (although with a slightly different output).  Thanks a lot! This will definitely help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649821">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649821">2</a> by emmet
		posted on 2/7/2006 at 7:57 AM
		</div>
		<div class="comment_text"><p>More on the subject of recursion and coincidence.  I just came across this tonite before popping over here. <a href="http://disq.us/url?url=http%3A%2F%2Frickosborne.org%2Fblog%2F%3Fp%3D3%3A9YHhqhKpfzSm6k4Zn9_bX2D7eH8&amp;cuid=3321886" rel="nofollow noopener" title="http://rickosborne.org/blog/?p=3">http://rickosborne.org/blog...</a></p><p>I'm interested to see how you handle db sorting and recursion Ray.  My method has always been on the sloppy side.  Including the same file over and over again until there are no more parents to be found.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649826">3</a> by Raymond Camden
		posted on 2/7/2006 at 7:43 PM
		</div>
		<div class="comment_text"><p>Emmet - well, that is an example of recursion actually. But I know what you mean - recursion can get messy and is a pain to debug at times.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649824">4</a> by Doug
		posted on 2/7/2006 at 7:49 PM
		</div>
		<div class="comment_text"><p>Minor nit-pick: Nested lists should have the sub list between the li tags of the parent, not after.</p><p>Simply moving the closing li in your function so it's after the recursive call to the function accomplishes this.</p><p>I only point this out because it's a handy function if you use a menuing system like udm4 (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.udm4.com%3AHDGToEPweaxu3jHNUsoVMjDVwww&amp;cuid=3321886" rel="nofollow noopener" title="www.udm4.com">www.udm4.com</a>), but it won't work if the nesting isn't proper.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649825">5</a> by Raymond Camden
		posted on 2/7/2006 at 7:53 PM
		</div>
		<div class="comment_text"><p>Thanks Doug - I was a bit unsure on that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649828">6</a> by Daniel Greenfeld
		posted on 2/7/2006 at 8:01 PM
		</div>
		<div class="comment_text"><p>Nice, simple, and elegant!  Great!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649827">7</a> by Doug
		posted on 2/7/2006 at 9:52 PM
		</div>
		<div class="comment_text"><p>emmet - For database hierarchies, I tend to prefer to let the database do the work. The only downside is that different RDBMS' have different methods of approaching the problem.</p><p>Oracle has by far the best method of handling hierarchical data with the "start with...connect by prior" syntax.</p><p>Given a table with id, name and parentid columns, you can get a sorted tree result like so:</p><p>select name, level<br>from table<br>start with parentid is null<br>connect by prior id = parentid<br>order siblings by name asc</p><p>The level column is a pseudo column that gives the depth of each row in the hierarchy, so the root is level 1, it's children level 2, and so on.</p><p>The "order siblings by" sorts the results appropriately within each node (in this case, alphabetically by name).</p><p>You can get a similar result in other databases using CTE (Common Table Expressions), but not nearly so easily. Here's an article that compares the two methods:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww-128.ibm.com%2Fdeveloperworks%2Fdb2%2Flibrary%2Ftecharticle%2Fdm-0510rielau%2F%3AQLkrMHYjSdMRK29YfbDl2CioAQo&amp;cuid=3321886" rel="nofollow noopener" title="http://www-128.ibm.com/developerworks/db2/library/techarticle/dm-0510rielau/">http://www-128.ibm.com/deve...</a></p><p>In my experience, from a strictly performance standpoint, either method is preferrable to doing the sorting in the application, particularly if the dataset is large.</p><p>That being said, if your requirements dictate database portability, Rick Osborne's method in the link you cited seems to be a pretty decent approach, although I haven't tested it out myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649829">8</a> by Emmet
		posted on 2/7/2006 at 10:04 PM
		</div>
		<div class="comment_text"><p>Im on MSSQL.  Oracle is but a pipe dream.  I never really had a problem with my method until I noticed how horribly one of our clients apps are now performing.  It's an older CF5 app and I dont think it was ever expected to grow to the level it has.  It's now taking over 1000ms to generate a tree. Now that were on CFMX7 I need to explore some other options.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649832">9</a> by Doug
		posted on 2/7/2006 at 10:20 PM
		</div>
		<div class="comment_text"><p>For MSSQL, take a look here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fmsdn2.microsoft.com%2Fen-us%2Flibrary%2Fms175972.aspx%3ASwygH0JiAjl0IHKbHTF_uLuo-aY&amp;cuid=3321886" rel="nofollow noopener" title="http://msdn2.microsoft.com/en-us/library/ms175972.aspx">http://msdn2.microsoft.com/...</a></p><p>This covers using CTEs in MSSQL, and combined with the <a href="http://disq.us/url?url=http%3A%2F%2Fibm.com%3Ax5a_1SsXhS3wj3nwiQPrMgXk088&amp;cuid=3321886" rel="nofollow noopener" title="ibm.com">ibm.com</a> link in my previous comment should give you a solid foundation if you want to try this approach.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649845">10</a> by Christopher Wigginton
		posted on 2/8/2006 at 12:52 AM
		</div>
		<div class="comment_text"><p>Though it's not an unordered list, a tree display might be a better solution and easier. I just whipped up an example and added it as a trackback.</p><p>Ray... Forgive the title, I couldn't resist :-)</p><p>Wiggy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649846">11</a> by emmet
		posted on 2/8/2006 at 2:08 AM
		</div>
		<div class="comment_text"><p>Thanks Doug.  Thats alot to wrap my head around.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649847">12</a> by todd
		posted on 2/8/2006 at 2:47 AM
		</div>
		<div class="comment_text"><p>Don't forget Forta's example:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.forta.com%2Fblog%2Findex.cfm%3Fmode%3Dentry%26entry%3DA61BC791-3048-80A9-EF8258B97C3454CA%3AxRVkbIh2c2QZRzbQVI4PLG8tpmQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.forta.com/blog/index.cfm?mode=entry&amp;entry=A61BC791-3048-80A9-EF8258B97C3454CA">http://www.forta.com/blog/i...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649849">13</a> by Doug Wilder
		posted on 3/10/2006 at 1:19 AM
		</div>
		<div class="comment_text"><p>I have two dropdown menus in a form. The first is populated with directories using cfdirectory (looping thru to find any of type="dir"). The second dropdown needs to be a list of subdirectories that fall under whatever directory the user chooses in the first dropdown menu. Below is the code I've tried but it's not working. Seems like I need something in the onchange event. I've looked at the cf_twoselectsrelated but can't see how to implement it when the query is a set of directories. I don't see exactly how to use the recurse="true" (or "yes"?) either since it looks like all that will do is put the subdirectories into the same dropdown box as their parent directories. Ultimately, I want to allow users to choose at least upto two directory levels for uploading files. For that, I need the parent dir name and subdir name.Any help/ideas is greatly appreciated!<br>Doug in Fairbanks</p><p>&lt;p&gt;Choose top level folder:&lt;br /&gt;<br>   &lt;select name="mnuFolder" onchange=""&gt;<br>   &lt;cfdirectory directory="D:\myplace\" name="Parent_Folder"&gt;<br>   &lt;cfloop query="Parent_Folder"&gt;<br>      &lt;cfif #Parent_Folder.Type# eq "Dir"&gt;<br>         &lt;cfoutput&gt;<br>         &lt;option value="#Parent_Folder.Name#\"&gt;#Parent_Folder.Name#&lt;/option&gt;<br>         &lt;/cfoutput&gt;<br>      &lt;/cfif&gt;<br>   &lt;/cfloop&gt;<br>   &lt;/select&gt;&lt;br /&gt;<br>Choose subfolder (if any):&lt;br /&gt;<br>   &lt;select name="mnuSubFolder"&gt;<br>   &lt;cfdirectory directory="D:\myplace\#Parent_Folder.Name#\" name="Sub_Folder"&gt;<br>   &lt;cfloop query="Sub_Folder"&gt;<br>   &lt;cfif #Sub_Folder.Type# eq "Dir"&gt;<br>      &lt;cfoutput&gt;<br>      &lt;option value="#Sub_Folder.Name#\"&gt;#Sub_Folder.Name#&lt;/option&gt;<br>      &lt;/cfoutput&gt;<br>   &lt;/cfif&gt;<br>   &lt;/cfloop&gt;<br>   &lt;/select&gt;&lt;br /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649848">14</a> by Raymond Camden
		posted on 3/10/2006 at 1:28 AM
		</div>
		<div class="comment_text"><p>What you need is dependant selects. You can find many posts on that if you google. It is a bit too much to discuss here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649850">15</a> by Lamisaunet
		posted on 5/12/2006 at 11:28 PM
		</div>
		<div class="comment_text"><p>After three days, I've found an easier way :</p><p>&lt;cfparam default="#GetDirectoryFromPath(GetTemplatePath())#/showcase" name="repertoire"/&gt;<br>&lt;cfdirectory action="list" directory="#repertoire#" name="allDirectories" recurse="true"/&gt;<br>            &lt;cfoutput query="allDirectories" group="name"&gt;<br>                    &lt;cfif #allDirectories.type# IS "DIR"&gt;<br>                                &lt;h3&gt;#<a href="http://disq.us/url?url=http%3A%2F%2FallDirectories.name%3ADFflLSU1HuKlPMkjhipSGe0l2po&amp;cuid=3321886" rel="nofollow noopener" title="allDirectories.name">allDirectories.name</a>#&lt;/h3&gt;   <br>                                &lt;cfelse&gt;<br>                                &lt;pre&gt;#<a href="http://disq.us/url?url=http%3A%2F%2FallDirectories.name%3ADFflLSU1HuKlPMkjhipSGe0l2po&amp;cuid=3321886" rel="nofollow noopener" title="allDirectories.name">allDirectories.name</a>#&lt;/pre&gt;<br>                                &lt;/cfif&gt;          <br>             &lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649851">16</a> by Doug Wilder
		posted on 6/7/2006 at 12:37 AM
		</div>
		<div class="comment_text"><p>Isn't this going to list all directories in one list? What I need is two selects with the first listing top-level directories and the second listing subdirectories of the top-level directory selected in the first select. I searched for "independent selects" but am coming up empty. Sorry if this is a bit much for this site but this is the closest I've come to a solution.</p><p>Thanks,<br>Doug Wilder</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649852">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649852">17</a> by Dylan
		posted on 5/11/2007 at 9:10 PM
		</div>
		<div class="comment_text"><p>Could someone share an example of how to call this function? I'm new to using UDF, and I'm unsure how to input the correct values for the arguments.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649853">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649853">18</a> by Raymond Camden
		posted on 5/11/2007 at 10:24 PM
		</div>
		<div class="comment_text"><p>Please check the CF Docs on how to use UDFs. In general though you call them like any other function. The arguments for the UDF in this entry are first a query of files, then the path to the initial directory.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649854">19</a> by Dylan
		posted on 5/11/2007 at 10:26 PM
		</div>
		<div class="comment_text"><p>ah, a query of files. that's what I needed to know. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713649855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713649855">20</a> by glen
		posted on 7/27/2009 at 6:07 AM
		</div>
		<div class="comment_text"><p>Using Ray's example as a starting point I have tweaked it to create a recursive function that 'copies' a folder structure, 3 deep and excludes files.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.stinkylittlefriend.com%2Fblog%2Findex.cfm%2F2009%2F7%2F27%2FRecurse-through-folder-structure-to-a-specific-depth%3ArbOeBBOrnOPRK1wqI44l9-zGydM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.stinkylittlefriend.com/blog/index.cfm/2009/7/27/Recurse-through-folder-structure-to-a-specific-depth">http://www.stinkylittlefrie...</a></p></div>
	</div>
</div>
		