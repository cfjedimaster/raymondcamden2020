
<div class="comment" id="c_1713672745">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672745">1</a> by Michael Brennan-White
		posted on 10/3/2007 at 4:39 PM
		</div>
		<div class="comment_text"><p>My site is down also on DailyRazor.  Mine doesn't even use createobject(), I use cfinvoke which is pretty much the same thing I guess.</p><p>Of course this happens immediately after I paid for 3 months of hosting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672748">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672748">2</a> by todd sharp
		posted on 10/3/2007 at 4:56 PM
		</div>
		<div class="comment_text"><p>So here is their reply:</p><p>"recently, we found few security critical tags and functions are still enabled on your server. They are disabled now, please check the list, and rewrite your application accordingly:</p><p>CF tags:<br>CFCOLLECTION<br>CFCONTENT<br>CFEXECUTE<br>CFLOG<br>CFOBJECT<br>CFOBJECTCACHE<br>CFREGISTRY</p><p>CF functions:<br>SetProfileString<br>CreateObject(COM)<br>CreateObject(CORBA)<br>CreateObject(JAVA)</p><p>CreateObject and CreateObject (webservice) are still enabled.</p><p>We apologize for the inconvenience caused by this change, but there is no way to have it reverted back on shared hostings.<br>Also, this change has not been announced, because it was enough urgent, and there are not so much customers who uses restricted tags. We are sorry for the fact not to update you, but as there are around 5-7 customers affected (from our previous experience), that is better not to announce it server wide and bother the rest."</p><p>So apparently createObject() is not blocked (but cfobject is??) - and blocking cfcontent and setProfileString (which is probably what is breaking blogcfc)???</p><p>5-7 customers??  I find it hard to believe that only 5-7 customers are using one or more of the tags/functions above!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672747">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672747">3</a> by todd sharp
		posted on 10/3/2007 at 5:23 PM
		</div>
		<div class="comment_text"><p>So all of the sudden my (and Luis') sites are back up....but for how long?</p><p>(Guess they didn't like my emails -or Ray's post here)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672751">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672751">4</a> by sal
		posted on 10/3/2007 at 7:01 PM
		</div>
		<div class="comment_text"><p>I have a clients site hosted on daily razor! in which I highly don't recommend, but my guest book in which I use createObject(), seems to be working fine. (9am 10/03) Although  Im instantiating a CFC...</p><p>cheers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672755">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672755">5</a> by Matt Williams
		posted on 10/3/2007 at 7:18 PM
		</div>
		<div class="comment_text"><p>Just say no to shared hosting and yes to Virtual Private Server (VPS) hosting.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672749">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672749">6</a> by Sumedha
		posted on 10/3/2007 at 8:47 PM
		</div>
		<div class="comment_text"><p>I have been hosted with <a href="http://disq.us/url?url=http%3A%2F%2FHostingAtoZ.com%3ANCeSmO7b5PWJ1HHaMNmEUB5HAYg&amp;cuid=3321886" rel="nofollow noopener" title="HostingAtoZ.com">HostingAtoZ.com</a> for a while and do enable createObject tag. I have not see an noticable issues with the host as yet :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672754">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672754">7</a> by Andrew Scott
		posted on 10/4/2007 at 5:51 AM
		</div>
		<div class="comment_text"><p>I also host at HostingAtoZ, but they originally had CreateObject, cfinvoke etc disabled. Till I complained about it, I am not just trying to get them to switch profilesetting tags function on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672752">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672752">8</a> by sumedha
		posted on 10/8/2007 at 12:25 PM
		</div>
		<div class="comment_text"><p>Yes by default they disable a few tags and functions. And as they have mentioned in their knowledge base you have to mail them to create a sandbox for your site which is free. This will enabled all the restricted tags and functions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672746">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672746">9</a> by Abiud Zerubabel
		posted on 10/13/2007 at 1:13 AM
		</div>
		<div class="comment_text"><p>First, off all we would like to apologize for the inconvenience caused from our end. However, as you will see from the explanation below, what we did was a best choice we had at that moment.</p><p>On top of that , please keep in mind, that our number one goal is the satsfaction of our custmers, while we donot want to have customers dissatisfied or frustrated, under no circumstances things got out of our control.</p><p>To closely observe the  issue itself. Dailyrazor doesnot offer these tags . Infact we already have listed in our FAQ the list of tags and functions that are disabled.  <br>Recently, we found that we could safely enable two functions (createobject and createobject(webservice)). However, we realized, that a few servers had these tags/functions in restricted list, thr guy who set up the servers, forgot to enable sandbox security, and because of that restrictions  were not in effect.</p><p>We assumed that there were around 50-80 real coders but later on we counted 70, 26 with cfcontent, 18 with setprofilestring, and 16 with createobject(java)) who may affect restricted tags on all servers, and decided to put restrictions back to effect without notifications.</p><p>Main reasons were:</p><p>1) every of tags/functions disabled allows to get full access to the server (few of them may lead to the same result).<br>2) there is a small difference between major functionality changes, and security changes that may affect functionality (70 customers off the  1300 were affected servers). <br>we all announce the First. Because things was out off control the  Second ones were announced whenever it was possible.<br>3) we figured we would not be able to find out owners of apps with restricted tags within a reasonable time.<br>4) notifying all customers on the servers is probably a bad idea, not because of 'security through obscurity', but because it may announce them possibility to take malicious actions before could be disabled.</p><p>Our staff were planning  to announce it later, after the change, however  decided not to do so and only answer to those who complain or ask. (bad idea as I can see now),</p><p>we apologise for the inconvinience, we have never intended to niehter disappoint nor  dissatisfy our custmoers. However we had no option but to ahead an disable incause of that  some custmer might find out that their web-site is down without any announcement from our end</p><p>We  got back 15 (14 with 2 tickets about the same issue)complaints - 1 canceled and 8 of the complaints got fixed as result. The rest of tickets belongs to your community (we saw these customers in your blogs):</p><p>Todd Sharp<br>Steve Eller<br>Oscar Arevalo</p><p>And you. these four people stopped the our entire process, so we had no choice but to enable the tags back temporarily.</p><p>This suctemporay delay gave us a time to get a full list of customers affected by the change. Shortly we will  be announcining to 70 customers who were affected.</p><p>Currently we are looking for a workaround for this issue please feel free to give as any ideas or stratgies you might think of that would help us in this All customers will be announced and have time to rewrite apps or transfer their sites to any other service.</p><p>List of workarounds:</p><p>---<br>1) cfcontent tag- can be simply replaced with a bit of additional coding and cfheader tag<br>2) createobject (java) function:</p><p> - used for get hostname. Needed only to provide developers the  way to include machine specific config without rewriting main part of app. And can be simply rewritten to have server name predefined.<br> - used to do application internalization. There is an official<br> globalization manual from Macromedia - and all of such apps should be  rewritten accordingly (in the fact, they should follow it from the  scratch):</p><p><a href="http://disq.us/url?url=http%3A%2F%2Flivedocs.adobe.com%2Fcoldfusion%2F7%2Fhtmldocs%2F00001195.htm%231141005%3AYamjEK8WusLwU5MsxN7XYLWSdZk&amp;cuid=3321886" rel="nofollow noopener" title="http://livedocs.adobe.com/coldfusion/7/htmldocs/00001195.htm#1141005">http://livedocs.adobe.com/c...</a></p><p>3) setprofilestring for blogCFC:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Ftrond.ulseth.no%2Findex.cfm%2F2007%2F6%2F5%2FNow-running-BlogCFC-without-getsetProfileString%3AxfqL_BsCuscRXKQjQWhdnEyPHDE&amp;cuid=3321886" rel="nofollow noopener" title="http://trond.ulseth.no/index.cfm/2007/6/5/Now-running-BlogCFC-without-getsetProfileString">http://trond.ulseth.no/inde...</a></p><p>please post your opnion and comments here<br><a href="http://disq.us/url?url=http%3A%2F%2Fforums.dailyrazor.com%3APSDNa1G2udW-xapraNqbhL62fA4&amp;cuid=3321886" rel="nofollow noopener" title="http://forums.dailyrazor.com">http://forums.dailyrazor.com</a></p><p>---</p><p>Thanks<br>Support-MK,<br>DailyRazor Hosting Support</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672753">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672753">10</a> by imomin
		posted on 12/12/2007 at 9:57 AM
		</div>
		<div class="comment_text"><p>DailyRazor screwed up all my application that used cfcontent, SetProfileString and cfobject. I am trying to figure out how to convert binary image data from the database to JPEG. Also, AjaxCFC gives me random error alerts.<br>How many more DailyRazor victims do we have?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672750">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672750">11</a> by imomin
		posted on 12/12/2007 at 10:18 AM
		</div>
		<div class="comment_text"><p>People at DailyRazor are keep saying cfcontent can be replaced with cfheader.<br>Can you replace following code using cfheader.</p><p>&lt;cfquery name="viewImage" datasource="#dsn#"&gt;<br>	SELECT picture as images FROM Person  where  personID = #val(url.ID)#<br>&lt;/cfquery&gt;</p><p>&lt;cfif len(viewImage.images) GT 0&gt;<br>&lt;cfcontent type="image/jpeg" variable="#viewImage.images#"&gt; <br>&lt;cfelse&gt;<br>&lt;img src="/no-image-small.gif" border="0" &gt;<br>&lt;/cfif&gt;</p><p>------------------------------------------</p><p>I can do following but these way I will run our of desk space in weeks.<br>&lt;cfset destination = "C:\Inetpub\vhosts\<a href="http://disq.us/url?url=http%3A%2F%2Fblah.com%3AG9JqbiUeuDPbhywaO_zUmE_UOio&amp;cuid=3321886" rel="nofollow noopener" title="blah.com">blah.com</a>\httpdocs\"&gt;<br>&lt;cfset imageFile = CreateUUID() &amp; ".jpg"&gt;</p><p>&lt;cffile action="write" file="#destination##imageFile#" output="#ToBinary(viewImage.images)#" addnewline="no" charset="utf-8" fixnewline="no"&gt;</p><p>&lt;img src="/&lt;cfoutput&gt;#imageFile#&lt;/cfoutput&gt;"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672758">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672758">12</a> by imomin
		posted on 12/13/2007 at 4:05 AM
		</div>
		<div class="comment_text"><p>Found the solution. Thanks to my buddy Kenton Gray</p><p>&lt;cfquery name="viewImage" datasource="#dsn#"&gt;<br>   SELECT picture as images FROM Person where personID = #val(url.ID)#<br>&lt;/cfquery&gt;</p><p>&lt;cfset pic = viewImage.images&gt;</p><p>&lt;cfscript&gt;<br>    context = getPageContext();<br>    context.setFlushOutput(false);<br>    response = context.getResponse().getResponse();<br>    out = response.getOutputStream();<br>    response.setContentType("image/jpeg");<br>    response.setContentLength(arrayLen(pic));<br>    out.write(pic);<br>    out.flush();<br>    out.close();<br>&lt;/cfscript&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672757">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672757">13</a> by Nathan Stanford
		posted on 4/7/2008 at 11:13 PM
		</div>
		<div class="comment_text"><p>I am going to be looking at leaving DailyRazor.  I guess a low price is too low.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713672759">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713672759">14</a> by todd sharp
		posted on 4/7/2008 at 11:26 PM
		</div>
		<div class="comment_text"><p>They tried to bill me last week to renew.  6 months after this whole fiasco...</p></div>
	</div>
</div>
		