
<div class="comment" id="c_1713681315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681315">1</a> by James Allen
		posted on 6/2/2008 at 4:09 PM
		</div>
		<div class="comment_text"><p>Fantastic! I hadn't heard of Lucene before and it comes at just the right time. I am working on a question and answer site which requires a fast and efficient search engine (with relevancy etc). I was set on Verity but I'm concerned about the search limits (you can only index a certain amount under the normal license can't you?). Lucene looks like it could be a good alternative.</p><p>So does it work in a very similar way and would you recommend it as a good Verity alternative.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681334">2</a> by Raymond Camden
		posted on 6/2/2008 at 4:12 PM
		</div>
		<div class="comment_text"><p>Verity does have a limit - 250k - which I think is pretty reasonable. Don't get me wrong - I love Verity - and I think people don't give it enough credit, nor thank Adobe enough for shipping a -very- expensive search server w/ the product for free.</p><p>Does it work in a similar way: Kinda. :) Like Verity, you have 2 main parts. Part one is creating and maintaining the index. Part 2 is the searching. I tried to make things very much like the Verity API in CF.</p><p>Would I recommend it? My code has had VERY little usage. I think about 2 people have used it. To me - that's a bit scary. But - we got to start someplace. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681338">3</a> by Gus
		posted on 6/2/2008 at 7:29 PM
		</div>
		<div class="comment_text"><p>While I think Lucene is a great open source solution, the lack of support for most common file formats is problematic.</p><p>There are ways of dealing with this, to a degree, but it sure is nice that Verity handles the document conversions out of the box.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681335">4</a> by Chris Peters
		posted on 6/2/2008 at 7:29 PM
		</div>
		<div class="comment_text"><p>On your RIA Forge page, you say that Lucene is a good candidate for people who can't run Java. I'm guessing that you meant Verity? :)</p><p>This is definitely something that I will be looking into using, along with your FeedBurner CFC!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681336">5</a> by Raymond Camden
		posted on 6/2/2008 at 7:36 PM
		</div>
		<div class="comment_text"><p>@Chris - Oops, fixed. Thanks.</p><p>@Gus - There is another project at Apache that helps with this, but I haven't worked much with it. I built Seeker though so that it is easy to extend. Download it and look at how I built the readers. To add support for format X, you just add a CFC. Todd Sharp is going to share some PPT code with me soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681339">6</a> by Sami Hoda
		posted on 6/2/2008 at 10:56 PM
		</div>
		<div class="comment_text"><p>Sweet. Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681341">7</a> by Dave Phipps
		posted on 6/3/2008 at 1:42 AM
		</div>
		<div class="comment_text"><p>We host our sites on OS X xserves running cf8 and so Verity is not an option. Ray's Seeker code has been a life saver for our query based searches. We have about 6 production sites using it!!</p><p>The latest updates are looking promising for file based searches which were not working properly in the previous version. I really look forward to seeing the cfadmin stuff and will continue to test the code. Adding some more file readers will be really useful although pdf's and htm files are covered and these are the most common ones we index.</p><p>Keep up the excellent work Ray, I seriously don't know how you find the time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681342">8</a> by James Allen
		posted on 6/3/2008 at 1:54 PM
		</div>
		<div class="comment_text"><p>Thanks Ray - I'm still going to consider verity but the limit is a little worrying as the site I'm working on has the potential to smash through those limits in time. Is the limit based on all collections or 'per' collection?</p><p>I will give Lucene a test anyway - I'm only interested in query based indexing so it looks ideal.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681320">9</a> by Raymond Camden
		posted on 6/3/2008 at 3:34 PM
		</div>
		<div class="comment_text"><p>The limit in Verity is per box, not per collection.</p><p>I've got a new release of Seeker coming out later today. It just adds the ability to search N fields (thanks to AJ Mercer) and cleans up the zip a bit.</p><p>I also need to look into index operations like update/delete. It's going to suck if you have to blow away your index for every update.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681321">10</a> by jbuda
		posted on 10/23/2008 at 1:02 PM
		</div>
		<div class="comment_text"><p>i have just been playing with Seeker, and working on a mac provides a superb alternative to Verity.</p><p>I would like to know what file formats can currently be read and indexed?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681318">11</a> by Raymond Camden
		posted on 10/23/2008 at 3:10 PM
		</div>
		<div class="comment_text"><p>PDF, DOC, txt, html. It will try to read any other file as well as text and attempt to get something out of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681331">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681331">12</a> by jbuda
		posted on 10/23/2008 at 3:16 PM
		</div>
		<div class="comment_text"><p>brilliant, thanks.</p><p>Would it be possible to index metadata from images? Or would that be something that could be added?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681323">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681323">13</a> by Raymond Camden
		posted on 10/23/2008 at 3:19 PM
		</div>
		<div class="comment_text"><p>One of the things I'm proud of is how easy it is to add 'indexers' to Seeker. You basically just write the CFC. So if you were to write the CFC for gif, jpg, tiff, whatever, and you used CF8 image funcs to get the metadata, your job is basically done. If do you so and share it with me, I'd most likely add it to the core project.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681319">14</a> by jbuda
		posted on 10/23/2008 at 3:49 PM
		</div>
		<div class="comment_text"><p>thanks Ray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681322">15</a> by jbuda
		posted on 10/23/2008 at 6:38 PM
		</div>
		<div class="comment_text"><p>im using the query index tag from Seeker, and was wondering if when i run different queries and save the resultant indexes. Do there overwrite the previous files in there... or are they appended?</p><p>I basically need to create an indexes for multiple tables</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681326">16</a> by Raymond Camden
		posted on 10/23/2008 at 6:40 PM
		</div>
		<div class="comment_text"><p>Right now Seeker does not support adding, updating, or deleting stuff from an index. I've been meaning to do that for a while now but I haven't found the time. You would need to do it all at once for multiple tables. What I would recommend is using Query of Query to join the multiple record sets, and then index that query.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681330">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681330">17</a> by jbuda
		posted on 10/23/2008 at 6:44 PM
		</div>
		<div class="comment_text"><p>thanks again ray.</p><p>I assume that would be true for file indexing too?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681325">18</a> by Raymond Camden
		posted on 10/23/2008 at 6:45 PM
		</div>
		<div class="comment_text"><p>Yep. A bit of a pain, I know. :) Luckily things index rather quickly (as far as I know). Adding add/edit/delete support for indexes is #1 on my list for Seeker. Now to find the time...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681329">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681329">19</a> by jbuda
		posted on 10/23/2008 at 6:53 PM
		</div>
		<div class="comment_text"><p>its a life saver considering i dont have access to verity.</p><p>Thanks for creating it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681328">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681328">20</a> by S B
		posted on 10/13/2009 at 5:46 PM
		</div>
		<div class="comment_text"><p>Hi.<br>I am in the search for a search engine product as a replacement of Verity (Apparently it has been bought by a company called Autonomy, and the licences are not cheap).</p><p>What i requires is simply a search engine that will allow me to spide or catalogue external sites.</p><p>Where do i start looking.</p><p>p.s. i have come here because i have read a little about Lucence and the name seems to appear quite often.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681327">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681327">21</a> by Raymond Camden
		posted on 10/13/2009 at 5:48 PM
		</div>
		<div class="comment_text"><p>Well, you can always Google. Your question is a bit broad. You haven't said what your requirements are or what you have considered already.</p><p>I will point out that if you upgrade to ColdFusion 9, you get Solr/Lucene support built in. No need to make use of my Seeker project at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681332">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681332">22</a> by S B
		posted on 10/13/2009 at 7:13 PM
		</div>
		<div class="comment_text"><p>Hi Ray.<br>First thanks for your response (to be honest i wasn't actually expecting one <br>seen as you seem a bit of a CF Guru).</p><p>About me:<br>Ok, i am relatively new to both ColdFusion and search engines.</p><p>About the business:<br>I work for a UK based local government organization, hence we don't have <br>deep pockets.</p><p>The project:<br>The project is a web based portal/observatory for the local district.  The <br>idea is to have one place for all the information on the district with a <br>primary focus on Geographic information.<br>The project was initially developed as a pilot, which forced to become live <br>by the powers that be (hence the lack of accessibility and bad design).</p><p>The search engine:<br>Until now i have been using the free verity search engine built into <br>ColdFusion.<br>I use ColdFusion 8 on my external server and development servers (i have <br>just been informed i already have ColdFusion 9 that just needs installing).<br>The search engine has served its purpose for the preliminary release however <br>i now need a product that will allow me to search multiple sites of partner <br>organizations (i.e. police, national government, statistical sites, national <br>health service etc).  Also my hunt for a new product has become more urgent <br>seen as i can not do Boolean searches in it (i am sure you are supposed to).</p><p>The primary aspects i require:<br>1. scalability<br>2. ability to do cross site searching<br>3. ranking / scoring<br>4. potential advanced search features (to narrow the search)?</p><p>My questions are:<br>1. Given the above what products would you recommend, (even purchased <br>products, providing the cost isn't astronomical like Autonomy's licensing of <br>verity or its own products.<br>2. any other hints, tips and ideas you can provide for a complete newbie?</p><p>Thanks again</p><p>Saff</p><p>p.s. sorry for the email, i just replied to what landed in my inbox...also....thus far i have enjoyed reading your blog so now adding one to your <br>subscribers list :D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681324">23</a> by Raymond Camden
		posted on 10/13/2009 at 7:28 PM
		</div>
		<div class="comment_text"><p>Hmm, I think the big issue here is your #2. You want the ability to search against _other_ sites. I assume those sites aren't on your server. As far as I know, your only option would probably be a custom Google search engine. <a href="http://disq.us/url?url=http%3A%2F%2Fwww.google.com%2Fcse%2F%3A8YLSsD6RXb_1iwJFFkuTZjsrRX0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.google.com/cse/">http://www.google.com/cse/</a></p><p>This is a Google feature that allows you to build a custom search engine limited to certain URLs.</p><p>Give that a shot first I'd say.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681333">24</a> by Derek
		posted on 9/9/2010 at 5:03 PM
		</div>
		<div class="comment_text"><p>Does Seeker need any updating since it's last release and now that Lucene Java 3 is out?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681345">25</a> by Raymond Camden
		posted on 9/9/2010 at 5:56 PM
		</div>
		<div class="comment_text"><p>I honestly have no idea. If you see that it does and want to perform the updates, I'll gladly take in any submissions.</p></div>
	</div>
</div>
		