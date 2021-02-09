
<div class="comment" id="c_1713615036">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615036">1</a> by Doug Cain
		posted on 11/19/2004 at 7:06 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I am currently creating a nested structure in the form of a tree so I can add and remove nodes dynamically. structfindkey seems to be the thing to figure out which node i want to add to and all is well thus far.</p><p>But I can't for the life of me figure out how to use the  path string returned in the array from structFindKey. I want to insert a new node structure at this point but can't figure out the syntax required to use the path string.</p><p>So far I have come up with something along the lines of:</p><p>&amp;lt;cfset aNode = structfindkey(stTree,url.node)&amp;gt;<br>&amp;lt;cfif not arrayisempty(aNode)&amp;gt;<br>&amp;lt;cfset temp = createuuid()&amp;gt;<br>&amp;lt;cfset "stTree#aNode[1].path#.children[temp]"=structnew()&amp;gt;<br>&amp;lt;/cfif&amp;gt;</p><p>This fails saying that stTree.517C30E2E000BA099A8EF6851B588090.children[518BD777-E000-BA09-9A2BC429BD67D23A]<br>is not a valid variable name</p><p>stTree.517C30E2E000BA099A8EF6851B588090.children has already been created as the root of my tree and the root of my structure.</p><p>Any ideas would be greatfully accepted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615035">2</a> by Doug Cain
		posted on 11/19/2004 at 7:18 PM
		</div>
		<div class="comment_text"><p>As ever managed to answer my own question:</p><p>StructGet is the key, pass in the path you get from structKeyFind and it will return you a pointer to the bit of the structure you are looking for.</p><p>Not obvious that these things are returning pointers to the original structure somethimes</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615038">3</a> by Jeff
		posted on 7/30/2008 at 4:56 AM
		</div>
		<div class="comment_text"><p>Is it possible to easily combine  structFindValue and structFindKey?</p><p>For example, take this struct<br>name|bob<br>hair|brown<br>name|steve<br>hair|red<br>name|bill<br>hair|black<br>name|red<br>hair|black</p><p>For this case, if you used structFindValue(struct, "red) it would return both a reference to the person red, and steve's hair color!</p><p>Is there a way to combine StructFindvalue efficiently with StructFindKey() so we could say find red, but only for the key of hair?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615041">4</a> by Raymond Camden
		posted on 7/30/2008 at 5:14 AM
		</div>
		<div class="comment_text"><p>Not that I know of - but don't forget that the path is returned for the results of structFindValue, so you can filter on the paths the match what you want.</p></div>
	</div>
</div>
		