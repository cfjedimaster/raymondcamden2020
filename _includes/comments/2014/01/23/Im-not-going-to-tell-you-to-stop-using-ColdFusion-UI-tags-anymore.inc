
<div class="comment" id="c_1714081512">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081512">1</a> by Josh Knutson
		posted on 1/23/2014 at 10:17 PM
		</div>
		<div class="comment_text"><p>are you thinking they could be drop in replacements &lt;c:input vs cfinput</p><p>or just listing alternatives/frameworks that people could use</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081510">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081510">2</a> by Raymond Camden
		posted on 1/23/2014 at 10:19 PM
		</div>
		<div class="comment_text"><p>I don't think it is fair to say "drop in replacement" - the idea is to focus on the main goal of the tag. Let's take cfgrid. It's main purpose is to render data in a tabular format, with options for AJAX binding and pagination. An article on this could use jqGrid. The article would NOT cover every single argument of cfgrid and show you how to do it - but rather focus on those main goals. The idea being that if you want to do something weird with it, you have more power having your own solution as opposed to cfgrid which may lock you in. (Or, when you upgrade, your code may stop working.)</p><p>Does this make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081511">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081511">3</a> by Jay Van Voast
		posted on 1/23/2014 at 10:30 PM
		</div>
		<div class="comment_text"><p>Thank you for this Ray...as always, good knowledge.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081515">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081515">4</a> by Henry Ho
		posted on 1/23/2014 at 11:11 PM
		</div>
		<div class="comment_text"><p>Would you please make sure cfclient doesn't end with the same fate??</p><p>and if you can blog about how to use cfwebsocket without its generated crap that'd be great. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081513">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081513">5</a> by Jim W.
		posted on 1/23/2014 at 11:16 PM
		</div>
		<div class="comment_text"><p>This could be good.  As to something that I would like to see specifically is how to replace cfgrid effectively.  I have always struggled with this.  A couple of feature that we use are the toolbar with custom buttons and the other aspect is when you are dynamically creating grids, you might know what the columns are ahead of time, but you might have 5 of these grids on a page or more or less, so you don't know the names of the grids.  I've found using the query attribute in cfgrid handy for this.</p><p>I haven't had time to work with jqgrid much, but so far I've struggled with jqgrid.  I found cfgrid much easier to use with the limited time I have.</p><p>Most of the other stuff I've been able to replace with jqueryui.</p><p>Looking forward to some good stuff on the site!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081516">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081516">6</a> by Michael Long
		posted on 1/23/2014 at 11:22 PM
		</div>
		<div class="comment_text"><p>Ditto. I just did a quick project for a client, and the initial search form and result list is based on jQuery DataTables. It retrieves its JSON data from a CFC component via AJAX, but that’s all back end code.</p><p>The entry form is based on my latest DataFormJS code generator, which is itself tightly integrated with the client-side jQuery Validation Plugin.</p><p>Backend data services are provided by the 2nd-generation DataObjects ORM, layered over a SQL Server 2005 database system. Other than the aforementioned AJAX code, there are no hand-written queries whatsoever.</p><p>Report generation is handled by ColdFusion, though embedded chart generation is handled by Highcharts JS due to various printing and integration issues with CFChart.</p><p>So. No CFForms. No CFCharts. No CFGrids. One custom CFQuery.</p><p>I think Ben Forta said it best:</p><p>"In my opinion there is no longer a compelling reason to use any ColdFusion features that generate client-side code for you. Be it UI libraries, form validation, data grids, menus, embedding maps, and more, there are now so many alternatives that are clean and lightweight and easy to use that it is more productive to just use those instead."</p><p>Count me in.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.hmlong.com%2F2014%2F01%2Fwhen-using-coldfusion-no-longer-makes-sense%2F%3As3MISoJsDrMEUukozDlRAl4_frk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.hmlong.com/2014/01/when-using-coldfusion-no-longer-makes-sense/">http://www.hmlong.com/2014/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081517">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081517">7</a> by Cutter
		posted on 1/23/2014 at 11:30 PM
		</div>
		<div class="comment_text"><p>Love to throw in some assist on this. Can give some bits for Bootstrap, JQUI, jqGrid, DataTables, and even some ExtJs (if I brush up some).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081518">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081518">8</a> by Raymond Camden
		posted on 1/23/2014 at 11:39 PM
		</div>
		<div class="comment_text"><p>@HenryHo: I can't comment on cfclient while it is still in beta. I actually *like* cfwebsocket - especially how it handles server side events.</p><p>@Cutter: What I need to figure out ASAP is a way for folks to "claim" a tag. i don't mean like a promise per se, but it makes sense to know that person X is working on tag Y that way we don't duplicate effort.</p><p>For now I'd say - if there is something in particular you want to start writing, let us know first just so we can organize.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081520">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081520">9</a> by Tim Leach
		posted on 1/24/2014 at 2:17 AM
		</div>
		<div class="comment_text"><p>Fantastic Idea!</p><p>@Ray: "What I need to figure out ASAP is a way for folks to "claim" a tag." I say you don't. In the repo just create folders after each tag, then individual devs can submit their solutions into the folders.</p><p>If I'm in love with cftextarea, and someone says "Use tinyMCE", and I turn out to hate tinyMCE, I'll go back to my old ways, but if I see a list of options, I'm bound to find one I do like.</p><p>Maybe under each folder named after a tag, you have the files named after the JS framework: Native, jQeryUI, Angular, EXT.. Point is due to varying tastes, there will never be any good list of one to one replacements, so whatever format you do, leave room for multiple options.</p><p>Also this might be a good place to start:<br><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fa%2F18989047%2F1283457%3Ae6fHH6yW6AwFyWgvLBsJDTdZ3ME&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/a/18989047/1283457">http://stackoverflow.com/a/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081519">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081519">10</a> by Raymond Camden
		posted on 1/24/2014 at 2:21 AM
		</div>
		<div class="comment_text"><p>@Tim: My gut says - and I'm not speaking for Adam here - that I think it would be bad to have multiple solutions. I'm thinking of this as a book - and to me - it makes sense to be focused and direct - to not overwhelm the reader. Each section will have a list of alternatives, but I think the main text should be focused on one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081522">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081522">11</a> by John Farrar
		posted on 1/24/2014 at 6:03 AM
		</div>
		<div class="comment_text"><p>I would be glad to help with this also. I have even written a tag to replace &lt;cfajaxproxy /&gt; using jQuery. It did introspection of CFCs and wrote a JS file to work as a static proxy object. The object was only updated when the CFC was updated.</p><p>The only fault we could have here is over assuming the CFTags are doing it right. Sounds like this group is not going to be prone to that error. :) Yet, some will just be looking for one on replacements of CF Tags.</p><p>Note: One of my current side projects is looking at creating elemental directives that have back end CFML tags driving directive element restricted tags in AngularJS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081524">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081524">12</a> by Phillip Senn
		posted on 1/25/2014 at 12:33 AM
		</div>
		<div class="comment_text"><p>When can I use my quote "cfDo or cfdo not, there is no cftry"?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081527">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081527">13</a> by James Mohler
		posted on 1/25/2014 at 7:42 AM
		</div>
		<div class="comment_text"><p>Some of us have very large code bases to work with. It would be useful to have a tool that could rip through a website and give listing of all the things that it finds that are not "best practices"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081526">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081526">14</a> by Richard Tugwell
		posted on 1/25/2014 at 7:48 PM
		</div>
		<div class="comment_text"><p>I've found on recent small projects that using something like angularJS on the client side and CF on the back end to manage the angularJS model has worked well. As far as UI/UX is concerned, add in stuff like Angular-xeditable and it sometimes feels like it's too good to be true. (so it probably is)</p><p>No idea how this scales to bigger, more complex projects but it sure feels cute</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081525">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081525">15</a> by Raymond Camden
		posted on 1/25/2014 at 8:15 PM
		</div>
		<div class="comment_text"><p>@James: The issue with that is that a lot of times, best practices is hard to quantify. I know someone did begin work on a linter for CF. Not sure of the status though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081528">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081528">16</a> by Phillip Senn
		posted on 1/25/2014 at 11:09 PM
		</div>
		<div class="comment_text"><p>Someone on IRC recommended Isaac Schlueter's video at <a href="http://disq.us/url?url=http%3A%2F%2Fwww.youtube.com%2Fwatch%3Fv%3DPSv7GIX-XQ0%3A9mYwBvKi_3Zee4H65Xj5E4ArZEk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.youtube.com/watch?v=PSv7GIX-XQ0">http://www.youtube.com/watc...</a> (Building compassionate Communities in Tech).</p><p>Isaac heartily recommends reading "Nonviolent Communication: A Language of Life: Life-Changing Tools for Healthy Relationships".<br>The four components of NVC are:</p><p>1. observations<br>2. feelings<br>3. needs<br>4. requests</p><p>I don't quite understand it yet, but it goes something like this:</p><p>1. observations:<br>I see that you want to use cfform because it's less coding for you and it defaults to method="post".<br>2. feelings<br>It hurts the Internet when you do that.<br>3. needs <br>I need you to quit being such a total noob.<br>4. requests<br>I'm gonna have to ask you to come in tomorrroooowww.  We sort of have to play "catch up". That would be greeeeeat.  mmmmKay?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081530">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081530">17</a> by Michael White
		posted on 1/26/2014 at 5:27 AM
		</div>
		<div class="comment_text"><p>I so totally need help converting all of my cfform, cfgrid, cfdiv, applications to something like bootstrap, datatables, etc. this site could revolutionize my apps and make me a hero!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081531">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081531">18</a> by Michael White
		posted on 1/26/2014 at 5:36 AM
		</div>
		<div class="comment_text"><p>your introduction says no datasource is required but if you are only using the datasources that come with ColdFusion by default (cfartgallery, cfbookclub) it would be ok by me, especially for dynamic UI elements like data grids.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081532">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081532">19</a> by Raymond Camden
		posted on 1/26/2014 at 6:33 PM
		</div>
		<div class="comment_text"><p>@Michael White: We are going to use fake queries when we need to show a query. Ie, queryNew(). My first example (I'm doing cftooltip) will hopefully we ready Monday.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081537">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081537">20</a> by Michael Long
		posted on 1/26/2014 at 9:26 PM
		</div>
		<div class="comment_text"><p>Just curious, but are you proposing a single set of solutions that can all be used together, in a single site?</p><p>For example, DataTable, jqGrid, and jQuery Validation (forms) are all jQuery-based, which is fine just as long as the site didn't choose Prototype as its JavaScript base. (Or forgo jQuery/Prototype-style altogether.) And none of them might be what you'd choose if you'd been wanting more Angular or Backbone.js integration in your site.</p><p>I've been playing with a slick form generator implementation based on Semantic UI, but what if your site uses Twitter Bootstrap?</p><p>I guess what I'm saying is that there might be different "sets" of solutions, as each one depends upon your particular development stack.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081533">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081533">21</a> by Raymond Camden
		posted on 1/26/2014 at 9:31 PM
		</div>
		<div class="comment_text"><p>No, this is not meant to a "Always use jQuery UI for X" type solution. The idea is to guide you to how you could replace the UI controls. In fact, we really want to ensure multiple different types of solutions are shown so folks get exposed to different things (Ext, jQuery UI, native HTML5, etc).</p><p>We want users to learn - not just copy and paste the code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081536">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081536">22</a> by Michael Long
		posted on 1/26/2014 at 9:45 PM
		</div>
		<div class="comment_text"><p>That's kind of how I feel about it, which in turn makes me wonder if you don't need different examples for each replacement. It wouldn't be too hard, for example, to do a section on tabs, and show a brief sample of how you'd code it for jQuery UI, or Bootstrap, or Semantic UI.</p><p>Forms are more complex, but again, seeing jQuery Validation stacked up against Semantic UI could be beneficial too.</p><p>Many solutions may actually be too complex to cover completely (there's an entire site for all of the jQuery Validation options), so you might just consider compiling a set of "resource" articles. "10 Alternatives To CFForm." "8 Alternatives To CFLayout."</p><p>Each alternative could be a screenshot, a description, a bit of sample code, and then a link to the resource for more information.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081542">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081542">23</a> by Raymond Camden
		posted on 1/26/2014 at 9:47 PM
		</div>
		<div class="comment_text"><p>Well, each chapter *will* have a list of alternatives, but I do not want to make this overly complex. The main portion of the chapter focuses on ONE option. That way it is more focused, more direct, and easier to read.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081538">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081538">24</a> by Mark Gregory
		posted on 1/27/2014 at 1:21 AM
		</div>
		<div class="comment_text"><p>I really don't get where this is coming from.</p><p>When inheriting piles of terrifying legacy code, never have I said "Whoa this is horrific code to maintain, they used CFForm!" There are multitudes of other sins committed daily that deserve far more attention than use of tags like CFForm, CFGrid, etc.</p><p>Besides, in some situations, I find some of the tags to be quite useful, and very fast to implement. Okay, maybe not CFPod. I don't feel that I need 17 JS libraries to create a form with 4 or 5 fields that submits to the database. If we are talking about an Enterprise application with piles and piles of larger to massive forms, maybe CFForm doesn't make as much sense.</p><p>Don't get me wrong, I am not advocating widespread use of CF UI tags. I do advocate limited use of them though, and believe that there are much more egregious sins to address, ranging from 'For the love of God, please stop putting queries in cfm files" up to "Lets have that boundary layer talk again" to "Yes, indexes are good things to have on that table that has 75 million records and runs really slow". These are the kinds of things that just kill me when inheriting legacy applications, even ones newly written, never the use of CF UI tags.</p><p>Maybe I just get exposed to a different set of problems than most.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081534">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081534">25</a> by Raymond Camden
		posted on 1/27/2014 at 6:03 AM
		</div>
		<div class="comment_text"><p>"I really don't get where this is coming from."<br>Mark, I probably just assumed most of my readers knew as it has been discussed. A lot. To be fair, not everyone attends conferences nor pays attention to all the blogs (who can?), so I can understand if you missed it.</p><p>In a nutshell, these tags offer 'quick fixes' to solutions, but in many cases, people find they need to do something not supported by the tag. Then you are - essentially - stuck since you a) didn't learn how to really do the thing (grid, pod, whatever) or b) you figure out how to make it work and then get screwed when the next version of CF updates the engine being used by that particular UI feature.</p><p>It is my opinion, and I am not alone in this, that it is *much* safer to simply let CF handle the back end stuff, where it kicks ass, and do the front end stuff yourself where you have direct control over all the pieces.</p><p>Finally, if front end work makes you nervous, scared, or whatever, then this is an excellent opportunity to get over it, learn some new skills, and become more marketable in general.</p><p>Are there more important things? Surely! Does that mean we can't work on *this* problem? I don't think so. As I said, many of us in the community just say "Don't do it", and this aims to fix that by saying "Do this instead."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081541">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081541">26</a> by Raymond Camden
		posted on 1/28/2014 at 4:03 AM
		</div>
		<div class="comment_text"><p>For folks looking for an example, I've checked in one for cftooltip.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081535">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081535">27</a> by Jason
		posted on 1/28/2014 at 4:14 AM
		</div>
		<div class="comment_text"><p>This is a great idea ray. At my last job I had extensively used cfgrid and cfwindow with all kinds of hacks/workarounds. Then of course after the cf server was upgraded, a lot of the features broke. The only defense for using them previously was that the other options available at the time were much more involved and time was essential. One chapter I would love to see is on cfchart. Its a powerful, easy feature but once you need advanced/specialized charts it becomes a nightmare to control. Would love to hear what other options are out there (that don't cost a fortune and look as nice).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081546">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081546">28</a> by Raymond Camden
		posted on 1/28/2014 at 4:21 AM
		</div>
		<div class="comment_text"><p>Jason, check the issues on the git repo. I used an issue for a TOC and cfchart is definitely covered.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081545">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081545">29</a> by Mark Gregory
		posted on 1/28/2014 at 7:52 AM
		</div>
		<div class="comment_text"><p>Thanks for the response Ray. One point of note:<br>"...they need to do something not supported by the tag"<br>To me, that is the problem. When faced with needs not supplied by the tag, then don't use the tag. I can dig finding better solutions, because better is, well, better!</p><p>I guess what is kind of getting under my skin really is what I see as a larger issue that has become prevalent enough that I stopped reading most CF blogs a while back. Guy tries something unsupported, off the ranch, or just generally unwise. CF reacts in a way they didn't expect. Bash CF blog entry ensues. Note that I have not seen anything like that here on your blog, but just out there in the Blogosphere.</p><p>It just sounds like the flavor of the month to bash has become the CF UI tags. Yes they can be abused and very very often are, and yes there are usually better solutions. But there are also times when using them makes sense. Perhaps blanket statements in this case are not optimal.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081539">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081539">30</a> by Raymond Camden
		posted on 1/28/2014 at 8:09 AM
		</div>
		<div class="comment_text"><p>Mark, fair enough. To me, I see a broader problem of CFers not embracing front end stuff as much as they should. So even more than "CFUI is Evil", I'd like to see more CFers feeling more comfortable with the front end.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081540">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081540">31</a> by Mark Gregory
		posted on 1/28/2014 at 10:31 AM
		</div>
		<div class="comment_text"><p>Ray, I am definitely guilty on that front! Things like SQL Server and index tuning, architecture, and other back end stuff get me all excited. View layer work makes me want to cry, but thats probably because I am bad at it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081543">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081543">32</a> by Edward Beckett
		posted on 2/2/2014 at 1:44 AM
		</div>
		<div class="comment_text"><p>UI tags are cool... I don't especially rely on them because they kinda' 'date' my implementation to a specified @release ... However, I think it's safe to say that 'tag based' templating like cfmodule etc is smart. It makes code .... err modular ...</p><p>I've gone over to the dark side over the last few years ... working mostly in java and spring... and 'ui' tags are in full swing still ... Spring Webflow, JSF, Primefaces, GWT all use 'ui' tags and those frameworks are heavily relied on ... Moreover, CF is pretty cool in leveraging the ability to make custom tags for UI stuff .... &lt;cf:view&gt; &lt;cf:model_attrib&gt;</p><p>That my 2 ....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081553">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081553">33</a> by Phillip Senn
		posted on 2/2/2014 at 2:41 AM
		</div>
		<div class="comment_text"><p>Right.  The latest hotness is Angular.  I don't know anything about it,. but I sure am hearing a lot of buzz.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081550">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081550">34</a> by Phillip Senn
		posted on 2/10/2014 at 10:53 PM
		</div>
		<div class="comment_text"><p>I've been thinking about your encouragement to post into ColdFusion UI, the right way. and one of the reasons I'm hesitating is because I have a unique point of view on how to write everything in both ColdFusion and JavaScript. I'm sure that if I were to post a "chapter" in ColdFusion UI the right way, both you and Adam would ask "Why do you do it that way?" and would proceed to correct it.</p><p>I touched on this as a comment to a different blog post of yours, so the irony is not lost.<br>I guess what I'm saying is that I think it's great that you and Adam are publishing "The right way" according to your point of view, and I'm watching that github project closely.</p><p>For me to show an example, I would want to have control over the editing.<br>So: I guess, maybe, I need to change my attitude?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081554">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081554">35</a> by Raymond Camden
		posted on 2/10/2014 at 11:00 PM
		</div>
		<div class="comment_text"><p>In terms of this project, I am not interested in insisting on a particular style. I *want* to see different styles as it gives people different approaches. I *am* interested in ensuring things keep simple, practical, and that it is readable. I'm also want to ensure we follow a similar 'skeleton' to the chapters (ie, having the list of alternatives at the bottom for example).</p><p>"For me to show an example, I would want to have control over the editing.<br>So: I guess, maybe, I need to change my attitude?"</p><p>Well, it is a collaborative project. People are going to correct English, typos, etc. I don't think you will see people totally change how something is done. Not w/o debate first.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081551">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081551">36</a> by Papichulo
		posted on 6/18/2014 at 6:32 PM
		</div>
		<div class="comment_text"><p>Any example of cffileupload multiple alternative. Coldfusion's "cffileupload multiple" is great and simple. Unfortunately Railo doesn't have that tag either.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081548">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081548">37</a> by Raymond Camden
		posted on 6/18/2014 at 6:36 PM
		</div>
		<div class="comment_text"><p>It looks like we don't have that one yet. Sorry. Keep watching the project.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081552">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081552">38</a> by Henry Ho
		posted on 6/30/2014 at 11:02 PM
		</div>
		<div class="comment_text"><p>FYI: <a href="https://disq.us/url?url=https%3A%2F%2Ftwitter.com%2Fhenrylearn2rock%2Fstatus%2F483664543340453889%3AyWKoFMJ3k-gVh_remFE-cUcT3Sw&amp;cuid=3321886" rel="nofollow noopener" title="https://twitter.com/henrylearn2rock/status/483664543340453889">https://twitter.com/henryle...</a></p><p>"As decided we won't invest any time in Ajax UI components" <br>- Uday Ogra<br>11:20:23 PM GMT+00:00 Jun 29, 2014<br><a href="https://disq.us/url?url=https%3A%2F%2Fbugbase.adobe.com%2Findex.cfm%3Fevent%3Dbug%26id%3D3043516%3Ax703uNFNe8M1hUSnc8izbu7ER1Y&amp;cuid=3321886" rel="nofollow noopener" title="https://bugbase.adobe.com/index.cfm?event=bug&amp;id=3043516">https://bugbase.adobe.com/i...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081556">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081556">39</a> by Raymond Camden
		posted on 6/30/2014 at 11:29 PM
		</div>
		<div class="comment_text"><p>I refuse to believe something so big would be announced like that. But I'll check. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081555">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081555">40</a> by Raymond Camden
		posted on 7/1/2014 at 6:08 PM
		</div>
		<div class="comment_text"><p>Checked. Not true - misunderstanding.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1714081549">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1714081549">41</a> by ac123
		posted on 10/21/2014 at 7:07 PM
		</div>
		<div class="comment_text"><p>I used cfgrid once many years ago. I can confirm that it has been nothing but suffering since then. Hopefully one day I'll have time to rewrite that module, but it truly has caused us (and our users) nothing but problems.</p></div>
	</div>
</div>
		