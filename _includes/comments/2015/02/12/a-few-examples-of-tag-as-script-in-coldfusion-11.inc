
<div class="comment" id="c_2654751293">
	<div>
		<img src="https://disqus.com/api/users/avatars/LinkWorxSeo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2654751293">1</a> by Link Worx Seo
		posted on 5/3/2016 at 12:29 AM
		</div>
		<div class="comment_text"><p>What are you using here a function? I am trying to understand the syntax. Your syntax is: cffeed(action="read", source="<a href="http://disq.us/url?url=http%3A%2F%2Ffeeds.feedburner.com%2Fraymondcamdensblog%3AwqSBOqr9nXgJfCCd_HhhdGsevaw&amp;cuid=3321886" rel="nofollow noopener" title="http://feeds.feedburner.com/raymondcamdensblog">http://feeds.feedburner.com...</a>", query="feed");</p><p>writeDump(feed);</p><p>Mine: feedservice = new feed();</p><p>myFeed = <a href="http://disq.us/url?url=http%3A%2F%2Ffeedservice.read%3AITvYR8Uj_NbIhngENl5zzTae3RY&amp;cuid=3321886" rel="nofollow noopener" title="feedservice.read">feedservice.read</a>(source='<a href="http://disq.us/url?url=http%3A%2F%2Fwww.linkworxseo.wordpress.com%2Ffeed%2F%27%3AIA5CmFVaOXQpSkIGHbs8DzT8N7s&amp;cuid=3321886" rel="nofollow noopener" title="http://www.linkworxseo.wordpress.com/feed/'">http://www.linkworxseo.word...</a>, query='rssFeed');</p><p>Is your syntax because Railo, Ruby, Lucee or because it is CF!! or function?</p><p>I tried doing it with your syntax by placing the action, source, query but get no output. When I try using my method it actually works without errors but if I add the query attribute it does not produce results when doing a WriteDump(rssFeed);</p><p>Guess I am trying to understand why my syntax does not work properly since the example shows it as the proper way to set the query string.</p><p>Help!!!! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2654850475">
	<div>
		<img src="https://disqus.com/api/users/avatars/LinkWorxSeo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2654850475">2</a> by Link Worx Seo
		posted on 5/3/2016 at 1:45 AM
		</div>
		<div class="comment_text"><p>I already figured out what it was lacking. The .Query appended to the end of the variable.</p><p>feedservice = new feed();</p><p>rssFeed = <a href="http://disq.us/url?url=http%3A%2F%2Ffeedservice.read%3AITvYR8Uj_NbIhngENl5zzTae3RY&amp;cuid=3321886" rel="nofollow noopener" title="feedservice.read">feedservice.read</a>(source='<a href="http://disq.us/url?url=http%3A%2F%2Fwww.linkworxseo.wordpress.com%2Ffeed%2F%27%3AIA5CmFVaOXQpSkIGHbs8DzT8N7s&amp;cuid=3321886" rel="nofollow noopener" title="http://www.linkworxseo.wordpress.com/feed/'">http://www.linkworxseo.word...</a>, query='rssFeed').Query;</p><p>Although I am still wanting to know about what your syntax is about?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2655338775">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2655338775">3</a> (In reply to <a href="#c_2654751293">#1</a>) by Raymond Camden
		posted on 5/3/2016 at 11:01 AM
		</div>
		<div class="comment_text"><p>Link, the syntax, x = new feed(), comes from the fact that Adobe built CFCs to do Feed, Queries, HTTP, and something else too, I can't remember. This was done *before* they built a solution to allow all tags to be used in script. It is the old solution, and was pretty buggy. Hence me saying you should be used the tags as function stuff now. I believe Lucee supports this too.</p><p>If you tried my cffeed call and got not output, that's expected. cffeed doesn't generate output - it generates variables. Try dumping feed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2655339244">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2655339244">4</a> (In reply to <a href="#c_2654850475">#2</a>) by Raymond Camden
		posted on 5/3/2016 at 11:01 AM
		</div>
		<div class="comment_text"><p>Again - see my other note. You should move away from this feature as soon as possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2658029454">
	<div>
		<img src="https://disqus.com/api/users/avatars/LinkWorxSeo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2658029454">5</a> (In reply to <a href="#c_2655339244">#4</a>) by Link Worx Seo
		posted on 5/4/2016 at 4:19 PM
		</div>
		<div class="comment_text"><p>Okay, right now I got past that portion of it, but I now have been using a do while loop to fetch the category label column and trying to find a way to loop through the items which are a complex string. I am trying to create a separate link for each category in the list.</p><p>I managed to find a way to get any category/tag from the fourth column, but I need it to be able to get each one from the column in a loop method without manually coding it to listGetAt() for each one.</p><p>I can get the entire list of the categories, but I need those to be separate because they need to be a separate link for each one so the user can select the link to the blog by category/tag.</p><p>Any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2658353832">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2658353832">6</a> (In reply to <a href="#c_2658029454">#5</a>) by Raymond Camden
		posted on 5/4/2016 at 7:10 PM
		</div>
		<div class="comment_text"><p>I honestly can't tell what you are asking now. Are you asking how to loop over a list? Because that's pretty simple, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2658435579">
	<div>
		<img src="https://disqus.com/api/users/avatars/LinkWorxSeo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2658435579">7</a> (In reply to <a href="#c_2658353832">#6</a>) by Link Worx Seo
		posted on 5/4/2016 at 7:53 PM
		</div>
		<div class="comment_text"><p>No, looping a list is not the problem. As long as I have been doing this, you should know that by now. I am trying to fetch each label from the categorylabel column for an RSS Feed. Each label has to be separate so it can be established as a href link.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2658452548">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2658452548">8</a> (In reply to <a href="#c_2658435579">#7</a>) by Raymond Camden
		posted on 5/4/2016 at 8:03 PM
		</div>
		<div class="comment_text"><p>Ok, so what does categorylabel look like? Give me an example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2658463652">
	<div>
		<img src="https://disqus.com/api/users/avatars/LinkWorxSeo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2658463652">9</a> (In reply to <a href="#c_2658452548">#8</a>) by Link Worx Seo
		posted on 5/4/2016 at 8:09 PM
		</div>
		<div class="comment_text"><p>This is the output for the column categorylabel:<br>BLOGGING,blogging,review,seo,stats,wordpress</p><p>Each one of these needs to be a single entity to be placed as a link. Another words each one would need to be queried separately for purpose of making each one a link.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2658468125">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2658468125">10</a> (In reply to <a href="#c_2658463652">#9</a>) by Raymond Camden
		posted on 5/4/2016 at 8:11 PM
		</div>
		<div class="comment_text"><p>Ouch - I asked you to tell me just the one thing - not share all that code. ;) Please rephrase this into something simpler and one line. I want you to show me what the value of categorylabel is (one sample value) and explain what you want to do with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2658552192">
	<div>
		<img src="https://disqus.com/api/users/avatars/LinkWorxSeo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2658552192">11</a> (In reply to <a href="#c_2658468125">#10</a>) by Link Worx Seo
		posted on 5/4/2016 at 8:57 PM
		</div>
		<div class="comment_text"><p>Here is what I can come up with after talking to you and finding a different form of loop to dot it. Except each one would be set separately. I would have to manually code each one. So if there were more than the number of records/labels on the blog post, those would not get displayed/output because the count would not match.</p><p>	catQuery = queryNew("category");</p><p>	queryAddRow(catQuery);</p><p>	querySetCell(catQuery, 'category', '#ListGetAt(rssFeed.CATEGORYLABEL[1],1)#');</p><p>	queryAddRow(catQuery);</p><p>	querySetCell(catQuery, 'category', '#ListGetAt(rssFeed.CATEGORYLABEL[2],1)#');</p><p>	queryAddRow(catQuery);</p><p>	querySetCell(catQuery, 'category', '#ListGetAt(rssFeed.CATEGORYLABEL[3],1)#');</p><p>for ( row in catQuery ) {</p><p>	writeOutput("a itemprop='url' href='#<a href="http://disq.us/url?url=http%3A%2F%2Fmetadata.link%3AGdMhKjmA_f1BcatopktH6wYIsak&amp;cuid=3321886" rel="nofollow noopener" title="metadata.link">metadata.link</a>#/category/#lCase(ReReplace(row.category, ' ', '-', 'all'))#' title='#lCase(row.category)#' class='feedBlock'&gt;#lCase(row.category)# a&gt;");</p><p>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_2658566059">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2658566059">12</a> (In reply to <a href="#c_2658552192">#11</a>) by Raymond Camden
		posted on 5/4/2016 at 9:05 PM
		</div>
		<div class="comment_text"><p>So is it working then? I keep asking you to show me an example of the data and what you want to do with it but you don't want to do that I think. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2658576444">
	<div>
		<img src="https://disqus.com/api/users/avatars/LinkWorxSeo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2658576444">13</a> (In reply to <a href="#c_2658566059">#12</a>) by Link Worx Seo
		posted on 5/4/2016 at 9:11 PM
		</div>
		<div class="comment_text"><p>I get it, you want a link to what is going on?<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.linkworxseo.info%3ARkOlt-zIOgJMLo7wKQSVNh_mPsw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.linkworxseo.info">http://www.linkworxseo.info</a></p><p>Yes, I managed to get it with the method shown in the previous post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2658577604">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2658577604">14</a> (In reply to <a href="#c_2658576444">#13</a>) by Raymond Camden
		posted on 5/4/2016 at 9:11 PM
		</div>
		<div class="comment_text"><p>If you got it working - then I'm good. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2659524536">
	<div>
		<img src="https://disqus.com/api/users/avatars/LinkWorxSeo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2659524536">15</a> (In reply to <a href="#c_2658577604">#14</a>) by Link Worx Seo
		posted on 5/5/2016 at 8:30 AM
		</div>
		<div class="comment_text"><p>Yes, after four day's I got it finished. You always seem to spark some kind of programming idea when I start to ask you for help. Not sure what it is, but on just about every occasion I start to request help from you I end up coming to an answer and or solution. It must just be from inspiration and I know your style fairly well along with the fact the more I write about it the better. Writing it out seems to help usually. :) Big Smiles - Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2659863220">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2659863220">16</a> (In reply to <a href="#c_2659524536">#15</a>) by Raymond Camden
		posted on 5/5/2016 at 1:39 PM
		</div>
		<div class="comment_text"><p>Glad to have been a help!</p></div>
	</div>
</div>
		