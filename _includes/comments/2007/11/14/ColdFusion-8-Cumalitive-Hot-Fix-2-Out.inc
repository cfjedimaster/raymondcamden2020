
<div class="comment" id="c_1713674335">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674335">1</a> by zac spitzer
		posted on 11/15/2007 at 9:16 AM
		</div>
		<div class="comment_text"><p>i wish they would solve some of the cf implementation issues affecting full use of the oracle thin JDBC client :(</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fzacster.blogspot.com%2F2007%2F11%2Fdid-adobe-cripple-oracle-thin-driver-in.html%3Atwh9ClB591yabRuhidF42UoNgY0&amp;cuid=3321886" rel="nofollow noopener" title="http://zacster.blogspot.com/2007/11/did-adobe-cripple-oracle-thin-driver-in.html">http://zacster.blogspot.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674329">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674329">2</a> by Jonas
		posted on 11/15/2007 at 4:29 PM
		</div>
		<div class="comment_text"><p>A silly question: How do I prevent OS X 10.4.11 Server from extracting the .jar file? When I double-click on the <a href="http://disq.us/url?url=http%3A%2F%2Fchf8000002.zip%3AvSezuzZ5atctaHSQJFcGtxWEAQM&amp;cuid=3321886" rel="nofollow noopener" title="chf8000002.zip">chf8000002.zip</a> file it shows the jar file for a split micro second and then I am left with a bunch of extracted folders and files...</p><p>via terminal I suppose, but how?<br>Thanks for any hint on this certainly BASIC issue... apologies, relatively new to OS X Server systems...  although I love it already :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674333">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674333">3</a> by Raymond Camden
		posted on 11/15/2007 at 5:35 PM
		</div>
		<div class="comment_text"><p>Odd. I've never seen that on my OSX machine. Instead of double clicking, right click, and see what your options are, and maybe try each one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674339">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674339">4</a> by Jonas
		posted on 11/15/2007 at 6:00 PM
		</div>
		<div class="comment_text"><p>Ok, found a solution so I'll share it in case anyone else has the same issue:</p><p>I downloaded a utility called JarInspector and was able to open the zip in that and "extract" (funny enough) the jar file so that the jar file remained untouched. And good to go.</p><p>Btw: Installing Mac OS X Server 10.4.11 Update (over 10.4.10) was smooth and the restart took no more than 3 minutes before everything was up and running again. Nice one. ColdFusion Stop and Start Service via CF8 Launcher (in the ColdFusion8 directory in Applications), took a mere minute as well.</p><p>About JarInspector: Written by Christoph Gerdes, Jar Inspector is available from www . codeland . org</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674342">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674342">5</a> by Will Belden
		posted on 11/15/2007 at 8:29 PM
		</div>
		<div class="comment_text"><p>Did anyone else get any errors when applying this?  I applied the HF2 to three machines. (Local, Dev, Production).</p><p>Local runs Apache on XP<br>Dev and Prod run IIS on Server 2003</p><p>My Production ran fine after the install and a reboot.<br>My Local and Dev boxes (Apache AND IIS) both get the following error:</p><p>Page Title: JRun Servlet Error<br>500</p><p>ROOT CAUSE: <br>java.lang.NoSuchMethodError: coldfusion.filter.FusionContext.isSecureJSON()Z<br>	at coldfusion.runtime.AppHelper.setApplicationDefaults(<a href="http://disq.us/url?url=http%3A%2F%2FAppHelper.java%3AetPLE6DcwM1Z_XJuVmeNa1Vjcnk&amp;cuid=3321886" rel="nofollow noopener" title="AppHelper.java">AppHelper.java</a>:387)<br>	at coldfusion.runtime.AppHelper.&lt;init&gt;(<a href="http://disq.us/url?url=http%3A%2F%2FAppHelper.java%3AetPLE6DcwM1Z_XJuVmeNa1Vjcnk&amp;cuid=3321886" rel="nofollow noopener" title="AppHelper.java">AppHelper.java</a>:89)<br>	at coldfusion.filter.ApplicationFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FApplicationFilter.java%3A_uYcV8J6FPZPo3khkIMmkViNQb8&amp;cuid=3321886" rel="nofollow noopener" title="ApplicationFilter.java">ApplicationFilter.java</a>:172)<br>	at coldfusion.filter.RequestMonitorFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FRequestMonitorFilter.java%3Am-PVS2bQzmXiERdT4dpdEijYL0M&amp;cuid=3321886" rel="nofollow noopener" title="RequestMonitorFilter.java">RequestMonitorFilter.java</a>:48)<br>	at coldfusion.filter.MonitoringFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FMonitoringFilter.java%3A5MrsV4xdu8Q39_rgQDy6Msv-pFU&amp;cuid=3321886" rel="nofollow noopener" title="MonitoringFilter.java">MonitoringFilter.java</a>:40)<br>	at coldfusion.filter.PathFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FPathFilter.java%3ASiwAy2pVu_YikdHxqFRltdPO5JY&amp;cuid=3321886" rel="nofollow noopener" title="PathFilter.java">PathFilter.java</a>:86)<br>	at coldfusion.filter.ExceptionFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FExceptionFilter.java%3AGDJhmJPm0y_uBv-bqMx5jgl7Wfo&amp;cuid=3321886" rel="nofollow noopener" title="ExceptionFilter.java">ExceptionFilter.java</a>:70)<br>	at coldfusion.filter.ClientScopePersistenceFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FClientScopePersistenceFilter.java%3AmvDij2u_jq0YyaHGHDEWlaUqhBg&amp;cuid=3321886" rel="nofollow noopener" title="ClientScopePersistenceFilter.java">ClientScopePersistenceFilte...</a>:28)<br>	at coldfusion.filter.BrowserFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FBrowserFilter.java%3ALRSSTwI9Zda-lt7K56CFXKPwiwI&amp;cuid=3321886" rel="nofollow noopener" title="BrowserFilter.java">BrowserFilter.java</a>:38)<br>	at coldfusion.filter.NoCacheFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FNoCacheFilter.java%3ANNAZxE4DRGivTIp38pT6XUmuYbw&amp;cuid=3321886" rel="nofollow noopener" title="NoCacheFilter.java">NoCacheFilter.java</a>:46)<br>	at coldfusion.filter.GlobalsFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FGlobalsFilter.java%3AhfMTTeWk4FjivveGFnZ-xQC2tA0&amp;cuid=3321886" rel="nofollow noopener" title="GlobalsFilter.java">GlobalsFilter.java</a>:38)<br>	at coldfusion.filter.DatasourceFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FDatasourceFilter.java%3AdBTp_Dn8uwhG4HbdJILyOjSMWzo&amp;cuid=3321886" rel="nofollow noopener" title="DatasourceFilter.java">DatasourceFilter.java</a>:22)<br>	at coldfusion.CfmServlet.service(<a href="http://disq.us/url?url=http%3A%2F%2FCfmServlet.java%3ACNRAnHD9AZAKRfKi9S-TTmchW0o&amp;cuid=3321886" rel="nofollow noopener" title="CfmServlet.java">CfmServlet.java</a>:175)<br>	at coldfusion.bootstrap.BootstrapServlet.service(<a href="http://disq.us/url?url=http%3A%2F%2FBootstrapServlet.java%3AC_Di1359-66Rr5G-YwUHKgwpYvc&amp;cuid=3321886" rel="nofollow noopener" title="BootstrapServlet.java">BootstrapServlet.java</a>:89)<br>	at jrun.servlet.FilterChain.doFilter(<a href="http://disq.us/url?url=http%3A%2F%2FFilterChain.java%3AK89wONEWkmvkAWqPKJnyEKy4qOk&amp;cuid=3321886" rel="nofollow noopener" title="FilterChain.java">FilterChain.java</a>:86)<br>	at coldfusion.monitor.event.MonitoringServletFilter.doFilter(<a href="http://disq.us/url?url=http%3A%2F%2FMonitoringServletFilter.java%3AznjTcb1QXnOErl6h-zHPbRIc8dk&amp;cuid=3321886" rel="nofollow noopener" title="MonitoringServletFilter.java">MonitoringServletFilter.java</a>:42)<br>	at coldfusion.bootstrap.BootstrapFilter.doFilter(<a href="http://disq.us/url?url=http%3A%2F%2FBootstrapFilter.java%3AF8X3r-ExKrYCy0lpXnRpVyn_NVI&amp;cuid=3321886" rel="nofollow noopener" title="BootstrapFilter.java">BootstrapFilter.java</a>:46)<br>	at jrun.servlet.FilterChain.doFilter(<a href="http://disq.us/url?url=http%3A%2F%2FFilterChain.java%3AK89wONEWkmvkAWqPKJnyEKy4qOk&amp;cuid=3321886" rel="nofollow noopener" title="FilterChain.java">FilterChain.java</a>:94)<br>	at jrun.servlet.FilterChain.service(<a href="http://disq.us/url?url=http%3A%2F%2FFilterChain.java%3AK89wONEWkmvkAWqPKJnyEKy4qOk&amp;cuid=3321886" rel="nofollow noopener" title="FilterChain.java">FilterChain.java</a>:101)<br>	at jrun.servlet.ServletInvoker.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FServletInvoker.java%3AWxOzawUvKZJB9kS5XOoorL2yX3s&amp;cuid=3321886" rel="nofollow noopener" title="ServletInvoker.java">ServletInvoker.java</a>:106)<br>	at jrun.servlet.JRunInvokerChain.invokeNext(<a href="http://disq.us/url?url=http%3A%2F%2FJRunInvokerChain.java%3Aybw530_08PBL3Sono6xDFjG-Elk&amp;cuid=3321886" rel="nofollow noopener" title="JRunInvokerChain.java">JRunInvokerChain.java</a>:42)<br>	at jrun.servlet.JRunRequestDispatcher.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FJRunRequestDispatcher.java%3AWllPdjm93OkIhSIiiiBNbVX2-34&amp;cuid=3321886" rel="nofollow noopener" title="JRunRequestDispatcher.java">JRunRequestDispatcher.java</a>:286)<br>	at jrun.servlet.ServletEngineService.dispatch(<a href="http://disq.us/url?url=http%3A%2F%2FServletEngineService.java%3AHsEoWUtNpXCfeciYTvR4_RuyAy0&amp;cuid=3321886" rel="nofollow noopener" title="ServletEngineService.java">ServletEngineService.java</a>:543)<br>	at jrun.servlet.jrpp.JRunProxyService.invokeRunnable(<a href="http://disq.us/url?url=http%3A%2F%2FJRunProxyService.java%3AJh09tfXl6nORJ3je-iWvWS-e0V4&amp;cuid=3321886" rel="nofollow noopener" title="JRunProxyService.java">JRunProxyService.java</a>:203)<br>	at jrunx.scheduler.ThreadPool$ThreadThrottle.invokeRunnable(<a href="http://disq.us/url?url=http%3A%2F%2FThreadPool.java%3Ahc6WKqUxMUCr_gEH8EdNRpt9k1A&amp;cuid=3321886" rel="nofollow noopener" title="ThreadPool.java">ThreadPool.java</a>:428)<br>	at <a href="http://disq.us/url?url=http%3A%2F%2Fjrunx.scheduler.WorkerThread.run%3AvDoH1GOo1BhwjzOH_vLZbAxp58Y&amp;cuid=3321886" rel="nofollow noopener" title="jrunx.scheduler.WorkerThread.run">jrunx.scheduler.WorkerThrea...</a>(<a href="http://disq.us/url?url=http%3A%2F%2FWorkerThread.java%3AekX9_yAmKfo5Vo6v0rI1FdKPk1Q&amp;cuid=3321886" rel="nofollow noopener" title="WorkerThread.java">WorkerThread.java</a>:66)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674343">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674343">6</a> by Will B.
		posted on 11/15/2007 at 8:33 PM
		</div>
		<div class="comment_text"><p>Based on that error output, it looks like there might be a type somewhere in the new files?</p><p>Note the "Z" at the end of that first line:<br>java.lang.NoSuchMethodError: coldfusion.filter.FusionContext.isSecureJSON()Z</p><p>Seems a bit odd, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674345">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674345">7</a> by Will B.
		posted on 11/15/2007 at 9:16 PM
		</div>
		<div class="comment_text"><p>Quick solution.  Remove the HF.  Find the c*2.jar file in your Jrun folder, move it out.  (Don't try to rename it like I did, it'll still run.)</p><p>Thanks to Ray (via the #ColdFusion Dalnet IRC channel.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674351">8</a> by Geoff
		posted on 11/16/2007 at 12:34 AM
		</div>
		<div class="comment_text"><p>Adobe still hasn't updated this page which is supposed to tell you which version you're running...:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fkb.adobe.com%2Fselfservice%2FviewContent.do%3FexternalId%3Dtn_18515%26sliceId%3D2%3AeabsXVov5gki342VBbOqyovAtNU&amp;cuid=3321886" rel="nofollow noopener" title="http://kb.adobe.com/selfservice/viewContent.do?externalId=tn_18515&amp;sliceId=2">http://kb.adobe.com/selfser...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713674348">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713674348">9</a> by Jonas
		posted on 12/6/2007 at 3:52 PM
		</div>
		<div class="comment_text"><p>Hi all, another question - it seems that when I log out the current user on Mac OS X 10.4.11, then the coldfusion server stops - can I prevent this somehow, as in to allow for user switching(different administrators working on it, whilst CF continues to do its thing, just like Apache..? guess I should have ticked a box somewhere during installation...</p></div>
	</div>
</div>
		