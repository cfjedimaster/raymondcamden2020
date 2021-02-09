
<div class="comment" id="c_1713748198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748198">1</a> by Adam Tuttle
		posted on 8/16/2013 at 8:13 AM
		</div>
		<div class="comment_text"><p>Further proof that Windows as a modern development environment continues to fall further and further behind. Switched to OSX years ago for unrelated reasons and I can't imagine ever going back. I may one day switch to Hackintosh, but OSX is amazing for developers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748199">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748199">2</a> by Raymond Camden
		posted on 8/16/2013 at 2:17 PM
		</div>
		<div class="comment_text"><p>Really? As I've seen unicode bugs in other apps, other platforms before, this really doesn't seem fair. Don't get me wrong - I prefer OSX too - but I honestly think Win8 is a fine platform and would be great for dev too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748200">3</a> by Adam Tuttle
		posted on 8/16/2013 at 4:11 PM
		</div>
		<div class="comment_text"><p>Really.</p><p>The windows command line is all but useless, at least in comparison to the developer tools built into and available for *nix (and thus OSX).</p><p>Sure, there are various CMD.exe replacements and alternatives, but they all fall short and have integration issues.</p><p>Unix-based tools have deep integration throughout the OS and everything "just works" (not the apple kind, this is a bigger, broader, unix thing).</p><p>Zsh (and OhMyZsh) and homebrew spring immediately to mind. Then there's just a cornucopia of tiny little tools (with unix, isn't there always?) that have no counterpart on Windows, or if it's there, it's a crappy copy that doesn't have all of the same functionality and changes flags just to be different.</p><p>Grep. Awk. Sed. Cron. Curl. The list goes on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748201">4</a> by Raymond Camden
		posted on 8/16/2013 at 5:36 PM
		</div>
		<div class="comment_text"><p>And see - as much as I like OSX, I don't use grep, or awk, or sed, or cron, or curl. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748202">5</a> by jcesar
		posted on 8/20/2013 at 12:32 AM
		</div>
		<div class="comment_text"><p>And iOS SKD is ready to use locally on windows?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748203">6</a> by Raymond Camden
		posted on 8/20/2013 at 12:34 AM
		</div>
		<div class="comment_text"><p>Heh, just noticed that. That seems.... wrong. Going to post to the PG Google group.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748206">7</a> by Ian Sim
		posted on 8/20/2013 at 2:26 AM
		</div>
		<div class="comment_text"><p>I think I am with Raymond on this one. I am a Linux user primarily, but also use a MacAir for iOS dev. I am mentioning this so that you do not incorrectly assume I am a Microsoft Fanboy. Far from it.</p><p>This is a bug because it was not tested on anything other than the majority platform (macs these days) or more specifically the developers platform.  This is something that we used to complain about Microsoft doing.</p><p>Windows (Servers especially) have become much more *nix-like in the last several years. ...but hey are alway a little different than what you might expect when coming from *nix/mac. The Microsoft way.  Having run both Linux and Windows servers in production environments I can also say that they can be extremely stable. I am assuming you have not spent much time with powershell. I am guessing that you were pretty deep into the windows world but left quite a while ago. Between CMD and PS there is quite a bit of power there. Take a look at  <a href="http://disq.us/url?url=http%3A%2F%2Fss64.com%2Fps%2F%3AbFg5r9Yg7EUWmEIYNk_iYfZloiI&amp;cuid=3321886" rel="nofollow noopener" title="http://ss64.com/ps/">http://ss64.com/ps/</a>  for a command reference; 'Tee' for instance, but also service control and OS integration.  Much of the CMD stuff shows its age and just does not 'feel' powerful (it is pretty old). So I am not saying that this is the answer to your needs, or that you need to switch platforms... just that your logic in this case was flawed. 'Everything just works' ONLY when you know how to use it.  I love watching Mac first timers as they come from windows... pure frustration.</p><p>Windows is being left behind by the current culture of developers. But it is the culture that changed. So talking about shells is really saying you have found the *nix dev approach more comfortable, and I might add more prevalent now. You might have figured out that I actually agree with your choices and end results. I am staying away from windows these days too.</p><p>But this is just a bug and it was not related to the power of the platform. If anything the platform led the devs astray ("its works on my machine, so it must be OK").</p><p>Raymond, good work on the investigation... I am sure that this likely passed a QA test at Adobe. The question marks look like are a possible value in such a screen - for instance when functionality is not available on some platforms. Without deeper info you wouldn't know.</p><p>Cheers to both of you, and continued happy 'gap'ing!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748205">8</a> by Michael
		posted on 8/21/2013 at 8:23 PM
		</div>
		<div class="comment_text"><p>THANK YOU!!! I feel validated or vindicated or something like that. I just abandoned trying to build a project on Windows because people think your an idiot when you are explaining how it doesn't work in Windows development. Like Ian said, nobody bothers to test ON a Windows machine. Not VM but an actual machine running the most widely available Microsoft OS, which incidentally is not 8. Personally I am not a fan of Microsoft for much of anything, but their OS is sort of widely used. I'm not much of an Apple fan either after my experiences with their app approval process. They are freakin apps after all. It's not like they are curing diseases or feeding hungry kids.</p><p>Anyway, it seems like at least one person at Phonegap could own a Windows machine and build an app prior to release of a new version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748207">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748207">9</a> by Raymond Camden
		posted on 8/21/2013 at 8:36 PM
		</div>
		<div class="comment_text"><p>I've got two other Windows thing to report - just haven't blogged it yet. Will try to do so today.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748208">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748208">10</a> by Raymond Camden
		posted on 8/22/2013 at 12:52 AM
		</div>
		<div class="comment_text"><p>A related entry for you guys: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2Findex.cfm%2F2013%2F8%2F21%2FTwo-more-Windows-PhonePhoneGap-Tips%3AzRCGIL9iFas_Pr4JMmxLMnO3Cg8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/index.cfm/2013/8/21/Two-more-Windows-PhonePhoneGap-Tips">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713748209">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713748209">11</a> by Graham Street
		posted on 1/26/2014 at 8:32 AM
		</div>
		<div class="comment_text"><p>Selecting a Unicode font for use in the cmd.exe environment would have fixed this issue. I know it's not nice this isn't the default, but if you're coming from a *nix environment I'd think finding frustrating defaults and overcoming them is just part of the *xperience?</p></div>
	</div>
</div>
		