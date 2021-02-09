
<div class="comment" id="c_1713713107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713107">1</a> by Katie Atkinson
		posted on 2/18/2009 at 3:43 PM
		</div>
		<div class="comment_text"><p>I'm so excited by all this... Thanks for bringing JQuery into my life Ray :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713082">2</a> by Curt Gratz
		posted on 2/18/2009 at 6:23 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>If you want to use the writetobrowser action and resize each image on the fly you can with your imageUtils.  &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fimageutils.riaforge.org%2F%3A7jfKNQxlYPV_9fJyNz7jk_mgjb4&amp;cuid=3321886" rel="nofollow noopener" title="http://imageutils.riaforge.org/">http://imageutils.riaforge....</a>"&gt;<a href="http://disq.us/url?url=http%3A%2F%2Fimageutils.riaforge.org%2F%3C%2Fa%3E%3AoywfaPSWf9pm-qYtdHv2vu8h01Q&amp;cuid=3321886" rel="nofollow noopener" title="http://imageutils.riaforge.org/</a>">http://imageutils.riaforge....</a> using the getURL() method.  Just a thought so you don't have to write all the thumbs to disk.  Might be expensive depending on the application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713077">3</a> by Eric Cobb
		posted on 2/18/2009 at 8:00 PM
		</div>
		<div class="comment_text"><p>I used almost this exact same solution a few weeks ago here:  <a href="http://disq.us/url?url=http%3A%2F%2Fmissga.org%2Fwinnergalleryimages.cfm%2F5%2FMiss-Georgia-2008-Photo-Gallery%2FMiss-America-Photos%3Ah9OXtbyLxhlKiS9gow7GposW_pU&amp;cuid=3321886" rel="nofollow noopener" title="http://missga.org/winnergalleryimages.cfm/5/Miss-Georgia-2008-Photo-Gallery/Miss-America-Photos">http://missga.org/winnergal...</a></p><p>The only difference is I used Lightbox (<a href="http://disq.us/url?url=http%3A%2F%2Fplugins.jquery.com%2Fproject%2Fjquerylightbox_bal%29%3AJNhwdTXlzYklKEZWkV5Vx88O-Q4&amp;cuid=3321886" rel="nofollow noopener" title="http://plugins.jquery.com/project/jquerylightbox_bal)">http://plugins.jquery.com/p...</a> instead of Thickbox.  No particular reason why I chose one over the other, I think it was just the first one I found.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713062">4</a> by Raymond Camden
		posted on 2/18/2009 at 8:02 PM
		</div>
		<div class="comment_text"><p>@Curt: I would definitely recommend against that. Resizing is a slow operation at times. I'd only resize once. My method writes to disk just once.</p><p>As for getURL, that is for converting a URL into an image, ie, taking a screen shot of a web page. It is not for resizing images.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713083">5</a> by Chris
		posted on 2/19/2009 at 12:22 AM
		</div>
		<div class="comment_text"><p>I will definitely check this out.  Have you tried it with a lot of images, say 100?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713079">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713079">6</a> by Raymond Camden
		posted on 2/19/2009 at 2:28 AM
		</div>
		<div class="comment_text"><p>I would expect the first hit to be significantly slow. So I'd probably copy 20 at a time. Maybe 50. Of course, once shrunk, it will be much faster.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713080">7</a> by Chris Luksha
		posted on 2/19/2009 at 7:32 PM
		</div>
		<div class="comment_text"><p>Why not - instead of deleting the thumbs folder - just use your little blog cfc trick and put in some kind of reinit key to trigger the last portion of your code?  After all the last section only created a thumb if the image did not have one.</p><p>So you might do<br>&lt;cfparam name="url.gogogadgetreset" default=""&gt;<br>&lt;cfswitch expression="url.gogogadgetreset"&gt;<br> &lt;cfcase value="rebuild"&gt; Dump the thumb folder and start over&lt;/cfcase&gt;<br> &lt;cfcase value="refresh"&gt;simply refresh the missing thumbs&lt;/cfcase&gt;<br>&lt;cfdefaultcase&gt;do nothing&lt;/cfdefaultcase&gt;<br>&lt;/cfswitch&gt;</p><p>Just a thought<br>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713075">8</a> by Marwan Narian
		posted on 2/19/2009 at 8:50 PM
		</div>
		<div class="comment_text"><p>Great work but adding any CF ajax tags breaks it. CF ajax tags seems not to want to work with any other Javascript.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713078">9</a> by Raymond Camden
		posted on 2/19/2009 at 8:52 PM
		</div>
		<div class="comment_text"><p>Nothing in jQuery should 'break' with CFAjax, and vice versa. I'd dig into your code more. Got to be something simple. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713084">10</a> by wade miller
		posted on 2/19/2009 at 11:05 PM
		</div>
		<div class="comment_text"><p>After reading your posts about jquery I quickly became a fan, but I have the latest jquery release, and thickbox does not work with it. Only after I used the release you have in this code does it work.</p><p>That gives me some concerns about using jquery. I guess nothing is perfect. I am just trying to convince others at my company of its benefits, and this didn't help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713072">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713072">11</a> by Raymond Camden
		posted on 2/19/2009 at 11:08 PM
		</div>
		<div class="comment_text"><p>Wade - I'm using the latest jquery myself and it worked fine with thickbox. I'd try again and see if it was something else.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713063">12</a> by Bilgehan
		posted on 2/20/2009 at 12:12 AM
		</div>
		<div class="comment_text"><p>Although ajax is handy and improves user experience for forms and similar applications, i prefer rest style, easily bookmark-able image galleries.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713069">13</a> by wade miller
		posted on 2/20/2009 at 12:15 AM
		</div>
		<div class="comment_text"><p>Oh, I am about to give up on it. Using jQuery v.1.3.1, the code does not work for me. The larger images do not pull up. Using the version that you reference in the code above, jQuery v. 1.2.6, everything works fine.</p><p>I know there is something I'm probably missing. I'm just going to go back to CF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713064">14</a> by Raymond Camden
		posted on 2/20/2009 at 12:36 AM
		</div>
		<div class="comment_text"><p>@Bilgehan: So what if there was a way to bookmark one of the images? If I did a demo of that, would you approve?</p><p>@Wade: Again, my local server was using 1.3.1. Not sure what you mean by saying you will just go back to CF - as this IS CF, CF and JavaScript. :) I wouldn't give up yet. Can you put this online where we can look?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713067">15</a> by Bilgehan
		posted on 2/20/2009 at 1:48 AM
		</div>
		<div class="comment_text"><p>Yes, providing permalinks for the images would be great for accessibility.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713070">16</a> by Raymond Camden
		posted on 2/20/2009 at 1:53 AM
		</div>
		<div class="comment_text"><p>Ok, I've got it on my TODO list. I'm thinking that, by default, you will land on a page and just see the thumbnails, but if you follow the permalink, it will auto load the right image. I can do this - I know I can - just give me few hours. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713068">17</a> by wade miller
		posted on 2/20/2009 at 1:57 AM
		</div>
		<div class="comment_text"><p>Okay, here are the links. It is the same exact code except for the jquery.js</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bray.com%2Ftboxtest%2Findex.cfm%3Ftest%3Dworks%3ArJ5cIRmgz8i_7m9YrBbAas3E_C0&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bray.com/tboxtest/index.cfm?test=works">http://www.bray.com/tboxtes...</a></p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bray.com%2Ftboxtest%2Findex.cfm%3Ftest%3Dfail%3A9l_wQHJpXk_B3G9brXQXy8TbDDI&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bray.com/tboxtest/index.cfm?test=fail">http://www.bray.com/tboxtes...</a></p><p>What I meant by "back to using CF" I left off and actionscript.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713065">18</a> by Raymond Camden
		posted on 2/20/2009 at 2:06 AM
		</div>
		<div class="comment_text"><p>Use Firebug. Go to the net tab, and you will see it fails on</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.bray.com%2Ftboxtest%2FmacFFBgHack.png%3AcyYNXq94vmEQ1QLnxm7XOLRCnK4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.bray.com/tboxtest/macFFBgHack.png">http://www.bray.com/tboxtes...</a></p><p>On the docs for Thickbox, they talk about the fixes you have to do in code for this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713071">19</a> by wade miller
		posted on 2/20/2009 at 2:16 AM
		</div>
		<div class="comment_text"><p>I looked all over the documentation. Two of us did. I can't believe we missed that. Thank you.</p><p>I've been meaning to install Firebug, but I always put it off. Now, I will do it while it is fresh on my mind.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713066">20</a> by Hatem Jaber
		posted on 2/20/2009 at 3:25 AM
		</div>
		<div class="comment_text"><p>@Ray, not sure if you looked at Fancybox, but i've used it and it's a really nice modal for the gallery stuff:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ffancy.klade.lv%2F%3A5E1bWKuiTz2R2fhDqMNIK66W8tI&amp;cuid=3321886" rel="nofollow noopener" title="http://fancy.klade.lv/">http://fancy.klade.lv/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713076">21</a> by Raymond Camden
		posted on 2/20/2009 at 3:47 AM
		</div>
		<div class="comment_text"><p>That's pretty snazzy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713074">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713074">22</a> by Raymond Camden
		posted on 2/20/2009 at 5:04 PM
		</div>
		<div class="comment_text"><p>@Chris: Yes, that's an idea as well. I started to build a custom tag version of this to make it simpler, but the code is so short I didn't really think it worthwhile.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713073">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713073">23</a> by Marwan Narian
		posted on 2/20/2009 at 9:40 PM
		</div>
		<div class="comment_text"><p>Ray, please try to display the images in a cflayout type border as an examples of how things breaks with cf ajax when adding external javascript.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713086">24</a> by Raymond Camden
		posted on 2/21/2009 at 1:10 AM
		</div>
		<div class="comment_text"><p>@Marwan: Well, Thickbox is looking for items that match a class when the page loads. If the cflayout loaded content via Ajax then the content wouldn't be there when thickbox was trying to run it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713085">25</a> by Marwan Narian
		posted on 2/21/2009 at 1:38 AM
		</div>
		<div class="comment_text"><p>Is doing this loading via ajax? And how do you make this kind of calls work? Excuse my poor Javascript skills. Thanks.</p><p>&lt;cflayout type="border"&gt;<br>&lt;cflayoutarea name="whatever" position="center"&gt;<br>&lt;script type="text/javascript" src="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fjs%2Fjquery.js%3AFhGJOp8dQ2gbater5D1qw3VzHc8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/js/jquery.js">http://www.coldfusionjedi.c...</a>"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript" src="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fjs%2Fthickbox%2Fthickbox.js%3A0NbD_Y7-NDa0lpiZFTKrGToizgg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/js/thickbox/thickbox.js">http://www.coldfusionjedi.c...</a>"&gt;&lt;/script&gt;<br>&lt;link rel="stylesheet" href="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fjs%2Fthickbox%2Fthickbox.css%3Am1rrxeZDI3ThDzOOSJa-ouk6Nys&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/js/thickbox/thickbox.css">http://www.coldfusionjedi.c...</a>" type="text/css" media="screen" /&gt;<br>&lt;/head&gt;</p><p>&lt;body&gt;</p><p>&lt;cfset imageFolder = "folder2"&gt;<br>&lt;cfset imageDir = expandPath("./#imageFolder#")&gt;<br>&lt;cfdirectory directory="#imageDir#" name="images"&gt;</p><p>&lt;!--- make thumbs ---&gt;<br>&lt;cfif not directoryExists("#imageDir#/thumbs")&gt;<br>	&lt;cfdirectory action="create" directory="#imageDir#/thumbs"&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfloop query="images"&gt;</p><p>	&lt;!--- valid image? ---&gt;<br>	&lt;cfif isImageFile("#directory#/#name#")&gt;<br>		&lt;!--- check for thumbnail ---&gt;<br>		&lt;cfif not fileExists("#directory#/thumbs/#name#")&gt;<br>			&lt;cfimage action="read" source="#directory#/#name#" name="image"&gt;<br>			&lt;cfset imageScaleToFit(image, 125, 125)&gt;<br>			&lt;cfset imageWrite(image, "#directory#/thumbs/#name#",true)&gt;<br>		&lt;/cfif&gt;</p><p>		&lt;cfoutput&gt;	<br>		&lt;a href="#imageFolder#/#name#" title="#name#" class="thickbox" rel="gallery-ss"&gt;&lt;img src="#imageFolder#/thumbs/#name#" alt="#name#" /&gt;&lt;/a&gt;<br>		&lt;/cfoutput&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfloop&gt;<br>&lt;/cflayoutarea&gt;<br>&lt;/cflayout&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713092">26</a> by Raymond Camden
		posted on 2/22/2009 at 3:01 AM
		</div>
		<div class="comment_text"><p>That code worked ok for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713094">27</a> by Marwan Narian
		posted on 2/23/2009 at 8:13 PM
		</div>
		<div class="comment_text"><p>Glad the code works for you. This code and any code that contains cflayout of type border that you insert javascript any where in it stops to work on all 3 of our servers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713089">28</a> by Raymond Camden
		posted on 2/23/2009 at 8:17 PM
		</div>
		<div class="comment_text"><p>And you used the exact same code? Are you running CF801 with the latest hotfixes?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713095">29</a> by Tiffany Trott
		posted on 3/4/2009 at 8:58 PM
		</div>
		<div class="comment_text"><p>I am experiencing the same problem as Wade Miller. If I use the current 1.3.2 release of jquery the code does not work, revert back to an older version it works fine. I did change the path for macFFBgHack.png and all other paths as well. Any ideas on this? I have experienced this problem on a few of our apps at work as well, they work fine with the older jquery builds but the latest release seems to break them.</p><p>Any help would be appreciated!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713090">30</a> by Raymond Camden
		posted on 3/4/2009 at 9:04 PM
		</div>
		<div class="comment_text"><p>I've confirmed - and I'm digging. May have to check with the plugin author.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713091">31</a> by Raymond Camden
		posted on 3/4/2009 at 9:09 PM
		</div>
		<div class="comment_text"><p>Ok, I punted. I contacted the plugin author.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713093">32</a> by Raymond Camden
		posted on 3/4/2009 at 9:11 PM
		</div>
		<div class="comment_text"><p>I should have just checked his forums first:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcodylindley.com%2Fthickboxforum%2Fcomments.php%3FDiscussionID%3D1726%26page%3D1%23Item_0%3AnNdtsA0UJCVuELRwzbdGF6hkgUU&amp;cuid=3321886" rel="nofollow noopener" title="http://codylindley.com/thickboxforum/comments.php?DiscussionID=1726&amp;page=1#Item_0">http://codylindley.com/thic...</a></p><p>I replace the line mentioned and it worked for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713096">33</a> by Tiffany Trott
		posted on 3/4/2009 at 9:38 PM
		</div>
		<div class="comment_text"><p>Thank you so much! I guess I could have checked the forums too, but letting others who come across this post know is a good thing as well.</p><p>Thanks again Jedi!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713098">34</a> by Wade Miller
		posted on 3/5/2009 at 4:40 AM
		</div>
		<div class="comment_text"><p>I had looked, but never found this solution. I had been cheating and including the older jQuery just for this particular plugin. It was working, but I was never happy since I was fudging.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713100">35</a> by Clint McKoy
		posted on 4/22/2010 at 3:10 PM
		</div>
		<div class="comment_text"><p>Awesome and easy... thanks for another great tutorial! Just set this up on a site I'm converting from php to cfm that has many galleries and no database... this made my day a whole lot easier.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713101">36</a> by Adam
		posted on 10/27/2011 at 8:26 PM
		</div>
		<div class="comment_text"><p>Great tutorial!  It has helped me immensely.  I am wondering about adding captions to describe the images.  It seems that the quick and easy way would be to rename the image using the description.  Is this wrong or bad?  How else should I perform this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713099">37</a> by Raymond Camden
		posted on 10/28/2011 at 1:55 AM
		</div>
		<div class="comment_text"><p>Well, it might get messy. I mean, this is ok:</p><p>A_Picture_Of_My_Dog.jpg</p><p>But a caption that was a bit longer would be ugly. I'd maybe consider storing the captions in a db table that related file names to captions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713103">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713103">38</a> by misty
		posted on 5/3/2012 at 11:57 AM
		</div>
		<div class="comment_text"><p>Hi ray, I am using the Fancybox Plugin this way:</p><p> &lt;cflayoutarea title="Business Images"&gt;<br>    	&lt;cfset listid = url.lid&gt;<br>    	&lt;cfinclude template="userpics.cfm"&gt;<br>    &lt;/cflayoutarea&gt;</p><p>my userpics.cfm file has 100 pictures and i had created a paging system there, showing 10 Images on a Page</p><p>Now the issue is for the first time, it loads Good, when i navigate to another page, it just show the image on full Page</p><p>Can u guide a bit.</p><p>Code for that included page is like this</p><p>&lt;link rel="stylesheet" type="text/css" href="fancybox/jquery.fancybox-1.3.4.css" media="screen" /&gt;<br>&lt;script type="text/javascript" src="fancybox/jquery.fancybox-1.3.4.pack.js"&gt;&lt;/script&gt;<br>&lt;script type="text/javascript"&gt;<br>$(document).ready(function() {<br>	$("a.zoom").fancybox();</p><p>	$("a.zoom1").fancybox({<br>		'overlayOpacity'	:	0.7,<br>		'overlayColor'		:	'#FFF'<br>	});</p><p>	$("a.zoom2").fancybox({<br>		'zoomSpeedIn'		:	800,<br>		'zoomSpeedOut'		:	800,<br>		'overlayShow'		:	false<br>	});<br>});<br>&lt;/script&gt;</p><p>&lt;cfoutput&gt;<br>    &lt;cfif startRowBack gt 0&gt;<br>      &lt;a href="#AjaxLink('userpics.cfm?startRow=#startRowBack#&amp;listid=#images.pic_listid#')#"&gt;&lt;span title="Back #rowsPerPage# Records"&gt;&lt;img src="images/arrow_back.gif" alt="Back #rowsPerPage# Records" border="0"&gt;&lt;/span&gt;&lt;/a&gt;<br>    &lt;/cfif&gt;<br>    &lt;cfif startRowNext lte totalRows&gt;<br>      &lt;a href="#AjaxLink('userpics.cfm?startRow=#startRowNext#&amp;listid=#images.pic_listid#')#"&gt;&lt;span title="Next #rowsPerPage# Records"&gt;&lt;img src="images/arrow_next.gif" alt="Next #rowsPerPage# Records" border="0"&gt;&lt;/span&gt;&lt;/a&gt;<br>    &lt;/cfif&gt;<br>    &lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713102">39</a> by Raymond Camden
		posted on 5/3/2012 at 2:40 PM
		</div>
		<div class="comment_text"><p>I think your JavaScript needs to be outside of the cflayoutarea. When you go to page 2, the entire area is being replaced, which means your JS is as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713104">40</a> by misty
		posted on 5/3/2012 at 4:12 PM
		</div>
		<div class="comment_text"><p>Even Tried that way, Does notwork, when it moves to Page 2</p><p>Is this could be an issue that jquery Dom is redy once and when 2 page is navigated it does not load that again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713106">41</a> by Raymond Camden
		posted on 5/3/2012 at 5:58 PM
		</div>
		<div class="comment_text"><p>Well, you got me. I can dig into this offline if you would like, although it crosses into the paid support category. ;)</p><p>TO be honest, I do NOT recommend mixing jQuery in with CF's built in Ajax stuff. I'd get rid of the cflayoutareas.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713713105">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713713105">42</a> by misty
		posted on 5/3/2012 at 7:36 PM
		</div>
		<div class="comment_text"><p>Hi Ray, Thanks for everything</p><p>I solved it, Let me share code with you so if this annoying things comes up with someone else they can solve it</p><p>just change this code:</p><p>&lt;script type="text/javascript"&gt;<br>$(document).ready(function() {<br>   $("a.zoom").fancybox();</p><p>   $("a.zoom1").fancybox({<br>      'overlayOpacity'   :   0.7,<br>      'overlayColor'      :   '#FFF'<br>   });</p><p>   $("a.zoom2").fancybox({<br>      'zoomSpeedIn'      :   800,<br>      'zoomSpeedOut'      :   800,<br>      'overlayShow'      :   false<br>   });<br>});<br>&lt;/script&gt; to</p><p>&lt;script type="text/javascript"&gt;<br>doFancyBox = function() {<br>   $("a.zoom").fancybox();</p><p>   $("a.zoom1").fancybox({<br>      'overlayOpacity'   :   0.7,<br>      'overlayColor'      :   '#FFF'<br>   });</p><p>   $("a.zoom2").fancybox({<br>      'zoomSpeedIn'      :   800,<br>      'zoomSpeedOut'      :   800,<br>      'overlayShow'      :   false<br>   });<br>}<br>&lt;/script&gt;</p><p>and write the following in the cflayoutarea tag</p><p>&lt;cfset AjaxOnLoad('doFancyBox')&gt;</p><p>and Boom it will work</p><p>Cheers</p><p>:)</p></div>
	</div>
</div>
		