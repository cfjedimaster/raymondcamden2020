
<div class="comment" id="c_1713672961">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672961">1</a> by Michael McConnell
		posted on 10/11/2007 at 1:33 AM
		</div>
		<div class="comment_text"><p>Great captions....And cool example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672965">2</a> by Dave Dugdale
		posted on 10/11/2007 at 2:11 AM
		</div>
		<div class="comment_text"><p>I love it, keep the examples coming - that is why I love your blog.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672966">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672966">3</a> by Sana
		posted on 10/11/2007 at 2:14 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Could you send more than one images to browser at a time; like this,<br>&lt;cfset myimage=makeShadow("sadgirl1.jpg",5,5, "90,0,0")&gt;<br>&lt;cfimage action="writeToBrowser" source="#myimage#"&gt;</p><p>&lt;cfset myimage=makeShadow("sadgirl2.jpg",5,5, "90,0,0")&gt;<br>&lt;cfimage action="writeToBrowser" source="#myimage#"&gt;</p><p>.NET is far more powerfull than JAI, I would suggest have a look to  APIs</p><p>System.Drawing.Imaging<br>System.Drawing</p><p>no doubt that CF is cool, but certainly not in every functionality.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672968">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672968">4</a> by Raymond Camden
		posted on 10/11/2007 at 2:23 AM
		</div>
		<div class="comment_text"><p>Sana:</p><p>1) Yes, you can use N writeToBrowser actions in one request.</p><p>2) Heh, well, you have to remember that CF's image stuff is a layer on top of the lower level code (not sure if it is JAI, I assume it is). CF lets you use Dot Net as easily as Java. So I could use either of them. But the point is - 99% of what I need is covered in the functions CFML gives me. That's where the real power is. I mean - have you seen other CF Image demos? It truly is simple to work with images.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672963">5</a> by James Edmunds
		posted on 10/11/2007 at 3:41 AM
		</div>
		<div class="comment_text"><p>VERY interesting. I am curious about how processor-intensive this is. Any thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672964">6</a> by Raymond Camden
		posted on 10/11/2007 at 4:50 AM
		</div>
		<div class="comment_text"><p>James - it ran very fast for me - BUT - this is the kind of thing I'd do once. Ie, I wouldn't make drop shadows on the fly for every request. Ditto for thumbnails. You know - I should probably add a ScaleTo attribute that will let you shrink it at the same time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672969">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672969">7</a> by Jon Hartmann
		posted on 10/11/2007 at 5:22 AM
		</div>
		<div class="comment_text"><p>If you want to get down to the Java, you can create an object of type java.awt.image.BufferedImage, manipulate the color model and pass it back into the constructor for ColdFusion's image type, coldfusion.image.Image, and I think the coldfusion.image.Image class has a method that allows you to extract that image's BufferedImage class as well. I've got an example of how to make a transparent background up at my site: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.jonhartmann.com%2Fprogramming%2F%3A048ONB9WYRsSnZH_lM-mZ7Q8sQc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.jonhartmann.com/programming/">http://www.jonhartmann.com/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672974">8</a> by Jeff Self
		posted on 10/11/2007 at 4:59 PM
		</div>
		<div class="comment_text"><p>@Sana</p><p>It could be argued that ImageMagick is more powerful than .Net's imaging stuff.  ImageMagick can be used by Ruby, PHP, and even Java.  And I'm guessing that it would be possible to use ImageMagick with ColdFusion as well.</p><p>And ColdFusion could possibly get much more powerful features with imaging in the next release.  After all, who owns ColdFusion?  And aren't they known for having some photo software?</p><p>I'm sure .Net is a good development platform, but until it runs on a Mac or Linux (yes I know about Mono), many of us aren't interested in it.  We prefer development environments that run on more than a single platform.</p><p>Just my opinion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672978">9</a> by Raymond Camden
		posted on 10/11/2007 at 5:07 PM
		</div>
		<div class="comment_text"><p>Good point Jeff. But I'll still argue that it isn't just about who has the bigger API (sorry, couldn't resist). When I look at what CF's tools let me do - it covers the 99% of what a typical web app needs to do image wise and makes it easy. That to me is where CF shines. (Does that make sense?)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672979">10</a> by Connie DeCinko
		posted on 4/27/2009 at 11:52 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Did you resolve the issue with this error?<br>Overlay operation requires the two sources to match in number of bands and data type.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672985">11</a> by Raymond Camden
		posted on 4/28/2009 at 1:04 AM
		</div>
		<div class="comment_text"><p>Sorry, nope.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672986">12</a> by Gavy
		posted on 5/24/2009 at 10:33 AM
		</div>
		<div class="comment_text"><p>Hi ray! You are using this:</p><p>  &lt;cfset imagePaste(shadow,arguments.image,0,0)&gt;</p><p>to paste the image on to the browser. What if we need to store image in the folder. do we need to use the filewrite function even if the cfimage latest patch is applied.</p><p>using of getimagebytes (undocumented feature) and the filewrite function to make it work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672994">13</a> by Raymond Camden
		posted on 5/24/2009 at 4:54 PM
		</div>
		<div class="comment_text"><p>I'm not writing it to the browser. I'm writing it to the image object. Once you are done calling the UDF you can save it, write it to the browser, whatever.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672995">14</a> by Dani
		posted on 10/17/2009 at 9:32 AM
		</div>
		<div class="comment_text"><p>Hello Ray, how are you?<br>Ray, is there any way to get a transparent background instead of a white one?</p><p>Thanks!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672992">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672992">15</a> by Raymond Camden
		posted on 10/17/2009 at 5:33 PM
		</div>
		<div class="comment_text"><p>Have you tried imageSetDrawingTransparancy?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672991">16</a> by Dani
		posted on 10/17/2009 at 6:40 PM
		</div>
		<div class="comment_text"><p>Hi Ray, I've tried, but it didn't work (I'm not sure I'm using it right though).<br>What I do set the transparency to the color, not to the white background. I guess I'm a little bit confused.</p><p>Thanks Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672997">17</a> by Dani
		posted on 10/17/2009 at 7:00 PM
		</div>
		<div class="comment_text"><p>Let me put it more clear: When I set &lt;cfset ImagesetDrawingTransparency(shadow,50)&gt;, it creates the transparency to the shadow itself, not to the white background. The site I'm working with brings an image from the DB into the home page, which has a background color.</p><p>Dani</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672993">18</a> by Raymond Camden
		posted on 10/18/2009 at 6:39 PM
		</div>
		<div class="comment_text"><p>But you do want the shadow to be transparent, right? Or do you mean the shadow color is transparent?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672996">19</a> by Dani
		posted on 10/18/2009 at 7:24 PM
		</div>
		<div class="comment_text"><p>Hello Ray. Basically all the samples I see for a drop shadow on the fly are on a white background. The background of the site I'm working on is like yours in the blog.<br>I fact, looking at your blog, that is exactly what I want. Each comment looks like is above the background, it doesn't look flat. If I'm not wrong, I see a drop shadow at the lower right corner. The problem is that I can't create a graphic because each image has a different size (are paintings).<br>This is where I would like to apply it:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.thiezmultimedia.com%2Fcatherine%2Fen%2Findex.cfm%3ArN9K0UAp_QaBpOt68s7wX9Q0a1Y&amp;cuid=3321886" rel="nofollow noopener" title="http://www.thiezmultimedia.com/catherine/en/index.cfm">http://www.thiezmultimedia....</a></p><p>The drop shadow would go instead of the frame around the painting.</p><p>Thanks Ray for your time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672998">20</a> by Raymond Camden
		posted on 10/19/2009 at 7:46 AM
		</div>
		<div class="comment_text"><p>So notice the last argument is background color. Did you try setting it instead of using the default value?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673000">21</a> by Ali
		posted on 10/19/2009 at 7:47 PM
		</div>
		<div class="comment_text"><p>Can you have the shadow 'drop' in a different direction?<br>I have a design that requires a couple of images to have the shadow top-right<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672999">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672999">22</a> by Raymond Camden
		posted on 10/19/2009 at 7:52 PM
		</div>
		<div class="comment_text"><p>Ali, it should be possible if you modify the UDF. You can see how it puts it to the right and lower.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673004">23</a> by Ali
		posted on 10/19/2009 at 8:16 PM
		</div>
		<div class="comment_text"><p>Thanks Ray. Have got it working manually, now I'll see if I can get it with an additional argument(s)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673001">24</a> by Jim Gibson
		posted on 11/27/2009 at 9:42 PM
		</div>
		<div class="comment_text"><p>Hi Ray. Since the drop shadow has the same origin as the original, your example probably does not apply to my situation: I want to overlay image2 on image1 at a specific xy offset from image1's origin. How can I accomplish that?  Is there a way to resize image2's canvas and offset the original pixels to the canvas' lower right corner?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673003">25</a> by Jim Gibson
		posted on 11/27/2009 at 10:22 PM
		</div>
		<div class="comment_text"><p>Wow, I feel really stupid. The last cfset in your example UDF has x and y offset parameters for a paste of one image over the other. That's what I needed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673002">26</a> by Amer Ghalayini
		posted on 12/7/2009 at 5:41 PM
		</div>
		<div class="comment_text"><p>The images are hilarious with comment</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673007">27</a> by Daniel Gaspar
		posted on 12/11/2009 at 9:42 PM
		</div>
		<div class="comment_text"><p>Hey Jeff,<br>The only way I could get this to work when using the imageNew() function is by saving the new image to a temp directory then loading it again.</p><p>&lt;cfset MyTempImage = imageNew('','400','400','rgb','FFFFFF') /&gt;<br>&lt;cfset ImageWrite(MyTempImage,GetTempDirectory()&amp;'MyTempImage.jpg','.99') /&gt;<br>&lt;cfset MyTempImage = ImageRead(GetTempDirectory()&amp;'MyTempImage.jpg') /&gt;</p><p>This is with CF 8. Kind of a hack and feels like yet another CF 'gotcha'.  (like isDefined("session.myVar")!). <br>Anyone else find a better way around this?</p><p>-Dan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673006">28</a> by Daniel Gaspar
		posted on 12/15/2009 at 3:15 AM
		</div>
		<div class="comment_text"><p>...of course imagePaste DOES work with imageNew, so that is probably the best way to avoid the whole issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673010">29</a> by Vlad
		posted on 2/6/2011 at 9:40 PM
		</div>
		<div class="comment_text"><p>I love the images! I love Coldfusion!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673009">30</a> by Misty
		posted on 6/18/2012 at 12:35 PM
		</div>
		<div class="comment_text"><p>Hi ray, What if we need to add the opacity to it, how that could be added</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673008">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673008">31</a> by Raymond Camden
		posted on 6/19/2012 at 5:50 AM
		</div>
		<div class="comment_text"><p>I believe you want to use imageSetDrawingOpacity.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673012">32</a> by Misty
		posted on 9/9/2013 at 10:38 AM
		</div>
		<div class="comment_text"><p>Hi ray,</p><p>I am using the ImageUtils.CFC library. I can create a reflection and drop shadow separately. However, now I have a condition where I want to merge the drop shadow and reflection together.</p><p>It should work like this. First it should create the reflection and then from that reflection it should create the drop shadow.</p><p>Here is the code for both of them. I am just having issues trying to combine them.</p><p>I am using the ImageUtils.CFC library. I can create a reflection and drop shadow separately. However, now I have a condition where I want to merge the drop shadow and reflection together.</p><p>It should work like this. First it should create the reflection and then from that reflection it should create the drop shadow.</p><p>Here is the code for both of them. I am just having issues trying to combine them.</p><p>reflection Code:</p><p>       &lt;cfimage action="read" source="#Path#\#sFile#" name="objImage"&gt;<br>       &lt;cfset objImage = objImageUtils.ReflectImage(objImage,"#form.side#",<br>                         "###form.bgcolor#","#form.offset#","#form.size#")&gt;<br>       &lt;cfimage action="write" source="#objImage#" <br>                          destination="#Path#\#sFile#" overwrite="true"&gt;</p><p>Drop Shadow Color:</p><p>       &lt;cfimage action="read" source="#Path#\#sFile#" name="objImage"&gt;<br>       &lt;cfset objImage = objImageUtils.makeShadow(objImage,"#form.offset2#",<br>                       "#form.blur#","###form.shadowcolor#","###form.backgroundcol#")&gt;<br>       &lt;cfimage action="write" source="#objImage#" <br>                        destination="#Path#\#sFile#" overwrite="true"&gt;<br>       &lt;cfoutput&gt;<br>             &lt;img src="temp/#sFile#" /&gt; <br>       &lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673011">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673011">33</a> by Raymond Camden
		posted on 9/11/2013 at 5:15 AM
		</div>
		<div class="comment_text"><p>So what happens? I see you do one, write it, then read it and do the other. Is it only showing one effect or something else? Are the sample images online so I can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673013">34</a> by Misty
		posted on 9/11/2013 at 2:13 PM
		</div>
		<div class="comment_text"><p>yes, I have working Code, here is the link:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ftinyurl.com%2Foqjy4mo%3AeB44s5mN4DmvnvqL0ZCNe087dzY&amp;cuid=3321886" rel="nofollow noopener" title="http://tinyurl.com/oqjy4mo">http://tinyurl.com/oqjy4mo</a></p><p>Upload an image and keep its size to 200, and choose bothoptions reflect and drop shadow too. you see the overlapping there in the image,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673014">35</a> by Raymond Camden
		posted on 9/11/2013 at 2:43 PM
		</div>
		<div class="comment_text"><p>I tried running your app but the result was so small I couldn't see. I'd recommend you make a new CFM with just the code that demonstrates the bug and run that and then show me the result.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673016">36</a> by Misty
		posted on 9/11/2013 at 3:45 PM
		</div>
		<div class="comment_text"><p>Hi ray, here is the code i am doing to join the Both:</p><p>&lt;cfif (isDefined('form.reflect') and form.reflect IS 1) AND (isDefined('form.dropshadow') and form.dropshadow IS 1)&gt;<br>		&lt;!--- Combine Both ---&gt;<br>		&lt;cfimage action="read" source="#Path#\#sFile#" name="objImage"&gt;<br>		&lt;cfset objImage = objImageUtils.ReflectImage(objImage,"#form.side#","###form.bgcolor#","#form.offset#","#form.size#")&gt;<br>		&lt;cfset objImage2 = objImageUtils.makeShadow(objImage,"#form.offset2#","#form.blur#","###form.shadowcolor#","###form.backgroundcol#")&gt;<br>		&lt;cfset i = Imagenew("",objImage.width,objImage.height,'rgb','###form.shadowcolor#')&gt;<br>		&lt;cfset Imagepaste(objImage,i,10,10)&gt;<br>		&lt;cfimage action="write" source="#objImage#" destination="#Path#\#sFile#" overwrite="true"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713673017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713673017">37</a> by Raymond Camden
		posted on 9/11/2013 at 4:04 PM
		</div>
		<div class="comment_text"><p>Try writing the image after reflectImage, save it as like 'afterimage.jpg' or somesuch. See if it at least step 1 is ok.</p></div>
	</div>
</div>
		