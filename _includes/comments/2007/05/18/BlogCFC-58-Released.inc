
<div class="comment" id="c_1713665464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665464">1</a> by Gary Funk
		posted on 5/19/2007 at 2:39 AM
		</div>
		<div class="comment_text"><p>When will you do a rewrite to move from Applicatin.cmf to Application.cfc?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665463">2</a> by David Harris
		posted on 5/19/2007 at 8:47 AM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>Does this build include the updated Lyla Captcha, or will wee need to apply that ourselves?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665466">3</a> by Raymond Camden
		posted on 5/19/2007 at 6:02 PM
		</div>
		<div class="comment_text"><p>It is. Forgot to mention it above, but it is mentioned in the readme.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665450">4</a> by Christopher Jordan
		posted on 5/19/2007 at 6:14 PM
		</div>
		<div class="comment_text"><p>@Gary,</p><p>Wouldn't making a switch to Application.cfc alienate all folks using earlier versions of CFMX? Why would that be a good thing? What advantages would switching from Application.cfm to Application.cfc achieve? Can you tell that I'm still running MX6.1? ;o)</p><p>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665468">5</a> by Raymond Camden
		posted on 5/19/2007 at 6:25 PM
		</div>
		<div class="comment_text"><p>Gary, Christopher is right. I've got far too many people on CF6. App.cfc IS nicer, trust me, but I'd lose a lot of users if I did this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665476">6</a> by Gary Funk
		posted on 5/19/2007 at 7:40 PM
		</div>
		<div class="comment_text"><p>@Chrustopher: Thanks for the comment. I hadn't thought of that when I asked the question.</p><p>@Ray: Thanks for the answer. I thought there must be a good answer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665456">7</a> by Tuyen
		posted on 5/21/2007 at 8:41 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Could you explain why you don't use WYSIWGY for message on blogcfc?</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665472">8</a> by Raymond Camden
		posted on 5/21/2007 at 9:28 PM
		</div>
		<div class="comment_text"><p>I'm trying to limit the number of external apps I ship with blogcfc. I did make it easier to use RTE with BlogCFC though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665469">9</a> by Rob
		posted on 5/23/2007 at 9:49 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,  <br>   Great work on blogCFC. Anyways, I'm trying to get one of our projects to use blogCFC as the blog engine over wordpress, primarily because we are mostly a CF development team. The business owner has a few concerns I was hoping you could answer.<br>- Virtually all BlogCFC sites look identical.  Skinning seems to be extremely limited.<br>- Limited plugins<br>- Does not support multiple categories<br>- Does not seem to play well with standard embeddables (Slideshare, YouTube, GCast)<br>- So far as I could see, does not seem well suited to maintaining large numbers of blogs (We have the potential to put up a few thousand blogs in a very short time-frame)<br>- No migration path in place from Typepad to BlogCFC</p><p>Any help would be greatly appreciated!<br>Thanks,<br>Rob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665471">10</a> by Raymond Camden
		posted on 5/23/2007 at 11:43 PM
		</div>
		<div class="comment_text"><p>Let me address each one:</p><p>1) Yes, I don't have many skins out there. I ship with a few alternate CSS skins, but in general, if you want something different, you have to do it yourself. I do try to make this easy, and I'd say only about half of the BlogCFC installs use the default. I'd bet most of those half are folks who didn't get up on customizing, but just didn't really care.</p><p>2) Limited Plugins: What exactly do you  mean by plugins?</p><p>3) It _does_ support multiple categories. Has for a very long time. :)</p><p>4) You can embed any HTML you want into an entry. Do you have a specific example of something you couldn't embed.</p><p>5) Sorry - but this is a bit vague. BlogCFC supports multiple blogs in one db, multiple blogs in multiple dbs, multiple client installs, or even "<a href="http://disq.us/url?url=http%3A%2F%2FBlogger.com%3Azai2o2Gc5p9Izr8Q7eQW_qOYBZk&amp;cuid=3321886" rel="nofollow noopener" title="Blogger.com">Blogger.com</a>" style installs. A few people have hundreds of blogs running.</p><p>6) Yep. No migration. But I'm sure you could write a simple import script (and then contribute back to the project :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665467">11</a> by Andrew Scott
		posted on 6/4/2007 at 4:54 AM
		</div>
		<div class="comment_text"><p>@Ray.... You do not need to alienate all your users to use Application.cfc, you can include the 2 files in your distribution. Those who do not have cfmx7+, coldfusion will only load and use Application.cfm and for those who are using CFMX7+ when running the application coldfusion will load Application.cfc first and ignore Application.cfm.</p><p>HTH</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665473">12</a> by Andrew Scott
		posted on 6/4/2007 at 4:58 AM
		</div>
		<div class="comment_text"><p>@Ray.... Btw you want to talk about alienating your users, I would prefer to see the config files in an xml based config file rather than using the profile settings of the ini file.</p><p>There are a huge amount of hosting providers out there that switch that function of for security reasons, and that means that I have to take the time to modify the code each and every release to get your blog to work on a hosting provider.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665462">13</a> by Raymond Camden
		posted on 6/4/2007 at 7:24 AM
		</div>
		<div class="comment_text"><p>Per your first comment - while I could do that - I do not want to add twice the work. It is only one file - but still, any bug I fix in one I have to fix in the other. It also means I could forget to fix something in one file that I fix in the other.</p><p>As for your second comment - I'd be willing to bet more ISPs block cffile as opposed to those who block the INI functions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665460">14</a> by Andrew Scott
		posted on 6/4/2007 at 7:47 AM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>Hmmm... your missing the point of Code Reuse, did you not think that one could create a library for use to the Application settings then use the appropriate <a href="http://disq.us/url?url=http%3A%2F%2FApplication.xxx%3A32357gP-cUs3bX_F2xW68nDGDL4&amp;cuid=3321886" rel="nofollow noopener" title="Application.xxx">Application.xxx</a> to load and setup?</p><p>That way change one, change all:-)</p><p>As for second comment, I doubt it very much I have not come across one hosting provider that has cffile switched off for the reason of MVC frameworks all now use xml based configuration. And they know that they will alienate themselves if they where to not provide this feature, besides it is better sandboxed that the profile settings.</p><p>But for some reason profile settings seems to be a different when they sandbox the servers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665465">15</a> by Raymond Camden
		posted on 6/4/2007 at 8:04 AM
		</div>
		<div class="comment_text"><p>Errr - so I should build an abstract settings thingy and have app.cfm or app.cfc use it? I don't think that really makes sense honestly. I'll have to disagree here.</p><p>Well, if I use one or the other, folks are going to have to deal I guess. I have not yet had any (afaik) requests to switch away from the INI file setup.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665470">16</a> by Christopher Jordan
		posted on 6/4/2007 at 5:46 PM
		</div>
		<div class="comment_text"><p>@Andrew,</p><p>Who's your host? I'm with CrystalTech, and have no problems with the INI file setup. I think if there were a real problem with it, there'd be a lot more people complaining about it.</p><p>I used to have Viux as my host, and they had problems with access to CFFile and CFDirectory, but I was on some kind of grandfathered account that they'd done away with. All their new accounts were given access to these two commands. Also, they were slowly but surely migrating all of their older account holders over to the new way of doing things. I left them for other reasons honestly.</p><p>As for the Application.cfm vs. Application.cfc is concerned, I don't see the point. Application.cfm already works just fine. It seems to me that if Ray were to write it to use one or the other based on which version of CF the client was running, that it would just be more work for him with little gain. Then again, I've not used Application.cfc, so I don't really understand the benefits that it brings. My client still uses MX6.1 so I've not had the opportunity. :o(</p><p>Anyhoo, thems my thoughts. :o)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665474">17</a> by Raymond Camden
		posted on 6/4/2007 at 5:56 PM
		</div>
		<div class="comment_text"><p>One point Christopher - App.cfm does work fine, BUT, in all other cases I'd urge folks to use App.cfc. It is more powerful and is really the most recommended thing to do. Again - my case is different since I'm supporting both platforms. I may consider dropping CF6 support when CF9 comes out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665459">18</a> by Chris Jordan
		posted on 6/4/2007 at 6:51 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>I understand that your case here is special, and while I don't really want to turn this into an article on App.cfm vs. App.cfc, could you briefly explain what advantages App.cfc has over App.cfm?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665457">19</a> by Raymond Camden
		posted on 6/4/2007 at 6:57 PM
		</div>
		<div class="comment_text"><p>Simpler handling of events. So for example, in the past to set application variables once, you had to use a 'marker' variable:</p><p>if not isdefined <a href="http://disq.us/url?url=http%3A%2F%2Fapp.foo%3AH-GgSHN1LR8HZBIJkCCw4x96j6Y&amp;cuid=3321886" rel="nofollow noopener" title="app.foo">app.foo</a><br>set....<br>end if</p><p>Now you can just use onApplicationStart. Ditto for onSessionStart.</p><p>Plus you get the ability to run stuff when sessions/apps die.</p><p>I find it makes the code a lot cleaner too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665455">20</a> by Chris Jordan
		posted on 6/4/2007 at 7:02 PM
		</div>
		<div class="comment_text"><p>Thanks for taking the time Ray. I appreciate it. Perhaps, I'll get to use it some time in the future.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665454">21</a> by Trond Ulseth
		posted on 6/6/2007 at 11:36 AM
		</div>
		<div class="comment_text"><p>Here's a request to move away from the INI file setup :)</p><p>Now you can't say that you did not have any requests :)</p><p>Seriously - I think that in this day and age it's far easier to get a host to allow the use of cffile over set-/getProfileString.</p><p>I just had an experience with it my self, and judging by the comments I' not alone: <a href="http://disq.us/url?url=http%3A%2F%2Ftrond.ulseth.no%2Findex.cfm%2F2007%2F6%2F5%2FNow-running-BlogCFC-without-getsetProfileString%3AxfqL_BsCuscRXKQjQWhdnEyPHDE&amp;cuid=3321886" rel="nofollow noopener" title="http://trond.ulseth.no/index.cfm/2007/6/5/Now-running-BlogCFC-without-getsetProfileString">http://trond.ulseth.no/inde...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665453">22</a> by Raymond Camden
		posted on 6/6/2007 at 3:25 PM
		</div>
		<div class="comment_text"><p>Well, I won't promise anything but I'll think about it for 6.0.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665458">23</a> by Russ "Snake" Michael
		posted on 9/29/2007 at 7:45 AM
		</div>
		<div class="comment_text"><p>LOL, if a host allows cffile and disables getprofilestring then you need to change hosts pretty quick as they don't have a clue and are insecure.<br>If they use sandboxes then neither cffile or getprofilestring are a problem and there is no reason to disable either.<br>But why would you need CFFILE anyway just to read an XML file? Cfinclude works fine.</p></div>
	</div>
</div>
		