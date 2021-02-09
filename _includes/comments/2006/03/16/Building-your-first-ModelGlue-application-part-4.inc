
<div class="comment" id="c_1713650906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650906">1</a> by Critter
		posted on 3/17/2006 at 8:35 AM
		</div>
		<div class="comment_text"><p>oi mate,</p><p>just curious... do you have planned out how many parts there will be?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650914">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650914">2</a> by Raymond Camden
		posted on 3/17/2006 at 8:44 AM
		</div>
		<div class="comment_text"><p>Nah, I'm totally playing this by ear. My "vague" idea for the next few parts are:</p><p>Register support<br>Gallery support<br>Image support<br>(At this point you cna upload photos into galleries, so it's mostly done)<br>Password feature for your galleries so you can share them publicly.<br>Wrap up and stuff I'd change.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650900">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650900">3</a> by Critter
		posted on 3/17/2006 at 8:59 AM
		</div>
		<div class="comment_text"><p>Cool an da' gang!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650913">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650913">4</a> by Critter
		posted on 3/17/2006 at 9:06 AM
		</div>
		<div class="comment_text"><p>Just noticed, you link to: <a href="http://disq.us/url?url=http%3A%2F%2Fpg.camdenfamily.com%2F%3AOoPO4E4DUkulGDcFFYlLUr73yKw&amp;cuid=3321886" rel="nofollow noopener" title="http://pg.camdenfamily.com/">http://pg.camdenfamily.com/</a> rather than <a href="http://disq.us/url?url=http%3A%2F%2Fpg1.camdenfamily.com%2F%3AaihEk9Yub1-plEjOWJvQKdVE02k&amp;cuid=3321886" rel="nofollow noopener" title="http://pg1.camdenfamily.com/">http://pg1.camdenfamily.com/</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650911">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650911">5</a> by Raymond Camden
		posted on 3/17/2006 at 4:46 PM
		</div>
		<div class="comment_text"><p>Fixed. Thanks. Normally I wouldn't bother much with small issues (well, a broken url isnt small), but I want these to be as perfect as possible. I'll be packaging them up into one zip with PDFs + code all together.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650915">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650915">6</a> by Rick
		posted on 3/17/2006 at 11:28 PM
		</div>
		<div class="comment_text"><p>Tha pacing is great.  They are just the right length to be a small thing I can work on each day without disrupting my daily workload.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650908">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650908">7</a> by Tim Forcelle
		posted on 3/20/2006 at 9:39 PM
		</div>
		<div class="comment_text"><p>Trying to get the application to run and I am encountering the following:</p><p> Could not find the ColdFusion Component model.userGateway.</p><p>Without going line by line in code, where is the best location to troubleshoot these types of errors?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650912">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650912">8</a> by Raymond Camden
		posted on 3/20/2006 at 9:41 PM
		</div>
		<div class="comment_text"><p>Tim, is your code running from web root? Is model directly under web root? Do you have a / mapping? (If so, remove it.)</p><p>FYI, for those waiting, part 5 is about half way done. Going to publish it tomorrow morning.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650916">9</a> by Tim Forcelle
		posted on 3/20/2006 at 9:48 PM
		</div>
		<div class="comment_text"><p>Directory structure: \Inetpub\wwwroot\PhotoGallery and then I have \Inetpub\wwwroot\ModelGlue and then mapped accordingly.  So you are saying that I have to move the ModelGlue directory under my PhotoGallery folder?  Also is this necessary for the applications to work; what I mean is do the ModelGlue framework files have to be located under each project (MyProject/ModelGlue, NewProject/ModelGlue) because Model-Glue doesn't support the mapping?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650918">10</a> by Raymond Camden
		posted on 3/20/2006 at 10:20 PM
		</div>
		<div class="comment_text"><p>I'd keep ModelGlue where it is, but PhotoGallery needs to be moved to web root. If yu have other stuff there, you should use a virtual server so it is "alone" at root.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650920">11</a> by theinternot
		posted on 3/23/2006 at 2:27 AM
		</div>
		<div class="comment_text"><p>How come you didn't use a IoC and use a config bean for the dsn instead of place in the configuration settings in ModelGlue.xml? It's essentially the same thing and could be swapped out, just wondering why you chose this way instead.  Wouldn't it be better to encapsulate that kind of information and you could generate different connections settings on the fly without ever have to touch your main configs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650921">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650921">12</a> by theinternot
		posted on 3/23/2006 at 2:28 AM
		</div>
		<div class="comment_text"><p>BTW, this tutorial is helping me tremendously.  Thanks, so much!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650919">13</a> by Raymond Camden
		posted on 3/23/2006 at 2:51 AM
		</div>
		<div class="comment_text"><p>theinternot - I'm just trying to keep things simple. I'm planning a post on the end to talka bout stuff I'd do different.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650922">14</a> by Jim
		posted on 10/17/2006 at 9:46 PM
		</div>
		<div class="comment_text"><p>Just to follow up on Tim Forcelle's issue - I had the same thing - I had the ModelGlue directory in the correct location (sample applications worked fine_ - but had my application in a virtual directory so I need to add that:</p><p>createObject("component", "myDirectory.model.userGateway")</p><p>Hope that helps someone else - this is a great tutorial.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650923">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650923">15</a> by Phillip Senn
		posted on 5/11/2007 at 11:27 PM
		</div>
		<div class="comment_text"><p>I see you have "variables.userDAO".</p><p>1. Is variables.userDAO an object?<br>2. Wou8ld it be too zealous to call it "variables.objUserDAO"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650924">16</a> by Raymond Camden
		posted on 5/12/2007 at 12:22 AM
		</div>
		<div class="comment_text"><p>1) yes.</p><p>2) If you want. When it comes to variable naming, I have two rules.</p><p>First, make it obvious what is it. Ie, don't use "x", but "numberOfHits". (I only use x for loop iterators.)</p><p>Second - be consistent.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650904">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650904">17</a> by Joe
		posted on 3/23/2009 at 11:19 PM
		</div>
		<div class="comment_text"><p>The snippet below appears to be out of date with the new model glue specification.  Where does the application startup code belong now?</p><p>&lt;cffunction name="Init" access="Public" returnType="Controller" output="false" hint="I build a new SampleController"&gt;<br>&lt;cfargument name="ModelGlue" required="true" type="ModelGlue.ModelGlue" /&gt;<br>&lt;cfargument name="InstanceName" required="true" type="string" /&gt;<br>&lt;cfset super.Init(arguments.ModelGlue) /&gt;</p><p>   &lt;!--- Controllers are in the application scope: Put any application startup code here. ---&gt;<br>   &lt;cfset variables.userGateway = createObject("component", "model.userGateway").init(getModelGlue().getConfigSetting("dsn"))&gt;<br>   &lt;cfset variables.userDAO = createObject("component", "model.userDAO").init(getModelGlue().getConfigSetting("dsn"))&gt;</p><p>&lt;cfreturn this /&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650907">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650907">18</a> by Raymond Camden
		posted on 3/23/2009 at 11:23 PM
		</div>
		<div class="comment_text"><p>You _can_ still use Init() with controllers. But it is probably best to use ColdSpring to inject the values you want into the controller.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650905">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650905">19</a> by Joe
		posted on 3/24/2009 at 2:25 AM
		</div>
		<div class="comment_text"><p>First, what a fabulous overview!</p><p>Thanks...I've been messing with this code for several hours and I've got it to work, but I'm not sure how!</p><p>What process invokes the Init() method of the controller?</p><p>I hardcoded the DSN value :( because I can't figure out how to encapsulate the DSN value as a session wide variable.  I found some articles that try to explain it how to specify a bean in ColdSpring and then somehow pass the parameter as an argument but I haven't got it to work yet.</p><p>Sill plugging away ...will not stop until the DSN is done correctly.</p><p>Joe</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650910">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650910">20</a> by Raymond Camden
		posted on 3/24/2009 at 6:25 AM
		</div>
		<div class="comment_text"><p>Model-GLue will automatically create and run the init methods.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650903">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650903">21</a> by Joe
		posted on 3/24/2009 at 7:13 AM
		</div>
		<div class="comment_text"><p>Thanks for all your help.</p><p>The init method you outline works fine with a hardcoded dsn or with a session variable, but if I use this</p><p>getModelGlue().getConfigSetting("dsn")</p><p>I get the error:</p><p>Model-Glue: Config setting "dsn" is not defined</p><p>I've been trying to resolve this for about 6 hours, I think it's time for a break.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713650909">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713650909">22</a> by Joe
		posted on 3/24/2009 at 7:27 AM
		</div>
		<div class="comment_text"><p>Got it...<br>Add this to ColdSpring.xml</p><p>	&lt;bean id="DataConfiguration" class="ModelGlue.Bean.CommonBeans.SimpleConfig"&gt;<br>		&lt;property name="config"&gt;<br>		&lt;!-- In Coldspring, a "map" represents a struct --&gt;<br>			&lt;map&gt;<br>				&lt;entry key="DSN"&gt;<br>					&lt;value&gt;Logon&lt;/value&gt;<br>				&lt;/entry&gt;</p><p>				&lt;entry key="username"&gt;<br>					&lt;value&gt;Username&lt;/value&gt;<br>				&lt;/entry&gt;</p><p>				&lt;entry key="password"&gt;<br>					&lt;value&gt;Password&lt;/value&gt;<br>				&lt;/entry&gt;<br>			&lt;/map&gt;<br>		&lt;/property&gt;<br>	&lt;/bean&gt;</p><p>Then just change the init parameter to</p><p>getModelGlue().getBean("DataConfiguration").getConfigSetting("Dsn")</p><p>		 &lt;cfset variables.SecurityUserGateway = createObject("component", "Logon.model.data.Gateway.SecurityuserGateway").init(getModelGlue().getBean("DataConfiguration").getConfigSetting("Dsn"))&gt;<br>  		 &lt;cfset variables.SecurityUserDAO = createObject("component", "Logon.model.data.dao.SecurityUserDao").init(getModelGlue().getBean("DataConfiguration").getConfigSetting("Dsn"))&gt;</p></div>
	</div>
</div>
		