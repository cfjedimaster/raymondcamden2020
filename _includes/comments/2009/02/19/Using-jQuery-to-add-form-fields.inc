
<div class="comment" id="c_1713713115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713115">1</a> by Kyle Hayes
		posted on 2/19/2009 at 11:10 PM
		</div>
		<div class="comment_text"><p>I've never been a fan of adding elements to the dom via strings of html. I much prefer the createElement approach. I find it to be better practice.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713121">2</a> by Brian Swartzfager
		posted on 2/19/2009 at 11:14 PM
		</div>
		<div class="comment_text"><p>Once you use the jQuery clone() function to clone a node, you can then use the attr() function on the clone element/elements to change the name or ID.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713118">3</a> by Neil Bailey
		posted on 2/19/2009 at 11:15 PM
		</div>
		<div class="comment_text"><p>Ray, when I check out your test, and click the 'add' button, I get 'console not defined' JS error.</p><p>That being said, I have checked out jQuery based solely on the exuberance you have displayed about it in your blog posts.</p><p>I am amazed at its versatility!  While I can't say its exactly _easy_ to use, the jQuery mailing list is EXTREMELY responsive and helpful, and I can see us using this in our site in the very near future.</p><p>We are still using CF7 (it works for us, and mgmt feels if it ain't broke....), and are using AjaxCFC for our AJAX calls, and jQuery makes using Rob's package SO much easier.</p><p>So, thanks for pointing us in the right direction.  Again.</p><p>And fix your test page :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713119">4</a> by Raymond Camden
		posted on 2/19/2009 at 11:31 PM
		</div>
		<div class="comment_text"><p>@NB: I removed the console messages. How dare you surf w/o Firebug installed? ;)</p><p>@Kyle: It seems like for my use here, adding about 3 form fields, labels, etc, that adding by createElement would be somewhat slow (not slow to run, slow to write)</p><p>@Brian - do you know if clone will return the 'package'? Ie, I clone the fieldSet and get back X, X being the copy of the fieldSet so I could then dig into it and make the changes. Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713116">5</a> by Jonathan
		posted on 2/19/2009 at 11:38 PM
		</div>
		<div class="comment_text"><p>i've used clone() before. one caveat, if you have the text fields populated and then use clone, the value text also gets cloned so you have to then use jquery to clear out the values of the new form elements as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713125">6</a> by Josh Nathanson
		posted on 2/19/2009 at 11:46 PM
		</div>
		<div class="comment_text"><p>Ray - what I've done before is keep a "blank" fieldset that is hidden (display:none) that I can clone as needed - it serves as a "template" for added fieldsets.  This way you don't have to worry about picking up data from fields that have been filled already (which could happen if you cloned your onscreen fields).  Then use the field renaming process that Brian mentioned in your addperson function.</p><p>This hidden fieldset can be outside the form tags so you don't have to worry about it when you post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713120">7</a> by Raymond Camden
		posted on 2/19/2009 at 11:55 PM
		</div>
		<div class="comment_text"><p>@Josh: That's sexy. I'm going to try that. I'm still wondering though - my q to Brian - do we get a pointer back to the new 'block'?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713126">8</a> by Josh Nathanson
		posted on 2/20/2009 at 12:00 AM
		</div>
		<div class="comment_text"><p>Yeah you do get the pointer back to the new block -- it might look something like this in your addPerson function:</p><p>var newset = $("#hiddenFieldset").clone();<br>$("input[name=firstname]", newset).attr("name", "firstname"+current);<br>etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713117">9</a> by Jon Hartmann
		posted on 2/20/2009 at 12:12 AM
		</div>
		<div class="comment_text"><p>While a template inside a fieldset outside of the form works, I'm surprised that jQuery doesn't have a native templating system. Prototype.js can create a template with something like:</p><p>var template = new Template('&lt;input type="text" name="field#{number}" value="" /&gt;&lt;br /');</p><p>And then to add it you would call:</p><p>new Insertion(<br>  'bottom': template.evaluate({number: currentCount++});<br>);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713114">10</a> by Brian Swartzfager
		posted on 2/20/2009 at 12:26 AM
		</div>
		<div class="comment_text"><p>@Ray: Sorry to be late in responding--stepped away from the computer for awhile.</p><p>But Josh gave you pretty much the same answers I would have.  I also tend to use a blank, hidden "template" element to use with the clone() function, then alter the newly cloned element as needed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713122">11</a> by Emilie
		posted on 2/20/2009 at 12:45 AM
		</div>
		<div class="comment_text"><p>Ray -</p><p>Joern's Validation plugin includes a template utility that will replace {n} placeholders with arguments. This demo makes use of it: <a href="http://disq.us/url?url=http%3A%2F%2Fjquery.bassistance.de%2Fvalidate%2Fdemo%2Fdynamic-totals.html%3AQgIrBuMX0IDJdqioxfWr6otgc4w&amp;cuid=3321886" rel="nofollow noopener" title="http://jquery.bassistance.de/validate/demo/dynamic-totals.html">http://jquery.bassistance.d...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713124">12</a> by Raymond Camden
		posted on 2/20/2009 at 12:54 AM
		</div>
		<div class="comment_text"><p>@Brian/Josh - Ok, I'll do an update using clone. SHould be cleaner.</p><p>@Emilie: Interesting. I used that in one of my demos. I'm going to avoid that for now though - I want to do this stuff in baby steps. So my first step is to improve the process w/ clone. Then I'll add the validation. Of course, if I clone, I want need the templating stuff anyway since I'll just use DOM manipulation on the new node.</p><p>Of course... now that I think about it - I will have to do about 6 DOM calls (changing IDs, NAMEs), so it may make sense to NOT use DOM manipulation. Templating may be quicker. But that has the side effect of me needing to update the string if I change the main 'package' I have to clone. Then again, that would also apply to DOM as well.</p><p>Confusing! Ok, I'll take it easy at first and try clone next.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713123">13</a> by Jon Hartmann
		posted on 2/20/2009 at 1:04 AM
		</div>
		<div class="comment_text"><p>I put together an example of using a Prototype Template if any one is interested:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.jonhartmann.com%2Findex.cfm%2F2009%2F2%2F19%2FExample-of-using-Template-in-Prototype%3ARhc8GXGYOJ6d_vX21htCoMyynvo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.jonhartmann.com/index.cfm/2009/2/19/Example-of-using-Template-in-Prototype">http://www.jonhartmann.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713128">14</a> by Raymond Camden
		posted on 2/20/2009 at 1:35 AM
		</div>
		<div class="comment_text"><p>I got to admit - I find that a bit hard to follow. I'll have to read it a few times. (I haven't looked at Prototype in ages.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713130">15</a> by Hatem Jaber
		posted on 2/20/2009 at 3:30 AM
		</div>
		<div class="comment_text"><p>I didn't read the comments so i'm not sure if anyone mentioned that the validation plugin already has this built in. The way it works is that you create a "template" which is the form fields that you want to create new rows from which is hidden. Here's the link to the authors site:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fbassistance.de%2Fjquery-plugins%2F%3AwKf7MK6bEo6HfXtsUUBwbIT4sfk&amp;cuid=3321886" rel="nofollow noopener" title="http://bassistance.de/jquery-plugins/">http://bassistance.de/jquer...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713127">16</a> by Raymond Camden
		posted on 2/20/2009 at 3:49 AM
		</div>
		<div class="comment_text"><p>I knew that he had a template style thing - but - I thought it was primarily for error templates, ie, so you could make a generic error: You must type {1} characters, and his code would replace {N} with the right value. I wasn't aware of the use in generating new form fields. I'll have to dig.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713129">17</a> by Brian Swartzfager
		posted on 2/20/2009 at 3:50 AM
		</div>
		<div class="comment_text"><p>@Ray: I took your demo and reworked it to use cloning based on a template (much like Josh described in his earlier comment) using just jQuery.</p><p>I wrote it such that you don't have to update each "for", "name", and "id" attribute individually.  You can see it/view the code for it here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.swartzfager.org%2Fblog%2FdemoFiles%2FclonedFields%2F%3ATCz7PxUr8zoebpD9XP2EM2JnXUg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.swartzfager.org/blog/demoFiles/clonedFields/">http://www.swartzfager.org/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713131">18</a> by Jon Hartmann
		posted on 2/20/2009 at 4:53 AM
		</div>
		<div class="comment_text"><p>Not sure if you were skipping it for examples sake, but you're lacking a formal controller setup for you scripts (which might have been part of the confusing when looking at my example). I just finished a post about JS controllers on my page: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.jonhartmann.com%2Findex.cfm%2F2009%2F2%2F19%2FEvolution-of-a-JS-Controller-Scheme%3AHW23fhgGF5C8jI2NC0IdNpLvD3I&amp;cuid=3321886" rel="nofollow noopener" title="http://www.jonhartmann.com/index.cfm/2009/2/19/Evolution-of-a-JS-Controller-Scheme">http://www.jonhartmann.com/...</a><br>That might help dispel some of the confusion about my example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713139">19</a> by Raymond Camden
		posted on 2/20/2009 at 7:03 AM
		</div>
		<div class="comment_text"><p>@Brian: I noticed that you disabled the form submit. If you had not, and you submitted, would those hidden form fields get posted as well? I guess it isn't a big deal, you could ignore them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713147">20</a> by Brian Swartzfager
		posted on 2/20/2009 at 7:48 AM
		</div>
		<div class="comment_text"><p>@Ray:  Yes, the hidden template fields would be submitted as well, so you'd have to program your server-side code to only process the field names ending in numerals.  Another alternative would be to put the template outside of the form (or in another form) so it's not part of the form submission.</p><p>If the form submission was a regular submission and not an AJAX submission, I suppose you could also use the jQuery remove() function on the template after the client-side validation took place and just before the form was submitted, thereby eliminating it from the form submission.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713142">21</a> by Misty
		posted on 5/10/2009 at 3:39 PM
		</div>
		<div class="comment_text"><p>Perfect ray! well Jqury too good. But how can we add the remove link against each newly created textboxes, not in front of first one but other textboxes that are generated dynamically.</p><p>2. how we Limit the textboxes to 10. mean they should not exced more than 10. a Popup alert message should be displayed that no more than 10.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713144">22</a> by Raymond Camden
		posted on 5/11/2009 at 6:36 AM
		</div>
		<div class="comment_text"><p>#2 is easy. Just keep a counter of how many times you add an item.</p><p>#1 You would modify the HTML added to include the link. That link would run JS code to remove the item. It would be a bit more complex, a bit too much for a blog comment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713146">23</a> by Claude Petitpas
		posted on 7/13/2009 at 11:21 PM
		</div>
		<div class="comment_text"><p>Ok, I think this is a pretty cool way manipulating the form and I'm considering using it. I was wondering if there was a way to use this technique in conjunction with the available built in SpryValidationTextField in Dreamweaver? I'm guessing it's probably not possible because your not actually reloading the form when you add your 'Person'. Any thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713149">24</a> by Raymond Camden
		posted on 7/18/2009 at 7:35 AM
		</div>
		<div class="comment_text"><p>Not sure. It's been a while since I used Spry Validation, but I don't remember it as supporting dynamic validation on the fly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713141">25</a> by Rob
		posted on 7/26/2009 at 6:49 AM
		</div>
		<div class="comment_text"><p>I made a similar article that deals with the dynamically added fields slightly better way (imo) using an array - E.g. 'field[]'. You can then loop through them as an associtaive array using php. I recently wrote an article about this on my blog - <a href="http://disq.us/url?url=http%3A%2F%2Fwww.web-design-talk.co.uk%2F58%2Fadding-unlimited-form-fields-with-jquery-mysql%2F%3AlyrDs3E-C1mRb9-ivsbqL53pnBU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.web-design-talk.co.uk/58/adding-unlimited-form-fields-with-jquery-mysql/">http://www.web-design-talk....</a> - I also deal with saving these dynamic values to a database using a many-many data structure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713145">26</a> by Raymond Camden
		posted on 7/26/2009 at 6:56 AM
		</div>
		<div class="comment_text"><p>Interesting. CF won't deal nicely with foo[]. If you repeat a form field in CF, then CF will give you one list of values. This means that if one value has a comma in it, you won't be able to tell what the real set of values were.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713140">27</a> by Kris
		posted on 7/30/2009 at 4:18 AM
		</div>
		<div class="comment_text"><p>Hello!</p><p>I was tweaking around with the code a bit, trying to get it to work with something Im working on and for some reason I can't get it to work in IE.  Can anyone point out why?</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2Fm5c9478a1%3ALDzKLCXjO9_sltplPkXzEbMCzL0&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/m5c9478a1">http://pastebin.com/m5c9478a1</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713148">28</a> by Kris
		posted on 7/30/2009 at 4:19 AM
		</div>
		<div class="comment_text"><p>I hate to double post like some forum newb but I also wanted to state that when I try to execute my code in IE, its giving an error and says that the error is because "console" is undefined... Any help is greatly appreciated</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713143">29</a> by Michael Appenzellar
		posted on 9/12/2009 at 6:30 AM
		</div>
		<div class="comment_text"><p>I got this working, but 2 things I am running into. Ideally I want to be able to utilize a link vs a button to generate these new fields...this possible? Also, this seems weird, but if I have the button in the table close to the fieldset tag, it doesn't work, but if I move the button further down, it works..its almost like it think it doesn't have room to grow..I know, sounds weird.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713155">30</a> by Raymond Camden
		posted on 9/12/2009 at 5:32 PM
		</div>
		<div class="comment_text"><p>Yes, you can use a link instead of a button. It is important though that the handler for it use return false to stop the normal action of a link to try to go someplace.</p><p>As for the button - not sure. I'd have to see it to help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713152">31</a> by Michael Appenzellar
		posted on 9/13/2009 at 7:23 AM
		</div>
		<div class="comment_text"><p>well I thought I would be able to show an example but now its being weird ;o) What I want to do is say I have a form with a table. I have a row that has say qty, title, total all with textboxes in a row. Below that row I want to have a +Add New LINK which will dynamically create a new table row with text td's and textboxes for every time I click the +Add New link.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713150">32</a> by Michael Appenzellar
		posted on 9/13/2009 at 7:23 AM
		</div>
		<div class="comment_text"><p>well I thought I would be able to show an example but now its being weird ;o) What I want to do is say I have a form with a table. I have a row that has say qty, title, total all with textboxes in a row. Below that row I want to have a +Add New LINK which will dynamically create a new table row with text td's and textboxes for every time I click the +Add New link.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713151">33</a> by Raymond Camden
		posted on 9/13/2009 at 7:24 AM
		</div>
		<div class="comment_text"><p>Here is an example of adding a table row with jQuery: <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F171027%2Fjquery-add-table-row%3AsxnMbof8Kpyy4_iIkdVm-3i7LuM&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/171027/jquery-add-table-row">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713157">34</a> by Shaun W.
		posted on 9/15/2009 at 7:37 PM
		</div>
		<div class="comment_text"><p>Thanks again Ray. This came in handy for adding multiple days/times for classes in an admin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713158">35</a> by Shaun W.
		posted on 9/16/2009 at 8:23 AM
		</div>
		<div class="comment_text"><p>Can you think of any reason why the fields would be generated fine with unique names (class1,class2,etc.) but when submitted and form scope is dumped they do not show up in there?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713153">36</a> by Raymond Camden
		posted on 9/16/2009 at 3:55 PM
		</div>
		<div class="comment_text"><p>They may be being added after your FORM ends. If you have it online I can take a look.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713154">37</a> by Shaun W.
		posted on 9/17/2009 at 5:45 AM
		</div>
		<div class="comment_text"><p>Finally figured it out. Apparently form fields that are added with jquery are not posted if your opening form tag is contained in an include/template... I put the opening form tag on the same page and it recognized all the form fields added with jquery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713160">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713160">38</a> by Michael Appenzellar
		posted on 9/17/2009 at 11:49 PM
		</div>
		<div class="comment_text"><p>Ok..this works great, but one last small issue. In my form fields I have an action such as onClick, but it doesn't appear to work on these generated form fields. Any idea..or am I just plain crazy..lol</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713161">39</a> by Raymond Camden
		posted on 9/17/2009 at 11:51 PM
		</div>
		<div class="comment_text"><p>Nope, this is expected. Check out the Live() function:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdocs.jquery.com%2FEvents%2Flive%3AUMxgRdeqcfCsGf7BX_JrnexSYRc&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.jquery.com/Events/live">http://docs.jquery.com/Even...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713162">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713162">40</a> by Joyrex
		posted on 3/4/2010 at 3:52 AM
		</div>
		<div class="comment_text"><p>This was a great little tutorial - one thing I can't seem to figure out though, is how to set a hidden field with the total number of SETS (not individual fields) added - and by SETS I mean the set of fields cloned from the template outside the FORM used to add more fields. Also, would removing a set (as I did provide a remove button) increment or decrement this value, or is it set at the time of submission? Thanks for any help you can provide!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713165">41</a> by Mitch McBride
		posted on 3/4/2010 at 10:18 AM
		</div>
		<div class="comment_text"><p>@Joyrex: Check out <a href="http://disq.us/url?url=http%3A%2F%2Fwww.wdsn.ru%2Fwp-content%2Fexamples%2Fclone-example%2Findex.htm%3AKPSukcs-iAHhXlgv2QY6NqlonDE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.wdsn.ru/wp-content/examples/clone-example/index.htm">http://www.wdsn.ru/wp-conte...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713164">42</a> by Raymond Camden
		posted on 3/4/2010 at 5:24 PM
		</div>
		<div class="comment_text"><p>Given a hidden field with id of setcount, and given I use current already as a counter, you can use</p><p>$("#setcount").val(current)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713167">43</a> by Joyrex
		posted on 3/4/2010 at 10:18 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>That works great - one problem though - I tried adding it to the removeSet() function to allow users to remove sets they don't need, and it does not decrement the value - I'm still learning JQuery - how would I get a current count of sets created so when I POST the form, I pass on an accurate count? Thanks again for the useful information!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713168">44</a> by Raymond Camden
		posted on 3/4/2010 at 10:22 PM
		</div>
		<div class="comment_text"><p>Odd. So what goes wrong? What error do you get? Is it online where I can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713170">45</a> by Joyrex
		posted on 3/4/2010 at 10:29 PM
		</div>
		<div class="comment_text"><p>That's the funny thing - no JS error, it just doesn't decrement the value as I expected it would. I can't unfortunately show you the whole working page as it's on an internal dev environment, but here's the JS that creates, and removes, the sets (which are located outside the FORM tags so they don't get POSTed):</p><p>var current= 1;<br>$(document).ready(function() {<br>	$("#addUpload").click(function() {<br>		current++;</p><p>		$newUpload= $("#userTemplate").clone(true).removeAttr("id").attr("id", "fieldSet" + current).insertBefore("#userTemplate");<br>		//$newUpload.children("label").each(function(i) {<br>//			var $currentElem= $(this);<br>//			$currentElem.attr("for",$currentElem.attr("for")+current);<br>//		});<br>		$newUpload.children("label").children("input").each(function(i) {<br>			var $currentElem= $(this);<br>			$currentElem.attr("name",$currentElem.attr("name")+current);<br>			$currentElem.attr("id",$currentElem.attr("id")+current);<br>		});<br>		$newUpload.children("label").children("select").each(function(i) {<br>			var $currentElem= $(this);<br>			$currentElem.attr("name",$currentElem.attr("name")+current);<br>			$currentElem.attr("id",$currentElem.attr("id")+current);<br>		});</p><p>		var f = $("#fieldSet"+current);<br>		f.html(f.html().replace("fieldSetID", "fieldSet"+current));</p><p>		$newUpload.appendTo("#mainField");<br>		$newUpload.removeClass("hideElement");<br>		$("#setcount").val(current);<br>		//add validation<br>		//$("#firstname"+current).rules("add", { required:true,minlength:2 });<br>//		$("#lastname"+current).rules("add", { required:true,minlength:2 });<br>//		$("#email"+current).rules("add", { required:true,email:true });<br>//<br>	});</p><p>	//$("#uploadFields").validate({<br>//		groups: {<br>//			fullname: "firstname1 lastname1"<br>//		},<br>//		errorPlacement: function(error, element) {<br>//			 if (element.attr("name") == "firstname1"<br>//						 || element.attr("name") == "lastname1" )<br>//			   error.insertAfter("#lastname1");<br>//			 else<br>//			   error.insertAfter(element);<br>//		   },<br>//		rules: {<br>//			firstname1: {<br>//				required: true,<br>//				minlength: 2<br>//			}<br>//			,lastname1: {<br>//				required: true,<br>//				minlength: 2<br>//			}<br>//			,email1: {<br>//				required: true,<br>//				email: true<br>//			}<br>//		}<br>//    });<br>});</p><p>function removeSet(id) {<br>	$(id).remove();<br>	$("#setcount").val(current-1);<br>};</p><p>Don't mind the commented out stuff - I'm going to set up the validation once I get the form submitting properly (that's a whole 'nother ball of wax), and this counter being accurate is key to that for the server-side stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713171">46</a> by Raymond Camden
		posted on 3/4/2010 at 10:33 PM
		</div>
		<div class="comment_text"><p>So first - be sure to set the hidden form field to visible - it will help. Secondly, I assume the remove works? It's just not the counter working? If so, right before it, add alert(current-1).</p><p>Oh.... wait. I don't think this code will work right. If you have 10 items and remove 2, current is always going to be 10.</p><p>You need a better solution - one that counts the items. Since each item is wrapped in a fieldset, can you give them all one class, and then simply do a $(".theclass").size()? THat code isn't exactly right - I forget how you count the results of a jQuery selector, but you get the idea I hope. You would use the same code both in the add and the subtraction.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713172">47</a> by Joyrex
		posted on 3/4/2010 at 10:44 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>Ah - making the field visible helped - it DOES decrement the number on removal, but ONLY the first time - subsequent removals of other sets does not decrement it. Changing the val(current-1); to val(current--) produces very strange behavior - it will ignore the first removal, but then WILL decrement subsequent removals, but will always be 1 more than the number of sets actuall left (add to this there is always an initial set that cannot be removed). Any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713174">48</a> by Raymond Camden
		posted on 3/4/2010 at 10:46 PM
		</div>
		<div class="comment_text"><p>It isn't ignoring the removal.</p><p>x--</p><p>means: Return the current value of X, THEN make it 1 smaller. You want:</p><p>--x</p><p>However, that won't work because the add code assumes current always grows bigger. If it goes down and you add to it, things will break.</p><p>See the end of my last comment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713169">49</a> by Joyrex
		posted on 3/4/2010 at 11:33 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>Your suggestion worked! there was a DIV being wrapped around each set being created, and all that was required was appending the class to all the DIVs created, as well as making a DIV around the initial set with the same class so the add/remove count was accurate. Here's the bits of code that ended up working:</p><p>var n = $(".set").size();<br>$("#setcount").val(n);</p><p>This added to the removeSet() function as well decrements it accurately. Thanks so much for your help on this, and hopefully others can benefit from it as well!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713177">50</a> by Raymond Camden
		posted on 3/4/2010 at 11:35 PM
		</div>
		<div class="comment_text"><p>.size()! Cool. I always forget that name. Glad you got it working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713175">51</a> by Joyrex
		posted on 7/12/2010 at 8:35 PM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>It's me again - thanks again for your help in getting my particular issue sorted out back in March, but now I've been tasked to "enhance" this further, and one thing the users want is the last-created set of fields to have their values set to the previously-created set, so they only need to change what's needed, rather than having to duplicate effort for each set of fields each time. I've looked and looked, but couldn't find any examples of where elements cloned could have their values set to a particular set of elements. Any advice/help is appreciated!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713180">52</a> by Raymond Camden
		posted on 7/13/2010 at 12:33 AM
		</div>
		<div class="comment_text"><p>Simple. We know the # of the fields we are adding, ie, name10 for example. If you know that, then the previous one is name9. You can get the value using:</p><p>$("#name9").val()</p><p>and then use the result to set the value in 10.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713181">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713181">53</a> by Joyrex
		posted on 7/13/2010 at 12:53 AM
		</div>
		<div class="comment_text"><p>I *think* I understand what you're saying... but when the fieldsets are being added dynamically (and thus I don' t know what the current highest-numbered fieldset is), I'm not quite sure how this would be implemented. Here's the code that creates each input for the set:</p><p>$newUpload.children("label").children("input").each(function(i) {<br>			var $currentElem= $(this);<br>			$currentElem.attr("name",$currentElem.attr("name")+current);<br>			$currentElem.attr("id",$currentElem.attr("id")+current);<br>		});</p><p>Could I use "current" in place of the ID in your example?</p><p>Thanks again for the quick reply and assistance!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713178">54</a> by Raymond Camden
		posted on 7/13/2010 at 1:15 AM
		</div>
		<div class="comment_text"><p>Yeah - current is 10, so current-1 is the last one. jQuery would also let you get a last item and walk backwards too. As expected - there will be multiple ways of doing it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713179">55</a> by Joyrex
		posted on 7/14/2010 at 1:47 AM
		</div>
		<div class="comment_text"><p>Raymond,</p><p>OK, looks like I *don't* understand what you mean - I tried this syntax out and no dice... I wish I could wrap my head around jQuery as easily as some seem to do...</p><p>var current= 1;<br>$(document).ready(function() {<br>	$("#addUpload").click(function() {<br>		current++;</p><p>		$newUpload= $("#userTemplate").clone(true).removeAttr("id").attr("id", "fieldSet" + current).insertBefore("#userTemplate");</p><p>		$newUpload.children("label").children("input").each(function(i) {<br>			var $currentElem= $(this);<br>			$currentElem.attr("name",$currentElem.attr("name")+current);<br>			$currentElem.attr("id",$currentElem.attr("id")+current);<br>			$currentElem.attr("value",$currentElem.attr("id"current-1).val()+current);<br>		});<br>		$newUpload.children("label").children("select").each(function(i) {<br>			var $currentElem= $(this);<br>			$currentElem.attr("name",$currentElem.attr("name")+current);<br>			$currentElem.attr("id",$currentElem.attr("id")+current);<br>			$currentElem.attr("value",$currentElem.attr("id"current-1).val()+current);<br>		});</p><p>		var f = $("#fieldSet"+current);<br>		f.html(f.html().replace("fieldSetID", "fieldSet"+current));</p><p>		$newUpload.appendTo("#mainField").fadeIn(600);<br>		$newUpload.addClass("set");<br>		$newUpload.removeClass("hideElement");<br>		var n = $(".set").size();<br>		$("#setcount").val(n);<br>		$('#docDate'+current).dateEntry();</p><p>		//add validation<br>		//$("#docType"+current).rules("add", { required:true,minlength:1 });<br>		$("#xDocUpload"+current).rules("add", { required:true,minlength:1 });<br>		$("#docDate"+current).rules("add", { required:true,date:true });<br>		$("#dateCode"+current).rules("add", { required:true,minlength:1});<br>		$("#sdoc"+current).rules("add", { required:true,minlength:1});<br>	});</p><p>	$("#uploadFields").validate({<br>//		groups: {<br>//			fullname: "firstname1 lastname1"<br>//		},<br>		errorPlacement: function(error, element) {<br>			 //if (element.attr("name") == "firstname1"<br>//						 || element.attr("name") == "lastname1" )<br>//			   error.insertAfter("#lastname1");<br>//			 else<br>			   error.insertAfter(element);<br>		   },<br>		rules: {<br>			//docType1: {<br>//				required: true,<br>//				minlength: 1<br>//			}<br>			xDocUpload1: {<br>				required: true,<br>				minlength: 1<br>			}<br>			,docDate1: {<br>				required:true,<br>				date:true<br>			}<br>			,dateCode1: {<br>				required: true,<br>				minlength: 1<br>			}<br>			,sdoc1: {<br>				required: true,<br>				minlength: 1<br>			}<br>			,MasterDocTypeID: {<br>				required: true,<br>				minlength: 1<br>			}<br>		}<br>    });<br>});</p><p>function removeSet(id) {<br>	$(id).fadeOut(600,function(){$(id).remove();});<br>	var n = $(".set").size();<br>	$("#setcount").val(n);<br>};</p><p>BTW, that's the whole script from my page, for the sake of completeness. I tried looking up the "other ways" I could do it (I looked into using the :last selector, but none of my experiments took me any closer to a solution). Is it Friday yet?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713176">56</a> by Raymond Camden
		posted on 7/14/2010 at 6:28 AM
		</div>
		<div class="comment_text"><p>Next time - please use pastebin for large code like this - makes it easier. :)</p><p>I think this is part of your problem:</p><p> $currentElem.attr("value",$currentElem.attr("id"current-1).val()+current);</p><p>specifically:</p><p>.attr("id"current-1)</p><p>That's not valid JS syntax. Try</p><p>.attr("id"+(current-1))</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713183">57</a> by rys
		posted on 7/15/2010 at 7:37 AM
		</div>
		<div class="comment_text"><p>you can refer to this site on how to duplicate fields with the great jQuery plugin. with just a few line of javascript code.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.ryscript.co.cc%2FjQuery%2FjQuery-duplicate-fields-form-submit-with-php%2F%3A3IvsUfNq7B3f9NF_lp98jNJf4Fg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.ryscript.co.cc/jQuery/jQuery-duplicate-fields-form-submit-with-php/">http://www.ryscript.co.cc/j...</a></p><p>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713184">58</a> by Joyrex
		posted on 7/26/2010 at 8:41 PM
		</div>
		<div class="comment_text"><p>Sorry for the delay in responding - I was on vacation.</p><p>Rys: Duplicating fields is not the issue (the initial example Raymond shows in this posting does an excellent job of that) - what I'm wanting is for the newest set of form fields DATA to be set based on the last set of form field's DATA that has been set by the user, so if they are doing similar (or the same) values on the fields in multiple sets, it saves them time by not having to set the same value over and over for each set they create.</p><p>Raymond: Still not working (the syntax correction you provided DOES work, but it's still not setting the newly created set's field values to the last created set's values). Since the new sets are being created from a hidden "template", does the trigger (for lack of a better term) need to be on each newly created upload set and target the "template", so when the "template" is used, the default values are the same as the last set values of the last-created set? I appreciate the help on this, as this is driving me batty trying to figure out the right way to do this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713185">59</a> by Joyrex
		posted on 7/27/2010 at 8:18 PM
		</div>
		<div class="comment_text"><p>I managed to figure it out myself - I ended up using the very useful Field plugin (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.pengoworks.com%2Fworkshop%2Fjquery%2Ffield%2Ffield.plugin.htm%29%3A0Tly3BzaQ8dQMdKnAlfCiSNHvpU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.pengoworks.com/workshop/jquery/field/field.plugin.htm)">http://www.pengoworks.com/w...</a>, and setting an onChange event to the fields in the template, so when a new set was generated from the template and the user changed the values, the template would be updated with those values so the next set retained those values.</p><p>Here's the link to the PasteBin page for the updated code:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FRktDsJxF%3AsZwqGxbby0sn71YKddsYY0coPVw&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/RktDsJxF">http://pastebin.com/RktDsJxF</a></p><p>HUGE thanks for Raymond for the original concept/implementation, and everyone else who offered suggestions/ideas!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713186">60</a> by Raymond Camden
		posted on 7/28/2010 at 5:33 AM
		</div>
		<div class="comment_text"><p>Glad you got it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713188">61</a> by Geekie
		posted on 7/31/2010 at 11:47 PM
		</div>
		<div class="comment_text"><p>Is there a way to have a set of predefined options:<br>&lt;input type=text" value= "water"&gt;<br>&lt;input type=text" value= "soda"&gt;<br>&lt;input type=text" value= "juice"&gt;<br>that when clicked, are added to the list and then I can just submit them all?  I keep thinking this should be so simple but for some reason I can't get it....help - please.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713189">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713189">62</a> by geekie
		posted on 8/1/2010 at 8:06 PM
		</div>
		<div class="comment_text"><p>Never mind.....  I got it, duh.  I was tired yesterday :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713190">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713190">63</a> by Chap
		posted on 1/4/2011 at 2:13 AM
		</div>
		<div class="comment_text"><p>Looking for a suggestions...</p><p>First, my cloning is working great thanks to this post.  I don't need help with that.  Instead, how would you recommend handling of database updates/inserts?</p><p>My page is looping over data and presenting the data as input fields so the user can make changes and then save the changes at one time.  The user needs to be able to add records, too.  Let's say the form has 10 rows with each row having 5 fields to update and the new needs to add 3 new records (5 fields per row).  I can update the 10 records, no problem, but how do I account for the 3 newly added records of data?</p><p>Note:  the 10 rows have a unique id value but they are not necessarily sequential.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713193">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713193">64</a> by Joyrex
		posted on 1/4/2011 at 3:13 AM
		</div>
		<div class="comment_text"><p>I can post my processing code... that was actually the more difficult part of my application to create and test, and does similar stuff to what you're doing.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FnEDhfcdB%3AVT6U8YY_4TnNsiSDW4VhSiBtgOA&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/nEDhfcdB">http://pastebin.com/nEDhfcdB</a></p><p>Keep in mind it's pretty specific to what I need to do, but the looping and discovery of the dynamically-numerated fields coming in code should give you ideas on how to approach your needs. Good luck!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713195">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713195">65</a> by jak
		posted on 2/3/2011 at 3:34 PM
		</div>
		<div class="comment_text"><p>How can I get the appended elements value via php $_POST after the form is submitted?</p><p>For example I create an element with name=ex2 by pressing the button. After form submit $_POST['ex2'] does not exist...</p><p>What am I doing wrong? How can I get the value of the dinamicaly created ements after the form is submitted?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713192">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713192">66</a> by Raymond Camden
		posted on 2/3/2011 at 6:51 PM
		</div>
		<div class="comment_text"><p>I don't use PHP jak, but it looks like you are passing the variables in the query scope. In ColdFusion, that's the URL scope. I'd assume PHP separates query string variables versus form variables.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713196">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713196">67</a> by Raymond Camden
		posted on 2/3/2011 at 6:53 PM
		</div>
		<div class="comment_text"><p>I just googled and it looks like it's $_GET instead. To be clear, you should try to use form  posts as much as possible, but if you know your data is going to be small, then passing it over the query string should be fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713194">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713194">68</a> by web design crawley
		posted on 12/20/2011 at 6:05 PM
		</div>
		<div class="comment_text"><p>Hi this script is great! but how can I make a remove button?</p><p>I have tried this:</p><p>function removePerson() {</p><p>   $('#mainField').remove('#form'+current)<br>}</p><p>$(document).ready(function(){<br>    $('#removePerson').click(removePerson)<br>});</p><p>but it does not work. any help please? thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713197">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713197">69</a> by Raymond Camden
		posted on 12/20/2011 at 7:38 PM
		</div>
		<div class="comment_text"><p>Well it could be a couple of things.</p><p>First, ensure your click handler is actually running. Add a console.log("Yo!") as the first line in removePerson().</p><p>Then - you need to ensure your remove is working right. You are telling it to remove #formX (where X == current) from within mainField. So perhaps double check that #formX actually matches something:</p><p>var test = $("#form"+current);<br>console.log(test.length);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713198">70</a> by Liam Kenneth
		posted on 12/20/2011 at 7:44 PM
		</div>
		<div class="comment_text"><p>Thanks for the reply. what is console.log? I removed it as it was not working for me. is it a cold fusion bit of code? im running my test site as plain html.</p><p>I will have another look at my code and see if removePerson is actually doing something. thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713200">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713200">71</a> by Raymond Camden
		posted on 12/20/2011 at 7:47 PM
		</div>
		<div class="comment_text"><p>console is a JavaScript object available to most _modern_ browsers. It originally came from the Firebug extension for Firefox. It's essentially a way to debug in JavaScript. Google a bit for some demos of it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713202">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713202">72</a> by Liam Kenneth
		posted on 12/20/2011 at 7:52 PM
		</div>
		<div class="comment_text"><p>Sorry just tried what you said. my functioned works I got a Yo back but when I tested the "form+current+" I got 0 so I guess that means false it does not exist.</p><p>Here is the full code if it helps thanks.</p><p>&lt;html&gt;<br>&lt;head&gt;<br>&lt;script src="<a href="https://disq.us/url?url=https%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F1.7.1%2Fjquery.min.js%3AzhB8VBEf-58MGlt_tfVzAI-Lv0o&amp;cuid=3321886" rel="nofollow noopener" title="https://ajax.googleapis.com/ajax/libs/jquery/1.7.1/jquery.min.js">https://ajax.googleapis.com...</a>"&gt;&lt;/script&gt;<br>&lt;script&gt;<br>var current = 1;</p><p>function addPerson() {</p><p>    current++;<br>    var strToAdd ='&lt;h2 id="form'+current+'"&gt;Attendee'+current+'&lt;/h2&gt;&lt;table&gt;&lt;tr&gt;&lt;td&gt;&lt;label&gt;First Name&lt;/label&gt;&lt;/td&gt;&lt;td&gt;&lt;input id="firstname'+current+'" name="firstname'+current+'"  type="text" /&gt;&lt;/td&gt;&lt;td&gt;Phone:&lt;/td&gt;&lt;td&gt;&lt;input id="phone'+current+'" name="phone'+current+'" type="text" /&gt;&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td&gt;Last Name:&lt;/td&gt;&lt;td&gt;&lt;input id="lastname'+current+'" name="lastname'+current+'" type="text" /&gt;&lt;/td&gt;&lt;td&gt;Company:&lt;/td&gt;&lt;td&gt;&lt;input id="company'+current+'" name="company'+current+'" type="text" /&gt;&lt;/td&gt;&lt;/tr&gt;&lt;tr&gt;&lt;td&gt;Email:&lt;/td&gt;&lt;td&gt;&lt;input id="email'+current+'" name="email'+current+'" type="text" /&gt;&lt;/td&gt;&lt;/tr&gt;&lt;/table&gt;'</p><p>    $('#mainField').append(strToAdd)<br>} //end add</p><p>function removePerson() {<br>   // alert("yo!");<br>   $('#mainField').remove('#form '+current+)<br>}</p><p>$(document).ready(function(){<br>    $('#addPerson').click(addPerson)<br>});</p><p>$(document).ready(function(){<br>    $('#removePerson').click(removePerson)<br>});</p><p>var test = $("#form"+current);<br>alert(test.length);</p><p>&lt;/script&gt;<br>&lt;/head&gt;</p><p>&lt;body&gt;</p><p>&lt;form id="someform" method="post" action=""&gt;<br>    &lt;fieldset id="mainField"&gt;<br>        &lt;h2&gt;Attendee&lt;/h2&gt;<br>          &lt;table&gt;<br>                &lt;tr&gt;<br>                    &lt;td&gt;First Name&lt;/td&gt;</p><p>                    &lt;td&gt;&lt;input id="firstname1" name="firstname1"  type="text" /&gt;&lt;/td&gt;</p><p>                    &lt;td&gt;Phone:&lt;/td&gt;</p><p>                    &lt;td&gt;&lt;input id="phone1" name="phone1" type="text" /&gt;&lt;/td&gt;<br>                &lt;/tr&gt;<br>                &lt;tr&gt;<br>                    &lt;td&gt;Last Name:&lt;/td&gt;</p><p>                    &lt;td&gt;&lt;input id="lastname1" name="lastname1" type="text" /&gt;&lt;/td&gt;</p><p>                    &lt;td&gt;Company:&lt;/td&gt;</p><p>                    &lt;td&gt;&lt;input id="company1" name="company1" type="text" /&gt;&lt;/td&gt;<br>                &lt;/tr&gt;<br>                &lt;tr&gt;<br>                    &lt;td&gt;Email:&lt;/td&gt;</p><p>                    &lt;td&gt;&lt;input id="email1" name="email1" type="text" /&gt;&lt;/td&gt;<br>                &lt;/tr&gt;<br>            &lt;/table&gt;                                                                    <br>    &lt;/fieldset&gt;</p><p>    &lt;p&gt;<br>    &lt;input type="button" id="addPerson" value="Add Another Person"&gt;</p><p>    &lt;input type="button" id="removePerson" value="Remove Person"&gt;</p><p>    &lt;/p&gt;</p><p>    &lt;input type="submit" value="Post"&gt;<br>&lt;/form&gt;</p><p>&lt;/body&gt;<br>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713201">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713201">73</a> by Raymond Camden
		posted on 12/20/2011 at 8:08 PM
		</div>
		<div class="comment_text"><p>In the future, please use Pastebin to paste large blocks of code.</p><p>First off, this looks wrong: $('#mainField').remove('#form '+current+)</p><p>Notice the + at the end. That's not valid JavaScript.</p><p>Secondly, you put those 2 test statements by themselves. They should be after the alert('yo')</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713203">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713203">74</a> by Anand Roshan
		posted on 4/19/2014 at 6:16 PM
		</div>
		<div class="comment_text"><p>This one is a nice and useful tutorial.<br>You might want to take a look at this jquery version to do the same thing <a href="http://disq.us/url?url=http%3A%2F%2Fvoidtricks.com%2Fjquery-add-remove-input-fields%2F%3ApyoijLXYNRqizTUR6UW5dHdmyQg&amp;cuid=3321886" rel="nofollow noopener" title="http://voidtricks.com/jquery-add-remove-input-fields/">http://voidtricks.com/jquer...</a></p></div>
	</div>
</div>
		