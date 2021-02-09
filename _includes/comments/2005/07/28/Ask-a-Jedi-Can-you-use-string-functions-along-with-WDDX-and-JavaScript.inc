
<div class="comment" id="c_1713619452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619452">1</a> by Dan G. Switzer, II
		posted on 7/29/2005 at 1:58 AM
		</div>
		<div class="comment_text"><p>Something like this would work:</p><p>[cfloop query="query"]<br>  [cfset query.col[query.currentRow] = htmlEditFormat(query.col[query.currentRow])]<br>[/cfloop]</p><p>[cfwddx action="cfml2js" toplevelvariable="jsVarName" /]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619457">2</a> by Dan G. Switzer, II
		posted on 7/29/2005 at 1:59 AM
		</div>
		<div class="comment_text"><p>PS - I wasn't sure if the greater than/less than stuff would show up, so I used brackets instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619456">3</a> by Tyson Vanek
		posted on 7/29/2005 at 6:33 PM
		</div>
		<div class="comment_text"><p>Just a word of caution.  If you are dealing with extremely large record sets, a CFLOOP over the query might be a bad way to go.  You might consider handling the string replacement at the database level, allowing the database server to do the work.  Here's an example:</p><p>select<br>     id<br>,    account_name<br>,    replace(replace(account_html,'&lt;','&lt;'),'&gt;','&gt;') as account_html_safe<br>from tblAccounts</p><p>For larger volume queries, this could save tons of time in comparison to a CFLOOP.  You could also make the replace statement(s) more complex and comprehensive.  You could even consider defining a database function to perform the operation.  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619450">4</a> by Tyson Vanek
		posted on 7/29/2005 at 6:36 PM
		</div>
		<div class="comment_text"><p>Alright... so the comment interpreted my SQL statement incorrectly.  Let me try again.</p><p>select<br>&amp;nbsp;&amp;nbsp;&amp;nbsp;&amp;nbsp;&amp;nbsp;id<br>,&amp;nbsp;&amp;nbsp;&amp;nbsp;&amp;nbsp;account_name<br>,&amp;nbsp;&amp;nbsp;&amp;nbsp;&amp;nbsp;replace(replace(account_html,'&lt;','&amp; lt;'),'&gt;','&amp; gt;' as account_html_safe<br>from tblAccounts</p><p>In the statement above you would need to remove the spaces separating the "&amp;" sign from "lt;" and "gt;", allowing the "&lt;" and "&gt;" symbols to be replaced with their character code equivalents.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619451">5</a> by Tyson Vanek
		posted on 7/29/2005 at 6:38 PM
		</div>
		<div class="comment_text"><p>And ignore the "&amp;nbsp;" tags.  Funny that the blog interprets the characters codes for "&amp;lt;" and "&amp;gt;" but not for "&amp;nbsp;".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619455">6</a> by Raymond Camden
		posted on 7/29/2005 at 6:42 PM
		</div>
		<div class="comment_text"><p>Excellent points Tyson.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713619453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713619453">7</a> by Tony Petruzzi
		posted on 7/30/2005 at 1:23 AM
		</div>
		<div class="comment_text"><p>Tyson bring up a very important point. Let's not forget that you can also perform Regexp in SQL Server 2000 with this little handy xp:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.codeproject.com%2Fmanagedcpp%2Fxpregex.asp%3APdI4rYPvcjzKIfEAYOuVtLhc3k8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.codeproject.com/managedcpp/xpregex.asp">http://www.codeproject.com/...</a></p><p>And in SQL Server 2005 you will be able to use .Net to do the same:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblogs.msdn.com%2Fsqlclr%2Farchive%2F2005%2F06%2F29%2Fregex.aspx%3AYSmIJMHz5Mimmw2mknhr9T4kWas&amp;cuid=3321886" rel="nofollow noopener" title="http://blogs.msdn.com/sqlclr/archive/2005/06/29/regex.aspx">http://blogs.msdn.com/sqlcl...</a></p></div>
	</div>
</div>
		