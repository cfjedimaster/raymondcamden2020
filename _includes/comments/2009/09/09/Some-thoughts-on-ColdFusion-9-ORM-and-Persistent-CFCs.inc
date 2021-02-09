
<div class="comment" id="c_1713718157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718157">1</a> by Ben Nadel
		posted on 9/9/2009 at 9:27 PM
		</div>
		<div class="comment_text"><p>Oh nice, I didn't know about the EntityMerge() method. Is that an undocumented method? I can't find it in the documentation (although, it wouldn't be the first time that the Adobe docs Search didn't come up with a match).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718156">2</a> by Raymond Camden
		posted on 9/9/2009 at 9:28 PM
		</div>
		<div class="comment_text"><p>I don't have access to the Public CF9 docs - but it is definitely documented _post_ that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718152">3</a> by Ben Nadel
		posted on 9/9/2009 at 9:33 PM
		</div>
		<div class="comment_text"><p>Sounds good. Cool stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718158">4</a> by Nick
		posted on 9/9/2009 at 10:04 PM
		</div>
		<div class="comment_text"><p>"entity" in database logical term means a table ('table' is database phyiscal term)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718160">5</a> by Henry Ho
		posted on 9/9/2009 at 10:15 PM
		</div>
		<div class="comment_text"><p>nice, thanks for the tip.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718154">6</a> by Michael Long
		posted on 9/10/2009 at 12:18 AM
		</div>
		<div class="comment_text"><p>Can a persistent component still extend another component? My personal ORM code includes quite a bit of "default" functionality.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718161">7</a> by Raymond Camden
		posted on 9/10/2009 at 12:21 AM
		</div>
		<div class="comment_text"><p>I don't see why not. Picard makes use of inheritance in one area but those CFCs aren't persisted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718153">8</a> by Tony Garcia
		posted on 9/10/2009 at 1:45 AM
		</div>
		<div class="comment_text"><p>@Michael,<br>Here are some blog posts having to do with CF9 ORM and inheritance:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bennadel.com%2Fblog%2F1688-learning-coldfusion-9-orm-inheritance-mapping.htm%3ApwG2rLZg55c_Dh7MK40EBCRlU7E&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bennadel.com/blog/1688-learning-coldfusion-9-orm-inheritance-mapping.htm">http://www.bennadel.com/blo...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.silverwareconsulting.com%2Findex.cfm%2F2009%2F9%2F7%2FSimple-Base-Persistent-ORM-Object-for-CF9-Now-Available%3AWKo8tasUyFC_0JmvfoI-BDnCj2g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.silverwareconsulting.com/index.cfm/2009/9/7/Simple-Base-Persistent-ORM-Object-for-CF9-Now-Available">http://www.silverwareconsul...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718155">9</a> by Mark Mandel
		posted on 9/10/2009 at 3:48 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>This is exactly what I figured a lot of CF developers are going to do with Hibernate ;o)</p><p>This is why it is important to also understand Hibernate Object State when working with CF9 ORM.</p><p>I have another article here:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.compoundtheory.com%2F%3Faction%3DdisplayPost%26ID%3D419%3A7ai4xm8QzFJGMTKqB8YYUBY1O-M&amp;cuid=3321886" rel="nofollow noopener" title="http://www.compoundtheory.com/?action=displayPost&amp;ID=419">http://www.compoundtheory.c...</a></p><p>That attempts to explain it.</p><p>But the short version is - when you put the object in CF Session, and go to another request, it becomes _detached_.  Which means it no longer has access to any Hibernate Session, and thefore, can't lazy load (or do quite a few things).</p><p>To get it to work again, you have to move it back to a _persistent_ state, and there are several strategies for doing this.  Check out my blog post for more details.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718164">10</a> by Raymond Camden
		posted on 9/10/2009 at 6:25 AM
		</div>
		<div class="comment_text"><p>By any wild chance is there a way to tell if an object is detached?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718163">11</a> by Mark Mandel
		posted on 9/10/2009 at 6:34 AM
		</div>
		<div class="comment_text"><p>I don't believe there is, but you should generally know by what you are doing with your objects, and knowing the life-cycle of your Hibernate Session.</p><p>Generally speaking, its best to avoid detached objects whenever you can.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718162">12</a> by Raymond Camden
		posted on 9/10/2009 at 6:38 AM
		</div>
		<div class="comment_text"><p>It would be nice if there was a simple way to tell Hibernate to load _everything_. Ie, get this ob and fully load it. Yes I can force it by calling getX, getY, etc, but I'd like to be able to do that when calling entityNew.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718169">13</a> by Henry Ho
		posted on 9/10/2009 at 6:42 AM
		</div>
		<div class="comment_text"><p>@Ray, I think you can already do it.  Check the doc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718171">14</a> by Raymond Camden
		posted on 9/10/2009 at 6:51 AM
		</div>
		<div class="comment_text"><p>Sorry - but I'm not seeing that. If you can find the function/feature, I'd appreciate it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718168">15</a> by Mark Mandel
		posted on 9/10/2009 at 7:00 AM
		</div>
		<div class="comment_text"><p>You can do it with HQL (I'm pretty sure you can do it with Criteria as well, although I tend towards using HQL, and Criteria isn't openly exposed in CF).</p><p>Check out fetch joins:<br><a href="http://disq.us/url?url=http%3A%2F%2Fdocs.jboss.org%2Fhibernate%2Fstable%2Fcore%2Freference%2Fen%2Fhtml%2Fqueryhql.html%23queryhql-joins%3Abmd581nuRg9q69aIadnopzPJgiY&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.jboss.org/hibernate/stable/core/reference/en/html/queryhql.html#queryhql-joins">http://docs.jboss.org/hiber...</a></p><p>So in this case it would be something like:<br>select user from User as user inner join fetch user.usertype inner join fetch user.userstatus</p><p>(On a site note, why 'usertype' and 'userstatus', the 'user' portion is kinda redundant, as it's on the User objects anyway... but that's just me being nitpicky ;o) )</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718170">16</a> by Raymond Camden
		posted on 9/10/2009 at 7:04 AM
		</div>
		<div class="comment_text"><p>Interesting. I still think it would be something that should belong in entityNew though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718172">17</a> by Raymond Camden
		posted on 9/10/2009 at 7:05 AM
		</div>
		<div class="comment_text"><p>Sorry - I meant entityLoad.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718173">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718173">18</a> by Mark Mandel
		posted on 9/10/2009 at 7:09 AM
		</div>
		<div class="comment_text"><p>re: 'interesting. I still think it would be something that should belong in entityLoad though'</p><p>I don't think this belong on EntityGet at all.</p><p>When you start getting into complex object graphs, saying 'grab everything', could potentially grab your whole database. Eek!</p><p>Really, in Hibernate, get()/EntityLoad() is for simple operations operations, using the default configuration.</p><p>When you start wanting to do more complicated things, on a sepcific basis, that's when the power of HQL (and also Criteria) queries comes to the fore, as you have full power over fetching strategies, and a variety of other options.</p><p>You have two options - (1) that is simple and straight forward and (2) that gives you full control over what is going on.  Why do you want something in between?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718175">19</a> by Raymond Camden
		posted on 9/10/2009 at 7:11 AM
		</div>
		<div class="comment_text"><p>I see your point, but is what I'm doing so complex? Its an object with 2 related props that I'm storing for longer than the Hibernate session. To me that isn't complex.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718178">20</a> by Mark Mandel
		posted on 9/10/2009 at 7:17 AM
		</div>
		<div class="comment_text"><p>Yes.. but that is a lack of complexity in *your* example.</p><p>Not a lack of complexity in regards to the framework.</p><p>It's like saying 'I only need to put one value in a distributed cache that is shared across a cluster. It's only 1 value, that should be a simple thing to implement, right?'</p><p>You're basically changing fetching strategies, which if done incorrectly, or in the wrong place in an appliaction can be a pretty big issue.  Having flag that simply switches fetching strategies all over the place is a pretty bad idea, as it will get really abused in some bad ways.</p><p>Lets also not forget there are a slew of other (possibly better) options to solve this problem, some being:<br>1) just storing the id of the user in session, and retrieving that object as required<br>2) re-retrieving the object from Hibernate all over again when requested, so that you know the data is completely valid.</p><p>(I expound on those approaches some more in my linked article)</p><p>This is why dealing with detached objects is generally not a good way to go, it adds a large amount of complexity and management, with not a lot of gain.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718180">21</a> by Raymond Camden
		posted on 9/10/2009 at 7:23 AM
		</div>
		<div class="comment_text"><p>But I didn't say it would globally disable the fetching. I'd imagine under normal circumstances I'd get a user object and _not_ persist it - but this one, which represents the current user, would be unique.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718182">22</a> by Mark Mandel
		posted on 9/10/2009 at 7:28 AM
		</div>
		<div class="comment_text"><p>Not following you on this one... ;o)</p><p>Maybe I wasn't clear.</p><p>You're essentially doing 2 things, that are actually complex:</p><p>1) You want to change fetching strategies at runtime<br>2) You want to interact with a detached object</p><p>These two things are actually kinda tricky, esp. with Hibernate.</p><p>Hence the options I've outlined above for alternate strategies for when you want to store an Entity in the CF Session scope.</p><p>Does that make more sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718179">23</a> by Raymond Camden
		posted on 9/10/2009 at 7:30 AM
		</div>
		<div class="comment_text"><p>I guess it just doesn't seem complex to me. I get why Hibernate would be lazy. That makes sense. Don't load X, a related property, unless the user asks you to. That lazyness is sensible. But it seems like if I know I'm going to need, but _after_ the current Hibernate session, then I should be able to ask Hibernate to not be lazy. This one time. Only. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718187">24</a> by Mark Mandel
		posted on 9/10/2009 at 7:31 AM
		</div>
		<div class="comment_text"><p>re: 'But it seems like if I know I'm going to need, but _after_ the current Hibernate session, then I should be able to ask Hibernate to not be lazy. This one time. Only. ;)'</p><p>And you can. With HQL or Criteria Queries.</p><p>So use them ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718183">25</a> by Raymond Camden
		posted on 9/10/2009 at 7:32 AM
		</div>
		<div class="comment_text"><p>Heh, ok, you win. (But look, I got the last comment. So there. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718185">26</a> by Henry Ho
		posted on 9/10/2009 at 9:03 PM
		</div>
		<div class="comment_text"><p>@Ray, I think you can read this: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.rupeshk.org%2Fblog%2Findex.php%2F2009%2F09%2Fcoldfusion-orm-performance-tuning-fetching-strategy%2F%3ACgnDKAsEh9andSN_lfdg6IsKx2c&amp;cuid=3321886" rel="nofollow noopener" title="http://www.rupeshk.org/blog/index.php/2009/09/coldfusion-orm-performance-tuning-fetching-strategy/">http://www.rupeshk.org/blog...</a><br>see #1: Immediate fetching<br>:)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718186">27</a> by Raymond Camden
		posted on 9/10/2009 at 9:05 PM
		</div>
		<div class="comment_text"><p>Yep, great article. Thanks for posting it here. Option 1 is what I'm doing now - although I _only_ used the lazy attribute.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718188">28</a> by Michael Long
		posted on 9/11/2009 at 4:49 AM
		</div>
		<div class="comment_text"><p>I think Mark is correct on one aspect, and that storing detached objects in a session scope is a bad idea, especially in terms of scalability. Do you want thousands of detached objects sitting around waiting to die, or simply thousands of ids?</p><p>Or if you MUST use session scopes (almost always a bad idea), then get the object, get the three values you wanted, and persist those.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718189">29</a> by Raymond Camden
		posted on 9/11/2009 at 5:11 AM
		</div>
		<div class="comment_text"><p>Why is using the session scope a bad idea all of a sudden? We've used it for ages. Moving from storing session.username to session.userOb is a no brainer for me I'd say. And thousands of objects? Well maybe if I have thousands of objects. As it stands, this is not per session, but per _logged in_ session. So this will be a minority of the total traffic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718190">30</a> by Michael Long
		posted on 9/11/2009 at 12:24 PM
		</div>
		<div class="comment_text"><p>Using sessions means that you're making a lot of assumptions about site scalability and traffic. You're never going to have a lot of visitors? Never going to have a lot of simultaneous logins? Never going to be popular? Never going to be Slashdotted? Never going to need to maintain uptime and availability?</p><p>I almost always design using client variables, which means that I usually won't have to change a thing the second I decide to hang another server out there for load-balancing and fail-over. Sticky-sessions won't wash either, as you lose both load-balancing and fail-over capabilities when you do so. Have a server go down, or take it down manually to do an upgrade, and the user's bound session goes poof.</p><p>And if your argument is still that you're only going to have a few dozen users at a time, then the exceedingly minor database hits a dozen users are going to cause to support client-based variables are equally meaningless... and you've still bullet-proofed your future.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718192">31</a> by Tom Chiverton
		posted on 9/11/2009 at 1:38 PM
		</div>
		<div class="comment_text"><p>I'd say that by storing the user object in the session scope, you are assuming it'll never be modified by another session (such as an admin. user changing a flag that allows a feature etc.) or is entityMerge() clever enough that things in the database trump things in the variable) ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718191">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718191">32</a> by Raymond Camden
		posted on 9/11/2009 at 3:55 PM
		</div>
		<div class="comment_text"><p>The issue you bring up is something that impacts Session variables whether you use ORM or not.</p><p>As for entityMerge being smart enough - I have no idea what would happen if you changed some prop in another session (note lowercase), and then merged it with Session.User. I'd always assume the 'freshest' copy will "win". I'll do a test later this morning.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718193">33</a> by Raymond Camden
		posted on 9/11/2009 at 3:59 PM
		</div>
		<div class="comment_text"><p>@Michael: I don't think it makes sense to say you can never use Session variables. Whether I use ORM or not isn't important - it is the size. I can discover that size easily enough by using the Server Monitor and then plan accordingly. I don't think you can say "Lot of traffic means no session variables" as that just isn't true. And as for load balancing and fail over - you have support for that with CFCs/Session variables now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718196">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718196">34</a> by Michael Long
		posted on 9/12/2009 at 8:42 AM
		</div>
		<div class="comment_text"><p>Size isn't everything. Without know how the ORM maintains internal state you could be creating thousands of relatively heavy-weight objects that, say, prevent your database connections from being dropped, closed, or reused.</p><p>Worse, you're maintaining them for the entire duration of the page request as opposed to relegating their use inside a single function that obtains what it needs and then drops and frees the object immediately after the function exits.</p><p>As to session replication: "When a cluster uses session replication, session data is copied to other servers in the cluster each time it is modified. This can degrade performance if you store a significant amount of information in session scope. If you plan to store a significant amount of information in session scope, consider storing this information in client variables saved in a database."</p><p>It also gets worse the more servers you have in your cluster, as session traffic goes up exponentially.</p><p>Plus session replication is another one of those $7,500 a copy Enterprise-only features.</p><p>No thanks. For the cost of two CFE licenses I can buy two hardware-based LBs and run one with another in warm standby. Those will support, oh, a thousand or so servers, easy.</p><p>BTW, if entityMerge hits the database again to "refresh" the object, then there's really no reason whatsoever to persist the darn thing, is there?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718195">35</a> by Raymond Camden
		posted on 9/12/2009 at 5:28 PM
		</div>
		<div class="comment_text"><p>Well, if you don't know the amount of data you are using, then you have problems anyway. ;)</p><p>As it stands, ORM entities live for an entire page request as that's how long the Hibernate session will live. You can force it to close early, but by default it is going to equal the CF Request.</p><p>I guess I'm not saying you are wrong per se - but it almost sounds as if you think one can't use ORM at all. I think like anything it is perfectly fine as long as you know what you are doing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713718197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713718197">36</a> by Ryan McIlmoyl
		posted on 11/27/2009 at 2:44 AM
		</div>
		<div class="comment_text"><p>A possible soution to the Session/client scope issue when it comes to scaling: What about using a distributed memory cache (memecached or EhCache)?  You still have to serialize/deserialize your data, but avoid the DB hit.  Still not as simple as using the Session scope directly, but makes it easier to scale, without having to worry about round-robin or replication.</p></div>
	</div>
</div>
		