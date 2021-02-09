
<div class="comment" id="c_1713662647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662647">1</a> by Mingo Hagen
		posted on 2/26/2007 at 6:53 PM
		</div>
		<div class="comment_text"><p>Hey Ray 'bizzybee' Camden,</p><p>Thanks for updating yet another cool app!<br>How big are the changes to the language, if i can take care of it with a basic replace, I don't think a tool for that is necessary.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662643">2</a> by Raymond Camden
		posted on 2/26/2007 at 7:20 PM
		</div>
		<div class="comment_text"><p>It is a simple text replacement. I don't have it in front of me right now, but it would be like [x] to [y]. If I _don't_ build a tool I'll at least document it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662648">3</a> by Andrea
		posted on 3/3/2007 at 2:37 AM
		</div>
		<div class="comment_text"><p>I am trying canvas wiki using ModelGlue but I get an error that I cannot undestand:</p><p> Could not find the ColdFusion Component ModelGlue.Core.XMLModelGlueLoader.<br>Please check that the given name is correct and that the component exists.</p><p>The error occurred in C:\CFusionMX7\wwwroot\canvaswiki\ModelGlue\ModelGlue.cfm: line 12</p><p>10 : 			&lt;cfset ModelGlue.configPath = expandPath(".") &amp; "/config/ModelGlue.xml"&gt;<br>11 : 			&lt;cfparam name="ModelGlue_CONFIG_PATH" type="string" default="#ModelGlue.configPath#" /&gt;<br>12 : 		  &lt;cfset application[ModelGlue_APP_KEY]= createObject("component", "ModelGlue.Core.XMLModelGlueLoader").init().createModelGlue(ModelGlue_CONFIG_PATH) /&gt;<br>13 : 		&lt;/cfif&gt;<br>14 : 	&lt;/cflock&gt;</p><p>The point is that the component is perfectly present in his root.</p><p>May you help me??</p><p>Thanks</p><p>Andrea</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662649">4</a> by Raymond Camden
		posted on 3/3/2007 at 2:55 AM
		</div>
		<div class="comment_text"><p>Hmm. Maybe make a cfmapping for Model-Glue? You aren't supposed to need one, but it could help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662654">5</a> by Prem Radhakrishnan
		posted on 3/5/2007 at 10:33 PM
		</div>
		<div class="comment_text"><p>I had to add a mapping to the website to make it work. This is mainly coz we have internal and external ips and multiple domains on the same ip using host headers in IIS. So even though it loaded internally I had to add the mappings to make it work externally. <br>I just finished getting everything up and running in the last  week , including changing the login function in the userRecord.cfc to do authentication from the database instead of hardcoded values. I got the authenticateUser code from Kurt Wiersma's Appbooster app, modified it , added it to the cfc and then modified the login function code.</p><p>here is the code for anyone who is interested. Sorry about the long comment with all the code. I was wondering if I wanted to set the dbname as a variable how would i do that? I am not extremely familiar with MG, I use Mach II.</p><p>It requires two tables in the db</p><p>user :: columns - firstname, lastname, userid (identity), usename, password, roleid  and optional (email)</p><p>roles :: columns - roleid(identity int), role(varchar10)<br>1 sysop<br>2 admin<br>3 user</p><p>&lt;cffunction name="authenticateUser" access="public" returntype="query" output="false"&gt;<br>	&lt;cfargument name="username" required="yes" type="string"&gt;<br>	&lt;cfargument name="password" required="yes" type="string"&gt;<br>	&lt;cfargument name="roleid" required="no" type="string" default=""&gt;<br>	&lt;cfset var qUsers = 0&gt;<br>	&lt;cfquery name="qUsers" datasource="CanvasWiki"&gt;<br>		SELECT u.userid, u.username, u.password, u.firstname, u.lastname, r.role<br>		FROM 	gp_users u<br>			left join gp_roles r on u.roleid = r.roleid<br>		WHERE (1 = 1)<br>		AND u.username = &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#arguments.username#"&gt;<br>		AND u.password = &lt;cfqueryparam cfsqltype="cf_sql_varchar" value="#arguments.password#"&gt;<br>		&lt;cfif arguments.roleid neq ""&gt;<br>			AND r.roleid = &lt;cfqueryparam cfsqltype="cf_sql_integer" value="#arguments.roleid#"&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfquery&gt;<br>	&lt;cfreturn qUsers&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cffunction name="login" access="public" hint="I log this user into the site" output="false" returntype="boolean"&gt;<br>	&lt;!--- make this do some type of real authentication if desired---&gt;<br>	&lt;!--- you can find the plain-text passwords that match these users in the load() function ---&gt;<br>	&lt;cfset qUser = authenticateUser(getUserName(), getPassword())&gt;<br>	&lt;cfif qUser.recordcount gt 0&gt;<br>		&lt;cfset setFirstName(qUser.firstName)&gt;<br>		&lt;cfset setLastName(qUser.lastName)&gt;<br>		&lt;cfset setUniqueId(qUser.userid)&gt;<br>		&lt;cfswitch expression="#qUser.role#"&gt;<br>			&lt;cfcase value="sysop"&gt;<br>				&lt;cfset setRoles("sysop,admin,user")&gt;<br>			&lt;/cfcase&gt;<br>			&lt;cfcase value="admin"&gt;<br>				&lt;cfset setRoles("admin,user")&gt;<br>			&lt;/cfcase&gt;<br>			&lt;cfcase value="user"&gt;<br>				&lt;cfset setRoles("user")&gt;<br>			&lt;/cfcase&gt;<br>			&lt;cfdefaultcase&gt;&lt;cfthrow message="Invalid User #qUser.role#123" &gt;&lt;/cfdefaultcase&gt;<br>		&lt;/cfswitch&gt;<br>		&lt;cfset setIsLoggedIn(true)&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;!--- Rays Code overridding with database authentication<br>	&lt;cfif <br>			(getUserName() eq "sysop") and (getPasswordHash() eq "D681B218E5F4D053D919DA015D41C85B209479FCFAD00D0E4D5EC87856C10409")<br>			OR<br>			(getUserName() eq "admin") and (getPasswordHash() eq "8C6976E5B5410415BDE908BD4DEE15DFB167A9C873FC4BB8A81F6F2AB448A918")<br>			OR<br>			(getUserName() eq "user") and (getPasswordHash() eq "04F8996DA763B7A969B1028EE3007569EAF3A635486DDAB211D512C85B9DF8FB")<br>			&gt;<br>		&lt;!--- load() to set all the values for the current user ---&gt;<br>		&lt;cfset load()&gt;<br>		&lt;cfset setIsLoggedIn(true)&gt;<br>	&lt;/cfif&gt;<br>	---&gt;<br>	&lt;!---<br>	&lt;cfoutput&gt;<br>		getUserName()=#getUserName()#&lt;br /&gt;<br>		getpasswordHash()=#getpasswordHash()#&lt;br /&gt;<br>		getIsLoggedIn()=#getIsLoggedIn()#&lt;br /&gt;<br>		#_toString()#<br>		&lt;!--- &lt;cfabort&gt; ---&gt;<br>	&lt;/cfoutput&gt;<br>	---&gt;<br>	&lt;cfreturn getIsLoggedIn() /&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662655">6</a> by Prem Radhakrishnan
		posted on 3/5/2007 at 10:38 PM
		</div>
		<div class="comment_text"><p>I forgot to ask a couple of questions</p><p>1. Is there documentation other than the install.pdf?<br>2. If not how do you add more categories?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662650">7</a> by Raymond Camden
		posted on 3/6/2007 at 1:24 AM
		</div>
		<div class="comment_text"><p>Prem, the docs haven't been completed yet, but as for categories, it is free form. If you mark a page as cat X, then you now have a cat X. (If I remember my own app right. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662651">8</a> by Prem Radhakrishnan
		posted on 3/6/2007 at 2:55 AM
		</div>
		<div class="comment_text"><p>It is adding the page in a new category if I put in a new category but the category is not showing up in the Categories List. <br>Bug maybe or am i doing something wrong</p><p>I added a new page with the content</p><p>Testing new categories addition [[Categories:Test Category]]</p><p>If I search for the page it comes up as</p><p>-----------------------------------------------------<br>Testing Categories</p><p>Testing new categories addition Categories:Test Category<br>--------------------------------------------------------</p><p>but if i look in category list theres still only</p><p>--------------------------------------------------------<br>Special: Categories</p><p>    * General<br>---------------------------------------------------------</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662656">9</a> by Raymond Camden
		posted on 3/6/2007 at 3:01 AM
		</div>
		<div class="comment_text"><p>Does it work if you put it on a line by itself, at the beginning of a line?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662657">10</a> by Prem
		posted on 3/6/2007 at 4:35 AM
		</div>
		<div class="comment_text"><p>This doesnt work either</p><p>[[Categories:Test2 Categories]] Testing categories again</p><p>Is this what you meant</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662652">11</a> by Raymond Camden
		posted on 3/6/2007 at 5:09 AM
		</div>
		<div class="comment_text"><p>No. Put the [[ stuff by ITSELF, on one line. No other text.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662660">12</a> by Prem
		posted on 3/6/2007 at 5:26 AM
		</div>
		<div class="comment_text"><p>I tried <br>1.Just putting categories</p><p>--------------<br>[[Categories:Test]]<br>---------------</p><p>2. in two lines with content</p><p>------------------<br>Test<br>[[Categories:Test]]<br>------------------</p><p>neither works</p><p>and its going into the orphaned pages</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662662">13</a> by Raymond Camden
		posted on 3/6/2007 at 7:23 AM
		</div>
		<div class="comment_text"><p>Ok - I can confirm this is broken. I'm looking into it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662661">14</a> by Raymond Camden
		posted on 3/6/2007 at 7:28 AM
		</div>
		<div class="comment_text"><p>Oh duh. It is category, not categories. :) I even READ my own doc and ignored it. Using category:x it worked just fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662658">15</a> by Prem Radhakrishnan
		posted on 3/6/2007 at 10:12 PM
		</div>
		<div class="comment_text"><p>I feel like homer simpson DOH!!!</p><p>Thanks Ray. I will share the site as soon as I get some stuff in there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662663">16</a> by doug sims
		posted on 3/14/2007 at 9:05 PM
		</div>
		<div class="comment_text"><p>Ray,<br>I had to fix some case inconsitancies in the factory.cfc to get it to work on my linux hosting @ HMS. Specifically you will have to exactly match the case of the references in the createObject calls to match the CFC filename case(or inject them using CS/MG2)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713662666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713662666">17</a> by David Lakein
		posted on 3/22/2007 at 11:35 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>About exporting (I just figured out), you can export a clean directory tree from a working copy, as well as from a repository location.</p><p>Using TortoiseSVN's context menu from the working folder, then export to some other new folder elsewhere, exporting unversioned files too.</p><p>Command line is "export PATH1 PATH2" instead of "export URL PATH"</p></div>
	</div>
</div>
		