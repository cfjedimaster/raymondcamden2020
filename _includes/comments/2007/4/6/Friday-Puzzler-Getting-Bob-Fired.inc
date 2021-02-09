
<div class="comment" id="c_1713663782">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663782">1</a> by Chad
		posted on 4/6/2007 at 5:44 PM
		</div>
		<div class="comment_text"><p>Here is a start.  I had to use the dreaded evalute() function.  Scary isn't it!!!</p><p>&lt;cfif isdefined("<a href="http://disq.us/url?url=http%3A%2F%2Fform.foo%3A9FYsWPiTxPoThxsdGmWRNLcJr8I&amp;cuid=3321886" rel="nofollow noopener" title="form.foo">form.foo</a>")&gt;</p><p>	&lt;cfoutput&gt;#evaluate("<a href="http://disq.us/url?url=http%3A%2F%2FFORM.foo%3AogDoBsxCajoUvZ31z0sc411IAOQ&amp;cuid=3321886" rel="nofollow noopener" title="FORM.foo">FORM.foo</a>")#&lt;/cfoutput&gt;</p><p>&lt;cfelse&gt;</p><p>	&lt;form method="post"&gt;<br>	&lt;input type="text" name="foo" /&gt;<br>	&lt;input type="submit" /&gt;<br>	&lt;/form&gt;</p><p>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663799">2</a> by Justice
		posted on 4/6/2007 at 5:51 PM
		</div>
		<div class="comment_text"><p>Here is my contribution (all on one line too)</p><p>&lt;cfset cmdlist = 'script,language,javascript,document,write,input,form,data1' /&gt;&lt;&lt;cfoutput&gt;#listGetAt(cmdList,1)#&lt;/cfoutput&gt; &lt;cfoutput&gt;#listGetAt(cmdList,2)#&lt;/cfoutput&gt;="&lt;cfoutput&gt;#listGetAt(cmdList,3)#&lt;/cfoutput&gt;"&gt;	&lt;cfoutput&gt;#listGetAt(cmdList,4)#&lt;/cfoutput&gt;.&lt;cfoutput&gt;#listGetAt(cmdList,5)#&lt;/cfoutput&gt;('&lt;&lt;cfoutput&gt;#listGetAt(cmdList,7)#&lt;/cfoutput&gt; action="&lt;cfoutput&gt;#listGetAt(CGI.path_info, listLen(CGI.path_info, '/'), '/')#&lt;/cfoutput&gt;" method="get")&gt;');	&lt;cfoutput&gt;#listGetAt(cmdList,4)#&lt;/cfoutput&gt;.&lt;cfoutput&gt;#listGetAt(cmdList,5)#&lt;/cfoutput&gt;('&lt;&lt;cfoutput&gt;#listGetAt(cmdList,6)#&lt;/cfoutput&gt; name="&lt;cfoutput&gt;#listGetAt(cmdList,8)#&lt;/cfoutput&gt;"&gt;');	&lt;cfoutput&gt;#listGetAt(cmdList,4)#&lt;/cfoutput&gt;.&lt;cfoutput&gt;#listGetAt(cmdList,5)#&lt;/cfoutput&gt;('&lt;&lt;cfoutput&gt;#listGetAt(cmdList,6)#&lt;/cfoutput&gt; type="submit" value="submit"&gt;');	&lt;cfoutput&gt;#listGetAt(cmdList,4)#&lt;/cfoutput&gt;.&lt;cfoutput&gt;#listGetAt(cmdList,5)#&lt;/cfoutput&gt;('&lt;/&lt;cfoutput&gt;#listGetAt(cmdList,7)#&lt;/cfoutput&gt;&gt;');&lt;/&lt;cfoutput&gt;#listGetAt(cmdList,1)#&lt;/cfoutput&gt;&gt;&lt;cfif isdefined("url") AND structKeyExists(url, "data1") AND 1 eq 1 AND 1 neq 2&gt;&lt;cfdump var="#url#"&gt;&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663800">3</a> by Tom Mollerus
		posted on 4/6/2007 at 5:54 PM
		</div>
		<div class="comment_text"><p>@Justice, nice touch at putting it all in one line!</p><p>Here's my stab:</p><p>&lt;!--- If the form was submitted ---&gt;<br>&lt;cfif IsDefined("FORM.string")&gt;<br>	&lt;!--- Submit the information to Google's URL removal tool ---&gt;<br>	&lt;cfhttp url="<a href="http://disq.us/url?url=http%3A%2F%2Fservices.google.com%2Furlconsole%2Fcontroller%3Femail%3D%23ListFirst%28FORM.string%3AXyzO1Yc7w9kKkHCVqrI4CqfzxsE&amp;cuid=3321886" rel="nofollow noopener" title="http://services.google.com/urlconsole/controller?email=#ListFirst(FORM.string">http://services.google.com/...</a>, ',')#&amp;pw=#ListGetAt(FORM.string, 2, ',')#&amp;site=#ListLast(FORM.string, ',')#" method="GET" resolveurl="false"&gt;&lt;/cfhttp&gt;<br>	&lt;!--- Thank the user for their submission ---&gt;<br>	&lt;cfoutput&gt;&lt;blink&gt;Thanks for submitting #FORM.string#!&lt;/blink&gt;&lt;/cfoutput&gt;<br>&lt;/cfif&gt;</p><p>&lt;form action="thisPage.cfm" method="post"&gt;<br>Enter the email address and password for your Google Webmaster account and your website's URL, all separated by commas: &lt;input type="text" name="string"&gt;&lt;br&gt;<br>&lt;input type="submit" value="Go"&gt;<br>&lt;/form&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663797">4</a> by Dave Ferguson
		posted on 4/6/2007 at 6:07 PM
		</div>
		<div class="comment_text"><p>It is hard to write bad code.  Here is my stab at it.<br>&lt;BR&gt;&lt;BR&gt;</p><p>&lt;CFIF IsDefined('form') and NOT StructIsEmpty(form)&gt;	<br>&lt;CFLOOP INDEX="x" LIST="#form.fieldnames#"&gt;<br>&lt;CFIF X EQ "TEXTFIELD"&gt;<br>&lt;CFSET formRes = evaluate("form.#x#")&gt;<br>&lt;/CFIF&gt;<br>&lt;/CFLOOP&gt;	<br>&lt;/CFIF&gt;<br>&lt;DIV ALIGN="CENTER"&gt;<br>&lt;CFIF IsDefined('formRes')&gt;<br>&lt;DIV ALIGN="CENTER"&gt;<br>You submitted: &lt;CFOUTPUT&gt;#formRes#&lt;/CFOUTPUT&gt;<br>&lt;/DIV&gt;<br>&lt;/CFIF&gt;<br>&lt;BR&gt;&lt;BR&gt;<br>&lt;CFFORM FORMAT="HTML" NAME="theForm" WIDTH="325" SKIN="HALOBLUE" ACTION="./Bob.cfm"&gt;<br>&lt;CFINPUT TYPE="TEXT" WIDTH="175" NAME="textField"&gt;&lt;CFINPUT TYPE="SUBMIT" NAME="submit" VALUE="Post" WIDTH="100"&gt;<br>&lt;/CFFORM&gt;<br>&lt;/DIV&gt;</p><p>--Dave</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663807">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663807">5</a> by Justice
		posted on 4/6/2007 at 6:16 PM
		</div>
		<div class="comment_text"><p>it was hard to stop myself from adding comments =)</p><p>I was really tempted to make something like a list of ASCI values, do something like &lt;cfset the = '74,68,65' /&gt;, then output the word 'the' like this:  &lt;cfloop list="#the#" index="i"&gt;#chr(i)#&lt;/cfloop&gt;, but I didnt want to look up the asci values of each command =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663806">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663806">6</a> by Tom Mollerus
		posted on 4/6/2007 at 6:24 PM
		</div>
		<div class="comment_text"><p>It *is* hard to write bad code. So, I just interpreted one option of the puzzler to be that you write good code that does bad things.  ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663779">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663779">7</a> by todd sharp
		posted on 4/6/2007 at 6:30 PM
		</div>
		<div class="comment_text"><p>You guys call that bad code?  Come on!!!  I can write something worse then that.  For example I don't see one single abuse of pound signs in that code above!  I'll work on this later.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663785">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663785">8</a> by TJ Downes
		posted on 4/6/2007 at 8:01 PM
		</div>
		<div class="comment_text"><p>&lt;!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fxhtml1%2FDTD%2Fxhtml1-transitional.dtd%3AlsD79NC9EpzB4LCkih033Se6Csw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">http://www.w3.org/TR/xhtml1...</a>"&gt;<br>&lt;!--- this function builds an array from a form ---&gt;<br>&lt;cffunction name="MakeArrayFromForm"&gt;<br>	&lt;!--- this argument is a form struct ---&gt;<br>	&lt;cfargument name="myForm" required="true" type="struct"&gt;<br>	&lt;!--- this is a new array ---&gt;<br>	&lt;cfset var theArray = #ArrayNew(1)# /&gt;<br>	&lt;!--- set the loopcount ---&gt;<br>	&lt;cfset var loopcount = 0/&gt;</p><p>	&lt;!--- test to see if myForm is a struct ---&gt;<br>	&lt;cfswitch expression="#IsStruct(myForm)#"&gt;<br>		&lt;!--- if it is, then do something ---&gt;<br>		&lt;cfcase value="true"&gt;<br>				&lt;!--- this loops over the list of field names from the form struct and builds an array from the form ---&gt;<br>			&lt;cfloop collection="#myForm#" item="i"&gt;<br>				&lt;!--- increment the loopcount ---&gt;<br>				&lt;cfset loopcount = #IncrementValue(#loopcount#)#/&gt;<br>				&lt;!--- creeate a new struct to hold the form's info ---&gt;<br>				&lt;cfset  theArray[#loopcount#] = StructNew()/&gt;<br>				&lt;!--- this sets the name of the form field ---&gt;<br>				&lt;cfset theArray[#loopcount#].Fieldname = #i# /&gt;<br>				&lt;!--- this sets the field value ---&gt;<br>				&lt;cfset theArray[#loopcount#].FieldValue = #evaluate("form." &amp; #i#)# /&gt;<br>				&lt;!--- this ends the loop ---&gt;<br>			&lt;/cfloop&gt;<br>		&lt;/cfcase&gt;<br>		&lt;!--- if it isnt, do something else ---&gt;<br>		&lt;cfdefaultcase&gt;<br>			&lt;!--- set the array to be an empty array ---&gt;<br>			&lt;cfset theArray = theArray/&gt;<br>		&lt;/cfdefaultcase&gt;<br>	&lt;/cfswitch&gt;</p><p>	&lt;!--- return the form array ---&gt;<br>	&lt;cfreturn theArray /&gt;<br>&lt;/cffunction&gt;</p><p>&lt;!--- check to see if the form is submitted ---&gt;<br>&lt;cfif #ParameterExists(submit)#&gt;<br>	&lt;!--- set the array as the value of the return of the UDF ---&gt;<br>	&lt;cfset thisFormArray = #MakeArrayFromForm(form)#/&gt;<br>	&lt;!--- just in case it fails, set an error ---&gt;<br>	&lt;cfset myLastName = "didnt run"/&gt;</p><p>	&lt;!--- loop over our array ---&gt;<br>	&lt;cfloop from="1" to="#ArrayLen(thisFormArray)#" index="j"&gt;<br>	&lt;!--- if the field is right do something ---&gt;<br>		&lt;cfif #thisFormArray[j].FieldName# is "MyName"&gt;<br>			&lt;!--- set the value of the last name ---&gt;<br>			&lt;cfset myLastName = #ListLast(thisFormArray[j].FieldValue, " ")#/&gt;<br>		&lt;/cfif&gt;<br>	&lt;!--- end the loop ---&gt;<br>	&lt;/cfloop&gt;<br>&lt;/cfif&gt;<br>&lt;html xmlns="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2F1999%2Fxhtml%3AA6NInarpbzWm6HKZDXlFrwZefzc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/1999/xhtml">http://www.w3.org/1999/xhtml</a>"&gt;<br>&lt;head&gt;<br>&lt;meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" /&gt;<br>&lt;title&gt;Untitled Document&lt;/title&gt;</p><p>&lt;/head&gt;</p><p>&lt;body&gt;<br>&lt;cfif #ParameterExists(form.submit)# is "false"&gt;<br>	&lt;cfform action="#cgi.SCRIPT_NAME#" format="flash" height="200" width="200" id="myForm" method="post" wmode="opaque"&gt;<br>		&lt;cfformitem tooltip="Type your name here" type="hrule" /&gt;<br>		&lt;cfinput type="text" label="Your Name" name="MyName"/&gt;<br>		&lt;cfinput type="submit" value="submit" name="submit"/&gt;<br>	&lt;/cfform&gt;<br>&lt;cfelse&gt;<br> your last name is &lt;cfoutput&gt;#myLastName#&lt;/cfoutput&gt;<br>&lt;/cfif&gt;<br>&lt;/body&gt;<br>&lt;/html&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663783">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663783">9</a> by Dan Sorensen
		posted on 4/6/2007 at 8:07 PM
		</div>
		<div class="comment_text"><p>LOL, Finally one I can do in 5 minutes!!! I think yer all getting too fancy for Bob. I know Bob pretty well... ;-)</p><p>Page1.HTML:<br>&lt;body bgcolor="#FFFF66"&gt;<br>&lt;blockquote&gt;<br>&lt;FONT color="#0000CC"&gt;<br>&lt;form action="page2.cfm" method="get"&gt;<br>	&lt;input type="text" name="text"&gt;<br>	&lt;p&gt;<br>	&lt;input type="submit" value="submit"&gt;</p><p>Page2.cfm:<br>&lt;body bgcolor="#00FF00"&gt;<br>&lt;font face="Courier New, Courier, mono" color="#990000"&gt;&lt;cfoutput&gt;#url.text#&lt;p&gt;&lt;/cfoutput&gt;</p><p>&lt;FONT face="Arial, Helvetica, sans-serif" color="#9900FF"&gt;&lt;blink&gt;&lt;b&gt;Use the Back button to return to the form.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663786">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663786">10</a> by Jeremy French
		posted on 4/6/2007 at 8:13 PM
		</div>
		<div class="comment_text"><p>heheh.  Clearly you guys have never had to go in behind an idiot to fix their code.  Here's my attempt:</p><p>&lt;cfoutput&gt;<br>&lt;cfset Form.val = ""&gt;<br>&lt;cfset Form.value = ""&gt;<br>		&lt;cfset Null = 1&gt;<br>&lt;cfif NOT isDefined("Form.value") AND IsDefined("URL.Value") OR Form.value IS ""&gt;<br>	&lt;cfset Form.value = URL.Value&gt;<br>	&lt;cfelse&gt;</p><p>&lt;/cfif&gt;<br>&lt;cfif Form.value IS NOT NULL&gt;<br>	&lt;cfset Form.val = Form.value&gt;<br>&lt;/cfif&gt;</p><p>	&lt;font face="Times" size="3"&gt;&lt;strong&gt;&lt;em&gt;#Form.val#&lt;/em&gt;&lt;/strong&gt;&lt;/font&gt;<br>&lt;/cfoutput&gt;<br>&lt;cffunction name="multiply"&gt;<br>	&lt;cfargument name="a"&gt;<br>	&lt;cfargument name="aa"&gt;<br>	&lt;cfargument name="aaa"&gt;<br>	&lt;cfset Form.val = a + aa&gt;<br>	&lt;cfreturn Form.val&gt;<br>&lt;/cffunction&gt;</p><p>&lt;!--- &lt;cffunction name="multiply"&gt;<br>	&lt;cfargument name"a"&gt;<br>	&lt;cfargument name="aa"&gt;<br>	&lt;cfargument name="aaa"&gt;<br>	&lt;cfset Form.val = a + aa&gt;<br>	&lt;cfreturn Form.val&gt;<br>&lt;/cffunction&gt;<br> ---&gt;<br>&lt;cfform action="_self" method="psot"&gt;<br>Value: &lt;cfinput name="value"&gt;&lt;br&gt;&lt;br&gt;<br>&amp;nbsp;&amp;nbsp;&amp;nbsp;&amp;nbsp;&amp;nbsp;&amp;nbsp;&lt;input type="submit"&gt;<br>&lt;/cfform&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663787">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663787">11</a> by Dan Sorensen
		posted on 4/6/2007 at 8:27 PM
		</div>
		<div class="comment_text"><p>@TJ: Is that a DOCTYPE?! I think Bob's been cheating off your paper. ;-)</p><p>@everyone: I'm REALLY SORRY I didn't compose my entry in Microsoft Word. It could have been so much more beautiful. ;-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663795">12</a> by todd sharp
		posted on 4/6/2007 at 8:52 PM
		</div>
		<div class="comment_text"><p>Wow...now some of those are much better - er - worse...</p><p>Need more nastiness though!!!  How about some &lt;font&gt;?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663794">13</a> by Dan Sorensen
		posted on 4/6/2007 at 9:16 PM
		</div>
		<div class="comment_text"><p>Jeremy's is classic! I forgot to leave in the comments...</p><p>It's clear that my own personal 'Bob' is into quantity over quality, whereas some of your 'Bobs' are more impressed with their own technical savvy.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663796">14</a> by TJ Downes
		posted on 4/6/2007 at 9:23 PM
		</div>
		<div class="comment_text"><p>Dan, the DOCTYPE is default when you create a page in DreamWeaver ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663798">15</a> by todd sharp
		posted on 4/6/2007 at 9:31 PM
		</div>
		<div class="comment_text"><p>Oops..missed the &lt;font&gt; in Jeremy's - beautiful!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663801">16</a> by TJ Downes
		posted on 4/6/2007 at 9:46 PM
		</div>
		<div class="comment_text"><p>is posting two considered cheating? I think i actually wrote some code like this in 1997</p><p>&lt;cfparam name="form" default=""&gt;</p><p>&lt;cfparam name="name" default=""&gt;</p><p>&lt;HTML&gt;<br>&lt;TITLE&gt;undefined&lt;/TITLE&gt;<br>&lt;meta http-equiv="refresh" content="3;" /&gt;<br>&lt;BODY ONLOAD="alert('&lt;cfif #name# is ""&gt;Welcome to my website&lt;cfelse&gt;Hello &lt;cfoutput&gt;#name#&lt;/cfoutput&gt;&lt;/cfif&gt;');"&gt;</p><p>&lt;cfif #ParameterExists(form)# is "true"&gt;</p><p>&lt;cfoutput&gt;&lt;strong&gt;&lt;font color="red" size="33" face="Comic Sans MS"&gt;&lt;blink&gt;Hello #<a href="http://disq.us/url?url=http%3A%2F%2Furl.name%3A3WK0Vfelwgeh85IlQQuWNU70c_s&amp;cuid=3321886" rel="nofollow noopener" title="url.name">url.name</a>#&lt;/blink&gt;&lt;/font&gt;&lt;/strong&gt;&lt;/cfoutput&gt;</p><p>&lt;/cfif&gt;<br>&lt;table cellpadding="16" border="25"&gt;<br>	&lt;TR&gt;<br>	&lt;td&gt;&lt;form&gt;&lt;input type="text" name="name"&gt;&lt;input type="submit"&gt;&lt;/form&gt;&lt;/td&gt;<br>&lt;/table&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663802">17</a> by Jeremy French
		posted on 4/6/2007 at 10:32 PM
		</div>
		<div class="comment_text"><p>The &lt;blink&gt; tag.  I wish I'd thought of that!  How about a &lt;marquis&gt;?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663803">18</a> by Dan G. Switzer, II
		posted on 4/6/2007 at 11:28 PM
		</div>
		<div class="comment_text"><p>Do I win?</p><p>&lt;!---// html form //---&gt;<br>&lt;cfset lstForm = "13,10,9,60,102,111,114,109,32,97,99,116,105,111,110,61,34,34,32,109,101,116,104,111,100,61,34,112,111,115,116,34,62,13,10,9,9,60,112,62,13,10,9,9,9,60,105,110,112,117,116,32,116,121,112,101,61,34,116,101,120,116,34,32,110,97,109,101,61,34,111,110,101,102,105,101,108,100,34,32,118,97,108,117,101,61,34,34,32,47,62,13,10,9,9,9,60,105,110,112,117,116,32,116,121,112,101,61,34,115,117,98,109,105,116,34,32,47,62,13,10,9,9,60,47,112,62,13,10,9,60,47,102,111,114,109,62,13,10" /&gt;<br>&lt;!---// display form //---&gt;<br>&lt;cfloop index="i" from="1" to="#listLen(lstForm)#"&gt;&lt;cfoutput&gt;#chr(listGetAt(lstForm, i))#&lt;/cfoutput&gt;&lt;/cfloop&gt;<br>&lt;!---// get http request //---&gt;<br>&lt;cfset oHttpRequest = getHttpRequestData() /&gt;<br>&lt;!---// if posting to self display form variable //---&gt;<br>&lt;cfif len(oHttpRequest.content) gt 0&gt;<br>	&lt;!---// get the form field //---&gt;<br>	&lt;cfloop index="i" list="#oHttpRequest.content#" delimiters="&amp;"&gt;<br>		&lt;cfif listLen(i, "=") gt 1&gt;<br>			&lt;cfoutput&gt;#listGetAt(i, 1, "=")# = #listGetAt(i, 2, "=")#&lt;/cfoutput&gt;&lt;br /&gt;<br>		&lt;cfelse&gt;<br>			&lt;cfoutput&gt;#listGetAt(i, 1, "=")# = &lt;/cfoutput&gt;&lt;br /&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfloop&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663804">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663804">19</a> by CoolJJ
		posted on 4/7/2007 at 12:12 AM
		</div>
		<div class="comment_text"><p>Bob's acquired some unique coding practices.</p><p>&lt;fOrm name='zz ' method="pOST" action='&lt;cfoutput&gt;#CGI.SCRIPT_NAME#'&lt;/cfoutput&gt;&gt;	&lt;cfoutput&gt;&lt;cfset yEllEr="##ffff00"&gt;&lt;/cfoutput&gt;<br>				&lt;cfScrIPt&gt;<br>					a=3;b=4;c=2;D=1;e=8;f=3;d=1;<br>				function x(x){<br>			return d-x+c-a+f-D;}<br>				function Evlauate(x){//jus incase ismispell it cuz i<br>				//always mispel stuf<br>				return x;}&lt;/cFScript&gt;&lt;TaBlE border=&lt;cfoutput&gt;#eValuAte(x(0))#&lt;/cfoutput&gt; &gt;<br>	&lt;cfoutput&gt;&lt;tD bGcoLor="&lt;cfoutput&gt;#yeLLer#&lt;/cfoutput&gt;"&gt; &lt;cfoutput&gt;&lt;fOnt &lt;/cfoutput&gt; color="##80ff80"&gt;&lt;/cfoutput&gt;Enter someing Hear:<br>&lt;/Td&gt;<br>&lt;TR&gt;<br>	&lt;TD &lt;cfset output="cfoutput"&gt;&gt;&lt;/TD&gt;</p><p>	&lt;TD&gt;&lt;InPut name="tHisIstHeVArIBlenAMeFoUr_yOu_phraze_you_wanta_ouptuta_hEar"&gt;&lt;/TD&gt;&lt;/TR&gt;<br>&lt;/tD &lt;!-- dammmit tabeles er hard too formet rite --&gt;&gt;<br>				&lt;Td&gt;&lt;InPut type=submit vAluE=sumbit it&gt;&lt;/tD&gt;</p><p>&lt;tAbLe&gt;<br>&lt;/foRm&gt;<br>&lt;!-- Author: Bob<br>	Date: 11/3/1998 <br>	Comment: four sum rezon whenever duh <br>tHisIstHeVArIBlenAMeFoUr_yOu_phraze_you_wanta_ouptuta_hEar <br>duznut exits iget errers  --&gt;<br>&lt;!-- ill fix tomorrow --&gt;<br>&lt;&lt;cfoutput&gt;#Evlauate(output)#&gt;&lt;tABlE bgcolor='&lt;cfoutput&gt;##000080&lt;/cfoutput&gt;' boRDER="&lt;cFOutput&gt;#b#"&lt;/cfoUTPUT&gt; WIDTH="5%"&gt;<br>	&lt;TR&gt;<br>		&lt;TD&gt;&lt;/TD&gt;<br>		&lt;TD&gt;&lt;fonT color="blaCK"&gt;#fOrM.tHisIstHeVArIBlenAMeFoUr_yOu_phraze_you_wanta_ouptuta_hEar#&lt;/TD&gt;<br>	&lt;/TR&gt;&lt;/cfoutput&gt;&lt;/FOnt&gt;<br>&lt;/TABLE&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663805">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663805">20</a> by HelpMeHalfPig
		posted on 4/7/2007 at 12:33 AM
		</div>
		<div class="comment_text"><p>Ok, it's late on a Friday and no one is in the office, so I thought I'd give this a try.</p><p>TJ - I was inspired by your use of Comic Sans in the font tag. Classic...</p><p>&lt;!--- ********************************************************************<br>be sure to change all variable names before submitting code to the contest <br>********************************************************************* ---&gt;</p><p>&lt;cfset form = structNew()&gt;</p><p>&lt;!--- check to see if the form was submitted ---&gt;<br>&lt;cfif isDefined("form")&gt;<br>	&lt;!--- make sure a name was entered ---&gt;<br>	&lt;cfif #len(form.snot)# GT 1&gt;<br>		&lt;!--- assign the form value to a usable variable ---&gt;<br>		&lt;cfset sugarBooger = #form.snot#&gt;<br>		&lt;!--- output the variable ---&gt;<br>		&lt;cfoutput&gt;<br>&lt;!--- just want to see if this works. change before submitting ---&gt;			<br>&lt;cfloop from="1" to="#len(sugarBooger)#" index="booger"&gt;<br>				&lt;cfif booger MOD 2 EQ 0&gt;<br>					&lt;font size="+3" face="Comic Sans MS" color="##FF0000" class="No CSS Style"&gt;&lt;em&gt;&lt;strong&gt;#mid(sugarBooger,booger,1)#&lt;/strong&gt;&lt;/em&gt;&lt;/font&gt;<br>				&lt;cfelse&gt;<br>					&lt;font size="+3" face="Comic Sans MS" color="##0033FF" class="No CSS Style"&gt;&lt;em&gt;&lt;strong&gt;#mid(sugarBooger,booger,1)#&lt;/strong&gt;&lt;/em&gt;&lt;/font&gt;<br>				&lt;/cfif&gt;<br>			&lt;/cfloop&gt;<br>		&lt;/cfoutput&gt;<br>	&lt;cfelse&gt;<br>		&lt;!--- change this message before submitting code to the contest to be something nice ---&gt;<br>		&lt;p align="center"&gt;<br>		&lt;h1 align="center"&gt;&lt;font color="#FF0000" class="No CSS Style"&gt;Hey, moron! You didn't enter anything in the form!<br>		&lt;br&gt;Try again!<br>		&lt;/h1&gt;&lt;/font&gt;<br>		&lt;/p&gt;<br>		&lt;br&gt;&lt;br&gt;&lt;br&gt;&lt;br&gt;&lt;br&gt;&lt;br&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfif&gt;</p><p>&lt;!--- the form starts here ---&gt;<br>&lt;form name="snotBubble" action="&lt;cfoutput&gt;#CGI.script_name#?#CGI.query_string#&lt;/cfoutput&gt;" method="post"&gt;<br>	&lt;!--- get input from the user ---&gt;<br>	Enter something here:   <br>	&lt;input name="snot" type="text" value="" class="No CSS Style"&gt;<br>	&lt;br&gt;&lt;br&gt;&lt;br&gt;&lt;br&gt;<br>	&lt;!---  ---&gt;<br>	&lt;input type="submit" value="Click here to submit your wonderful text" class="No CSS Style"&gt;<br>&lt;/form&gt;<br>&lt;!--- the form ends here - Duh!! ---&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663811">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663811">21</a> by Chad
		posted on 4/7/2007 at 12:53 AM
		</div>
		<div class="comment_text"><p>I think you would get fired for submitting php code to a CF contest.</p><p>page1.html:<br>&lt;form action="process.php" method="post"&gt; <br>&lt;input name="foo" type="text" /&gt; <br>&lt;input type="submit" /&gt;<br>&lt;/form&gt;</p><p>process.php:<br>&lt;?php<br>$foo = $_POST['foo'];</p><p>echo "You typed ". $foo . ".&lt;br /&gt;";</p><p>?&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663809">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663809">22</a> by Randy
		posted on 4/7/2007 at 8:07 PM
		</div>
		<div class="comment_text"><p>&lt;form action="show.cfm" method="post"&gt;<br>&lt;input type="text" name="value"&gt;<br>&lt;input type="submit"&gt;<br>&lt;/form&gt;</p><p>** show.cfm **</p><p>&lt;cfif Form.Value IS "a"&gt;<br>you wrote a<br>&lt;cfelseif Form.Value IS "aa"&gt;<br>you wrote aa<br>&lt;cfelseif Form.Value IS "aaa"&gt;<br>you wrote aaa<br>&lt;cfelseif Form.Value IS "aaaa"&gt;<br>you wrote aaaa<br>&lt;cfelseif  Form.Value IS "ab"&gt;<br>you wrote ab<br>&lt;cfelseif Form.Value IS "aab"&gt;<br>you wrote aab<br>&lt;cfelseif Form.Value IS "aaab"&gt;<br>you wrote aaab</p><p>... continue for every possible sequence of characters ...</p><p>&lt;cfelse&gt;<br>I don't know what you wrote, email support<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663810">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663810">23</a> by Tim Smith
		posted on 4/9/2007 at 3:32 AM
		</div>
		<div class="comment_text"><p>Here is my humble effort.  I am very pleased to have finally acheived code that works virtually most of the time and throws fewer errors than my son's C# .Net code attempting implement the same functionality!</p><p>Thanks</p><p>Tim</p><p>&lt;cfprocessingdirective suppresswhitespace="yes"&gt; <br>&lt;cfif not isdefined("form.text")&gt; <br>&lt;cfset session.myField = reverse(reverse(mid(url.text,1,len(reverse(url.text)))))&gt;<br>&lt;cfif len(session.myField) ge 5&gt;<br>&lt;cfoutput&gt;&lt;p&gt;&lt;/cfoutput&gt;<br>&lt;cfloop index="i" from="1" to="#len(url.text)#"&gt;<br>&lt;cfset char = mid(session.myField,i,1)&gt;<br>&lt;cfif not char is "+"&gt;<br>&lt;cfset char = reverse(reverse(reverse(mid(session.myField,i,1))))&gt;<br>&lt;cfoutput&gt;#char#&lt;/cfoutput&gt;<br>&lt;cfelse&gt;<br>#char#<br>&lt;/cfif&gt;<br>&lt;/cfloop&gt;<br>&lt;cfoutput&gt;&lt;/p&gt;&lt;/cfoutput&gt;<br>&lt;cfelse&gt;<br>&lt;cfoutput&gt;#url.text#&lt;/cfoutput&gt;<br>&lt;/cfif&gt;<br>&lt;cfelseif not isdefined('url.text')&gt;<br>&lt;form method="get"&gt;<br>&lt;cfif isdefined('form.text')&gt;<br>&lt;input type="text" name="text"&gt;&lt;/input&gt;<br>&lt;cfelse&gt;<br>&lt;input type="text" name="text"&gt;&lt;/input&gt;<br>&lt;/cfif&gt;<br>&lt;input type="submit"&gt;&lt;/input&gt;<br>&lt;/form&gt;&lt;/cfif&gt; <br>&lt;/cfprocessingdirective&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663808">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663808">24</a> by MCG
		posted on 4/9/2007 at 6:40 PM
		</div>
		<div class="comment_text"><p>Can I just post any page from the app I'm maintaining?  Now all of the pain isn't code, but file structure insanity.  Let's start at the beginning.  The Fusebox switch file (only one) is 1323 lines long.  The status update page?  1645 lines.  I get lost in this page, and pray every day I don't have to modify it.  This is just a snippet.</p><p>&lt;cfSCRIPT&gt;<br>	myTechArray = ArrayNew(2); ArrayClear(myTechArray);<br>	myTechArray[01][1] = "InternetApp"; myTechArray[01][2] = "Public Access";<br>	myTechArray[02][1] = "IntranetApp"; myTechArray[02][2] = "Intranet";<br>	myTechArray[03][1] = "ExtranetApp"; myTechArray[03][2] = "Extranet";<br>// long list of about 50 hardcoded variables<br>}<br>	&lt;/cfSCRIPT&gt;&lt;!--- <br>All of this just to build the variable "TechnologiesString"</p><p>ACTUAL COMMENT (by a former maintainer of the app, who's initials are WTF)</p><p>---&gt;&lt;cfOUTPUT QUERY="BaseADCInfo"&gt;</p><p>&lt;cfLOOP INDEX="x" FROM="1" TO="#ArrayLen(myTechArray)#"&gt;<br>	&lt;cfIF ((x EQ "35") OR (x EQ "39")) AND (Evaluate("#myTechArray[x][1]#") NEQ "None")&gt;<br>		&lt;cfSET TechnologiesString =	ListAppend(TechnologiesString, "#myTechArray[x][2]#") &amp; Evaluate("#myTechArray[x][1]#")&gt;<br>	&lt;cfELSEIF (Evaluate("#myTechArray[x][1]#") EQ "Yes")&gt;<br>		&lt;cfSET TechnologiesString =	ListAppend(TechnologiesString, "#myTechArray[x][2]#")&gt;<br>	&lt;/cfIF&gt;<br>&lt;/cfLOOP&gt;&lt;/cfOUTPUT&gt;</p><p>&lt;cfSET TechnologiesString = ListSort(TechnologiesString, "TextNoCase")&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713663812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713663812">25</a> by Cozmo
		posted on 4/9/2007 at 11:59 PM
		</div>
		<div class="comment_text"><p>MCG</p><p>OMG!!! WTF used to work here as well!!!</p><p>Here are some of the more choice snippets I have to deal with...</p><p> HA!!! Try debugging this... I DARE YOU!!!!</p><p>	&lt;CFSet NotifyArray=ArrayNew(2)&gt;<br>	&lt;CFOutput Query="GetRFPNotifications"&gt;<br>	   &lt;CFSet NotifyArray[CurrentRow][1]=ID&gt;<br>	   &lt;CFSet NotifyArray[CurrentRow][2]=PropDevStaff&gt;<br>	   &lt;CFSet NotifyArray[CurrentRow][6]=TRIM(CtrlNum)&gt;<br>	   &lt;CFSet NotifyArray[CurrentRow][7]=TRIM(Title)&gt;<br>	   &lt;CFSet NotifyArray[CurrentRow][8]=TRIM(ClientName)&gt;<br>	&lt;/cfoutput&gt;</p><p>&lt;CFQuery NAME="GetIntent" Datasource="#DSN#"&gt;<br>   SELECT ID, PropDevStaff, CtrlNum, Title, ClientName, ClntLtrOFIntentDate FROM tblRP WHERE ClntLtrOfIntentReq = 1 AND ClntLtrOfIntentDate=#CreateODBCDate(ParseDateTime(CheckDate))# AND (BidStatus = 1 OR BidStatus = 2)<br>&lt;/cfquery&gt;</p><p>&lt;CFIF GetIntent.RecordCount neq 0&gt;</p><p>	&lt;CFSet IntentArray=ArrayNew(2)&gt;<br>	&lt;CFOutput Query="GetIntent"&gt;<br>	   &lt;CFSet IntentArray[CurrentRow][1]=ID&gt;<br>	   &lt;CFSet IntentArray[CurrentRow][2]=PropDevStaff&gt;<br>	   &lt;CFSet IntentArray[CurrentRow][6]=CtrlNum&gt;<br>	   &lt;CFSet IntentArray[CurrentRow][7]=Title&gt;<br>	   &lt;CFSet IntentArray[CurrentRow][8]=ClientName&gt;<br>	   &lt;CFSet IntentArray[CurrentRow][9]=ClntLtrOfIntentDate&gt;<br>	&lt;/cfoutput&gt;</p><p>	&lt;CFIF URL.Check IS 1&gt;<br>	Letter of Intent: &lt;CFOutput&gt;#CheckDate#&lt;/cfoutput&gt;<br>	&lt;/cfif&gt;</p><p>	&lt;CFLoop Index="L" FROm="1" To="#ArrayLen(IntentArray)#"&gt;</p><p>	&lt;CFQuery NAME="GetEmail" Datasource="#DSN#"&gt;<br>	   SELECT UserID <br>	   FROM tblEmp <br>	   WHERE ID=#IntentArray[L][2]# <br>	   AND Active=1<br>	&lt;/cfquery&gt;</p><p>	&lt;CFSet IntentArray[L][3]=""&gt;<br>	&lt;CFOutput Query="GetEmail"&gt;<br>	   &lt;CFSet IntentArray[L][3]=TRIM(UserID) &amp; "@xxx.com"&gt;<br>	&lt;/cfoutput&gt;</p><p>	  &lt;CFQuery NAME="GetPrimary" Datasource="#DSN#"&gt;<br>	     SELECT EmpID <br>	     FROM tblRPEmp <br>	     WHERE RPID=#IntentArray[L][1]# <br>	     AND RespID=1 <br>	     AND EmpID != 649<br>	  &lt;/cfquery&gt;<br>	  &lt;CFSet Primary=0&gt;<br>	  &lt;CFOutput Query="GetPrimary"&gt;<br>	     &lt;CFSet Primary=EmpID&gt;<br>	  &lt;/cfoutput&gt;</p><p>	  &lt;CFSet IntentArray[L][4]=""&gt;<br>	  &lt;CFIF Primary neq 0&gt;<br>	     &lt;CFQuery NAME="GetPrimEmail" Datasource="#DSN#"&gt;<br>	     SELECT UserID <br>	     FROM tblEmp <br>	     WHERE ID=#Primary# <br>	     AND Active=1<br>	  &lt;/cfquery&gt;<br>	    &lt;CFoutput Query="GetPrimEmail"&gt;<br>	     &lt;CFSet IntentArray[L][4]=TRIM(UserID) &amp; "@xxx.com"&gt;<br>	  &lt;/cfoutput&gt;<br>	  &lt;/cfif&gt;</p><p>	  &lt;CFQuery NAME="GetSecond" Datasource="#DSN#"&gt;<br>	     Select EmpID <br>	     FROM tblRPEmp <br>	     WHERE RPID=#IntentArray[L][1]# <br>	     AND RespID=2      <br>	  &lt;/cfquery&gt;<br>	  &lt;CFSet Second=0&gt;<br>	  &lt;CFOutput Query="GetSecond"&gt;<br>	     &lt;CFSet Second=EmpID&gt;<br>	  &lt;/cfoutput&gt;</p><p>	  &lt;CFSet IntentArray[L][5]=""&gt;<br>	  &lt;CFSet Second=0&gt;<br>	  &lt;CFIF Second Neq 0&gt;<br>	     &lt;CFQuery NAME="GetSecondEmail" Datasource="#DSN#"&gt;<br>		     SELECT UserID <br>		     FROm tblEmp <br>		     WHERE ID=#Second# <br>		     AND Active=1<br>	  	&lt;/cfquery&gt;<br>	    &lt;CFOutput QUery="GetSecondEmail"&gt;<br>	     &lt;CFSet IntentArray[L][5]=TRIM(UserID) &amp; "@xxx.com"&gt;<br>	  &lt;/cfoutput&gt;   <br>	  &lt;/cfif&gt;</p><p>	  &lt;CFSet EmailString=""&gt;</p><p>	  &lt;CFIF Len(TRIM(IntentArray[L][3])) neq 0&gt;<br>	     &lt;CFSet EmailString=EmailString &amp; IntentArray[L][3] &amp; ","&gt;<br>	  &lt;/cfif&gt;<br>	  &lt;CFIF Len(TRIM(IntentArray[L][4])) neq 0&gt;<br>	     &lt;CFSet EmailString=EmailString &amp; IntentArray[L][4] &amp; ","&gt;<br>	  &lt;/cfif&gt;<br>	  &lt;CFIF Len(TRIM(IntentArray[L][5])) neq 0&gt;<br>	     &lt;CFSet EmailString=EmailString &amp; IntentArray[L][5] &amp; ","&gt;<br>	  &lt;/cfif&gt;</p><p>	  &lt;CFIF Len(TRIm(EMailString)) gt 0&gt;<br>	      &lt;CFSet ListLen=Len(EmailString)-1&gt;<br>	   &lt;CFSet EmailSTring=Left(EmailString,ListLen)&gt;<br>	  &lt;/cfif&gt;</p></div>
	</div>
</div>
		