
<div class="comment" id="c_1713656484">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656484">1</a> by Jay Greer
		posted on 8/18/2006 at 8:48 PM
		</div>
		<div class="comment_text"><p>Elderberries you say..?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.patch-work.demon.co.uk%2Felder.htm%23C%3AjdgLveT5icYY6f9atVmsciouIic&amp;cuid=3321886" rel="nofollow noopener" title="http://www.patch-work.demon.co.uk/elder.htm#C">http://www.patch-work.demon...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656492">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656492">2</a> by todd
		posted on 8/18/2006 at 8:50 PM
		</div>
		<div class="comment_text"><p>&lt;cffunction name="mailAssasin" description="retrieves mail, parses content for keyword" returntype="any"&gt;<br>	&lt;cfargument name="mailServer" type="string" required="true" hint="the mail server"&gt;<br>	&lt;cfargument name="mailUserName" type="string" required="true" hint="the mail user name"&gt;<br>	&lt;cfargument name="mailPassWord" type="string" required="true" hint="the mail users password"&gt;<br>	&lt;cfargument name="keyword" type="string" required="true" hint="the keyword we're looking for"&gt;<br>	&lt;cfset var results = ""&gt;<br>	&lt;cfset var mailContents = queryNew("")&gt;</p><p>	&lt;cfpop action="getall" server="#arguments.mailServer#" username="#arguments.mailUserName#" password="#arguments.mailPassword#" name="mailContents"/&gt;<br>	&lt;cfif mailContents.recordCount&gt;<br>		&lt;cfoutput query="mailContents"&gt;<br>			&lt;cfif mailContents.body[currentRow] contains arguments.keyword or mailContents.subject[currentRow] contains arguments.keyword&gt;<br>				&lt;cfset results = listAppend(results, mailContents.messageNumber[currentRow], ",")&gt;<br>			&lt;/cfif&gt;<br>		&lt;/cfoutput&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfreturn results/&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656490">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656490">3</a> by Cutter
		posted on 8/18/2006 at 9:34 PM
		</div>
		<div class="comment_text"><p>Hey Todd,</p><p>Since you are already looping your query via the cfoutput (&lt;cfoutput query="mailContents"&gt;), doesn't that already imply that all references between the opening and closing cfoutput tags is from the same record? Is the [currentRow] necessary? (I'm sure you can use it, but is it necessary since to [] notation isn't being used to reference a different record? Like [currentRow+1] or something...)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656493">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656493">4</a> by todd
		posted on 8/18/2006 at 9:40 PM
		</div>
		<div class="comment_text"><p>You're absolutely right - it's not necessary.  Not really sure why i did that.  Just threw it together quickly without thinking.</p><p>Ray - any performance issues surrounding this issue?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656495">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656495">5</a> by Raymond Camden
		posted on 8/18/2006 at 9:47 PM
		</div>
		<div class="comment_text"><p>Todd, I'd be surprised. Heck, it may even be .00001% faster since you are not letting CF remember that no index means index 1.</p><p>But don't quote me on that. ;)</p><p>Personally, I see nothing wrong with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656496">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656496">6</a> by todd
		posted on 8/18/2006 at 9:50 PM
		</div>
		<div class="comment_text"><p>I guess it's just becoming a habit the more I work with structures.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713656498">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713656498">7</a> by tof
		posted on 8/21/2006 at 11:17 AM
		</div>
		<div class="comment_text"><p>Your father was a hamster :-D</p></div>
	</div>
</div>
		