
<div class="comment" id="c_1713710198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710198">1</a> by Will Wilson
		posted on 11/26/2008 at 2:04 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Do you know how to reset transfers cache? I know you mentioned it does it automatically after an Insert or Update but when I make a modification to my decorator it doesn't pick up the change. Only way I've found so far is to reboot CF</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710206">2</a> by Raymond Camden
		posted on 11/26/2008 at 5:00 PM
		</div>
		<div class="comment_text"><p>If you use my application, then you have to reload Transfer. Just add ?reinit=1 to the URL. This will rerun onApplicationStart.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710212">3</a> by Francois Levesque
		posted on 11/26/2008 at 5:09 PM
		</div>
		<div class="comment_text"><p>@Will,</p><p>Are you using an IoC (ColdSpring, LigthWire) or MVC (ColdBox, Model-Glue, etc) that could be caching your transfer objects?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710205">4</a> by Nathan Mische
		posted on 11/26/2008 at 6:51 PM
		</div>
		<div class="comment_text"><p>In the delete and save examples from Sean, is there any reason why delete uses this and save use getTransferObject()?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710214">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710214">5</a> by Will Wilson
		posted on 11/28/2008 at 4:10 AM
		</div>
		<div class="comment_text"><p>oh lol its as easy as that! thanks :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710215">6</a> by Raymond Camden
		posted on 11/28/2008 at 8:22 PM
		</div>
		<div class="comment_text"><p>You know I'm not sure. Let me ask him.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710216">7</a> by Sean Corfield
		posted on 11/28/2008 at 8:48 PM
		</div>
		<div class="comment_text"><p>They were written at different times and I was probably writing getTransferObject() a lot when I wrote save() because I'd been working in decorators all day long. save() could just as easily use THIS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710225">8</a> by Dan O&amp;aposKeefe
		posted on 12/15/2008 at 4:24 AM
		</div>
		<div class="comment_text"><p>But what do these 2 functions do differently than the native save() and delete() funtions of the TO?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710226">9</a> by Raymond Camden
		posted on 12/15/2008 at 5:14 AM
		</div>
		<div class="comment_text"><p>save and delete() don't exist in the TO.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdocs.transfer-orm.com%2Fhtml%2Ftransferapi%2Ftransfer%2Fcom%2FTransferObject.html%3AkxkgZ8uk1IuixGBNx19F2PSKe2s&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.transfer-orm.com/html/transferapi/transfer/com/TransferObject.html">http://docs.transfer-orm.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710199">10</a> by Dan O&amp;aposKeefe
		posted on 12/15/2008 at 5:39 AM
		</div>
		<div class="comment_text"><p>So the only difference is:</p><p>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fthirdemp.save%3AckqzdKA9okxUG1fcgJoDuRedxyM&amp;cuid=3321886" rel="nofollow noopener" title="thirdemp.save">thirdemp.save</a>()&gt;</p><p>versus:</p><p>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Ft.save%3AaRcRg2uZ7SmqeQYNwxlV-pepmok&amp;cuid=3321886" rel="nofollow noopener" title="t.save">t.save</a>("thirdemp")&gt;</p><p>if t represents getTransfer()</p><p>??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710204">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710204">11</a> by Raymond Camden
		posted on 12/15/2008 at 5:44 AM
		</div>
		<div class="comment_text"><p>Yep. It isn't a huge thing, but for me, using <a href="http://disq.us/url?url=http%3A%2F%2Fob.save%3AdkJaIAlE1TsWIqnIVGgu65V3tXU&amp;cuid=3321886" rel="nofollow noopener" title="ob.save">ob.save</a>() felt more natural, and it was less typing as well. t would normally be in RAM so you would have <a href="http://disq.us/url?url=http%3A%2F%2Fapplication.t.save%3AUvplmH3-VS9ZCe8T6iXTQSniAOw&amp;cuid=3321886" rel="nofollow noopener" title="application.t.save">application.t.save</a>(ob)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710209">12</a> by Dan O&amp;aposKeefe
		posted on 12/15/2008 at 7:02 PM
		</div>
		<div class="comment_text"><p>Thanks, just wanted to make sure I was not missing something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710211">13</a> by Scott Brady
		posted on 8/18/2009 at 10:12 PM
		</div>
		<div class="comment_text"><p>Ray, you mentioned "Sean actually built this into a separate CFC called a BaseDecorator that the other decorator's extended."  I'm trying to get that to work, but it's not.  I have a BaseDecorator that extends "transfer.com.TransferDecorator" and then my object's decorator extends that BaseDecorator. Is that the correct implementation?</p><p>When I do that, I'm getting "Element TRANSFEROBJECT is undefined in INSTANCE. " on line 52 of \transfer\com\TransferDecorator.cfc</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710207">14</a> by Raymond Camden
		posted on 8/18/2009 at 10:15 PM
		</div>
		<div class="comment_text"><p>That sounds right to me - can you use pastebin and share the code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710208">15</a> by Scott Brady
		posted on 8/18/2009 at 11:44 PM
		</div>
		<div class="comment_text"><p>Actually, I found the problem.  I had an init() function in my BaseDecorator, which was, presumably, overwriting the init() in the TransferDecorator component.  It's fixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710223">16</a> by Raymond Camden
		posted on 8/18/2009 at 11:45 PM
		</div>
		<div class="comment_text"><p>The init() in your CFC could call the init() in Transfer decorator with the Super scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710221">17</a> by Scott Brady
		posted on 8/18/2009 at 11:55 PM
		</div>
		<div class="comment_text"><p>True. But the init's not doing anything anyway (it's kind of our default init() ) :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710222">18</a> by Drew
		posted on 9/10/2009 at 8:37 PM
		</div>
		<div class="comment_text"><p>I use a generic table structure for my database where every table has<br>CreationDate<br>CreatedBy</p><p>Is there a way I can globally set a custom method in transfer to default to a specified string for the CreatedBy field?  I know I can do this via decorators, but didn't want to write a decorator for each and every table I'm using to achieve this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710218">19</a> by Drew
		posted on 9/10/2009 at 8:44 PM
		</div>
		<div class="comment_text"><p>Looks like my google skills are slacking today, I found my answer here:<br><a href="http://disq.us/url?url=http%3A%2F%2Ftracker.transfer-orm.com%2Fissue.cfm%3Fp%3D89977683-A728-9CD3-ABD9545A91734422%26i%3DA93DF4B9-0E7C-200B-C5D78FDE55391918%3ABrIscDu28YYHjkwl-xFnuQZT7uU&amp;cuid=3321886" rel="nofollow noopener" title="http://tracker.transfer-orm.com/issue.cfm?p=89977683-A728-9CD3-ABD9545A91734422&amp;i=A93DF4B9-0E7C-200B-C5D78FDE55391918">http://tracker.transfer-orm...</a><br>The answer being no, you can't do this</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713710220">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713710220">20</a> by Scott Brady
		posted on 9/10/2009 at 8:46 PM
		</div>
		<div class="comment_text"><p>What we did (which is something Ray suggested ... somewhere) is we have a BaseDecorator that every decorator extends.  The BaseDecorator then has the config options for setting those standard defaults.</p><p>Our table definitions use either their own decorator or they just use the BaseDecorator as the decorator (so you don't have to write a new Decorator for each table)</p></div>
	</div>
</div>
		