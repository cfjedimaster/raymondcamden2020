
<div class="comment" id="c_1713725542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725542">1</a> by MikeG
		posted on 7/22/2010 at 2:39 AM
		</div>
		<div class="comment_text"><p>Can you explain why it matters if numbers are quoted or not?  When I handroll JSON output I quote everything.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725553">2</a> by Judah McAuley
		posted on 7/22/2010 at 2:51 AM
		</div>
		<div class="comment_text"><p>It matters because JSON has data types and Adobe isn't adhering to them. This becomes more of an issue when you are exchanging data with other systems that use JSON to hydrate an object with types in it. If it is expecting an integer and you send it "10" then you aren't sending it an integer, you are sending it a string. This will cause a type mismatch and it will blow up.</p><p>I haven't tested it in CF9, but CF hasn't dealt with null values well in JSON. When I have a .Net system send me a JSON packet and it has a key with a null value, it will come through correctly as key: null  in the JSON packet. DeserializeJSON won't know what to do with it, however, since CF doesn't really have a concept of null. Consequently, I have to go through, treat the incoming JSON as a string, replace all instances of null with '' and then deserialize it. Fun fun.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725552">3</a> by David Hammond
		posted on 7/23/2010 at 4:13 AM
		</div>
		<div class="comment_text"><p>I'm not sure where I stand on this (though I voted for the bug yesterday).  At least making everything a string makes it consistent and predictable -- though I sympathize with people for whom this breaks code.</p><p>I haven't upgraded to 9.0.1, but I wonder if the changes affect the way booleans are treated as well.  In 9.0 the following produces "true", which may or may not be what you want:</p><p>#serializeJSON("Yes")#</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725554">4</a> by Awdhesh
		posted on 7/23/2010 at 10:13 AM
		</div>
		<div class="comment_text"><p>Keeping the Backward compatibility issue in mind,  we have provided a JVM property "json.numberasdouble". By setting this to true, one can go back to old behavior where a number or boolean value will not get quoted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725557">5</a> by Elliott Sprehn
		posted on 7/26/2010 at 10:58 AM
		</div>
		<div class="comment_text"><p>The reason for this is because CF's old behavior was counter intuitive and destructive. Not only would it truncate "007" potentially removing important formatting, it would also destroy certain numbers.</p><p>In CF do x = "10000055555001111111193299".</p><p>That number can't be represented precisely in an IEEE754 double so if CF converted it to a floating point number and then sent it to JS you'd get the wrong number on the other side. There was no way around this before, CF always converted the numbers (which was wrong). Serial numbers are a quick way to get numbers that are of this length.</p><p>You can see this behavior in JS if you do:</p><p>10000055555001111111193299-10000055555001111111193290</p><p>The result is zero, not 9.</p><p>JS has very loose typing and quoted numbers should be fine. If your code is expecting a number using json.value-0 is the best way to go, though Number(json.value) works too. parseInt() has bad behavior if you pass it the wrong value ("5+x" becomes 5) and it's also quite slow, and would be noticeable on a large data set.</p><p>You could also get bitten if a user passed a numeric value in previous versions of CF. If a user entered "5" in a form for the username and in JS you had code that did json.username.toUpperCase() your code would suddenly fail because CF returned a number (instead of a string as you'd expect from most input). We got bitten by this on several occasions and had to add String() around the JSON.</p><p>The new behavior removes all those time bomb bugs from existing code bases and makes the result of serializeJSON() safe and predictable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725556">6</a> by johans
		posted on 7/27/2010 at 3:26 AM
		</div>
		<div class="comment_text"><p>Ray - glad to see you agree with my original complaint from July 13th. From what I've seen since everything is returned as strings. Also seeing things like returning a struct with two integers and simply incrementing one (using ++ operator) before returning then the incremented value has decimal .0 added.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725555">7</a> by johans
		posted on 7/27/2010 at 3:38 AM
		</div>
		<div class="comment_text"><p>Actually an important point I forgot to mention is I'm not using serializeJSON() - in my case I'm using CFCs with returnformat="json". I'm not sure if CF uses the same serializeJSON code to handle returning CFC data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725560">8</a> by awdhesh
		posted on 7/27/2010 at 8:51 AM
		</div>
		<div class="comment_text"><p>@Johans: CF uses the same code path as serailzeJson()  to serialize the data in case one uses CFCs with returnformat="json".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725559">9</a> by Dave
		posted on 8/27/2010 at 12:10 AM
		</div>
		<div class="comment_text"><p>When I clicked the Bug link, it's not found in Adobe's database. What gives?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725558">10</a> by Raymond Camden
		posted on 8/27/2010 at 12:15 AM
		</div>
		<div class="comment_text"><p>I think 901 bugs are hidden now because the tracker is still in "901 isn't released yet" mode.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725561">11</a> by johans
		posted on 8/27/2010 at 12:53 AM
		</div>
		<div class="comment_text"><p>I did receive an email from Adobe on Aug 11:</p><p>Fixed In: ColdFusion 9.0.1 ,HotFix, Build 274873</p><p>Description:  The patch notes state that  the int to float bug has been fixed. It says that 10 will turn to 10, 012 will turn to "012" (which is fine) and 10.25 will turn to 10.25 in JSON representation. However all numbers are just turned to strings.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725562">12</a> by Raymond Camden
		posted on 8/31/2010 at 10:20 PM
		</div>
		<div class="comment_text"><p>Get the hot fix now:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fkb2.adobe.com%2Fcps%2F862%2Fcpsid_86263.html%3AfVCnjdlRfdjjcivbOALhaPAnQm4&amp;cuid=3321886" rel="nofollow noopener" title="http://kb2.adobe.com/cps/862/cpsid_86263.html">http://kb2.adobe.com/cps/86...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713725545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713725545">13</a> by David McGuigan
		posted on 2/11/2011 at 2:41 AM
		</div>
		<div class="comment_text"><p>Holy crap! We finally had occasion to jump to .0.1 on our server and it broke SO MANY AJAX INTERFACES on SO MANY OF OUR PRODUCTION SITES. Thank god for the hotfix. That was traumatic.</p></div>
	</div>
</div>
		