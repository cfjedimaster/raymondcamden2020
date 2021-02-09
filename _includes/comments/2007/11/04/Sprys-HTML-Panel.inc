
<div class="comment" id="c_1713673935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673935">1</a> by Jeffrey Price
		posted on 11/5/2007 at 8:54 AM
		</div>
		<div class="comment_text"><p>If you are gonna make it progressive, wouldn't you just want to go all the way and make it unobtrusive as well by using Spry.Utils.addEventListener to add a click event to the a hrefs in question instead of using that nasty onclick event?</p><p>Just my $0.02 worth :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673937">2</a> by Raymond Camden
		posted on 11/5/2007 at 9:11 AM
		</div>
		<div class="comment_text"><p>Hmm, but if all we care about is js/no js, this is more than enough, right? It is my understanding, and I _definitely_ could be wrong, that what you propose is for more _elegant_ reasons than anything else - but definitely let me know if I'm wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673936">3</a> by levan
		posted on 11/5/2007 at 10:42 AM
		</div>
		<div class="comment_text"><p>spry is very promising framework, I have tested it with YUI and so far no problems  that gives even more power(the only one thing that put me against the wall is that it does not support nested regions yet )  and all that w3C evangelists complaining about spry is not comparable with etc .... IMHO is just plain rant, w3C is a formality anyways.<br>also spry is bridging with Flex pretty well so we probably will see some integrations poping up soon .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673938">4</a> by Jeffrey Price
		posted on 11/5/2007 at 4:37 PM
		</div>
		<div class="comment_text"><p>Beauty is indeed in the eye of the beholder.</p><p>The way I think of unobtrusive javascript is that it is separation of your markup from your application behavior, or your view from your model-controller. It is a good idea in our server side programming and it's also a good for client side programming.</p><p>All of your other Spry examples are done with unobtrusive javascript. If you'll notice, all the JS code was in one place and there was nothing but markup in your HTML section!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673939">5</a> by Raymond Camden
		posted on 11/5/2007 at 5:11 PM
		</div>
		<div class="comment_text"><p>@Jeffrey: Point taken!</p><p>@Levan: Nested regions... do you mean nested data? If so - Spry supports that, and Spry _does_ validate now if I remember right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673941">6</a> by Kin Blas
		posted on 11/5/2007 at 10:16 PM
		</div>
		<div class="comment_text"><p>Just an FYI, an unobtrusive equivalent to Ray's sample can be found here on the Adobe Labs site:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flabs.adobe.com%2Ftechnologies%2Fspry%2Fsamples%2Fhtmlpanel%2Fproduct-0.html%3Am2t2hAnW4HOFg9sLt7nXhLE4kig&amp;cuid=3321886" rel="nofollow noopener" title="http://labs.adobe.com/technologies/spry/samples/htmlpanel/product-0.html">http://labs.adobe.com/techn...</a></p><p>In particular, look at:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flabs.adobe.com%2Ftechnologies%2Fspry%2Fsamples%2Fhtmlpanel%2Fproduct.js%3AZ3USTY_CS8cFcjQWJhLfj_EJ_10&amp;cuid=3321886" rel="nofollow noopener" title="http://labs.adobe.com/technologies/spry/samples/htmlpanel/product.js">http://labs.adobe.com/techn...</a></p><p>That sample shows both the loading of pure HTML fragments, and the extraction of an HTML fragment from a static HTML page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673940">7</a> by Raymond Camden
		posted on 11/5/2007 at 10:20 PM
		</div>
		<div class="comment_text"><p>Hey Kin - is the movement of the event handler out also consider part of being unobtrusive? The example Spry doc did it as I did - so if both things need to be done then I'd update that doc as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673942">8</a> by Kin Blas
		posted on 11/6/2007 at 12:21 AM
		</div>
		<div class="comment_text"><p>Hey Ray - Yes, unobtrusive JS means you move *all* script, including script in on* attributes, into an external file. The only &lt;script&gt; tags allowed are those that include external files.</p><p>Unobtrusive JS is a great concept that is gaining popularity, but it does have some issues folks should be aware of:</p><p>- It sometimes makes it harder to figure out how things work, since all of the behavior is moved into code, so you can't see the relationship between the tag and the event/behavior in the same place.</p><p>- Depending on how you unobtrusively attach behaviors, and the number of elements you are attaching behaviors to, there may be a performance penalty you pay. If you have ID attributes on everything that you will attach behaviors to, it may not be that bad, but if you are using CSS class or contextual selectors (ala Spry's Element Selector, JQuery, DOMQuery, etc) there is a penalty for traversing the *entire* document to find those elements.</p><p>The first issue is something we wrestle with internally. Our samples tend to be "obtrusive" so the user reading our docs and looking at our samples can understand it right away ... but we're trending towards providing samples that do it both ways so folks can wrap their heads around how things work, and how to make it unobtrusive if they want/need to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673943">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673943">9</a> by Raymond Camden
		posted on 11/6/2007 at 12:24 AM
		</div>
		<div class="comment_text"><p>So can you explain why someone would do this? I get why someone would handle both js/non js browsers. But why, both as a developer and an end user, would I want to go to the point of having no JS except for external script files?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673944">10</a> by Kin Blas
		posted on 11/6/2007 at 12:35 AM
		</div>
		<div class="comment_text"><p>Some of the "benefits", taken from this doc:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flabs.adobe.com%2Ftechnologies%2Fspry%2Farticles%2Fbest_practices%2Fseparating_behavior.html%3Arg5meq1aPoQpGZQywJGHIwdVJiw&amp;cuid=3321886" rel="nofollow noopener" title="http://labs.adobe.com/technologies/spry/articles/best_practices/separating_behavior.html">http://labs.adobe.com/techn...</a></p><p>include:</p><p>    *  The ability to make incremental modifications to the HTML markup structure or the behavior code independently without having to modify the other.</p><p>    * Because the behavior implementation is externalized, it can be shared across multiple HTML pages, so the bandwidth necessary to view these pages is reduced since the files related to the behaviors are downloaded and cached by the browser once. This also results in smaller HTML pages since the behavior code is not duplicated within the actual markup itself.</p><p>    * Since the HTML markup is smaller and semantic, it is also easier to read which aids accessibility with screen readers, search engine web crawlers, and browsers or other user agents that don't necessarily support the behaviors you've implemented.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673945">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673945">11</a> by Raymond Camden
		posted on 11/6/2007 at 12:43 AM
		</div>
		<div class="comment_text"><p>Thanks for taking the time, Kin. It makes sense to me now. Not quite sure if it is worth _all_ the effort, but it definitely make sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673949">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673949">12</a> by Andrea
		posted on 11/7/2007 at 12:28 AM
		</div>
		<div class="comment_text"><p>I think anything must be well mixed. I understand ( and I make this any day ) the point to keep html and js separated ( I mean do not use onclick etc...) but I really find uncomfortable to use only js in external file.<br>I use jquery a lot but craeting the content dinamically most of my js attaching event is inserted in the html template inside script tags....I do not think the purpose of a good ceveloper should be come back to hardcoding....<br>What I did not like of some js framework is the use of non valid attributes to attach event and I remember in the beginning spry was bad right under this point.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673956">13</a> by Cyrill
		posted on 11/16/2007 at 12:22 AM
		</div>
		<div class="comment_text"><p>Can this panel be a CFM file so that we can pass an url variable and do some server side processing before loading the page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673954">14</a> by Raymond Camden
		posted on 11/16/2007 at 12:31 AM
		</div>
		<div class="comment_text"><p>Sure, you can point to ANY file. CFM, ASP, even PHP. It's all HTTP requests.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673952">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673952">15</a> by Cyrill
		posted on 11/16/2007 at 1:03 AM
		</div>
		<div class="comment_text"><p>Very nice indeed, I am playing with it now. My first attempt was to check if spry validation on a form would work, and I can't seem to make it work:</p><p>&lt;a href="testform.cfm" onclick="panel.loadContent(this.href,{id:'panelform'}); return false"&gt;Click&lt;/a&gt;<br>&lt;div id="panel1"&gt;Please click&lt;/div&gt;<br>&lt;script type="text/javascript"&gt;<br>var panel = new Spry.Widget.HTMLPanel("panel1");<br>&lt;/script&gt;</p><p>loads the div just fine:</p><p>&lt;div id="panelform"&gt;<br>&lt;form name="form" enctype="multipart/form-data" action=""&gt;<br>  &lt;span id="sprytextfield1"&gt;<br>  &lt;label&gt;<br>  &lt;input type="text" name="text1" id="text1" /&gt;<br>  &lt;/label&gt;<br>  &lt;span class="textfieldRequiredMsg"&gt;A value is required.&lt;/span&gt;&lt;/span&gt;<br>  &lt;input name="submit" type="submit" value="submit" /&gt;<br>&lt;/form&gt; <br>&lt;script type="text/javascript"&gt;<br>&lt;!--<br>var sprytextfield1 = new Spry.Widget.ValidationTextField("sprytextfield1");<br>//--&gt;<br>&lt;/script&gt;<br>&lt;/div&gt;</p><p>However, just like when it is placed inside a &lt;cfdiv&gt; spry validation is ignored (although it partially does work, since the &lt;span class="textfieldRequiredMsg"&gt;A value is required.&lt;/span&gt; does not display on load, meaning JS works initially.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673955">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673955">16</a> by Raymond Camden
		posted on 11/16/2007 at 2:08 AM
		</div>
		<div class="comment_text"><p>First off - your file upload may not work well in there.</p><p>So one reason your validation may not work is that you aren't including the CSS/JS. When you loaded the content, you said, 'just user stuff in id:panelform. Well that didn't include the CSS/JS for validation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673953">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673953">17</a> by Cyrill
		posted on 11/16/2007 at 3:07 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I did test file upload from a form inside cfdiv. It seems to work when it is not cfform. I have not tried uploading files from spry panels.</p><p>As for validation, I load both CSS and js for spry validation in the main template that contains the panel. When js file is missing, then the "value is required" span shows up on load, that suggests to me that js is loaded. and firebug lists the js file as well as CSS styles as available.</p><p>There is always a possibility I am doing something wrong or misspelling - I never underestimate my ability to chase wild geese while there is a cooked one sitting in the oven.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673959">18</a> by Raymond Camden
		posted on 11/16/2007 at 7:54 PM
		</div>
		<div class="comment_text"><p>Hmmm. I'm not sure then. Don't forget that Spry has a forums over on labs. Try there and see if you get answer. If you do - please share it here! It does seem like it _should_ work.</p><p>As a random though, in your JS block, before you make the widget, do this for me:</p><p>alert('hi')</p><p>When the content loads, do you see the alert? Just because you don't see the span doesn't mean that the JS is working - cuz the CSS file should hide it instead. (AFAIK)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673960">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673960">19</a> by Raymond Camden
		posted on 11/21/2007 at 10:48 PM
		</div>
		<div class="comment_text"><p>Cyrill, on the next blog post in this series, a user named Rual noticed there is a evalScripts argument you can pass to the constructor for the HTML widget. Try that. I think thats the solution.</p></div>
	</div>
</div>
		