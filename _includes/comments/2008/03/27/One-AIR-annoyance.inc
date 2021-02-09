
<div class="comment" id="c_1713678547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678547">1</a> by salvatore fusto
		posted on 3/27/2008 at 6:13 PM
		</div>
		<div class="comment_text"><p>ray,<br>may be you have to update the old app.<br>salvatore</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678543">2</a> by Raymond Camden
		posted on 3/27/2008 at 6:16 PM
		</div>
		<div class="comment_text"><p>I don't think it's an update issue - but a name conflict issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678546">3</a> by Gareth
		posted on 3/27/2008 at 6:22 PM
		</div>
		<div class="comment_text"><p>I thought I saw the option to uninstall the previous app when I tried to install an AIR app recently (I thought it might have checked the version also, but I'm not positive).  I could be completely dreaming though :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678552">4</a> by Sidney de Koning
		posted on 3/27/2008 at 6:50 PM
		</div>
		<div class="comment_text"><p>I had this box appear a couple of times to my app. What killed it was the inconsistency in version numbering. (in the XML descriptor file). To fix it; just increment the verison number with a point (1.0.1, 1.0.2 etc)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678550">5</a> by Sidney de Koning
		posted on 3/27/2008 at 6:52 PM
		</div>
		<div class="comment_text"><p>&lt;pressed submit to fast&gt;<br>What you get then is when installing, saying that there is a conflict, since you have version 1.0.1 and it wants to install 1.0.2. Then you get prompted with the choice to either overwrite or keep the file.</p><p>Hope this works for you,</p><p>Cheers, Sidney</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678554">6</a> by Raymond Camden
		posted on 3/27/2008 at 6:53 PM
		</div>
		<div class="comment_text"><p>But that's not my point SIdney - and again - other apps do this as well. Why should the installer just stop? Yes, it can't install there - but it should ask me to provide a _new_ location.</p><p>Does that distinction make sense?</p><p>Again, I'm being picky - I _love_ AIR.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678553">7</a> by David McGuigan
		posted on 3/27/2008 at 10:03 PM
		</div>
		<div class="comment_text"><p>No, you're right.</p><p>I don't think it should even say "an error has occured".</p><p>What it should do is DETECT beforehand and just tell you that "an application with that name already exists at the select location", then give you an editable text field pre-populated with a variation that will make the install work (ex: previousAppName_2) as well as cancel, "overwrite the previous installation", and "choose a new installation directory" buttons.</p><p>But it's AIR 1, so I'll pretend I never noticed and still tell everyone that AIR is perfect and the solution to all of the world's problems.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678549">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678549">8</a> by Gareth Edwards
		posted on 3/28/2008 at 2:11 AM
		</div>
		<div class="comment_text"><p>Something looks wrong here, this is the text that I see when trying to install your application more than once.</p><p>"The same version of the application you opened already exists on this system.</p><p>Would you like to run the version already installed?"</p><p>If you are updating your application, it is advised that the version number in your app.xml changes so that the air runtime can treat it as an update.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713678551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713678551">9</a> by Gary Funk
		posted on 3/28/2008 at 6:48 AM
		</div>
		<div class="comment_text"><p>Ray, I have had the same error and I can only think that is is because the previos version was installed under one of the AIR betas. On some machines I've had to go into the registry and rip out the guts.</p></div>
	</div>
</div>
		