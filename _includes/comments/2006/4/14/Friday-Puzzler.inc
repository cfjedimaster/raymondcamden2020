
<div class="comment" id="c_1713651857">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651857">1</a> by Teddy Payne
		posted on 4/14/2006 at 6:36 PM
		</div>
		<div class="comment_text"><p>&lt;form method="post" action="#ListGetAt(CGI.SCRIPT_NAME,ListLen(CGI.SCRIPT_NAME,'/'),'/')#"&gt;</p><p>&lt;table style="font-family: arial,helvetica,sans-serif;" cellpadding="3"&gt;<br>&lt;tr&gt;<br>	&lt;td&gt;Number&lt;/td&gt;<br>	&lt;td&gt;&lt;input type="text" name="number"&gt;&lt;/td&gt;<br>&lt;/tr&gt;<br>&lt;tr&gt;<br>	&lt;td&gt;Adjective&lt;/td&gt;<br>	&lt;td&gt;&lt;input type="text" name="adjective"&gt;&lt;/td&gt;<br>&lt;/tr&gt;<br>&lt;tr&gt;<br>	&lt;td&gt;First Noun&lt;/td&gt;<br>	&lt;td&gt;&lt;input type="text" name="noun_1"&gt;&lt;/td&gt;<br>&lt;/tr&gt;<br>&lt;tr&gt;<br>	&lt;td&gt;Second Noun&lt;/td&gt;<br>	&lt;td&gt;&lt;input type="text" name="noun_2"&gt;&lt;/td&gt;<br>&lt;/tr&gt;<br>&lt;tr&gt;<br>	&lt;td&gt;Plural Noun&lt;/td&gt;<br>	&lt;td&gt;&lt;input type="text" name="plural_noun"&gt;&lt;/td&gt;<br>&lt;/tr&gt;<br>&lt;tr&gt;<br>	&lt;td colspan="2"&gt;&lt;input type="submit" value="Create Madlib"&gt;&lt;/td&gt;<br>&lt;/tr&gt;<br>&lt;/table&gt;</p><p>&lt;/form&gt;</p><p>&lt;cfif CGI.REQUEST_METHOD EQ "Post"&gt;</p><p>	&lt;cfscript&gt;</p><p>		strLib = "Four score and {number} years ago, Star Wars was a {adjective} movie.";<br>		strLib = strLib &amp; "I saw it with two hundred {plural noun}.I need a new {noun} like I need a new {noun} in my head.";</p><p>		strLib = ReReplace(strLib,"\{number\}",form.number);<br>		strLib = ReReplace(strLib,"\{adjective\}",form.adjective);<br>		strLib = ReReplace(strLib,"\{plural noun\}",form.plural_noun);<br>		strLib = ReReplace(strLib,"\{noun\}",form.noun_1);<br>		strLib = ReReplace(strLib,"\{noun\}",form.noun_2);<br>		strLib = ReReplace(strLib,"[,]",",s&lt;br&gt;","ALL");<br>		strLib = ReReplace(strLib,"[.]",".&lt;br&gt;","ALL");</p><p>	&lt;/cfscript&gt;</p><p>	&lt;cfoutput&gt;#strLib#&lt;/cfoutput&gt;</p><p>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651871">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651871">2</a> by Teddy Payne
		posted on 4/14/2006 at 6:37 PM
		</div>
		<div class="comment_text"><p>Type on this line:<br>strLib = ReReplace(strLib,"[,]",",s&lt;br&gt;","ALL");</p><p>Should be:<br>strLib = ReReplace(strLib,"[,]",",&lt;br&gt;","ALL");</p><p>I was typing fast and not paying attention.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651858">3</a> by spiraldev
		posted on 4/14/2006 at 8:43 PM
		</div>
		<div class="comment_text"><p>&lt;cfscript&gt;<br>if (IsDefined('form.ml_num')){<br>	ml_txt="Four score and {number} years ago,&lt;br&gt;Star Wars was a {adjective} movie.&lt;br&gt;I saw it with two hundred {plural noun}.&lt;br&gt;I need a new {noun} like I need a new {noun2} in my head. &lt;br&gt;";<br>	ml_txt=	Replace(ml_txt,'{number}',form.ml_num);<br>	ml_txt=	Replace(ml_txt,'{adjective}',form.ml_adj);<br>	ml_txt=	Replace(ml_txt,'{plural noun}',form.ml_pl_noun);<br>	ml_txt=	Replace(ml_txt,'{noun}',form.ml_noun);<br>	ml_txt=	Replace(ml_txt,'{noun2}',form.ml_noun2);<br>	WriteOutput(ml_txt);<br>}<br>&lt;/cfscript&gt;<br>&lt;form action="index.cfm" method="post"&gt;<br>&lt;input type="hidden" value="<a href="http://disq.us/url?url=http%3A%2F%2Fdepartments.it%3A0uFpfhXis7Aceju9IkYMrnWqkYI&amp;cuid=3321886" rel="nofollow noopener" title="departments.it">departments.it</a>" name="event"&gt;<br>&lt;fieldset&gt;<br>	&lt;legend&gt;IT Mad Lib&lt;/legend&gt;<br>	&lt;label for="ml_num" id="lbl_ml_num"&gt;Enter a number&lt;/label&gt;		&lt;input type="text" maxlength="3" name="ml_num" id="ml_num" /&gt;&lt;br /&gt;<br>	&lt;label for="ml_adj" id="lbl_ml_adj"&gt;Enter an adjective&lt;/label&gt;	&lt;input type="text" name="ml_adj" id="ml_adj" /&gt;&lt;br /&gt;<br>	&lt;label for="ml_num" id="lbl_ml_num"&gt;Enter a plural noun&lt;/label&gt;	&lt;input type="text"  name="ml_pl_noun" id="ml_pl_noun" /&gt;&lt;br /&gt;<br>	&lt;label for="ml_num" id="lbl_ml_num"&gt;Enter a noun&lt;/label&gt;		&lt;input type="text" name="ml_noun" id="ml_noun" /&gt;&lt;br /&gt;<br>	&lt;label for="ml_num" id="lbl_ml_num"&gt;Enter a noun&lt;/label&gt;		&lt;input type="text" name="ml_noun2" id="ml_noun2" /&gt;&lt;br /&gt;<br>&lt;/fieldset&gt;<br>	&lt;input type="submit" value="Just do it!"&gt;<br>&lt;/form&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651861">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651861">4</a> by todd
		posted on 4/14/2006 at 9:09 PM
		</div>
		<div class="comment_text"><p>Be nice to me please... :)</p><p>&lt;cfset str = "Four score and {number} years ago, Star Wars was a {adjective} movie.  I saw it with two hundred {plural noun}.  I need a new {noun} like I need a new {noun} in my head."&gt;<br>&lt;cfset e = ""&gt;<br>&lt;cfloop from="1" to="#len(str)#" index="i"&gt;<br>	&lt;cfset a = mid(str, i, 1)&gt;<br>	&lt;cfif a eq "{"&gt;<br>		&lt;cfloop from="1" to="#len(str)#" index="j"&gt;<br>			&lt;cfset b = mid(str, i, j)&gt;<br>			&lt;cfif right(b, 1) eq "}"&gt;<br>				&lt;cfset e = e &amp; mid(str, i, j) &amp; ","&gt;<br>				&lt;cfbreak&gt;<br>			&lt;/cfif&gt;<br>		&lt;/cfloop&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfloop&gt;</p><p>&lt;cfset f = listToArray(e)&gt;<br>&lt;cfset g = arraySort(f, "text", "asc")&gt;<br>&lt;cfset formlist = ""&gt;<br>&lt;p&gt;The string before your funny antecdotes:&lt;/p&gt;&lt;br&gt;<br>	&lt;cfoutput&gt;#str#&lt;/cfoutput&gt;<br>&lt;cfform name="madLibs" action="#cgi.SCRIPT_NAME#" method="post"&gt;<br>	&lt;cfoutput&gt;<br>		&lt;cfloop from="1" to="#arrayLen(f)#" index="i"&gt;<br>			&lt;cfset label = f[i]&gt;<br>			&lt;cfset inputname = f[i]&gt;<br>			&lt;cfset label = replaceList(label, "{,}", "")&gt;<br>			&lt;cfset h = i-1&gt;<br>			&lt;p&gt;Please enter &lt;cfif i neq 1 and f[i] eq f[h]&gt;another&lt;cfelseif left(label, 1) eq "a" or left(label, 1) eq "e" or left(label, 1) eq "i" or left(label, 1) eq "o" or left(label, 1) eq "u"&gt;an&lt;cfelse&gt;a&lt;/cfif&gt; #label#  &lt;cfinput name="#label#" type="text"&gt;&lt;/p&gt;<br>		&lt;/cfloop&gt;</p><p>		&lt;cfinput type="submit" value="submit" name="submit"&gt;<br>	&lt;/cfoutput&gt;<br>&lt;/cfform&gt;</p><p>&lt;cfif structKeyExists(form, "submit")&gt;<br>	&lt;cfset keyList = structKeyList(form)&gt;<br>		&lt;cfloop index="i" from="1" to="#listlen(keyList)#"&gt;<br>		&lt;cfset str2 = "{" &amp; listGetAt(keyList, i) &amp; "}"&gt;<br>			&lt;cfif str contains str2&gt;<br>				&lt;cfif listlen(form[listGetAt(keyList, i)], ",") lte 1&gt;<br>					&lt;cfset str = replacenocase(str, str2, trim(form[listGetAt(keyList, i)]))&gt;<br>				&lt;cfelse&gt;<br>					&lt;cfloop from="1" to="#listlen(form[listGetAt(keyList, i)], ",")#" index="j"&gt;<br>						&lt;cfset str = replacenocase(str, str2, trim(listGetAt(form[listGetAt(keyList, i)], j)))&gt;<br>					&lt;/cfloop&gt;<br>				&lt;/cfif&gt;<br>			&lt;/cfif&gt;<br>		&lt;/cfloop&gt;<br>	&lt;p&gt;Your new madlib is:&lt;/p&gt;&lt;br&gt;<br>	&lt;cfoutput&gt;#str#&lt;/cfoutput&gt;<br>&lt;/cfif&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651859">5</a> by todd
		posted on 4/14/2006 at 9:10 PM
		</div>
		<div class="comment_text"><p>oops - no need for &lt;cfset formlist = ""&gt; -</p><p>it still works, just don't need that in there...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651863">6</a> by Rick Osborne
		posted on 4/14/2006 at 9:38 PM
		</div>
		<div class="comment_text"><p>My entry to this non-contest is here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.rickosborne.org%2Fmisc%2Fmadlibs.cfm%3AdlpZEuGcPumOLy5RIm7xtRkhGFs&amp;cuid=3321886" rel="nofollow noopener" title="http://www.rickosborne.org/misc/madlibs.cfm">http://www.rickosborne.org/...</a></p><p>-R</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651862">7</a> by Tedd Van Diest
		posted on 4/14/2006 at 11:05 PM
		</div>
		<div class="comment_text"><p>&lt;cfsavecontent variable="madLibString"&gt;<br>Four score and {number} years ago,<br>Star Wars was a {adjective} movie.<br>I saw it with two hundred {plural noun}.<br>I need a new {noun1} like I need a new {noun2} in my head. <br>&lt;/cfsavecontent&gt;</p><p>&lt;cfif isDefined("form.submit")&gt;<br>	&lt;cfloop list="#form.fieldnames#" index="i"&gt;<br>		&lt;cfset madLibString = replaceNoCase(madLibString,'{#replace(i,'_',' ','ALL')#}',evaluate(i))&gt;<br>	&lt;/cfloop&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfoutput&gt;<br>&lt;pre&gt;<br>#madLibString#<br>&lt;/pre&gt;</p><p>&lt;form name="madLibForm" action="#CGI.SCRIPT_NAME#" method="post"&gt;<br>&lt;input type="text" name="number"&gt; number&lt;br&gt;<br>&lt;input type="text" name="adjective"&gt; adjective&lt;br&gt;<br>&lt;input type="text" name="plural_noun"&gt; plural noun&lt;br&gt;<br>&lt;input type="text" name="noun1"&gt; noun1&lt;br&gt;<br>&lt;input type="text" name="noun2"&gt; noun2&lt;br&gt;<br>&lt;input type="submit" name="submit" value="submit"&gt;<br>&lt;/form&gt;<br>&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651866">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651866">8</a> by Raymond Camden
		posted on 4/14/2006 at 11:09 PM
		</div>
		<div class="comment_text"><p>Just to be clear, I see some solutions with hard coded forms. The forms must be dynamic. Ie, I should be able to replace the madlib string with anything else and the form will change.</p><p>(Of course, since this isn't a contest with prizes I can't be too demanding. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651864">9</a> by Teddy Payne
		posted on 4/14/2006 at 11:57 PM
		</div>
		<div class="comment_text"><p>I think several of us missed the dynamic forms part.  That changes everything.  =)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651865">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651865">10</a> by todd
		posted on 4/15/2006 at 12:18 AM
		</div>
		<div class="comment_text"><p>i may have completely over-complicated it, but if you replace str in my example with any madlib string it will work the same.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651868">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651868">11</a> by todd
		posted on 4/15/2006 at 12:18 AM
		</div>
		<div class="comment_text"><p>does that mean i win the non-prize?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651869">12</a> by Teddy Payne
		posted on 4/15/2006 at 1:42 AM
		</div>
		<div class="comment_text"><p>My resubmission took me 30 minutes.  I failed, but damnit it works!!  Goonies never say die!</p><p>Code:</p><p>&lt;cfsavecontent variable="strLib"&gt;<br>Four score and {number} years ago,<br>Star Wars was a {adjective} movie.<br>I saw it with two hundred {plural noun}.<br>I need a new {noun} like I need a new {noun} in my head.<br>&lt;/cfsavecontent&gt;</p><p>&lt;cfscript&gt;</p><p>	strLib = Trim(strLib);</p><p>	arForm = ArrayNew(1);<br>	occurence = 1;</p><p>	for(i=1;i lte Len(strLib);i=i+1)<br>	{<br>		character = Mid(strLib, i, 1);</p><p>		if(character eq "{")<br>		{<br>			len = ReFind("\}",strLib,i) - i;<br>			arForm[occurence]  = ReReplace(Mid(strLib,i,len),"[\{\}]","","ALL");<br>			occurence = occurence + 1;<br>		}<br>	}</p><p>&lt;/cfscript&gt;</p><p>&lt;cfoutput&gt;</p><p>&lt;form method="post" action="#ListGetAt(CGI.SCRIPT_NAME,ListLen(CGI.SCRIPT_NAME,'/'),'/')#"&gt;</p><p>&lt;table style="font-family: arial,helvetica,sans-serif;" cellpadding="3"&gt;</p><p>&lt;cfloop from="1" to="#ArrayLen(arForm)#" index="k"&gt;</p><p>	&lt;tr&gt;<br>		&lt;td&gt;#arForm[k]#&lt;/td&gt;<br>		&lt;td&gt;&lt;input type="text" name="#arForm[k]#"&gt;&lt;/td&gt;<br>	&lt;/tr&gt;</p><p>&lt;/cfloop&gt;</p><p>&lt;tr&gt;<br>	&lt;td colspan="2"&gt;&lt;input type="submit" value="Create Madlib"&gt;&lt;/td&gt;<br>&lt;/tr&gt;</p><p>&lt;/table&gt;</p><p>&lt;/form&gt;</p><p>&lt;/cfoutput&gt;</p><p>&lt;cfif CGI.REQUEST_METHOD EQ "Post"&gt;</p><p>	&lt;cfscript&gt;</p><p>		occurence = ListLen(form.fieldnames);</p><p>		if(occurence gt 0)<br>		{<br>			for(l=1;l lte occurence;l=l+1)<br>			{<br>				formElement = lcase(ListGetAt(form.fieldnames,l));</p><p>				temp = form[formElement];</p><p>				if(formElement eq "noun")<br>				{<br>					for(m=1;m lte listlen(temp);m=m+1)<br>					{<br>						strLib = ReReplace(strLib,"\{#formElement#\}","#ListGetAt(temp,m)#");<br>					}<br>				}<br>				else<br>				{<br>					strLib = ReReplace(strLib,"\{#formElement#\}","#temp#");<br>				}	<br>			}		<br>		}</p><p>		strLib = ReReplace(strLib,"[,]",",&lt;br&gt;","ALL");<br>		strLib = ReReplace(strLib,"[.]",".&lt;br&gt;","ALL");<br>	&lt;/cfscript&gt;</p><p>	&lt;cfoutput&gt;#strLib#&lt;/cfoutput&gt;</p><p>&lt;/cfif&gt;</p></div>
	</div>
</div>
		