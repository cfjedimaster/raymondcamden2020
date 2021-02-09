
<div class="comment" id="c_1713622621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622621">1</a> by dave ross
		posted on 11/14/2005 at 9:43 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I think you should post a little more detail in the psuedo-code. The way it's portayed isn't thread-safe. You need to lock and double check the variable, otherwise one request could be using application.myldapquery while another is overwriting it. Something like this:<br>&lt;cfif not structKeyExists(application, "myldapquery")&gt;<br>   &lt;cflock name="LDAPQueryLock" timeout="100"&gt;<br>      &lt;cfif not structKeyExists(application, "myldapquery")&gt;<br>        run the ldap query and name it application.myldapquery<br>      &lt;/cfif&gt;<br>   &lt;/cflock&gt;<br>&lt;/cfif&gt;</p><p>Regardless, my response would have been "don't use CFLDAP". We've long tossed it in favor of more performant java-based solutions (which are easily programmed in CFML).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622623">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622623">2</a> by Raymond Camden
		posted on 11/14/2005 at 9:49 PM
		</div>
		<div class="comment_text"><p>I left the locking out on purpose, since in most cases, it won't be neded. Yes, N threads may run it, but 9 times out of 10 it won't matter. It will be a bit less effecient, but will end up with the same result. (Unless you are doing something funky like recording the creation time, and even then you may not care if the creation time is the last of N threads to make it.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622622">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622622">3</a> by Michael Dawson
		posted on 11/16/2005 at 4:49 AM
		</div>
		<div class="comment_text"><p>Dave, would you mind sharing some URLs or information on the java-built LDAP connectivity?</p><p>I am really interested in any examples/references that interact with group membership.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622625">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622625">4</a> by Dave Ross
		posted on 11/21/2005 at 11:33 PM
		</div>
		<div class="comment_text"><p>Michael,</p><p>I've made a couple posts about LDAP, specifically JLDAP, and there is some code in there that should help.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.d-ross.org%2Findex.cfm%3Fobjectid%3D9C65EF0F-508B-E116-6F851C474448E08B%3A8D554ZdhnBtk-9PXqzhZcRTX_gw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.d-ross.org/index.cfm?objectid=9C65EF0F-508B-E116-6F851C474448E08B">http://www.d-ross.org/index...</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.d-ross.org%2Findex.cfm%3Fobjectid%3D9C65EEF0-508B-E116-6F30CA79F5BFDE07%3AI80ok4QsUsGU8UaLYIxz0C0QVlc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.d-ross.org/index.cfm?objectid=9C65EEF0-508B-E116-6F30CA79F5BFDE07">http://www.d-ross.org/index...</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.d-ross.org%2Findex.cfm%3Fobjectid%3D9C65ED79-508B-E116-6F81AF8F75FB40AD%3AzE8lzpktJQass3oPXwwSaD3IyB0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.d-ross.org/index.cfm?objectid=9C65ED79-508B-E116-6F81AF8F75FB40AD">http://www.d-ross.org/index...</a></p><p>JLDAP is really good for dealing with group memberships because you can access multi-valued attributes (like group membership) as an array, unlike CFMX where you get a long ugly string.</p><p>Hope that helps! Feel free to ask if you get stuck or have questions.</p></div>
	</div>
</div>
		