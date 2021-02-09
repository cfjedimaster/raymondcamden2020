
<div class="comment" id="c_4234909590">
	<div>
		<img src="https://disqus.com/api/users/avatars/zzzxtreme.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4234909590">1</a> by zzzxtreme
		posted on 12/11/2018 at 7:24 AM
		</div>
		<div class="comment_text"><p>the lack of complete vue examples is worrying. too bad, because vue + vuex is awesome</p></div>
	</div>
</div>
		
<div class="comment" id="c_4235311064">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4235311064">2</a> (In reply to <a href="#c_4234909590">#1</a>) by Raymond Camden
		posted on 12/11/2018 at 2:54 PM
		</div>
		<div class="comment_text"><p>IMO, the Vue stuff is growing. It's certainly not just me blogging about it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4430991977">
	<div>
		<img src="https://disqus.com/api/users/avatars/hgc2002.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4430991977">3</a> by hgc2002
		posted on 4/20/2019 at 10:01 AM
		</div>
		<div class="comment_text"><p>Impossible to make it run. My error message is: "Cannot read property 'ExpandableEditorGroup' of undefined". It's an issue coming from the plugin. It's buggy. The proof is that you had to make some unnecessary magic when doing this part:</p><p><code><br>require("nativescript-vue").registerElement( "RadDataForm",<br>    () =&gt; require("nativescript-ui-dataform").RadDataForm<br>);<br></code></p><p>For a very well known plugin, getting into this issues is unbelievable.</p><p>Note: Sorry but I was playing with the feedback icons and I click on "Sad" but the article is good. I don't know how to change it to "Upvote".</p></div>
	</div>
</div>
		
<div class="comment" id="c_4431020098">
	<div>
		<img src="https://disqus.com/api/users/avatars/hgc2002.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4431020098">4</a> (In reply to <a href="#c_4430991977">#3</a>) by hgc2002
		posted on 4/20/2019 at 10:58 AM
		</div>
		<div class="comment_text"><p>I found a workaround. See: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2FNativeScript%2Fnativescript-angular%2Fissues%2F742%3AquiFcwfp0s8PX9xuSWD2ShqTHbM&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/NativeScript/nativescript-angular/issues/742">https://github.com/NativeSc...</a></p><p>But even after the tns update (that should fix everything), the "magic" of registerElement is still required...</p></div>
	</div>
</div>
		
<div class="comment" id="c_4444389513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4444389513">5</a> by Andrew
		posted on 4/30/2019 at 9:46 PM
		</div>
		<div class="comment_text"><p>But how do we get the input values in Vue? How do we submit the form? Have you found any way to change the styles of a Picker input?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4445577742">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4445577742">6</a> (In reply to <a href="#c_4444389513">#5</a>) by Raymond Camden
		posted on 5/1/2019 at 7:32 PM
		</div>
		<div class="comment_text"><p>1) Since you tie the form to your data, your input values is your data. Does that make sense?</p><p>2) Submitting is something you would do yourself via an HTTP call.</p><p>3) And sorry - haven't done anything with styles.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4540141705">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_HgKvOWedku.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4540141705">7</a> by Prashant
		posted on 7/15/2019 at 10:53 AM
		</div>
		<div class="comment_text"><p>but how do you submit the form which event or method need to fire or caputre the data</p></div>
	</div>
</div>
		
