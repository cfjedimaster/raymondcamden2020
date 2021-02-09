
<div class="comment" id="c_1713616977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616977">1</a> by Eric Moritz
		posted on 2/8/2005 at 4:52 AM
		</div>
		<div class="comment_text"><p>Yeah, cfform is nice and all but to bad it invalidates our xhtml.  I made a quick and dirty fix for it though in the form of a custom tag:<br>--- start: xhtml_cfform.cfm ---<br>&amp;lt;cfif thistag.ExecutionMode is "end"&amp;gt;<br>&amp;lt;cfset form_xml = thistag.GeneratedContent&amp;gt;<br>&amp;lt;cfset thistag.GeneratedContent = ""&amp;gt;</p><p>&amp;lt;cfset dom = xmlparse("&amp;lt;cfform&amp;gt;" &amp;amp; form_xml &amp;amp; "&amp;lt;/cfform&amp;gt;")&amp;gt;<br>&amp;lt;cfset head = xmlsearch(dom,"/cfform/link | /cfform/script")&amp;gt;<br>&amp;lt;cfset cfform.head = ""&amp;gt;<br>&amp;lt;cfloop to="#ArrayLen(head)#" from="1" index="i"&amp;gt;<br>&amp;lt;cfset cfform.head = cfform.head &amp;amp; REReplace(toString(head[i]),"&amp;lt;\?xml.*?&amp;gt;","")&amp;gt;<br>&amp;lt;/cfloop&amp;gt;</p><p>&amp;lt;cfset body = xmlsearch(dom,"//div[@class='cfform']")&amp;gt;<br>&amp;lt;cfset cfform.body =""&amp;gt;<br>&amp;lt;cfloop to="#ArrayLen(body)#" from="1" index="i"&amp;gt;<br>&amp;lt;cfset cfform.body = cfform.body &amp;amp; REReplace(toString(body[i]),"&amp;lt;\?xml.*?&amp;gt;","")&amp;gt;<br>&amp;lt;/cfloop&amp;gt;</p><p>&amp;lt;cfset result = setVariable("caller.#attributes.return#",cfform)&amp;gt;<br>&amp;lt;/cfif&amp;gt;<br>--- end: xhtml_cfform.cfm ---</p><p>--- Usage ---<br>&amp;lt;cfsilent&amp;gt;<br>&amp;lt;cf_xhtml_cfform return="data"&amp;gt;<br>&amp;lt;cfform format="XML"&amp;gt;<br>        &amp;lt;cfinput name="name" label="Name"&amp;gt;<br>&amp;lt;/cfform&amp;gt;<br>&amp;lt;/cf_xhtml_cfform&amp;gt;<br>&amp;lt;/cfsilent&amp;gt;<br>&amp;lt;!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"<br>    "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fxhtml1%2FDTD%2Fxhtml1-transitional.dtd%3AlsD79NC9EpzB4LCkih033Se6Csw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">http://www.w3.org/TR/xhtml1...</a>"&amp;gt;<br>&amp;lt;html xmlns="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2F1999%2Fxhtml%3AA6NInarpbzWm6HKZDXlFrwZefzc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/1999/xhtml">http://www.w3.org/1999/xhtml</a>"&amp;gt;<br>&amp;lt;head&amp;gt;<br>&amp;lt;title&amp;gt;CFFORM XHTML test&amp;lt;/title&amp;gt;<br>&amp;lt;meta name="generator" content="HTML Tidy, see <a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%3Arpb9RrJ7_w35Dc82PV3hounnBU8&amp;cuid=3321886" rel="nofollow noopener" title="www.w3.org">www.w3.org</a>" /&amp;gt;<br>&amp;lt;cfoutput&amp;gt;#data.head#&amp;lt;/cfoutput&amp;gt;<br>&amp;lt;/head&amp;gt;<br>&amp;lt;body&amp;gt;<br>&amp;lt;cfoutput&amp;gt;#data.body#&amp;lt;/cfoutput&amp;gt;<br>&amp;lt;/body&amp;gt;<br>&amp;lt;/html&amp;gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616974">2</a> by Eric Moritz
		posted on 2/8/2005 at 4:53 AM
		</div>
		<div class="comment_text"><p>ah hell, that sucked... let's try that again...</p><p>--- start: xhtml_cfform.cfm --- &amp;amp;lt;cfif thistag.ExecutionMode is &amp;amp;quot;end&amp;amp;quot;&amp;amp;gt; &amp;amp;lt;cfset form_xml = thistag.GeneratedContent&amp;amp;gt; &amp;amp;lt;cfset thistag.GeneratedContent = &amp;amp;quot;&amp;amp;quot;&amp;amp;gt;</p><p>&amp;amp;lt;cfset dom = xmlparse(&amp;amp;quot;&amp;amp;lt;cfform&amp;amp;gt;&amp;amp;quot; &amp;amp;amp; form_xml &amp;amp;amp; &amp;amp;quot;&amp;amp;lt;/cfform&amp;amp;gt;&amp;amp;quot;)&amp;amp;gt; &amp;amp;lt;cfset head = xmlsearch(dom,&amp;amp;quot;/cfform/link | /cfform/script&amp;amp;quot;)&amp;amp;gt; &amp;amp;lt;cfset cfform.head = &amp;amp;quot;&amp;amp;quot;&amp;amp;gt; &amp;amp;lt;cfloop to=&amp;amp;quot;#ArrayLen(head)#&amp;amp;quot; from=&amp;amp;quot;1&amp;amp;quot; index=&amp;amp;quot;i&amp;amp;quot;&amp;amp;gt; &amp;amp;lt;cfset cfform.head = cfform.head &amp;amp;amp; REReplace(toString(head[i]),&amp;amp;quot;&amp;amp;lt;\?xml.*?&amp;amp;gt;&amp;amp;quot;,&amp;amp;quot;&amp;amp;quot;)&amp;amp;gt; &amp;amp;lt;/cfloop&amp;amp;gt;</p><p>&amp;amp;lt;cfset body = xmlsearch(dom,&amp;amp;quot;//div[@class='cfform']&amp;amp;quot;)&amp;amp;gt; &amp;amp;lt;cfset cfform.body =&amp;amp;quot;&amp;amp;quot;&amp;amp;gt; &amp;amp;lt;cfloop to=&amp;amp;quot;#ArrayLen(body)#&amp;amp;quot; from=&amp;amp;quot;1&amp;amp;quot; index=&amp;amp;quot;i&amp;amp;quot;&amp;amp;gt; &amp;amp;lt;cfset cfform.body = cfform.body &amp;amp;amp; REReplace(toString(body[i]),&amp;amp;quot;&amp;amp;lt;\?xml.*?&amp;amp;gt;&amp;amp;quot;,&amp;amp;quot;&amp;amp;quot;)&amp;amp;gt; &amp;amp;lt;/cfloop&amp;amp;gt;</p><p>&amp;amp;lt;cfset result = setVariable(&amp;amp;quot;caller.#attributes.return#&amp;amp;quot;,cfform)&amp;amp;gt; &amp;amp;lt;/cfif&amp;amp;gt; --- end: xhtml_cfform.cfm ---</p><p>--- Usage --- &amp;amp;lt;cfsilent&amp;amp;gt; &amp;amp;lt;cf_xhtml_cfform return=&amp;amp;quot;data&amp;amp;quot;&amp;amp;gt; &amp;amp;lt;cfform format=&amp;amp;quot;XML&amp;amp;quot;&amp;amp;gt; &amp;amp;lt;cfinput name=&amp;amp;quot;name&amp;amp;quot; label=&amp;amp;quot;Name&amp;amp;quot;&amp;amp;gt; &amp;amp;lt;/cfform&amp;amp;gt; &amp;amp;lt;/cf_xhtml_cfform&amp;amp;gt; &amp;amp;lt;/cfsilent&amp;amp;gt; &amp;amp;lt;!DOCTYPE html PUBLIC &amp;amp;quot;-//W3C//DTD XHTML 1.0 Transitional//EN&amp;amp;quot; &amp;amp;quot;<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fxhtml1%2FDTD%2Fxhtml1-transitional.dtd%26amp%3Bquot%3B%26amp%3Bgt%3B%3ALcnV54_l0d_XMNTiuaRs7ADrXN4&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd&amp;amp;quot;&amp;amp;gt;">http://www.w3.org/TR/xhtml1...</a> &amp;amp;lt;html xmlns=&amp;amp;quot;<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2F1999%2Fxhtml%26amp%3Bquot%3B%26amp%3Bgt%3B%3A12_k90FCbo160teg_rf5APw7n-M&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/1999/xhtml&amp;amp;quot;&amp;amp;gt;">http://www.w3.org/1999/xhtm...</a> &amp;amp;lt;head&amp;amp;gt; &amp;amp;lt;title&amp;amp;gt;CFFORM XHTML test&amp;amp;lt;/title&amp;amp;gt; &amp;amp;lt;meta name=&amp;amp;quot;generator&amp;amp;quot; content=&amp;amp;quot;HTML Tidy, see <a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%3Arpb9RrJ7_w35Dc82PV3hounnBU8&amp;cuid=3321886" rel="nofollow noopener" title="www.w3.org">www.w3.org</a>&amp;amp;quot; /&amp;amp;gt; &amp;amp;lt;cfoutput&amp;amp;gt;#data.head#&amp;amp;lt;/cfoutput&amp;amp;gt; &amp;amp;lt;/head&amp;amp;gt; &amp;amp;lt;body&amp;amp;gt; &amp;amp;lt;cfoutput&amp;amp;gt;#data.body#&amp;amp;lt;/cfoutput&amp;amp;gt; &amp;amp;lt;/body&amp;amp;gt; &amp;amp;lt;/html&amp;amp;gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616979">3</a> by Eric Moritz
		posted on 2/8/2005 at 4:54 AM
		</div>
		<div class="comment_text"><p>Oh well,... email me if you want to see that code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616978">4</a> by Neil
		posted on 2/19/2005 at 4:55 AM
		</div>
		<div class="comment_text"><p>Please help!  I am trying to make a flash form that has multiple submit buttons.  Depending on which button is pressed, it would change the cfform tag's "action" attribute.  For example, if you click on the "Users" submit, it would change the form's action to "users.cfm", and submit to that page.  If you click the "Administrators" submit, it would take you to "administrators.cfm".  Etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616981">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616981">5</a> by Neil
		posted on 2/19/2005 at 4:59 AM
		</div>
		<div class="comment_text"><p>Sorry that I didn't finish that last post.  Here is paragraph two:</p><p>I have tried using Actionscript, but am such a newbie that I am struggling to figure it out.</p><p>Here is what I have tried;</p><p>cfform name=user_form action=blah.cfm<br>  cfinput type=submit onclick="user_form.action='users.cfm'"<br>  cfinput type=submit onclick="user_form.action='admins.cfm'"</p><p>Thanks,</p><p>Neil</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616982">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616982">6</a> by Raymond Camden
		posted on 2/19/2005 at 5:00 AM
		</div>
		<div class="comment_text"><p>What you want may be possible - but there is a simpler way to do it. Make the form action go to itself. Make the buttons share the same name but have different value. So if the name was submit, you can say, if form.submit is x, cfinclude y, where y does the specific processing. You can also use cflocation - just be sure to store the form results in the session scope so you can still access them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616980">7</a> by Rixon Reed
		posted on 2/20/2005 at 11:37 PM
		</div>
		<div class="comment_text"><p>Raymond, Thanks for the description of how to use conditional AS2 statements with CF7 Flash Form bindings. That's just what I was looking for.</p><p>Have you been able to control the margins in cfformgroups? I'd like the margins to be 0 and thus the colors flush to their parent containers. Not sure why the following code doesn't work to achieve that result.</p><p>&amp;lt;cfform method="get" name="myform" preloader="no" format="flash" height="385" width="600" skin="halogreen" timeout="1000"&amp;gt;<br>	&amp;lt;cfformgroup type="panel" style="marginTop: 0; marginBottom: 0;fontSize:18; backgroundColor:##F7FFE8" height="375" visible="yes" enabled="yes" &amp;gt; &amp;lt;!--- Container Panel 1 ---&amp;gt;<br>		&amp;lt;cfformgroup type="page" label="Image" style="font-size:10; marginTop: 0; marginBottom: 0; marginLeft: 0; background-color: ##FF0000;" height="165"&amp;gt; &amp;lt;!--- Page 1 ---&amp;gt;<br>			&amp;lt;cfformgroup type="horizontal" visible="yes" enabled="yes" style="font-size:10; marginTop: 0; marginBottom: 0; marginLeft: 0;  background-color: ##FF9000;" height="140"  width="500"&amp;gt; &amp;lt;!--- Horizontal Container ---&amp;gt;<br>				&amp;lt;cfformgroup type="vertical" visible="yes" enabled="yes" width="150" height="132" style="font-size:10; marginTop: 0; marginLeft: 0; marginBottom: 0; background-color: ##FF8000;"&amp;gt; &amp;lt;!--- Vertical Left Pane ---&amp;gt;<br>&amp;lt;cfformitem type="html" visible="yes" enabled="yes"  width="130" height="130"  style="font-size:10; marginTop: 0; marginBottom: 0; marginLeft: 0;"&amp;gt; <br>&amp;lt;/cfformitem&amp;gt;<br>			&amp;lt;/cfformgroup&amp;gt; &amp;lt;!--- End Vertical Left Pane ---&amp;gt;</p><p>&amp;lt;!--- Begin Vertical Right Pane ---&amp;gt;		<br>&amp;lt;cfformgroup type="vertical" visible="yes" enabled="yes" height="90" width="300"&amp;gt;</p><p>						&amp;lt;cfformitem type="html" style="font-family : 'Verdana, Arial, Helvetica, sans-serif';text-align:left; font-size:10; font-weight:reg; leading:0; verticalGap:0" visible="yes" enabled="yes" name="email"&amp;gt;&amp;lt;/cfformitem&amp;gt;</p><p>			&amp;lt;/cfformgroup&amp;gt; &amp;lt;!--- End Vertical Right Pane ---&amp;gt;</p><p>			&amp;lt;/cfformgroup&amp;gt; &amp;lt;!--- End Horizontal Container ---&amp;gt;		<br>			&amp;lt;/cfformgroup&amp;gt; &amp;lt;!--- End Page ---&amp;gt;</p><p>			&amp;lt;!--- Begin Tab Container ---&amp;gt;<br>			&amp;lt;cfformgroup type="tabnavigator" height="195" style="marginTop: 0; marginBottom: 0;fontSize:11; backgroundColor:##F7FFE8"&amp;gt;<br>		&amp;lt;cfformgroup type="page" label="Tab" style="font-size:10; marginTop: 0; marginBottom: 0; marginBottom: 0;"&amp;gt;</p><p>		&amp;lt;/cfformgroup&amp;gt; &amp;lt;!--- End 1st tab page ---&amp;gt;</p><p>	&amp;lt;/cfformgroup&amp;gt; &amp;lt;!--- Page 1 ---&amp;gt;<br>&amp;lt;/cfformgroup&amp;gt; &amp;lt;!--- Panel 1 ---&amp;gt;<br>&amp;lt;/cfform&amp;gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616984">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616984">8</a> by Rixon Reed
		posted on 2/20/2005 at 11:43 PM
		</div>
		<div class="comment_text"><p>Also, is it possible to control the height of cfformitem input boxes? If I make the font-size smaller than 10, the text appears smaller when input, but the input box remains the same height. Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616985">9</a> by Raymond Camden
		posted on 2/22/2005 at 8:44 PM
		</div>
		<div class="comment_text"><p>Rixon - I'm pretty sure you can do all of this via CSS. The Flash Forms are -very- configurable using CSS. I don't know the exact settings though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616986">10</a> by mike hohnecker
		posted on 6/24/2005 at 3:59 AM
		</div>
		<div class="comment_text"><p>I have radio buttons in my form.  One of the radio buttons has to be selected for the bind to work.  Any suggestions.  No errors are displayed.  Just nothing appears till something is selected.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713616987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713616987">11</a> by eatmorepossum
		posted on 6/13/2006 at 10:32 PM
		</div>
		<div class="comment_text"><p>using this syntax doesnt seem to work.  When i write the following code, the flashform doesn't load:</p><p>&lt;code&gt;<br>&lt;cfformitem type="html" name="new" bind="{FirstName.text&gt;0?'yes'+FirstName.text}"&gt;&lt;/cfformitem&gt;<br>&lt;/code&gt;</p><p>Any ideas appreciated</p></div>
	</div>
</div>
		