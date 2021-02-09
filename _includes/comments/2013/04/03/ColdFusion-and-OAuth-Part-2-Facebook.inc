
<div class="comment" id="c_1713745693">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745693">1</a> by Tony Junkes
		posted on 4/4/2013 at 2:18 AM
		</div>
		<div class="comment_text"><p>I'm thinking your title should say LinkedIn and not Facebook right? Since this covers LI.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745701">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745701">2</a> by Raymond Camden
		posted on 4/4/2013 at 4:26 AM
		</div>
		<div class="comment_text"><p>Doh! Too late for the URL, but fixed. Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745697">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745697">3</a> by Chris Pilie
		posted on 4/8/2013 at 7:21 PM
		</div>
		<div class="comment_text"><p>Great post! Just a little recap of some trouble I had for anyone trying this. I did get an error coming back from linkedin. It seems to be in a weird place tho.</p><p>"Element ACCESS_TOKEN is undefined in RES."</p><p>So I dumped the "res" within the redirect file and this is what I got.</p><p>"missing required parameters, includes an invalid parameter value, parameter more then once. : Unable to retrieve access token : appId or redirect uri does not match authorization code or authorization code expired"</p><p>I check the "liAccessTokenURL" and the secret and the apikey do match so my head hurts from scratching it.</p><p>Then! I used the force and discovered with Ray's help that my redirect urls did not match. The link on the redir.cfm had a "www" and the other with the link did not have the "www". Thanks Ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745698">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745698">4</a> by Tomasz Mieczkowski
		posted on 4/22/2013 at 7:10 PM
		</div>
		<div class="comment_text"><p>Raymond - you are a god!<br>You really saved me hours of work with this post.  <br>I owe you a large beer!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745696">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745696">5</a> by Raymond Camden
		posted on 4/22/2013 at 7:27 PM
		</div>
		<div class="comment_text"><p>Warning - I'm a beer snob. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745700">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745700">6</a> by Mustafa Abusalah
		posted on 4/23/2013 at 8:57 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>I'm trying to call the below url with specific profile fields:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fapi.linkedin.com%2Fv1%2Fpeople%2F%7E%3A%28id%2Cfirst-name%2Clast-name%2Cindustry%2Cskills%29%3Foauth2_access_token%3Dblabla%3AeSC9IPMPnHWKQlVq19z76dRLI68&amp;cuid=3321886" rel="nofollow noopener" title="https://api.linkedin.com/v1/people/~:(id,first-name,last-name,industry,skills)?oauth2_access_token=blabla">https://api.linkedin.com/v1...</a></p><p>When I make the call directly from the browser it works fine, but if I call it using cfhttp request I got 404 Not Found error.</p><p>The issue is most likely related to url encoding, kindly advise how send the request using cfhttp or another method without being enforced to be urlencoded</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745699">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745699">7</a> by Raymond Camden
		posted on 4/23/2013 at 3:09 PM
		</div>
		<div class="comment_text"><p>I tried this and it worked for me in CF10:</p><p>&lt;cfhttp url="<a href="https://disq.us/url?url=https%3A%2F%2Fapi.linkedin.com%2Fv1%2Fpeople%2F%7E%3A%28id%2Cfirst-name%2Clast-name%2Cindustry%2Cskills%29%3Foauth2_access_token%3D%23session.liaccesstoken%23%3A9ELcxSQGZSsPwCMCXRjiUJCAvws&amp;cuid=3321886" rel="nofollow noopener" title="https://api.linkedin.com/v1/people/~:(id,first-name,last-name,industry,skills)?oauth2_access_token=#session.liaccesstoken#">https://api.linkedin.com/v1...</a>"&gt;<br>	&lt;cfhttpparam type="header" name="x-li-format" value="json"&gt;<br>&lt;/cfhttp&gt;<br>&lt;cfdump var="#cfhttp#"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745695">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745695">8</a> by Mustafa Abusalah
		posted on 4/24/2013 at 9:49 AM
		</div>
		<div class="comment_text"><p>I'm using Railo, open source CFM and it did not work. I found an alternative method to cfhttp on the below link and it worked: <a href="http://disq.us/url?url=http%3A%2F%2Fcoldfusion9.blogspot.gr%2F2012%2F03%2Fcustom-cfhttp-tag.html%3FshowComment%3D1366715001465%23c172925816683016138%3ArdJrh_dq9WrNVBIyQT2WMedwQSo&amp;cuid=3321886" rel="nofollow noopener" title="http://coldfusion9.blogspot.gr/2012/03/custom-cfhttp-tag.html?showComment=1366715001465#c172925816683016138">http://coldfusion9.blogspot...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745694">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745694">9</a> by Raymond Camden
		posted on 4/24/2013 at 2:45 PM
		</div>
		<div class="comment_text"><p>As I work for Adobe, I don't normally test on Railo. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745702">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745702">10</a> by Paul Mascari
		posted on 4/26/2013 at 8:10 PM
		</div>
		<div class="comment_text"><p>Thanks a million for the post, Ray.  I had been wrestling with this API for hours.  Question regarding the call to LI for the AccessToken....</p><p>I was pulling my hair out wondering why I couldn't get past this step.  Was constantly getting this error from LI: "Unable to retrieve access token : appId or redirect uri does not match authorization code or authorization code expired"</p><p>Any idea why my original CFHTTP call, seen below, would produce an unacceptable call as opposed to your drop-dead-simple &lt;cfhttp url="#liAccessTokenURL#"&gt;  ???</p><p>&lt;cfhttp url="<a href="https://disq.us/url?url=https%3A%2F%2Fwww.linkedin.com%2Fuas%2Foauth2%2FaccessToken%3Fgrant_type%3Dauthorization_code%26code%3D%23tempLinkedInAuthCode%23%26client_id%3D%23SDSAPIKey_linkedIn%23%26client_secret%3D%23SDSSecretKey_linkedIn%23%26redirect_uri%3D%23redirURL%23%3APp9A9kBntohLmiXbwbuFKJNU3pc&amp;cuid=3321886" rel="nofollow noopener" title="https://www.linkedin.com/uas/oauth2/accessToken?grant_type=authorization_code&amp;code=#tempLinkedInAuthCode#&amp;client_id=#SDSAPIKey_linkedIn#&amp;client_secret=#SDSSecretKey_linkedIn#&amp;redirect_uri=#redirURL#">https://www.linkedin.com/ua...</a>" <br>			method="get" <br>			result="linkinToken"&gt;</p><p>(I had also tried method="post" as the LI documentation states to no avail)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745705">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745705">11</a> by Raymond Camden
		posted on 4/26/2013 at 11:02 PM
		</div>
		<div class="comment_text"><p>Um, you got me. I assume you have confirmed your redirecturi matches? Note that you want to ensure that if you included www, you include it everywhere.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745704">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745704">12</a> by richfergus
		posted on 11/17/2013 at 12:15 AM
		</div>
		<div class="comment_text"><p>Thank you.....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745703">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745703">13</a> by Misty
		posted on 4/9/2014 at 8:57 PM
		</div>
		<div class="comment_text"><p>Can it be Used with ColdFusion version 9.0.0</p><p>not 9.0.1</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745707">14</a> by Raymond Camden
		posted on 4/9/2014 at 11:14 PM
		</div>
		<div class="comment_text"><p>Um, maybe? :) Try it and see.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745706">15</a> by Misty
		posted on 4/10/2014 at 11:01 PM
		</div>
		<div class="comment_text"><p>Hi ray, Well it worked..</p><p>Got a question, running above code only gives me the firstname, lastname, title if any and the status..</p><p>How can i get additional details like emailaddress, and otehr relevant fields like education etc of a user and the connections profiles</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745708">16</a> by Raymond Camden
		posted on 4/11/2014 at 1:03 AM
		</div>
		<div class="comment_text"><p>As with my other examples, it is based on the SCOPE value. That SCOPE value tells LinkedIn what your app wants to use, and then LI will tell the user, "Hey, this app wants X, Y, and Z, are you cool with that?"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745710">17</a> by Misty
		posted on 4/20/2014 at 11:14 AM
		</div>
		<div class="comment_text"><p>thanks, got it and finaaly i run it, question on how to send message to friends as the list of friends coming as structures within arrays, need to use their name or what?</p><p>trying like this, i am right, the recipeints will have the ID or need to pass something else <br>&lt;cfset friends = session.liAPI.getFriends()&gt;<br>&lt;cfset theMessagePos = friends.values&gt;<br>&lt;cfsavecontent variable="getlstfriends"&gt;<br>  &lt;select name="friendsList" id="friendsList"&gt;<br>  &lt;cfloop from="1" to="#ArrayLen(theMessagePos)#" index="k"&gt;<br>      &lt;cfoutput&gt;<br>      &lt;cfif theMessagePos[k].firstname contains 'private' AND theMessagePos[k].lastname contains 'private' <br>	  AND theMessagePos[k].ID contains 'private'&gt;<br>      	&lt;!--- Do Nothing ---&gt;<br>      &lt;cfelse&gt;<br>      &lt;option value="#theMessagePos[k].id#"&gt;#theMessagePos[k].firstname# #theMessagePos[k].lastname#&lt;/option&gt;<br>      &lt;/cfif&gt;<br>    &lt;/cfoutput&gt;<br>    &lt;/cfloop&gt;<br>&lt;/select&gt;<br>  &lt;/cfsavecontent&gt;<br>&lt;cfoutput&gt;#getlstfriends#&lt;/cfoutput&gt;</p><p>as per api, i am seeing this:</p><p>recipients 	mailbox-item 	yes 	Containing element for one or more recipient elements.<br>recipient 	recipients 	at least one 	An intended recipient of the message who is directly connected to the poster.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745711">18</a> by Misty
		posted on 4/20/2014 at 11:15 AM
		</div>
		<div class="comment_text"><p>I am using the ID in the option value's</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745712">19</a> by Raymond Camden
		posted on 4/21/2014 at 5:28 PM
		</div>
		<div class="comment_text"><p>I have not looked at the API yet for sending messages.  It looks like you have. I'm not sure what you are asking though. If you know the API, then just use it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745714">20</a> by Misty
		posted on 4/21/2014 at 10:11 PM
		</div>
		<div class="comment_text"><p>Hi ray, Working on it, But i am checking if i need to pass an ID ot the name to the api so the message can be sent to the user</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745709">21</a> by Misty
		posted on 4/24/2014 at 6:20 PM
		</div>
		<div class="comment_text"><p>Hi ray, I Passed the Code as the ID of the user to the function sendMessage</p><p>but i am getting 403, Method not allowed:</p><p>here is the screenshot:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fscreencast.com%2Ft%2FXVYgHf9K2%3A3oTcyT4q2_DdgTzbwRdSHczxkp8&amp;cuid=3321886" rel="nofollow noopener" title="http://screencast.com/t/XVYgHf9K2">http://screencast.com/t/XVY...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745717">22</a> by Raymond Camden
		posted on 4/24/2014 at 6:41 PM
		</div>
		<div class="comment_text"><p>Misty, at this point, your request is really OT for this particular post. It sounds like you need to post to FB's support forums, or Stack Overflow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745719">23</a> by Misty
		posted on 4/24/2014 at 8:30 PM
		</div>
		<div class="comment_text"><p>Thanks ray, BTW i have already posted on Linkedin Forums,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745718">24</a> by Misty
		posted on 4/30/2014 at 12:26 PM
		</div>
		<div class="comment_text"><p>Ray, In developer API, we see often the auth1.0 redirect, do we need to fill that info or not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745720">25</a> by Raymond Camden
		posted on 4/30/2014 at 4:26 PM
		</div>
		<div class="comment_text"><p>Typically the caller sends that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745722">26</a> by Misty
		posted on 5/23/2014 at 11:02 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Element ID is undefined in ME</p><p>The following throws error sometimes, not everytime, any idea?</p><p>&lt;cfset session.liAPI = createObject("component","services.linkedin").init(session.liaccesstoken)&gt;<br>&lt;cfset me = session.liAPI.getMe()&gt;<br>&lt;cfset session.Linkedmyid = <a href="http://disq.us/url?url=http%3A%2F%2Fme.id%3AgAtiJ6QgpUVu_yuK8knqI4fX9A0&amp;cuid=3321886" rel="nofollow noopener" title="me.id">me.id</a>&gt;<br>&lt;cfset session.linkinMyName = me.firstname &amp; " " &amp; me.lastname&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745723">27</a> by Raymond Camden
		posted on 5/23/2014 at 11:05 PM
		</div>
		<div class="comment_text"><p>I don't know. Maybe LI doesn't always return it? Best I can recommend is checking for the existence of it before copying it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745721">28</a> by Raymond Camden
		posted on 5/23/2014 at 11:06 PM
		</div>
		<div class="comment_text"><p>Ahah, if you look here, <a href="https://disq.us/url?url=https%3A%2F%2Fdeveloper.linkedin.com%2Fdocuments%2Fprofile-api%3AzuCtl1puynwG7MlYCv2bmxOE-uE&amp;cuid=3321886" rel="nofollow noopener" title="https://developer.linkedin.com/documents/profile-api">https://developer.linkedin....</a>, go to Defaults, and you will see ID is *not* listed there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745725">29</a> by Misty
		posted on 5/24/2014 at 9:22 AM
		</div>
		<div class="comment_text"><p>Thanks ray,</p><p>As per Docs, I have requested additional fields through this:</p><p>&lt;cfhttp url="<a href="https://disq.us/url?url=https%3A%2F%2Fapi.linkedin.com%2Fv1%2Fpeople%2F%7E%3A%28id%2Cfirst-name%2Clast-name%2Cindustry%2Cskills%2Csummary%2Cspecialties%2Cpositions%2Cpicture-url%2Cpublic-profile-url%2Cemail-address%29%3Foauth2_access_token%3D%23variables.accesstoken%23%3AtOVLVwxwvjZ-Z8L_YnVKh2tQ5gc&amp;cuid=3321886" rel="nofollow noopener" title="https://api.linkedin.com/v1/people/~:(id,first-name,last-name,industry,skills,summary,specialties,positions,picture-url,public-profile-url,email-address)?oauth2_access_token=#variables.accesstoken#">https://api.linkedin.com/v1...</a>" result="httpResult"&gt;</p><p>The Error is always coming, but sometimes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713745724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713745724">30</a> by Raymond Camden
		posted on 5/24/2014 at 5:42 PM
		</div>
		<div class="comment_text"><p>I assume you mean "always coming, but sometimes", as just sometimes. The best I can suggest now is to try LI's tech support.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2549509464">
	<div>
		<img src="https://disqus.com/api/users/avatars/knowledgenotebook.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2549509464">31</a> by knowledgenotebook
		posted on 3/3/2016 at 4:34 PM
		</div>
		<div class="comment_text"><p>I wonder if anyone has tried this method of authentication with LNK api recently.<br>I just tried it. (btw, I'm on LNK developer platform, so, I have my own key etc., my developer Setting is: development).</p><p>Since r_network parameter is not available from my LNK developer account, I removed it from the liURL var.</p><p>Here's what I got in debugging mode, question, why "Access to connections denied"?  Is the  r_network parameter required to get connections' data? It seems so, thoughts?  Thanks.</p><p>This is a LI user.<br>friends<br>Struct <br>errorCode number 	0<br>message 	string 	Access to connections denied<br>requestId string 	TPZDNCxxxx<br>status number 	403</p></div>
	</div>
</div>
		