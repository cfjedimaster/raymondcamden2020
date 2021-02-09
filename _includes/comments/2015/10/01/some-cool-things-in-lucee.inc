
<div class="comment" id="c_2284987123">
	<div>
		<img src="https://disqus.com/api/users/avatars/brad_wood.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2284987123">1</a> by Brad Wood
		posted on 10/2/2015 at 3:12 AM
		</div>
		<div class="comment_text"><p>Great list, Ray.  I've taken a lot of this for granted, but I'd actually like to submit a "hidden gems in Lucee" kind of talk aimed a exposing some of these cool features.</p><p>&gt; I assume the Adobe ColdFusion team naturally tracks what Lucee is doing.</p><p>I asked several of the engineers and product management about this (Railo at the time) at the last CF Summit and they had never looked at or used it.  I know I have personally introduce many Railo/Lucee features over the years to the CF team.</p><p>&gt; You can use a database for session storage versus just plain RAM</p><p>One of my favorite Lucee features is the ability to define any number external cache providers that even use Lucee Extensions to connect to, say, Couchbase.  That REALLY makes the "sessionStorage" option come alive for true scaling since it can also point to a cache.  Just remember to set sessionCluster to true if you have more than on web server in the mix.</p><p>&gt; Ok, I do care, and would love to hear some practical uses for this.</p><p>Regarding the "action" attribute for cfapplication-- ColdBox uses this to add application-specific mappings on-the-fly when modules are loaded which is a HUGE thing for self-contained modules that need CFC paths.  Case in point: imagine you want to write a module for the ColdBox framework that defines an interface or base component that the developer (or another module) will want to implement/extend.  Modules can be installed anywhere-- the /modules convention, an overridden folder, the core /coldbox/modules folder, or even as a nested module inside a parent module (a-la Node module dependency). What the heck will the full CFC path be to this self contained-module at run time?  Let's say the module is called "foo".  Coldbox adds "/foo" as an app mapping (via cfapplication's action=update) and points it to the folder where the module was installed.  Boom.  foo.baseClass is now the path no matter where the module was installed to.  That's my use case anyway.  Note, adding app mappings on the fly works on Adobe CF, but while officially "supported" (by our request) in CF11, it's not nearly as well done.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2285238260">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfsimplicity.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2285238260">2</a> by Julian Halliwell
		posted on 10/2/2015 at 8:26 AM
		</div>
		<div class="comment_text"><p>Really useful post, Raymond.</p><p><code>bufferOutput=false</code> helps with speed and memory consumption I think because, instead of buffering and then suppressing the output inside <code>&lt;cfsilent&gt;</code> and <code>&lt;cffunction output="false"&gt;</code>, Lucee just doesn't buffer the output in the first place. So it's doing less work and using up less temporary memory..</p><p>The downside is that if an error occurs within one of those tags, you'll get a blank page instead of being shown the exception. Not what you want when developing locally, but because it can be set in App.cfc you can simply switch it on or off according to your environment.</p><p>The same applies to <code>this.typeChecking=false;</code>. Have it on in dev, but turn off in production for a performance boost.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2285576843">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2285576843">3</a> (In reply to <a href="#c_2284987123">#1</a>) by Raymond Camden
		posted on 10/2/2015 at 1:22 PM
		</div>
		<div class="comment_text"><p>Cool, thanks for the example.</p><p>I'm disappointed but entirely not surprised that the Adobe CF team doesn't check Lucee/Railo. Maybe there is some legal reason (if Lucee adds X and we do we can be sued).</p></div>
	</div>
</div>
		
