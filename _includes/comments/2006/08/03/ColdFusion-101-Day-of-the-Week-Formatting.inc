
<div class="comment" id="c_1713655817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655817">1</a> by Teddy R Payne
		posted on 8/3/2006 at 5:38 PM
		</div>
		<div class="comment_text"><p>Ray,<br>You are definitely right.  The best way to help others is to start at the beginning.  We get caught up trying to create the next big mouse trap that we forget small ways to make our lives easier.</p><p>Also, I never get tired of reviewing simple topics and sharing them.  You learn the most about any structured language when you try to teach it to someone else.  The less experienced people ask great questions that you take for granted.</p><p>I believe the CF blogging community is centered upon this shared theme.  There are exceptions, but sharing and teaching is noticeable everywhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655803">2</a> by Joel Cox
		posted on 8/3/2006 at 6:14 PM
		</div>
		<div class="comment_text"><p>I have international users for one of my applications and allow the user to specify a locale. I store the locale information in session scope and use LSDateFormat, etc, to display dates and numbers in a format more familiar to the user.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655818">3</a> by mikeD
		posted on 8/3/2006 at 6:58 PM
		</div>
		<div class="comment_text"><p>Don't forget the CF Cookbook!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655804">4</a> by todd
		posted on 8/3/2006 at 9:17 PM
		</div>
		<div class="comment_text"><p>Here's a fun UDF for conditionally formatting dates.  I use this for query columns that may or may not be dates (hey, i didn't create the database, i just have to live with the structure).</p><p>&lt;cffunction name="ifDateFormat" access="private" output="false" returntype="any"&gt;<br>	&lt;cfargument name="str" required="true" type="any" hint="the string to check - could be a date, could not be...."&gt;<br>	&lt;cfargument name="mask" required="true" type="string" hint="the mask to apply if it is a date"&gt;<br>	&lt;cfset var retStr = ""&gt;</p><p>	&lt;cfif isDate(arguments.str)&gt;<br>		&lt;cfset retStr = dateFormat(arguments.str, arguments.mask)&gt;<br>	&lt;cfelse&gt;<br>		&lt;cfset retStr = arguments.str&gt;<br>	&lt;/cfif&gt;<br>	&lt;cfreturn retStr&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655806">5</a> by Lola Lee Beno
		posted on 8/4/2006 at 1:15 AM
		</div>
		<div class="comment_text"><p>arguments.mask?  Never heard of this . . .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655807">6</a> by Raymond Camden
		posted on 8/4/2006 at 1:23 AM
		</div>
		<div class="comment_text"><p>arguments.mask is the name Todd used for his second argument to the UDF. Also, "mask" is the term used in the documentation for date and time format. It is the "format string" that determines how to display the date and time. You will notice I didn't use the term "mask" since I don't think it is a great word for it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655809">7</a> by fernando lopez
		posted on 8/4/2006 at 6:48 AM
		</div>
		<div class="comment_text"><p>I miss the old design, I didn't want to say it but I miss it.<br>It will take me a while until I get used to this new design.</p><p>Is not bad, but I was so used to the old one that I almost close this window twice seeing that I didn't recognize the graphics, colors, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655810">8</a> by Raymond Camden
		posted on 8/4/2006 at 3:23 PM
		</div>
		<div class="comment_text"><p>Fernando: Change is good. :) You will get used to it.</p></div>
	</div>
</div>
		