
<div class="comment" id="c_1713675745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675745">1</a> by todd sharp
		posted on 12/23/2007 at 5:18 AM
		</div>
		<div class="comment_text"><p>I have a similar solution that I posted a while back.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfsilence.com%2Fblog%2Fclient%2Findex.cfm%2F2007%2F2%2F19%2FExporting-A-Page-To-PDF-Using-cfdocument%23more%3A1gBq-NllhDV_vxp-wD-5cndcESo&amp;cuid=3321886" rel="nofollow noopener" title="http://cfsilence.com/blog/client/index.cfm/2007/2/19/Exporting-A-Page-To-PDF-Using-cfdocument#more">http://cfsilence.com/blog/c...</a></p><p>Looking back it's not the most elegant solution either.  Interesting idea about using onRequest - I hadn't thought of that before but I may consider that in the future.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675757">2</a> by Dan G. Switzer, II
		posted on 12/24/2007 at 6:55 PM
		</div>
		<div class="comment_text"><p>I used to split my page layout tag (which generates the footer/header around content) to have the "start" mode do the header and the "end" mode do the footer.</p><p>However, I quickly learned that it was tough to read and would often create situations I couldn't workaround easily--like you descrip.</p><p>So, I use a similar technique, but I think it's even simpilier--I just place all my wrapper code in the "end" execution mode:</p><p>&lt;cfif thisTag.executionMode is "start"&gt;<br>  &lt;!---// define any attributes here //---&gt;</p><p>  &lt;!---// define any global variables here //---&gt;<br>&lt;cfelse&gt;<br>   &lt;cfset content = thisTag.generatedContent&gt;<br>   &lt;cfset thisTag.generatedContent = ""&gt;</p><p>   &lt;html&gt;<br>   &lt;body&gt;<br>   &lt;cfoutput&gt;#content#&lt;/cfoutput&gt;<br>   &lt;/body&gt;<br>   &lt;/html&gt;</p><p>&lt;/cfif&gt;</p><p>The thing I like about this is it keeps all my HTML together in a way that's very easy to read.</p><p>I use the "start" block to initialize all my variables and do any of the code centric work.</p><p>I find this method to work much more effectively for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675759">3</a> by Devon Burriss
		posted on 12/24/2007 at 7:57 PM
		</div>
		<div class="comment_text"><p>Thanks Ray<br>Much appreciated!</p></div>
	</div>
</div>
		