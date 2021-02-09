
<div class="comment" id="c_1713681674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681674">1</a> by Photovoltaik
		posted on 6/10/2008 at 6:30 PM
		</div>
		<div class="comment_text"><p>Sorry i do not understand the<br>&lt;cffunction name="getLibrary" access="public" returnType="any" output="false"&gt;<br>why not "publics" why public</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681671">2</a> by dickbob
		posted on 6/10/2008 at 6:41 PM
		</div>
		<div class="comment_text"><p>No attachment Raymond ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681662">3</a> by Raymond Camden
		posted on 6/10/2008 at 6:48 PM
		</div>
		<div class="comment_text"><p>@dickbob: Sorry, added.</p><p>@photovoltaik: Eh? Are you asking why I used public instead of publics? Publics isn't valid.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681673">4</a> by Brian
		posted on 6/10/2008 at 7:46 PM
		</div>
		<div class="comment_text"><p>Stupid question of the day... what is "Transfer?"  It isn't exactly a google friendly product name.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681677">5</a> by John Allen
		posted on 6/10/2008 at 8:09 PM
		</div>
		<div class="comment_text"><p>Ray, glad to hear you drank the ORM kool-aid, and look forward to your blogging about it.</p><p>Welcome to this wonderful wonderful world.</p><p>Thank goodness for the Mighty Mighty Transfer ORM.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681672">6</a> by Cedric Villat
		posted on 6/10/2008 at 8:11 PM
		</div>
		<div class="comment_text"><p>@Brian, check out <a href="http://disq.us/url?url=http%3A%2F%2Fwww.transfer-orm.com%3Av29ZgOnq8iEpzu5qqkOoMyCpWmw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.transfer-orm.com">http://www.transfer-orm.com</a> . I agree, not the friendliest name to search for, but there you go! I agree with Ray, Transfer is really quite useful. I switched from Reactor to Transfer, and love the change.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681683">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681683">7</a> by Raymond Camden
		posted on 6/10/2008 at 8:29 PM
		</div>
		<div class="comment_text"><p>@Brian - Cedric answered this well. It is an ORM. ORM means Object Relational Mapper.</p><p>In English - consider it an API to your datasource. It can help you write no, or little, SQL.</p><p>So I can say "Table so and so has these fields." And then my orm lets me do "Get record 5" and the orm handles writing the proper sql.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681681">8</a> by me
		posted on 6/13/2008 at 1:42 AM
		</div>
		<div class="comment_text"><p>it's a bit of a pain typing out the transfer.xml, is it possible to generate it from db introspection, perhaps using cfdbinfo?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681679">9</a> by Raymond Camden
		posted on 6/13/2008 at 1:44 AM
		</div>
		<div class="comment_text"><p>Sure. And I believe Brian Rinaldi's generator can do this as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681682">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681682">10</a> by me
		posted on 6/15/2008 at 12:54 AM
		</div>
		<div class="comment_text"><p>Thanks Ray, Brian's cfcgenerator is really helpful. Just worth noting I think though, for those starting out with transfer like me, make sure you delete the foreign key properties from your transfer.xml when setting up your links/relationships, the generator puts them in even if they're defined as fks in your db. Had me scratching my head for a while.</p></div>
	</div>
</div>
		