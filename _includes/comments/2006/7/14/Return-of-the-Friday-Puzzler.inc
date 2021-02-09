
<div class="comment" id="c_1713655034">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655034">1</a> by George
		posted on 7/14/2006 at 7:07 PM
		</div>
		<div class="comment_text"><p>Some UDF like this?</p><p>&lt;cffunction name="remoteFunctionsForCFC" access="remote" returntype="array" hint="Returns an array of remote functions in the supplied CFC"&gt;<br>	&lt;cfargument name="cfc" type="any" required="yes" hint="Either an instance of a CFC or a dot delimited path to the CFC"/&gt;</p><p>	&lt;cfif issimplevalue(arguments.cfc)&gt;<br>		&lt;cfset cfcinstance = CreateObject("component",arguments.cfc) /&gt;<br>	&lt;cfelse&gt;<br>		&lt;cfset cfcinstance = arguments.cfc /&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;cfset cfcmd = getmetadata(cfcinstance) /&gt;<br>	&lt;cfset remotefunctions = arraynew(1) /&gt;<br>	&lt;cfloop index="i" from="1" to="#arraylen(cfcmd.functions)#"&gt;<br>		&lt;cfset functionmd = cfcmd.functions[i] /&gt;<br>		&lt;cfif functionmd.access eq "remote"&gt;<br>			&lt;cfset arrayappend(remotefunctions,functionmd) /&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfloop&gt;</p><p>	&lt;cfreturn remotefunctions /&gt;<br>&lt;/cffunction&gt;</p><p>And a simple table like this?</p><p>&lt;cfinvoke component="App.Components.remoteFunctionsForCFC" method="remoteFunctionsForCFC" returnvariable="rfunctions"&gt;<br>	&lt;cfinvokeargument name="cfc" value="Path.To.CFC"/&gt;<br>&lt;/cfinvoke&gt;</p><p>&lt;table&gt;<br>&lt;tr&gt;<br>&lt;th&gt;name&lt;/th&gt;<br>&lt;th&gt;return type&lt;/th&gt;<br>&lt;th&gt;hint&lt;/th&gt;<br>&lt;/tr&gt;<br>&lt;cfloop index="i" from="1" to="#arraylen(rfunctions)#"&gt;<br>	&lt;tr&gt;</p><p>	&lt;td&gt;&lt;cfoutput&gt;#rfunctions[i].name#&lt;/cfoutput&gt;&lt;/td&gt;<br>	&lt;td&gt;&lt;cfoutput&gt;#rfunctions[i].returntype#&lt;/cfoutput&gt;&lt;/td&gt;<br>	&lt;td&gt;&lt;cfif structkeyexists(rfunctions[i],"hint")&gt;&lt;cfoutput&gt;#rfunctions[i].hint#&lt;/cfoutput&gt;&lt;/cfif&gt;&lt;/td&gt;</p><p>	&lt;/tr&gt;<br>&lt;/cfloop&gt;<br>&lt;/table&gt;</p><p>Requires some form of exception handling when creating the CFC if you pass a string and not an instance.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655050">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655050">2</a> by Raymond Camden
		posted on 7/15/2006 at 12:49 AM
		</div>
		<div class="comment_text"><p>Looks good to me. Normally I get a lot more feedback from these puzzlers. I guess you win since you were the only one who responded. :)</p></div>
	</div>
</div>
		