
<div class="comment" id="c_1713671620">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671620">1</a> by vishy
		posted on 9/11/2007 at 5:56 PM
		</div>
		<div class="comment_text"><p>cfajaxproxy has one more important bug in dealing with symbolic links. you are forced to put the cfc's in wwwroot folder if your default application is based on symbolic links. Adobe has recorded it as bug but and this will also be resolved soon.</p><p>vishy</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671616">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671616">2</a> by Rakshith
		posted on 10/7/2007 at 5:28 PM
		</div>
		<div class="comment_text"><p>Ray,<br>    The newline bug which you have reported has already been fixed. But it is just that it could not make it into the first hot fix.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671615">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671615">3</a> by Vincent Krist
		posted on 3/4/2008 at 1:19 AM
		</div>
		<div class="comment_text"><p>I just applied hotfix 2 and it does not mention a fix for the issue of newlines and cfajaxproxy. In addition, I am still experiencing the issue.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671617">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671617">4</a> by Raymond Camden
		posted on 3/4/2008 at 1:21 AM
		</div>
		<div class="comment_text"><p>Be patient. I know for a fact this bug is logged with Adobe. I'm sure the next update will have the fix.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671618">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671618">5</a> by Vincent Krist
		posted on 3/4/2008 at 2:16 AM
		</div>
		<div class="comment_text"><p>I suppose I should clarify a little more. I am including a fairly simple example of code from a file named test.cfm that shows the bug in CFAJAXPROXY:</p><p>&lt;cfif IsDefined("form.user_comment")&gt;<br>	&lt;cfset request.textarea_field_value = form.user_comment&gt;<br>&lt;cfelse&gt;<br>	&lt;cfset request.textarea_field_value = ""&gt;<br>&lt;/cfif&gt;<br>&lt;cfif IsDefined("url.call_cfajaxproxy")&gt;<br>	&lt;cfset request.call_cfajaxproxy = url.call_cfajaxproxy&gt;<br>&lt;cfelse&gt;<br>	&lt;cfif IsDefined("form.call_cfajaxproxy")&gt;<br>		&lt;cfset request.call_cfajaxproxy = form.call_cfajaxproxy&gt;<br>	&lt;cfelse&gt;<br>		&lt;cfset request.call_cfajaxproxy = "N"&gt;<br>	&lt;/cfif&gt;<br>&lt;/cfif&gt;<br>&lt;!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2FTR%2Fxhtml1%2FDTD%2Fxhtml1-transitional.dtd%3AlsD79NC9EpzB4LCkih033Se6Csw&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">http://www.w3.org/TR/xhtml1...</a>"&gt;<br>&lt;html xmlns="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3.org%2F1999%2Fxhtml%3AA6NInarpbzWm6HKZDXlFrwZefzc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3.org/1999/xhtml">http://www.w3.org/1999/xhtml</a>"&gt;<br>&lt;head&gt;<br>&lt;SCRIPT LANGUAGE="JavaScript2.0" TYPE="text/javascript"&gt;<br>function jsf_test() {var jsv_just_testing = 1;}<br>&lt;/SCRIPT&gt;</p><p>&lt;meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" /&gt;<br>&lt;title&gt;CFAJAXPROXY BUG&lt;/title&gt;<br>&lt;/head&gt;</p><p>&lt;body&gt;<br>This was tested with an Internet Explorer 7 browser on WinXP and shows that CFAJAXPROXY has a bug in it related to new lines in textarea <br>fields. You can make the "Unterminated string constant" error occur by donig the following:<br>&lt;ol&gt;<br>&lt;li&gt;Enter "1" followed by the Enter key to created a newline&lt;/li&gt;<br>&lt;li&gt;Enter "2" on the new line&lt;/li&gt;<br>&lt;li&gt;Click the Submit button&lt;/li&gt;<br>&lt;li&gt;<br>&lt;cfif request.call_cfajaxproxy EQ "Y"&gt;<br>	Still think this is not a problem with CFAJAXPROXY? <br>	&lt;a href="test.cfm?call_cfajaxproxy=N"&gt;Click here&lt;/a&gt; to try &lt;strong&gt;without&lt;/strong&gt; the call to cfajaxproxy.<br>&lt;cfelse&gt;<br>	&lt;a href="test.cfm?call_cfajaxproxy=Y"&gt;Click here&lt;/a&gt; to try &lt;strong&gt;with&lt;/strong&gt; the call to cfajaxproxy.<br>&lt;/cfif&gt;<br>&lt;/li&gt;<br>&lt;/ol&gt;<br>&lt;cfif IsDefined("form.user_comment")&gt;<br>	Values posted at &lt;cfoutput&gt;#TimeFormat(now(),"h:mm:ss tt")#&lt;/cfoutput&gt;<br>&lt;/cfif&gt;<br>&lt;CFFORM ACTION="test.cfm" METHOD="POST" id="testit" name="test_form"&gt;<br>&lt;TEXTAREA NAME="user_comment" COLS="50" ROWS="10"&gt;&lt;cfoutput&gt;#request.textarea_field_value#&lt;/cfoutput&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671614">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671614">6</a> by Raymond Camden
		posted on 3/4/2008 at 2:54 AM
		</div>
		<div class="comment_text"><p>Um - not sure why you need to clarify. It is _definitely_ a bug, and Adobe _definitely_ has it reported. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671621">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671621">7</a> by Vincent Krist
		posted on 3/4/2008 at 2:58 AM
		</div>
		<div class="comment_text"><p>Sorry, I didn't see your reply before I clarified. Thanks for the information.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671613">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671613">8</a> by Vincent Krist
		posted on 3/14/2008 at 8:34 AM
		</div>
		<div class="comment_text"><p>I just installed HOTFIX 3 and it is still a problem. There is also nothing in the HOTFIX 3 release notes that indicates it was fixed.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fkb.adobe.com%2Fselfservice%2FviewContent.do%3FexternalId%3Dkb403070%26sliceId%3D1%3AO21AVxw_ItzGQ_ZxwzESioFm-4U&amp;cuid=3321886" rel="nofollow noopener" title="http://kb.adobe.com/selfservice/viewContent.do?externalId=kb403070&amp;sliceId=1">http://kb.adobe.com/selfser...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713671610">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713671610">9</a> by Raymond Camden
		posted on 3/14/2008 at 6:40 PM
		</div>
		<div class="comment_text"><p>It will be. I know it's recorded. Don't forget Adobe is working on an update. Not a hotfix, but an update.</p></div>
	</div>
</div>
		