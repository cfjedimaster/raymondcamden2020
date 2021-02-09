
<div class="comment" id="c_1713665975">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665975">1</a> by Roberto
		posted on 5/31/2007 at 7:48 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>ColdFusion.Grid.refresh<br>not <br>ColdFusion.Grid.Refresh</p><p>:o)</p><p>Rob</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665972">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665972">2</a> by Raymond Camden
		posted on 5/31/2007 at 7:54 PM
		</div>
		<div class="comment_text"><p>Oops. Fixed in the zip. Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665973">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665973">3</a> by Jason
		posted on 5/31/2007 at 8:03 PM
		</div>
		<div class="comment_text"><p>Ray-</p><p>Nice stuff.  But......tried it out, and I'm getting</p><p>ColdFusion.Grid.Refresh is not a function in the onclick of the button.  What am I missing?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665974">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665974">4</a> by Jason
		posted on 5/31/2007 at 8:03 PM
		</div>
		<div class="comment_text"><p>beat me to it....thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665978">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665978">5</a> by Lola LB
		posted on 6/1/2007 at 5:21 AM
		</div>
		<div class="comment_text"><p>It's that simple?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665976">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665976">6</a> by Raymond Camden
		posted on 6/1/2007 at 5:25 AM
		</div>
		<div class="comment_text"><p>Lola - yes. I had to do a bit of magic to get the query ok for the grid. It took... one more function. I'll blog it tomorrow.  (And to be fair, I had to make my cfc notice the paging. Wow, that was hard too. Really. Ahem.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665977">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665977">7</a> by sophek
		posted on 6/1/2007 at 8:15 AM
		</div>
		<div class="comment_text"><p>Am I doing something wrong? I'm getting this errors in firebug.</p><p>ColdFusion is not defined<br>[Break on this error] ColdFusion.Ajax.importTag('CFWINDOW');<br>h127424.cf8beta.c... (line 43)<br>ColdFusion is not defined<br>[Break on this error] ColdFusion.Ajax.importTag('CFFORM');<br>h127424.cf8beta.c... (line 47)<br>ColdFusion is not defined<br>[Break on this error] ColdFusion.Ajax.importTag('CFGRID');<br>h127424.cf8beta.c... (line 65)<br>ColdFusion is not defined<br>[Break on this error] ColdFusion.objectCache['reportsGrid'] = new ColdFusion.Grid.Actions('CFGRID11...<br>h127424.cf8beta.c... (line 69)<br>ColdFusion is not defined<br>[Break on this error] };ColdFusion.Event.registerOnLoad(_cf_bind_init_1180671087207);<br>h127424.cf8beta.c... (line 87)<br>ColdFusion is not defined<br>[Break on this error] };ColdFusion.Event.registerOnLoad(_cf_window_init_1180671087208);</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665979">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665979">8</a> by Raymond Camden
		posted on 6/1/2007 at 5:35 PM
		</div>
		<div class="comment_text"><p>Odd - is your CFIDE folder correctly defined?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713665980">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713665980">9</a> by David
		posted on 6/1/2007 at 9:07 PM
		</div>
		<div class="comment_text"><p>I found that in dealing with <a href="http://disq.us/url?url=http%3A%2F%2FHostMySite.com%3AFRRWvXOBaAqJK5tgxCGpNvFXITE&amp;cuid=3321886" rel="nofollow noopener" title="HostMySite.com">HostMySite.com</a>, you have to contact their support people for them to add the /CFIDE mapping for you. They don't do it automatically. So make sure you ask them to map it. At least thats what happened to me...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666064">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666064">10</a> by AJ
		posted on 6/6/2007 at 4:28 AM
		</div>
		<div class="comment_text"><p>What is a good zip code to use?<br>I have tried 90502 - but it is not returning any records :-)</p><p>I don't seem to be getting any errors.</p><p>Do I need my own key/licence?</p><p>Thx<br>Andrew</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666061">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666061">11</a> by Raymond Camden
		posted on 6/6/2007 at 5:14 AM
		</div>
		<div class="comment_text"><p>Try 90210. Yes, you do need your own license - unless I kept mine in the zip. If I did - I'm a bad Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666054">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666054">12</a> by Joe Danziger
		posted on 6/8/2007 at 8:40 PM
		</div>
		<div class="comment_text"><p>Trying to download the zip but getting a "page cannot be found" error</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666063">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666063">13</a> by Raymond Camden
		posted on 6/8/2007 at 8:58 PM
		</div>
		<div class="comment_text"><p>Fixed. Forgot to carry it over I guess.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666067">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666067">14</a> by Will
		posted on 8/1/2007 at 8:32 PM
		</div>
		<div class="comment_text"><p>Hey Ray, I'm playing with the new ajax grid in CF8 and everything works great.. pulling the correct data, sorting, paging, etc.. all beautiful.. but for the life of me I can't figure out how to make columns clickable with appending values from the row.</p><p>More specifically, I have a user grid that I want to do 2 things on... the email column is clickable just as a mailto: with the email address in it and the Person's name column clicks through to the edit page and passes "person_id=" and append the value from the hidden person_id column... the best I could do was getting it to do gridkey= but I'd like to not have to change my edit code and I'd also like to be able to make different columns pass different or even multiple url variables. Am I out of luck or is there a way to actually do this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666055">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666055">15</a> by Raymond Camden
		posted on 8/1/2007 at 10:23 PM
		</div>
		<div class="comment_text"><p>I'm a bit confused. Are you saying you want more control over what happens when you click?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666070">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666070">16</a> by Will
		posted on 8/1/2007 at 11:17 PM
		</div>
		<div class="comment_text"><p>yeah, sorry :) I basically want to be able to append as many url variables as I want and name them whatever I want, but I've only been able to either send 1 url variable named "gridkey", or a comma delimited list of all the values as "gridkey".</p><p>Our existing plain vanilla grid does something like this (stripped down to basics):</p><p>&lt;cfoutput query="theQuery"&gt;<br>&lt;tr&gt;&lt;td&gt;&lt;a href="index.cfm?myid=#theQuery.myid#&amp;otherid=#theQuery.otherid#"&gt;#<a href="http://disq.us/url?url=http%3A%2F%2FtheQuery.name%3AgFY2eUQEJOEx60J2kNQ8vvS7os4&amp;cuid=3321886" rel="nofollow noopener" title="theQuery.name">theQuery.name</a>#&lt;/a&gt;&lt;/td&gt;&lt;/tr&gt;<br>&lt;/cfoutput&gt;</p><p>And I'd like to do something similar with the grid. I'd also like to be able to do a mailto link.</p><p>I tried doing something like href="index.cfm?myid={personGrid.myid}" and href="mailto:{<a href="http://disq.us/url?url=http%3A%2F%2FpersonGrid.email%3AMiwK1dADQ1KSJzI6mEXJm8DG_-k&amp;cuid=3321886" rel="nofollow noopener" title="personGrid.email">personGrid.email</a>}" but that didn't work :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666057">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666057">17</a> by Raymond Camden
		posted on 8/2/2007 at 2:19 AM
		</div>
		<div class="comment_text"><p>Did you try with bindings? You shuld be able to get any col from the selected row. (afaik)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666066">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666066">18</a> by Scott Bennett
		posted on 11/3/2007 at 3:35 AM
		</div>
		<div class="comment_text"><p>@Will,<br>you can probably do something like(untested): &lt;cfajaxproxy bind="javascript:window.location.href='index.cfm?otherid='+{FormName:GridName.otherid};"&gt;</p><p>Also, with the Ext object you can write a javascript functions to do all kinds of cool stuff. here is an example of how to edit the data in a cell, save it to your db via a cfc call, and refresh the row in the grid without having to reload all the data in the grid with ColdFusion.Grid.refresh and loose your selected row.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionguy.com%2FColdFusion%2Fblog%2Findex.cfm%2F2007%2F11%2F2%2FCF8-AJAX-Features-Controlling-CFGrid-Data-with-JavaScript%3AELa5aJG26NEB9rZhpvBvmMa-ALc&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionguy.com/ColdFusion/blog/index.cfm/2007/11/2/CF8-AJAX-Features-Controlling-CFGrid-Data-with-JavaScript">http://www.coldfusionguy.co...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666080">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666080">19</a> by Paul Stewart
		posted on 1/11/2008 at 8:16 PM
		</div>
		<div class="comment_text"><p>from what i can gather in a HTML format cfgrid the mask and type attributes of cfgridcolumn cannot be used. Meaning i can not format a column in a currency. Is this correct?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666058">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666058">20</a> by Scott Bennett
		posted on 1/11/2008 at 8:52 PM
		</div>
		<div class="comment_text"><p>@Paul,</p><p>To ensure your data is formatted correctly in an HTML CFGrid, you can apply a custom renderer to the column via javascript.  Ray gives an example of a currency renderer here.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2007%2F8%2F20%2FCustom-grid-renderers-with-CFGRID%3Aoom6Q1RgMM3mElII-ZzGkbzr2Ro&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2007/8/20/Custom-grid-renderers-with-CFGRID">http://www.coldfusionjedi.c...</a></p><p>I have an example of a custom date renderer here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionguy.com%2FColdFusion%2Fblog%2Findex.cfm%2F2007%2F11%2F27%2FCFGrid-Custom-Date-Renderer%3AgQaH1c7a6Xi5YpcRCAsaxGzvS4k&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionguy.com/ColdFusion/blog/index.cfm/2007/11/27/CFGrid-Custom-Date-Renderer">http://www.coldfusionguy.co...</a></p><p>Theoretically, you could make a javascript function to format the data in any way you like.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666056">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666056">21</a> by James
		posted on 3/10/2008 at 7:19 PM
		</div>
		<div class="comment_text"><p>I'm having problems with Internet Explorer. I know we all are!!!<br>I am using cfwindow and cfgrid, all works beautifully in firefox, but in IE I get an</p><p>"Error: Unexpected call to method or property access"<br>the line that is references is<br>this.form.appendChild(this.editField);</p><p>After much frustration it seems that it is when the cfgrid is html, and I need it to be html because I an using the bind attribute for some nice ajax.</p><p>Also found that if it isn't in cfwindow then it works fine. So something with cfwindow and cfgrid being html together.</p><p>Any pointers would be much appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666065">22</a> by Trond Ulseth
		posted on 4/14/2008 at 11:10 PM
		</div>
		<div class="comment_text"><p>Similar problems as James. I'm developing a application on my mac (using a lot of cfwindow, cfgrid etc), and have been using Safari (for the beauty of it) and Firefox (for the Firebug) during the development process. But now that I tested it in IE I get errors (pretty vague errors like "Expecting string value on line 145" - I don't have windows open right now so I don't remember exactly the wording).</p><p>Before getting into analyzing and trying to fix this for IE I wondered if James or anyone else have solved similar situations by now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666059">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666059">23</a> by Paul
		posted on 6/16/2008 at 9:54 PM
		</div>
		<div class="comment_text"><p>I am having a problem with cfgrid in IE also. After you edit the data in an editable cfgrid the data in the cell disappears. Works fine in FireFox, and in IE in the EXT samples I have found. So this seems to be a cfgrid specific problem. Any insight or suggestions would be appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666068">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666068">24</a> by goldcoastnerd
		posted on 7/2/2008 at 9:28 AM
		</div>
		<div class="comment_text"><p>been trying to get this working for 4 hours nw, i just keep getting weird errors. plz help raymond&gt;&gt;</p><p>fist i got heaps of error invoking CFC, internal server error.<br>checked the cfide folder in IIS and nothing wrong with that , nw i get this new weird error ,<br> Error invoking CFC /admin/CFC/filter.cfc : Element VALIDATIONHEADER is undefined in ERROR. (no idea what that means)</p><p>heres my cfgrid:</p><p>	&lt;cfgrid format="html" name="employeeGrid" pagesize=50<br>	stripeRows=true stripeRowColor="gray"<br>	bind="cfc:admin.cfc.filter.getfilterIP({cfgridpage},{cfgridpagesize},{cfgridsortcolumn},{cfgridsortdirection})"<br>	delete="yes" selectmode="edit"<br>	onchange="cfc:admin.cfc.filter.editfilterIP({cfgridaction},{cfgridrow},{cfgridchanged})"&gt;</p><p>		&lt;cfgridcolumn name="filterID" display=true header="filter ID"/&gt;<br>		&lt;cfgridcolumn name="ipAddress" display=true header="IP Address"/&gt;<br>		&lt;cfgridcolumn name="ipFraudRating" display=true header="Fraud Rating"/&gt;</p><p>	&lt;/cfgrid&gt;<br> the path to the CFC in correct, i'm at my wits end, plz help mate&gt;&gt;&gt;&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666069">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666069">25</a> by Raymond Camden
		posted on 7/2/2008 at 3:15 PM
		</div>
		<div class="comment_text"><p>It means: Somewhere your code uses an Erorr variable, and uses it like so:</p><p>error.validationheader</p><p>and validationheader is not part of error. You need to check your error logs. This will tell you exactly that file and line this error is being thrown in. It sounds like your error validation code is actually throwing an error itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666060">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666060">26</a> by Paul
		posted on 7/17/2008 at 12:31 AM
		</div>
		<div class="comment_text"><p>&gt;I am having a problem with cfgrid in IE also. After you edit the data in an editable cfgrid the data in the cell disappears</p><p>I can confirm this happens in IE with every editable grid I create. Why is this bug not being addressed by Adobe? I tried to post this to the live docs and of course they gonged my post. Any insight or workarounds would be appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666071">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666071">27</a> by Raymond Camden
		posted on 7/17/2008 at 12:54 AM
		</div>
		<div class="comment_text"><p>@Paul: First, you have to report it. Be sure to report the bug to <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2Fwish%3AeVByS_kB5f-F_Xb5m4vrRNXZtoA&amp;cuid=3321886" rel="nofollow noopener" title="www.adobe.com/go/wish">www.adobe.com/go/wish</a>.</p><p>Secondly - be sure you are running the very latest version (8.0.1 with Cumulative Hot Fix)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666077">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666077">28</a> by Paul
		posted on 7/22/2008 at 1:36 AM
		</div>
		<div class="comment_text"><p>Thanks Ray. I have reported it to Adobe as a bug. I am running the latest version (8.01). This bug is very easy to reproduce, it affect any editable grid in IE 6.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666062">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666062">29</a> by Paul
		posted on 7/25/2008 at 7:03 PM
		</div>
		<div class="comment_text"><p>Ray: Still no response to this bug from Adobe. This makes the editable html cfgrid basically unusable, since most users in the real world are still using IE 6. Any ideas, suggestions, workarounds?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666078">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666078">30</a> by Raymond Camden
		posted on 7/29/2008 at 4:59 AM
		</div>
		<div class="comment_text"><p>You most likely _wont_ get a response I think. It is kind of a black hole, but I can promise someone does read it. That doesn't mean they will fix it - but the emails are read.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666076">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666076">31</a> by Paul
		posted on 7/29/2008 at 6:23 PM
		</div>
		<div class="comment_text"><p>Ray: Thank you for your response! I am a little bewildered, however. How can Adobe not respond to this? What is the point of creating an editable cfgrid that can't_be_used in production because the data disappears when you edit it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666081">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666081">32</a> by Raymond Camden
		posted on 7/29/2008 at 6:29 PM
		</div>
		<div class="comment_text"><p>Err well, I can't speak for Adobe. It's all about time and resources ya know. Speaking personally, it's hard to even test w/ IE6 now since IE7 takes it over.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666075">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666075">33</a> by Paul
		posted on 7/29/2008 at 6:52 PM
		</div>
		<div class="comment_text"><p>Ray: Well I hate to say this but professional web developers have to test in IE6 since that is what most users are running. Oh, and it does not work correctly in IE7 either.<br>Edit the data, it disappears, I just tested it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666083">34</a> by Raymond Camden
		posted on 7/29/2008 at 6:54 PM
		</div>
		<div class="comment_text"><p>RIght, but Paul, I'm just saying, at this point, I can't do much more. It's really in Adobe's court. I can say this though - if you can send me a test CFM to run with IE7, I'll give it a try myself (I'm sure the code is above, I'm just a bit behind, so if you can directly email me one file I can run and play with, I'll see if maybe I can suggest an alternative).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666086">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666086">35</a> by Paul
		posted on 7/29/2008 at 7:49 PM
		</div>
		<div class="comment_text"><p>Ray: Thanks, I did not mean to imply that it is your problem. I am emailing you a simple example so you can see for your self. I really appreciate the fact that you have gone to the trouble to answer my posts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666085">36</a> by Kate
		posted on 7/30/2008 at 11:55 PM
		</div>
		<div class="comment_text"><p>I'm taking your Ajax presentation from CFUnited and mixing it with <a href="http://disq.us/url?url=http%3A%2F%2Fwww.brucephillips.name%2Fcf8test%2Femployees.cfm%3A7Lzf6PqrUtvNqxZAOipYsX_883g&amp;cuid=3321886" rel="nofollow noopener" title="http://www.brucephillips.name/cf8test/employees.cfm">http://www.brucephillips.na...</a> and it turned out pretty well, but when I move the .cfm and the .cfc to a different folder (but keeping them in the same folder, just a different folder from where they started) I get a strange error.  In IE it says 'Exception thrown and not caught' and in Firefox there're no JS errors.  I looked in the CF logs and it says that cfgridsortcolumn is undefined, but I don't see where you define it in any of your example files.  If I add ?cfdebug to the URL, it shows all the right information is being returned by the CFC.  It works fine if I move it to another folder branch!  Any thoughts?  Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666084">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666084">37</a> by Melvin
		posted on 12/5/2008 at 7:46 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Can you bind a grid to a URL? If so, do you have some samples that I can refer to?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666087">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666087">38</a> by Raymond Camden
		posted on 12/5/2008 at 8:07 PM
		</div>
		<div class="comment_text"><p>Yes, binding in CF typically allows 3 formats: to a js function, to a url, and to a cfc. url is just:</p><p>bind="url:foo.cfm"</p><p>You need to add the arguments for cfgrid at the end though.</p><p>bind="url:foo.cfm?page={cfgridpage}&amp;pagesize={cfgridpagesize}&amp;sort={cfgridsortcolumn}&amp;sortdir={cfgridsortdirection}"&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666088">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666088">39</a> by Dylan
		posted on 12/17/2008 at 8:56 PM
		</div>
		<div class="comment_text"><p>@Paul:  I ran into the same issues as you on IE, but with a small tweak of the CF js suggested by Deepak Verma, I got it work properly for me (changing the selection mode to Ext.grid.CellSelectionModel):</p><p>&lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fdeepuverma.wordpress.com%2F2007%2F08%2F23%2Fcfgrid-cfajax-enhance-keyboard-accessibility%2F%3A8M8fuIAKLfUuDMi8AetIrOz8sME&amp;cuid=3321886" rel="nofollow noopener" title="http://deepuverma.wordpress.com/2007/08/23/cfgrid-cfajax-enhance-keyboard-accessibility/">http://deepuverma.wordpress...</a>"&gt;<a href="http://disq.us/url?url=http%3A%2F%2Fdeepuverma.wordpress.com%2F2007%2F08%2F23%2Fcfgrid-cfajax-enhance-keyboard-accessibility%2F%3C%2Fa%3E%3AWtdMmRRQ3SrIZSkNtsCUVBOtD7E&amp;cuid=3321886" rel="nofollow noopener" title="http://deepuverma.wordpress.com/2007/08/23/cfgrid-cfajax-enhance-keyboard-accessibility/</a>">http://deepuverma.wordpress...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666089">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666089">40</a> by Dylan
		posted on 12/17/2008 at 9:03 PM
		</div>
		<div class="comment_text"><p>Sorry, mangled the link:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fdeepuverma.wordpress.com%2F2007%2F08%2F23%2Fcfgrid-cfajax-enhance-keyboard-accessibility%2F%3A8M8fuIAKLfUuDMi8AetIrOz8sME&amp;cuid=3321886" rel="nofollow noopener" title="http://deepuverma.wordpress.com/2007/08/23/cfgrid-cfajax-enhance-keyboard-accessibility/">http://deepuverma.wordpress...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666090">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666090">41</a> by Chris Ulrich
		posted on 1/30/2009 at 1:29 AM
		</div>
		<div class="comment_text"><p>I've used Deepak's modification.  It is great with the view-only grids, but it causes havoc if you try to bind to the rows.  I my case, I have a CFDIV bound to the grid and as they change rows, the DIV calls a cfc that looks up customer info (customerID is in the grid) and returns info.</p><p>When it is in the CellSelectionModel, it doesn't return the ID (since it now longer selects the row).</p><p>Has anyone been able to do CellSelectionModel and still keep BINDs to the grid working?</p><p>Thanks!</p><p>Chris</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666091">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666091">42</a> by Stacey Abshire
		posted on 9/30/2009 at 11:15 PM
		</div>
		<div class="comment_text"><p>Is there a way that we can detect if the grid is in the process of refreshing?  I have a page that I want to auto-update every N seconds, but only if it is not currently performing a refresh. Thanks?!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666093">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666093">43</a> by Stacey Abshire
		posted on 10/1/2009 at 3:50 PM
		</div>
		<div class="comment_text"><p>Never mind.....  finally dug into the object and found the grid.dataSource has the events I wanted to listen on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666094">44</a> by DougS
		posted on 11/25/2009 at 8:52 PM
		</div>
		<div class="comment_text"><p>I just started playing with cfgrid and ran into two things I don't understand.</p><p>First, how do you bind to a cfc that is in a mapped directory? Or is it even possible?</p><p>Second, I want to send in a variable orgID that is set at the top of the page ( possibly from a url variable ) to the cfc for the query. If I put the variable in as {orgID} I get a bind error. If I use #orgID# the bind is happy. I feel like I'm missing something here. Does a {variable} have to be set using cfinput within the cfform? Hope that makes sense.</p><p>Doug</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666095">45</a> by Raymond Camden
		posted on 11/25/2009 at 8:55 PM
		</div>
		<div class="comment_text"><p>You can't bind to a CFC in a CF mapping. Remember bindings use Ajax which are HTTP requests, and CF mappings mean squat for HTTP. Only CF code recognizes them. You can though simply put a CFC under your web root that acts as a proxy to your mapped CFC.</p><p>Second: Nope, if you want to hard code a value to use int he bind, the orgID is fine. And yes, {...} is meant for client side variables only.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666097">46</a> by Sandra
		posted on 12/19/2009 at 4:11 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I'm using bind="cfc:files.getFiles......"  to get the data from a query. I'm also using  &lt;cfajaxproxy bind="javascript:details({<a href="http://disq.us/url?url=http%3A%2F%2Ffiles.id%3AIr8jSRx2-LXWhhONDoKmA5w4RSw&amp;cuid=3321886" rel="nofollow noopener" title="files.id">files.id</a>@click})" /&gt;, which calls a JS function to open the cfwindow.  The problem is, say the user clicks on a row, the cfwindow opens, then the user closes this window by accident and they want to open this window again by clicking on the same row. It won't work unless you click on another row and go back to the previous row. Any ideas how to fix this? I've also used @change and that doesn't work.  I was trying to follow this example: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.brianflove.com%2Fpublic%2Fcfwindow%2F%3ANfyPgruPRTaoVaCsavC23f6MCmY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.brianflove.com/public/cfwindow/">http://www.brianflove.com/p...</a>  which has the same issue as well.  Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666098">47</a> by Sandra
		posted on 12/19/2009 at 5:47 AM
		</div>
		<div class="comment_text"><p>Nevermind about my previous post. I found the solution here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2007%2F8%2F9%2FReacting-to-grid-row-selection%3AMnlWPi-Y7vodfGzBKEvvLTs0Xhg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2007/8/9/Reacting-to-grid-row-selection">http://www.coldfusionjedi.c...</a></p><p>Posts 25 &amp; 34.</p><p>THANK YOU!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666100">48</a> by Chuck
		posted on 4/15/2010 at 1:35 AM
		</div>
		<div class="comment_text"><p>I'm new to coldfusion and have been learning about the cfgrid. One thing I can't seem to figure out is how to hide the cfgrid if there are no records to display. I read that the cfgrid will return 10 empty rows if there are no records to return. I believe I read that at <a href="http://disq.us/url?url=http%3A%2F%2Fcoldfusionjedi.com%3AJ8pERI_trwqQzNfJuj3ekUNZkfU&amp;cuid=3321886" rel="nofollow noopener" title="coldfusionjedi.com">coldfusionjedi.com</a>. I use a cfc to bind my grid to. How would I hide the cfgrid and display a "no records found" message to the user in a div tag? I've tried several ways to get it to work but nothing works. I get an empty grid with 10 rows. Thanks in advance for your help. Oh yeah, we use CF8</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666102">49</a> by Raymond Camden
		posted on 4/17/2010 at 12:34 AM
		</div>
		<div class="comment_text"><p>I've got this post on noticing an empty grid:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Findex.cfm%2F2009%2F4%2F9%2FAsk-a-Jedi-Noticing-an-empty-CFGRID%3AAxta5Gah-ddrXb2JJKoGq0YnMko&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/index.cfm/2009/4/9/Ask-a-Jedi-Noticing-an-empty-CFGRID">http://www.coldfusionjedi.c...</a></p><p>You could wrap your grid in a div and hide it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713666099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713666099">50</a> by KJ
		posted on 6/1/2010 at 6:36 PM
		</div>
		<div class="comment_text"><p>I have a cfgrid that has a editable column and it updates to the database just fine but the grid doesn't refresh with the new values. I need the grid to render again or refresh and not sure how.</p><p>&lt;cfgrid format="html" name="Pricestandardreview" pagesize="10" bindonload="true" sort="true" <br>     bind = "cfc:test.getSTDReview({cfgridPage},{cfgridpagesize},{cfgridsortcolumn},{cfgridsortdirection})" selectmode="edit"<br>     onchange= "cfc:test.editSTDReview({cfGridAction},{cfgridrow},{cfgridchanged})" &gt;<br>        &lt;cfgridcolumn name="full_account" display=true header="Customer Number"/&gt;<br>        &lt;cfgridcolumn name="DBID" header="DBID"  select="no" display=no /&gt;<br>        &lt;cfgridcolumn name="SCENARIO_SEQ" header="SCENARIO_SEQ"  select="no" display=no /&gt;<br>        &lt;cfgridcolumn name="ACCOUNT_NUM" header="ACCOUNT_NUM"  select="no" display=no /&gt;<br>        &lt;cfgridcolumn name="SCENARIO_DET_SEQ" header="SCENARIO_DET_SEQ"  select="no" display=no /&gt;<br>        &lt;cfgridcolumn name="account_name" display=true header="Customer Name" select="no"/&gt;<br>        &lt;cfgridcolumn name="tank_num" display=true header="Tank Number" select="no"/&gt;<br>        &lt;cfgridcolumn name="product" display=true header="Product Code" select="no"/&gt;<br>        &lt;cfgridcolumn name="department_code" display=true header="Department code" select="no"/&gt;<br>        &lt;cfgridcolumn name="tank_acquired" display=true header="Tank Acquisition Date" mask="mm/dd/yyyy" select="no"/&gt;<br>        &lt;cfgridcolumn name="zone" display=true header="Zone" select="no"/&gt;<br>        &lt;cfgridcolumn name="tank_size" display=true header="Tank Size" select="no"/&gt;<br>        &lt;cfgridcolumn name="tank_rental_amount" display=true header="Tank Rental Amount" select="no"/&gt;<br>        &lt;cfgridcolumn name="tank_rental_period" display=true header="Total Rental Period" select="no"/&gt;<br>        &lt;cfgridcolumn name="tank_rental_status" display=true header="Tank Rental Status" select="no"/&gt;<br>        &lt;cfgridcolumn name="curr_price_sub_level" display=true header="Price Sublevel" select="no"/&gt;<br>        &lt;cfgridcolumn name="minimum_bill_table" display=true header="Minimum Bill Code" select="no"/&gt;<br>        &lt;cfgridcolumn name="curr_base_price_code" display=true header="Base Price Code" select="no"/&gt;<br>        &lt;cfgridcolumn name="curr_deviation" display=true header="Deviation" select="no"/&gt;<br>        &lt;cfgridcolumn name="gross_amount" display=true header="Gross Amount" select="no"/&gt;<br>        &lt;cfgridcolumn name="r12_gallons" display=true header="Gallons" select="no"/&gt;<br>        &lt;cfgridcolumn name="new_base_price_code" display=true header="New Bpc" select="yes" /&gt;<br>        &lt;cfgridcolumn name="new_deviation" display=true header="New Deviation" select="yes" /&gt;<br>        &lt;cfgridcolumn name="new_price_per_gallon" display=true header="New Price" select="no" /&gt;<br>        &lt;cfgridcolumn name="PRICE_VARIANCE" display=true header="Price Variance" select="no" /&gt;<br>        &lt;cfgridcolumn name="TOTAL_VARIANCE" display=true header="Total Variance" select="no" /&gt;<br>    &lt;/cfgrid&gt;</p></div>
	</div>
</div>
		