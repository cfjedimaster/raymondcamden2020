
<div class="comment" id="c_1713615713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615713">1</a> by BlogFusion
		posted on 6/3/2004 at 6:40 PM
		</div>
		<div class="comment_text"><p>I've recently been introduced to the pain of customTags and their required mappings for CFMODULE and CFINCLUDE if they're in the CustomTags directory.</p><p>Is there a good way to avoid having users have to use mappings if they put the custom tag in another directory than the template? I know there are some methods of using the ServiceFactory, but not confident that's the right way to go.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615711">2</a> by Raymond Camden
		posted on 6/3/2004 at 6:47 PM
		</div>
		<div class="comment_text"><p>You mean "required" if _not_ in the custom tags folder.</p><p>Frankly, I think mappings are very important, and I (normally) recommend AGAINST just using the custom tag folders.</p><p>The biggest reason is name resolution. If you have 2 apps on the same serer using a custom tag, "secure.cfm", than it is possible CF will get confused by which to call. Using a mapping removes this confusion completely.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615718">3</a> by BlogFusion
		posted on 6/3/2004 at 6:51 PM
		</div>
		<div class="comment_text"><p>Yes, absolutely right. Right now, when I send buyers my app, I simply include info on how to set up a mapping, but leave the custom tag in the same directory as the calling template. This way at least, they can have an instant setup. I would like to be able to have the mappings auto-created though...along with DSN creation. Just to make it painless to install the app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615726">4</a> by Todd
		posted on 6/4/2004 at 1:11 AM
		</div>
		<div class="comment_text"><p>Clearly the ISP is mistaking a regular mapping for a custom tag mapping?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615725">5</a> by BlogFusion
		posted on 6/4/2004 at 1:20 AM
		</div>
		<div class="comment_text"><p>Uh... what's the difference? (Sorry for the dumb question)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615724">6</a> by Todd
		posted on 6/4/2004 at 1:29 AM
		</div>
		<div class="comment_text"><p>Regular mappings are as Raymond said, aliases.</p><p>CustomTag mappings however, will load *.cfm files into memory.  That will definitely have a performance issue, especially if you make the CustomTag mapping '/' -- however, depends on how many *.cfm files, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615723">7</a> by Raymond Camden
		posted on 6/4/2004 at 3:46 AM
		</div>
		<div class="comment_text"><p>Todd, respectfully I disagree with you. CF doesn't load the files for custom tags when it starts up.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615727">8</a> by Todd
		posted on 6/4/2004 at 4:12 AM
		</div>
		<div class="comment_text"><p>Ok?  What does it do then?  Why wouldn't it?  It's a 'Global' CustomTag?  I've been lead to believe that it gets loaded into memory.  So, perhaps that was CF5-era.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615730">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615730">9</a> by Raymond Camden
		posted on 6/4/2004 at 4:23 AM
		</div>
		<div class="comment_text"><p>It doesn't do anything at startup, except to generate a list. When you call cf_foo, it will then check each folder for foo.cfm. Once it finds it, it caches the location.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615731">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615731">10</a> by Todd
		posted on 6/4/2004 at 1:54 PM
		</div>
		<div class="comment_text"><p>Ok, so.. that clears that up.  I'd still see somewhat of a performance hit if someone made '/' a CustomTag mapping.  Do you at least agree with that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615732">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615732">11</a> by Raymond Camden
		posted on 6/4/2004 at 3:27 PM
		</div>
		<div class="comment_text"><p>No, I don't. I only see an issue if you have a _large_ number of CT paths, and I mean a large number, and even then, it is only an issue the first time you call cf_foo. Once CF finds foo.cfm, it remembers it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615734">12</a> by Todd
		posted on 6/4/2004 at 3:50 PM
		</div>
		<div class="comment_text"><p>I think you're missing what I'm trying to stress.  If you make '/' a CustomTag path, it basically goes after _ALL_ CFM files in '/' and has to remember the location for each.</p><p>Let's not forget the dangers of what might happen if there's 2 sql_whatever.cfm files within that subtree of '/' and also, the dangers if one of them happens to be different than the other.</p><p>Realistically, if a site only has foo.cfm available, we're all in trouble when bar.cfm is found.</p><p>So, myths debunked:<br>* CustomTags are not loaded into memory, their location is.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615736">13</a> by Raymond Camden
		posted on 6/4/2004 at 3:54 PM
		</div>
		<div class="comment_text"><p>What do you mean "goes after"? It doesn't do that. CF only uses custom tag paths when you call a custom tag. Ie, when you run cf_foo. Even then, it does a simple file search for foo.cfm.</p><p>As for your second paragraph - that's a danger - yes - but it has nothing to do with performance. It's just how CF handles custom tags. Thats why I tell folks to use cfmodule.</p><p>I'm not sure what your last paragraph means.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615742">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615742">14</a> by Todd
		posted on 6/4/2004 at 4:07 PM
		</div>
		<div class="comment_text"><p>Ok, so.. basically you're saying that with '/' marked as a CustomTag path, it doesn't do anything until &lt;CF_Whatever&gt; is called.</p><p>Once &lt;CF_Whatever&gt; is called then it looks locally (Same location as the calling file), looks globally (CustomTag path) and wherever it finds it, it THEN caches the path to that location for future reference?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615740">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615740">15</a> by Raymond Camden
		posted on 6/4/2004 at 4:15 PM
		</div>
		<div class="comment_text"><p>Yep, that's why you need to restart CF if you move a CT after you have called it.</p><p>Frankly, I never use CT paths anyway, I almost always use cfmodule.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615739">16</a> by Todd
		posted on 6/4/2004 at 4:24 PM
		</div>
		<div class="comment_text"><p>Ok, I'm cleared up now.  Shame, I used to view the CustomTags path as magic.  Now, with the help of jedimaster, I see there is no spoon.  Er.. wait.</p><p>Anyway, thanks for the clarification.  Pre-CFMX coding, I use modules/local custom tags all over the place rather than global CustomTags.</p><p>I'm still trying to get work to admit that we're on CFMX and that it's safe to use CFCs and that we won't have anymore CF5 customers / requirements.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615735">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615735">17</a> by Anthony Petruzzi
		posted on 6/4/2004 at 5:13 PM
		</div>
		<div class="comment_text"><p>Persoanlly I just make a solder off my root directory called custom_tags and use cfmodule to call the template with the relative path. I can't stand jerking around with mappings and what not and persoanlly ir makes it alot easier to move the application from one server to the other. All I have to do is copy the entire folder.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615738">18</a> by Nathan Dintenfass
		posted on 6/6/2004 at 7:31 PM
		</div>
		<div class="comment_text"><p>To answer the previous question about alternatives to mappings -- I strongly suggest using CFIMPORT.  I used to do the "flat directory" thing to be able to use CF_ syntax (I never liked CFMODULE), but CFIMPORT makes your code even cleaner, IMO, and you can put your custom tags in nested directories that make logical sense for your development easily.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615737">19</a> by BlogFusion
		posted on 6/13/2004 at 7:06 AM
		</div>
		<div class="comment_text"><p>I think I'm confused... you're using CFIMPORT to bring in a custom tag? How?</p><p>And what's wrong with using CFMODULE?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615741">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615741">20</a> by Nathan Dintenfass
		posted on 6/13/2004 at 7:07 PM
		</div>
		<div class="comment_text"><p>There's nothing wrong with CFMODULE, per se.  My two main problems are that 1) I find myself having lots of custom tags with an attribute called NAME -- that just doesn't work with CFMODULE (and yeah, I understand that it's perhaps not the best design choice if I ever need to share my code), and 2) I think CFMODULE is just ugly code, especially if you start having nested custom tag calls and then throw in tags with end-tags.</p><p>CFIMPORT is made to bring in custom tag libraries (CFML or JSP) -- read the docs.  I've become a big fan.</p></div>
	</div>
</div>
		