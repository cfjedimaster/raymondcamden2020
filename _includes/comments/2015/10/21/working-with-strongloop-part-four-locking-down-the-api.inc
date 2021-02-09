
<div class="comment" id="c_2319428238">
	<div>
		<img src="https://disqus.com/api/users/avatars/jakerella.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2319428238">1</a> by Jordan Kasper
		posted on 10/21/2015 at 5:39 PM
		</div>
		<div class="comment_text"><p>Great post Raymond! Thanks for that. One quick clarification: you say that "Out of the box, all your models (and APIs) are 100% open." Which is sort of true, but the built-in `User` model *does* have access control on it. Any newly created model does not, unless you extend another model, in which case it does inherit the base model's ACLs.</p><p>Additionally, when setting up your first ACL for `Dogs`, you can also grant "READ" access to Dogs without specifying each method individually. This is good in situations where users can always read data, but not update it:</p><p>```<br>{<br>  "accessType": "READ",<br>  "principalType": "ROLE",<br>  "principalId": "$everyone",<br>  "permission": "ALLOW"<br>    },</p><p>```</p><p>Last thing: the `password` field on users is hidden from view in both the schema and any returned data. This is accomplished with "hidden" field on the model's config json file: <a href="https://disq.us/url?url=https%3A%2F%2Fdocs.strongloop.com%2Fdisplay%2FLB%2FModel%2Bdefinition%2BJSON%2Bfile%23ModeldefinitionJSONfile-Hiddenproperties%3A1Pmx_vti8UosY2I7y1H77nFMC5s&amp;cuid=3321886" rel="nofollow noopener" title="https://docs.strongloop.com/display/LB/Model+definition+JSON+file#ModeldefinitionJSONfile-Hiddenproperties">https://docs.strongloop.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2319539043">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2319539043">2</a> (In reply to <a href="#c_2319428238">#1</a>) by Raymond Camden
		posted on 10/21/2015 at 6:37 PM
		</div>
		<div class="comment_text"><p>Thanks Jordan.</p><p>1) You are absolutely right. I was talking about my own models, but in the end, it doesn't matter, User exists too even if it is out of the box. I should have been clear.</p><p>2) Nice - and can I assume WRITE would handle adding, editing, and deleting in one ACL? In my blog post I just did create.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2319605381">
	<div>
		<img src="https://disqus.com/api/users/avatars/jakerella.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2319605381">3</a> (In reply to <a href="#c_2319539043">#2</a>) by Jordan Kasper
		posted on 10/21/2015 at 7:13 PM
		</div>
		<div class="comment_text"><p>That's correct: "WRITE" and "EXECUTE" are the only other types (well, that and "*" which is what you used in your DENY layer).</p></div>
	</div>
</div>
		
<div class="comment" id="c_2319670961">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2319670961">4</a> (In reply to <a href="#c_2319605381">#3</a>) by Raymond Camden
		posted on 10/21/2015 at 7:49 PM
		</div>
		<div class="comment_text"><p>So in my particular use case (anon can read, auth can do everything), I'd want to allow READ for everyone and WRITE for the auth user. Much simpler and cleaner.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2341048051">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_XULXbZ1faV.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2341048051">5</a> by Justin James
		posted on 11/3/2015 at 7:13 PM
		</div>
		<div class="comment_text"><p>FYI, I ran into an issue with getting 401 unauthorized errors for the end points that were created for models that I had extend off the built-in user and added relationships to.  Essentially I have a todo app with users and projects, where a user can have many projects.  Strongloop created the endpoints to be able to get all of the projects for a user like I expected it to.  However, the built-in user model is locked down so all of the calls to these new endpoints get 401 errors.  This is due to the built-in user model denying everyone from querying the endpoints that are not specified in the built-in model.  I could not find anywhere in the docs how to get around this.  Eventually I found a github issue that mentioned that you needed to in code, clear out the existing ACLs for the model and then tell it what the new ACLs are.</p><p>I wrote up a blog post with all of the details at <a href="http://disq.us/url?url=http%3A%2F%2Fdigitaldrummerj.me%2Fstrongloop-extending-user-model-security%2F%3AqClYfzf_-JKpmOpVnpbbJwfLQFA&amp;cuid=3321886" rel="nofollow noopener" title="http://digitaldrummerj.me/strongloop-extending-user-model-security/">http://digitaldrummerj.me/s...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2606877607">
	<div>
		<img src="https://disqus.com/api/users/avatars/dmastag.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2606877607">6</a> (In reply to <a href="#c_2319670961">#4</a>) by Julian
		posted on 4/5/2016 at 9:19 AM
		</div>
		<div class="comment_text"><p>Thanks <a data-dsq-mention="jakerella:disqus" href="https://disqus.com/by/jakerella/" rel="nofollow noopener" title="https://disqus.com/by/jakerella/">Jordan Kasper</a> <br>So I think I got this working like this :</p><p>    {<br>"accessType": "READ",<br>"principalType": "ROLE",<br>"principalId": "$everyone",<br>"permission": "ALLOW"<br>},<br>{<br>"accessType": "WRITE",<br>"principalType": "ROLE",<br>"principalId": "$unauthenticated",<br>"permission": "DENY"<br>}</p></div>
	</div>
</div>
		