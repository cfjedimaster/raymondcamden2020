
<div class="comment" id="c_1713726198">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726198">1</a> by Mr. Michael Santoroski
		posted on 9/8/2010 at 12:33 AM
		</div>
		<div class="comment_text"><p>Could this be applied to FacebookConnect?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726292">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726292">2</a> by Raymond Camden
		posted on 9/8/2010 at 12:33 AM
		</div>
		<div class="comment_text"><p>No idea. It's been a long time since I played with the Facebook API.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726312">3</a> by Jeff Gladnick
		posted on 9/8/2010 at 1:18 AM
		</div>
		<div class="comment_text"><p>re: facebook connect.  Not really.  And facebook connect is being depreciated in favor of "Graph"</p><p>Look at this guy's blog: <a href="http://disq.us/url?url=http%3A%2F%2Fblog.abusalah.info%3AsnrjItCoHYFFg_CDuynDA7Rjr2c&amp;cuid=3321886" rel="nofollow noopener" title="blog.abusalah.info">blog.abusalah.info</a></p><p>And this open source project: <a href="http://disq.us/url?url=http%3A%2F%2Ffacebookgraph.riaforge.org%3AfzzmqoIaQdTHI5gN0tzm187Optw&amp;cuid=3321886" rel="nofollow noopener" title="facebookgraph.riaforge.org">facebookgraph.riaforge.org</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726303">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726303">4</a> by Mike Jaixen
		posted on 9/8/2010 at 9:21 PM
		</div>
		<div class="comment_text"><p>Thanks for this great tutorial. It's somewhat complex to get set up, but once you do it, it's actually very simple.</p><p>My one question is that it appears that you can send a location with your status updates by simply adding a location parameter.</p><p>&lt;cfset Twitter.updateStatus(statusUpdate, location)&gt;</p><p>However, I'm not sure how to create a GeoLocation from ColdFusion. Haven't worked at all with Java API's, but it appears that GeoLocation is part of the twitter4j package...just don't know how to get to it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726300">5</a> by Ed Bartram
		posted on 9/9/2010 at 12:19 AM
		</div>
		<div class="comment_text"><p>Ray, I've been struggling with this for a few days and really appreciate you posting your solution.  I had looked at twitter4j, but rejected it in favor of working with the OAuth project on RIAForge (<a href="http://disq.us/url?url=http%3A%2F%2Foauth.riaforge.org%2F%29%3AeZsSY2NdlzmHZ7JaEP0j_Tqa9dg&amp;cuid=3321886" rel="nofollow noopener" title="http://oauth.riaforge.org/)">http://oauth.riaforge.org/)</a>.  When I saw your blog post I looked at twitter4j again, this time using javaloader and was able to solve my problem.  I may still continue looking at OAuth, but my production app is back up and running.  Thanks again! -Ed</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726304">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726304">6</a> by Ennio
		posted on 9/9/2010 at 6:16 PM
		</div>
		<div class="comment_text"><p>I keep getting this error</p><p>401:Authentication credentials were missing or incorrect. {"request":"/1/statuses/update.json","error":"Invalid / expired Token"} null</p><p>How often do you need to validate the Token?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726308">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726308">7</a> by Raymond Camden
		posted on 9/9/2010 at 6:17 PM
		</div>
		<div class="comment_text"><p>It was my understanding that it lasted forever. I've yet to see an app that used oauth ask me to do it again. Look at my app.cfc code - are you setting BOTH the OAuthConsumer and Access stuff?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726294">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726294">8</a> by Ennio
		posted on 9/9/2010 at 6:38 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I have the same info that you have on the app.cfc</p><p>When I call the Twitter.test() it does return OK... but any other function like getScreenName(), or updateStatus()... I get that error.</p><p>I do have my storedaccesstoken and storedaccesssecret saved on my DB... and if I try to authorize the application again I get the same token that I have on my DB.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726306">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726306">9</a> by Raymond Camden
		posted on 9/9/2010 at 6:44 PM
		</div>
		<div class="comment_text"><p>Not sure what to recommend then. You may want to check the support options at twitter4j.  I know it is still working fine for CFBloggers.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726297">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726297">10</a> by Raymond Camden
		posted on 9/9/2010 at 6:49 PM
		</div>
		<div class="comment_text"><p>@Mike: You can't get geolocation from CF itself. The browser has to help. Google for geolocation and javascript for help there. As for doing geolocation of addresses - you can use a Google service for that and there is an open source CFC for it on RIAForge.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726299">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726299">11</a> by Mike Jaixen
		posted on 9/9/2010 at 7:02 PM
		</div>
		<div class="comment_text"><p>I figured out the Geolocation issue after doing a little more investigation on how to create Java objects with ColdFusion.  I just needed to create the GeoLocation object then init it with the lat/long.</p><p>&lt;cfset location = createObject("java", "twitter4j.GeoLocation").init(Lat, Lon)&gt;<br>&lt;cfset Twitter.updateStatus(statusUpdate, location)&gt;</p><p>Since my particular app is all server based and gets the lat/long from a GPS, there is no need to use any lookups. I just needed to figure out how to send it to Twitter along with the update.  Worked great yesterday, but today it doesn't.  I think that Twitter has disabled location tweets today, likely for a technical issue, since I don't see anybody else with locations on them either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726298">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726298">12</a> by Angela
		posted on 9/15/2010 at 7:16 PM
		</div>
		<div class="comment_text"><p>You actually don't need the temporary script, you can get your access token by going to <br><a href="http://disq.us/url?url=http%3A%2F%2Fdev.twitter.com%2Fapps%2F%3AOfDMta1AqOf3H1pqEt5O3ZcJ-xs&amp;cuid=3321886" rel="nofollow noopener" title="http://dev.twitter.com/apps/">http://dev.twitter.com/apps/</a><br>Click on your application. The page that comes up has your Consumer Key and Consumer Secret, but if you look at the nav options to the right, there should be an option "My Access Token", that page will give you your Access Token and Access Token Secret.</p><p>Here is a twitter link that describes how to use OAuth for single users: <br><a href="http://disq.us/url?url=http%3A%2F%2Fdev.twitter.com%2Fpages%2Foauth_single_token%3AkZZtiwK2fuav5HiLH_KirQpLtZU&amp;cuid=3321886" rel="nofollow noopener" title="http://dev.twitter.com/pages/oauth_single_token">http://dev.twitter.com/page...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726296">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726296">13</a> by Raymond Camden
		posted on 9/15/2010 at 7:24 PM
		</div>
		<div class="comment_text"><p>Interesting. So if you are right, that means this entire entry is now probably worthless - which I'm ok with if it means we can skip a lot of work, and just make use of the Java library.</p><p>Is that right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726301">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726301">14</a> by Angela Haralson
		posted on 9/15/2010 at 8:31 PM
		</div>
		<div class="comment_text"><p>Well, you don't need the temporary script like I said, but all the other information was useful to me. I had previously looked at the Twitter4J library and the Rob O'Brien post, but it took reading through your blog post for me to put it all together and get it working!</p><p>Thanks also for the tip on using JavaLoader!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726305">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726305">15</a> by Raymond Camden
		posted on 9/17/2010 at 5:25 AM
		</div>
		<div class="comment_text"><p>@Angela - and anyone - I updated the text above to make it clear we can skip stuff. I didn't want to wholesale edit the entry because I thought it would get a bit messy.</p><p>Is it clear?</p><p>Thank you again, Angela.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726293">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726293">16</a> by Scott P
		posted on 9/25/2010 at 6:26 AM
		</div>
		<div class="comment_text"><p>Thanks Ray and Angela.</p><p>For anyone else that stumbles across this - once you sign up at <a href="http://disq.us/url?url=http%3A%2F%2Fdev.twitter.com%3AkSA7PvnuXlPOzHFkyHAbSvZ41ds&amp;cuid=3321886" rel="nofollow noopener" title="dev.twitter.com">dev.twitter.com</a> you'll need to grab the Consumer key and the consumer secret from the application details page then the oauth_token and oauth_token_secret from the my access tokens page.</p><p>just skip to step 7 once you get those.</p><p>&lt;cfset application.Twitter.setOAuthConsumer('REPLACE_consumerkey','REPLACE_consumersecret')&gt;<br>&lt;cfset application.Twitter.setOAuthAccessToken("REPLACE_oauth_token" ,"REPLACE_oauth_token_secret")&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726309">17</a> by Phillip Senn
		posted on 1/15/2011 at 1:44 AM
		</div>
		<div class="comment_text"><p>I wonder if we in the ColdFusion community (meaning you Ray), could do something like this:<br><a href="http://disq.us/url?url=http%3A%2F%2Fprojects.flowingdata.com%2Finauguration%2F%3ALZ90SH-3HlcXH6irT3BJXOj88gI&amp;cuid=3321886" rel="nofollow noopener" title="http://projects.flowingdata.com/inauguration/">http://projects.flowingdata...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726311">18</a> by Raymond Camden
		posted on 1/15/2011 at 2:34 AM
		</div>
		<div class="comment_text"><p>Check my blog entry on OpenAmplify: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2010%2F9%2F29%2FTake-a-look-at-OpenAmplify%3AO4tF2iHMKovWJ5LseEmygMaLjRA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2010/9/29/Take-a-look-at-OpenAmplify">http://www.coldfusionjedi.c...</a></p><p>It would let you to the textual analysis of the twitter text.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726295">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726295">19</a> by Esmeralda
		posted on 1/28/2011 at 10:25 PM
		</div>
		<div class="comment_text"><p>Just in case anyone else runs into this... if your server is quickly running out of memory and you have copied and pasted this code verbatim, change the application scoped variables to server. This being due to garbage collection and URLClassLoaders. See the link <a href="http://disq.us/url?url=http%3A%2F%2Fgoo.gl%2F0eGnN%3AEw4A9tTPIQnm4YNEupIiZGjqu5Y&amp;cuid=3321886" rel="nofollow noopener" title="http://goo.gl/0eGnN">http://goo.gl/0eGnN</a> or <a href="http://disq.us/url?url=http%3A%2F%2Fgoo.gl%2FGWYKa%3Ab9MpeZf7lFTgnOI9JCO2VSV-BmI&amp;cuid=3321886" rel="nofollow noopener" title="http://goo.gl/GWYKa">http://goo.gl/GWYKa</a> .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726307">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726307">20</a> by Raymond Camden
		posted on 1/28/2011 at 10:27 PM
		</div>
		<div class="comment_text"><p>Thanks for the warning Esmeralda!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726315">21</a> by Richard
		posted on 3/4/2011 at 4:07 PM
		</div>
		<div class="comment_text"><p>Hi Ray, great tutorial but I'm having some problems running on MX7, any reasons for this that you may know of? I've found multiple examples but none of them work it's driving me mad :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726313">22</a> by Raymond Camden
		posted on 3/4/2011 at 5:01 PM
		</div>
		<div class="comment_text"><p>What kind of problems?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726310">23</a> by Richard
		posted on 3/4/2011 at 8:59 PM
		</div>
		<div class="comment_text"><p>I've installed the JAR files, but I get the "Error Occurred While Processing Request" message for twitter4j.Twitter</p><p>It tells me</p><p>java.lang.InstantiationException: twitter4j.Twitter</p><p>Any ideas? Would greatly appreciate any help you can give me with this. It seems to work for everyone else which is why it's driving me so crazy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726302">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726302">24</a> by Derrick Peavy
		posted on 3/5/2011 at 3:07 AM
		</div>
		<div class="comment_text"><p>You all are genuises. But for some of us, this is more complicated than it needs to be.  What I need/want is for a user to authenticate via twitter, make a tweet from my app. So MY OWN token is not what I need, I need their token, and that's not going to be stored in an application var.</p><p>Here is my BUTT AS* simple App (old school style), registering the class under the old style (just cause it's gonna stay there, so why not?) instead of using the dynamic Java loader.</p><p>3 files.</p><p>Applicaction.cfm CONTENTS:::</p><p>	&lt;!--- 1. your app token and secret ---&gt;<br>	&lt;cfparam name="session.oAuthRequestToken" default=""&gt;<br>	&lt;cfparam name="session.oAuthRequestTokenSecret" default=""&gt;</p><p>	&lt;!--- 2. the user tokens ---&gt;<br>	&lt;cfparam name="session.userAccessToken" default=""&gt;<br>	&lt;cfparam name="session.userAccessSecret" default=""&gt;</p><p>index.cfm file CONTENTS::</p><p>&lt;cfsilent&gt;<br>	&lt;!--- always create the java object ---&gt;<br>	&lt;cfset Twitter = createObject("java", "twitter4j.Twitter")&gt;<br>	&lt;cfset Twitter.setOAuthConsumer(application.twitterConsumerKey, application.twitterConsumerSecret)&gt;<br>&lt;/cfsilent&gt;</p><p>&lt;cfif structKeyExists(url,'mode') IS FALSE&gt;<br>	&lt;cfset requestToken = Twitter.getOAuthRequestToken()&gt;<br>	&lt;cfset session.oAuthRequestToken = RequestToken.getToken()&gt;<br>	&lt;cfset session.oAuthRequestTokenSecret = RequestToken.getTokenSecret()&gt;<br>	&lt;cflocation url="#RequestToken.getAuthorizationURL()#" addtoken="No"&gt;<br>&lt;cfelse&gt;<br>	&lt;cfset accessToken = Twitter.getOAuthAccessToken(session.oAuthRequestToken,session.oAuthRequestTokenSecret)&gt;<br>	&lt;cfset session.userAccessToken = accessToken.getToken()&gt;<br>	&lt;cfset session.userAccessSecret = accessToken.getTokenSecret()&gt;<br>&lt;/cfif&gt;</p><p>demo.cfm CONTENTS::</p><p>&lt;cfset Twitter = createObject("java", "twitter4j.Twitter")&gt;<br>&lt;cfset Twitter.setOAuthConsumer(#application.twitterConsumerKey#, #application.twitterConsumerSecret#)&gt;<br>&lt;cfset Twitter.setOAuthAccessToken(#session.StoredAccessToken# ,#session.StoredAccessSecret#)&gt;</p><p>&lt;cfset Twitter.updateStatus("Test: thank you to Rob OBrien and Ray Camden and Twitter4J!")&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726314">25</a> by Derrick Peavy
		posted on 3/5/2011 at 3:09 AM
		</div>
		<div class="comment_text"><p>Sorry, one mistake, I set my own application's (that is, my Twitter appliction API keys in my CF Application file as well. So the application file also has these three lines:</p><p>&lt;cfset application.twitterApiKey="abcdefg"&gt;<br>&lt;cfset application.twitterConsumerKey="hijklmnop"&gt;<br>&lt;cfset application.twitterConsumerSecret="qrstuvwxyz"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726320">26</a> by Jeff Shain
		posted on 3/19/2011 at 2:17 PM
		</div>
		<div class="comment_text"><p>Any plans to update this for the latest edition of twitter4j?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726327">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726327">27</a> by Raymond Camden
		posted on 3/19/2011 at 5:05 PM
		</div>
		<div class="comment_text"><p>My blog entry? If their API didn't change, there isn't much need - is there?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726330">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726330">28</a> by Jeff Shain
		posted on 3/21/2011 at 6:42 AM
		</div>
		<div class="comment_text"><p>Well Twitter's API didn't change but the java methods have changed for Twitter4j. You don't have to do anything, obviously, it's your call. Just asking.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726325">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726325">29</a> by Raymond Camden
		posted on 3/21/2011 at 6:49 AM
		</div>
		<div class="comment_text"><p>I wasn't aware it _did_ change. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726326">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726326">30</a> by Jeff Shain
		posted on 3/21/2011 at 7:11 AM
		</div>
		<div class="comment_text"><p>Yeah. I'm using javaloader:</p><p>&lt;cfset begintwitter = application.javaloader.create("twitter4j.TwitterFactory")&gt;<br>&lt;cfset Twitter = begintwitter.getinstance()&gt;<br>&lt;cfset Twitter.setOAuthConsumer('key','secret')&gt;</p><p>I am able to properly redirect to twitter, login and send the oauth back, but for some reason I can't seem to figure out why I'm getting this:</p><p>The screen name / password combination seems to be invalid. null &lt;br&gt;The error occurred on line 36.</p><p>Line 36 is:</p><p>		&lt;cfset session.StoredAccessSecret = AccessToken.getTokenSecret()&gt;</p><p>I don't know if getTokenSecret() is deprecated or not. I can't find it in the class wiki.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726329">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726329">31</a> by Jeff Shain
		posted on 3/21/2011 at 7:12 AM
		</div>
		<div class="comment_text"><p>Correction, line 36 is:</p><p>		&lt;cfset AccessToken = Twitter.getOAuthAccessToken(session.oAuthRequestToken,session.oAuthRequestTokenSecret)&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726324">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726324">32</a> by Raymond Camden
		posted on 3/22/2011 at 11:56 PM
		</div>
		<div class="comment_text"><p>Did you try skipping the step as the commenter said earlier - ie just get the consumer values via the site?</p><p>I went through this myself for jquerybloggers this past week and it worked fine - but I used the Java code from my zip.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726321">33</a> by Rob
		posted on 3/31/2011 at 7:47 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I've been trying to figure this out all day and I am stumped.  Firstly it seems the setOAuthConsumer method is not used anymore in the latest release of twitter4j.  - it says it's VOID.</p><p>I have opened the jar file as a zip and I don't even see the method in there to call.  So I was able to find version twitter4j-core-2.1.4-SNAPSHOT.jar online and I opened that and the setOAuthConsumer method isn't in there either.  Am I missing something?</p><p>I get the following error:<br>//////////////////////////////////////////<br>The setOAuthConsumer method was not found.</p><p>Either there are no methods with the specified method name and argument types or the setOAuthConsumer method is overloaded with argument types that ColdFusion cannot decipher reliably. ColdFusion found 0 methods that match the provided arguments. If this is a Java object and you verified that the method exists, use the javacast function to reduce ambiguity.<br>///////////////////////////////////////</p><p>I have tried on CF7, CF8, and CF9.  My main requirement is to get it up on CF7 as a client of mine is using that version.  I initially got Matt's monkeyTweets working and it's awesome but unfortunately it breaks on CF7.</p><p>Any ideas?  Thx.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726328">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726328">34</a> by Raymond Camden
		posted on 3/31/2011 at 3:07 PM
		</div>
		<div class="comment_text"><p>What about trying the version from CFB's repo:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcfjedimaster%2FColdFusion-Blog-Aggregator%2Ftree%2Fmaster%2Fcomponents%3A6SkwHxKLEzQyMjk0AU75aB9G4xE&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cfjedimaster/ColdFusion-Blog-Aggregator/tree/master/components">https://github.com/cfjedima...</a></p><p>Grab the JAR there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726322">35</a> by Rob
		posted on 3/31/2011 at 6:28 PM
		</div>
		<div class="comment_text"><p>Ray - YOU ROCK!  Thanks man.  My saga has ended.</p><p>Initially I was getting the same issue as Ennio above:<br>401:Authentication credentials were missing or incorrect.</p><p>I then dug around a little more and found out that my dev server's clock was not accurate which was causing that error.  It said it was the year 2001, and the time was wrong too.  Once I fixed that, I was successfully forwarded on.<br><a href="http://disq.us/url?url=http%3A%2F%2Fblainegarrett.com%2F2009%2F07%2F14%2Ffailed-to-validate-oauth-signature-and-token-on-twitter-oauth-check-your-cloc%2F%3Adb9lQH1eWbWxvMefMa6b8Z0kAkQ&amp;cuid=3321886" rel="nofollow noopener" title="http://blainegarrett.com/2009/07/14/failed-to-validate-oauth-signature-and-token-on-twitter-oauth-check-your-cloc/">http://blainegarrett.com/20...</a></p><p>This is CF7 btw, antiquated, I know but the client didn't want to change.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726323">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726323">36</a> by Raymond Camden
		posted on 3/31/2011 at 6:39 PM
		</div>
		<div class="comment_text"><p>Clock issues. Sigh. Sometimes it's the smallest thing...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726334">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726334">37</a> by Dom
		posted on 4/8/2011 at 9:04 PM
		</div>
		<div class="comment_text"><p>Thanks everyone for this post. It saved me a load of time. Initially I had the same error as Rob (missing method using latest version of twitter4j - replaced it with the older version as per Ray's suggestion). Then saw the 401 authentication errors - I changed the access to my twitter app to client rather than web and regenerated the token and then everything worked fine. Also took on board the suggestion about using the server scope. &lt;cftwitter /&gt; in X anyone?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726337">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726337">38</a> by John Sieber
		posted on 5/18/2011 at 12:26 AM
		</div>
		<div class="comment_text"><p>Just found this post while working on setting up twitter4j. Thanks again for another great post!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726335">39</a> by John Sieber
		posted on 5/18/2011 at 12:27 AM
		</div>
		<div class="comment_text"><p>Can anyone confirm the memory leak problems with using the application scope? Just wondering if I should make the change to the server scope?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726332">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726332">40</a> by David Graham
		posted on 6/3/2011 at 11:17 PM
		</div>
		<div class="comment_text"><p>I couldn't get twitter4j 2.2.x to work with CF - the getOAuthAccessToken() method is too overloaded and CF doesn't type well enough. However, I was able to download version 2.1.12 (<a href="http://disq.us/url?url=http%3A%2F%2Ftwitter4j.org%2Fen%2Ftwitter4j-2.1.12.zip%29%3AoWQckuQa459kGMdyQEuiKkh-Q-g&amp;cuid=3321886" rel="nofollow noopener" title="http://twitter4j.org/en/twitter4j-2.1.12.zip)">http://twitter4j.org/en/twi...</a> and it works great.</p><p>I also had the server time issues - 26 minutes off and it would not work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726333">41</a> by Jimmy Rousseau
		posted on 7/19/2011 at 10:40 PM
		</div>
		<div class="comment_text"><p>Thanks for this, you guys are awesome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726336">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726336">42</a> by Sean Ryan
		posted on 9/19/2011 at 5:22 AM
		</div>
		<div class="comment_text"><p>The current version of twitter4j is 2.2 and they changed the Twitter object from a class to an interface. You can no longer get an instance of the implementing class by invoking the Twitter object. If you change &lt;cfset application.Twitter = application.javaloader.create("twitter4j.Twitter")&gt; to &lt;cfset application.Twitter = application.javaloader.create("twitter4j.TwitterFactory").getInstance()&gt; it should work.</p><p>Great post Ray, and nice meeting you at NCDEVCON this weekend.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726338">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726338">43</a> by Raymond Camden
		posted on 9/19/2011 at 5:57 AM
		</div>
		<div class="comment_text"><p>Same here - and thanks for that fix!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726339">44</a> by Sean Ryan
		posted on 9/19/2011 at 8:44 PM
		</div>
		<div class="comment_text"><p>My comment above is incomplete and I just wanted to point people to a more verbose explanation with a code snippet of what I was referring to about version 2.2.x of twitter4j.</p><p>I post a very short blog entry here: <a href="http://disq.us/url?url=http%3A%2F%2Ftechblog.troywebconsulting.com%2F2011%2F09%2Fauthenticating-to-twitter-using-oauth-and-twitter4j-2-2x-api-with-coldfusion%2F%3AYs1f-h1oT4lT_QvpBjQa8_DxmH0&amp;cuid=3321886" rel="nofollow noopener" title="http://techblog.troywebconsulting.com/2011/09/authenticating-to-twitter-using-oauth-and-twitter4j-2-2x-api-with-coldfusion/">http://techblog.troywebcons...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726341">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726341">45</a> by stu
		posted on 1/26/2012 at 4:40 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>If we cont use javaloader and put the jar in the class file how does the java code change</p><p>cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726343">46</a> by Raymond Camden
		posted on 1/26/2012 at 5:22 PM
		</div>
		<div class="comment_text"><p>Um - you can't do it at all I believe.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726342">47</a> by Sean Ryan
		posted on 1/26/2012 at 6:59 PM
		</div>
		<div class="comment_text"><p>Ray's correct. In this case, ColdFusion isn't interacting with Twitter. It's really interacting with the twitter java library (the jar file). It's the library that does the heavy lifting. Without the ability to add the library to your classpath or ability to use the classloader, you're unfortunately out of luck :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726345">48</a> by Talal M
		posted on 6/12/2013 at 12:56 PM
		</div>
		<div class="comment_text"><p>twitter requested developers to migrate to API V1.1 and now I cannot post using your method. Any suggestions of how to resolve this issue now ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726346">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726346">49</a> by Calvin Trinh
		posted on 6/14/2013 at 9:49 PM
		</div>
		<div class="comment_text"><p>We are having the same problem as Talal.  Twitter retired API V1.0, we not getting any new twitter post after 6/12. I'm hoping someone will have a resolution soon.</p></div>
	</div>
</div>
		