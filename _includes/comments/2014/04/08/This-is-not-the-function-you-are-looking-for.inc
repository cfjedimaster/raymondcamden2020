
<div class="comment" id="c_1714082591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082591">1</a> by Doug
		posted on 4/8/2014 at 5:35 PM
		</div>
		<div class="comment_text"><p>Interesting post. I just did a scan of one of my larger projects, and found I hadn't used listContains() once. listValueCount(), however, is used extensively.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082610">2</a> by Eric Cobb
		posted on 4/8/2014 at 8:04 PM
		</div>
		<div class="comment_text"><p>Yeah, I remember running into this a while back:  <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfgears.com%2Findex.cfm%2F2009%2F12%2F23%2FCFML-101--Fun-with-Lists%3AfbFJg_POVC-XR3ovhiHKThf_Jrg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfgears.com/index.cfm/2009/12/23/CFML-101--Fun-with-Lists">http://www.cfgears.com/inde...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082606">3</a> by MikeZ
		posted on 4/8/2014 at 9:29 PM
		</div>
		<div class="comment_text"><p>True, I usually pick one of the listFind() methods even when I don't really have a use for the specific index that's returned.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082593">
	<div>
		<img src="https://disqus.com/api/users/avatars/nandobreiter.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082593">4</a> by Nando Breiter
		posted on 4/9/2014 at 12:28 PM
		</div>
		<div class="comment_text"><p>I've used listContains to very good effect with a permissions system in FW1, allowing either access to the entire section or access to only a specific item. I've found it very useful in this case.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082595">5</a> by Raymond Camden
		posted on 4/9/2014 at 3:59 PM
		</div>
		<div class="comment_text"><p>Nando, I'd like to hear more. Can you share a simple example?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082596">
	<div>
		<img src="https://disqus.com/api/users/avatars/nandobreiter.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082596">6</a> by Nando Breiter
		posted on 4/11/2014 at 3:53 PM
		</div>
		<div class="comment_text"><p>Years ago, many, I read an article by Hal Helms that advocated using permission keys rather than roles for permissions in an app. The difference is that a set of permission keys are given to a user that define which areas of the app they are allowed to use, or how they are allowed to use them, just as we have keys to unlock doors in the physical world. It makes permissions both more flexible and granular if needed. Users are given only the keys they need, and keys can be added to the system at any time.</p><p>I use a list to store permission keys, because it's easy to store in the database, it's dead simple to translate a set of checkboxes that define the permission keys in an app to a list - simply by giving them all the same name, and because listContains() makes the permission key implementation as a list even more powerful.</p><p>I use FW/1, but the approach would integrate well with any framework. I create my permission keys to match FW/1's section.item convention. So if I want to give a user permissions to edit employees, I check the corresponding checkbox that gives them the key emp.edit. If I want a user to only be able to view employees, they get the permission key emp.view. As you can imagine, when a User is persisted, the list of permission keys is stored in the User database record, and when a User logs in, the list of keys is stored in session scope.</p><p>Both of my sample users need access to the Employee section, so I wrap the navigational element for the Employee section with the simple</p><p>&lt;cfif ListContains(session.permission,"emp.")&gt;<br>	&lt;a href="?#framework.action#=emp.list"&gt;#rt('Employees')#&lt;/a&gt;<br>&lt;/cfif&gt;</p><p>and the nav for the employee section is rendered for both.</p><p>If a User does not have a single permission to the employee section, the navigational element is hidden and the before method in the controller prevents any access.</p><p>For more granular control over a specific key, I use listFind(session.permission,"emp.edit").</p><p>If I want to move toward role-based security, for "Editors" as a contrived example, I could use ListContains(session.permission,".edit")</p><p>As I said, I've found ListContains() to be very useful in this context.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714082597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714082597">7</a> by Raymond Camden
		posted on 4/11/2014 at 8:15 PM
		</div>
		<div class="comment_text"><p>Cool - thanks for sharing this. I remember that article actually.</p></div>
	</div>
</div>
		