
<div class="comment" id="c_1713676569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676569">1</a> by Alan Johnson
		posted on 1/24/2008 at 9:20 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>What I meant is that if I have a custom search I'm saving as a query variable to execute to do the query, I can't do something like this...</p><p>&lt;cfset SavingMyQuery = "Select * from Table <br>Where &lt;cfquerparam value="aVariable" cfsqltype="CF_SQL_VARCHAR"&gt; <br>AND &lt;cfquerparam value="bVariable" cfsqltype="CF_SQL_VARCHAR"&gt; <br>AND &lt;cfquerparam value="cVariable" cfsqltype="CF_SQL_VARCHAR"&gt;"&gt;</p><p>I would want to use cfqueryparam, however I cannot..since CF bombs when &lt;cfquerparam&gt; is not directly used within a &lt;cfquery&gt; tag...  Does that make more sense?  I want to use cfqueryparam, but can't seem to figure out how if I plan to save and reuse the query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676576">2</a> by Raymond Camden
		posted on 1/24/2008 at 9:22 PM
		</div>
		<div class="comment_text"><p>Why save the SQL though? Why not just save the search term?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676580">3</a> by Alan Johnson
		posted on 1/24/2008 at 10:51 PM
		</div>
		<div class="comment_text"><p>There are lots and lots of search variables... so it boils into a fairly lengthy list.</p><p>So there's not necessarily a simple way to just save the query, but I see what you are saying. I could potentially save each search variable into a scope, and then build the SQL statement rather than saving a single variable that IS the SQL statement.</p><p>Bummer there isn't a simpler option, but I think that might do the trick...</p><p>thanks,<br>alan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676577">4</a> by Raymond Camden
		posted on 1/24/2008 at 11:55 PM
		</div>
		<div class="comment_text"><p>I still think you are overdoing it a bit. Even if there are 10 variables, you can copy them into the session scope easily enough, and copy them into the form scope as I described above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676578">5</a> by Alan Johnson
		posted on 1/25/2008 at 12:24 AM
		</div>
		<div class="comment_text"><p>Ahhh.. .now I get it, save the whole form.  Cool. Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713676575">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713676575">6</a> by Russ Johnson
		posted on 1/25/2008 at 12:33 AM
		</div>
		<div class="comment_text"><p>Since the form is basically a struct, why not just save the form to a session var? Then it would be alot easier and alot less code than saving each form var individually.</p></div>
	</div>
</div>
		