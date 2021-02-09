
<div class="comment" id="c_1713658551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658551">1</a> by Tony Brandner
		posted on 10/25/2006 at 2:32 AM
		</div>
		<div class="comment_text"><p>Calling .NET functionality remotely from a CF unix server? Sweet!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658552">2</a> by Charlie Gaddy
		posted on 10/25/2006 at 2:58 AM
		</div>
		<div class="comment_text"><p>ColdFusion .NET Integration</p><p>    * Equal adoption of J2EE and .Net in marketplace.<br>    * In CF7 - use Webservices to communicate with .net components.<br>    * MSIL - intermediate lang. like class file in Java<br>    * CLR is JVM - memory, threads, etc.<br>    * Assembly - Packaged form of class files - .dll or exe<br>    * Clobal assembly cache - All apps running on machine can access assembly cache<br>    * CF interop strategies<br>          o Web Services - Communicate using Soap XML packets<br>          o Messaging - JMS&lt; MQSeries - Event Gateways<br>          o COM - Create COM wrapper to .net assemply. Create Java proxy and invke from CF. Complex.<br>          o Runtime Unification (Scorpio) - Make .net components locally available. Invoke .net components from CFML. cfobject type=".net" class="" assembly="" name="" /&gt;. Provides tight coupling, granular control, performance, stateful, for use in internal enterprises.<br>          o Location independent, platform independent, hot deployment<br>    * mscorlib.dll assembly will always be included<br>    * assembly - list of dll/exes and/or proxy jars.<br>    * protocol - binary (default, better perf.) or http (can be used across firewall)<br>    * constructors - use init and pass constructor args<br>    * static method - no need to init() to call static method<br>    * Call methods on object just like any other<br>    * accessing public fields<br>    * Used to generate Word doc<br>    * Automatic conversion of primitive .net datatypes to cf java datatypes to .net<br>    * use javacast if required<br>    * datatype mapping</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658555">3</a> by Ryan Guill
		posted on 10/25/2006 at 4:15 AM
		</div>
		<div class="comment_text"><p>whoa wait a second, you mean we are going to be able to have runtime unification of .net objects on a separate server?? We can't even do that with cfc's....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658564">4</a> by Raymond Camden
		posted on 10/30/2006 at 7:59 PM
		</div>
		<div class="comment_text"><p>ryan: well you could via .net objects. Not quite as nice obviously.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658553">5</a> by Andy Burton
		posted on 2/6/2007 at 8:35 PM
		</div>
		<div class="comment_text"><p>I'm sorry I missed this session at the conference; I've been in the BD world of late, and am a bit behind the times on what Scorpio is bringing to the table.</p><p>Is their .NET integration something they're pulling off in a similar fashion as New Atlanta does (they recompiled their Java app server using J#)?  Or is Adobe using their existing Java-based engine and adding extensions to talk to .NET?</p><p>In other words... will they have separate ColdFusion/Java and ColdFusion/.NET products, or one product that does both?</p><p>Could I create a page that does something like:</p><p>&lt;cfobject type="java" name="jObj" ...&gt;<br>&lt;cfobject type=".net" name="nObj" ...&gt;<br>&lt;cfset myValue = jObj.getSomething() + nObj.getSomething()&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658558">6</a> by James Wood
		posted on 2/7/2008 at 11:18 PM
		</div>
		<div class="comment_text"><p>After a good amount of trial and error, we have been able to pull back data from a simple .NET class. The problem that we seem to be having is that unless the .NET connectionString is hardcoded into the class then it won’t work.</p><p>The .NET section of our company have already created a plethora of classes and inside these classes they are referencing the connectionString thus:</p><p>string connectionString = ConfigurationManager.AppSettings["sqlDatabaseServer"];</p><p>This, I am told, is the standard way that .NET works, by putting the string into the web.config file. This would seem to be akin to putting the datasource inside the Application.cfc.</p><p>So I suppose my question is twofold.</p><p>1. Is it possible to  use a connectionString that isn’t hardcoded into the class<br>2. If so, do we have to somehow instantiate the web.config from ColdFusion first.</p><p>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658556">7</a> by Rich Laird
		posted on 6/4/2008 at 9:29 PM
		</div>
		<div class="comment_text"><p>James Wood...</p><p>Yes, you can use a Connection String in a configuration file with the Cold Fusion 8 java bridge.  But it won't be a "web.config" because the bridge doesn't run in a ASP.NET process.  If your machine is set up like mine is (I just ran the Cold Fusion 8 installer with all the defaults), it is hosted by a service process.</p><p>On my machine, the config file for that process is C:\ColdFusion8\jnbridge\JNBDotNetSide.exe.config.  If you add the appSettings collection plus the add statement for the appSetting you are using with the connection string, I believe that will work.</p><p>What might be preferable (and I know will work because I tested it) is to follow the convention of using the connectionStrings collection instead of appSettings.  In the config file, it looks something like this...</p><p>&lt;connectionStrings&gt;<br>&lt;add name="SPIRE" connectionString="Password=xxxxxx;User ID=xxxxx;Data Source=SPRTEST"&gt;&lt;/add&gt;<br>&lt;/connectionStrings&gt;</p><p>With C# code, you access the connection string like this...</p><p>String cnn=ConfigurationManager.ConnectionStrings["SPIRE"].ToString();</p><p>As you may know, this statment requires 1) a "using" statement for the System.Configuration namespace and 2) that your assembly references System.Configuration.dll.</p><p>Best of luck,<br>Rich Laird</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658547">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658547">8</a> by Upendra Roul
		posted on 3/10/2011 at 12:15 PM
		</div>
		<div class="comment_text"><p>Hello All,<br>I am accessing .net web service from coldfusion but each time it is showing "Web service operation ... with parameters {} cannot be found".In my wsdl the argument type is complex to the specified function .<br>Please suggest ...</p><p>Thanks<br>Upendra</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658563">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658563">9</a> by Al
		posted on 2/7/2012 at 8:15 PM
		</div>
		<div class="comment_text"><p>I am struggling with the app.config file, similar to James Wood above. I have tried doing what Rich suggested however I must be doing it wrong. It isn't working.</p><p>I am using ColdFusion 9,0,1,274733<br>Somethings work kind of others not so much.</p><p>This part work and dumps out all the methods:<br>&lt;cfobject type = ".NET" name="objClient" class="CompanyInfo.Clients" assembly="E:\Websites\dotNet\Clients.dll,E:\Websites\dotNet\Geneology.dll,E:\Websites\dotNet\ClientsDL.dll,E:\Websites\dotNet\GeneologyDL.dll" protocol = "tcp" action = "create" secure = "false"&gt;</p><p>&lt;cfdump var="#objClient#"&gt;</p><p>However when I attempt to use a method like:</p><p>&lt;cfset fullClientName = objClient.Get_Clientname("21024641")&gt;</p><p>I get an error:</p><p>ClassName: 	objClient<br>Detail: 	The assembly that contains the class must be provided to the assembly attribute.<br>Message: 	Class objClient not found in the specified assembly list.</p><p>I am guessing that this is due to the app.config file not being part of what I am doing.  I have tried to put the lines below in the JNBDotNetSide.exe.config file in several different places. When I restart the CF .Net service I get errors saying that the dot net service isn't running or it has no positive effect on the error above.</p><p>&lt;connectionStrings&gt;<br>  &lt;add name="ClientSQLConnection" connectionString="Integrated Security=SSPI;Initial Catalog=ClientSQL;Data Source=SERVER5;Connect Timeout=0"/&gt;<br>  &lt;add name="FourthShiftConnection" connectionString="Integrated Security=SSPI;Initial Catalog=ClientSQL;Data Source=SERVER5;Connect Timeout=0"/&gt;    &lt;/connectionStrings&gt;</p><p>I think perhaps I am misunderstanding the statement above:"If you add the appSettings collection plus the add statement for the appSetting you are using with the connection string". Is that part of the JNBDotNetSide.exe.config file? Where would I put that? Is there an example of how it would be formatted?</p><p>Things like (&lt;cfobject type=".NET" name="variables.test" class="System.Net.Dns" action="create" /&gt;<br>&lt;cfset variables.hostName = variables.test.GetHostName() /&gt;<br>&lt;cfoutput&gt;&lt;p&gt; Hostname  #variables.hostName#&lt;/p&gt;&lt;/cfoutput&gt;) work great, No problem.</p><p>The dot net guys are telling me to build in C# and skip ColdFusion, I would like to avoid that. Thank you for any help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658562">10</a> by James Wood
		posted on 2/8/2012 at 8:50 PM
		</div>
		<div class="comment_text"><p>Hi Al</p><p>Have you tried putting the dll files in the same folder as the JNBDotNetSide.exe.config file. For us that was the ColdFusion9DotNetService folder (well actually we put then in a Bin folder in there to try to keep things tidy).<br>Then reference the dll in the config folder, thus</p><p>&lt;configuration&gt;<br>  &lt;configSections&gt;<br>	&lt;section name="ams" type="Name of classes"/&gt;<br>  &lt;/configSections&gt;<br>&lt;runtime&gt;<br>	&lt;assemblyBinding xmlns="urn:schemas-microsoft-com:asm.v1"&gt;<br>		&lt;probing privatePath="bin"/&gt;<br>	&lt;/assemblyBinding&gt;<br>&lt;/runtime&gt;<br>&lt;/configuration&gt;</p><p>This is how we got it to work for us.</p><p>Hope this helps</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658557">11</a> by Al
		posted on 2/9/2012 at 2:16 AM
		</div>
		<div class="comment_text"><p>I have now placed the dlls in a directory "C:\ColdFusion9\jnbridge\bin" The jnbridge directory is where our JNBDotNetSide.exe.config lives.</p><p>I have think I have added the configuration in the right places and restared CF. This is a cut and paste of the JNBDotNetSide.exe.config file:<br>&lt;?xml version="1.0" encoding="utf-8" ?&gt;<br>&lt;configuration&gt;<br>  &lt;configSections&gt;<br>	&lt;sectionGroup name="jnbridge"&gt;<br>		&lt;section name="dotNetToJavaConfig"<br>				type="System.Configuration.SingleTagSectionHandler"/&gt;<br>		&lt;section name="javaToDotNetConfig"<br>				type="System.Configuration.SingleTagSectionHandler"/&gt;<br>		&lt;section name="tcpNoDelay"<br>				type="System.Configuration.SingleTagSectionHandler"/&gt;<br>		&lt;section name="javaSideDeclarations"<br>				type="System.Configuration.NameValueSectionHandler"/&gt;<br>		&lt;section name="assemblyList"<br>				type="com.jnbridge.jnbcore.AssemblyListHandler, JNBShare"/&gt;<br>                &lt;!-- I added the objClient  Feb 22 2012 --&gt;<br>		&lt;section name="objClient" type="GeneologyDL, ClientDL, Geneology, Client"/&gt;		<br>    &lt;/sectionGroup&gt;	  <br>  &lt;/configSections&gt;<br>	&lt;!-- I added the runtime Feb 22 2012--&gt;<br>	&lt;runtime&gt;<br>	   &lt;assemblyBinding xmlns="urn:schemas-microsoft-com:asm.v1"&gt;<br>		  &lt;probing privatePath="bin"/&gt;<br>	   &lt;/assemblyBinding&gt;<br>	&lt;/runtime&gt;</p><p>  &lt;jnbridge&gt;<br>    &lt;dotNetToJavaConfig scheme="jtcp" host="localhost" port="6087"/&gt;<br>    &lt;javaToDotNetConfig scheme="jtcp" port="6088"/&gt;<br>    &lt;!-- optional list of .NET-side assemblies --&gt;<br>  &lt;/jnbridge&gt;<br>&lt;/configuration&gt;</p><p>Am I doing the "type" correctly? I am thinking it isn't because I am still getting "The assembly that contains the class must be provided to the assembly attribute."</p><p>Once they are in the JNBDotNetSide.exe.config correctly - how do I use them? Am I right thining I would use cfobject like this:<br>&lt;cfobject type = ".NET" name="objClient" class="Client.IBO"<br> assembly= "C:\ColdFusion9\jnbridge\bin\Client.dll,C:\ColdFusion9\jnbridge\bin\Geneology.dll,C:\ColdFusion9\jnbridge\bin\ClientDL.dll,C:\ColdFusion9\jnbridge\bin\GeneologyDL.dll" /&gt;</p><p>Client Name:#objClient.Get_ClientName("21024641")#</p><p>I really appreciate all of your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1957468083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1957468083">12</a> (In reply to <a href="#c_1713658556">#7</a>) by PizzaTheHutt
		posted on 4/10/2015 at 4:09 PM
		</div>
		<div class="comment_text"><p>7 years later, but a HUGE thank you to you for this!!</p></div>
	</div>
</div>
		