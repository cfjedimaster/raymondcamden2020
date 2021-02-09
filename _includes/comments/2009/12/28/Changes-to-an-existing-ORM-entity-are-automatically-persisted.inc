
<div class="comment" id="c_1713720926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720926">1</a> by Devin
		posted on 12/29/2009 at 1:21 AM
		</div>
		<div class="comment_text"><p>Although I was aware of this, it's still good to be reminded. I'm assuming that if you need to control whether data gets persisted, you could can set flushAtRequestEnd to false.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720916">2</a> by Raymond Camden
		posted on 12/29/2009 at 1:39 AM
		</div>
		<div class="comment_text"><p>Yep, Brian mentioned that specifically. He said he uses that mod. (I'm bringing him into the thread to correct me if wrong.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720921">3</a> by Gabriel
		posted on 12/29/2009 at 2:01 AM
		</div>
		<div class="comment_text"><p>Didn't know it so thank you. My mental model and transfer experience would have had me assume what you did.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720928">4</a> by Chlu
		posted on 12/29/2009 at 2:19 AM
		</div>
		<div class="comment_text"><p>I know that even if I'm not been coding for several years,<br>I'm just a simple manager nowdays :p</p><p>Some comments on Bens blog are the best explonation I've seen about this. Read all comments from Justice in this blogpost <a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F1691-Learning-ColdFusion-9-Understand-ORM-Events-Thanks-John-Whish-.htm%3AD99y-veqZDmMZdJU7BRy_aoNcQU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/1691-Learning-ColdFusion-9-Understand-ORM-Events-Thanks-John-Whish-.htm">http://www.bennadel.com/blo...</a></p><p>ps. I regularly follow your blog and many others as well, and I think your blog is great!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720925">5</a> by Raymond Camden
		posted on 12/29/2009 at 2:36 AM
		</div>
		<div class="comment_text"><p>Not that that entry isn't good - it is good - but to be clear - I do "get" how the session works in terms of timing. This to me isn't a session issue/question but more a "Under what circumstances do you consider data changed?" I guess that Hibernate thinks that as soon as you change something, it should be saved, but to me, it shouldn't.</p><p>On the other hand - I may be nitpicking. ;)</p><p>Although - I think this raises the point - ORM is super easy, super sexy, etc, but sometimes the little details can really bite you in the ass.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720919">6</a> by Mark Mandel
		posted on 12/29/2009 at 2:43 AM
		</div>
		<div class="comment_text"><p>Hate to let you know this Ray, but I mentioned exactly this in my original DevNet ORM article:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fdevnet%2Fcoldfusion%2Farticles%2Fcoldfusion9_orm_04.html%3A9xByc1wGM_yAneM9IKwiZEomG9Y&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/devnet/coldfusion/articles/coldfusion9_orm_04.html">http://www.adobe.com/devnet...</a> ;o(</p><p>My articles on my blog on Hibernate Sessions also explain how and also why this happens (its mainly a performance thing).<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.compoundtheory.com%2F%3Faction%3DdisplayCategory%26ID%3D72%3AbXA3t-OpMwcG5b07Kob0mqZw9fc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.compoundtheory.com/?action=displayCategory&amp;ID=72">http://www.compoundtheory.c...</a></p><p>Hope they explain things a little better, in case you (or anyone else is wondering what is going on)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720923">7</a> by Mark Mandel
		posted on 12/29/2009 at 2:47 AM
		</div>
		<div class="comment_text"><p>Just a further note on this - if you are looking to turn this off (and do more manual control of when Sessions flush, you can set the the ormsettings 'flushatrequestend'.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F9.0%2FDeveloping%2FWSED380324-6CBE-47cb-9E5E-26B66ACA9E81.html%3A1W4E0x-QG5jHw9QCw1_Dq6X177g&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/9.0/Developing/WSED380324-6CBE-47cb-9E5E-26B66ACA9E81.html">http://help.adobe.com/en_US...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720922">8</a> by Raymond Camden
		posted on 12/29/2009 at 2:53 AM
		</div>
		<div class="comment_text"><p>Who reads your stuff though? ;) Seriously - yeah - it all makes sense now - it just wasn't what I expected. I'm glad to see I wasn't alone. I'll be sure to mention this in the WACK too. Thanks all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720912">9</a> by Tyler Clendenin
		posted on 12/29/2009 at 7:13 AM
		</div>
		<div class="comment_text"><p>Yeah, I would have totally figured that you'd have to run: set, set, set, save.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720910">10</a> by Andrew Scott
		posted on 12/29/2009 at 7:23 AM
		</div>
		<div class="comment_text"><p>Ray, I am going to agree with you. There is nothing, either in the Adobe documentation nor Mark Mandel's blogs that specifically say that if you ommit the EntitySave/EntityDelete that it will be persisted.</p><p>All I am reading and interpreting is that the save/delete will only occur at the end (provided that use use entitySave/EntityDelete) of the request unless you flush it manually.</p><p>Or am I not reading this correctly!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720931">11</a> by Raymond Camden
		posted on 12/29/2009 at 7:42 AM
		</div>
		<div class="comment_text"><p>@Andrew: You didn't see the call out in the URL Mark listed? Technically that isn't his blog - but I just want to make sure you see it. He does call it out there. As for the Adobe docs, I definitely can't say I've read them all, but I know I haven't seen this.</p><p>And if I read your second para right - then yes - it is my understanding that you are right. The saves/deletes happen at the end of the Hibernate session (which you can , normally, mentally map to ColdFusion Request).</p><p>Again though - that wasn't a surprise for me. I expected that. I just didn't except that if I _changed_ a persistent CFC it would auto save the change.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720927">12</a> by Andrew Scott
		posted on 12/29/2009 at 7:51 AM
		</div>
		<div class="comment_text"><p>Ray, yes I read both links Mark posted. And still do not see where it says, that if you load/create an entity without an EntitySave the object will be persisted to the database.</p><p>Also I fail to see how this a performance issue as Mark has suggested, in my eyes if one hasn't used the save then it wont create a sql script. Which means that by the end of the request, there is no SQL to run. How that is a performance issue is making me really scratch my head.</p><p>The performance issue that everyone seems to mention is the fact that the flush is done at the end of the request, that is a performance issue. Whether you have modified an entity or not, it should not save the entity back to the database. Although I have not seen this behaviour, I would be more inclined to call this a bug. If one was to write a multi-step process, one could find that they would not be able to roll back the data. This is just one of many examples I can come up with off the top of my head for this being an major bug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720907">13</a> by Raymond Camden
		posted on 12/29/2009 at 8:13 AM
		</div>
		<div class="comment_text"><p>@AS: To your first comment - he didn't say you didn't need entitySave for NEW entities, he said it for existing entities. Here is the quote from his first URL:</p><p>"Note that the code did not explicitly tell Hibernate to update larry. Hibernate keeps track of what CFCs have been loaded and if they have changed from their initial state. In this case, it can see that the age property of Larry has changed, and at the end of the request it will update the database accordingly. You could call EntitySave() on Larry when you are updating him, but the call simply gets ignored by Hibernate when the object is already persisted in the database."</p><p>To me that is pretty cut and dry. To your second para - my understanding is that Hibernate is storing up changes and running only what it needs to. So if I take a user ob, set its name to Bob, entitySave it, then set it to Joe, and save it, Hibernate will be smart enough to say, "I only really need to save it to Joe." Again, that's my take.</p><p>As for it being a bug... well, to me, it was counterintuitive. I don't expect that I think the same as the Hibernate devs out there. In my personal opinion, this isn't a bug. Just... how it works. But I can see your point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720911">14</a> by Andrew Scott
		posted on 12/29/2009 at 8:18 AM
		</div>
		<div class="comment_text"><p>Ok, I did miss that statement.</p><p>However I will stand by the fact that it is an unwanted feature then, as I explained this means one can not write a multistep application and if something goes wrong one can't roll it back to its existing data.</p><p>That is not intuitive to me, and will becausing people to look around for solutions to that.</p><p>I guess I am different here, I see this as a major unwanted feature. That is going to be raising so many blogs and how do I get around this, but to have a switch to turn it off is just plain wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720924">15</a> by Devin
		posted on 12/29/2009 at 8:54 AM
		</div>
		<div class="comment_text"><p>The docs do mention it (for the most part)...  When the session is flushed the following happens:</p><p>1.all entity insertions, in the same order the corresponding objects were saved using EntitySave()</p><p>2.all entity updates</p><p>3.all collection deletions</p><p>4.all collection element deletions, updates, and insertions</p><p>5.all collection insertions</p><p>6.all entity deletions, in the same order the corresponding objects were deleted using EntityDelete()</p><p>Steps 1 &amp; 6 mention the use of EntitySave/Delete for inserts and deletions. Steps 2 through 5 have no mention of EntitySave, inferring that it's not needed for those types of changes. Yes, I know... it's not in-your-face obvious from that bit of documenation and should probably be a bit more clear.</p><p>As for whether its an unwanted feature, it doesn't really bother me. Once an entity is made persistent, I think of it as having a direct connection to the persistence layer... making a change to an entity is really just making a change to the persistent data through an interface, and that interface happens to be an entity.</p><p>Of course, once I run into a use-case in which I don't want changes automatically persisted (which I just haven't yet) I may be annoyed at having to disconnect that object from the session. But if that's how hibernate works internally, then maybe disconnecting from the session (or something like that) is a generally acceptable practice amongst the Hibernate community and we're all just complaining because it's a change from the norm for us?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720917">16</a> by Raymond Camden
		posted on 12/29/2009 at 9:00 AM
		</div>
		<div class="comment_text"><p>Devin - duh - thank you. I linked to the doc up top. Brain fart there. So Andrew, I'd say it _is_ documented... although maybe not 100% clear/blunt.</p><p>Devin - also - one thing Brian Kotek suggested was that you could simply use a new entity (var foo = new User()) during an edit. When you are sure the user is edited correctly, you can then merge it with the persistent copy. Please take what I say with a grain of salt - I don't want to put the wrong words in Brian's mouth.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720929">17</a> by Brian Kotek
		posted on 12/29/2009 at 12:04 PM
		</div>
		<div class="comment_text"><p>That's correct, Ray. If you don't want this behavior, your options are basically: to turn it off (I do); to update the object, validate it, and remove it from the persistence context using ORMEvictEntity(); or create a new, non-persistent object, populate it, validate it, and then merge it with the existing entity using EntityMerge().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720930">18</a> by Ben Nadel
		posted on 12/30/2009 at 6:06 AM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>Just for the record, when I responded on Twitter, it wasn't what I "expected". It was what I learned after wondering why something was happening that I didn't expect ;) I'm still wrapping my head around all of this ORM stuff :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720915">19</a> by Raymond Camden
		posted on 12/30/2009 at 7:25 AM
		</div>
		<div class="comment_text"><p>Oops, sorry man!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720913">20</a> by Ben Nadel
		posted on 12/30/2009 at 7:33 AM
		</div>
		<div class="comment_text"><p>No worries - I just didn't want you thinking I know what the heck I'm talking about :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720909">21</a> by Sumit Verma
		posted on 1/6/2010 at 10:19 PM
		</div>
		<div class="comment_text"><p>This is definitely not the behavior one would expect. I wish there was a setting (similar to flushAtRequestEnd) to just tell CF to persist the changes only if entitySave() or entityDelete() is called on the object.</p><p>PS: Correction to Brian's comment (this will trip people as well). ORMEvictEntity() does _not_ remove the object from the hibernate session. It only removes it from the secondary cache. To evict from the hibernate session (and to prevent persistence) use: ormGetSession().evict(entity).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720918">22</a> by David
		posted on 1/11/2010 at 8:51 PM
		</div>
		<div class="comment_text"><p>How about using cftransactions? Adobe seems to recommend using transactions with ORM: <a href="http://disq.us/url?url=http%3A%2F%2Fhelp.adobe.com%2Fen_US%2FColdFusion%2F9.0%2FDeveloping%2FWS11EF87BF-AA62-40ce-BA11-602F6A4D9164.html%3A4yJIms53UAf17L21lkn-UJb7gDk&amp;cuid=3321886" rel="nofollow noopener" title="http://help.adobe.com/en_US/ColdFusion/9.0/Developing/WS11EF87BF-AA62-40ce-BA11-602F6A4D9164.html">http://help.adobe.com/en_US...</a></p><p>So my code would be:<br>&lt;cftransaction action="begin"&gt;<br>     &lt;cfset game = entityLoadByPK("Game", 1) /&gt;<br>     &lt;cfset game.setName("Mass Effect 2") /&gt;		<br>     &lt;cfset valid = game.validate() /&gt;<br>     &lt;cfif valid&gt;<br>	  &lt;cftransaction action="commit" /&gt;<br>     &lt;cfelse&gt;<br>	  &lt;cftransaction action="rollback" /&gt;<br>     &lt;/cfif&gt;</p><p>&lt;/cftransaction&gt;</p><p>So if there's some kind of validation error with editing this record, it will get rolled back and not persisted to the database.</p></div>
	</div>
</div>
		