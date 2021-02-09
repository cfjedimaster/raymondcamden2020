
<div class="comment" id="c_1714081421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081421">1</a> by Gene Shats
		posted on 1/10/2014 at 11:47 PM
		</div>
		<div class="comment_text"><p>Great question!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081423">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081423">2</a> by Randy Johnson
		posted on 1/11/2014 at 12:09 AM
		</div>
		<div class="comment_text"><p>I am not sure how you go about displaying it graphically, but you could CFdirectory over the hold list and search the file for CFINCLUDES  if found add it to the list.</p><p>1.  Use CFDirectory to get list of pages<br>2.  Search for cflinclude &amp; extract the filename (Regex Probably)<br>3.  Update the table accordingly</p><p>Table<br>-----------<br>Page_id, Page_name, Parent_Page_Id, Page_Checked</p><p>Then use a recursion function to display the results. I often use these functions for generating Category / Sub Category / Sub Sub Sub Category Navs.</p><p>The only issue I see off hand is you would have to make sure the script handled multuple parent_page_ids</p><p>That's my thought right off the bat...  After this was working one could add cfhttp etc....</p><p>Randy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081430">3</a> by Randy Johnson
		posted on 1/11/2014 at 12:26 AM
		</div>
		<div class="comment_text"><p>As  I starting to code a demo for this,  I do see that you would need to account for directory structure as well for the end report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081436">4</a> by Gene Shats
		posted on 1/11/2014 at 12:39 AM
		</div>
		<div class="comment_text"><p>Randy,<br>How would you handle mixtures of relative and absolute paths in the links?  Also, do you think there might be a way to use the new html5/css3/javascript libraries to draw a visual map?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081425">5</a> by Chip
		posted on 1/11/2014 at 12:41 AM
		</div>
		<div class="comment_text"><p>I think Randy is on the right track, I'd suggest adding counters to the report so you could develop a heat map type of view based on the commonality of the files.</p><p>Though if you capture that data, you might want to look at feeding it into something like Gephi (<a href="https://disq.us/url?url=https%3A%2F%2Fgephi.org%2F%29%3AWS8YaIHQJiNKUM1mTXMY4dobzdA&amp;cuid=3321886" rel="nofollow noopener" title="https://gephi.org/)">https://gephi.org/)</a>.  Based on that, you could size your nodes based on the heat map type values from the earlier report for node size and relationships to populate the vertices.</p><p>I think that outputs to Sigma.js as well (<a href="http://disq.us/url?url=http%3A%2F%2Fsigmajs.org%2F%29%3APgidGN5K6NCHoW8yUayGqENX-OU&amp;cuid=3321886" rel="nofollow noopener" title="http://sigmajs.org/)">http://sigmajs.org/)</a> for browsing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081424">6</a> by Randy Johnson
		posted on 1/11/2014 at 12:50 AM
		</div>
		<div class="comment_text"><p>Gene,</p><p>Good question.</p><p>Probably use expandPath to expand Relative paths..  I know CF and/or CFLIB has some pretty cool functions for extracting filenames.</p><p>I think the end result would be getting all the files into a full path so you could keep track of which files you have parsed  and more importantly you need to know the path to properly map parent files with their child files.</p><p>Not sure on the last part of your question.</p><p>Randy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081422">7</a> by roger tubby
		posted on 1/11/2014 at 1:35 AM
		</div>
		<div class="comment_text"><p>I've been faced with a similar problem and needed to do some coverage analysis of some sites that have hundreds of (probably) unused templates, CFCs, etc.</p><p>I looked at capturing the GetDebugger() events and parsing the trace of calls but this is obviously expensive and required debugging to be turned on (not good for production.)</p><p>I then did an injection of a simple Trace(GetCurrentTemplatePath()) call at the beginning of each CFML page and have collected some useful coverage data.</p><p>It's strange that this type of info is not more readily available from the framework. I also find it interesting that adding new templates/resource is so much easier than finding out which ones can be removed - there must be a philosophical reason for this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081428">8</a> by Michael Long
		posted on 1/11/2014 at 4:25 AM
		</div>
		<div class="comment_text"><p>"I also find it interesting that adding new templates/resource is so much easier than finding out which ones can be removed - there must be a philosophical reason for this."</p><p>Roger, the thing is you can't tell what files might be "safe" to remove from a simple site map or tree walk.</p><p>LANDING_PAGE.CFM might have no links to it from other CFM pages on your site, but zap it and you might take down your company's Google Adwords campaign. Is AFFILIATE.CFM unused, or is a link to it only handed out to clients via email?</p><p> Is an image resource "unused" with no references to it in any file, or is it referenced in a database table?</p><p>Basically, it all boils down to metadata that exists outside of the system itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081431">9</a> by Tami Burke
		posted on 1/11/2014 at 6:50 PM
		</div>
		<div class="comment_text"><p>Years ago, Rizal Firmansyah had started an app called 'CF Project Cleaner' that would traverse a CF project for unused files and housekeeping. purposes. I don't know if it ever got out of beta, I tried it, and  it looked promising at the time (circa CF6-7ish). Perhaps a reach out to him may help. (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.masrizal.com%2Findex.cfm%3Ffuseaction%3Didea.download_detail%26ProductID%3Dcfprojectcleaner%29%3ASvfgWSetkcp6k8SfOSzK8HXZAoU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.masrizal.com/index.cfm?fuseaction=idea.download_detail&amp;ProductID=cfprojectcleaner)">http://www.masrizal.com/ind...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081429">10</a> by Tami Burke
		posted on 1/11/2014 at 6:57 PM
		</div>
		<div class="comment_text"><p>Another option I have used in the past, while not elegant, is to open <br>Dreamweaver and do search entire site for a file. Not automated, and I can also do it in CFBuilder, but Dreamweaver is faster and doesn't interfere with my CFB coded progress.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081419">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081419">11</a> by Michael Long
		posted on 1/11/2014 at 7:08 PM
		</div>
		<div class="comment_text"><p>A long time ago I wrote an object-oriented ORM that ran under CF 3.1. Usage was...</p><p>$lt;cf_do class="member" method="new" result="member"&amp;gt;</p><p>At some level, that would eventually translate to the cfinclude tag needed to include the code for the desired method.</p><p>$lt;cfinclude template="#classpath##method#.cfm"&amp;gt;</p><p>Note that the path and name in the tag are being assembled dynamically. The upshot here is that again a traditional code walk would find none of those "method" files.</p><p>The same would hold true of "dispatch" frameworks like Fusebox (action="xyz").</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081427">12</a> by Paul Rowe
		posted on 1/13/2014 at 8:37 PM
		</div>
		<div class="comment_text"><p>I remember considering this sort of thing while I was working at a previous job. My idea, since the site I was working with had a _lot_ of files that were no longer used, was to design something like a spider. There are a few things that can cause trouble for you.</p><p>Start with your entry points and follow a href, form action, cfinclude, cfmodule, cfobject, and cflocation tags. Look for calls to custom tags. When you're evaluating relative paths, I believe they're relative to the file where caller scope is when you're in a custom tag, so your logic needs to account for that.</p><p>Just to throw a wrench in the works, though, the site I was working with would store file paths in a database and you'd have a dynamic value for the a href or cfinclude tags on certain pages.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081420">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081420">13</a> by Bret
		posted on 1/14/2014 at 6:34 PM
		</div>
		<div class="comment_text"><p>I think this might help, but I have not used it personally...</p><p>"Website Cartographer is a tool that allows you to map out your site's structure."<br><a href="http://disq.us/url?url=http%3A%2F%2Fcartographer.riaforge.org%2F%3AbCjSnvhPLmCO_MA9oyT_za7S3F0&amp;cuid=3321886" rel="nofollow noopener" title="http://cartographer.riaforge.org/">http://cartographer.riaforg...</a></p><p>"Unlike traditional website mapping tools, which work just by spidering links, Website Cartographer analyses the applications you use (e.g. Fusebox, BlogCFC, etc) and catches all public pages, regardless of where they are linked from (or indeed if the links are correct).  In addition to this, Website Cartographer will also make educated guesses to determine additional information (for example, page priority, last modified, and so on) for each page, allowing for exports which are more useful than those produced by other tools."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081432">14</a> by Michael Long
		posted on 1/14/2014 at 8:10 PM
		</div>
		<div class="comment_text"><p>Came up with another example. I have a shopping cart system where people can buy certain products that need special handling on the site.</p><p>In one case, people can buy an email subscription, so code needs to be run to add them to the proper list for the correct length of time. Upgrading a subscription needs to add a year to the length of the current sub, and so on.</p><p>This is done by having a product field that contains a set of keywords that are in fact module names: xyz-new, xyz-renew. When a product is purchased, those modules are called so that their code can be run and their actions performed.</p><p>Again, those are includes where the template is dynamic (e.g. template="#product.module#"). Since the names only exist in a database, they'd look abandoned to a tree-walk routine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081438">15</a> by roger tubby
		posted on 1/14/2014 at 8:21 PM
		</div>
		<div class="comment_text"><p>The "Website Cartographer" looks promising - at least on paper. There doesn't seem to be any meat behind the writeup and it has been downloaded 0 times.</p><p>If anyone is interested in my implementation of the Trace() insertion logic I could package it up. It will only record templates/components that are actually called so it is more of a coverage analysis than a full site treemap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081435">16</a> by Patrick Farrell
		posted on 1/15/2014 at 5:00 AM
		</div>
		<div class="comment_text"><p>I use Xmind for logic mapping. It's not a direct dump from CF, but it's the best tool out there for creating relationships and logic trees. The free version has virtually everything you need. Cross platform and super quick to learn. I love it. We use it at  work (ad agency) all the time.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.xmind.net%3AWEB33E9Kb7ok-GdghVA7jRxa_Fo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.xmind.net">http://www.xmind.net</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081433">17</a> by Jaana Gilbert
		posted on 1/18/2014 at 10:11 PM
		</div>
		<div class="comment_text"><p>Tool like this would be priceless. I end up with projects that nobody else wants or can't handle, full of spaghetti code and tons of unused files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081434">18</a> by Sean
		posted on 1/19/2014 at 11:02 AM
		</div>
		<div class="comment_text"><p>I inherited a large, scatterbrained CF app, parts of the code of which were as much as 12 years old, and there were thousands --really, thousands-- of 'test' and obsolete files included in the dir structure.  (You know the drill...you have order.cfm as a production file and then you look in the dir on the server and there are 18 variants of it with people's initials and the word 'test' and dates and all kinds of stuff...people still test in production.)  To make things worse, some of the 'test'-named files are actually in use as includes and scheduled tasks and such.  Of course, there was also a decade's worth of images and PDFs and such.  I decided the most efficient way to strip out the crap was to start a blank git repo, and set up a virtual machine with CF/SQL Server/IIS on it, then change the hosts file to point all possible domain names / machine names to localhost, and then seal it off from any other outbound connections.  Then I started trying to use the app/site locally on that virtual machine, using a combination of Chrome Dev Tools and IIS logs / CF errors to determine what was missing.  It took about a week to get 90% or so into the repo.  Then I handed out copies of the VHD to my team and had them start testing in the same isolated environment and reporting any missing items or issues.  Soon I had 95%.  When I felt comfortable, I used the repo to deploy to my integration and staging environments and shifted their testing there, and eventually I started deploying to the existing site, knowing that any files I had missed would simply continue to exist in production as before, and whenever they were noticed to be missing, I could add them to the repo.  I'm happy to say that I feel I have &gt;99.5% of the necessary files in the repo, I can deploy smoothly, and the repo contains something like 5% of the number of files that the production directory has.  Once I hit a certain benchmark, I'm going to archive the existing production directory and deploy only my repo files plus non-tracked assets (thousands of images that change regularly, etc).</p><p>Now to rebuild the whole dang app/site from scratch with a modern approach...wish me luck!</p></div>
	</div>
</div>
		