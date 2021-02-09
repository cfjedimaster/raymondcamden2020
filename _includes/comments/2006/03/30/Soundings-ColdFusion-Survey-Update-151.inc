
<div class="comment" id="c_1713651210">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651210">1</a> by Nathan D
		posted on 3/30/2006 at 9:56 PM
		</div>
		<div class="comment_text"><p>I am ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651208">2</a> by jeff
		posted on 4/11/2006 at 12:09 AM
		</div>
		<div class="comment_text"><p>I modified the soundings program to allow for longer questions.  All i did was change the database field from a varchar(255) to a text; and then modified the questions.cfc file by removing the 255 max length on the updates and the additions of new questions.</p><p>That is working fine, however, I need to be able to drop down lines or bold certain parts of the question, but it is converting my HTML into &amp;gt; and &amp;lt;.</p><p>I can't seem to figure out where it is doing this, since i've been using the soundings program for about a day.  I spent 25 minutes searching, but figured i'd post it here in case someone already solved this problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651199">3</a> by Raymond Camden
		posted on 4/11/2006 at 12:18 AM
		</div>
		<div class="comment_text"><p>Questions are edited via their edit handlers. The edit handlers all call request.udf.cleanStruct(form). This UDF is in /includes/udf.cfm. You can either make the UDF simply do nothing, or remove the calls.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651211">4</a> by Matt
		posted on 3/21/2008 at 6:07 PM
		</div>
		<div class="comment_text"><p>I was searching for a survey app, and I can't seem to download this anymore.  I just need something quick and I am a loyal reader of your blog...thanks in advance for any help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651212">5</a> by ray
		posted on 3/21/2008 at 6:34 PM
		</div>
		<div class="comment_text"><p>go to <a href="http://disq.us/url?url=http%3A%2F%2Fsoundings.riaforge.com%3Abrg6wyxo6MQw_Jv8aNu2EV0hvDg&amp;cuid=3321886" rel="nofollow noopener" title="soundings.riaforge.com">soundings.riaforge.com</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651217">6</a> by Matt
		posted on 3/21/2008 at 6:36 PM
		</div>
		<div class="comment_text"><p>THANK YOU!!  I was out of CF for a few years and it's the community like this that helps me out.  Happy Easter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651214">7</a> by Walliyaw
		posted on 8/6/2010 at 9:43 PM
		</div>
		<div class="comment_text"><p>should i be getting this error</p><p>Security: The requested template has been denied access to createobject.</p><p>CF Bgnr</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651215">8</a> by Raymond Camden
		posted on 8/6/2010 at 9:58 PM
		</div>
		<div class="comment_text"><p>Your host has disabled createObject. They need to enable it.</p></div>
	</div>
</div>
		