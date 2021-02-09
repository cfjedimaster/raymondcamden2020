
<div class="comment" id="c_1713715703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715703">1</a> by Sean Coyne
		posted on 5/27/2009 at 8:56 PM
		</div>
		<div class="comment_text"><p>If I remember correctly, its also case sensitive.  So if you have a toolbar named BlackSmokeMonster and you specify blacksmokemonster then it won't work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715706">2</a> by Raymond Camden
		posted on 5/27/2009 at 9:39 PM
		</div>
		<div class="comment_text"><p>Excellent point. It's easy, especially for folks who are brand new to JS, to forget this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715705">3</a> by Daniel Sellers
		posted on 5/27/2009 at 10:22 PM
		</div>
		<div class="comment_text"><p>It would be nice if basepath let you specify a different Rich Text Editor instead of fckEditor... Great info Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715704">4</a> by Aegis
		posted on 5/28/2009 at 3:44 AM
		</div>
		<div class="comment_text"><p>regarding users who get upset with editors like FCK when they don't do EXACTLY what the user wants - I have a couple of approaches I use with clients:</p><p>1) Before any development work starts, I demo a site already running the editor and show the client that while it LOOKS like an MS Word style interface, it doesn't BEHAVE the same way - and give a quick rundown of how it still sits on top of the HTML language which wasn't intended to even allow that sort of stuff in the first place and that frankly they should be thankful they can create bold text by simply selecting it and hitting ctrl+B!<br>(This is usually the point I show the sourcecode of a page)</p><p>2) I'd say roughly 90% of the clients I've had since the old days of soEditor have fairly specific desires when it comes to layouts they're trying to achieve in their pages. For these people, I ask them for a Word doc with the layout they're trying to achieve, then we recreate it as a template (which FCKEditor [and AFAIK most others] supports from a dropdown in the toolbar)</p><p>The above generally sorts the main layout problems people have with these. beyond that, the only other issue I have is with FCK's @!*$^ filebrowser. But the CFFM option from <a href="http://disq.us/url?url=http%3A%2F%2Fwww.opensourcecf.com%3AK9ioseuOKHExh_5a4iuUq9rzyic&amp;cuid=3321886" rel="nofollow noopener" title="www.opensourcecf.com">www.opensourcecf.com</a> is a great replacement anyway - and much easier to hack user security checks into.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715702">5</a> by Jean Moniatte
		posted on 5/28/2009 at 4:26 AM
		</div>
		<div class="comment_text"><p>I think that a RTE is one of the central element of any CMS today. We cannot expect users to know HTML to simply post an update on their website (I know, I develop a CMS).</p><p>Client side tags should not belong to ColdFusion, and I wish Adobe concentrate their efforts on server side functionalities. I never used the cfform, cftextarea etc... in many years of CF development.</p><p>Why would I have to wait for the next update of CF to implement a new revision of the RTE that Adobe has decided I should use? Loading fck or tinyMce on a web page is not rocket science.</p><p>Finally, bundling CF with client side technologies makes web developers less aware of "what happens on the client side" which is a disservice to the web development community in general.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715708">6</a> by Raymond Camden
		posted on 5/28/2009 at 4:46 AM
		</div>
		<div class="comment_text"><p>@Jean: Why do you have to wait for Adobe to implement a new RTE? That makes no sense. _If_ you want the easy to use RTE, if you want something super simple, than you can use this. If you don't like it, you can use any other RTE you want. I applaud Adobe for making these client side things easy for folks. Sure, they have their drawbacks, but really, if you feel like they don't do what you want, you probably aren't the audience for them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715709">7</a> by Jean Moniatte
		posted on 5/28/2009 at 9:40 AM
		</div>
		<div class="comment_text"><p>Users of cftextarea probably do not want to update the javascript code in their /cfide. They will therefore not benefit from the latest versions of the RTE before Adobe ships an update.</p><p>If I want an easy to use RTE, I load the tinyMCE javascript, add a class to any textarea and voila. Not rocket science, and not longer than using cfform, cftextarea etc... Certainly safer too, as it does not require the /cfide folder to be publicly available.</p><p>You are right, I have the choice to not use those tags. I still think that Adobe CF should not worry about them and would prefer more improvements on the server side. Railo and BD seem to have an edge on that side.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715707">8</a> by JC
		posted on 5/28/2009 at 3:53 PM
		</div>
		<div class="comment_text"><p>You can also modify fckconfig.js to allow file uploads, as long as you've patched CF8. Granted, this can be dangerous, but in a controlled intranet setting, letting users upload photos is pretty reasonable. You'll have to use a custom toolbar for the upload bits to show up for the user.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715712">9</a> by Daniel Sellers
		posted on 5/28/2009 at 9:37 PM
		</div>
		<div class="comment_text"><p>I have to agree with you Master Jedi. If you don't like Fck there are lots of others out there and it is awesome that Adobe is including it for us.</p><p>Fck is more power than my users need at the moment. That is why I use a different RTE. Lots of good ones out there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715711">10</a> by GusD
		posted on 2/11/2010 at 4:30 AM
		</div>
		<div class="comment_text"><p>The other way to fix this strange behavior is the append a random parameter string to your url in the browser..<br>EG<br>http://yourdomain/youpage.cfm?rand=6 <br>Works for me</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715710">11</a> by Confused
		posted on 9/27/2012 at 5:11 PM
		</div>
		<div class="comment_text"><p>A bit off-topic, but it is CFTEXTAREA related. I have trouble coming up with a javascript that would insert text at the cursor position of a rich-text cftextarea (Eg a value of a select box). This is not a problem with plain text text-areas but it gets trickier in the rich-text versions. I have found a straightforward script that will do what I want for the TinyMCE editor, but I would rather use the built-in coldfusion functionality if possible. I can't figure a solution for the CFTextarea case. Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715714">12</a> by Raymond Camden
		posted on 9/27/2012 at 5:44 PM
		</div>
		<div class="comment_text"><p>About the best I can recommend is getting the object (the RTE object) via ColdFusion.RichText.getEditorObject, and looking through it's interface to see what you can do. Technically this is the FCKEditor so you should be able to check their docs too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713715716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713715716">13</a> by Steve Moore
		posted on 10/4/2012 at 7:19 PM
		</div>
		<div class="comment_text"><p>After upgrading to CF 10 my page using a custom toolbar gave the "doesn't exist" message. After troubleshooting this for 30 minutes I discovered that CF 10 updated the IIS virtual directory location for CFIDE from my web root (d:\inetpub\wwwroot\) to its install location c:\coldfusion10\cfusion\wwwroot\CFIDE. I believe this is new, don't remember CF 9 changing this. Anyway, needed to update the fckconfig.js file in the new location.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3625718904">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ZkHHZgp7de.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3625718904">14</a> by Monique
		posted on 11/21/2017 at 12:28 AM
		</div>
		<div class="comment_text"><p>Hi Ray. Can you recommend a Rich text editor that works well in COldfusion that will allow me to pass a variable as the content? Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_3626487804">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3626487804">15</a> (In reply to <a href="#c_3625718904">#14</a>) by Raymond Camden
		posted on 11/21/2017 at 3:09 PM
		</div>
		<div class="comment_text"><p>Unfortunately, I haven't used a RTE in ages. Or at least not used one that I remember. Back when I used Wordpress, their RTE was pretty good. Not sure if you can use that by itself w/ CF though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3626781842">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ZkHHZgp7de.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3626781842">16</a> (In reply to <a href="#c_3626487804">#15</a>) by Monique
		posted on 11/21/2017 at 6:05 PM
		</div>
		<div class="comment_text"><p>I know. I hadn't used one in a while either. I am using the updated CKeditor and it works fine. Thanks</p></div>
	</div>
</div>
		