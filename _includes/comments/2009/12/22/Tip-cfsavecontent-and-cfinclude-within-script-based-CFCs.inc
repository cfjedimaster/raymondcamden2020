
<div class="comment" id="c_1713720787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720787">1</a> by Daniel Budde
		posted on 12/23/2009 at 7:09 PM
		</div>
		<div class="comment_text"><p>Although, I am not on CF9 yet, I have ran into this in the past when I wanted to e-mail template based reports from within my CFC.  The reports already existed as HTML templates within the application, so the easy fix was to use &lt;cfsavecontent&gt; with a &lt;cfinclude&gt;.</p><p>It always makes me feel a little bad to have to break encapsulation, but as you say, there are those exceptions to the rule.  I always just comment them well and since they are few and far between, they have just never caused any trouble.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720792">2</a> by Tony Nelson
		posted on 12/23/2009 at 8:34 PM
		</div>
		<div class="comment_text"><p>You'll want to be careful when using .cfm mixins inside singleton components to make sure any variables declared within the mixin are thread-safe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720790">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720790">3</a> by Raymond Camden
		posted on 12/23/2009 at 8:54 PM
		</div>
		<div class="comment_text"><p>Agreed. I'm forcing myself to use local.x for all variables. I normally do NOT like <a href="http://disq.us/url?url=http%3A%2F%2Flocal.foo%3AOshJ7a2dQUZKKv5cpz6XkYoPJbk&amp;cuid=3321886" rel="nofollow noopener" title="local.foo">local.foo</a>, I just var scope, but for this component I'm using it as a way to ensure I'm always local.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720789">4</a> by Daniel Budde
		posted on 12/23/2009 at 8:59 PM
		</div>
		<div class="comment_text"><p>I do the same as well.  All my variables used within the template are always located under  (LOCAL.templateInfo).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720793">5</a> by Tony Nelson
		posted on 12/23/2009 at 9:31 PM
		</div>
		<div class="comment_text"><p>If you don't want to have to use local.x everywhere, you could create a small Include.cfc proxy for including templates.</p><p>case "event date": {<br>			return new Include("render/eventdate.cfm",arguments);<br>}</p><p>Include.cfc:<br>component {<br>	public string function init(template, params) {		<br>		structDelete(variables, "init");<br>		structDelete(variables, "this");<br>		structAppend(variables, arguments.params);		<br>		savecontent variable="local.html" {<br>			include arguments.template;<br>		}<br>		return local.html;<br>	}<br>}</p><p>Now any variables declared inside render/eventdate.cfm won't bleed into your component.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720791">6</a> by Raymond Camden
		posted on 12/23/2009 at 9:32 PM
		</div>
		<div class="comment_text"><p>That's slick as crap. Thanks Tony.</p></div>
	</div>
</div>
		