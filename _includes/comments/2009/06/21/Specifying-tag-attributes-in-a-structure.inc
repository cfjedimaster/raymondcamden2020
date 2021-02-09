
<div class="comment" id="c_1713716330">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716330">1</a> by todd sharp
		posted on 6/22/2009 at 6:41 AM
		</div>
		<div class="comment_text"><p>I use it a bit, but not for the purpose you're demonstrating.  Instead I use it as a more elegant way to handle conditional attributes.  Example:</p><p>&lt;cfset m = structNew() /&gt;<br>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fm.to%3AZEQX31HUhChV7WVhRQYdhTCF1rU&amp;cuid=3321886" rel="nofollow noopener" title="m.to">m.to</a> = "address@mail.com" /&gt;<br>&lt;cfif iWantACopy&gt;<br>   &lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fm.cc%3Aj8rZL4jhE-JyB_Ya-ziQaot08sQ&amp;cuid=3321886" rel="nofollow noopener" title="m.cc">m.cc</a> = "me@my.com" /&gt;<br>&lt;/cfif&gt;<br>&lt;cfmail attributeCollection="#m#"&gt;ray is a jedi&lt;/cfmail&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716342">2</a> by Paul
		posted on 6/22/2009 at 6:58 AM
		</div>
		<div class="comment_text"><p>Handy for those of us using shared hosting, didn't know about it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716341">3</a> by Raymond Camden
		posted on 6/22/2009 at 6:58 AM
		</div>
		<div class="comment_text"><p>Ah yeah, that's a good one. You could image:</p><p>&lt;cfif devServer&gt;<br>cc to me<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716343">4</a> by Dale Fraser
		posted on 6/22/2009 at 8:46 AM
		</div>
		<div class="comment_text"><p>You can already control the mail settings at a server level in Administrator.</p><p>We do this always, and never specify mail server etc on the &lt;CFMAIL tag</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716344">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716344">5</a> by salvatore fusto
		posted on 6/22/2009 at 11:30 AM
		</div>
		<div class="comment_text"><p>i'm used to enclose the cfmail tag in a cfc, init'ed with some attributes whose default values are the dafaults and call a sendmail(...) method to send emails.<br>salvatore</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716347">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716347">6</a> by Jody Fitzpatrick
		posted on 6/22/2009 at 2:22 PM
		</div>
		<div class="comment_text"><p>Hey Ray</p><p>I have a question about SoZo Hosting if you know anything about them.</p><p>1.) Are the reliable?<br>2.) Do you think they can support 10,000+ active users at the same time?</p><p>I assume that you would recommend them being that you have a banner linking to their site.</p><p>If you are not sure it's okay... Just wondering, and once I order I will make sure I click on your banner so you can get the sale lead... you taught me a lot an really helped me with the auto refresh div.</p><p>P.S</p><p>Could your Captcha get any simplier?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716348">7</a> by Robert Haddan
		posted on 6/22/2009 at 7:22 PM
		</div>
		<div class="comment_text"><p>I use attribute collections extensively so that I can call tags via cfscript that don't have native cfscript support. Lately I've been mixing a lot of CF functionality with Java functionality, so being able to write everything in cfscript makes my code a lot easier to read.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716346">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716346">8</a> by Steven Esser
		posted on 6/22/2009 at 7:33 PM
		</div>
		<div class="comment_text"><p>I guess it can be handy at times to not have to declare the datasource at all times, but I also know of applications where you rather want to keep that option: multiple databases, multiple datasources!<br>Happens from time to time to my applications that there is need to use two datasources. Then I suppose that you will have to use the datasource argument at all cfqueries.</p><p>For cfmail I don't make use of the server settings as I have set that on server level. I just have to keep specifying from and to's etc but I suppose you could write an easy function that checks for debug level or something so that I receive the message instead of the emailaddress meant for the application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716345">9</a> by todd sharp
		posted on 6/22/2009 at 7:50 PM
		</div>
		<div class="comment_text"><p>@Steven:</p><p>As it's been said, the default datasource (this.datasource) can be overridden at the tag level.  The reason they added this feature is for ORM (Hibernate) integration.  There needed to be a way for CF to know which datasource it was dealing with behind the scenes, so this.datasource was added to specify a default datasource.</p><p>(Per Adam Lehman at our UG tour meeting last week)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716349">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716349">10</a> by Steven Esser
		posted on 6/22/2009 at 8:51 PM
		</div>
		<div class="comment_text"><p>@todd sharp: Can ORM's such as Hibernate and Transfer not work with multiple datasources? Or was it just a generally 'wanted' feature in this case.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716352">11</a> by todd sharp
		posted on 6/22/2009 at 9:13 PM
		</div>
		<div class="comment_text"><p>@Steven - To be honest, I'm not sure the answer to that.  Maybe Ray knows - he's travelling today if I remember correctly so let's see what he says later.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716351">12</a> by Raymond Camden
		posted on 6/22/2009 at 11:26 PM
		</div>
		<div class="comment_text"><p>Afaik, Transfer is one DSN only. Not sure about Hibernate. To be honest, this doesn't concern me too much. In the 15 years I've been in dev, I think I've had 2 clients who needed multiple, and even then, the second one was used maybe 10% of the time, so this new CF9 feature will still be pretty useful in cases where you might have multiple DSNs in play.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716350">13</a> by Raymond Camden
		posted on 6/23/2009 at 12:06 AM
		</div>
		<div class="comment_text"><p>Jody, this is a bit off topic. Can you ping me directly via my contact form?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716332">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716332">14</a> by Sean Corfield
		posted on 6/23/2009 at 6:25 AM
		</div>
		<div class="comment_text"><p>@Steven, ORMs operate on a single data source because the syntax tends to be:</p><p>obj = orm.load(objectID);</p><p>... do stuff to obj ...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fobj.save%3ABG3Mcomx11ZtUgzkXIqOWi1BEDg&amp;cuid=3321886" rel="nofollow noopener" title="obj.save">obj.save</a>(); // or <a href="http://disq.us/url?url=http%3A%2F%2Form.save%3A7k597fmhp2iSZBXQQUZUeKcFIRg&amp;cuid=3321886" rel="nofollow noopener" title="orm.save">orm.save</a>(obj);</p><p>So the data source is bound into the ORM essentially at initialization time.</p><p>With Transfer, you can have multiple Transfer factory instances, one per data source, if you want but, like Ray says, most applications have one main transactional data source and perhaps a separate reporting data source (for which you would not use ORM).</p><p>I suspect it would make the Hibernate integration more difficult to use if there had to be some way to have separate instances per data source. Based on what Adobe has shown of Hibernate integration, it looks like they've spent a lot of time on making it very easy to use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716333">15</a> by Gary Funk
		posted on 6/23/2009 at 6:39 AM
		</div>
		<div class="comment_text"><p>I think only the government uses more than one datasource. In my office, our main CF server connects to two MySQL servers and one DB2 server on an AS400, and one other datasource on our FECS server. The two main sources are the DR2 and one of the MySQL servers. That makes up about 85% with the DB2 coming in at about 35%.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716336">16</a> by todd sharp
		posted on 6/23/2009 at 6:49 AM
		</div>
		<div class="comment_text"><p>Is that liberal math?  85%+35% != 100%....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716337">17</a> by Gary Funk
		posted on 6/23/2009 at 8:28 AM
		</div>
		<div class="comment_text"><p>No, of the 85%, 35% is DB2</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716339">18</a> by todd sharp
		posted on 6/23/2009 at 4:52 PM
		</div>
		<div class="comment_text"><p>@Gary - It was a joke ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713716338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713716338">19</a> by Gary Funk
		posted on 6/23/2009 at 5:20 PM
		</div>
		<div class="comment_text"><p>You're telling me. All these servers and connections. Just so we can know when it's time to go to lunch and take our breaks.</p></div>
	</div>
</div>
		