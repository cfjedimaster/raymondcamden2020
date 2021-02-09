
<div class="comment" id="c_1713615600">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615600">1</a> by dave ross
		posted on 4/24/2004 at 2:31 AM
		</div>
		<div class="comment_text"><p>hmmm... no probe here. What webserver, OS, CFMX version?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615601">2</a> by dave ross
		posted on 4/24/2004 at 2:32 AM
		</div>
		<div class="comment_text"><p>ok that was "no probs..."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615604">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615604">3</a> by Ralph
		posted on 4/24/2004 at 2:27 PM
		</div>
		<div class="comment_text"><p>Dont think Apache Axis recognizes the virtual hosts maybe and you need to reference virtual content as your root host/~virtualHost/foo.cfc?WSDL, where tilde is the url prefix you selected.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615602">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615602">4</a> by Lindsay Evans
		posted on 4/24/2004 at 2:51 PM
		</div>
		<div class="comment_text"><p>I've had to recreate the JRunScripts virtual directory from the main site when I've created new virtual hosts &amp; tried to use Flash remoting with IIS, maybe this is something similar?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615603">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615603">5</a> by Roger Benningfield
		posted on 4/24/2004 at 7:16 PM
		</div>
		<div class="comment_text"><p>Ray: I struggled with the same thing, searched high-and-low, and finally surrendered. No CFC outside the default webroot would respond as a webservice.</p><p>My ugly workaround was to create wrapper CFCs inside the primary webroot that call the real components and return the results. It's annoying, but it works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615605">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615605">6</a> by Mark Lynch
		posted on 5/3/2004 at 2:27 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I may be on the wrong track here but have you tried adding the mapping in the jrun-web.xml file.  This is one of the ways to solve mapping problems at a level lower than CF mappings. Changing it at the JRUN level means that things like AXIS also see the mapping.</p><p>example snippet from my jrun-web.xml (hope the formatting works)<br>&lt;jrun-web-app&gt;</p><p>  &lt;!-- =========================================================== --&gt;<br>  &lt;!-- Virtual path mappings allow a resource path to be mapped    --&gt;<br>  &lt;!-- to a different physical location (i.e. not necessarily      --&gt;<br>  &lt;!-- within the web application root). A resource-path can       --&gt;<br>  &lt;!-- end with a wild card '*' indicating that all resources      --&gt;<br>  &lt;!-- paths that start with the given path will be resolved using --&gt;<br>  &lt;!-- the system path.                                            --&gt;<br>  &lt;!-- =========================================================== --&gt;</p><p>  &lt;virtual-mapping&gt;<br>    &lt;resource-path&gt;/WEB-INF&lt;/resource-path&gt;<br>    &lt;system-path&gt;C:/CFusionMX/wwwroot/WEB-INF&lt;/system-path&gt;<br>  &lt;/virtual-mapping&gt;</p><p>    &lt;virtual-mapping&gt;<br>    &lt;resource-path&gt;/lib&lt;/resource-path&gt;<br>    &lt;system-path&gt;C:/wwwroot/lib&lt;/system-path&gt;<br>  &lt;/virtual-mapping&gt;<br>&lt;/jrun-web-app&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615606">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615606">7</a> by Mark Lynch
		posted on 5/3/2004 at 3:14 AM
		</div>
		<div class="comment_text"><p>Hi Ray - I've just realised that you have solved this problem - and this wasn't the solution - note to self - check dates before posting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615608">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615608">8</a> by Kay
		posted on 4/12/2005 at 3:03 AM
		</div>
		<div class="comment_text"><p>I know this is a while ago but i'm having a similar problem - how did you fix this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713615609">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713615609">9</a> by Murat
		posted on 9/4/2005 at 1:47 PM
		</div>
		<div class="comment_text"><p>I've encountered similar problem. My configuration: Win2003 + IIS + CF7 Ent. The problem is definetely related to the CF mappings. CF can resolve/match the mapping that should be used when you access a .cfc from url. But CF cannot resolve/match the mapping that should be used when you want to access a .cfc?WSDL from url.</p><p>There are two workarounds:</p><p>1) Deploy the web services under the root (/) mapping<br>2) Add virtual dir to the IIS using the name of the CF mapping.</p></div>
	</div>
</div>
		