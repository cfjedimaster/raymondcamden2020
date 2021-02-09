
<div class="comment" id="c_1713662205">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662205">1</a> by Nick Tong
		posted on 2/14/2007 at 4:29 PM
		</div>
		<div class="comment_text"><p>Hi Ray, good luck with your 'steps'. I'm adding these to the articles section on <a href="http://disq.us/url?url=http%3A%2F%2FcfFrameworks.com%3AjZGZJzdaicvNZkV7eRkn4eqKrkA&amp;cuid=3321886" rel="nofollow noopener" title="http://cfFrameworks.com">http://cfFrameworks.com</a> if tha's okay.  FYI: Sean gave a interview on Fusebox over on the cfFrameworks blog: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfframeworks.com%2Fblog%2Findex.cfm%2F2007%2F2%2F13%2FSean-Corfield-on-Fusebox-and-Frameworks%3ATzISQpaD_sA-LBtjPyZhngmIn0o&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfframeworks.com/blog/index.cfm/2007/2/13/Sean-Corfield-on-Fusebox-and-Frameworks">http://www.cfframeworks.com...</a> - this might explain a few more things.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662218">2</a> by Raymond Camden
		posted on 2/14/2007 at 4:48 PM
		</div>
		<div class="comment_text"><p>Fine by me, Nick.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662216">3</a> by Damon Gentry
		posted on 2/14/2007 at 7:13 PM
		</div>
		<div class="comment_text"><p>Ray,  I've been using Fusebox since 1.0.  It's really refreshing to see the framework through a new set of eyes.  I've been so accustomed to the framework features that I've forgotten how good the little things are.  Thanks for the reminder!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662219">4</a> by Sean Corfield
		posted on 2/15/2007 at 3:14 AM
		</div>
		<div class="comment_text"><p>One of the big complaints in the Fusebox survey - as well as from old-school (pre-FB4) Fuseboxers - is the amount of XML to achieve what seems to be just stuff you can do directly in CFML (when you get to circuits, I'm sure this will become more evident).</p><p>For Fusebox 6, we are looking at implementing a set of default conventions that will allow you to build (small-to-medium) applications without XML - adding XML in where necessary to obtain more control.</p><p>Even today, most of fusebox.xml is optional. The bare minimum fusebox.xml file would pretty much be:</p><p>&lt;fusebox&gt;<br>&lt;circuits&gt;<br>&lt;circuit alias="home" path="home/"/&gt;<br>&lt;/circuits&gt;<br>&lt;parameters&gt;<br>&lt;parameter name="defaultFuseaction" value="home.welcome"/&gt;<br>&lt;/parameters&gt;<br>&lt;/fusebox&gt;</p><p>So that if you specify no fuseaction, it uses home.welcome and there is a single circuit (home) declared.</p><p>Then you would have home/circuit.xml defining just the fuseaction welcome and including a display fuse (.cfm file) for that.</p><p>&lt;circuit access="public"&gt;<br>&lt;fuseaction name="welcome"&gt;<br>&lt;include template="dspWelcome"/&gt;<br>&lt;/fuseaction&gt;<br>&lt;/circuit&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662221">5</a> by josf
		posted on 4/16/2007 at 5:36 AM
		</div>
		<div class="comment_text"><p>ljsf</p></div>
	</div>
</div>
		