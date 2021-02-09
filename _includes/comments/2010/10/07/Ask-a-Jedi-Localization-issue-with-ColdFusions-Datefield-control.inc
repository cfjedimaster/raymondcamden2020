
<div class="comment" id="c_1713726812">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726812">1</a> by PaulH
		posted on 10/7/2010 at 8:25 PM
		</div>
		<div class="comment_text"><p>"non-American timezone"? i think you meant locale.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726814">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726814">2</a> by Raymond Camden
		posted on 10/7/2010 at 8:27 PM
		</div>
		<div class="comment_text"><p>I did - thanks. Will edit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726816">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726816">3</a> by David
		posted on 3/29/2012 at 3:51 PM
		</div>
		<div class="comment_text"><p>The mask attribute fails to work if javascript is turned off, I know i'm being awkward but I have to design a form that works with AND without javascript.. and still display correct time formats. Is there a way to accomplish this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726820">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726820">4</a> by Raymond Camden
		posted on 3/30/2012 at 3:44 PM
		</div>
		<div class="comment_text"><p>Wouldn't it just show a simple text field with no interaction then?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726819">5</a> by Richard
		posted on 4/17/2013 at 5:52 PM
		</div>
		<div class="comment_text"><p>Mask does not work if multiple items in form from cfloop or cfquery! See attached below and advise where I am going wrong</p><p>&lt;cfset date1="2012-06-30"&gt;<br>&lt;cfset date_list="2012-07-01,2012-09-30,2012-10-01,2012-12-31"&gt;</p><p>&lt;p&gt;Dates no format&lt;/p&gt;</p><p>&lt;cfoutput&gt;#date1#&lt;br&gt;&lt;/cfoutput&gt;<br>&lt;cfloop list="#date_list#" index="x"&gt;&lt;cfoutput&gt;#x#&lt;br&gt;&lt;/cfoutput&gt;&lt;/cfloop&gt;</p><p>&lt;p&gt;Dates with dateFormat()&lt;/p&gt;</p><p>&lt;cfset setLocale("English (UK)" )&gt;</p><p>&lt;cfoutput&gt;#dateFormat(date1)#&lt;br&gt;&lt;/cfoutput&gt;<br>&lt;cfloop list="#date_list#" index="x"&gt;&lt;cfoutput&gt;#dateformat(x)#&lt;br&gt;&lt;/cfoutput&gt;&lt;/cfloop&gt;</p><p>&lt;h4&gt;Form 1 no Mask&lt;/h4&gt;<br>&lt;cfform name="form1"&gt;<br>    &lt;cfinput name="date1" type="datefield" value="#date1#"&gt;<br>&lt;/cfform&gt;</p><p>&lt;p&gt;&amp;nbsp;&lt;/p&gt;</p><p>&lt;h4&gt; Form2 UK Date Mask (dd/mm/yyyy)&lt;/h4&gt;</p><p>&lt;cfform name="form2"&gt;<br>    &lt;cfinput name="date1" type="datefield" value="#date1#" mask="dd/mm/yyyy"&gt;<br>&lt;/cfform&gt;</p><p>&lt;p&gt;&amp;nbsp;&lt;/p&gt;</p><p>&lt;h4&gt; Form3 Mask with multiple lines - UK mask does not work!&lt;/h4&gt;</p><p>&lt;cfform name="form3"&gt;</p><p>&lt;cfloop list="#date_list#" index="x"&gt;<br>	&lt;cfinput name="date_list" type="datefield" value="#x#" mask="dd/mm/yyyy"&gt;&lt;br&gt;<br>&lt;/cfloop&gt;</p><p>&lt;/cfform&gt;</p><p>Anything I can do about this?</p><p>Regards</p><p>Richard</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726830">6</a> by Richard
		posted on 4/17/2013 at 6:02 PM
		</div>
		<div class="comment_text"><p>...and the drop down date box doesn't work either.</p><p>Regards</p><p>Richard</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713726829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713726829">7</a> by Raymond Camden
		posted on 4/17/2013 at 6:27 PM
		</div>
		<div class="comment_text"><p>Sorry, no help for you here. I strongly recommend *against* using cfinput or any of the form helpers in CF.</p></div>
	</div>
</div>
		