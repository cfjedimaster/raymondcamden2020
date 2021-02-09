
<div class="comment" id="c_1713742242">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742242">1</a> by Tom Jenkins
		posted on 7/18/2012 at 3:04 PM
		</div>
		<div class="comment_text"><p>Hi Ray</p><p>I can confirm this is correct and certainly in our server setup, is the correct way to work.</p><p>We have a clustered multi instance server, with 3 instances all set to round robin each request (with sticky sessions). Because of this, each instance would need to access a certain applications SOLR collection when required, so of course it would need to be setup on each instances for this to happen.</p><p>Setting it up in literally one place and having it automatically add it to each instance is a time saving ... something I wish would be an option when setting up datasources, as to get around this, we had to write a custom admin menu option to allow adding a datasource to each instance, instead of logging in manually each time.</p><p>Tom Jenkins</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742247">2</a> by Michael Dawson
		posted on 7/18/2012 at 7:35 PM
		</div>
		<div class="comment_text"><p>Tom, thanks for confirming this.  Since many people use load-balancing systems, it makes sense to share a repository.  Also, since CFINDEX/CFSEARCH allow me to specify an dynamically-named collection, my solution works just fine.  I can live with this without feeling icky about it.</p><p>Thanks<br>mike</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713742246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713742246">3</a> by JC
		posted on 7/24/2012 at 5:16 PM
		</div>
		<div class="comment_text"><p>Doesn't seem too terrible for SOLR, unless of course you're running a shared hosting environment. Can you at least restrict access to the individual repositories through CFAdmin or something? (I haven't worked with SOLR yet, just Verity).</p><p>If DSNs acted like that as Tom would like, good god, what a mess. Security headache! You can always export your DSNs to a .car and import them to another CF instance if you don't want to bother setting them up manually. Or, as Tom did, write a script to do it. I suppose it might be a nice addition to the master CF instance (Copy DSN between instances/deploy DSNs to instances/etc), but I wouldn't want to see it in any of the other ones, and certainly not by default.</p></div>
	</div>
</div>
		