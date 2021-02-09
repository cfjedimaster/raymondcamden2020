
<div class="comment" id="c_1713709532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709532">1</a> by Anthony Webb
		posted on 11/4/2008 at 9:23 AM
		</div>
		<div class="comment_text"><p>Looking forward to this one Ray, an ORM skeptic myself (I love the flexibility that writing my own code affords me, can an ORM really do EVERYTHING?) That said, I'm willing to keep an open mind.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709533">2</a> by Akbarsait
		posted on 11/4/2008 at 12:09 PM
		</div>
		<div class="comment_text"><p>I just started using Transfer in projects and looking forward your Transfer blog post series to learn more about it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709538">3</a> by Mark Mandel
		posted on 11/4/2008 at 1:57 PM
		</div>
		<div class="comment_text"><p>@Anthony -<br>An ORM isn't about doing * everything * for you.</p><p>It's about doing some of the menial tasks that can be automated by framework based code, so you don't have to do it.</p><p>An ORM isn't going to replace [insert favourite database specific feature here], because it can't, and also, it probably shouldn't, but it will allow you to automate your CRUD, and usually a lot more as well.</p><p>If uses appropriately and in the right places its a great time saver.. if you try and shoe horn it into every single part of your application ;o) its going to make your head hurt.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709537">4</a> by Gary Gilbert
		posted on 11/4/2008 at 3:00 PM
		</div>
		<div class="comment_text"><p>The more I work with Groovy and Grails the more spoiled I get it just handles so much of that mundane stuff so I can concentrate on more important things.</p><p>We have an Intern that started with us a couple of months ago who studied CompSci and had done 4 years of Java in University.  I started him working on a Grails project and he has pretty much decided that this is how programming SHOULD be.</p><p>With a well writen ORM you still have flexibility, an ORM is an enabler, a good ORM doesn't restrict you from being flexable it enables you to be more productive and spend your energy on whats important by eliminating a lot of the mundane</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709539">5</a> by Chris H
		posted on 11/4/2008 at 6:29 PM
		</div>
		<div class="comment_text"><p>just started looking into Transfer as well, so i will follow your journey closely...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709535">6</a> by Yves
		posted on 11/4/2008 at 8:16 PM
		</div>
		<div class="comment_text"><p>Can't wait to read the articles on Transfer. I haven't yet used it... but am interested in the possibilities.<br>;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709536">7</a> by Henry Ho
		posted on 11/4/2008 at 11:54 PM
		</div>
		<div class="comment_text"><p>The biggest turn-off I have with Transfer is the overhead of specifying the Transfer.xml.  Although the Illudium PU-36 Code Generator (<a href="http://disq.us/url?url=http%3A%2F%2Fcfcgenerator.riaforge.org%2F%29%3A4i8bPDu73l7pemSalOotjl1H5lA&amp;cuid=3321886" rel="nofollow noopener" title="http://cfcgenerator.riaforge.org/)">http://cfcgenerator.riaforg...</a> does help with some of the heavy-lifting, the relationships still needs to be specified in the XML myself because it couldn't pick out the PK/FK relationship from introspecting the DB.</p><p>Secondly, the business object created by Transfer is closely resemble of the table in SQL.  Although additional behavior can be introduced by the decorator, sometimes the ideal object may not be anything like the structure of my DB tables.  That's why my team and I couldn't justify of using Transfer for more complex web applications that we build.</p><p>Anyway, thanks Ray for doing so much for the CF community!  Just a suggestion, maybe the last tutorial of your series can introduce how Model-Glue works with Transfer as well! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713709548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713709548">8</a> by Raymond Camden
		posted on 11/5/2008 at 12:26 AM
		</div>
		<div class="comment_text"><p>@HH: You bring up some good points. You do need to do some typing in the XML. I don't necessarily see this as a big deal per se. To me it's just defining my business object. If you read Joe's article on ORM, we can see that over in Hibernate it is a much less difficult.</p><p>Your issue with the TO (the CFC made by Transfer, the Transfer Object) is not something that has ever bothered me. I never felt like it was a simple reflection of my db row.</p></div>
	</div>
</div>
		