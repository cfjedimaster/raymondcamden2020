
<div class="comment" id="c_1713738013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738013">1</a> by Tom K
		posted on 1/11/2012 at 9:55 PM
		</div>
		<div class="comment_text"><p>Love it - but why do we then need to implicitly state the columns within the array if they've already been declared?</p><p>Can't we do:</p><p>users = queryNew("id,username,password","varchar,varchar,varchar",<br>    [{1, "bob", "unicorn"},<br>     {2, "scott", "ilikesoccer"}]<br>etc?</p><p>Then if you change the column name, you don't have to do it in loads of places?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738018">2</a> by Steve Durette
		posted on 1/11/2012 at 9:55 PM
		</div>
		<div class="comment_text"><p>This is awesome. I always thought there should be a better way to add a row of data than the way we were forced to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738025">3</a> by Matt Quackenbush
		posted on 1/11/2012 at 9:57 PM
		</div>
		<div class="comment_text"><p>YAY! Two _very_ welcome enhancements!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738027">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738027">4</a> by O?uz Demirkap?
		posted on 1/11/2012 at 9:57 PM
		</div>
		<div class="comment_text"><p>Nice! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738034">5</a> by Brian Swartzfager
		posted on 1/11/2012 at 10:03 PM
		</div>
		<div class="comment_text"><p>Very nice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738032">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738032">6</a> by andy matthews
		posted on 1/11/2012 at 10:14 PM
		</div>
		<div class="comment_text"><p>I agree with Tom K. Column names are already defined. That's just extra typing to make users define them again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738033">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738033">7</a> by Raymond Camden
		posted on 1/11/2012 at 10:17 PM
		</div>
		<div class="comment_text"><p>Tom - what if you want to specify some, but not all of the columns?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738035">8</a> by Tom K
		posted on 1/11/2012 at 10:31 PM
		</div>
		<div class="comment_text"><p>@Ray - then treat it like a CSV - i.e foo,something,,,something ?<br>I agree with massive multi column versions, it's less readable, but if it's just 2 or 3.. it would be nice to have the option anyway!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738039">9</a> by Sam Farmer
		posted on 1/11/2012 at 10:42 PM
		</div>
		<div class="comment_text"><p>I like Tom K's suggestion and why not have both? For the third argument to queryNew:<br> - if its an array of structure use the key as the column.<br> - if its an array of arrays assume the column from the order defined as so:</p><p>&lt;cfset users = queryNew("id,username,password","varchar,varchar,varchar",<br>    [[1,"bob","unicoron"],<br>     [2, "scott","ilikesoccer"] ])&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738040">10</a> by Raymond Camden
		posted on 1/11/2012 at 10:45 PM
		</div>
		<div class="comment_text"><p>Ok ok you convinced me. ;)</p><p>Sam, you know where you can make this suggestion. Please do so. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738038">11</a> by Sam Farmer
		posted on 1/11/2012 at 10:54 PM
		</div>
		<div class="comment_text"><p>Wherever that place may be. Its done. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738037">12</a> by MikeZ
		posted on 1/11/2012 at 11:06 PM
		</div>
		<div class="comment_text"><p>Now there's something the majority of us will have a use for.<br>Also, think about Zeus' support for closures and you'll see how this can be taken to a whole new level.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738036">13</a> by Henry
		posted on 1/11/2012 at 11:51 PM
		</div>
		<div class="comment_text"><p>Love it, I wanna use it now... to store a dynamically created CFHTTP request...</p><p>While we're at it, can we get a getParams() function in the Http class?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738042">14</a> by Raymond Camden
		posted on 1/12/2012 at 12:20 AM
		</div>
		<div class="comment_text"><p>Henry - what do you mean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738041">15</a> by Henry
		posted on 1/12/2012 at 12:25 AM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F9.0%2FCFMLRef%2FWSe9cbe5cf462523a0693d5dae123bcd28f6d-7ff8.html%3AveSrJqHaZGLD1jmFWpid9zC__sI&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/9.0/CFMLRef/WSe9cbe5cf462523a0693d5dae123bcd28f6d-7ff8.html">http://help.adobe.com/en_US...</a></p><p>There's setAttributes() &amp; getAttributes() &amp; clearAttributes()<br>but there's only addParam() &amp; clearParams()...</p><p>Where's getParams()?</p><p>Thx</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738043">16</a> by Raymond Camden
		posted on 1/12/2012 at 12:28 AM
		</div>
		<div class="comment_text"><p>Um, well, since you are the one who adds params, do you need a get params? Maybe for completeness sake I guess - but it seems a bit weird.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738045">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738045">17</a> by Raymond Camden
		posted on 1/12/2012 at 12:31 AM
		</div>
		<div class="comment_text"><p>It looks like params are in a Variables scope key in base.cfc. You could add:</p><p>public function getParams() { return variables.parems; }</p><p>and there ya go. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738050">18</a> by Henry
		posted on 1/12/2012 at 12:38 AM
		</div>
		<div class="comment_text"><p>For completeness and for testing / unit testing.</p><p>I know I can add it there myself, but it'd be better if it is added officially by Adobe so that the next guy running my code would not need to change the base.cfc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738046">19</a> by Raymond Camden
		posted on 1/12/2012 at 12:40 AM
		</div>
		<div class="comment_text"><p>Then you know the routine - file an ER. :) Feel free to use my code above... just correct the typo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738047">20</a> by Henry
		posted on 1/12/2012 at 12:49 AM
		</div>
		<div class="comment_text"><p>File ER to <a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%3A_X3SytQfggPoTF_n55sEsA7v1EA&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html">http://cfbugs.adobe.com/cfb...</a> ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738048">21</a> by Raymond Camden
		posted on 1/12/2012 at 12:50 AM
		</div>
		<div class="comment_text"><p>Yep.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738049">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738049">22</a> by John Allen
		posted on 1/12/2012 at 2:02 AM
		</div>
		<div class="comment_text"><p>This is awesome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738051">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738051">23</a> by Meenakshi
		posted on 1/12/2012 at 11:28 AM
		</div>
		<div class="comment_text"><p>This technique comes in very handy while using Xml data set returned from an http request.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738052">24</a> by Atan
		posted on 1/12/2012 at 1:56 PM
		</div>
		<div class="comment_text"><p>That small enhancements are very nice (long awaited)!</p><p>Is there also a way to set default values to omit keys in the structs?</p><p>I also hope for queryRowToStruct() &amp; queryToArray()</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738053">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738053">25</a> by Misty
		posted on 1/12/2012 at 5:23 PM
		</div>
		<div class="comment_text"><p>Well @ Atan, I suppose there are UDF's avaliable, so probably i do not thnk that should be needed</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738054">26</a> by Raymond Camden
		posted on 1/12/2012 at 5:28 PM
		</div>
		<div class="comment_text"><p>Yo Misty... um... do I need to turn on PG Gravatars?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738055">27</a> by Neeko
		posted on 1/12/2012 at 10:42 PM
		</div>
		<div class="comment_text"><p>100 to 1 that is NOT misty. :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738056">28</a> by Raymond Camden
		posted on 1/12/2012 at 10:44 PM
		</div>
		<div class="comment_text"><p>Yeah... I can change my URLs to be G rated only, but wanted to see if she could respond first. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738058">29</a> by Julian Halliwell
		posted on 1/13/2012 at 2:29 PM
		</div>
		<div class="comment_text"><p>Great new feature, Raymond. Looking forward to it.</p><p>Just a correction on the current version though. You said:</p><p>'since queryNew expects at least one column, you're still going to have to do one the "ugly" way'</p><p>Actually you can create a query without any columns, and then add them all with arrays:</p><p>q=QueryNew( "" );<br>column1values	=	[ "a","b","c" ];<br>column2Values	=	[ 1,2,3 ];<br>QueryAddColumn( q,"column1","VarChar",column1values );<br>QueryAddColumn( q,"column2","Integer",column2Values );<br>WriteDump( q );</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738059">30</a> by Raymond Camden
		posted on 1/13/2012 at 5:08 PM
		</div>
		<div class="comment_text"><p>Ah, thank you Julian. I tested that - but I did it as</p><p>queryNew()</p><p>and got an error. Didn't think to try an empty string. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738060">31</a> by Victor
		posted on 1/17/2012 at 6:16 PM
		</div>
		<div class="comment_text"><p>Awesome! Thanks for news, Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738061">32</a> by Mohammed suleman khan
		posted on 12/21/2012 at 4:46 PM
		</div>
		<div class="comment_text"><p>add user page is not shown. it is the first time i am using query with fw1.</p><p>&lt;cffunction name="get" access="public" output="false" returntype="query"&gt;<br>	            &lt;cfargument name="id" type="numeric" required="true"&gt;</p><p>	            &lt;cfquery name="user"&gt;<br>	                       SELECT * FROM users WHERE id = &lt;cfqueryparam cfsqltype="cf_sql_bigint" value="#<a href="http://disq.us/url?url=http%3A%2F%2Farguments.id%3A4OezL3xjZJdZ6Xca_bShcIQeaqo&amp;cuid=3321886" rel="nofollow noopener" title="arguments.id">arguments.id</a>#"&gt;<br>	            &lt;/cfquery&gt;</p><p>	            &lt;cfif user.recordcount EQ 0&gt;<br>	                    &lt;!--- create query with single empty row ---&gt;<br>	                    &lt;cfset user = QueryNew("id, UserName, Password, IsAdmin" , "BigInt, VarChar, VarChar, Integer")&gt;<br>	                    &lt;cfset newRow = QueryAddRow(user,1)&gt;<br>	                    &lt;cfset setCell = QuerySetCell(user,"id", 0, 1)&gt;<br>	                    &lt;cfset setCell = QuerySetCell(user,"IsAdmin", 0, 1)&gt;<br>	            &lt;/cfif&gt;</p><p>	        &lt;cfreturn user&gt;<br>	     &lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738067">33</a> by Raymond Camden
		posted on 12/21/2012 at 5:31 PM
		</div>
		<div class="comment_text"><p>Um - did you mean to post this on another blog entry/</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738066">34</a> by Mohammed suleman khan
		posted on 12/21/2012 at 9:22 PM
		</div>
		<div class="comment_text"><p>will you please tell me which blog entry?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738065">35</a> by Raymond Camden
		posted on 12/21/2012 at 9:23 PM
		</div>
		<div class="comment_text"><p>You're kidding, me? You posted the comment. It doesn't appear to be on topic for this blog entry. I have no idea what blog post you wanted to comment on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738063">36</a> by Mohammed suleman khan
		posted on 12/21/2012 at 10:56 PM
		</div>
		<div class="comment_text"><p>I am really sorry, its wrong place i comment on. actually i have problem while creating empty rows using QueryNew() because it is the first time I am using queries with fw1.<br>I am sorry, hope you don't mind it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713738064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713738064">37</a> by Raymond Camden
		posted on 12/21/2012 at 11:36 PM
		</div>
		<div class="comment_text"><p>Um, I'd recommend the FW/1 google group.</p></div>
	</div>
</div>
		