
<div class="comment" id="c_1713616089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616089">1</a> by Steven Erat
		posted on 9/8/2004 at 8:51 PM
		</div>
		<div class="comment_text"><p>The error appears to be the result of a handled exception in CFIDE\administrator\security\cfadminpassword.cfm, lines 66-78.  You could remove the try/catch to get the actual error and stack trace.  Otherwise, I haven't run across this before.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616090">2</a> by Joseph Lamoree
		posted on 9/12/2004 at 6:10 AM
		</div>
		<div class="comment_text"><p>One of my installations has a similarly wacky CFMX Administrator password issue.</p><p>After updating with the most recent updater, I went to /CFIDE/administrator/ to check things out. Well, I couldn't remember my password 'cause I don't use this particular server often. Anyway, I edited the $CFMX_ROOT/lib/neo-security.xml file to switch admin.security.enabled to false. That let me in, and I went and changed the password.</p><p>So, after several attempts at restarting the coldfusionmx service and editing the neo-security.xml file, I couldn't find a way to cause CFMX to accept the password that I selected. Weird.</p><p>I ended up adding an Apache directive to deny everybody but me from getting in there. Not ideal, but it works.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616091">3</a> by Mark
		posted on 9/26/2005 at 6:13 AM
		</div>
		<div class="comment_text"><p>Same issue:</p><p> The error occurred in /www/virthosts/XYZ/www/XYZ/CFIDE/administrator/security/cfadminpassword.cfm: line 33</p><p>31 : 			if( isDefined("UseAdminPassword") and UseAdminPassword eq true)<br>32 : 			{<br>33 : 				request.security.setAdminSecurityEnabled(true);<br>34 : 			}else {<br>35 : 				request.security.setAdminSecurityEnabled(false);</p><p>Please try the following:</p><p>    * Check the ColdFusion documentation to verify that you are using the correct syntax.<br>    * Search the Knowledge Base to find a solution to your problem.</p><p>Browser   	Mozilla/5.0 (Windows; U; Windows NT 5.1; en-US; rv:1.7.12) Gecko/20050915 Firefox/1.0.7<br>Remote Address   	000.000.000.000<br>Referrer   	http://XYZ/CFIDE/administrator/security/cfadminpassword.cfm<br>Date/Time   	26-Sep-05 12:15 PM<br>Stack Trace<br>at cfcfadminpassword2ecfm986529078.runPage(/www/virthosts/XYZ/www/XYZ/CFIDE/administrator/security/cfadminpassword.cfm:33)</p><p>coldfusion.security.SecurityManager$UnauthenticatedCredentialsException<br>	at coldfusion.security.SecurityManager.authenticateAdmin(<a href="http://disq.us/url?url=http%3A%2F%2FSecurityManager.java%3AYxK-NP8Hhr8Y6AaEMBEGcxzqKd8&amp;cuid=3321886" rel="nofollow noopener" title="SecurityManager.java">SecurityManager.java</a>:659)<br>	at <a href="http://disq.us/url?url=http%3A%2F%2Fcoldfusion.security.SecurityManager.store%3AOMW8nDZ4Ng73RZOm5cGjz6e_czQ&amp;cuid=3321886" rel="nofollow noopener" title="coldfusion.security.SecurityManager.store">coldfusion.security.Securit...</a>(<a href="http://disq.us/url?url=http%3A%2F%2FSecurityManager.java%3AYxK-NP8Hhr8Y6AaEMBEGcxzqKd8&amp;cuid=3321886" rel="nofollow noopener" title="SecurityManager.java">SecurityManager.java</a>:386)<br>	at <a href="http://disq.us/url?url=http%3A%2F%2Fcoldfusion.server.jrun4.SecurityHelper.store%3ABZpqMp4tdjecFVj7jFOoLOMj2Mk&amp;cuid=3321886" rel="nofollow noopener" title="coldfusion.server.jrun4.SecurityHelper.store">coldfusion.server.jrun4.Sec...</a>(<a href="http://disq.us/url?url=http%3A%2F%2FSecurityHelper.java%3AGTjhWhvPNcWeenEAq5ySJm2ai2s&amp;cuid=3321886" rel="nofollow noopener" title="SecurityHelper.java">SecurityHelper.java</a>:33)<br>	at coldfusion.server.ServiceBase.mapModified(<a href="http://disq.us/url?url=http%3A%2F%2FServiceBase.java%3AajCQ383_Jv_v-mopzhO7ICqR0oE&amp;cuid=3321886" rel="nofollow noopener" title="ServiceBase.java">ServiceBase.java</a>:280)<br>	at coldfusion.server.ConfigMap.setChanged(<a href="http://disq.us/url?url=http%3A%2F%2FConfigMap.java%3Axl6GuQqXxQRD5zFu7_TVk9maRqA&amp;cuid=3321886" rel="nofollow noopener" title="ConfigMap.java">ConfigMap.java</a>:64)<br>	at coldfusion.server.ConfigMap.put(<a href="http://disq.us/url?url=http%3A%2F%2FConfigMap.java%3Axl6GuQqXxQRD5zFu7_TVk9maRqA&amp;cuid=3321886" rel="nofollow noopener" title="ConfigMap.java">ConfigMap.java</a>:238)<br>	at coldfusion.security.SecurityManager.setAdminSecurityEnabled(<a href="http://disq.us/url?url=http%3A%2F%2FSecurityManager.java%3AYxK-NP8Hhr8Y6AaEMBEGcxzqKd8&amp;cuid=3321886" rel="nofollow noopener" title="SecurityManager.java">SecurityManager.java</a>:160)<br>	at sun.reflect.NativeMethodAccessorImpl.invoke0(Native Method)<br>	at sun.reflect.NativeMethodAccessorImpl.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FNativeMethodAccessorImpl.java%3A7n4dTgA9H6EzRxeDovXL1msIRFA&amp;cuid=3321886" rel="nofollow noopener" title="NativeMethodAccessorImpl.java">NativeMethodAccessorImpl.java</a>:39)<br>	at sun.reflect.DelegatingMethodAccessorImpl.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FDelegatingMethodAccessorImpl.java%3AEQf2mrNus59DjXdTjhcWw9zPzv0&amp;cuid=3321886" rel="nofollow noopener" title="DelegatingMethodAccessorImpl.java">DelegatingMethodAccessorImp...</a>:25)<br>	at java.lang.reflect.Method.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FMethod.java%3A2DwozSqHhIisPUm3QTMzA_MP2bY&amp;cuid=3321886" rel="nofollow noopener" title="Method.java">Method.java</a>:324)<br>	at coldfusion.runtime.StructBean.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FStructBean.java%3AG7UcKwYvWrYbuqOsOvgA2fxDhrg&amp;cuid=3321886" rel="nofollow noopener" title="StructBean.java">StructBean.java</a>:351)<br>	at coldfusion.runtime.CfJspPage._invoke(<a href="http://disq.us/url?url=http%3A%2F%2FCfJspPage.java%3ADrFcmjVQk5qzfPgU8u4mJFJc9BM&amp;cuid=3321886" rel="nofollow noopener" title="CfJspPage.java">CfJspPage.java</a>:1650)<br>	at cfcfadminpassword2ecfm986529078.runPage(/www/virthosts/XYZ/www/XYZ/CFIDE/administrator/security/cfadminpassword.cfm:33)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616169">4</a> by Alin Winters
		posted on 12/28/2005 at 11:42 AM
		</div>
		<div class="comment_text"><p>Did you ever find a solution to this?</p></div>
	</div>
</div>
		