<div class="comment" id="c_4540285858">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4540285858">8</a> (In reply to <a href="#c_4540141705">#7</a>) by Raymond Camden
		posted on 7/15/2019 at 1:38 PM
		</div>
		<div class="comment_text"><p>Submitting the form would be done via click handler on a button. The data doesn't need to be captured, it's already there. Remember we find the form to your Vue data. So you have it already.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4541413489">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_HgKvOWedku.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4541413489">9</a> (In reply to <a href="#c_4540285858">#8</a>) by Prashant
		posted on 7/16/2019 at 7:54 AM
		</div>
		<div class="comment_text"><p>Thanks You are right</p></div>
	</div>
</div>
		
<div class="comment" id="c_4541414557">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_HgKvOWedku.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4541414557">10</a> by Prashant
		posted on 7/16/2019 at 7:56 AM
		</div>
		<div class="comment_text"><p>One more query I was checking example 1 where in dropdown list was created but a converter function which i don't understand how it works can you add. <a href="https://disq.us/url?url=https%3A%2F%2Fdocs.nativescript.org%2Fvuejs%2Fns-ui%2FDataForm%2Fdataform-editors%3AecWuJP0fYzF6OlWolX8V71OwQMk&amp;cuid=3321886" rel="nofollow noopener" title="https://docs.nativescript.org/vuejs/ns-ui/DataForm/dataform-editors">https://docs.nativescript.o...</a> Example 1. How do we handle the drop down list box values changed.</p><p>Request you to please add drop down list box example here with plain javascript</p></div>
	</div>
</div>
		
<div class="comment" id="c_4541623348">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4541623348">11</a> (In reply to <a href="#c_4541414557">#10</a>) by Raymond Camden
		posted on 7/16/2019 at 12:52 PM
		</div>
		<div class="comment_text"><p>I'm not quite sure I get what you are asking. Are you asking for an example of how to handle drop downs, and by handle I mean provide the values? If so the docs you linked to do show that. Maybe you can rephrase?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4544533062">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_HgKvOWedku.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4544533062">12</a> (In reply to <a href="#c_4541623348">#11</a>) by Prashant
		posted on 7/18/2019 at 3:18 PM
		</div>
		<div class="comment_text"><p>can you fork this example <a href="https://disq.us/url?url=https%3A%2F%2Fplay.nativescript.org%2F%3Ftemplate%3Dplay-vue%26id%3D8rXvUz%26v%3D55%3A3CGW843k5u6Q-f9ua4oPxi9y3ZA&amp;cuid=3321886" rel="nofollow noopener" title="https://play.nativescript.org/?template=play-vue&amp;id=8rXvUz&amp;v=55">https://play.nativescript.o...</a>  Kindly check Test.vue field movie is drop down list box kindly check line no 92 I want to add array having id, text filed array. Once I submit the form should get movie=1121.</p><p>Sorry came from Desktop application development we called it Lisbox as Drop Down List Box (DDLB).</p><p>Thanks in advance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4550054986">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_HgKvOWedku.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4550054986">13</a> by Prashant
		posted on 7/23/2019 at 7:32 AM
		</div>
		<div class="comment_text"><p>its not working here is the code can you forked and check <a href="https://disq.us/url?url=https%3A%2F%2Fplay.nativescript.org%2F%3Ftemplate%3Dplay-vue%26id%3DuILLDZ%3AtV0qNC8lHbiMRCys8vi5_OmoLnA&amp;cuid=3321886" rel="nofollow noopener" title="https://play.nativescript.org/?template=play-vue&amp;id=uILLDZ">https://play.nativescript.o...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_4550281475">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4550281475">14</a> (In reply to <a href="#c_4550054986">#13</a>) by Raymond Camden
		posted on 7/23/2019 at 12:56 PM
		</div>
		<div class="comment_text"><p>I've been on the road. I see your request below and will look into it when I can.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4555260703">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_HgKvOWedku.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4555260703">15</a> (In reply to <a href="#c_4550281475">#14</a>) by Prashant
		posted on 7/27/2019 at 5:00 AM
		</div>
		<div class="comment_text"><p>Don't woory I resoled this issue I will create a playground and post it soon. Thanks for your help</p></div>
	</div>
</div>
		
<div class="comment" id="c_4593505453">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_HgKvOWedku.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4593505453">16</a> by Prashant
		posted on 8/27/2019 at 2:01 PM
		</div>
		<div class="comment_text"><p>Its working just add dataEntry component and remove it will update NPM pacakges and it works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4593507209">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_HgKvOWedku.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4593507209">17</a> by Prashant
		posted on 8/27/2019 at 2:02 PM
		</div>
		<div class="comment_text"><p>can you add date picker with date format that is completely missing in documentation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4593565330">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4593565330">18</a> (In reply to <a href="#c_4593507209">#17</a>) by Raymond Camden
		posted on 8/27/2019 at 2:52 PM
		</div>
		<div class="comment_text"><p>Add it to the docs? I don't work for Progress. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4594371194">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_HgKvOWedku.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4594371194">19</a> (In reply to <a href="#c_4593565330">#18</a>) by Prashant
		posted on 8/28/2019 at 3:41 AM
		</div>
		<div class="comment_text"><p>yes thaks I reported lot of missing documentation for vue but unfortunately I didn add my email address so i didn't get any notification. Now I saw it was reflecting. Now I will remember it. Thanks but your blog powered us to make it possible.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4594373071">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_HgKvOWedku.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4594373071">20</a> by Prashant
		posted on 8/28/2019 at 3:44 AM
		</div>
		<div class="comment_text"><p>Just need a suggetion from you Since vue next version comes up with Typescipt. What you will suggest to moved it to Typescript or continue with Javascript?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4598104642">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4598104642">21</a> (In reply to <a href="#c_4594373071">#20</a>) by Raymond Camden
		posted on 8/30/2019 at 8:44 PM
		</div>
		<div class="comment_text"><p>I say work with what makes you most productive. I like TS, but don't use it very often.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4720374630">
	<div>
		<img src="https://disqus.com/api/users/avatars/ralfbord.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4720374630">22</a> by Ralf Bordé
		posted on 12/11/2019 at 12:30 PM
		</div>
		<div class="comment_text"><p>Hi Raymand, thx for your great article. If i try this, my iOS-Form looks very weird. Is there a fitting css for this form? This is what it looks like: <a href="https://uploads.disquscdn.com/images/046b25a87c96a69f636d1bbac377698a789ccbce4337f24ba09454f44fa082ca.png" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/046b25a87c96a69f636d1bbac377698a789ccbce4337f24ba09454f44fa082ca.png">https://uploads.disquscdn.c...</a> <br>Thanks in advance. Greetings from germany. Ralf</p></div>
	</div>
</div>
		
<div class="comment" id="c_4748402182">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_Ivz70xAAxq.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4748402182">23</a> by Lucas
		posted on 1/7/2020 at 4:18 PM
		</div>
		<div class="comment_text"><p>Thanks for that, it helps a lot on understanding the radDataForm, but it still lacks so much information on how it works that seems faster to create my own vue form components than using it :/<br>I'm 1 day long trying to figure out how i change datepicker output format.. so annoying..</p></div>
	</div>
</div>
		
<div class="comment" id="c_4749560622">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4749560622">24</a> (In reply to <a href="#c_4748402182">#23</a>) by Raymond Camden
		posted on 1/8/2020 at 2:03 PM
		</div>
		<div class="comment_text"><p>Sorry - I haven't used NS in a while now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4797129017">
	<div>
		<img src="https://disqus.com/api/users/avatars/oscar_ld.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4797129017">25</a> by Oscar LD
		posted on 2/15/2020 at 3:52 PM
		</div>
		<div class="comment_text"><p>¿Do you know how to add an image label to my field? using the metadata JSON it doesn't work<br><code><br>...<br>    name:'email',<br>    displayName: '',<br>    hintText:' Email',<br>    editor: 'Email',<br>    imageResource:"res://ic_email"<br>...<br></code></p></div>
	</div>
</div>
		
<div class="comment" id="c_4799121769">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4799121769">26</a> (In reply to <a href="#c_4797129017">#25</a>) by Raymond Camden
		posted on 2/17/2020 at 3:05 PM
		</div>
		<div class="comment_text"><p>Sorry I haven't used this since 2018.</p></div>
	</div>
</div>
		