
<div class="comment" id="c_1713711415">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711415">1</a> by Nick
		posted on 1/10/2009 at 4:39 AM
		</div>
		<div class="comment_text"><p>Do it, Doug!</p><p>This is actually a pretty handly little tip. I love "Secretly" reserved words.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711416">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711416">2</a> by Jason Fisher
		posted on 1/10/2009 at 8:58 AM
		</div>
		<div class="comment_text"><p>Ray, isn't the observed behavior probably just because every form already has an ACTION element?  Would think that's not a very secret reserved word, actually, since it's an inherent attribute of the HTML FORM tag.</p><p>Just a thought.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711417">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711417">3</a> by Raymond Camden
		posted on 1/10/2009 at 9:01 AM
		</div>
		<div class="comment_text"><p>The form tag has an an action attribute, but that has nothing to do with the data posted in the form scope itself. For example, this form post:</p><p>&lt;cfdump var="#form#"&gt;</p><p>&lt;form action="test4.cfm" method="post"&gt;<br>&lt;input type="text" name="name" /&gt;<br>&lt;input type="submit" name="action" value="one"/&gt;<br>&lt;input type="submit" name="action" value="two"/&gt;<br>&lt;/form&gt;</p><p>Works just fine in a page by itself (no cfdivs involved).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711421">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711421">4</a> by Jason Fisher
		posted on 1/10/2009 at 5:43 PM
		</div>
		<div class="comment_text"><p>Good point, Ray, just hadn't time to test that before I posted.  In JavaScript, though, you can certainly change the form's action attribute:</p><p>var frm = document.forms["myForm"];</p><p>if (someBehavior) {<br> frm.action = "changeMyTargetHandler.cfm";<br>}</p><p>Guess that's where the cfdiv is coming in to play, on the JavaScript side of things, do you think?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711418">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711418">5</a> by Raymond Camden
		posted on 1/10/2009 at 6:32 PM
		</div>
		<div class="comment_text"><p>Certain - JS can change the action of the form and form data itself. My main point is that form.action != <a href="http://disq.us/url?url=http%3A%2F%2Fform.data%3A2DHnNOLJR0kAxGSlQJ9mBl3CYwI&amp;cuid=3321886" rel="nofollow noopener" title="form.data">form.data</a>. (imho)</p><p>As to what cfdiv is doing - not sure. I'm thinking it must not separate the form data from the form ... "info" (as in the action).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711422">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711422">6</a> by Adam Cameron
		posted on 1/10/2009 at 7:14 PM
		</div>
		<div class="comment_text"><p>Hi Ray<br>I await with bated breath for these bugs to be registered with the CF9 programme...</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711429">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711429">7</a> by Raymond Camden
		posted on 1/10/2009 at 7:19 PM
		</div>
		<div class="comment_text"><p>Ahem - The #1 rule of the Adobe beta programs is that there is no Adobe beta program.... ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711431">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711431">8</a> by Adam Cameron
		posted on 1/10/2009 at 7:54 PM
		</div>
		<div class="comment_text"><p>What, so this - <a href="http://disq.us/url?url=http%3A%2F%2Flabs.adobe.com%2Fwiki%2Findex.php%2FCentaur%3A_V9vY2C3kXZjXIhWv5-cOBT671o&amp;cuid=3321886" rel="nofollow noopener" title="http://labs.adobe.com/wiki/index.php/Centaur">http://labs.adobe.com/wiki/...</a> - doesn't exist?  It's a bit disingenuous for Adobe to make it public knowledge then, eh?</p><p>(NB: I note with derision the .PHP extension!)</p><p>I think it's less a case of "the rules of Fight Club" and more a case of "what goes on tour stays on tour".</p><p>Anyway, all I meant is that if someone happened to discover bugs like these, and if they happened to be on any relevant alpha/beta programme (and whether or not they are: I couldn't say), then I would expect that perhaps they should extract-digit and get an issue raised for them.  Maybe people might want to vote for it (although I could not confirm that).  If - like - there was the capability to vote... which... err... wait... what's that black helicopter doing hovering outside my window??!</p><p>;-)</p><p>Anyway: chop-chop, old son.</p><p>-- <br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711426">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711426">9</a> by Raymond Camden
		posted on 1/10/2009 at 7:56 PM
		</div>
		<div class="comment_text"><p>Heh, I was just teasing ya know. If there is such a way to report bugs then maybe I'll do so....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711436">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711436">10</a> by Jason Fisher
		posted on 1/10/2009 at 10:27 PM
		</div>
		<div class="comment_text"><p>@Ray,</p><p>Yes, you're definitely right that form.action != <a href="http://disq.us/url?url=http%3A%2F%2Fform.data%3A2DHnNOLJR0kAxGSlQJ9mBl3CYwI&amp;cuid=3321886" rel="nofollow noopener" title="form.data">form.data</a>. It's clean in HTML and it's clean in CF's form scope, but I think it just struck me when you first posted because of the lack of clarity that JS adds to the whole mix.  To wit, the following scenario:</p><p>&lt;form action="test.cfm" id="testFrm" method="post"&gt;<br>	Activity:<br>	&lt;input type="Radio" name="action" value="run" /&gt;run<br>	&lt;input type="Radio" name="action" value="walk" /&gt;walk<br>	&lt;br /&gt;<br>	Description:<br>	&lt;input type="Text" name="description" value="slowly" /&gt;<br>	&lt;br /&gt;<br>	&lt;input type="Button" value="take action" onclick="play(this.form);" /&gt;<br>&lt;/form&gt;</p><p>If I use JS to work with the form elements, I could do the following to refer to my text field:</p><p>var desc = document.forms.testFrm.elements["description"];</p><p>but I could also do this:</p><p>var desc = document.forms.testFrm.description;</p><p>But in this form, there's now an action parameter of the form and another action element of the elements collection.  It turns out that both of these will get to the form element, so I guess I no longer have access to the form action ("test.cfm") within JS once I've added an element named 'action'.</p><p>var action = document.forms.testFrm.action;</p><p>gives me the same NodeList object as this:</p><p>var action = document.forms.testFrm.elements["action"];</p><p>Without the radio buttons being named 'action', document.forms.testFrm.action would return "test.cfm". Fascinating.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711434">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711434">11</a> by Raymond Camden
		posted on 1/10/2009 at 10:42 PM
		</div>
		<div class="comment_text"><p>Digging with jQuery, it looks like you can get the form tag action by using f.attributes (where F == the form object). The attributes array represented everything I had in my form tag.</p><p>So there should be no problem differentiating between the ACTION of the form tag and any elements named action within the form itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711428">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711428">12</a> by Jason Fisher
		posted on 1/10/2009 at 10:48 PM
		</div>
		<div class="comment_text"><p>Right, apparently just issues with the way cfdiv is interoperating with the form objects.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711427">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711427">13</a> by Raymond Camden
		posted on 1/10/2009 at 10:49 PM
		</div>
		<div class="comment_text"><p>So its all Adobe's fault. That's it - I'm switching to PHP and Classic ASP! ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711439">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711439">14</a> by Jason Fisher
		posted on 1/10/2009 at 10:58 PM
		</div>
		<div class="comment_text"><p>ROFL ... no, not the Dark Side(tm)!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711430">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711430">15</a> by Bob
		posted on 5/13/2009 at 12:55 PM
		</div>
		<div class="comment_text"><p>Ray ,<br>i used your example , and it works fine ...<br>however when i change the form to flash format<br>&lt;cfform action="test2.cfm" method="post" format="flash"&gt;</p><p>errors pop up and couldn't find a solution for it , <br>why !? can you help ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711435">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711435">16</a> by Raymond Camden
		posted on 5/13/2009 at 3:33 PM
		</div>
		<div class="comment_text"><p>Flash Forms are definitely not going to work. That's about the best I can say. I'd recommend moving away from FF.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711433">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711433">17</a> by miked
		posted on 11/11/2009 at 3:49 AM
		</div>
		<div class="comment_text"><p>Note too that if you need to have your form submission "break out" of the cfdiv, you must use &lt;form&gt; instead of &lt;cfform&gt;.  I have a page with a select and a cfdiv.  The select chooses a document type and the cfdiv displays the available documents for that type.  In the cfdiv, a form with check-boxes lets you select which of the docs you want to bundle for printing. Submitting the form opens a page that does a cfpdf merge with the selected docs.  If I use a &lt;cfform&gt; in the cfdiv page, it stays in the cfdiv context and displays binary junk.  If I use a &lt;form&gt;, it allows for  save/open of the generated pdf.  That only took me a day to figure out ;&gt;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711438">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711438">18</a> by Charlie Stell
		posted on 12/11/2009 at 4:09 AM
		</div>
		<div class="comment_text"><p>Your post here probably saved me hours of pulling my hair out...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711432">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711432">19</a> by Dan
		posted on 1/5/2010 at 3:36 AM
		</div>
		<div class="comment_text"><p>I know this post is a little old now, but I just came across it and used it, adapted it, and really liked it.  But, when I went to extend if with cfform, it fails.  Well, it works unexpectedly.<br>    When clicking "Do it", it opens up another set of 3 tabs within the tab I started.  So I am in tab 3, enter data... and click Do It 2.  On load, I am still in tab 3, and the content in tab 3 is then the same 3 tabs nested there, with the 2nd tab selected.<br>    When it is &lt;form&gt; it work fine, when &lt;cfform&gt; this crazy result.  The issue is I have some &lt;cfselects&gt; I want to use so need &lt;cfform&gt;  Anything I can do?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711440">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711440">20</a> by Dan
		posted on 1/5/2010 at 4:24 AM
		</div>
		<div class="comment_text"><p>I should add, I am trying to make the form IN the tab.  That is when it works with &lt;form&gt; and not &lt;cfform&gt;.</p><p>&lt;cflayout type="tab"&gt;<br>		&lt;cflayoutarea title="Tab1" selected="#t1Selected#"&gt;&lt;/cflayoutarea&gt;<br>		&lt;cflayoutarea title="Tab2" selected="#t2Selected#" &gt;<br>			Show &lt;cfoutput&gt;<br>					&lt;cfif structKeyExists(form,"something")&gt;<br>						#form.something#<br>					&lt;/cfif&gt;<br>				&lt;/cfoutput&gt;<br>		&lt;/cflayoutarea&gt;<br>		&lt;cflayoutarea title="Tab3" selected="#t3Selected#" &gt;<br>			&lt;cfform name="testForm" action="Test2.cfm" method="post"&gt;<br>				&lt;input type="text" name="something"&gt;<br>			     &lt;input type="submit" name="doit1" value="Do One"&gt;<br>			     &lt;input type="submit" name="doit2" value="Do Two" &gt;<br>			     &lt;input type="submit" name="doit3" value="Do Three"&gt;<br>			&lt;/cfform&gt;<br>		&lt;/cflayoutarea&gt;<br>	&lt;/cflayout&gt;</p><p>I want to enter info on one tab, click submit, and process and display results on the next tab.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711444">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711444">21</a> by Raymond Camden
		posted on 1/5/2010 at 4:26 AM
		</div>
		<div class="comment_text"><p>cfform inside a cfdiv/cfwindow/cflayout automatically switches to an Ajax-based post, so you lose some control over the submission unless you want to write custom code to handle it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711449">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711449">22</a> by Antonio
		posted on 6/17/2010 at 5:51 PM
		</div>
		<div class="comment_text"><p>Guys, im going mad:</p><p>&lt;cfloop query="dettaglio"&gt;</p><p>&lt;cfquery name="dett_piazz" datasource="intranet"&gt;<br>select * from temp_#replacenocase(url.n_tagtl,"-","","ALL")# where n_tagtl='#url.n_tagtl#' and tipotagliotl='#piazzatura#'<br>&lt;/cfquery&gt;<br>&lt;cfquery name="nome_piaz" datasource="intranet"&gt;<br>select lav_descrizione from tab_lavorazioni where id_lavorazione='#piazzatura#'<br>&lt;/cfquery&gt;</p><p>&lt;table style="width: 100%" &gt;</p><p>&lt;thead&gt;<br>&lt;th&gt;&lt;td colspan=6&gt;&lt;strong style="color:red"&gt;Lavorazione: &lt;cfoutput&gt;#piazzatura# #nome_piaz.lav_descrizione#&lt;/cfoutput&gt; | Numero Pagina: &lt;cfoutput&gt;#dett_piazz.numpagtl#&lt;/cfoutput&gt;&lt;/strong&gt;&lt;/td&gt;&lt;/th&gt;<br>&lt;/thead&gt;<br>&lt;tbody&gt;<br>&lt;tr&gt;<br>&lt;td&gt;&lt;strong&gt;Codice&lt;/strong&gt;&lt;/td&gt;<br>&lt;td&gt;&lt;strong&gt;Terminale1&lt;/strong&gt;&lt;/td&gt;<br>&lt;td&gt;&lt;strong&gt;Terminale2&lt;/strong&gt;&lt;/td&gt;<br>&lt;td&gt;&lt;strong&gt;TerminaleC&lt;/strong&gt;&lt;/td&gt;<br>&lt;td&gt;&lt;strong&gt;Assegnazione&lt;/strong&gt;&lt;/td&gt;<br>&lt;td&gt; &lt;/td&gt;<br>&lt;/tr&gt;</p><p>&lt;cfoutput query="dett_piazz"&gt;<br>&lt;cfform name="ass_#codicesl#"&gt;<br>&lt;cfinput type="Hidden" name="codicesl" value="#codicesl#"&gt;<br>&lt;tr&gt;<br>&lt;td&gt;#codicesl#&lt;/td&gt;<br>&lt;td&gt;#terminale1#&lt;/td&gt;<br>&lt;td&gt;#terminale2#&lt;/td&gt;<br>&lt;td&gt;#terminalec# #id_macchina#&lt;/td&gt;</p><p>&lt;cfquery name="macchine" datasource="intranet"&gt;<br>select id_macchina from tab_macchine &lt;cfif id_macchina neq 0&gt;where id_macchina &lt;&gt; '#id_macchina#'&lt;/cfif&gt;<br>&lt;/cfquery&gt;</p><p>&lt;td &gt;<br>&lt;cfif currentrow eq 1&gt;<br>&lt;select name="id_macchina#recordcount#"&gt;<br>&lt;cfif id_macchina eq 0&gt;<br>&lt;option value="0" selected&gt;Seleziona&lt;/option&gt;<br>&lt;cfelse&gt;<br>&lt;option selected&gt;#id_macchina#&lt;/option&gt;<br>&lt;/cfif&gt;</p><p>&lt;cfloop query="macchine"&gt;<br>&lt;option&gt;#id_macchina#<br>&lt;/cfloop&gt;<br>&lt;/select&gt;<br>&lt;/cfif&gt;</p><p>&lt;/td&gt;<br>&lt;cfif stato eq 2&gt;&lt;td bgcolor="green"&gt;&lt;cfelseif stato eq 1&gt;&lt;td bgcolor="yellow"&gt;&lt;cfelse&gt;&lt;td bgcolor="red"&gt;&lt;/cfif&gt; &lt;/td&gt;</p><p>&lt;/tr&gt;<br>&lt;cfif currentrow eq dett_piazz.recordcount&gt;<br>&lt;tr&gt;&lt;td colspan="6"&gt;<br>&lt;!--- &lt;cfif len(id_macchina) gt 2&gt;<br>&lt;cfdiv bind="url:aggiorna_assegnazione.cfm?codicesl={codicesl}&amp;id_macchina={id_macchina}&amp;n_tagtl=#url.n_tagtl#&amp;ass=1"&gt;<br>&lt;cfelse&gt; ---&gt;<br>&lt;cfdiv bind="url:aggiorna_assegnazione.cfm?codicesl={codicesl}&amp;id_macchina={id_macchina#currentrow#}&amp;n_tagtl=#url.n_tagtl#" id="theDiv_#currentrow#"&gt;<br>&lt;!--- &lt;/cfif&gt; ---&gt;<br>&lt;/td&gt;&lt;/tr&gt;<br>&lt;/cfif&gt;<br>&lt;/cfform&gt;</p><p>&lt;/cfoutput&gt;</p><p>&lt;/tbody&gt;<br>&lt;/table&gt;<br>&lt;hr size=1&gt;<br>&lt;/cfloop&gt;</p><p>CODICESL should be something like "aaa,bbb,ccc" relative only to each form, instead it relative to ALL forms (distinguished by ASS_#CODICESL#)  so it's "aaa,bbb,ccc,ddd,0" etc...</p><p>can anybody help me? thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711445">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711445">23</a> by Jason Fisher
		posted on 6/17/2010 at 7:32 PM
		</div>
		<div class="comment_text"><p>my guess would be that there is another form field called 'codicesl' within the aggiorna_assegnazione.cfm which is added to your form via the cfdiv bind</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711448">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711448">24</a> by Antonio
		posted on 6/21/2010 at 10:14 AM
		</div>
		<div class="comment_text"><p>Yes that's correct.<br>Each record creates it's own form. Then using a bind to a cfdiv it should submit the fields requested. Instead it passes ALL the id_macchina values found in the document. How do i refer to a specific form field in cfdiv/bind? Something like:</p><p>&lt;cfdiv bind="url:aggiorna_assegnazione.cfm?codicesl={codicesl}&amp;id_macchina={ass_#codicesl#.id_macchina}&amp;n_tagtl=#url.n_tagtl#&amp;ass=1"&gt;</p><p>so that the id_macchina value is specific to the form named ass_#codicesl# ?</p><p>Thanks again,</p><p>Antonio</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711446">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711446">25</a> by Mik Muller
		posted on 8/4/2010 at 3:15 AM
		</div>
		<div class="comment_text"><p>Hey all,</p><p>Is there a known bug with cf/input type="file" inside a cfform in a cfdiv? It always come up empty on post.</p><p>Here's the relevant code. Again, it's inside a cfdiv.</p><p>&lt;cfform action="/modalUploads.cfm?mode=upload" method="post" id="loginForm" enctype="multipart/form-data"&gt;<br>&lt;cfinput type="File" name="upload_file"&gt;<br>&lt;select name="transparent"&gt;<br>&lt;option value=""&gt;No transparent colors&lt;/option&gt;<br>&lt;option value="white"&gt;Remove white background&lt;/option&gt;<br>&lt;option value="black"&gt;Remove black background&lt;/option&gt;<br>&lt;option value=""&gt;Not an image&lt;/option&gt;<br>&lt;/select&gt;<br>&lt;select name="colors"&gt;<br>&lt;option value="0"&gt;Preserve image colors&lt;/option&gt;<br>&lt;option value="1"&gt;Convert to one-color&lt;/option&gt;<br>&lt;/select&gt;<br>&lt;input type="submit" name="submit" value="Upload!" class="submit-button" /&gt;<br>&lt;/cfform&gt;</p><p>Mik</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711447">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711447">26</a> by Raymond Camden
		posted on 8/4/2010 at 4:18 AM
		</div>
		<div class="comment_text"><p>It's expected. I actually have another blog on that somewhere here. Forms inside of cfdiv turn into Ajax posts, and you can't do file uploads over an Ajax post.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711450">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711450">27</a> by Mik Muller
		posted on 8/4/2010 at 8:07 AM
		</div>
		<div class="comment_text"><p>Hmmm.... so, what's the solution? Pop ups instead of cfwindows? FTP?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711451">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711451">28</a> by Raymond Camden
		posted on 8/4/2010 at 4:12 PM
		</div>
		<div class="comment_text"><p>There are many solutions actually - just google for ajax file upload. CF9 includes a cffileupload tag just for this purpose. I also recommend Uploadify.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711456">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711456">29</a> by learning
		posted on 1/11/2011 at 10:34 PM
		</div>
		<div class="comment_text"><p>Hi Raymond:</p><p>I'd appreciate your help on this. I'm using the CFLAYOUT tag in a page. Basically, the user, once logged in to the site can scroll down to the "feedback section" which is a simple form within the CFLAYOUT tags, fill it in &amp; submit. It works fine. so assuming the feedback form is on feedbackpage.cfm, once submitted, the variables(name, address, feedback etc) are posted to the processing page(action.cfm) which then posts back &amp; appears in (replaces) the feedback form area on feedbackpage.cfm.</p><p>The question however is this. How do I get the form(based on user input) to reappear on the feedbackpage.cfm in case a user wants to send another feedback? If I use the refresh button, it works fine but I require a more professional touch. It wouldn't be nice to ask the user to "click on the browser refresh button" in order to send another feedback. I would really appreciate your help on this.</p><p>Thanks Raymond.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711454">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711454">30</a> by learning
		posted on 1/11/2011 at 10:36 PM
		</div>
		<div class="comment_text"><p>...by the way, I'm using the VBOX type CFLAYOUT.<br>&lt;cflayout type="vbox" name="layout_a"&gt;.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711453">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711453">31</a> by Raymond Camden
		posted on 1/13/2011 at 9:21 AM
		</div>
		<div class="comment_text"><p>There is a JS function you can use called ColdFusion.navigate. It lets you load a URL into a layout section. See the CFML reference for details.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711455">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711455">32</a> by Learner
		posted on 1/14/2011 at 5:56 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond, I'll try again but had tried using it earlier. Would you be kind enough to break it down [further] please? Still learning.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711457">33</a> by Learner
		posted on 1/14/2011 at 6:01 PM
		</div>
		<div class="comment_text"><p>...I used a CFFORM tag within the CFLAYOUT, so the first 3 lines basically are these:</p><p>&lt;cflayout type="vbox" name="layout_a"&gt;<br>&lt;cflayoutarea&gt;<br>&lt;cfform action="action.cfm" method="post" name="enquiry_form"&gt;</p><p>Pls how do I make appropriate use of the ColdFusion.navigate function u mentioned?</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711458">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711458">34</a> by learning
		posted on 1/14/2011 at 9:33 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond, It's working now with a bit of some bugs. Just requires some minor tweeking. Currently, I created a 2nd form (in a 3rd .cfm page)so when the link on the action.cfm page is clicked, the form on the 3rd page loads into the LAYOUT.<br>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711460">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711460">35</a> by Raymond Camden
		posted on 1/14/2011 at 9:35 PM
		</div>
		<div class="comment_text"><p>Cool - glad you got it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713711459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713711459">36</a> by learning
		posted on 1/14/2011 at 9:38 PM
		</div>
		<div class="comment_text"><p>Thanks, working alright now. IF You however have a way of keeping the whole thing to just 2 instead of the current 3 pages, kindly let me know please. &amp; thanks gain for your help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1772087569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1772087569">37</a> (In reply to <a href="#c_1713711460">#35</a>) by coldnewbie
		posted on 1/5/2015 at 2:44 AM
		</div>
		<div class="comment_text"><p>I am using</p><p>   &lt;cflayout type="border" name="mainTab"&gt;</p><p>    &lt;cflayoutarea position="left" splitter="true" title="DB_Jobspec" name="DB_Jobspec" style="width:520px;"&gt;<br>	&lt;cfoutput query="qgetdcfg"&gt;</p><p>.....</p><p> &lt;cflayoutarea position="center" name="exam" style="border:30px solid red"&gt;<br>	&lt;cfif structkeyexists(url,="" "datasource")=""&gt; <br>..... etc.,</p><p>with a left and center. The left -- tab is fine and works. It basically pulls data from a database, whenever user clicks on one of the rows, it has bring up a detailed page on the center layoutarea - with some relevant details.</p><p>There are no errors- but nothing happens - i.e., the center tab does not show up.</p><p>I am a newbie to coldfusion. thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1772116412">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1772116412">38</a> (In reply to <a href="#c_1772087569">#37</a>) by Raymond Camden
		posted on 1/5/2015 at 3:20 AM
		</div>
		<div class="comment_text"><p>Doesn't help, but the best recommendation I can give is to avoid cflayout like the plague.</p></div>
	</div>
</div>
		