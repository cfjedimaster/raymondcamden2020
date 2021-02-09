
<div class="comment" id="c_1713622424">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622424">1</a> by lint
		posted on 11/7/2005 at 10:44 PM
		</div>
		<div class="comment_text"><p>my reasoning is that isDefined is the closest coldfusion has to NULL, it always seems dirty to set a variable to "" when it is actually undefined. Ahh it's all in the details</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622426">2</a> by tony petruzzi
		posted on 11/7/2005 at 10:59 PM
		</div>
		<div class="comment_text"><p>well here is my logic.</p><p>I use CFPARAM whenever I have variables that are required and I'm not setting them for within my templage. A most common example is a form post.</p><p>I use isdefined when I'm checking for the existance of a value within a variable. Mostly this has to do with Arrays and Structures. An example of this is</p><p>&lt;!---/// <br>Here is a combo exmaple.<br>I use cfparam to make sure that I got the structure from the form post.<br>I then use isdefined to make sure that the structure contains the key I want.<br>Yes and I know that you would never have a form post a structure. I just did<br>this to show both methods.<br> ///---&gt;<br>&lt;cfparam name="form.PostStructure" default="" type="struct"&gt;</p><p>&lt;cfif isdefined("form.PostStructure.firstname")&gt;<br>	&lt;cfoutput&gt;#firstname#&lt;/cfoutput&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622425">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622425">3</a> by Christopher Wigginton
		posted on 11/7/2005 at 11:37 PM
		</div>
		<div class="comment_text"><p>isDefined works well on form submissions when checking which button was pressed such as having a submit button named "submit".</p><p>&lt;cfif isDefined("form.submit")&gt;</p><p>The cfparam default attribute can be dynamic, such as assigning url scope to form scope.</p><p>&lt;cfparam name="url.fuseAction" default="mainMenu"&gt;<br>&lt;cfparam name="form.fuseAction" default="#url.fuseAction#"&gt;</p><p>The cfparam name attribute can even be dynamic, such as iterating over a list to generate the cfparams.</p><p>&lt;cfset lstFormFields = "name,address,city,state,zip,telephone,fax,mobile,email"&gt;<br>&lt;cfloop list="#lstFormFields#" index="fname"&gt;<br>&lt;cfparam name="form.#fname#" default=""&gt;<br>&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622430">4</a> by Dave
		posted on 11/7/2005 at 11:43 PM
		</div>
		<div class="comment_text"><p>I really like being able to use a cfparam with a regex validator.  You could actually solve one of the things you said with it.  For example a regex could look for the inclusion of a . to see if it's an integer.  You could use regex to see if total numbers in a string are gt than 1 and if so that the first number has to be 1-9 and that would tell you for example if the number is GTE than 10.</p><p>That being said, I still use isDefined alot more than cfparam since I do mainly DAO's with a validate method now and that means im doing the methods myself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622429">5</a> by Sam
		posted on 11/7/2005 at 11:45 PM
		</div>
		<div class="comment_text"><p>I would use structKeyExists as all CF variables are in a structure (form, url, varaibles, etc).</p><p>&lt;cfif not structKeyExists(url,"id")&gt;<br>   &lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Furl.id%3A0bRnXeBrI7OIqL9bKyG2zQPmmP0&amp;cuid=3321886" rel="nofollow noopener" title="url.id">url.id</a>= -1&gt;<br>&lt;/cfif&gt;</p><p>I believe this will be slightly quicker than using isDefined.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622432">6</a> by Robert Blackburn
		posted on 11/8/2005 at 12:38 AM
		</div>
		<div class="comment_text"><p>I’ve personally also used isDefined() over CFPARAM simply because I was already within a CFSCRIPT block and didn’t want to break out of it simply to default my variables.</p><p>Ray, can you comment on the use of isValid() over isDeifned()? To me it seems like a better way to handle this over the traditional if/isDefined combination because it would allow typing checking (and may be a bit cleaner code too). Is there anything that should be considered when using isValid() in this way (performance or other caveats.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622434">7</a> by Spike
		posted on 11/8/2005 at 12:58 AM
		</div>
		<div class="comment_text"><p>isDefined() is bad m'kay.</p><p>Where ever possible you should use structKeyExists() rather than isDefined() to test for the existence of scope variables.</p><p>There are numerous reasons for this, but the primary one is that isDefined() looks in all scopes to see if the variable exists. That means that if you do this:</p><p>&lt;cfif isDefined("url.myvar")&gt;<br>  &lt;!--- do something ---&gt;<br>&lt;cfelse&gt;<br>  &lt;!--- do something else ---&gt;<br>&lt;/cfif&gt;</p><p>If the variable doesn't exist in the URL scope, the CF engine goes off and looks in all the implicit scopes to see if there's a variable called URL in them. If there is, it checks to see if it's a struct containing a myvar key.</p><p>That has some minor performance implications, and some pretty serious bug stomping ones. If you accidentally create a variable called url.myvar in one of the implicit lookup scopes you can have a hell of a time trying to figure out why this URL variable mysteriously appears and disappears, or why some weird default value seems to be getting inserted.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622438">8</a> by Spike
		posted on 11/8/2005 at 12:59 AM
		</div>
		<div class="comment_text"><p>As for whether to use cfparam or structKeyExists() I think that's been pretty well covered by everyone else.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622433">9</a> by Raymond Camden
		posted on 11/8/2005 at 1:17 AM
		</div>
		<div class="comment_text"><p>Spike - I'm not so sure I agree with you. I mean - what you say is technically right, but I don't know if I agree with the seriousness of it. While I'm sure people do it - I have yet to see someone make a variable called url.something in the form scope. Again - it could happen.... I'm not denying that. As for the performance issue - again - I don't deny it will be slower, but I'd argue that if it makes your code more readable to use isDefined (which is probably a personal decision), then you shouldn't be afraid to use it. My 2 cents.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622437">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622437">10</a> by Spike
		posted on 11/8/2005 at 1:27 AM
		</div>
		<div class="comment_text"><p>I would agree with you if it was purely a performance thing, but it's not. You can all too easily introduce a very subtle bug if you don't use structKeyExists(). For starters, you don't have to put the scope prefix with isDefined(). With structKeyExists() you do.</p><p>Take this example:</p><p>&lt;!--- Whoops! forgot to put the URL prefix here ---&gt;<br>&lt;cfif NOT isDefined("username")&gt;</p><p>&lt;cfelse&gt;</p><p>&lt;/cfif&gt;</p><p>That code might work perfectly until you have a cookie called username, a form variable called username, the same in any of the other implicit scopes.</p><p>That's 2 votes against isDefined(). It still works correctly if you either deliberately or accidentally leave off the scope prefix, and even if you do, it can still fail because of the implicit scope lookup.</p><p>I'm not suggesting for a minute that people go around creating session.url or session.form as a matter of course, but I've seen stranger things happen accidentally as a side-effect of some other code. That's the sort of thing that's incredibly hard to track down and debug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622439">11</a> by Raymond Camden
		posted on 11/8/2005 at 1:51 AM
		</div>
		<div class="comment_text"><p>Ah - even if isDefined was faster than cfparam, I'd still warn folks away from NOT using a fully scoped variable. That's just plain bad - but I don't consider it a 'vote' against isDefined. It is a vote against not scoping your variables.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622440">12</a> by Spike
		posted on 11/8/2005 at 1:54 AM
		</div>
		<div class="comment_text"><p>The fact that isDefined() allows this to escape un-noticed is why I said it's a vote against.</p><p>It's much easier to spot that someone's using isDefined() instead of structKeyExists() than to spot that they've forgotten to scope the variable inside isDefined().</p><p>It's a question of the machine catching the bug rather than you having to be a "perfect" human being. We all know we can't be that, so I prefer to take advantage of those little bits of assistance I can get by using structKeyExists() instead of isDefined().</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622442">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622442">13</a> by Raymond Camden
		posted on 11/8/2005 at 1:58 AM
		</div>
		<div class="comment_text"><p>Perhaps. I'm still not entirely convinced - but I see your point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622441">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622441">14</a> by Doug Cain
		posted on 11/8/2005 at 2:42 AM
		</div>
		<div class="comment_text"><p>I'm with spike on that one, structkeyexists makes much more sense in most cases and forces you to think of the scope. IsDefined almost feels like a depreciated function now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622444">15</a> by Sean Corfield
		posted on 11/8/2005 at 3:49 AM
		</div>
		<div class="comment_text"><p>With isDefined("<a href="http://disq.us/url?url=http%3A%2F%2Furl.foo%3Aieh61wkVV61L0A7cbYiUK2R5ZP8&amp;cuid=3321886" rel="nofollow noopener" title="url.foo">url.foo</a>") CFMX will keep searching out through scopes to see if it can find a match:</p><p>cfset <a href="http://disq.us/url?url=http%3A%2F%2Fvariables.url.foo%3AmD1mfDw61WSxx_7VOfG5W0vrwjI&amp;cuid=3321886" rel="nofollow noopener" title="variables.url.foo">variables.url.foo</a> = 42</p><p>isDefined("<a href="http://disq.us/url?url=http%3A%2F%2Furl.foo%3Aieh61wkVV61L0A7cbYiUK2R5ZP8&amp;cuid=3321886" rel="nofollow noopener" title="url.foo">url.foo</a>") is TRUE</p><p>structKeyExists(url,"foo") is FALSE</p><p>I never use isDefined() unless I have one of those extremely rare cases where I don't know the scope / format of a variable name, e.g., isDefined(someVariable) as opposed to isDefined("someVariableName").</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622445">16</a> by Robert Blackburn
		posted on 11/8/2005 at 5:07 AM
		</div>
		<div class="comment_text"><p>Does anyone know if isValid() also search through the scopes the same way isDefined() does? According to Pete Freitag the IsValid() function performs data validation just like the CFPARAM tag:<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.petefreitag.com%2Fitem%2F224.cfm%3Al9yBY4FjRpklCMX2vNocSho05_w&amp;cuid=3321886" rel="nofollow noopener" title="http://www.petefreitag.com/item/224.cfm">http://www.petefreitag.com/...</a><br>Does that include how scope searching is done?<br>If isValid() does not have the same problems as isDefined(), I personally would strongly favor that over structKeyExists() since it seem to more explicitly state what its intended purpose is (to initialize/default/define the variable).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622447">17</a> by Sean Corfield
		posted on 11/8/2005 at 6:06 AM
		</div>
		<div class="comment_text"><p>Robert, no, isValid() just tests *values* not variable names.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622449">18</a> by Robert Blackburn
		posted on 11/8/2005 at 7:04 AM
		</div>
		<div class="comment_text"><p>Got it, sorry I misunderstood Pete.<br>Thanks for the clarification.<br>I apologize, did mean to confuse things.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622446">19</a> by JAlpino
		posted on 11/9/2005 at 4:55 AM
		</div>
		<div class="comment_text"><p>In the context of &lt;cfparam&gt; vs. isDefined() neither is better, the 'better' choice is the one that makes the most sense for what you are trying to accomplish. For instances, if you require certian variables to exist in your template before you use them, then you might be better off using &lt;cfparam&gt;:</p><p>&lt;!--- Blow up if the variable is missing ---&gt;<br>&lt;cfparam name="request.iamrequired" type="array"&gt;</p><p>If on the other hand you weren't concerned if a variable exists but would take some action if it was, then you might be better off using isDefined() or structKeyExists().</p><p>&lt;!--- Do I take some action? ---&gt;<br>&lt;cfif isDefined("request.somevariable")&gt;<br>       &lt;!--- Do something here ---&gt;<br>&lt;cfelse&gt; <br>       ......</p><p>There are many different scenarios that would make one a better choice than the other, again it all depends on what you want to do.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622448">20</a> by David Pinero
		posted on 11/10/2005 at 7:42 AM
		</div>
		<div class="comment_text"><p>Ah!  Well as the submitter of the original question, I'd like to thank the Jedi for clearing this up.  And he is correct, my question WAS more specifically, why do some people use an isDefined/If combo over CFPARAM.  I can see now that isDefined does offer a lot more in terms of ancillirary action if you desire that upon discovery of non-present (or present) variable.  I'm still learning, so it's going to take me awhile to understand the relevance of the other points being discussed in this comment area.  I have no idea why I'd ever use a "strucKeyExists", but that's for another (more advanced) day! LOL</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622452">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622452">21</a> by David McGuigan
		posted on 7/26/2007 at 11:55 AM
		</div>
		<div class="comment_text"><p>I'm with Ray on this one, and then some.</p><p>isDefined() vs. structKeyExists() is an entirely separate issue to explicit variable reference scoping.</p><p>Arguing otherwise, to me, sounded like saying "You should drive a minivan instead of a coupe because a minivan won't even let you break 100 miles per hour, so you won't have to worry about how 'perfectly' you're driving, your maximum damage is that derived from the force achieved with a speed no greater than 100 mph. It's a type of preventative maintenance, although, you'll never be able to go as quickly or turn as sharply and efficiently as you could in a coupe."</p><p>And yes, I enjoy exaggeration.</p><p>Whether you choose not to use explicit scoping in every variable reference in all of your code (with rogue, sporadic, legitimately strategic exceptions discussed by Ben in the certified developers' study guide) is your own conscious defect, not the inevitable result of a faulty programming style.</p><p>All costs and benefits considered, isDefined is MUCH MORE READABLE and fluid than structKeyExists. It's a more concise, obvious function name, with a single parameter which instantly, logically describes scope in a single location. structKeyExists has one parameter with and one without quotation marks (though I use single apostrophes), is less intuitively named (isStructKey would better follow suit to isDefined and other preferred naming patterns), and is slower to type, revise, and implement with dynamic values.</p><p>These minutia cumulatively entail a few monumental differentials.</p><p>1. structKeyExists, I've heard, though I'm not fully convinced because it's hard for me to accept that keyword-scoped variable names aren't exempt from the order-of-evaluation process, that structKeyExists will provide minimal, trivial performance gains. This, to me, is the singular legitimate benefit. But, to be honest, if you're so concerned about performance that it would prevent you from using an evaluative function like isDefined, take out a loan and buy a slightly more powerful server. I promise you'll thank me for it later.</p><p>2. isDefined can save efficient developers exponential amounts of 'human time.' The quickness, fluidity, and comfort with which you architect new code, dive back into old code, and self-document your logic with clear, easy-to-comprehend programmatic organization. Other people reading your code will thank you. You will thank your prior self once time machines are affordable. Your kids will applaud you while drifting through your life's work's sourcecode. You will save yourself and your employer, if separate, money because you will be programming MORE QUICKLY than the miniscule performance gains you purposely sacrifice by using isDefined over structKeyExists.</p><p>2 &gt; 1 evaluates to true by about 800%.</p><p>Use isDefined. Explicitly scope 99.9995% of the time. Enjoy revisiting code like never before.</p><p>The end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622451">22</a> by David McGuigan
		posted on 7/26/2007 at 12:00 PM
		</div>
		<div class="comment_text"><p>Yikes. I just read that over. My English hasn't been that bad since kindergarten. And I just realized that the prior post to mine was in 2005. Embarrassing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622455">23</a> by Chris
		posted on 8/27/2007 at 5:44 PM
		</div>
		<div class="comment_text"><p>I have to respectfully disagree with those who say "neither is better". I've worked with CF for several years, and I consider isdefined one of the more harmful features of the language, second only to cfinclude. These two features make managing and scaling CF applications nearly impossible, since they almost require the user to write nonsensical spaghetti code. The reader had the correct intuition. Encapsulating and declaring a template's variables at the top of the page with cfparams is infinitely cleaner, easier to document, and more maintainable than ambiguously hiding them throughout the page within murky isdefined expressions. IsDefined should give nightmares to anyone who's taken a functional or object-oriented programming class.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622453">24</a> by Raymond Camden
		posted on 8/27/2007 at 5:49 PM
		</div>
		<div class="comment_text"><p>Wow. Thats a pretty bold statement. I have to say I do not agree with you at all. CFINCLUDE is perfectly fine tool. Like any other feature it can be misused. I do not use cfinclude for reusable functions and the like. But for things like including a common header for example it makes perfect sense.</p><p>Also - there is nothing to stop you from using cfparam in the middle of the page, or from using isdefined on top of the page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713622454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713622454">25</a> by Chris
		posted on 2/25/2008 at 11:41 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>If all you're using cfinclude for is to prepend a header or append a footer, then I agree, that that's an (if not *the*) appropriate usage for cfinclude. Unfortunately, most bad coders I've met rarely stop there. I've seen 6-levels of nested cfincludes, which there's really no excuse for. Not only is it impossibly obfuscated, but it's hard to trace errors since CF's error handling mechanism doesn't follow nested cfincludes very well. Granted, no language can stop bad programmers from writing bad code, but cfinclude should really be redesigned to throw an exception if it's used more than one level deep.</p><p>And I'm much less concerned with cfparams being used elsewhere in a template, because at least they're deterministic. If you see a cfparam, you know something is *definitely* defined. Obviously, with isDefined() that's not the case. If some poor coder has wrapped a huge chunk of code conditioned with an isDefined(), then there's a good chance you'll waste a lot of time reverse engineering the code to try and find where (if at all) that variable's defined.</p></div>
	</div>
</div>
		