
<div class="comment" id="c_1713653667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653667">1</a> by Mario Rodrigues
		posted on 6/6/2006 at 2:23 AM
		</div>
		<div class="comment_text"><p>Ray, another option (cross-platform) could be:</p><p>	function GetFolderSize(directory) {<br>		var folderSize = 0;<br>		var currentFolderSize = 0;<br>		var filelist = createobject("java","java.io.File");<br>		var i = 0;<br>		var folder = createObject("java", "java.io.File").init(<a href="http://disq.us/url?url=http%3A%2F%2Farguments.directory%3AuSrP0K2CHwirw1MvMxQEIjr671g&amp;cuid=3321886" rel="nofollow noopener" title="arguments.directory">arguments.directory</a>);<br>		if (FindNoCase("Windows",server.OS.Name)) {<br>			fso  = CreateObject("COM", "Scripting.FileSystemObject");<br>			folder = fso.Getfolder(<a href="http://disq.us/url?url=http%3A%2F%2Farguments.directory%3AuSrP0K2CHwirw1MvMxQEIjr671g&amp;cuid=3321886" rel="nofollow noopener" title="arguments.directory">arguments.directory</a>);<br>			return folder.Size;<br>		}</p><p>		if (folder.isDirectory()) {<br>			filelist = folder.listFiles();<br>			for (i=1;i LTE ArrayLen(filelist);i=i+1) {<br>				folderSize = folderSize + GetFolderSize(filelist[i].getAbsolutePath());<br>			}<br>			return folderSize;<br>		} else {<br>			return folder.length(); <br>		} <br>	}<br>	WriteOutput(NumberFormat(GetFolderSize("C:\Temp\")));</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653668">2</a> by Raymond Camden
		posted on 6/6/2006 at 6:39 AM
		</div>
		<div class="comment_text"><p>Cool. Thanks for sharing Mario.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713653669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713653669">3</a> by asso
		posted on 9/30/2006 at 5:19 AM
		</div>
		<div class="comment_text"><p>In the recursive mode of directoryList function, the filtering doesn't work .. (cfmx 6.1)</p></div>
	</div>
</div>
		