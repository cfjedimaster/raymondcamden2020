
<div class="comment" id="c_1713679178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679178">1</a> by radek
		posted on 4/4/2008 at 2:37 PM
		</div>
		<div class="comment_text"><p>That is great! Now its time to add null support and var keyword anywhere in the function body :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679166">2</a> by Tom Chiverton
		posted on 4/4/2008 at 2:48 PM
		</div>
		<div class="comment_text"><p>@radek: You really want 'var anywhere' ? Wouldn't removing the whole requirment for 'var' at all be better (i.e. unscoped variables in the function body are private by default) ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679176">3</a> by Tony Garcia
		posted on 4/4/2008 at 3:50 PM
		</div>
		<div class="comment_text"><p>+1 for Tom's suggestion!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679177">4</a> by Ben Davies
		posted on 4/4/2008 at 4:03 PM
		</div>
		<div class="comment_text"><p>I know a lot of people have been keen to see this improvement. Thanks to Adobe!</p><p>I agree with Tom that variables in function should probably be automatically scoped local, but at this stage it is probably a backwards compatibility issue. If you change it someone's code somewhere *will* break (because they did in fact mean variables scope and didn't prefix their reference).</p><p>Still it is hard to imagine a single issue that has caused more frustrating hours spent debugging than that one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679179">5</a> by Tony Petruzzi
		posted on 4/4/2008 at 4:18 PM
		</div>
		<div class="comment_text"><p>@Ben,</p><p>It's so lame to use backwards compatibility as an excuse for not fixing a problem. All they would have to do is allow you to override it in the administrator or the application.cfc like they have done with the allowExtraAttributes settings (see page 4 of the release notes).</p><p>Personally I would love to have the ability to override any of the administrative settings at the application level. And before some moron saids it: NO, using the adminapi is not the same.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679180">6</a> by Ben Davies
		posted on 4/4/2008 at 4:47 PM
		</div>
		<div class="comment_text"><p>@Tony,</p><p>Personally I think Adobe should break backward compatibility on a few (hell, a lot of) things. How many tags are poorly named, or have inconsistently or downright confusingly named attributes?</p><p>But you need to see it from Adobe's perspective. With every release they need to convince their existing user base to fork out for an upgrade. I'm sure CF8 shipped more than a couple units just because of the performance upgrade - because nothing beyond the install had to be done. The purchase price of CF is nothing compared with the potential manpower spent updating, testing and releasing fixes in conjunction with a CF version roll-out.</p><p>So I sympathise with Adobe's position. What they really need to do is ensure they have a roadmap so they can start deprecating features in one version and removing them in the next.</p><p>Putting additional options into CFAdmin to allow prior behaviours is not a general strategy that can be pursued everywhere, because then Adobe is still supporting an outmoded practice and (I imagine) obfuscating some of their code in the process.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679181">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679181">7</a> by Tom Chiverton
		posted on 4/4/2008 at 4:52 PM
		</div>
		<div class="comment_text"><p>@Ben:<br>" With every release they need to convince their existing user base to fork out for an upgrade"<br>I would have thought most people were on maintaince.<br>" potential manpower spent updating, testing and releasing fixes "<br>If it was an admin option, they could just flip the switch and get the old broken behaviour.<br>" additional options into CFAdmin to allow prior behaviours is not a general strategy that can be pursued "<br>Why not ? If the default is to allow newer, more correct code, but you can get the broken behaviour back if you need it, why would this lead to unreadable code ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679161">8</a> by Raymond Camden
		posted on 4/4/2008 at 4:56 PM
		</div>
		<div class="comment_text"><p>When it comes to backwards compat - folks - remember that we guys (bloggers, blog readers) are the minority in the community. The vast majority of folks aren't "in the know" and would be screwed over big time by compat changes. Trust me - it frustrates me as well, but Adobe has a -very- large customer base to think of here, so I don't blame them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679158">9</a> by Adrian Lynch, ColdFusion Devel
		posted on 4/4/2008 at 6:12 PM
		</div>
		<div class="comment_text"><p>+1 for Tony's +1 for Tom!</p><p>I'm off to read the rest of the changes.</p><p>@Tom's second comment, a switch in the Admin or per application would be great. It's shame that backward compatability stops things from being made better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679159">10</a> by radek
		posted on 4/4/2008 at 7:10 PM
		</div>
		<div class="comment_text"><p>@Tom: switches will not solve the problem - backward compatibility is one thing correctly highlighted by Ben.<br>If adding switches to each new functionality in 3 next versions we will end up with dozens of then - thats not the way to go.<br>And I'm not a big fun of "making things by default". Yes - I would love to see 'var' keyword and be able to place it wherever I need inside cffunction.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679160">11</a> by Adrian Lynch
		posted on 4/4/2008 at 7:48 PM
		</div>
		<div class="comment_text"><p>@radek: But one flag to switch to the new functionality woul be good no?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679162">12</a> by Ben Davies
		posted on 4/4/2008 at 9:43 PM
		</div>
		<div class="comment_text"><p>@Tom:</p><p>The reasons why I don't see CFADMIN switches as a feasible way to address every possible backward compatibility issue is</p><p>1) Each new switch is a new dependency between the implementation code and the admin settings.</p><p>2) Each new switch is a dirty conditional in the implementation, which could mean a lot of extra testing and/or bugs not found prior to release</p><p>3) From a simple maintenance point of view, Adobe ends up supporting more code</p><p>4) ...For how long? Forever? Right through to CF15?</p><p>I agree that in this particular case (auto-VAR'ing) the pain of migration would be eased by a switch in CFADMIN. ... but that brings its own problems:</p><p>1. For users who are not aware of the setting, or what it means, the wrong setting would manifest itself in some pretty strange behaviours that could take a while to resolve.</p><p>2. All CF community projects (frameworks, etc) would probaby need to be written and tested in backward compatibility mode or simply not supported under the backward compatibility setting.</p><p>3. This issue would be impossible for code analyser to detect.</p><p>In my situation I would definitely like function variables to be automatically scoped function-local. I am mainly trying to say that the situation isn't as straightforward for Adobe as it might seem.</p><p>(Thinking about the Code Analyser, the new argumentCollection for tags must seriously reduce its effectiveness.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679165">13</a> by jdbo
		posted on 4/5/2008 at 12:05 AM
		</div>
		<div class="comment_text"><p>Rather than enable this sort of thing via a global admin level switch, could it be enabled via a new attribute at the CFC level, i.e. &lt;cfcomponent defaultlocalscope="true"&gt; ?</p><p>That way backwards compatibility could be maintained for CFCs that need it, and new development could make use of the new behavior, within the same application.</p><p>It's not perfect (as the REALLY forward-looking would want this to be the default behavior), but it seems a reasonable compromise.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679163">14</a> by radek
		posted on 4/5/2008 at 8:58 PM
		</div>
		<div class="comment_text"><p>@Adrian: No - this one is fine. Byt as Brian gain poited correctly - how many switches there will be in CFAdmin in next 5 years?</p><p>Another reason why not to autoscope vars: there are cases when I don't want to use var so any assignment will change the value outside function but in the same method I wish to have other var'd varaibles. How autoscope will deal with that? I see three overcomplicated solutions: tell all developers if they need variables outside cffunction but modifiable from cffunction they should explicitly use scopes (this, variables). Can't see this working.</p><p>The simpliest solution is declaring variables with var explicitly. I think it would be really nice to have debugger (or debugging output) telling me I'm using unvar'd variables.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679164">15</a> by radek
		posted on 4/5/2008 at 9:00 PM
		</div>
		<div class="comment_text"><p>It meant to be: "But as Ben poited correctly again"...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679168">16</a> by Scott Smith
		posted on 4/7/2008 at 5:32 AM
		</div>
		<div class="comment_text"><p>I was seriously just complaining about not being able to this recently, so that in itself makes it a good thing.</p><p>In regards to the whole var scoping discussion, I completely agree that this should be the default.  I'm sure some would not agree, but to me it would be worth the time to clean up legacy apps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679170">17</a> by John Farrar
		posted on 4/19/2008 at 12:19 AM
		</div>
		<div class="comment_text"><p>OK this works for me...</p><p>&lt;cfscript&gt;<br>var _init = {};<br>_init.testMe = {value="nudda3"};</p><p>return _init;<br>&lt;/cfscript&gt;</p><p>... but this doesn't...</p><p>&lt;cfscript&gt;<br>var _init = {<br>	testMe = {value="nudda4"};<br>};</p><p>return _init;<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679169">18</a> by John Farrar
		posted on 4/19/2008 at 12:21 AM
		</div>
		<div class="comment_text"><p>even when I correct my manual typed in code and take the second semi-colon out! lol</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679172">19</a> by Raymond Camden
		posted on 4/19/2008 at 12:23 AM
		</div>
		<div class="comment_text"><p>Err, I was just going to say. It works fine for me when you do that, and remove the var. You can't use the var scope outside of a UDF. This code ran fine for me:</p><p>&lt;cfscript&gt;<br>var _init = {<br>	testMe = {value="nudda4"};<br>};<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679171">20</a> by John Farrar
		posted on 4/19/2008 at 12:50 AM
		</div>
		<div class="comment_text"><p>That is why the code came from inside a UDF. :)</p><p>Let me try it outside.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679175">21</a> by John Farrar
		posted on 4/19/2008 at 12:58 AM
		</div>
		<div class="comment_text"><p>Same issue outside a CFC.</p><p>This is my server version of CF... what is yours? I should have it upgraded. (Unfortunately it doesn't say 8.0.1 ... )</p><p>8,0,0,176276</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679173">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679173">22</a> by Raymond Camden
		posted on 4/19/2008 at 1:04 AM
		</div>
		<div class="comment_text"><p>um - you are still on 800.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713679174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713679174">23</a> by John Farrar
		posted on 4/19/2008 at 8:56 PM
		</div>
		<div class="comment_text"><p>Thanks Ray... got the machine updated and ideed it does work again. Not sure what went wrong... updater didn't update for some reason first time. (I blame Vista because everyone likes to blame MS... lol)</p><p>Works now also.</p></div>
	</div>
</div>
		