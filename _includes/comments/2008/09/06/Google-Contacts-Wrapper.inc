
<div class="comment" id="c_1713685600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685600">1</a> by Sam Clement
		posted on 9/11/2008 at 5:53 AM
		</div>
		<div class="comment_text"><p>Nice stuff, Ray. I've been playing around with the wrapper and it works really well.  The only thing I noticed was that it didn't work with 'Google apps for my domain'.  To get it to work I just added another cfhttpparam (name="accountType" value="HOSTED_OR_GOOGLE") to the cfhttp call in the getAuthCode method on the base.cfc component.  Hope that helps someone.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685598">2</a> by Raymond Camden
		posted on 9/11/2008 at 6:03 AM
		</div>
		<div class="comment_text"><p>Can you file a bug report for that please? I'm going to be applying base.cfc to my Calendar code as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685604">3</a> by Nando
		posted on 10/26/2008 at 10:02 PM
		</div>
		<div class="comment_text"><p>I've been working to extend the component to add a contact. A few details might help someone else.</p><p>First, it took a little fiddling to figure out the correct format to send the http request. Here's what I came up with:</p><p>&lt;cfhttp url="#addContactUrl#" method="post" result="result"&gt;<br>        	&lt;cfhttpparam type="header" name="Authorization" value="GoogleLogin auth=#variables.authcode#"&gt;<br>            &lt;cfhttpparam type="header" name="Content-Type" value="application/atom+xml"&gt;<br>			&lt;cfhttpparam type="body" value="#entry#"&gt;<br>		&lt;/cfhttp&gt;</p><p>Second, if you want to add a contact to a group immediately, you need to add the namespace definition for gContact to the entry tag, like so:</p><p>&lt;atom:entry xmlns:atom='<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2F2005%2FAtom%27%3AsAdZwdMgUGOAd9ClUZTnDBKm52g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/2005/Atom'">http://www.w3.org/2005/Atom'</a> xmlns:gd='<a href="http://disq.us/url?url=http%3A%2F%2Fschemas.google.com%2Fg%2F2005%27%3AmDJsKEXBB2LCjJPkIJffkN-B_fU&amp;cuid=3321886" rel="nofollow noopener" title="http://schemas.google.com/g/2005'">http://schemas.google.com/g...</a> xmlns:gContact='<a href="http://disq.us/url?url=http%3A%2F%2Fschemas.google.com%2Fcontact%2F2008%27%3E%3A2YD81HHQsalgywOFJ3y14GwKZTs&amp;cuid=3321886" rel="nofollow noopener" title="http://schemas.google.com/contact/2008'>">http://schemas.google.com/c...</a></p><p>Nando</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685601">4</a> by Raymond Camden
		posted on 10/27/2008 at 7:34 AM
		</div>
		<div class="comment_text"><p>Nando, do you want to add this to the project?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685588">5</a> by A Newbie
		posted on 1/7/2009 at 1:44 AM
		</div>
		<div class="comment_text"><p>Thanks for the Google contacts. But, honestly, I have no clue what to do with the information retrieved. There are too many structures inside arrays inside structures. If you kindly could show us newbies the way. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685597">6</a> by Raymond Camden
		posted on 1/7/2009 at 4:24 AM
		</div>
		<div class="comment_text"><p>Well, to be honest, all my code does is get you the contacts. How you use it is up to you. Let's say you were building a new social networking site for zombies (DeadLikeMe). You could ask your users to provide Google username and password info, fetch their contacts, and then say, "Hey, shall I email these guys and invite them to join you on our site?"</p><p>As for how to use the data itself - yes, it is a large array of structures - but that just represents all the contact info we have. Addresses, phone numbers, etc. Each structure key should be properly labeled though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685603">7</a> by A Newbie
		posted on 1/7/2009 at 12:16 PM
		</div>
		<div class="comment_text"><p>Thanks for the reply Ray. I really meant just how do I loop over all structures and arrays and save the extracted data  in a database. Or just display in a table in a web page. I am really trying to learn to do both. Regards.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685606">8</a> by Raymond Camden
		posted on 1/7/2009 at 5:43 PM
		</div>
		<div class="comment_text"><p>Oh, for that, I'm going to simply suggest reading the CFML Reference, specifically the struct and array functions. There aren't many, but you will learn when functions are provided to loop over/use structs and arrays.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685605">9</a> by Micah
		posted on 4/7/2009 at 4:29 AM
		</div>
		<div class="comment_text"><p>Any progress with the Add/Edit/Delete features?</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685608">10</a> by Raymond Camden
		posted on 4/7/2009 at 5:24 AM
		</div>
		<div class="comment_text"><p>Zip. Always open to submissions on it.</p></div>
	</div>
</div>
		