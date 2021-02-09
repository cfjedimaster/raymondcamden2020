
<div class="comment" id="c_1713679137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679137">1</a> by James Allen
		posted on 4/4/2008 at 2:22 PM
		</div>
		<div class="comment_text"><p>I'll definetely keep this in mind now that it's available. I love the ability to configure custom params but only have one call of the actual CF tag. Before it was a case of either having a default variable set or lots of silly CFIF's and multiple tag calls.</p><p>I use attributeCollection quite a lot in my Services and Gateways so this will fit nicely into the arsenal of code options. Quite a flexible little feature.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679126">2</a> by Shimju David
		posted on 4/4/2008 at 3:36 PM
		</div>
		<div class="comment_text"><p>Apparently, don't see any use of custom attribute for me. But Ray, thanks for noticing me the ability to use  attributeCollection to ColdFusion built-in tags which was unknown to me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679136">3</a> by Ben Davies
		posted on 4/4/2008 at 3:58 PM
		</div>
		<div class="comment_text"><p>I can't think of any use cases off the top of my head. The original feature is great, since sometimes you don't know in advance if a particular attribute will be needed, which, as James and yourself have pointed out, can result in some silly IF statements.</p><p>Being able to pass in arbitrary attributes strikes me as a bit dangerous though. For example I always misspell variable 'varaible' when I type - and when I do it is nice to know that I did!</p><p>Can you specify an attribute AND include an argumentCollection struct? If so, if you repeat an argument name, which takes precedence?</p><p>I am subscribing to see if anyone comes up with any interesting use cases.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679145">4</a> by Raymond Camden
		posted on 4/4/2008 at 4:23 PM
		</div>
		<div class="comment_text"><p>@Ben- No, unlike custom tags, it has to be all or nothing (afaik, haven't had coffee yet).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679143">5</a> by Jason Delmore
		posted on 4/4/2008 at 5:20 PM
		</div>
		<div class="comment_text"><p>You CAN specify a collection and an Attribute and the attribute on the tag wins! :)</p><p>So...<br>&lt;cfset myquerysettings.datasource= "MyMySQLDB"/&gt;<br>&lt;cfset myquerysettings.username = "foo"/&gt;<br>&lt;cfset myquerysettings.password= "bar"/&gt;<br>&lt;cfset myquerysettings.mypersonalattribute= "I like MySQL"/&gt;</p><p>&lt;cfquery attributeCollection="MyMySQLDB" password="password2"&gt;<br>  Select * from users<br>&lt;/cfquery&gt;</p><p>I have been the big proponent of this little feature because it allows CF tags to behave like UDFs (you can pass in extra stuff and those "just work" too).</p><p>So, what's another use case?</p><p>&lt;cffunction name="cfmail"&gt;<br>   &lt;cfmail attributeCollection="#arguments#"&gt;<br>      #arguments.body#<br>   &lt;/cfmail&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cfscript&gt;<br>  <a href="http://disq.us/url?url=http%3A%2F%2Fmailparams.to%3A221ax75DEgNz9Y-v6kgF3dPVAxo&amp;cuid=3321886" rel="nofollow noopener" title="mailparams.to">mailparams.to</a> = "foo@bar.com";<br>  mailparams.from = "baz@foo.org";<br>  mailparams.subject = "cfmail in cfscript";<br>  mailparams.body = "You can create UDFs for tags that are forward compatible!"<br>&lt;/cfscript&gt;</p><p>There are a bunch of other useful use case... creating defaults for tags in your application, storing metadata in objects and passing the entire object to a various tags... etc.</p><p>My main thing is that I wanted it to work like a user defined function, which allows extra stuff too. :)</p><p>Note: if you just use the attributes, these are still all validated for typos, so if you're worried about fat fingering... don't use this. :)</p><p>Let us know if you run into other cool uses!<br>Jason</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679139">6</a> by Jason Delmore
		posted on 4/4/2008 at 5:32 PM
		</div>
		<div class="comment_text"><p>Oh...  I forgot..</p><p>&lt;cfscript&gt;<br>  cfmail(mailparams);<br>&lt;/cfscript&gt;</p><p>Not bad huh? :)</p><p>Jason</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679141">7</a> by Raymond Camden
		posted on 4/4/2008 at 5:34 PM
		</div>
		<div class="comment_text"><p>Jason - I forget. Was the ability to mix both inline and attributeCollection added in 801? I know the 'any arg you want' was added, but specifically the mix.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679138">8</a> by Jason Delmore
		posted on 4/4/2008 at 6:02 PM
		</div>
		<div class="comment_text"><p>Having both the collection and a tag attribute, mix-n-match if you prefer :), was added with 8.0.1.</p><p>:)<br>Jason</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679146">9</a> by Ben Davies
		posted on 4/4/2008 at 8:55 PM
		</div>
		<div class="comment_text"><p>@Jason</p><p>You Wrote:<br>-----------------<br>Oh... I forgot..</p><p>&lt;cfscript&gt;<br>cfmail(mailparams);<br>&lt;/cfscript&gt;<br>-----------------</p><p>We can *call* tags like a UDF? (!?!?!)<br>Any tag?</p><p>That can't be right... can it? <br>!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679148">10</a> by Raymond Camden
		posted on 4/4/2008 at 8:58 PM
		</div>
		<div class="comment_text"><p>Nope. You would have to write a tag for it. But your udf would be very simple.</p><p>&lt;cffunction name="cfmail"&gt;<br> &lt;cfmail attributeCollection=arguments&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679151">11</a> by Ben Davies
		posted on 4/4/2008 at 9:04 PM
		</div>
		<div class="comment_text"><p>Ah I See. I nearly fell off my chair then.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679155">12</a> by Misty
		posted on 7/3/2012 at 11:53 AM
		</div>
		<div class="comment_text"><p>Hey Ray, I am using this in my one of the custom tags and i am passing the value from the calling template as:</p><p>&lt;cf_call mailing="{to='i@i.com',server='<a href="http://disq.us/url?url=http%3A%2F%2Fthis.thisdomaijn.com%3Awqb3ZiSr3nfeoDOTvxXmTDQUiyk&amp;cuid=3321886" rel="nofollow noopener" title="this.thisdomaijn.com">this.thisdomaijn.com</a>',type='html',from='me@me.com'}"&gt;</p><p>now in my call.cfm custm tag i am using it like this</p><p>&lt;cfmail attributecollection = "#<a href="http://disq.us/url?url=http%3A%2F%2Fattributes.call%3Axw7wcc9MMfuVVxdtTOkMkwMGB7Y&amp;cuid=3321886" rel="nofollow noopener" title="attributes.call">attributes.call</a>#"&gt;</p><p>it is giving me this error</p><p>The attributeCollection attribute in the cfmail tag can only be a structure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679153">13</a> by Misty
		posted on 7/3/2012 at 11:56 AM
		</div>
		<div class="comment_text"><p>I am getting this Error:</p><p>The attributeCollection attribute in the cfmail tag can only be a structure.</p><p>&lt;cf_call ckmail="{to='test@test.com',from='test@test.com',subject='Error reported',mailserver='<a href="http://disq.us/url?url=http%3A%2F%2Fmail.domain.com%3Al-Uq435LkKiAi5aTRBcDWq4eZ_I&amp;cuid=3321886" rel="nofollow noopener" title="mail.domain.com">mail.domain.com</a>',username='1234',password='tested'}"&gt;<br>in the custom tag call.cfm i have the following</p><p>&lt;cfmail attributecollection = "#attributes.ckmail#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679125">14</a> by Raymond Camden
		posted on 7/3/2012 at 9:16 PM
		</div>
		<div class="comment_text"><p>You passed a string. To make that  'real' CF variable, try wrapping the {} with #.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679127">15</a> by Misty
		posted on 7/3/2012 at 9:19 PM
		</div>
		<div class="comment_text"><p>i did not get it, can you please write the example as of how we are saying it to be done!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679124">16</a> by Raymond Camden
		posted on 7/3/2012 at 9:20 PM
		</div>
		<div class="comment_text"><p>Instead of foo="{....}" do foo="#{...}#"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679128">17</a> by Misty
		posted on 7/3/2012 at 9:52 PM
		</div>
		<div class="comment_text"><p>ok, now that did resolved but now mails are not coming</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679129">18</a> by Raymond Camden
		posted on 7/3/2012 at 9:55 PM
		</div>
		<div class="comment_text"><p>Um - but how am I supposed to know? You are using a custom tag called "call" - I have no idea what that is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679147">19</a> by Raymond Camden
		posted on 7/3/2012 at 9:55 PM
		</div>
		<div class="comment_text"><p>Oh sorry - I see where you say you use cfmail. Best thing to do is check your CF mail logs.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679150">20</a> by Misty
		posted on 7/3/2012 at 10:00 PM
		</div>
		<div class="comment_text"><p>ok, i got it, i checked it in logs, mail is there, might be some server authentication issue, the issue is now resolved, Thanks Ray as always</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679149">21</a> by Misty
		posted on 7/4/2012 at 11:23 AM
		</div>
		<div class="comment_text"><p>Ok, now here is the question, tested on CF9 and it worked, Now Testing on CF 8.0.1, It failed miserably</p><p>&lt;cf_call ckmail="#{to='test@test.com',from='test@test.com',subject='Error reported',mailserver='<a href="http://disq.us/url?url=http%3A%2F%2Fmail.domain.com%3Al-Uq435LkKiAi5aTRBcDWq4eZ_I&amp;cuid=3321886" rel="nofollow noopener" title="mail.domain.com">mail.domain.com</a>',username='1234',password='tested'}#"&gt;<br>in the custom tag call.cfm i have the following<br>&lt;cfparam name="attributes.ckmail" default=""&gt;<br>&lt;cfmail attributecollection = "#attributes.ckmail#"&gt;</p><p>Error I am getting</p><p>Invalid CFML construct found on line 11 at column 18.  <br>ColdFusion was looking at the following text:<br>{</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679154">22</a> by Raymond Camden
		posted on 7/4/2012 at 5:51 PM
		</div>
		<div class="comment_text"><p>You can't use that syntax in that way in CF8. Simply make a structure the 'old' way and pass it.</p></div>
	</div>
</div>
		