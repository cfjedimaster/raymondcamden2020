
<div class="comment" id="c_1713662016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662016">1</a> by Kyle Hayes
		posted on 2/7/2007 at 8:40 PM
		</div>
		<div class="comment_text"><p>Ray, what was it that you thought is a good idea, putting the vars in the attribute scope or in the event object? Thanks for the rest of the review. As one who is very intersted in frameworks, this is one that I have not touched on yet. I will be quite intrigued in looking forward to upcoming posts on Fusebox.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662020">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662020">2</a> by dickbob
		posted on 2/7/2007 at 8:44 PM
		</div>
		<div class="comment_text"><p>A better starting point for docs is...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ffuseboxframework.org%2Findex.cfm%3Ffuseaction%3Ddocumentation.WhatsNewInFusebox5%3Aigrkf8QhnHGKXRDG2LTm7PRCDQI&amp;cuid=3321886" rel="nofollow noopener" title="http://fuseboxframework.org/index.cfm?fuseaction=documentation.WhatsNewInFusebox5">http://fuseboxframework.org...</a></p><p>Kevin Roche has also started a new set of docs (<a href="http://disq.us/url?url=http%3A%2F%2Ftrac.fuseboxframework.org%2Ffusebox%2Fwiki%2FDocumentationForReview%29%3AgkwIODn7ajsDdGaSUmWTsBxzfy4&amp;cuid=3321886" rel="nofollow noopener" title="http://trac.fuseboxframework.org/fusebox/wiki/DocumentationForReview)">http://trac.fuseboxframewor...</a>.</p><p>You'll see a section on "New execution modes" which will explain the refresh functions you want.</p><p>There's also a Firefox plugin (<a href="http://disq.us/url?url=http%3A%2F%2Fcecf1.unh.edu%2Ffusebox%2F%29%3ACq6CPjjpAViBTgY7H20U6p4lmv8&amp;cuid=3321886" rel="nofollow noopener" title="http://cecf1.unh.edu/fusebox/)">http://cecf1.unh.edu/fusebox/)</a> which will give you a right-click method of invoking them.</p><p>As I think Sean mentioned, there is a Team being set up to review the doc's.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662018">3</a> by Raymond Camden
		posted on 2/7/2007 at 8:48 PM
		</div>
		<div class="comment_text"><p>@dick: Sean had pointed out the wiki to me. What I'm doing though is approaching this as a stranger and following the docs I see in the navigation. Most folks can't bug Sean when they need to. ;) I know its a bit anal - but I'm really trying to approach this as I think a normal developer would. Does that make sense?</p><p>So based on that - I can tell you I normally would not have followed a link with "WhatsNewInFusebox5". I mean - as someone who is new to all this - I couldn't tell you what was in Fusebox 4. Make sense?</p><p>The firefox plugin is sweet. I'd like to see that for Model-Glue.</p><p>@kyle: The idea is that the framework considers the stuff coming in (url/form) as attributes for the event. Your code shouldn't care where it came from, it should just work with the attributes. So in both MG/FB, there is an abstraction to these event attributes and you don't directly access form. or url.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662014">4</a> by Raymond Camden
		posted on 2/7/2007 at 8:52 PM
		</div>
		<div class="comment_text"><p>I want to add one quick point. I'm definitely picking on Fusebox and it's docs. My docs aren't much to write home about. I'd also like to see improvements to the MG docs. Again though - I'm trying to describe my experience in picking this up. My only intent is to help - not tear down. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662013">5</a> by DK
		posted on 2/7/2007 at 9:10 PM
		</div>
		<div class="comment_text"><p>I don't think you're being too negative. When I first tried out fusebox I ran into many of the same pitfalls. I kind of got the idea from my own general research with other fusebox people, but the docs seemed to be a bit deeper water than the point you would be at starting from scratch over in the shallow end.</p><p>The point about Sean relates here too, me posting about my shortcomings with the docs doesn't get a more immediate reaction than yours will. Good to hear they are reviewing them though.  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662019">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662019">6</a> by Dan
		posted on 2/7/2007 at 10:22 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I completely agree with you regarding the documentation. At a minimum the Fusebox website should link to the best third party tutorials. I'm surprised how hard it is to find a good example of how to setup a required login screen or to display content in a layout fuse for example. Some docs suggest using a 'plugin' and others suggest using a 'global fuseactions'. ...er ok, what's the difference between a plugin and a fuseaction? I'm also being a little facetious, but it is a problem for those of us who don't have a long time 'fuseboxer' in my shop to show me the ropes.</p><p>That said, with some persistent searching on Google, I tracked down an excellent series of tutorials below that don't seem to be linked elsewhere.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjohn.beynon.org.uk%2Fdownloads%2FLearnFB_lesson1.pdf%3AL0p1VxkeIerqUoC7zsZpIJE-JbQ&amp;cuid=3321886" rel="nofollow noopener" title="http://john.beynon.org.uk/downloads/LearnFB_lesson1.pdf">http://john.beynon.org.uk/d...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fjohn.beynon.org.uk%2Fdownloads%2FLearnFB_lesson2.pdf%3AAfjtyXmx0nxJo8JJfoyNllgR-4k&amp;cuid=3321886" rel="nofollow noopener" title="http://john.beynon.org.uk/downloads/LearnFB_lesson2.pdf">http://john.beynon.org.uk/d...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fjohn.beynon.org.uk%2Fdownloads%2FLearnFB_lesson3.pdf%3Au2tJtS0Lb78cZWFCKZ1ItVTQ56Q&amp;cuid=3321886" rel="nofollow noopener" title="http://john.beynon.org.uk/downloads/LearnFB_lesson3.pdf">http://john.beynon.org.uk/d...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fjohn.beynon.org.uk%2Fdownloads%2FLearnFB_lesson4.pdf%3AFysfKvaf0apu1b6mvtMCCpZ6I1w&amp;cuid=3321886" rel="nofollow noopener" title="http://john.beynon.org.uk/downloads/LearnFB_lesson4.pdf">http://john.beynon.org.uk/d...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fjohn.beynon.org.uk%2Fdownloads%2FLearnFB_lesson5.pdf%3AH3BCZcA67714Tt_kWmtV1O3zVGY&amp;cuid=3321886" rel="nofollow noopener" title="http://john.beynon.org.uk/downloads/LearnFB_lesson5.pdf">http://john.beynon.org.uk/d...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fjohn.beynon.org.uk%2Fdownloads%2FLearnFB_lesson6.pdf%3AuDncV5bBG8x2hkPGlRRF2amVv6k&amp;cuid=3321886" rel="nofollow noopener" title="http://john.beynon.org.uk/downloads/LearnFB_lesson6.pdf">http://john.beynon.org.uk/d...</a><br><a href="http://disq.us/url?url=http%3A%2F%2Fjohn.beynon.org.uk%2Fdownloads%2FLearnFB_lesson7.pdf%3ArqtZWvxBzhJi9gxLei_G6-FHO-A&amp;cuid=3321886" rel="nofollow noopener" title="http://john.beynon.org.uk/downloads/LearnFB_lesson7.pdf">http://john.beynon.org.uk/d...</a></p><p>That said, I've been really impressed with the framework as I learn more about it. It's primary limitation from what I can tell is simply documentation and examples.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662017">7</a> by charlie griefer
		posted on 2/7/2007 at 10:25 PM
		</div>
		<div class="comment_text"><p>having just recently gotten into using a framework (fusebox), i did find the documentation lacking.</p><p>haven't really brought it up, because it seems to be somewhat of a sore spot with some of the people who have invested time into the framework itself.  i've seen the comment about lack of documentation met with the response of "we've put a lot of time into writing the framework, we have families, jobs, lives, etc".  i understand this completely and sympathize.  didn't want to sound unappreciative of the efforts that went into building (and maintaining) the framework, so i just kept quiet.</p><p>there are a lot of sample applications up on the fusebox site.  no doubt about that.  but for a n00b like me, that doesn't really do it.  i can look at the sample code... but what am i getting out of it?  i can see -how- it's been done but that doesn't explain -why- it's been done.  sample code is a great complement to documentation, but it shouldn't really serve as documentation.</p><p>as some others have mentioned, teratech seems to be going balls-to-the-wall to do something about the documentation (or lack thereof).  i filled out a survey a while back, and got a slew of e-mails yesterday (because i had indicated a willingness to help) about getting the process started.</p><p>not sure what i'll be able to contribute, but i'll be doing what i can to help out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662022">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662022">8</a> by charlie griefer
		posted on 2/7/2007 at 10:31 PM
		</div>
		<div class="comment_text"><p>@dan: john's tutorials are -fantastic-, and probably played the biggest factor in me getting over a lot of hurdles.  my only comment is that they're geared towards FB 4, and i came into a job using 4.1.</p><p>so my personal concern was "learning" 4.0 while my company was hoping i'd be able to pick up the 4.1 ball and run with it.</p><p>but no sleight to John.  in fact, i tried to find a wish list link or a donate button on his blog but couldn't find either (john?  got a link??) :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662024">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662024">9</a> by Steve Nelson
		posted on 2/7/2007 at 10:56 PM
		</div>
		<div class="comment_text"><p>The Fusebox folks had a meeting at the Frameworks conference. We divvied up a million tasks for Fusebox, one of the big ones is "documentation". We're going to have a breeze meeting in the next week to figure out what docs we currently have and what docs we're missing. Then we'll task out who's going to write the missing docs and who's going to assemble it all together.</p><p>I figure after 10 years we should consider writing documentation for Fusebox. Hopefully we'll be successful.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662025">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662025">10</a> by Raymond Camden
		posted on 2/7/2007 at 11:02 PM
		</div>
		<div class="comment_text"><p>Steve, outside of the "normal" docs, I'd also recommend a Quick Start guide. I think the Model-Glue one is a perfect way to quickly get up to speed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662026">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662026">11</a> by Jeff Self
		posted on 2/7/2007 at 11:31 PM
		</div>
		<div class="comment_text"><p>I'd like to add my 2 cents worth.  This is not directed at the FuseBox guys, but all developers in general. When you write your docs, please, please provide them in a format that is useful.  Preferably, HTML for online viewing and PDF for printing.  Anything else is really unacceptable.</p><p>For those of you writing documentation, you may want to take a look at DocBook.  It's a schema designed for writing technical documentation.  It originated in SGML but has since been moved over to XML.  All documentation is stored in XML files that can "easily" be saved out to various formats(pdf, html, ps, text, rtf, doc, etc).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662035">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662035">12</a> by Raymond Camden
		posted on 2/7/2007 at 11:37 PM
		</div>
		<div class="comment_text"><p>Ditto Jeff. One of the main reasons I downloaded OpenOffice was for the one click PDF generation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662037">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662037">13</a> by Damon Gentry
		posted on 2/8/2007 at 12:27 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Fusebox does indeed generate CFML code that is cached and executed.  Take a look inside your 'parsed' directory in your application folder.  You'll see that the Fusebox Framework is actually creating files (and overwriting them if it needs to).  The files are named with a specific convention:  'circuit.fuseaction.cfm'.  If the Runtime determines that the configuration hasn't changed, then the parsed fuseaction template is executed.</p><p>There is also a configuration setting in 'fusebox.xml' that determine the frequency of re-generating these parsed files.    It's a parameter named 'mode'.  To get Fusebox to 'refresh' the configuration on each request, I set mine to:</p><p>&lt;parameter name="mode" value="development-full-load" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662038">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662038">14</a> by Raymond Camden
		posted on 2/8/2007 at 12:31 AM
		</div>
		<div class="comment_text"><p>Damon, thanks. Someone needs to update the docs for valid values for mode. (Although that kind of stuff should be later in the docs anyway.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662040">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662040">15</a> by johnB
		posted on 2/8/2007 at 12:47 AM
		</div>
		<div class="comment_text"><p>Yeah, my tutorials are related to 4 but the main part hasn't changed all that much - that aside I am on the team tasked with the new documentation and i think we're going to come out with something really good! and we're only on the table of contents so far :)</p><p>@charlie - john at beynon dot org dot uk - paypal, itunes gift cards, cf licenses etc etc....mucho thanks in advance :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662041">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662041">16</a> by Ali
		posted on 2/8/2007 at 3:38 AM
		</div>
		<div class="comment_text"><p>Ray -</p><p>To be fair, all the things you mentioned are actually located in the docs.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.fusebox.org%2Findex.cfm%3Ffuseaction%3Ddocumentation.WhatsNewInFusebox5%3AqpWUXRf4jg_9oml0y6C_Cnp9bsY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.fusebox.org/index.cfm?fuseaction=documentation.WhatsNewInFusebox5">http://www.fusebox.org/inde...</a></p><p>In the section labelled "New Execution Modes".<br>I had trouble too, figuring out how to make fusebox reload the xml file.</p><p>It tells you what url variables to use, and mentions the development mode vs. the production mode.</p><p>Granted one has to read the Readme file in the fusebox5 folder, to find the link.</p><p>I agree though, it could be more obvious, or laid out better.</p><p>Ali</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662042">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662042">17</a> by Sean Corfield
		posted on 2/8/2007 at 6:39 AM
		</div>
		<div class="comment_text"><p>Yup the Fusebox 4 docs on the site are pretty confusing and, as Steve says, we're working on it. Now that TeraTech has taken over Fusebox and there is a *very* active Team Fusebox group, you'll see a *lot* of changes over the coming months (probably even over the coming weeks!).</p><p>Take a look at this page to see just what is starting to happen:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ftrac.fuseboxframework.org%2Ffusebox%2Fwiki%2FFuseboxCommunityCoordinatingHelp%3AYPsA5GzZXPD43j-FLtaPudlPX7Q&amp;cuid=3321886" rel="nofollow noopener" title="http://trac.fuseboxframework.org/fusebox/wiki/FuseboxCommunityCoordinatingHelp">http://trac.fuseboxframewor...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662044">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662044">18</a> by Charlie Arehart
		posted on 2/8/2007 at 9:34 PM
		</div>
		<div class="comment_text"><p>Great stuff, Ray. Keep it up. And you've really hit the nail on the head in your lament over the docs.</p><p>Like Charlie G.'s experience, I too have looked at FB over the years and each time been dismayed by the lack of gentle introductory docs. And since I was looking at it as much to help others understand it, and to be able to recommend it (rather than having to learn it for some particular project), I just didn't have the energy to dig in on my own. As for recommending it to others, I was left feeling it "wasn't ready yet".</p><p>I certainly have respected those involved all along, so I too didn't want to decry it out loud but rather just lamented it and hoped things would improve. I would mostly just point out books like Jeff and Nat's "Fusebox: Developing ColdFusion Applications" as a good starting point and leave it for folks to decide for themselves.</p><p>When it was the only f/w game in town, the doc dilemma just left a lot of people on the outside looking in. With the tremendous new interest in f/w's (fascinating to watch the maturing of the community), there are certainly more people willing to give FB a look, so now is indeed the time to shine the welcome mat.</p><p>Ray's series of entries here look very promising. The resources identified in comments here (especially John B's--you go, boy!) are wonderful. And the news of the renewed docs efforts by the FB team are very encouraging.</p><p>As Ray says in his comment, the "what's new doc" Ali points to, while indeed useful for those going from one release to the next, is just really not at all suitable for someone coming to the f/w for the first time. That's where perhaps John B's tutorial being updated, or some other variant like the MG quickstart, will be SO helpful.</p><p>It would seem that even pointing folks to 3rd party resources (as Dan recommended) and the Wiki (and even the several books) would for now be better than leaving them with nothing more than the "what's new".</p><p>Some may say "ok, ok, the points been made, we said we're working on it". But I offer this, like Ray, to validate the feelings others may have had and reiterate the importance of the need. Even if it's been discussed to death within the ranks, those on the outside wouldn't know. This really isn't a "bash f/w" thread. Seems everyone here is instead trying to encourage--even bordering on doing an "intervention", or simply speaking "the truth in love". :-)</p><p>Looks like a new day dawning for FB. First with Sean's efforts, and now Teratech's and the community. I wish the effort well.</p><p>While some will come slinging mud from past experiences, I hope such people would give it as much due consideration as they would expect of (and defend) any tool they've long supported but which has matured to address rough spots. Indeed, it really seems this doc/intro aspect is the only glaring remaining long-standing problem, so the sooner it's resolved, the better.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662043">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662043">19</a> by BL
		posted on 2/27/2007 at 11:56 AM
		</div>
		<div class="comment_text"><p>Well said Charlie. Great post.</p></div>
	</div>
</div>
		