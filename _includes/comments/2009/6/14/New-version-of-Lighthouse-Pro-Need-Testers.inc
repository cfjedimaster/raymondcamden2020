
<div class="comment" id="c_1713716073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716073">1</a> by zac spitzer
		posted on 6/15/2009 at 12:03 PM
		</div>
		<div class="comment_text"><p>love the change for the message syntax!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716057">2</a> by Prasanth
		posted on 6/16/2009 at 6:04 AM
		</div>
		<div class="comment_text"><p>Good to see an app in MG 3. <br>In case of change in message listeners, so can we create message listeners like this and call by message and function name ?</p><p>&lt;message-listener message="foo" function="foo" /&gt;<br>&lt;message-listener message="foo" function="goo" /&gt;<br>&lt;message-listener message="foo" function="zoo" /&gt;</p><p>We usually give one message for calling a function and the message and function name would probably be the same.</p><p>I think I did not understand the idea here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716061">3</a> by Raymond Camden
		posted on 6/16/2009 at 7:18 AM
		</div>
		<div class="comment_text"><p>I'm sorry - I truly don't get your question here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716066">4</a> by Prasanth
		posted on 6/16/2009 at 12:33 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>I read that wrong first time. Now I got it. <br>If the name of message and function name are same, we could use XMLModuleLocator so that we do not have to specify the function name separately. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716074">5</a> by Raymond Camden
		posted on 6/16/2009 at 5:20 PM
		</div>
		<div class="comment_text"><p>Err, no, you aren't using XMLModuleLocator. Model-Glue is using it. I think you are overthinking this. ;)</p><p>You either include a function, or don't. If you don't include the function, MG will assume you mean the same function value as the message value.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716072">6</a> by John Allen
		posted on 6/18/2009 at 10:25 PM
		</div>
		<div class="comment_text"><p>Should we add bug reports to this blog entry as comments?</p><p>Thanks.</p><p>ja</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716068">7</a> by Raymond Camden
		posted on 6/18/2009 at 10:26 PM
		</div>
		<div class="comment_text"><p>Yes, unless it involves mail support. I've got it 50% done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716075">8</a> by John Allen
		posted on 6/18/2009 at 10:59 PM
		</div>
		<div class="comment_text"><p>Thanks Ray.</p><p>views/pages/projects.cfm <br>line 16 <br>inside cf_datacol tag<br>the data attribute is pointing to an old file?</p><p>Should it point to #root#page.viewissues&amp;id=$id$ ??</p><p>Thanks again.<br>you rule.<br>ja</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716076">9</a> by Raymond Camden
		posted on 6/20/2009 at 5:11 AM
		</div>
		<div class="comment_text"><p>Good catch. Fixed. As a quick FYI, thanks to Gary Funk, I have a good email server to test with. I've done testing with messages w/ no attachments, and that works. Once I test w/ attachments, I'll be ready to release 'officially'.</p></div>
	</div>
</div>
		