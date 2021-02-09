
<div class="comment" id="c_1919797499">
	<div>
		<img src="https://disqus.com/api/users/avatars/joeshelby.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1919797499">1</a> by Joe Shelby
		posted on 3/21/2015 at 2:27 PM
		</div>
		<div class="comment_text"><p>"it isn’t something I feel safe recommending" - Here, I would disagree with you. We're all developers (at least as far as your audience is concerned). While yes, we can be forgetful in not double-checking that a one-line patch we did X months ago was applied to an update of a library, feature and regression testing should exist that would detect it, and the memory quickly jarred to go "oh yeah, we may need to do this again." Especially something like this where just about nothing would work without the patch applied.</p><p>One line patches like this are why open-source exists at all. If anything, the library itself should have its own fork in your source repo with documentation on why things were changed that someone should read before updating a library. What you're describing as potentially happening is not a failure of technology, but an unwillingness to assert a healthy development process.</p><p>Managing open source libraries is part of the process of professional contemporary software development, not something to be avoided as if the libraries were closed. This is just the same as the process of tracking the workarounds in your own code for bugs in the library you leave unpatched: the process of development should include reviewing each of those workarounds to see if they are still necessary.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1919804795">
	<div>
		<img src="https://disqus.com/api/users/avatars/joeshelby.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1919804795">2</a> (In reply to <a href="#c_1919797499">#1</a>) by Joe Shelby
		posted on 3/21/2015 at 2:33 PM
		</div>
		<div class="comment_text"><p>Ok, on re-reading again, I accept that in trying to implement clean examples for your book, this type of process control is out of scope of what a book is meant to present.</p><p>As a blog entry, I would encourage using a patch and developing a personal or team process for managing such patches. As a book that is not about process but about coding in a particular library, I would not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1919810150">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1919810150">3</a> (In reply to <a href="#c_1919797499">#1</a>) by Raymond Camden
		posted on 3/21/2015 at 2:37 PM
		</div>
		<div class="comment_text"><p>I think you make some really good points Joe, and I also see your followup responding to my note about this being for a book, but I think it is fair for us to discuss this *outside* of the context of a book too, since I think it brings up interesting points. :) (I think I wrote that a bit weird, what I mean is, let's pretend this isn't for a book for a moment.)</p><p>Would I still make the same recommendation if I wasn't doing a book? I'd probably say yes. I don't disagree with you about the nature of open source. I think you are 100% right. But I think there is a gray area between the "philosophy" of open source versus the practicality of development.</p><p>If I were building a project for a client, I'd look at this bug, and the lack of updates, as a *possible* sign that the project is dead. I can definitely do a fork! But the question is, do I want to? Do I want to - essentially - shepherd my own version of this project? I may have no interest in improving it, maintaining it, etc. Therefore I'd be disinclined to fork/fix and simply look for a better solution.</p><p>As much as I love open source, I think there is a *huge* disconnect sometimes between people who work in that world versus people actually using it. Should we expect more from people using open source projects? Maybe. Will that ever happen? Probably never.</p><p>Do those concerns/comments make sense to you? (Even if you - probably - strongly disagree. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1919899594">
	<div>
		<img src="https://disqus.com/api/users/avatars/joeshelby.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1919899594">4</a> (In reply to <a href="#c_1919810150">#3</a>) by Joe Shelby
		posted on 3/21/2015 at 3:47 PM
		</div>
		<div class="comment_text"><p>Well, I do disagree, but my reply ended up so long I didn't feel comfortable overtly hijacking the conversation, so I moved it to my own blog: <a href="http://disq.us/url?url=http%3A%2F%2Fjwsdev.net%2Fjottings%2Fusing-opensource-requires-process-like-everything-else%2F%3Apji8jsl-_EKAiGbZnnQfbIn61_4&amp;cuid=3321886" rel="nofollow noopener" title="http://jwsdev.net/jottings/using-opensource-requires-process-like-everything-else/">http://jwsdev.net/jottings/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1919962272">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1919962272">5</a> (In reply to <a href="#c_1919899594">#4</a>) by Raymond Camden
		posted on 3/21/2015 at 4:32 PM
		</div>
		<div class="comment_text"><p>That's unfortunate - I really want to have this conversation which is why I specifically engaged on it. I'm not going to post comments on both blogs - so why not just come back over here? :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1919963840">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1919963840">6</a> (In reply to <a href="#c_1919899594">#4</a>) by Raymond Camden
		posted on 3/21/2015 at 4:33 PM
		</div>
		<div class="comment_text"><p>Also, I really think this line isn't what I said: "However, he went one step further and simply recommended against patching any open source library, in spite of the simplicity of the patch. " (Lord, not sure why Disqus copied the format too. Ugh.) I certainly do *not* believe that and actively do create PRs on projects. I just don't know if that is the right solution for someone in *this* case.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1919966775">
	<div>
		<img src="https://disqus.com/api/users/avatars/joeshelby.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1919966775">7</a> (In reply to <a href="#c_1919810150">#3</a>) by Joe Shelby
		posted on 3/21/2015 at 4:36 PM
		</div>
		<div class="comment_text"><p>(ok you asked for it :) )</p><p>Well, with that comes the concern that I also tend to disagree with generally: just because a project hasn't had many updates doesn't necessarily mean it is dead. We used to call that "stable", unless there are so many bugs it was just abandoned as even its own developers found something better. A rapid update cycle often means incompatible changes can happen at any time (I refuse to willingly use ruby for this very reason). And even the most active project may find itself abandoned as the core developers get pulled by professional commitments, or corporate politics gets involved.</p><p>Choosing to use a library (open source or not) that requires knowing its dependencies. How tied is it to another library (e.g., node or jquery)? What are the chances of THAT library being updated in a way that introduces breaking incompatibilities. NPM manages this by isolating a library's dependencies from the core application, at the expense of having to replicate code if the developer chooses to also use that dependent library - such a solution obviously can't scale for web or mobile.</p><p>The truth is that code that works, works. That isn't a tautology, that is a fact. It continues to work until something it is dependent on changes. If you don't see any potential change like that coming, then what is there to fear? The code will still work. Code doesn't just "break" after working for months or years. I have Java code (Java 2D Mapping/GIS libraries) that I wrote more than 15 years ago. They still work in Java 8. I haven't changed a single line of code in them.</p><p>If you do fear such an update of a dependency, then are you yourself also dependent on that potentially breaking change? By choosing another library, are you instead setting yourself up for a similar breaking change because as an active project, an incompatible change can happen at any time (true for the hundreds of 0.x libraries out there), or maybe the library you choose will also die as its developers move on to other things, or choose not to update because of the incompatible dependency change?</p><p>Here I look directly at your mention of Ionic, given the way angular is throwing any backwards compatibility out the window in their 2.x. How long will a library like that stay supported when its own dependencies are abandoned? This idea that a library without support is a library of little use I actually find somewhat annoying (even as there are times I'm guilty of that myself, so some of that annoyance is self-directed).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1919967287">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1919967287">8</a> (In reply to <a href="#c_1919810150">#3</a>) by Guest
		posted on 3/21/2015 at 4:36 PM
		</div>
		<div class="comment_text"><p>All of this has to be balanced against the time you yourself plan to give to supporting your app. Is this a months long commitment? A year's long? More than that and you're bumping into a lifespan expectency that's very different from what it was years ago.</p><p>Mobile apps in particular currently have relatively short lifespans before going through significant rewrites because of new mobile design fashions (Material, IOS8), new mobile technologies (how many mobile-driven APIs have been published?), and the need to stay fresh in light of the large competition market and ease of entry.</p><p>This is a significant thing with the apps targeted for PhoneGap building: the rapid release and support of new html5 libraries and javascript mechanisms, like built-in promises, objects in ES6, O.o() in ES7, and the growing trend in web-components as a design model - these all mean that the need or desire to use a new key feature may require significantly restructuring the app to the point of a total rewrite of a major part of the main structure (either view appearance or control structure). When that happens, a new library or framework will be around to take advantage of the new features and make it easier to deploy them than the current libraries can.</p><p>Managing this requires improving the separation of concerns, which is why many JS developers (including myself) are starting to look away from monolithic frameworks like angular and more towards integrating libraries at each layer (model/store, controller/statechart, views without controller dependencies, and cleaner observer/binding made possible by O.o() and observe-js).</p><p>This I believe is the heart of mobile-web development.</p><p>Mobile apps tend to be short-term entities, expected to be significantly different within 3 years, or they will be replaced in the market by something that is significantly different. Whether or not you are still there depends on your own commitment to the problem domain your app is targeted for. Fashion, in technology or appearance, is much more the driver of change in mobile than actual features. Some apps lose out to competition with fewer features, merely because the older version looks clumsy or "old" in light of the sleeker competition, and I don't see that changing anytime soon.</p><p>The core exceptions are products that target enterprise markets, but there, the rules (and the money) are different.</p><p>But in all of that my core thought remains: using open source libraries requires having a process in place for dealing with them, either for incompatible updates or for internal bug fixes. But at least it is possible. With closed-source commercial libraries, there's only tracking incompatible updates, but there's no way to fix things yourself when the vendor can't, or won't, or simply doesn't (or they cease to exist which happens just as much as it does in the OpenSource world).</p><p>We have more options, but taking advantage of those options requires commitment to process. I believe it is better to accept it as the reality of modern development than to just hope someone else comes along with something better and maybe they won't move on this time.</p><p>Nobody said this job was easy. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1919967931">
	<div>
		<img src="https://disqus.com/api/users/avatars/joeshelby.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1919967931">9</a> (In reply to <a href="#c_1919966775">#7</a>) by Joe Shelby
		posted on 3/21/2015 at 4:36 PM
		</div>
		<div class="comment_text"><p>Indeed, All of this has to be balanced against the time you yourself plan to give to supporting your app. Is this a months long commitment? A year's long? More than that and you're bumping into a lifespan expectency that's very different from what it was years ago.</p><p>Mobile apps in particular currently have relatively short lifespans before going through significant rewrites because of new mobile design fashions (Material, IOS8), new mobile technologies (how many mobile-driven APIs have been published?), and the need to stay fresh in light of the large competition market and ease of entry.</p><p>This is a significant thing with the apps targeted for PhoneGap building: the rapid release and support of new html5 libraries and javascript mechanisms, like built-in promises, objects in ES6, O.o() in ES7, and the growing trend in web-components as a design model - these all mean that the need or desire to use a new key feature may require significantly restructuring the app to the point of a total rewrite of a major part of the main structure (either view appearance or control structure). When that happens, a new library or framework will be around to take advantage of the new features and make it easier to deploy them than the current libraries can.</p><p>Managing this requires improving the separation of concerns, which is why many JS developers (including myself) are starting to look away from monolithic frameworks like angular and more towards integrating libraries at each layer (model/store, controller/statechart, views without controller dependencies, and cleaner observer/binding made possible by O.o() and observe-js).</p><p>This I believe is the heart of mobile-web development.</p><p>Mobile apps tend to be short-term entities, expected to be significantly different within 3 years, or they will be replaced in the market by something that is significantly different. Whether or not you are still there depends on your own commitment to the problem domain your app is targeted for. Fashion, in technology or appearance, is much more the driver of change in mobile than actual features. Some apps lose out to competition with fewer features, merely because the older version looks clumsy or "old" in light of the sleeker competition, and I don't see that changing anytime soon.</p><p>The core exceptions are products that target enterprise markets, but there, the rules (and the money) are different.</p><p>But in all of that my core thought remains: using open source libraries requires having a process in place for dealing with them, either for incompatible updates or for internal bug fixes. But at least it is possible. With closed-source commercial libraries, there's only tracking incompatible updates, but there's no way to fix things yourself when the vendor can't, or won't, or simply doesn't (or they cease to exist which happens just as much as it does in the OpenSource world).</p><p>We have more options, but taking advantage of those options requires commitment to process. I believe it is better to accept it as the reality of modern development than to just hope someone else comes along with something better and maybe they won't move on this time.</p><p>Nobody said this job was easy. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1919972557">
	<div>
		<img src="https://disqus.com/api/users/avatars/joeshelby.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1919972557">10</a> (In reply to <a href="#c_1919963840">#6</a>) by Joe Shelby
		posted on 3/21/2015 at 4:40 PM
		</div>
		<div class="comment_text"><p>I've amended the post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1921655098">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1921655098">11</a> (In reply to <a href="#c_1919966775">#7</a>) by Raymond Camden
		posted on 3/22/2015 at 1:49 PM
		</div>
		<div class="comment_text"><p>1) no updates == danger: Yep, you are right on that. I was a bit too harsh on Ratchet for not updating over the year. I *do* think it is something to note. A project that hasn't been updated in a year may be very stable and not need updates. However, it is *also* possible that the project is abandoned. How about this - given a project hasn't been touched in a year - a developer should perhaps do extra checking to see if the project has become stable or left to rot? No activity doesn't mean either - just that you should look a bit closer.</p><p>2)  "If you do fear such an update of a dependency, then are you yourself also dependent on that potentially breaking change?" Oh certainly yes - that's a concern for choosing any project. But - to me - modifying the project to fix it means adding _another_ possible concern. I'd think a developer would possibly want to minimize such concerns. Again, imagine the case where the developer wants to use library X but has no intent in helping it. That's not nice, but probably accounts for 99% of the people using the product.</p><p>3) Ionic - they already announced support for Angular 2. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1921690419">
	<div>
		<img src="https://disqus.com/api/users/avatars/joeshelby.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1921690419">12</a> (In reply to <a href="#c_1921655098">#11</a>) by Joe Shelby
		posted on 3/22/2015 at 2:20 PM
		</div>
		<div class="comment_text"><p>"That's not nice, but probably accounts for 99% of the people using the product" - that doesn't mean one should, even in implication, encourage that. Perhaps being nice by example? :)</p><p>With open git repos and visible PRs, it is easier today to see if there's a backlog of submitted bug fixes that the maintainers haven't merged or looked at, thus checking the status of support. Back in the golden age (of a mere 5 years ago), all we had was digging through the bug reports in the email discussion group to look for the word "Beuller?".</p><p>It would be nice if library/framework maintainers would openly state that they don't have the time to be a maintainer anymore and open a call for someone to take over.</p><p>As for Ionic, well, good. I'll read up on them a bit later this week for familiarity, but as I've already written, I'm not a fan of huge frameworks on the UI side, especially as more and more of the heavyweight features are being built in to the standards and the browsers directly (like O.o()). "2.0" isn't the only reason I am not a fan of Angular - after a certain level of complexity, it starts to cease to be 'javascript' for me. (and I say this as someone who uses Sproutcore professionally, and would say the same thing about Sproutcore/Ember)</p><p>Sorry if I'm harping on 2.X syndrome, though, but I'm still bitter from the horrid history of Struts 2 and its utter failure to support our experiences from Struts 1 in the slightest (when your *configuration* files have become turing-compliant, there is a problem). When a 2.0 throws all 1.0 compatibility out the window, I feel that as an offense. Do like Ember (ex-Sproutcore) and just rename the thing. It actually served Ember better in the framework 'marketplace' by dropping the original name. By holding the name but having no migration path, Struts utterly failed to appease developer tensions, and Spring quickly took over as the JSP framework of choice for new J2EE. (I don't miss living in the J2EE world anymore - it is a serious brain-sucker.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1935295972">
	<div>
		<img src="https://disqus.com/api/users/avatars/robwoodall.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1935295972">13</a> by Rob Woodall
		posted on 3/30/2015 at 1:26 AM
		</div>
		<div class="comment_text"><p>You use Ratchet for the presentation layer at most. Framework 7 gets more into the app side of things and has more widgets than Ratchet. I don't know if Ratchet has the traction behind it anymore from a dev perspective. <a href="http://disq.us/url?url=http%3A%2F%2Fwww.idangero.us%2Fframework7%2F%23.VRil1JPF_YE%3AHJINgpl646BQIzylqCF9CkeCD2U&amp;cuid=3321886" rel="nofollow noopener" title="http://www.idangero.us/framework7/#.VRil1JPF_YE">http://www.idangero.us/fram...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1977002428">
	<div>
		<img src="https://disqus.com/api/users/avatars/anders_borg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1977002428">14</a> by Anders Borg
		posted on 4/20/2015 at 8:51 AM
		</div>
		<div class="comment_text"><p>Can someone shed some light on Ratchet's possible compatibility issues with older Android versions (and the pre-Chrome browser)? In a "support what users have" paradigm, PhoneGap apps need to support from Android 2.x (many have phones that can't be updated further) and iOS6 (3GS can't run any newer version). My experience is that the browser with the most issues is the pre-Chrome one in Android, and we've had to remove inline calculations for ratchet.css to work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2117559934">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_4jSDtGFrrp.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2117559934">15</a> by Анѓелко Милошевски
		posted on 7/5/2015 at 9:19 AM
		</div>
		<div class="comment_text"><p>I did a project few months ago with Ratchet and push.js works just fine ... i don't remember but I think the only bugs I had were transitions and ui, push.js worked just fine ... btw I'm making a Material Design Theme for Ratchet, but I'm not sure if the project is DEAD or NOT, could someone plz confirm that?!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3039017172">
	<div>
		<img src="https://disqus.com/api/users/avatars/csddavies.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3039017172">16</a> (In reply to <a href="#c_2117559934">#15</a>) by csddavies
		posted on 12/6/2016 at 6:42 PM
		</div>
		<div class="comment_text"><p>Did you ever create a Material Design Theme?  If so, I'd be interested.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3522314146">
	<div>
		<img src="https://disqus.com/api/users/avatars/iancikal.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3522314146">17</a> by ian cikal
		posted on 9/18/2017 at 12:08 AM
		</div>
		<div class="comment_text"><p>a very interesting discussion, although I am a bit constrained by language. but still I read to the end with the help of google translator.</p></div>
	</div>
</div>
		