<div class="comment" id="c_2286046506">
	<div>
		<img src="https://disqus.com/api/users/avatars/pete_freitag.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2286046506">4</a> by Pete Freitag
		posted on 10/2/2015 at 4:57 PM
		</div>
		<div class="comment_text"><p>Nice summary Ray, I didn't know about the "tag" option, that is pretty cool.</p><p>I will caution that the compression setting can be problematic, and is probably best handled by the web server instead. I've seen a few issues that were resolved by turning it off in the past.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2286475431">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2286475431">5</a> (In reply to <a href="#c_2286046506">#4</a>) by Raymond Camden
		posted on 10/2/2015 at 6:16 PM
		</div>
		<div class="comment_text"><p>That matches what my gut was saying.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2290344027">
	<div>
		<img src="https://disqus.com/api/users/avatars/gert_franz.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2290344027">6</a> (In reply to <a href="#c_2285238260">#2</a>) by Gert Franz
		posted on 10/5/2015 at 6:50 AM
		</div>
		<div class="comment_text"><p>Hey Julian,<br>that is not quite accurate. Errors will still be thrown when you have the attribute set. It is just that the content generated inside those tags will not be available for output.</p><p>Due to the fact that in 99% of the cases a CFSilent is doing what a CFSilent is supposed to do, which is to prevent any output, the setting makes a lot of sense, since generating the output (buffering it) consumes memory. This used memory then has to be removed some time by the garbage collector. This obviously uses way more memory and occupies <br>the CPU more than with the setting set to true.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2290350669">
	<div>
		<img src="https://disqus.com/api/users/avatars/gert_franz.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2290350669">7</a> by Gert Franz
		posted on 10/5/2015 at 6:59 AM
		</div>
		<div class="comment_text"><p>&gt;&gt; Ok, I do care, and would love to hear some practical uses for this.</p><p>We have an application with a client where many settings (like the framework version, datasources others.) are stored in a database or other storage. When the application has loaded the settings from the one single datasource which holds all the configuration data, the rest will be injected into the application with the tag &lt;cfapplication action="update" ...=""&gt;</p><p>Just as a BTW. The tag cfapplication can do (I guess everything) what the settings for the Application.cfc are offering.</p><p>localmode</p><p>The local mode is something that IMHO should have been set for ACF since DAY 1. Unscoped variables should be stored in the local scope by default. This setting is a general setting and affects the application completely for every function or method. The attribute "localmode" is also available for the tag function AND for the tag component. So you can set it per component or per function individually. Just imagine a CFC having concurrency issues. Setting the localmode="true" attribute on top of the component immediately helps fix the issue.</p><p>Regarding cloning Lucee features</p><p>THERE IS NO REASON why Adobe cannot clone or copy stuff from Lucee. They have done it in the past (even though sometimes a tiny bit different) and I encourage them to do it in the future too. Lucee is LGPL V2 open source. Best thing to do for CF12 would be git clone lucee :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2290351072">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfsimplicity.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2290351072">8</a> (In reply to <a href="#c_2290344027">#6</a>) by Julian Halliwell
		posted on 10/5/2015 at 7:00 AM
		</div>
		<div class="comment_text"><p>Thanks for the correction, Gert. Having turned this on, I was indeed getting a blank page when an exception was thrown. But I've since realised that's because my error handler is rather old and was using <code>&lt;cffunction&gt;</code> tags. So <code>bufferOutput=false</code> was just doing its job. When I changed it to script, the errors where output again.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2290354191">
	<div>
		<img src="https://disqus.com/api/users/avatars/gert_franz.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2290354191">9</a> (In reply to <a href="#c_2286046506">#4</a>) by Gert Franz
		posted on 10/5/2015 at 7:04 AM
		</div>
		<div class="comment_text"><p>I agree that this is not something you should set, if you have a web server in front. But if you don't it is helpful. In the past there were some issues with the tag CFFLUSH and some others like whitespace supression which were caused by this setting. But AFAIK they have been fixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2290499095">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2290499095">10</a> (In reply to <a href="#c_2290350669">#7</a>) by Raymond Camden
		posted on 10/5/2015 at 10:23 AM
		</div>
		<div class="comment_text"><p>Thanks for the comment - some good stuff here!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2299675941">
	<div>
		<img src="https://disqus.com/api/users/avatars/itisdesign.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2299675941">11</a> by itisdesign
		posted on 10/10/2015 at 7:55 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Regarding THIS.tag, I *really* want that in CF12. I filed a ticket during CF8 for the basic idea: <a href="https://disq.us/url?url=https%3A%2F%2Fbugbase.adobe.com%2Findex.cfm%3Fevent%3Dbug%26id%3D3034268%3A4FFpoX0R8Lw0U8uu6-wWvUrN8dM&amp;cuid=3321886" rel="nofollow noopener" title="https://bugbase.adobe.com/index.cfm?event=bug&amp;id=3034268">https://bugbase.adobe.com/i...</a></p><p>Thanks!,<br>-Aaron</p></div>
	</div>
</div>
		
<div class="comment" id="c_2483708697">
	<div>
		<img src="https://disqus.com/api/users/avatars/brucevanhorn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2483708697">12</a> by Bruce Van Horn
		posted on 1/28/2016 at 9:07 PM
		</div>
		<div class="comment_text"><p>Ray, do you know of anyone using Lucee in a production environment?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2483754492">
	<div>
		<img src="https://disqus.com/api/users/avatars/brad_wood.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2483754492">13</a> (In reply to <a href="#c_2483708697">#12</a>) by Brad Wood
		posted on 1/28/2016 at 9:34 PM
		</div>
		<div class="comment_text"><p>Bruce, there are a large amount companies using Lucee in production.  even big names like NASA.  The recent State of the CF Union survey shows 34% of all respondents are using Lucee 4.x and 16% are already using Lucee 5 beta.<br><a href="https://disq.us/url?url=https%3A%2F%2Fwww.surveymonkey.com%2Fresults%2FSM-JHGMBSCQ%2F%3AkdjCUf8t--JJM2jXAiift97JvjQ&amp;cuid=3321886" rel="nofollow noopener" title="https://www.surveymonkey.com/results/SM-JHGMBSCQ/">https://www.surveymonkey.co...</a><br>If you jump in the Lucee Google Group or #lucee channel of the CFML Slack team, I'm sure you'll find many people willing to give you more specifics.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2483804207">
	<div>
		<img src="https://disqus.com/api/users/avatars/brucevanhorn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2483804207">14</a> (In reply to <a href="#c_2483754492">#13</a>) by Bruce Van Horn
		posted on 1/28/2016 at 10:03 PM
		</div>
		<div class="comment_text"><p>Brad, this is very helpful. Thank you!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2483984879">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2483984879">15</a> (In reply to <a href="#c_2483754492">#13</a>) by Raymond Camden
		posted on 1/29/2016 at 12:03 AM
		</div>
		<div class="comment_text"><p>Thanks for answering his question, Brad!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2626819553">
	<div>
		<img src="https://disqus.com/api/users/avatars/dawesi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2626819553">16</a> (In reply to <a href="#c_2483708697">#12</a>) by dawesi
		posted on 4/16/2016 at 2:48 PM
		</div>
		<div class="comment_text"><p>I'm using it for a white label event ticketing company (think Eventbrite, but with useful features)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2867150533">
	<div>
		<img src="https://disqus.com/api/users/avatars/Stooshie.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2867150533">17</a> by Andrew Wilson
		posted on 8/30/2016 at 2:43 PM
		</div>
		<div class="comment_text"><p>Where is the "Storage" checkbox situated in the Lucee Administrator? We can't seem to find it. Or is it only on particular versions of Lucee?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2867210226">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2867210226">18</a> (In reply to <a href="#c_2867150533">#17</a>) by Raymond Camden
		posted on 8/30/2016 at 3:18 PM
		</div>
		<div class="comment_text"><p>In Lucee 5, it is Settings - Scope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3135304575">
	<div>
		<img src="https://disqus.com/api/users/avatars/dawesi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3135304575">19</a> (In reply to <a href="#c_2286046506">#4</a>) by dawesi
		posted on 2/3/2017 at 6:10 AM
		</div>
		<div class="comment_text"><p>does is compress then compile, aka compress before the bytecode?</p><p>that would make it a feature to bypass the server compression if it did... bytecode would be heaps faster than runtime compress on web server...</p></div>
	</div>
</div>
		
<div class="comment" id="c_3135689053">
	<div>
		<img src="https://disqus.com/api/users/avatars/pete_freitag.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3135689053">20</a> (In reply to <a href="#c_3135304575">#19</a>) by Pete Freitag
		posted on 2/3/2017 at 1:45 PM
		</div>
		<div class="comment_text"><p>I don't think it would be possible to do the compression at compile time because it would not have all your runtime variable values.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4570512149">
	<div>
		<img src="https://disqus.com/api/users/avatars/bennadel.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4570512149">21</a> (In reply to <a href="#c_2290350669">#7</a>) by Ben Nadel
		posted on 8/8/2019 at 10:04 AM
		</div>
		<div class="comment_text"><p>Re: localmode, oh cool, I didn't realize you could set it on a per-component level as well! I haven't played around with it yet; but, this make it feel easier to roll-out to a brown-field application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4570520119">
	<div>
		<img src="https://disqus.com/api/users/avatars/bennadel.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4570520119">22</a> (In reply to <a href="#c_4570512149">#21</a>) by Ben Nadel
		posted on 8/8/2019 at 10:16 AM
		</div>
		<div class="comment_text"><p>Actually, I just tried it on the component tag and it does not appear to work...</p></div>
	</div>
</div>
		
<div class="comment" id="c_4570539349">
	<div>
		<img src="https://disqus.com/api/users/avatars/gertfranz.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4570539349">23</a> (In reply to <a href="#c_4570520119">#22</a>) by Gert Franz
		posted on 8/8/2019 at 10:44 AM
		</div>
		<div class="comment_text"><p>Actually it has to work. If it doesn't it's a bug. But you can definitely do it on application level. The admin section gives you the hint for that code for Application.cfc (I forgot :))</p></div>
	</div>
</div>
		