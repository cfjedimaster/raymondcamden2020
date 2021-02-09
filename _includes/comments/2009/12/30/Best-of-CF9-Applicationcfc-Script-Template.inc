
<div class="comment" id="c_1713720996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720996">1</a> by Russ S.
		posted on 12/31/2009 at 12:44 AM
		</div>
		<div class="comment_text"><p>Thanks for the review Todd! That must've been a lot of work to check thoroughly. <br>I'm going to try to implement all of your suggestions into the version I have posted on my blog. :)</p><p>For the record, I don't like the idea of using comments to set method attributes. Yes, the method hints are technically attributes, but they don't (er, shouldn't) have a functional purpose. Just seems wrong for working code to be commented out, you know?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720992">2</a> by Steve &amp;aposCutter&amp;apos Blades
		posted on 12/31/2009 at 3:48 AM
		</div>
		<div class="comment_text"><p>As a side note, an example of a scripted Application.cfc has been on my blog since early October:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.cutterscrossing.com%2Findex.cfm%2F2009%2F10%2F8%2FScripting-a-ColdFusion-Application%3AWJTH9YylgZpF_WLuR_mMZyG7voY&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.cutterscrossing.com/index.cfm/2009/10/8/Scripting-a-ColdFusion-Application">http://blog.cutterscrossing...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720997">3</a> by Marko Simic
		posted on 12/31/2009 at 12:29 PM
		</div>
		<div class="comment_text"><p>Totally agree with Russ regarding functional comments. Comment should stay a comment. To quote Todd "I'm a big proponent of consistency and I'd personally prefer choosing one style and sticking with it." (regardless I personally break that rule myself , mostly 'cause of laziness :))))</p><p>What I think would be cool is to merge all 3 publicly (by Steve, Russ and Dan) available app.cfc references into "uber" one... unless some of them already did it.</p><p>Happy New Year</p><p>PS<br>+1 for uppercased scopes</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720998">4</a> by John Barrett
		posted on 10/20/2012 at 10:13 PM
		</div>
		<div class="comment_text"><p>Can I ask if you need to specify the 404.cfm in the on missing template function?<br>public boolean function onMissingTemplate(required string TargetPage) {<br>  include 404./cfm<br>  return true;<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720994">5</a> by Raymond Camden
		posted on 10/20/2012 at 10:52 PM
		</div>
		<div class="comment_text"><p>If you want to show a friendly page, yeah, afaik you need to do the include.</p></div>
	</div>
</div>
		