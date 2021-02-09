
<div class="comment" id="c_1713652860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652860">1</a> by David Stockton
		posted on 5/12/2006 at 8:20 PM
		</div>
		<div class="comment_text"><p>This may not be related but we're getting some very random:</p><p>Type: java.lang.NullPointerException<br>Tag Context:<br>Stack trace: java.lang.NullPointerException</p><p>Errors and did have &lt;cfoutput&gt; on our cfmail wrapper.</p><p>In desperation I've removed it but alas, it's too early (or later on a Friday as it were) to tell.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652864">2</a> by Al Everett
		posted on 5/12/2006 at 8:43 PM
		</div>
		<div class="comment_text"><p>CFMX 7 changed the behavior of CFOUTPUT. You can now safely nest CFOUTPUT tags without using the group attribute and they will be effectively ignored. Since CFMAIL acts essentially as a CFOUTPUT it's certainly related.</p><p>Let me see if I can find the release note.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652861">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652861">3</a> by Al Everett
		posted on 5/12/2006 at 9:01 PM
		</div>
		<div class="comment_text"><p>Aaargh! I know I read it somewhere or someone told it to me, but I cannot for the live of me find it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652863">4</a> by David Stockton
		posted on 5/12/2006 at 9:15 PM
		</div>
		<div class="comment_text"><p>I wonder if a similar problem would be caused by:</p><p>&lt;cfmail ....&gt;<br>&lt;cfoutput&gt;<br>&lt;cfinclude template="test.cfm" /&gt;<br>&lt;/cfoutput&gt;<br>&lt;/cfmail&gt;</p><p>----</p><p>test.cfm:</p><p>&lt;cfoutput&gt;<br>test<br>&lt;/cfoutput&gt;</p><p>Don't have MX6.1 anywhere to test but if someone out there does ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652865">5</a> by Tony Petruzzi
		posted on 5/12/2006 at 10:36 PM
		</div>
		<div class="comment_text"><p>Personally I always take the email I want to send and wrap it in a cfsavecontent first. Then just put that variable into the cfmail tag. There are so many gotchas and quirks with the CFMX line that it's disgusting. They should of never of gone with java and stuck to the c++ code, I bet we be better off.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652862">6</a> by Raymond Camden
		posted on 5/12/2006 at 10:46 PM
		</div>
		<div class="comment_text"><p>I've used that approach myself a few times.</p><p>As for your last comment, I disagree 100%. :) But, that is a whole other can of worms, so let's leave it be.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652859">7</a> by Jordan Clark
		posted on 5/13/2006 at 4:17 AM
		</div>
		<div class="comment_text"><p>I wish Adobe would fix CFOUTPUT some more so that this simple code example would work:</p><p>&lt;cfset qTest = queryNew( "id" )&gt;<br>&lt;cfset queryAddRow( qTest, 1 )&gt;<br>&lt;cfset querySetCell( qTest, "id", "foo" )&gt;</p><p>&lt;cfoutput&gt;<br>&lt;cfoutput query="qTest"&gt;#id#&lt;/cfoutput&gt;<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652858">8</a> by Sebastiaan
		posted on 3/21/2011 at 9:02 PM
		</div>
		<div class="comment_text"><p>Hi Ray, no more beard?<br>Is a CFOUTPUT actually neccessary within a CFMAIL tag or does the CFMAIL tag act as a CFOUTPUT?<br>I cannot seem to write the correct search term for the answer to this in Google, but it seems from this blog post I do not need an additional CFOUTPUT in my CFMAIL tags...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652866">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652866">9</a> by Raymond Camden
		posted on 3/23/2011 at 3:08 PM
		</div>
		<div class="comment_text"><p>Nope, you don't need cfoutput.</p></div>
	</div>
</div>
		