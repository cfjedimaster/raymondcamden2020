
<div class="comment" id="c_1713674890">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674890">1</a> by Scott Bennett
		posted on 12/4/2007 at 2:17 AM
		</div>
		<div class="comment_text"><p>I noticed that too a while back...I got around it by using jsstringformat() like:</p><p>&lt;cfquery name="data" datasource="mydatasource"&gt;<br>select filename, directory<br>from myfiletable<br>&lt;/cfquery&gt;</p><p>&lt;cfloop from="1" to="#data.recordcount#" index="i"&gt;<br>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fdata.directory%3ANMiwBzUif9h-E8_HrO_kYqWDnXI&amp;cuid=3321886" rel="nofollow noopener" title="data.directory">data.directory</a>[i] =jsstringformat(<a href="http://disq.us/url?url=http%3A%2F%2Fdata.directory%3ANMiwBzUif9h-E8_HrO_kYqWDnXI&amp;cuid=3321886" rel="nofollow noopener" title="data.directory">data.directory</a>[i])&gt; <br>&lt;/cfloop&gt;</p><p>&lt;cfform name="myForm"&gt;<br>&lt;cfgrid autowidth="true" name="data" format="html" query="data" width="600"&gt;<br>&lt;cfgridcolumn name="filename" header="filename"&gt;<br>&lt;cfgridcolumn name="directory" header="directory"&gt;<br>&lt;/cfgrid&gt;<br>&lt;/cfform&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674904">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674904">2</a> by Raymond Camden
		posted on 12/4/2007 at 2:22 AM
		</div>
		<div class="comment_text"><p>Ah, nice. Although I prefer / cuz I think I'm more used to it being on a Mac. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674906">3</a> by Scott Bennett
		posted on 12/4/2007 at 2:37 AM
		</div>
		<div class="comment_text"><p>To each his own, as long as it works that's what matters. =)</p></div>
	</div>
</div>
		