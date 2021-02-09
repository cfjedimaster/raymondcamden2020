
<div class="comment" id="c_1713675860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675860">1</a> by Scott P
		posted on 1/4/2008 at 1:00 AM
		</div>
		<div class="comment_text"><p>just subscribing for comments - good question.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675862">2</a> by David Herman
		posted on 1/4/2008 at 1:22 AM
		</div>
		<div class="comment_text"><p>Not totally the same but if it's a word your looking to do this against you can use soundex, basically phonetic algorithms <a href="http://disq.us/url?url=http%3A%2F%2Fen.wikipedia.org%2Fwiki%2FSoundex%3A3mpUl0xj_qsEi4s6IpdLmJrlPjE&amp;cuid=3321886" rel="nofollow noopener" title="http://en.wikipedia.org/wiki/Soundex">http://en.wikipedia.org/wik...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675863">3</a> by Joshua Curtiss
		posted on 1/4/2008 at 1:34 AM
		</div>
		<div class="comment_text"><p>For employee name management, I did set up a first-name substitution table that worked like you mentioned (Bob=Robert, Sue=Susan, etc)... Provided alternative spellings, and all alternatives would be tried when running comparisons until a match was found. But that was a simple case that was a bit more realistic to take this approach.</p><p>Using verity is a great idea...Flag it as a possible match if one of Verity's suggested phrases is a match...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675861">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675861">4</a> by Rick O
		posted on 1/4/2008 at 1:59 AM
		</div>
		<div class="comment_text"><p>I'm just shooting in the dark here, and there's no way it's scalable, but along the lines of the Levenshtein distance, you could do a diff comparison of the two strings (search for "LCS algorithm", or see my blog) and see if the difference(s) are significant or not.  It would really only be appropriate for two specific strings, so it wouldn't scale if given a list of strings.</p><p>Note that I am in no way saying that this is a *good* idea, just something that might be possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675864">5</a> by Ben Forta
		posted on 1/4/2008 at 2:23 AM
		</div>
		<div class="comment_text"><p>Soundex checks up to first 4 sounds only, and not numbers or any non alpha characters. So that won't really work.</p><p>--- Ben</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675866">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675866">6</a> by joel
		posted on 1/4/2008 at 2:32 AM
		</div>
		<div class="comment_text"><p>Sounds like a "diff" problem. There's a Java library at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.incava.org%2Fprojects%2Fjava%2Fjava-diff%2Findex.html%3AUOp1b3ZaAyFfb9NmpoIdMniuilQ&amp;cuid=3321886" rel="nofollow noopener" title="http://www.incava.org/projects/java/java-diff/index.html">http://www.incava.org/proje...</a> that could possibly be wrapped in a CF function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675867">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675867">7</a> by Scott Fitchet
		posted on 1/4/2008 at 2:34 AM
		</div>
		<div class="comment_text"><p>Most database systems have some kind of fulltext index you could put on that table or field.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675865">8</a> by orangepips
		posted on 1/4/2008 at 7:04 AM
		</div>
		<div class="comment_text"><p>I think Ray's suggestion regarding the Levenshtein (edit distance) is probably the right way to go. The terminology to search on that provides the best results I found were "fuzzy search". The most accessible implementation for Coldfusion is probably Lucene: see the information about Fuzzy Searching</p><p>Query Syntax: <a href="http://disq.us/url?url=http%3A%2F%2Flucene.apache.org%2Fjava%2Fdocs%2Fqueryparsersyntax.html%23Fuzzy%2520Searches%3AawkoZioNI4Ej6Nk6ZoXbaL9Lii0&amp;cuid=3321886" rel="nofollow noopener" title="http://lucene.apache.org/java/docs/queryparsersyntax.html#Fuzzy%20Searches">http://lucene.apache.org/ja...</a></p><p>JavaDocs: <a href="http://disq.us/url?url=http%3A%2F%2Flucene.apache.org%2Fjava%2F2_2_0%2Fapi%2Forg%2Fapache%2Flucene%2Fsearch%2FFuzzyQuery.html%3AjbByAU7_UxSJpH1fiSPL9RYCYGg&amp;cuid=3321886" rel="nofollow noopener" title="http://lucene.apache.org/java/2_2_0/api/org/apache/lucene/search/FuzzyQuery.html">http://lucene.apache.org/ja...</a></p><p>This would require making a Lucene index of values to compare against. In my own experience, Lucene is fast, and scales well as the record count of an index increases.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675868">9</a> by Gus
		posted on 1/4/2008 at 7:20 AM
		</div>
		<div class="comment_text"><p>If you are using MS SQL Server, there is also an editable thesaurus that will allow you to equate things like 'ST' and 'ST.' and 'Street'.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675869">10</a> by theo
		posted on 1/4/2008 at 8:18 AM
		</div>
		<div class="comment_text"><p>I have used Levenshtein to accomplish what you describe for both Postgres and ms-sql(which requires an external com object to be installed, don't have the details on hand).</p><p>the results are reasonably fast, however a full table scan is requires for each individual search. So performance could be an issue if run quite often.</p><p>Theo</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675872">11</a> by Adam Fairbanks
		posted on 1/4/2008 at 11:55 AM
		</div>
		<div class="comment_text"><p>If you're looking to do address comparison specifically, you could use the Address Validation web service from ServiceObjects:</p><p>Web Service info:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.serviceobjects.com%2Fproducts%2Fdots_address_us.asp%3AxZLAkB3jeNBLsHaFPffVpJp741A&amp;cuid=3321886" rel="nofollow noopener" title="http://www.serviceobjects.com/products/dots_address_us.asp">http://www.serviceobjects.c...</a></p><p>Demo:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.serviceobjects.com%2Fdemos%2Faddressvalidatedemo.asp%3A7PnxCvp7Mzlg5ZxH1PxBX_skKFs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.serviceobjects.com/demos/addressvalidatedemo.asp">http://www.serviceobjects.c...</a></p><p>It standardizes the address, similar to how <a href="http://disq.us/url?url=http%3A%2F%2Fusps.com%3AFH_2yJZJrj8zRdGKwEZXFLQvkPI&amp;cuid=3321886" rel="nofollow noopener" title="usps.com">usps.com</a> does it (but server-side):</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fzip4.usps.com%2Fzip4%2Fwelcome.jsp%3AW23VyNCzbZRbINZkmQn-W8zSgLk&amp;cuid=3321886" rel="nofollow noopener" title="http://zip4.usps.com/zip4/welcome.jsp">http://zip4.usps.com/zip4/w...</a></p><p>If addresses are standardized before saving them to the database, it's an easy SQL Query to compare a new address to the other addresses in the database.</p><p>(Not to mention all the other benefits of having standardized, validated addresses -- minimal returned mail, professional looking labels, etc.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675871">12</a> by Martin
		posted on 1/4/2008 at 6:21 PM
		</div>
		<div class="comment_text"><p>WOW - thanks for posting this so quickly Ray, I too like the Levenshtein distance formula, I didn't know someone had had posted some code on CFlib! Also - thanks to everyone who has responded -  I have been looking at ALL the suggestions.</p><p>My reason for asking is that my boss has asked me to write a back-end WEB BASED app to compare closely matching addresses for manual verification. We get two sets of data from different sources and the address is the only key we can use to compare.</p><p>Saint (St. St) is a good example because it's easy to confuse with Street (St St.) so look ups aren't a perfect solution.</p><p>MySql also has "Full Text Searching" so you could add FULLTEXT(Address) to your table and do a reReplace on the address string to transform "15 St Mungo Place" into a Sql statement such as :<br>SELECT foo.Address, coo.Address <br>FROM Properties as foo, Muggles as coo <br>WHERE MATCH(foo.Address) AGAINST('+15 +St +Mungo +Place')<br>This is fine for comparing one address at a time (as you would get ranked multiple results) but what I really want to do is end up with a single table of ONLY the most likely matches in descending order.</p><p>Levenshtein could do this but could score poorly with flats: eg. Flat 1, 16 St Mungo Place &amp; 1/16 St. Mungo Place (Levenshtein score of 9).<br>Using an Address Validation Service like Adam suggested (I will need to find a UK one but excellent idea Adam) will certainly help this.<br>And finally... I could also use some proprietary software to do this and just press a button but then.... a) I might not be able to afford that and b)what would I actually learn from doing that?</p><p>Obviously a combination of methods will have to be used for matching and filtering, I'm just glad I "Asked a Jedi." I will definitely reply here again if I find anything else!!</p><p>Thanks again to all.<br>Martin</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675875">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675875">13</a> by Martin
		posted on 10/31/2008 at 8:53 PM
		</div>
		<div class="comment_text"><p>@Ben's comment on SOUNDEX<br>I don't know if this has been changed in MySql 5 but</p><p>SELECT SOUNDEX("10 St Andrews"),SOUNDEX("10 St. Andrews"),SOUNDEX("10 St Andrew's"),SOUNDEX("10, St-Andrews") ALL return the same result.</p><p>This is VERY cool!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713675874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713675874">14</a> by JC
		posted on 7/27/2012 at 10:51 PM
		</div>
		<div class="comment_text"><p>I know this is 4 years later, but just for posterity:</p><p>Martin - so would 68570 Standards of the Jedi Republic Boulevard Apartment 26842.</p><p>That's why Ben pointed out these limitations. Soundex was invented for comparisons of first names in census records like 80 years ago, before computers. It's still pretty handy for catching typoed first names in something non-critical like an employee directory search, but don't rely on it for too much else.</p></div>
	</div>
</div>
		