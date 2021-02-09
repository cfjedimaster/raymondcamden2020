
<div class="comment" id="c_1713672100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672100">1</a> by Dominic Watson
		posted on 9/22/2007 at 2:27 AM
		</div>
		<div class="comment_text"><p>Hey Ray, Glad the gladiators are looking into this :). I have been working with Anthony on this also and supplied him my starter template for Facebook, which of course works in CF7:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdev.dominicwatson.co.uk%2Fdownloads%2Ffacebooktemplate.zip%3Aeq6xSdk6yNbbo6fM8Pt-8VP1FEg&amp;cuid=3321886" rel="nofollow noopener" title="http://dev.dominicwatson.co.uk/downloads/facebooktemplate.zip">http://dev.dominicwatson.co...</a></p><p>I don't have a CF8 server to test on as yet but two things:</p><p>1. I am quite certain that Anthony's solution that you quoted will not work. I think he was summarising the same thing as you did with the loop on all form fields, i.e.</p><p> &lt;cfset form[f &amp; "_x"] = form[f]&gt;<br> &lt;cfset form[f] = ""&gt;</p><p>2. If this solution works in CF8 then great! It does not work in CF6.1-7 though. Instead, you must use this (which doesn't work in CF8):</p><p> &lt;cfset form[f &amp; "_x"] = form[f]&gt;<br> &lt;cfset StructDelete(form,f)&gt;</p><p>Regards,</p><p>Dominic</p><p>p.s. I'm just reworking my template now to reflect the CF8 issues, will be publishing it somewhere proper soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672088">2</a> by Dominic Watson
		posted on 9/22/2007 at 2:30 AM
		</div>
		<div class="comment_text"><p>I must aplogise, Anthony was entirely correct and now I see why ;)</p><p>Awesomeness all round!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672108">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672108">3</a> by TJ Downes
		posted on 9/22/2007 at 3:45 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Not sure you if were aware or not but when you use &lt;cfinput type="text" validateAt="onServer" /&gt; ColdFusion generates those exact same tags (hidden fields). So I wouldn't necessarily say nobody is using it, they just may be using it and not know. I know you despise built-in CF validation though. I have yet to have anyone give any valid arguments against it so I would be curious in knowing why it is "evil"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672102">4</a> by Dominic Watson
		posted on 9/22/2007 at 4:09 AM
		</div>
		<div class="comment_text"><p>Why it is evil, by Dominc Watson.</p><p>If an external application sends you a post request containing form fields that match the server-side validator criteria, an error will most likey be thrown. As a 3rd party developer, you may have no control over the names of those post variables and have to hack around it as pointed out in this Facebook example.</p><p>If there was a switch to turn it off, or an interface to change the naming rules, I wouldn't have a problem with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672099">5</a> by Will Tomlinson
		posted on 9/22/2007 at 5:50 AM
		</div>
		<div class="comment_text"><p>Yeah, I use validateat some. It has its own bug too. If you run without JS, submit the form, it presents you with a link on the subsequent error page, which is a JS link. It doesn't take you back because you have JS turned off! :)</p><p>Will</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672104">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672104">6</a> by Raymond Camden
		posted on 9/22/2007 at 7:01 AM
		</div>
		<div class="comment_text"><p>TJ, in the example you gave, you are specifically asking for server side validation. That is different than someone accidentally naming their fields in such a way as to trigger this behavior.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672110">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672110">7</a> by MrBuzzy
		posted on 9/23/2007 at 5:33 AM
		</div>
		<div class="comment_text"><p>Instead of pulling your hair out you could have looked around;<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusiondeveloper.com.au%2Fgo%2Fblog%2F2007%2F06%2F27%2Fvariables-naming-conflict%2F%3AQa07k4Rtc3zyvvHcLXGVEfdw6tE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusiondeveloper.com.au/go/blog/2007/06/27/variables-naming-conflict/">http://www.coldfusiondevelo...</a></p><p>Do check out this in a few days: <a href="http://disq.us/url?url=http%3A%2F%2Fcoldface.riaforge.org%3AHgdiNmkaFDzWxbOFYMp6Jta996E&amp;cuid=3321886" rel="nofollow noopener" title="http://coldface.riaforge.org">http://coldface.riaforge.org</a> <br>I haven't run in to any CF7/8 problems per say. I'm attempting to 'wrap up' the various facebook quirks so we can just get on and build CF apps. Wooo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672092">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672092">8</a> by Raymond Camden
		posted on 9/23/2007 at 6:24 AM
		</div>
		<div class="comment_text"><p>Heh, speaking for myself, but I bet Ben N would agree, it was more fun trying to solve the problem myself. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672107">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672107">9</a> by MrBuzzy
		posted on 9/23/2007 at 6:27 AM
		</div>
		<div class="comment_text"><p>Of course :)<br>Looking again at that post, you were there anyway ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672106">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672106">10</a> by Simon Horwith
		posted on 9/23/2007 at 4:25 PM
		</div>
		<div class="comment_text"><p>I wouldn't sy that nobody uses the built-in server side validation.  It can actually be quite a time saver for folks.  hat said, I agree entirely that it'd be nice to be able to turn it off.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672114">11</a> by Ben Nadel
		posted on 9/23/2007 at 8:05 PM
		</div>
		<div class="comment_text"><p>I definitely would agree :) Solving problems is much for fun than looking them up. Plus, a problem solved is much better remembered than a solution learned.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672111">12</a> by Dominic Watson
		posted on 9/24/2007 at 12:35 AM
		</div>
		<div class="comment_text"><p>For anyone looking at building Facebook apps using FBML, the headache has been borne for you:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ffbmlstarter.riaforge.org%2F%3A49-lFxxwFwFmQHVzVsZWIbPbI1w&amp;cuid=3321886" rel="nofollow noopener" title="http://fbmlstarter.riaforge.org/">http://fbmlstarter.riaforge...</a></p><p>I made a final version of this yesterday after fixing the bug mentioned in this article (it was working before with CF7)</p><p>Enjoy!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672113">13</a> by Russ "Snake" Michael
		posted on 9/28/2007 at 12:59 AM
		</div>
		<div class="comment_text"><p>HA! I had this same problem a very long time ago, must be on CF5 as there were no CFC's back then and I solved pretty much the same way but using application.cfm<br>I also did actually figure out how to disable this validation check on the server, but even if I could remember how I did it wouldn't on current version of CF, so I wont bother trying to remember :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672112">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672112">14</a> by Harel Malka
		posted on 11/15/2007 at 9:13 PM
		</div>
		<div class="comment_text"><p>I've been ranting about this since CF5 and every release this auto validation has crept up and bit me somewhere. <br>I personally think its rude imposing such a 'feature' on people without asking. Not to mention this without such hacks this renders CF almost unusable for 3rd party integration  as you never know what will hit you and when... <br>I just can't get why nobody ever did anything about it. A simple switch to turn this off from cfadmin (or another bloody hidden form field) is all that's needed! <br>This makes CF looks so silly...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672115">15</a> by Tim
		posted on 12/14/2007 at 1:32 AM
		</div>
		<div class="comment_text"><p>I am still getting a 'Form entries are incomplete or invalid.' response when using Dominic's template application. I've literally changed nothing in his template except for putting in my api key, secret key, and fixing the name in the &lt;cfapplication&gt; tag. I'm using CF 8 - any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672117">16</a> by Dominic Watson
		posted on 12/14/2007 at 2:13 AM
		</div>
		<div class="comment_text"><p>Hey Tim, are you using the very latest version downloaded from Riaforge?</p><p>If so, you can mail me at watson dot dominic at googlemail dot com. Maybe we can work it out (this beast never seems to die!).</p><p>Dominic</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672116">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672116">17</a> by Tim
		posted on 12/14/2007 at 2:15 AM
		</div>
		<div class="comment_text"><p>Yup, sure am - I'll shoot ya something.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672119">18</a> by MrBuzzy
		posted on 12/17/2007 at 1:06 PM
		</div>
		<div class="comment_text"><p>Also watch out for FORM.FB_SIG_PROFILE_UPDATE_TIME.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672118">19</a> by Dominic Watson
		posted on 12/17/2007 at 1:33 PM
		</div>
		<div class="comment_text"><p>Actually, what is great about Anthony's simple fix is that this newish field is not a problem unless there is also a form field called FB_SIG_UPDATE_PROFILE.</p><p>It is down to the way the validation works. i.e. You can submit this form without causing an error:</p><p>&lt;h1&gt;Facebook test&lt;/h1&gt;<br>&lt;cfif IsDefined('form.fieldnames')&gt;<br>	&lt;cfdump var="#form#"&gt;<br>&lt;/cfif&gt;<br>&lt;form action="" method="post"&gt;<br>	&lt;input type="hidden" name="FB_SIG_TIME" value="646574.413"&gt;<br>	&lt;input type="submit" value="Test it!"&gt;<br>&lt;/form&gt;</p><p>If you do this however, you get the validation error:</p><p>&lt;h1&gt;Facebook test&lt;/h1&gt;<br>&lt;cfif IsDefined('form.fieldnames')&gt;<br>	&lt;cfdump var="#form#"&gt;<br>&lt;/cfif&gt;<br>&lt;form action="" method="post"&gt;<br>	&lt;input type="hidden" name="FB_SIG_TIME" value="646574.413"&gt;<br>        &lt;input type="hidden" name="FB_SIG" value="646574.413"&gt;<br>	&lt;input type="submit" value="Test it!"&gt;<br>&lt;/form&gt;</p><p>This demonstrates that the _TIME fields are not being validated, it is any field with the same name WITHOUT the _TIME that gets validated. If you blank that field in Application.cfm it will pass the validation.</p><p>Dominic</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672120">20</a> by Huge
		posted on 1/21/2008 at 3:59 PM
		</div>
		<div class="comment_text"><p>I solved the problem with:</p><p>&lt;!--- 1. cf6+ tries server-side form validation on various form field names, fix: ---&gt;<br> 	&lt;cfset s_trouble = "integer,float,range,date,time,eurodate,key,expires,added,friends,canvas,user,method,fieldnames,fix"&gt;<br>	&lt;cfloop list="#StructKeyList(form)#" index="formField"&gt;<br>		&lt;cfif ListFindNoCase(s_trouble, ListLast(formField,'_'))&gt;<br>			&lt;cfset StructInsert(form, formField &amp; '_CFFIX', form[formField])&gt;<br>			&lt;cfset StructDelete(form, formField)&gt;<br>		&lt;/cfif&gt;<br>	&lt;/cfloop&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672123">21</a> by Huge
		posted on 1/21/2008 at 4:15 PM
		</div>
		<div class="comment_text"><p>it was an error, i had a cfabort.</p><p>Sorry, i continue with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672121">22</a> by Huge
		posted on 1/21/2008 at 7:03 PM
		</div>
		<div class="comment_text"><p>Now I found a solution:</p><p>Maybe some of ours have in Application.cfm(cfc) this code:</p><p>&lt;cfif StructKeyExists(form, "fb_sig")&gt;<br>	&lt;cfinclude template="fb_post.cfm"&gt;<br>&lt;cfelse&gt;<br>	&lt;cfinclude template="fb_get.cfm"&gt;<br>&lt;/cfif&gt;</p><p>And when CF procces de page, load de index.cfm page.</p><p>It will be the normal processing, but I dont know why, but if you write this:</p><p>&lt;cfif StructKeyExists(form, "fb_sig")&gt;<br>	&lt;cfinclude template="fb_post.cfm"&gt;<br>&lt;cfelse&gt;<br>	&lt;cfinclude template="fb_get.cfm"&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfinclude template="index.cfm"&gt; <br>&lt;cfabort&gt;</p><p>The page loads correctly... and why?? I dont know, but it loads....</p><p>Urgggg!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672122">23</a> by Dominic Watson
		posted on 1/21/2008 at 7:26 PM
		</div>
		<div class="comment_text"><p>Hey Huge, looks like you're using the Facebook starter kit. You shouldn't need to do anything. As mentioned in this blog, the fix you are using crashes in CF8. The most straightforward solution is to do this in Application.cfm/cfc (works in 6.1 - 8):</p><p>&lt;cfif StructKeyExists(form, "FB_SIG")&gt;<br>&lt;cfset form.FB_SIG_COPY = form.FB_SIG&gt;<br>&lt;cfset form.FB_SIG = ""&gt;<br>&lt;/cfif&gt;</p><p>If you download the latest version of the starter kit, this fix is implemented and it should work straightaway for you.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ffbmlstarter.riaforge.org%2F%3A49-lFxxwFwFmQHVzVsZWIbPbI1w&amp;cuid=3321886" rel="nofollow noopener" title="http://fbmlstarter.riaforge.org/">http://fbmlstarter.riaforge...</a></p><p>You may need to rename application.cfm to Application.cfm if you are having problems. I am fixing this now.</p><p>Dominic</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672127">24</a> by Huge
		posted on 1/22/2008 at 12:15 PM
		</div>
		<div class="comment_text"><p>Thanks!!!</p><p>I have downloaded the latest version and I amd going to test it.</p><p>Sorry from my english, i write from spain ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672128">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672128">25</a> by Jason Delmore
		posted on 9/30/2008 at 10:37 PM
		</div>
		<div class="comment_text"><p>How about playing hide and seek with the variables.</p><p>Application.cfc<br>&lt;cfcomponent&gt;<br>   &lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2Fthis.name%3AEm-S9q6F4e-8KUeib7Eeo3ysjlY&amp;cuid=3321886" rel="nofollow noopener" title="this.name">this.name</a> = "sep09helloworld"&gt;<br>   &lt;cfset url.form = structnew()/&gt;<br>   &lt;cfset structappend(url.form,form)/&gt;<br>   &lt;cfset structclear(form)/&gt;<br>   &lt;cffunction name="onRequestStart"&gt;<br>      &lt;cfset structappend(form,url.form)/&gt;<br>      &lt;cfset structdelete(url,"form")/&gt;<br>   &lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p><p>This application.cfc will store them in URL as a struct (which is left alone), then retrieve them from URL before processing the request.  You won't need to change code on either end of your app.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672126">26</a> by Ray Varner
		posted on 7/24/2010 at 2:52 AM
		</div>
		<div class="comment_text"><p>I've just dropped into your blog post linked from Adobe devnet. Great article by the way. I've not had the chance to experiment with this issue but I do have a question:</p><p>Can the exception be caught in the onError() method in application.cfc? From your posting <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%3Fmode%3Dentry%26entry%3DED9D4058-E661-02E9-E70A41706CD89724%3AaJL2zB8i0eM2ELXLgs8P2LNRAD8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm?mode=entry&amp;entry=ED9D4058-E661-02E9-E70A41706CD89724">http://www.coldfusionjedi.c...</a></p><p>if (arguments.exception.rootCause eq "coldfusion.runtime.AbortException") {return;}</p><p>Could a similar technique be used? "coldfusion.runtime.ValidationException" ... or whatever CF calls in the error.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672129">27</a> by Raymond Camden
		posted on 7/25/2010 at 3:57 AM
		</div>
		<div class="comment_text"><p>No Ray - and that's what made tis so much a pain - it was near impossible to avoid.</p><p>CF9 allows you to turn it off though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672130">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672130">28</a> by Ben Hamelin
		posted on 8/3/2010 at 10:01 PM
		</div>
		<div class="comment_text"><p>Many thanks, to all involved!<br>I love how a 2007 post just solved my 2010 problem.<br>Still on CF8 but even so, a three year old "bug" in the web world? Ancient history, or so you would think!<br>Wonder if the FB developers through this in as a knock against CF?<br>Hmmmm.........</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672131">29</a> by Jason
		posted on 9/10/2010 at 1:42 AM
		</div>
		<div class="comment_text"><p>I turned serverSideFormValidation off in application.cfm but I'm still getting the "Form entries are incomplete or invalid" error coming from Facebook. Any other ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672132">30</a> by Raymond Camden
		posted on 9/10/2010 at 1:50 AM
		</div>
		<div class="comment_text"><p>Can you get more of the error? It may be something else.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672134">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672134">31</a> by Jason
		posted on 9/10/2010 at 1:52 AM
		</div>
		<div class="comment_text"><p>Same error from the FB_SIG_TIME form field:<br>Form entries are incomplete or invalid.<br>1284067529.9557<br>Go back and correct the problem.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672133">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672133">32</a> by Raymond Camden
		posted on 9/10/2010 at 1:53 AM
		</div>
		<div class="comment_text"><p>And you are on CF9 I assume?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672135">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672135">33</a> by Jason
		posted on 9/10/2010 at 1:55 AM
		</div>
		<div class="comment_text"><p>Yes, 9.0.1. I even restarted CF to make sure the new application setting was in place. This is what I added to cfapplication: serverSideFormValidation="NO"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672137">34</a> by Raymond Camden
		posted on 9/10/2010 at 1:57 AM
		</div>
		<div class="comment_text"><p>Can you pastebin the entire file so I can see? Also, can you temporarily try rewriting in App.cfc? Maybe this feature is broken in app.cfm, which is pretty much deprecated to be honest.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672140">35</a> by Jason
		posted on 9/10/2010 at 2:07 AM
		</div>
		<div class="comment_text"><p>Probably can't. The code is dynamic, user-generated code that is included in a customer's Facebook site and submits back to their website which is run on our system. This is our main app so I can't switch to app.cfc for testing. I can't find the Adobe CF bug website to search...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672138">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672138">36</a> by Raymond Camden
		posted on 9/10/2010 at 2:11 AM
		</div>
		<div class="comment_text"><p>Hmm, well, I'm out of answers. :) May want to see if trusted cache is turned on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672139">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672139">37</a> by Jason
		posted on 9/10/2010 at 5:55 PM
		</div>
		<div class="comment_text"><p>Ray, is there an official bug site for CF? I'd like to search and see if this listed. Thx</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672141">38</a> by Raymond Camden
		posted on 9/10/2010 at 5:58 PM
		</div>
		<div class="comment_text"><p>Yep: <a href="http://disq.us/url?url=http%3A%2F%2Fcfbugs.adobe.com%2Fcfbugreport%2Fflexbugui%2Fcfbugtracker%2Fmain.html%3A_X3SytQfggPoTF_n55sEsA7v1EA&amp;cuid=3321886" rel="nofollow noopener" title="http://cfbugs.adobe.com/cfbugreport/flexbugui/cfbugtracker/main.html">http://cfbugs.adobe.com/cfb...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672142">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672142">39</a> by Jason
		posted on 9/10/2010 at 6:07 PM
		</div>
		<div class="comment_text"><p>Thanks. I found that site, but it kept forcing me to CF Builder bug site yesterday. Worked today, posted the bug, and saw your post recommending Adobe adds the feature. Guess you forgot to say "add the feature AND make it functional"!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672143">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672143">40</a> by Raymond Camden
		posted on 9/10/2010 at 6:13 PM
		</div>
		<div class="comment_text"><p>Well, to be clear, it does work for me. But I've only tested with Application.cfc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672144">41</a> by Raymond Camden
		posted on 9/10/2010 at 6:17 PM
		</div>
		<div class="comment_text"><p>Actually, it may be something else. I just tested on CF901 and it worked as expected. Here is my application.cfm:</p><p>&lt;cfapplication name="ssformtest" serversideformvalidation="false"&gt;</p><p>and here is test.cfm:</p><p>&lt;form action="test.cfm" method="post"&gt;<br>&lt;input type="text" name="name_required"&gt;<br>&lt;input type="submit"&gt;<br>&lt;/form&gt;</p><p>as soon as I toggle false to true, it triggers, and going back makes it not trigger.</p><p>So perhaps you have something else going on? Maybe another application.cfm in the request is resetting it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672145">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672145">42</a> by Ofeargall
		posted on 3/4/2011 at 3:20 AM
		</div>
		<div class="comment_text"><p>Ray, I just implemented this on a first-time FB form for one of my clients. Worked like a charm on CF8. Thanks for working through this so I could have success.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672146">43</a> by Raymond Camden
		posted on 3/4/2011 at 7:22 PM
		</div>
		<div class="comment_text"><p>Glad to help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672147">44</a> by John
		posted on 9/1/2011 at 7:45 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks for the post, worked nicely. I knew what the problem was but couldn't come up with a solution.  You are a life saver!</p></div>
	</div>
</div>
		