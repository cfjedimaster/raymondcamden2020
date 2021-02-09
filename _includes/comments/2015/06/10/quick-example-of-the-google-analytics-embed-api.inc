
<div class="comment" id="c_2254640163">
	<div>
		<img src="https://disqus.com/api/users/avatars/simonrolin.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2254640163">1</a> by Simon Rolin
		posted on 9/15/2015 at 1:01 PM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I have used this to display a table but the problem is I can't figure out how to format data. For instance I get time in seconds and I really dont know how to format it in minutes : seconds. Could you help me with that ?</p><p>Thanks in advance !</p></div>
	</div>
</div>
		
<div class="comment" id="c_2254646653">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2254646653">2</a> (In reply to <a href="#c_2254640163">#1</a>) by Raymond Camden
		posted on 9/15/2015 at 1:05 PM
		</div>
		<div class="comment_text"><p>Can you show me what you have so far? Like online I mean.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2254670318">
	<div>
		<img src="https://disqus.com/api/users/avatars/simonrolin.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2254670318">3</a> (In reply to <a href="#c_2254646653">#2</a>) by Simon Rolin
		posted on 9/15/2015 at 1:22 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, thanks for this blowing fast answer.</p><p>This is the code that I use to generate the table :</p><p>var dataChart1 = new gapi.analytics.googleCharts.DataChart({<br>  query: {<br>  'ids': 'ga:xxxxxxx',<br>  'start-date': '30daysAgo',<br>  'end-date': 'yesterday',<br>  'metrics': 'ga:sessions,ga:screenviews,ga:avgSessionDuration',<br>  'dimensions': 'ga:appVersion'<br>  },</p><p>  chart: {<br>  'container': 'chart-ios-container',<br>  'type': 'TABLE',<br>  'options': {<br>  'width': '100%'<br>  }<br>  }<br>});<br>    dataChart1.execute();</p><p>I sadly can't show you an online example as it is not accessible online but here is what the table looks like.</p><p>Thanks a lot !</p></div>
	</div>
</div>
		
<div class="comment" id="c_2254675746">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2254675746">4</a> (In reply to <a href="#c_2254670318">#3</a>) by Raymond Camden
		posted on 9/15/2015 at 1:25 PM
		</div>
		<div class="comment_text"><p>So in your case, you are letting Google render the results, which is easy, but locks you down a bit in terms of how much you can customize. If you want more control, then you need to render everything yourself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2254778834">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2254778834">5</a> (In reply to <a href="#c_2254670318">#3</a>) by Raymond Camden
		posted on 9/15/2015 at 2:31 PM
		</div>
		<div class="comment_text"><p>I don't want to promise, but I'm keeping this thread in my inbox to try to find time to make a demo for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2258613187">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2258613187">6</a> (In reply to <a href="#c_2254670318">#3</a>) by Raymond Camden
		posted on 9/17/2015 at 2:44 PM
		</div>
		<div class="comment_text"><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.raymondcamden.com%2F2015%2F09%2F17%2Fcreating-a-custom-display-for-googles-analytics-embed-library%3AkkA4hIbiuXPamtHlSnZaLwhaZGM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.raymondcamden.com/2015/09/17/creating-a-custom-display-for-googles-analytics-embed-library">http://www.raymondcamden.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2395946139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2395946139">7</a> by PHP one love
		posted on 12/6/2015 at 10:39 AM
		</div>
		<div class="comment_text"><p>I followed this tutorial and I get this, any chance you could help?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2396292255">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2396292255">8</a> (In reply to <a href="#c_2395946139">#7</a>) by Raymond Camden
		posted on 12/6/2015 at 3:58 PM
		</div>
		<div class="comment_text"><p>Expand the error so we can see it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2507574562">
	<div>
		<img src="https://disqus.com/api/users/avatars/rajmohanm.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2507574562">9</a> by Rajmohan M
		posted on 2/11/2016 at 5:03 AM
		</div>
		<div class="comment_text"><p>Hi,</p><p>I have to display the dashboard using tracking Id, because i have more than one websites to analyze. plese help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2507986726">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2507986726">10</a> (In reply to <a href="#c_2507574562">#9</a>) by Raymond Camden
		posted on 2/11/2016 at 1:31 PM
		</div>
		<div class="comment_text"><p>I'm not sure I understand your question. You do see how I show multiple sites being available via the dropdowns, right? Their docs/demos show that too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2554185997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2554185997">11</a> by James
		posted on 3/6/2016 at 7:20 AM
		</div>
		<div class="comment_text"><p>Hi Ray, thanks the tutorial. Quick question. I want to have the results show on a public web page, however you need to authorize the api to show them (This means only I can see them). How can I authorize the page so anyone can view the results?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2555844690">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2555844690">12</a> (In reply to <a href="#c_2554185997">#11</a>) by Raymond Camden
		posted on 3/7/2016 at 11:50 AM
		</div>
		<div class="comment_text"><p>For this - no. There is an API that can run entirely server side and you could use that instead.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2561657055">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_46HPMU9APy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2561657055">13</a> (In reply to <a href="#c_2555844690">#12</a>) by James
		posted on 3/10/2016 at 1:34 PM
		</div>
		<div class="comment_text"><p>Hi Ray, I've search the web but unfortunately I've had no luck in finding a step by step tutorial. Would you mind pointing me in the right direction please?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2561811774">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2561811774">14</a> (In reply to <a href="#c_2561657055">#13</a>) by Raymond Camden
		posted on 3/10/2016 at 3:18 PM
		</div>
		<div class="comment_text"><p>A step by step tutorial on how to use Google Analytics? Best I can say is to start here: <a href="https://disq.us/url?url=https%3A%2F%2Fdevelopers.google.com%2Fanalytics%2Fdevguides%2Freporting%2Fcore%2Fv3%2Freference%3Ai1YJpJC3XfPH18kw6JEIkqXaJ3A&amp;cuid=3321886" rel="nofollow noopener" title="https://developers.google.com/analytics/devguides/reporting/core/v3/reference">https://developers.google.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2729547121">
	<div>
		<img src="https://disqus.com/api/users/avatars/andreafilloramo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2729547121">15</a> by Andrea Filloramo
		posted on 6/14/2016 at 4:59 AM
		</div>
		<div class="comment_text"><p>Hi, this script does not work anymore you know what change do? Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_2729863355">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2729863355">16</a> (In reply to <a href="#c_2729547121">#15</a>) by Raymond Camden
		posted on 6/14/2016 at 11:26 AM
		</div>
		<div class="comment_text"><p>How does it not work? What do you see in your console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2729880283">
	<div>
		<img src="https://disqus.com/api/users/avatars/andreafilloramo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2729880283">17</a> (In reply to <a href="#c_2729863355">#16</a>) by Andrea Filloramo
		posted on 6/14/2016 at 11:42 AM
		</div>
		<div class="comment_text"><p>All white </p></div>
	</div>
</div>
		
<div class="comment" id="c_2729914355">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2729914355">18</a> (In reply to <a href="#c_2729880283">#17</a>) by Raymond Camden
		posted on 6/14/2016 at 12:08 PM
		</div>
		<div class="comment_text"><p>It worked for me. What do you mean by "All white" - you did open up the DevTools, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730055868">
	<div>
		<img src="https://disqus.com/api/users/avatars/andreafilloramo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730055868">19</a> (In reply to <a href="#c_2729914355">#18</a>) by Andrea Filloramo
		posted on 6/14/2016 at 1:48 PM
		</div>
		<div class="comment_text"><p>I do not understand how you can work! I just copied and pasted your code and I replaced CLIENT_ID. To me it does not work I only see a blank page</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730098501">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730098501">20</a> (In reply to <a href="#c_2730055868">#19</a>) by Raymond Camden
		posted on 6/14/2016 at 2:14 PM
		</div>
		<div class="comment_text"><p>I keep asking you but you don't say: What do you see in the browser's developer tools console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730108491">
	<div>
		<img src="https://disqus.com/api/users/avatars/andreafilloramo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730108491">21</a> (In reply to <a href="#c_2730098501">#20</a>) by Andrea Filloramo
		posted on 6/14/2016 at 2:20 PM
		</div>
		<div class="comment_text"><p>Excuse I have not written to you because you do not understand what you want me see in console development? The code is there but does not display the data. Tell me what you want me to do you see for console development?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730110818">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730110818">22</a> (In reply to <a href="#c_2730108491">#21</a>) by Raymond Camden
		posted on 6/14/2016 at 2:21 PM
		</div>
		<div class="comment_text"><p>Do you know what browser developer tools are?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730112290">
	<div>
		<img src="https://disqus.com/api/users/avatars/andreafilloramo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730112290">23</a> (In reply to <a href="#c_2730110818">#22</a>) by Andrea Filloramo
		posted on 6/14/2016 at 2:22 PM
		</div>
		<div class="comment_text"><p>Yes, you use Firebug.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730115503">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730115503">24</a> (In reply to <a href="#c_2730112290">#23</a>) by Raymond Camden
		posted on 6/14/2016 at 2:24 PM
		</div>
		<div class="comment_text"><p>Ok, when you use Firebug and look at the Console, do you see an error?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730118088">
	<div>
		<img src="https://disqus.com/api/users/avatars/andreafilloramo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730118088">25</a> (In reply to <a href="#c_2730115503">#24</a>) by Andrea Filloramo
		posted on 6/14/2016 at 2:26 PM
		</div>
		<div class="comment_text"><p>{"error":{"errors":[{"domain":"global","reason":"insufficientPermissions","message":"User does not have<br> sufficient permissions for this profile."}],"code":403,"message":"User does not have sufficient permissions<br> for this profile."}}<br>--------------------------------<br>"NetworkError: 403 Forbidden - <a href="https://disq.us/url?url=https%3A%2F%2Fcontent.googleapis.com%2Fanalytics%2Fv3%2Fdata%2Fga%3Fstart-date%3D30daysAgo%26end-date%3Dyesterday%26dimensions%3Dga%253Adate%26metrics%3Dga%253Asessions%26ids%3Dga%253A31405%26output%3DdataTable%26_src%3Dembed-api%253Av1%3AJnV-c523AUCEdU_slbJaK9Awu9Q&amp;cuid=3321886" rel="nofollow noopener" title="https://content.googleapis.com/analytics/v3/data/ga?start-date=30daysAgo&amp;end-date=yesterday&amp;dimensions=ga%3Adate&amp;metrics=ga%3Asessions&amp;ids=ga%3A31405&amp;output=dataTable&amp;_src=embed-api%3Av1">https://content.googleapis....</a>"<br>[object Object]<br><a href="https://disq.us/url?url=https%3A%2F%2Fapis.google.com%2F_%2Fscs%2Fapps-static%2F_%2Fjs%2Fk%3Doz.gapi.it.SJjeuYRsjhw.O%2Fm%3Danalytics%2Frt%3Dj%2Fsv%3D1%2Fd%3D1%2Fed%3D1%2Fam%3DAQ%2Frs%3DAGLTcCNyUUUcTHkgRqOFqg88pob6IvVomA%2Fcb%3Dgapi.loaded_0%3A9r7fvNU0vPUudvau-e8Q9irjuRU&amp;cuid=3321886" rel="nofollow noopener" title="https://apis.google.com/_/scs/apps-static/_/js/k=oz.gapi.it.SJjeuYRsjhw.O/m=analytics/rt=j/sv=1/d=1/ed=1/am=AQ/rs=AGLTcCNyUUUcTHkgRqOFqg88pob6IvVomA/cb=gapi.loaded_0">https://apis.google.com/_/s...</a><br>Line 596</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730124076">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730124076">26</a> (In reply to <a href="#c_2730118088">#25</a>) by Raymond Camden
		posted on 6/14/2016 at 2:29 PM
		</div>
		<div class="comment_text"><p>If you used my later demo where I hard coded the profile id, then it won't work for you. I mention this here, "In the DataChart embed, I hard code the ID for my property.", but maybe I didn't warn you enough to change it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730127244">
	<div>
		<img src="https://disqus.com/api/users/avatars/andreafilloramo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730127244">27</a> (In reply to <a href="#c_2730124076">#26</a>) by Andrea Filloramo
		posted on 6/14/2016 at 2:31 PM
		</div>
		<div class="comment_text"><p>So what should I change to make it work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730141455">
	<div>
		<img src="https://disqus.com/api/users/avatars/andreafilloramo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730141455">28</a> (In reply to <a href="#c_2730124076">#26</a>) by Andrea Filloramo
		posted on 6/14/2016 at 2:40 PM
		</div>
		<div class="comment_text"><p>So what should I change to make it work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730141727">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730141727">29</a> (In reply to <a href="#c_2730127244">#27</a>) by Raymond Camden
		posted on 6/14/2016 at 2:40 PM
		</div>
		<div class="comment_text"><p>I'm not talking about that.  I'm talking about the *property* ID:</p><p>ids': "ga:31405"</p><p>That's my property. So your basically trying to read my GA data, which is why it works for me, not you.</p><p>Please read this again carefully as I told you already what to change.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730142066">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730142066">30</a> (In reply to <a href="#c_2730141455">#28</a>) by Raymond Camden
		posted on 6/14/2016 at 2:40 PM
		</div>
		<div class="comment_text"><p>See my comment. I've told you what to change a few times now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730142987">
	<div>
		<img src="https://disqus.com/api/users/avatars/andreafilloramo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730142987">31</a> (In reply to <a href="#c_2730141727">#29</a>) by Andrea Filloramo
		posted on 6/14/2016 at 2:40 PM
		</div>
		<div class="comment_text"><p>ok thanks I try!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730146203">
	<div>
		<img src="https://disqus.com/api/users/avatars/andreafilloramo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730146203">32</a> (In reply to <a href="#c_2730141727">#29</a>) by Andrea Filloramo
		posted on 6/14/2016 at 2:42 PM
		</div>
		<div class="comment_text"><p>you know where I find my "ids"</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730150116">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730150116">33</a> (In reply to <a href="#c_2730146203">#32</a>) by Raymond Camden
		posted on 6/14/2016 at 2:44 PM
		</div>
		<div class="comment_text"><p>See this part from the first demo?</p><p>timeline.set(newIds).execute();</p><p>If you console.log(newIds) you'll see the ID of the selected property.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730163581">
	<div>
		<img src="https://disqus.com/api/users/avatars/andreafilloramo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730163581">34</a> (In reply to <a href="#c_2730150116">#33</a>) by Andrea Filloramo
		posted on 6/14/2016 at 2:52 PM
		</div>
		<div class="comment_text"><p>maybe I'm stupid but I do not understand what to do, I put up your first example that works</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730169111">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730169111">35</a> (In reply to <a href="#c_2730163581">#34</a>) by Raymond Camden
		posted on 6/14/2016 at 2:55 PM
		</div>
		<div class="comment_text"><p>You find that line I shared in the previous example. You paste in what I said above it. You reload the page and use the Firebug console and you will see it printed there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730330651">
	<div>
		<img src="https://disqus.com/api/users/avatars/andreafilloramo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730330651">36</a> (In reply to <a href="#c_2730169111">#35</a>) by Andrea Filloramo
		posted on 6/14/2016 at 4:08 PM
		</div>
		<div class="comment_text"><p>ok I did it! Thanks you've been a great help! I have so many sites you know how to do and see just a website?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730642827">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730642827">37</a> (In reply to <a href="#c_2730330651">#36</a>) by Raymond Camden
		posted on 6/14/2016 at 6:19 PM
		</div>
		<div class="comment_text"><p>If you are asking - how do I show data for just one site - that's literally what this blog post here demonstrates.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730647884">
	<div>
		<img src="https://disqus.com/api/users/avatars/andreafilloramo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730647884">38</a> (In reply to <a href="#c_2730642827">#37</a>) by Andrea Filloramo
		posted on 6/14/2016 at 6:21 PM
		</div>
		<div class="comment_text"><p>Exact! But I having more than one site he shows me the first, I how do I tell him to show me the site number 5?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730650984">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730650984">39</a> (In reply to <a href="#c_2730647884">#38</a>) by Raymond Camden
		posted on 6/14/2016 at 6:23 PM
		</div>
		<div class="comment_text"><p>I'm not quite sure I understand. I think you want a Property, which is one site, and my code demonstrates how to do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730660359">
	<div>
		<img src="https://disqus.com/api/users/avatars/andreafilloramo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730660359">40</a> (In reply to <a href="#c_2730650984">#39</a>) by Andrea Filloramo
		posted on 6/14/2016 at 6:26 PM
		</div>
		<div class="comment_text"><p>So I do not understand, I always see the first property, how do I only see the second property? Thanks for your patience</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730665353">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730665353">41</a> (In reply to <a href="#c_2730660359">#40</a>) by Raymond Camden
		posted on 6/14/2016 at 6:27 PM
		</div>
		<div class="comment_text"><p>You're kidding, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730672224">
	<div>
		<img src="https://disqus.com/api/users/avatars/andreafilloramo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730672224">42</a> (In reply to <a href="#c_2730665353">#41</a>) by Andrea Filloramo
		posted on 6/14/2016 at 6:31 PM
		</div>
		<div class="comment_text"><p>Forgive are not very practical, I'm not kidding, I'm trying, and I may not have your expertise.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730674190">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730674190">43</a> (In reply to <a href="#c_2730672224">#42</a>) by Raymond Camden
		posted on 6/14/2016 at 6:32 PM
		</div>
		<div class="comment_text"><p>You're last comment wasn't even English though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730675278">
	<div>
		<img src="https://disqus.com/api/users/avatars/andreafilloramo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730675278">44</a> (In reply to <a href="#c_2730674190">#43</a>) by Andrea Filloramo
		posted on 6/14/2016 at 6:33 PM
		</div>
		<div class="comment_text"><p>or corrected</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730690173">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730690173">45</a> (In reply to <a href="#c_2730660359">#40</a>) by Raymond Camden
		posted on 6/14/2016 at 6:40 PM
		</div>
		<div class="comment_text"><p>Remember when I said to add the console line so it would print the property id? If you still have that, and select the second property, it would show you the ID.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2730705361">
	<div>
		<img src="https://disqus.com/api/users/avatars/andreafilloramo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2730705361">46</a> (In reply to <a href="#c_2730690173">#45</a>) by Andrea Filloramo
		posted on 6/14/2016 at 6:46 PM
		</div>
		<div class="comment_text"><p>ok because that's what I did, or rather I could not understand, now I understand! Thanks again for your patience! ;o)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2756896788">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_s2gBnmyHwU.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2756896788">47</a> by Axel Arnold Bangert
		posted on 6/29/2016 at 4:18 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>the google auth_button is free stylable, though this is not allowed by google - see <a href="https://disq.us/url?url=https%3A%2F%2Fdevelopers.google.com%2F%2B%2Fbranding-guidelines%23google-interactive-post-branding-guidelines%3Ak-3AsXVl4cdkLYNOnTxoc4EbKt4&amp;cuid=3321886" rel="nofollow noopener" title="https://developers.google.com/+/branding-guidelines#google-interactive-post-branding-guidelines">https://developers.google.c...</a> . Google has a lot of policies, which handle their branding even a special button policy: <a href="https://disq.us/url?url=https%3A%2F%2Fdevelopers.google.com%2F%2B%2Fweb%2Fbuttons-policy%3AZ7xpeY_tycwe_k2l7j4e0F3pSIg&amp;cuid=3321886" rel="nofollow noopener" title="https://developers.google.com/+/web/buttons-policy">https://developers.google.c...</a> .</p><p>You can do it for example like that - it produces the button "Access Google Analytics" - as shown in the reply - added pic1.<br>&lt;/script&gt;<br>&lt;style&gt;<br>.gapi-analytics-auth-styles-signinbutton-image { background-image:none !important; border-right:#ffffff solid 0px !important; width:0px !important;  }<br>.gapi-analytics-auth-styles-signinbutton-buttonText {color: #6484A4; font-family:Arial !important; vertical-align:middle !important; line-height:11px !important; font-weight:normal !important; font-size:11px !important; width:130px !important; height:20px !important; padding-left:0px !important; padding-right:0px !important; }<br>.gapi-analytics-auth-styles-signinbutton{background-color: #D9DEE6 !important;  border:#6484A4 solid 1px !important; width:130px !important; height:20px !important;}<br>.gapi-analytics-auth-styles-signinbutton:hover{background-color: #ffffff !important; border-bottom: #485871 solid 1px !important}<br>&lt;/style&gt;<br>&lt;/head&gt;</p><p>Best regards<br>Axel Arnold Bangert - Herzogenrath 2016</p></div>
	</div>
</div>
		
<div class="comment" id="c_2757742799">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2757742799">48</a> (In reply to <a href="#c_2756896788">#47</a>) by Raymond Camden
		posted on 6/30/2016 at 1:08 AM
		</div>
		<div class="comment_text"><p>I didn't -  maybe it was a misclick. I got a minor spam attack this morning.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2757743311">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2757743311">49</a> (In reply to <a href="#c_2757742799">#48</a>) by Raymond Camden
		posted on 6/30/2016 at 1:09 AM
		</div>
		<div class="comment_text"><p>I mean - I must have - but it wasn't on purpose.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2758253645">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_s2gBnmyHwU.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2758253645">50</a> (In reply to <a href="#c_2757743311">#49</a>) by Axel Arnold Bangert
		posted on 6/30/2016 at 10:30 AM
		</div>
		<div class="comment_text"><p>No problem - you published fine articles<br>Best<br>Axel</p></div>
	</div>
</div>
		
<div class="comment" id="c_2758257736">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_s2gBnmyHwU.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2758257736">51</a> (In reply to <a href="#c_2756896788">#47</a>) by Axel Arnold Bangert
		posted on 6/30/2016 at 10:35 AM
		</div>
		<div class="comment_text"><p>pic1:<br><a href="https://uploads.disquscdn.com/images/1c487e5d430635b1ec8a16ad1dde44c0524dbd3a6372f7942ef7961dcdff305c.jpg" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/1c487e5d430635b1ec8a16ad1dde44c0524dbd3a6372f7942ef7961dcdff305c.jpg">https://uploads.disquscdn.c...</a></p><p>If you want to see it online - it is here (I guess this will not be marked as spam :) )<br><a href="http://disq.us/url?url=http%3A%2F%2Fgimba.de%2FBangert%2520Aachen%2FBangert%2520Aachen.html%3AKnRztR1JaebT_QMOXDmeD50FqKA&amp;cuid=3321886" rel="nofollow noopener" title="http://gimba.de/Bangert%20Aachen/Bangert%20Aachen.html">http://gimba.de/Bangert%20A...</a> . This page is not indexed by google and I shall change the button to its original style, for the above button style is illegal :) - I don't like color missmatches :)</p><p>Best <br>Axel</p></div>
	</div>
</div>
		
<div class="comment" id="c_2758349944">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_s2gBnmyHwU.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2758349944">52</a> by Axel Arnold Bangert
		posted on 6/30/2016 at 12:03 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,<br>this had been my question (before spam blocking): " ... do you perhaps know, how this Charts are to be made accessible for anonymous internet users? You told about a server side API that enables that "...There is an API that can run entirely server side ...". Is it this one https://ga-dev-tools.appspot.c... ? If it is this one I guess I have to install Google API Client Library for Python too? ..."</p><p>First I installed Google API Client Library for Python. And I got the json file. I guess now this step is the next one? Can I achieve with that server side authorization anonymous access to the g-analytics charts, embedded in my page?</p><p># <a href="http://disq.us/url?url=http%3A%2F%2Fservice-account.py%3A8pvYRSIzTPm-NhYCBSe3-QvaBxE&amp;cuid=3321886" rel="nofollow noopener" title="service-account.py">service-account.py</a><br>from oauth2client.service_account import ServiceAccountCredentials<br># The scope for the OAuth2 request.<br>SCOPE = '<a href="https://disq.us/url?url=https%3A%2F%2Fwww.googleapis.com%2Fauth%2Fanalytics.readonly%27%3AAWokOnURnTz5WTwrWNbHyJS2crU&amp;cuid=3321886" rel="nofollow noopener" title="https://www.googleapis.com/auth/analytics.readonly'">https://www.googleapis.com/...</a><br># The location of the key file with the key data.<br>KEY_FILEPATH = 'path/to/json-key.json'<br># Defines a method to get an access token from the ServiceAccount object.<br>def get_access_token():<br>  return ServiceAccountCredentials.from_json_keyfile_name(<br>      KEY_FILEPATH, SCOPE).get_access_token().access_token</p><p>Best<br>Axel</p></div>
	</div>
</div>
		
<div class="comment" id="c_2801445394">
	<div>
		<img src="https://disqus.com/api/users/avatars/sedagrm.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2801445394">53</a> by Seda Görmüş
		posted on 7/25/2016 at 1:15 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, thank you for this article, very informative. I just need help with figuring out what the problem is in my web app that I'm trying to connect by using embed api. I passed the authentication process and I can see my account e-mail on the top, but there is no other info or any chart. I'm assuming only auth-button container works but view-selector and time-line is not. By the way, I used the exactly the same code in GA website and added my clientID. Here is the error shown in the console:</p><p>Object { error: Object } cb=gapi.loaded_0:604:203</p><p>uncaught exception: [object Object]</p><p>Appreciate your help to resolve this, thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_2801888575">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2801888575">54</a> by venkatesh
		posted on 7/25/2016 at 9:25 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, Thank you for this article. I tried it and working fine. But what is happening is it is working when i logged only. I google analytics credentials just like client id. I want to display data in my website for all users. Can you help me to solve this problem?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2802091729">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2802091729">55</a> (In reply to <a href="#c_2801445394">#53</a>) by Raymond Camden
		posted on 7/25/2016 at 12:51 PM
		</div>
		<div class="comment_text"><p>See if you can click to expand the object. Basically [object Object] means theres a more complex object behind it - we need to see the details. If this is online, I can possibly help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2802092630">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2802092630">56</a> (In reply to <a href="#c_2801888575">#54</a>) by Raymond Camden
		posted on 7/25/2016 at 12:52 PM
		</div>
		<div class="comment_text"><p>Not with *this* API. You would use the REST API to work with Google Analytics. You would need to Google for the docs for that - I don't have an example of that handy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2802211870">
	<div>
		<img src="https://disqus.com/api/users/avatars/sedagrm.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2802211870">57</a> (In reply to <a href="#c_2802091729">#55</a>) by Seda Görmüş
		posted on 7/25/2016 at 2:11 PM
		</div>
		<div class="comment_text"><p>Hi Raymond, thanks for the prompt reply. I actually solved it by enable'in API from my google analytics account, suprisingly it was that simple because after all the set up, i should have just clicked the ENABLE button on my api console. Now i'll work on some styling by css and d3.js. Thanks again</p></div>
	</div>
</div>
		
<div class="comment" id="c_2872927072">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_O8v0qUhr4w.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2872927072">58</a> by Tanner
		posted on 9/2/2016 at 1:54 PM
		</div>
		<div class="comment_text"><p>Hi, Raymond. Thanks for the post.</p><p>Could you share your api credentials (Authorized JavaScript origins, and Authorized redirect URIs)?</p><p>I've been playing around with the analytics API for quite some time, and for some reason your clientID (<a href="http://disq.us/url?url=http%3A%2F%2F818125206534-g1r0datdtu9serq2pf9cp5vkuih3h8pv.apps.googleusercontent.com%3AQE_YhmV26TzNbsl2ZLYuzoTym7Q&amp;cuid=3321886" rel="nofollow noopener" title="818125206534-g1r0datdtu9serq2pf9cp5vkuih3h8pv.apps.googleusercontent.com">818125206534-g1r0datdtu9ser...</a>) works. However, I cannot get mine to populate data after authenticating. I simply get a blank screen. I assume that this is from an error in my api credential configuration. I'm running from a localhost via XAMPP. Thoughts?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2872932115">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2872932115">59</a> (In reply to <a href="#c_2872927072">#58</a>) by Raymond Camden
		posted on 9/2/2016 at 1:57 PM
		</div>
		<div class="comment_text"><p>You mean my settings, not my actual credentials, right?</p><p>Also - what do see in console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2872938136">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_O8v0qUhr4w.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2872938136">60</a> (In reply to <a href="#c_2872932115">#59</a>) by Tanner
		posted on 9/2/2016 at 2:01 PM
		</div>
		<div class="comment_text"><p>Yeah, your settings.</p><p>To clarify: When I use your example clientID the program executes smoothly. However, when I use my generated one, I can authenticate and then I receive a blank screen.</p><p>Console reads: Failed to load resource: the server responded with a status of 403 ()<br>cb=gapi.loaded_0:604 Object_.nH @ cb=gapi.loaded_0:604</p></div>
	</div>
</div>
		
<div class="comment" id="c_2872941103">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2872941103">61</a> (In reply to <a href="#c_2872938136">#60</a>) by Raymond Camden
		posted on 9/2/2016 at 2:04 PM
		</div>
		<div class="comment_text"><p>Which one are you using? If you are using the one with the hard coded IDs then it shouldn't work for you:</p><p>'ids': "ga:31405"</p></div>
	</div>
</div>
		
<div class="comment" id="c_2872948171">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_O8v0qUhr4w.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2872948171">62</a> (In reply to <a href="#c_2872941103">#61</a>) by Tanner
		posted on 9/2/2016 at 2:09 PM
		</div>
		<div class="comment_text"><p>First off, thank you so much for the prompt replies and willingness to help.</p><p>I'm using the original example, which I believe does not use hardcoded ids.</p><p>viewSelector.on('change', function(ids) {<br>    var newIds = {<br>      query: {<br>        ids: ids</p></div>
	</div>
</div>
		
<div class="comment" id="c_2872967112">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2872967112">63</a> (In reply to <a href="#c_2872948171">#62</a>) by Raymond Camden
		posted on 9/2/2016 at 2:21 PM
		</div>
		<div class="comment_text"><p>Is this online where I can see?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2872974504">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_O8v0qUhr4w.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2872974504">64</a> (In reply to <a href="#c_2872967112">#63</a>) by Tanner
		posted on 9/2/2016 at 2:26 PM
		</div>
		<div class="comment_text"><p>No, I'm running a local server with XAMPP. Is there anything specific that you would like to see? I'd be happy to provide screenshots.</p><p>I believe the problem stems from my api credentials not being configured correctly. I say this because the code executes perfectly for the example clientID.</p><p>CLIENT_ID = '<a href="http://disq.us/url?url=http%3A%2F%2F818125206534-g1r0datdtu9serq2pf9cp5vkuih3h8pv.apps.googleusercontent.com%3AQE_YhmV26TzNbsl2ZLYuzoTym7Q&amp;cuid=3321886" rel="nofollow noopener" title="818125206534-g1r0datdtu9serq2pf9cp5vkuih3h8pv.apps.googleusercontent.com">818125206534-g1r0datdtu9ser...</a>'</p><p>However, when I use my clientID -- which I have set up through the Google API console, I receive a blank screen and the console error that I noted above.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2872985792">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2872985792">65</a> (In reply to <a href="#c_2872974504">#64</a>) by Raymond Camden
		posted on 9/2/2016 at 2:33 PM
		</div>
		<div class="comment_text"><p>I'm looking at my project now. I have analytics enabled for my project. I have an OAuth 2.0 client ID created. Ca n you verify you have done that too?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2872996239">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_O8v0qUhr4w.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2872996239">66</a> (In reply to <a href="#c_2872985792">#65</a>) by Tanner
		posted on 9/2/2016 at 2:40 PM
		</div>
		<div class="comment_text"><p>You're a lifesaver! I had my OAuth 2.0 established like a week ago. However, I did not know that I needed to enable analytics within the project as a whole. This is my first attempt at Google API development. Sincerely appreciate it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2873003278">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2873003278">67</a> (In reply to <a href="#c_2872996239">#66</a>) by Raymond Camden
		posted on 9/2/2016 at 2:44 PM
		</div>
		<div class="comment_text"><p>No worries. When you make millions with this, visit the wishlist and get me an XBox One. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2873010884">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_O8v0qUhr4w.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2873010884">68</a> (In reply to <a href="#c_2873003278">#67</a>) by Tanner
		posted on 9/2/2016 at 2:49 PM
		</div>
		<div class="comment_text"><p>You have my word: if I make a million, you'll get an xbone. Take care.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2885595152">
	<div>
		<img src="https://disqus.com/api/users/avatars/k793.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2885595152">69</a> (In reply to <a href="#c_2801888575">#54</a>) by k793
		posted on 9/10/2016 at 6:54 AM
		</div>
		<div class="comment_text"><p>hi, I have the same issue. Did you find any solution?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2886828249">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2886828249">70</a> (In reply to <a href="#c_2801888575">#54</a>) by Raymond Camden
		posted on 9/11/2016 at 12:30 AM
		</div>
		<div class="comment_text"><p>You can't do that with the embed API. They have a REST-based API you could use. You would need server-side software to do it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2893292646">
	<div>
		<img src="https://disqus.com/api/users/avatars/febriyantabidin.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2893292646">71</a> by Febriyant Abidin
		posted on 9/14/2016 at 6:23 AM
		</div>
		<div class="comment_text"><p>hi, how to get my client id ??<br>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_2893768955">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2893768955">72</a> (In reply to <a href="#c_2893292646">#71</a>) by Raymond Camden
		posted on 9/14/2016 at 2:29 PM
		</div>
		<div class="comment_text"><p>If you mean the main client id, you get that when you add the API in the Google portal. If you mean for a particular site, I explain how in the blog post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2898991272">
	<div>
		<img src="https://disqus.com/api/users/avatars/diwakar_kumar_jha.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2898991272">73</a> by Diwakar kumar jha
		posted on 9/16/2016 at 12:54 PM
		</div>
		<div class="comment_text"><p>Hi, Raymond. Thanks for the post.<br>I want to show GA data from other website on my website ,is that possible? , If yes what keys or things i need ?<br>Hope i would get my answer ..<br>Thanks,<br>Diwakar</p></div>
	</div>
</div>
		
<div class="comment" id="c_2899030791">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2899030791">74</a> (In reply to <a href="#c_2898991272">#73</a>) by Raymond Camden
		posted on 9/16/2016 at 1:23 PM
		</div>
		<div class="comment_text"><p>The Embed API allows you to access sites that you have access to. So if you have access to those other sites, it should just work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2899262111">
	<div>
		<img src="https://disqus.com/api/users/avatars/diwakar_kumar_jha.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2899262111">75</a> (In reply to <a href="#c_2899030791">#74</a>) by Diwakar kumar jha
		posted on 9/16/2016 at 3:34 PM
		</div>
		<div class="comment_text"><p>Thank you so much for your prompt reply,<br>In above sample code i don't know where i can link it to target website or how it can be done.<br>I will be great full if you can link some example .<br>Thanks Again..</p></div>
	</div>
</div>
		
<div class="comment" id="c_2899630501">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2899630501">76</a> (In reply to <a href="#c_2899262111">#75</a>) by Raymond Camden
		posted on 9/16/2016 at 5:20 PM
		</div>
		<div class="comment_text"><p>I don't understand what you are asking. The Embed API works with the sites that you have access to. It's basically using your account so its automatically going to select your sites.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2935907659">
	<div>
		<img src="https://disqus.com/api/users/avatars/conyli.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2935907659">77</a> by CoNy Li
		posted on 10/6/2016 at 8:41 AM
		</div>
		<div class="comment_text"><p>Hi Raymond... Im beginner in GA. I tried to embed GA into my website dashboard , its work already but something error in my Pie chart. I need to show 3 reports (Visit, Product Page, Services Page) but Product and Services data become 1 on 1 pie chart.. Your post is very helpful</p></div>
	</div>
</div>
		
<div class="comment" id="c_2936138496">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2936138496">78</a> (In reply to <a href="#c_2935907659">#77</a>) by Raymond Camden
		posted on 10/6/2016 at 1:01 PM
		</div>
		<div class="comment_text"><p>Glad it was helpful. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2936254307">
	<div>
		<img src="https://disqus.com/api/users/avatars/conyli.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2936254307">79</a> (In reply to <a href="#c_2936138496">#78</a>) by CoNy Li
		posted on 10/6/2016 at 2:20 PM
		</div>
		<div class="comment_text"><p>But theres still a problem to separate 2 data's in 1 chart, and i really dont know whats wrong with my code, i already check and searching on <a href="http://disq.us/url?url=http%3A%2F%2Fdevelopers.google.com%2Fanalytics%2Fdevguides%2Freporting%2Fembed%2Fv1%3AH6QM_P4OJVAnUD2V9iTnNVebBnY&amp;cuid=3321886" rel="nofollow noopener" title="developers.google.com/analytics/devguides/reporting/embed/v1">developers.google.com/analy...</a>, but i still dont get the solution. May you help me??? where i can send the code?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2936270936">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2936270936">80</a> (In reply to <a href="#c_2936254307">#79</a>) by Raymond Camden
		posted on 10/6/2016 at 2:30 PM
		</div>
		<div class="comment_text"><p>Ah sorry - I haven't used this in a while. This kind of help would need to be a paid engagement. I hope you understand.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3085791012">
	<div>
		<img src="https://disqus.com/api/users/avatars/bhavishapipaliya.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3085791012">81</a> by Bhavisha Pipaliya
		posted on 1/6/2017 at 1:09 PM
		</div>
		<div class="comment_text"><p>Hi..It's works. Any method for show only one time authorization user button in dashboard?<br>Thanks in advance :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3085989653">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3085989653">82</a> (In reply to <a href="#c_3085791012">#81</a>) by Raymond Camden
		posted on 1/6/2017 at 3:31 PM
		</div>
		<div class="comment_text"><p>The Auth is handled by Google, so they would decide how long to persist it. In my testing, it seemed to last quite a while, but I use my various Google services all day.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3119574870">
	<div>
		<img src="https://disqus.com/api/users/avatars/bhavishapipaliya.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3119574870">83</a> (In reply to <a href="#c_3085989653">#82</a>) by Bhavisha Pipaliya
		posted on 1/25/2017 at 5:59 PM
		</div>
		<div class="comment_text"><p>Found the Solution. Thanks :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3184005938">
	<div>
		<img src="https://disqus.com/api/users/avatars/susaanthijanagiri.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3184005938">84</a> by Susaanth Ijanagiri
		posted on 3/3/2017 at 5:49 AM
		</div>
		<div class="comment_text"><p><a href="https://uploads.disquscdn.com/images/8bae82122c3f864c1c322353b53bfa977261cc4d0fa257b9a6a80d950c6c7269.png" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/8bae82122c3f864c1c322353b53bfa977261cc4d0fa257b9a6a80d950c6c7269.png">https://uploads.disquscdn.c...</a> Hi, i am facing an issue, As I'm new to coding, i couldn't find out the issue. When i try the example above, i see a blank page with this message in the console</p><p>"Uncaught &gt;Object {error: "idpiframe_initialization_failed", details: "Not a valid origin for the client."}"</p></div>
	</div>
</div>
		
<div class="comment" id="c_3185593458">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3185593458">85</a> (In reply to <a href="#c_3184005938">#84</a>) by Raymond Camden
		posted on 3/4/2017 at 3:35 AM
		</div>
		<div class="comment_text"><p>Google makes you set up IP addresses that are valid to use the API with your keys. You'll need to handle that on the Google side.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3203221838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3203221838">86</a> (In reply to <a href="#c_3119574870">#83</a>) by Samuthi Shirad
		posted on 3/14/2017 at 7:00 AM
		</div>
		<div class="comment_text"><p>Please share solution. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3253751751">
	<div>
		<img src="https://disqus.com/api/users/avatars/lanreogun.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3253751751">87</a> (In reply to <a href="#c_3185593458">#85</a>) by Lanre Ogun
		posted on 4/13/2017 at 3:51 AM
		</div>
		<div class="comment_text"><p>is it at all possible to test on a local host?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3253775606">
	<div>
		<img src="https://disqus.com/api/users/avatars/lanreogun.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3253775606">88</a> by Lanre Ogun
		posted on 4/13/2017 at 4:21 AM
		</div>
		<div class="comment_text"><p>hi Ray,  <a href="https://uploads.disquscdn.com/images/397812f80dcd7a5bacd803186daff5972a54d993fb314272355b2fabb919b7b8.png" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/397812f80dcd7a5bacd803186daff5972a54d993fb314272355b2fabb919b7b8.png">https://uploads.disquscdn.c...</a> <br>i used your sample code and all i get is a blank screen. and the error i get is below.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3254236898">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3254236898">89</a> (In reply to <a href="#c_3253751751">#87</a>) by Raymond Camden
		posted on 4/13/2017 at 1:28 PM
		</div>
		<div class="comment_text"><p>Yep.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3254237384">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3254237384">90</a> (In reply to <a href="#c_3253775606">#88</a>) by Raymond Camden
		posted on 4/13/2017 at 1:28 PM
		</div>
		<div class="comment_text"><p>Are you testing from a file:// url or localhost?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3254371915">
	<div>
		<img src="https://disqus.com/api/users/avatars/lanreogun.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3254371915">91</a> (In reply to <a href="#c_3254237384">#90</a>) by Lanre Ogun
		posted on 4/13/2017 at 2:58 PM
		</div>
		<div class="comment_text"><p>right now im just testing from a file</p></div>
	</div>
</div>
		
<div class="comment" id="c_3254372959">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3254372959">92</a> (In reply to <a href="#c_3254371915">#91</a>) by Raymond Camden
		posted on 4/13/2017 at 2:59 PM
		</div>
		<div class="comment_text"><p>Don't. Ever. So many things don't work right. If you don't have a local web server, look at httpster as a quick and easy Node based web server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3254726025">
	<div>
		<img src="https://disqus.com/api/users/avatars/lanreogun.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3254726025">93</a> (In reply to <a href="#c_3254372959">#92</a>) by Lanre Ogun
		posted on 4/13/2017 at 6:33 PM
		</div>
		<div class="comment_text"><p>you are amazing "THANK YOU!!!!!" <br>i spent countless hours trying to figure it out</p></div>
	</div>
</div>
		
<div class="comment" id="c_3254735761">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3254735761">94</a> (In reply to <a href="#c_3254726025">#93</a>) by Raymond Camden
		posted on 4/13/2017 at 6:39 PM
		</div>
		<div class="comment_text"><p>It's ok - I'm going to blog on this tomorrow as a reminder.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3271170168">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_znXi2bM3Fp.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3271170168">95</a> by RAJAT
		posted on 4/24/2017 at 11:49 AM
		</div>
		<div class="comment_text"><p>you are amazing person and much Brilliant "THANK YOU SO MUCH REALLY THANKU!!!!!" <br>i spent MUCH hours.......... U R TOOO GREAT</p></div>
	</div>
</div>
		
<div class="comment" id="c_3271253695">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3271253695">96</a> (In reply to <a href="#c_3271170168">#95</a>) by Raymond Camden
		posted on 4/24/2017 at 1:00 PM
		</div>
		<div class="comment_text"><p>Glad you found it helpful!</p></div>
	</div>
</div>
		
<div class="comment" id="c_3281408518">
	<div>
		<img src="https://disqus.com/api/users/avatars/bhavishapipaliya.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3281408518">97</a> (In reply to <a href="#c_3203221838">#86</a>) by Bhavisha Pipaliya
		posted on 4/30/2017 at 6:48 AM
		</div>
		<div class="comment_text"><p>Store authorization value in php.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3281629611">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3281629611">98</a> (In reply to <a href="#c_3281408518">#97</a>) by Raymond Camden
		posted on 4/30/2017 at 12:39 PM
		</div>
		<div class="comment_text"><p>To be clear, imo, this is a mistake. If you want to do that, I'd use the regular REST API for GA versus this one, which is specifically meant for client-side apps only.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3281676162">
	<div>
		<img src="https://disqus.com/api/users/avatars/bhavishapipaliya.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3281676162">99</a> (In reply to <a href="#c_3281629611">#98</a>) by Bhavisha Pipaliya
		posted on 4/30/2017 at 1:29 PM
		</div>
		<div class="comment_text"><p>Thank you. I have a little bit knowledge so just try to play with code and found the solution as per my requirement. Your solution such a helpful for me.Thanks alot again for informed way of solution.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3286346370">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_bf65OpQfRe.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3286346370">100</a> by Rashmi
		posted on 5/3/2017 at 9:01 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I am new to Google analytics and trying to embed the GA reports on website. <br>Your blog is very usefull and I followed the steps given by you . I am facing an issue . I am running html on local webserver and getting the below error. I am using correct ID and the proper Client ID as well . please help.  <a href="https://uploads.disquscdn.com/images/7321261d7c3ddfb519af55a7590b93420c74f4d1ba19d2ead9e8b586e684295c.jpg" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/7321261d7c3ddfb519af55a7590b93420c74f4d1ba19d2ead9e8b586e684295c.jpg">https://uploads.disquscdn.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3286569921">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3286569921">101</a> (In reply to <a href="#c_3286346370">#100</a>) by Raymond Camden
		posted on 5/3/2017 at 1:03 PM
		</div>
		<div class="comment_text"><p>You have to enable localhost in the Google Dashboard for this API.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3287981566">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_bf65OpQfRe.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3287981566">102</a> (In reply to <a href="#c_3286569921">#101</a>) by Rashmi
		posted on 5/4/2017 at 6:09 AM
		</div>
		<div class="comment_text"><p>Thanks you Ray for quick reply, Now its working fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3291865050">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_bf65OpQfRe.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3291865050">103</a> by Rashmi
		posted on 5/6/2017 at 5:51 PM
		</div>
		<div class="comment_text"><p>Hi Ray, <br>I am able to embed GA in web app, your blog is very useful. Thanks for sharing the information.<br>I need to perform OAuth so that without logging into GA ,the data can be accessed. Now without logging into Google analytics its not possible to embed the GA report in web app. Please help me how to perform Oauth in web app using Embed API.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3292019937">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3292019937">104</a> (In reply to <a href="#c_3291865050">#103</a>) by Raymond Camden
		posted on 5/6/2017 at 7:37 PM
		</div>
		<div class="comment_text"><p>Google has a REST based API and you could use it to perform authentication behind the scenes, but you couldn't do this for OTHER users w/o them logging in _some_ way. If it was for your own properties, then you could. Also, all the "auto visuals" and stuff would have to be built by hand. You could get the same results, but it's going to be manual work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3294349739">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3294349739">105</a> (In reply to <a href="#c_3293996239">#0</a>) by Raymond Camden
		posted on 5/8/2017 at 11:42 AM
		</div>
		<div class="comment_text"><p>I honestly don't remember if I've blogged on it. Best I can suggest is Google's documentation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3333977610">
	<div>
		<img src="https://disqus.com/api/users/avatars/ahmedbhs.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3333977610">106</a> (In reply to <a href="#c_3286569921">#101</a>) by Ahmedbhs
		posted on 5/31/2017 at 7:55 PM
		</div>
		<div class="comment_text"><p>How to enable the localhost from dashbord , i didnt find that option..some help plz</p></div>
	</div>
</div>
		
<div class="comment" id="c_3333986554">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3333986554">107</a> (In reply to <a href="#c_3333977610">#106</a>) by Raymond Camden
		posted on 5/31/2017 at 8:00 PM
		</div>
		<div class="comment_text"><p>You should be able to add it as a referrer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3334416418">
	<div>
		<img src="https://disqus.com/api/users/avatars/ahmedbhs.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3334416418">108</a> (In reply to <a href="#c_3333986554">#107</a>) by Ahmedbhs
		posted on 6/1/2017 at 1:26 AM
		</div>
		<div class="comment_text"><p>sory didnt understand you , can you plz , explain more</p></div>
	</div>
</div>
		
<div class="comment" id="c_3334475919">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3334475919">109</a> (In reply to <a href="#c_3334416418">#108</a>) by Raymond Camden
		posted on 6/1/2017 at 2:20 AM
		</div>
		<div class="comment_text"><p>When you go to the Google Console to add support for the API, it should also have a place where you define the referrers. Ie, who can use your API (or where to be more precise). Look at the docs here: <a href="https://disq.us/url?url=https%3A%2F%2Fdevelopers.google.com%2Fanalytics%2Fdevguides%2Freporting%2Fembed%2Fv1%2Fgetting-started%3Aczdhi5eVgKg3MxsjBQqomrZAS_g&amp;cuid=3321886" rel="nofollow noopener" title="https://developers.google.com/analytics/devguides/reporting/embed/v1/getting-started">https://developers.google.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3347975941">
	<div>
		<img src="https://disqus.com/api/users/avatars/salesforceguru.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3347975941">110</a> by Salesforce Guru
		posted on 6/8/2017 at 8:13 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I am not able to get GA dashboard through this upper given java script.</p><p>you have mentioned two thing client id and GA id but i already have these two things.</p><p>Please help me out on this.</p><p>Thanks in advance,</p><p>Harshit garg</p></div>
	</div>
</div>
		
<div class="comment" id="c_3348266639">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3348266639">111</a> (In reply to <a href="#c_3347975941">#110</a>) by Raymond Camden
		posted on 6/8/2017 at 1:12 PM
		</div>
		<div class="comment_text"><p>What error do you see in your browser console?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3354699495">
	<div>
		<img src="https://disqus.com/api/users/avatars/salesforceguru.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3354699495">112</a> (In reply to <a href="#c_3348266639">#111</a>) by Salesforce Guru
		posted on 6/12/2017 at 6:25 AM
		</div>
		<div class="comment_text"><p>Acutely I am not getting any error but when i have passed client id and ga id but when i am running that code it is not giving any output.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3354699798">
	<div>
		<img src="https://disqus.com/api/users/avatars/salesforceguru.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3354699798">113</a> (In reply to <a href="#c_3354699495">#112</a>) by Salesforce Guru
		posted on 6/12/2017 at 6:25 AM
		</div>
		<div class="comment_text"><p>Please help me out on this..it is urgent</p></div>
	</div>
</div>
		
<div class="comment" id="c_3355230660">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3355230660">114</a> (In reply to <a href="#c_3354699798">#113</a>) by Raymond Camden
		posted on 6/12/2017 at 3:04 PM
		</div>
		<div class="comment_text"><p>To be clear, I do not provide urgent support for free, especially on the weekends. If you want critical support, you can contact me directly about a paid engagement.</p><p>Now - with that being said, what do you see in the console? Are you sure you saw nothing in devtools?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3362706549">
	<div>
		<img src="https://disqus.com/api/users/avatars/priyanshubisht.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3362706549">115</a> by Priyanshu Bisht
		posted on 6/15/2017 at 7:24 AM
		</div>
		<div class="comment_text"><p>i am just getting message : "You are logged in as: ***********@gmail.com"..<br>NO charts are showing</p></div>
	</div>
</div>
		
<div class="comment" id="c_3363228954">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3363228954">116</a> (In reply to <a href="#c_3362706549">#115</a>) by Raymond Camden
		posted on 6/15/2017 at 12:26 PM
		</div>
		<div class="comment_text"><p>Ok - the You are logged in thing is *expected* - no charts though could be a bug. What do you see in DevTools?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3390943136">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3390943136">117</a> by Bad atCoding
		posted on 6/29/2017 at 4:29 AM
		</div>
		<div class="comment_text"><p>I'm coding an admin panel dashboard on my website and when I clear my cache I'm presented with 'access google analytics' and have to login to my google account again. Can I make it so it auto authenticates any administrator accounts on the site so they don't have to login to google at all?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3391343658">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3391343658">118</a> (In reply to <a href="#c_3390943136">#117</a>) by Raymond Camden
		posted on 6/29/2017 at 12:45 PM
		</div>
		<div class="comment_text"><p>If by 'cache' you also meant cookies, then I'd say not. Google has a REST based API for GA that you could use instead. It isn't as simple of course.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3467803593">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3467803593">119</a> (In reply to <a href="#c_3467568958">#0</a>) by Raymond Camden
		posted on 8/14/2017 at 7:28 PM
		</div>
		<div class="comment_text"><p>What line is that and can I see it online myself?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3531237286">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_BTTWrUKfJG.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3531237286">120</a> by Chris Diesel
		posted on 9/23/2017 at 7:15 AM
		</div>
		<div class="comment_text"><p>When execute above code this errors comes  : uncaught exception: [object Object]<br>Please help me out on this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3531436290">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3531436290">121</a> (In reply to <a href="#c_3531237286">#120</a>) by Raymond Camden
		posted on 9/23/2017 at 12:28 PM
		</div>
		<div class="comment_text"><p>Check the console for the full error. It should give you more details then that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3540299991">
	<div>
		<img src="https://disqus.com/api/users/avatars/torsteinskarsgard.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3540299991">122</a> by Torstein Skarsgard
		posted on 9/28/2017 at 10:16 AM
		</div>
		<div class="comment_text"><p>How will the 'chart' part look like if you are using the Analytics Reporting API v4?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3540468141">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3540468141">123</a> (In reply to <a href="#c_3540299991">#122</a>) by Raymond Camden
		posted on 9/28/2017 at 1:00 PM
		</div>
		<div class="comment_text"><p>I don't know - haven't tried yet. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3658412438">
	<div>
		<img src="https://disqus.com/api/users/avatars/lightlinksolutions.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3658412438">124</a> by Light Link Solutions
		posted on 12/12/2017 at 10:00 AM
		</div>
		<div class="comment_text"><p>i took your code and made one change(i set client id) but when i am run this code it does't show any things? what should i do?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3658700126">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3658700126">125</a> (In reply to <a href="#c_3658412438">#124</a>) by Raymond Camden
		posted on 12/12/2017 at 2:45 PM
		</div>
		<div class="comment_text"><p>What does the browser console show?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3764747815">
	<div>
		<img src="https://disqus.com/api/users/avatars/aridenparrochia.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3764747815">126</a> (In reply to <a href="#c_3531237286">#120</a>) by Ariden Parrochia
		posted on 2/18/2018 at 7:49 PM
		</div>
		<div class="comment_text"><p>+1</p></div>
	</div>
</div>
		
<div class="comment" id="c_3765824174">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3765824174">127</a> (In reply to <a href="#c_3764747815">#126</a>) by Raymond Camden
		posted on 2/19/2018 at 3:27 PM
		</div>
		<div class="comment_text"><p>As I said to Chris, check your console for the full error. If this is online, share the URL and I can take a look.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4192658392">
	<div>
		<img src="https://disqus.com/api/users/avatars/GaLnGaL.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4192658392">128</a> by Gal&Gal
		posted on 11/13/2018 at 12:09 PM
		</div>
		<div class="comment_text"><p>thank you very much!</p><p>If anyone gets an error, FYI the message will most likely contain a-lot of information about whats wrong</p></div>
	</div>
</div>
		
<div class="comment" id="c_4410605881">
	<div>
		<img src="https://disqus.com/api/users/avatars/anotherscreensaver.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4410605881">129</a> by StarMessage screensaver
		posted on 4/5/2019 at 12:19 PM
		</div>
		<div class="comment_text"><p>'dimensions': 'ga:date',<br>What should we put in the dimensions if we want to see the timeline "per month", instead of "per day" ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4410673308">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4410673308">130</a> (In reply to <a href="#c_4410605881">#129</a>) by Raymond Camden
		posted on 4/5/2019 at 1:22 PM
		</div>
		<div class="comment_text"><p>It's been a few years since I've worked on this, so the best I can suggest is what I'd do - check the docs. :) Please comment back if you find it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4410796124">
	<div>
		<img src="https://disqus.com/api/users/avatars/anotherscreensaver.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4410796124">131</a> (In reply to <a href="#c_4410673308">#130</a>) by StarMessage screensaver
		posted on 4/5/2019 at 2:55 PM
		</div>
		<div class="comment_text"><p>yes, after your reply it was easy to find it.</p><p>The parameter is ga:yearMonth<br>The list of other dimensions is at: <a href="https://disq.us/url?url=https%3A%2F%2Fdevelopers.google.com%2Fanalytics%2Fdevguides%2Freporting%2Fcore%2Fdimsmets%23view%3Ddetail%26group%3Dtime%26jump%3Dga_yearmonth%3Amhwbmu8DGlgby2CSc36Mi_ru7WU&amp;cuid=3321886" rel="nofollow noopener" title="https://developers.google.com/analytics/devguides/reporting/core/dimsmets#view=detail&amp;group=time&amp;jump=ga_yearmonth">https://developers.google.c...</a><br>My idea is to build a set of pre-configured GA reports to be used for the reporting of usage statistics of the SoftMeter library ( <a href="https://disq.us/url?url=https%3A%2F%2Fwww.starmessagesoftware.com%2Fsoftmeter%2Fapplication-analytics-report-templates%3AdqFI16PfUT0jzumwF1nbtHzzFZk&amp;cuid=3321886" rel="nofollow noopener" title="https://www.starmessagesoftware.com/softmeter/application-analytics-report-templates">https://www.starmessagesoft...</a> )</p></div>
	</div>
</div>
		
<div class="comment" id="c_4410797920">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4410797920">132</a> (In reply to <a href="#c_4410796124">#131</a>) by Raymond Camden
		posted on 4/5/2019 at 2:56 PM
		</div>
		<div class="comment_text"><p>Cool glad you got it! :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4551435194">
	<div>
		<img src="https://disqus.com/api/users/avatars/pavansubhakar.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4551435194">133</a> by Pavan Subhakar
		posted on 7/24/2019 at 9:14 AM
		</div>
		<div class="comment_text"><p>If I don't login the first time I navigate to this page and then move to some other page and navigate back to this page, none of the containers are visible in this page</p></div>
	</div>
</div>
		
<div class="comment" id="c_4551644125">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4551644125">134</a> (In reply to <a href="#c_4551435194">#133</a>) by Raymond Camden
		posted on 7/24/2019 at 1:27 PM
		</div>
		<div class="comment_text"><p>I guess try reloading then? This was just a simple demo and the assumption was that you wouldn't do stuff like that. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_4652988869">
	<div>
		<img src="https://disqus.com/api/users/avatars/chetan_mv.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4652988869">135</a> by chetan mv
		posted on 10/15/2019 at 11:57 AM
		</div>
		<div class="comment_text"><p>how to make google signin session for multiple page <br>am getting this error<br>cb=gapi.loaded_0:117 Uncaught TypeError: Cannot read property 'style' of null</p></div>
	</div>
</div>
		
<div class="comment" id="c_4653094274">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4653094274">136</a> (In reply to <a href="#c_4652988869">#135</a>) by Raymond Camden
		posted on 10/15/2019 at 1:44 PM
		</div>
		<div class="comment_text"><p>You would need to use the embed twice I suppose.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4766180450">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_rvP4PYB8yM.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4766180450">137</a> by Siddharth S
		posted on 1/22/2020 at 6:22 AM
		</div>
		<div class="comment_text"><p>Hello,<br>Is it possible to add the code in iframe?<br>If possible , how to do so?</p><p>Thank you,<br>Siddarth S</p></div>
	</div>
</div>
		
<div class="comment" id="c_4766646883">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4766646883">138</a> (In reply to <a href="#c_4766180450">#137</a>) by Raymond Camden
		posted on 1/22/2020 at 3:50 PM
		</div>
		<div class="comment_text"><p>Did you try it in an iframe? Let me know what you see.</p></div>
	</div>
</div>
		