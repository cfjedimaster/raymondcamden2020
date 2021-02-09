
<div class="comment" id="c_1713652809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652809">1</a> by tony petruzzi
		posted on 5/11/2006 at 8:11 PM
		</div>
		<div class="comment_text"><p>Why is it that you get this same question about once a month? I guess people don't know how to read the old posts you do.</p><p>BTW - Your method is exactly how I handle this problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652816">2</a> by Raymond Camden
		posted on 5/11/2006 at 8:14 PM
		</div>
		<div class="comment_text"><p>Did I answer this one already? I did a quick search but didn't see it. I mean I'm sure I've mentioned something like this, but did I have an entry _just_ on this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652817">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652817">3</a> by Tony Petruzzi
		posted on 5/11/2006 at 8:48 PM
		</div>
		<div class="comment_text"><p>Actually you're right, my mistake. This discussion was touched on in the request scope post that happened 3 days ago:</p><p>"The Request Scope - not just for breakfast anymore!"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652819">4</a> by Raymond Camden
		posted on 5/11/2006 at 8:49 PM
		</div>
		<div class="comment_text"><p>I'm not quite that old yet I guess. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652822">5</a> by Seth Petry-Johnson
		posted on 5/11/2006 at 10:29 PM
		</div>
		<div class="comment_text"><p>FWIW, I don't like using a Utils.cfc to provide services to other CFCs: it tightly couples those two components together even though they have drastically different purposes.  I try to keep my CFCs as portable as possible and this type of coupling makes that very difficult.</p><p>I prefer pasting the UDFs into the CFC as private utility methods.  It _does_ repeat a lot of code, but in my experience utility functions are rarely ever modified once they are fully tested.  On other hand, it is very common that I want to copy CFCs between sections of a site, or even between different sites.</p><p>Of course, your situation might vary widely, so to each his own.  I'm sure there are cases where injecting a utilities CFC  is the best approach.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652820">6</a> by Raymond Camden
		posted on 5/11/2006 at 10:34 PM
		</div>
		<div class="comment_text"><p>I see how it is coupling, but at the same time, I don't see why it would matter. I mean, at some point you have to have _some_ dependancies. Saying that so and so CFC requires a utility function is not such a bad thing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652831">7</a> by todd
		posted on 5/11/2006 at 11:44 PM
		</div>
		<div class="comment_text"><p>Thanks for the clarification and ideas.  I think I like the utils.cfc idea the best.  Maybe some ambitious CF'er out there will convert the entire library over at <a href="http://disq.us/url?url=http%3A%2F%2Fcflib.org%3A_xxzCNK-l1o46U5-IF400HiKZ0A&amp;cuid=3321886" rel="nofollow noopener" title="cflib.org">cflib.org</a> to a usable utils.cfc so we can all just create an instance of them in our other cfc's whenever we need to! ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652829">8</a> by Chris
		posted on 5/12/2006 at 12:21 AM
		</div>
		<div class="comment_text"><p>When dealing with a utility function(s) like that I have found using the extend property of the cfc works well.  No copy and past and no instanciating another cfc while inside your cfc.  Gotta love inheritance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652824">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652824">9</a> by Mike Givens
		posted on 5/12/2006 at 8:27 AM
		</div>
		<div class="comment_text"><p>I agree with Chris - a CFC's extends="Utility" just "feels" like the correct way to go. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652834">10</a> by Raymond Camden
		posted on 5/12/2006 at 4:40 PM
		</div>
		<div class="comment_text"><p>I disagree with the extends use. Extends should be used for IsA relationships, so for example, a Poodle CFC extends Dog CFC because a Poodle is a Dog. I'm no OO expert, but in general the rules would say not to use inheritance for cases like this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652830">11</a> by Chris
		posted on 5/12/2006 at 5:11 PM
		</div>
		<div class="comment_text"><p>I agree with you ray.  however, instead of just making a few utility functions in a cfc, how about having a base Object that has a few properties and methods that our other objects could use.  now we can say 'new cool object' is a 'base object'.  so i guess it comes down to what type of functionality the util functions will have and if the functions can be generic.  if its something simple that is used one or twice then yeah i'll agree with you and just create the cfc inside the cfc.  but if its something that can be generic and used by many objects i would go with extend.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652825">12</a> by Michael White
		posted on 5/12/2006 at 5:53 PM
		</div>
		<div class="comment_text"><p>I have no idea what i'm talking about but don't frameworks have some "super" methods and almost everything extends them</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652826">13</a> by Mike Givens
		posted on 5/13/2006 at 6:57 PM
		</div>
		<div class="comment_text"><p>Good point Raymond - "...Extends should be used for IsA relationships...". I'm "back-peddling" on my previous comment as a result, and more importantly changing one of my recent CFC's in agreement. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652827">14</a> by William
		posted on 5/15/2006 at 7:02 AM
		</div>
		<div class="comment_text"><p>Why not just have a util component that is at the top of the chain e.g. poodle extends dog which extends util?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652828">15</a> by William
		posted on 5/15/2006 at 8:42 AM
		</div>
		<div class="comment_text"><p>Actually I think my prior comment is probably better expressed as: Poodle extends Dog which extends Animal which extends species.</p><p>I think however that it is a bad idea to be mixing generic data manipulation functions into your components unless they are intrinsic. For instance I would not use a paragraph format UDF within a customer or account component. I would use this in the view layer i.e. That I think that it is best to keep component and associated data very specific to what the component is and do any processing as needed outside the component.</p><p>It would be great to hear more opinions about coupling.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652811">16</a> by Raymond Camden
		posted on 5/15/2006 at 6:09 PM
		</div>
		<div class="comment_text"><p>I still don't agree with the idea of using inheritance. If it doesn't fit the "Is A" rule, it should not be used.</p><p>Obviously paragraphformat is a bad example. UI type UDFs wouldn't make sense in a CFC. Then again, I'd still use a main Utils CFC and simply wouldn't use those UI UDFs in my CFC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713652810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713652810">17</a> by William
		posted on 5/16/2006 at 8:09 AM
		</div>
		<div class="comment_text"><p>I would like to make it clear that my gripe is with using common UDFs across multiple unrelated components. I am not suggesting that inheritance should be used as a means to share all purpose methods.</p><p>I agree with the “Is A” rule. My point is that you can have a high level component that allows for more general purpose UDFs so long as they are related to the associated sub components (classes). In my opinion there is a flaw in your design if you have the need to employ general UDFs inside multiple class types (i.e. common processing). As soon as you start introducing outside influence into your components you are starting to increase coupling.</p><p>I think that it is best to keep components as simple and as specific as possible. If data needs to be changed in a way that does not directly relate to the component it should be done outside of the component so that the data contained in the component is in its simplest form. I believe this maintains flexibility and almost completely eliminates coupling.</p></div>
	</div>
</div>
		