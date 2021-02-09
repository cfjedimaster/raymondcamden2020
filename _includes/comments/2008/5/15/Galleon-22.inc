
<div class="comment" id="c_1713681040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681040">1</a> by FALCONSEYE
		posted on 7/10/2009 at 12:38 AM
		</div>
		<div class="comment_text"><p>Having issues with application.permission.allowed(application.rights.CANVIEW, url.forumid, request.udf.getGroups())</p><p>When I try to login to the admin using admin/admin, I keep getting dumped to http://localhost:8500/galleon2/index.cfm with a message showing  "Sorry, but there are no conferences available."</p><p>Right after I created two conferences, this started to happen. application.rights.CANVIEW is some alphanumeric char (7EA5070B-9774-E11E-96E727122408C03C)</p><p>any recommendations?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681042">2</a> by Raymond Camden
		posted on 7/10/2009 at 3:48 PM
		</div>
		<div class="comment_text"><p>So to be clear, when you had one conference, it worked?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681025">3</a> by FALCONSEYE
		posted on 7/10/2009 at 6:13 PM
		</div>
		<div class="comment_text"><p>I was creating a conference in the admin. Then, I wanted to check out how it looked like. Once I signed out, it kept throwing that message. <br>If I get rid of this line, in \forumFolder\index.cfm:</p><p>&lt;cfset data = application.permission.filter(query=data, groups=request.udf.getGroups(), right=application.rights.CANVIEW)&gt;</p><p>I can see the conference. Ofcourse, this defeats the purpose.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681039">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681039">4</a> by FALCONSEYE
		posted on 7/10/2009 at 6:14 PM
		</div>
		<div class="comment_text"><p>Sorry, the short answer was no.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681044">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681044">5</a> by FALCONSEYE
		posted on 7/10/2009 at 7:00 PM
		</div>
		<div class="comment_text"><p>Just a quick note. search.cfm, line 157: has the following<br>window.onload = function() {document.getElementById("searchForm").searchterms.focus();}</p><p>which throws a javascript error. You might want to add id="searchForm" on line 53.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681047">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681047">6</a> by Raymond Camden
		posted on 7/11/2009 at 11:41 PM
		</div>
		<div class="comment_text"><p>Odd - so question, when you edited your conferences, did you get READ access to "Everyone"? If you did not explicitly select it, then it won't be visible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681048">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681048">7</a> by Raymond Camden
		posted on 7/11/2009 at 11:44 PM
		</div>
		<div class="comment_text"><p>Fixed the JavaScript issue. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681046">8</a> by FALCONSEYE
		posted on 7/14/2009 at 11:13 PM
		</div>
		<div class="comment_text"><p>I played with that too. If the access was set to admin and you logged in as an admin, shouldn't you see the conference?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681052">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681052">9</a> by Raymond Camden
		posted on 7/15/2009 at 1:00 AM
		</div>
		<div class="comment_text"><p>Well, I'm talking groups, not users here. I believe I called it Forum Administrators. They should have Read access to the conference. Do they?</p></div>
	</div>
</div>
		