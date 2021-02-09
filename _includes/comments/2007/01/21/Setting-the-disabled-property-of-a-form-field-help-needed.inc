
<div class="comment" id="c_1713661311">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661311">1</a> by Michael Anderson
		posted on 1/21/2007 at 10:51 PM
		</div>
		<div class="comment_text"><p>.enabled = false</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661300">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661300">2</a> by Mrinal
		posted on 1/21/2007 at 11:57 PM
		</div>
		<div class="comment_text"><p>try this:</p><p>document.getElementById("prevbutton").disabled=true;</p><p>also Michael's solution will not work, there is no enabled property.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661313">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661313">3</a> by Rob Gonda
		posted on 1/22/2007 at 12:15 AM
		</div>
		<div class="comment_text"><p>* Ensure there is only one element with the id 'prevbutton'. If you have more than one, even if it's hidden, your function will target the first one.<br>* If you included more than one JavaScript library in this page, your $() abbreviation may have been altered. E.g. if you included prototype or AjaxCFC, and then included jQuery or YUI, the latest include will overwrite the $() namespace.</p><p>Also, try debugging it a little, like changing the value of the text, or test your $() functions using Firebug. With Firebug (if you're a FF user), you a full JS console and debugging tools.. you may set breakpoints, see values of local and global variables and more; nevertheless, the most straight-forward way would be opening the JS console, and typing $("prevbutton").disabled=true; and see what happens.</p><p>HTH</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661310">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661310">4</a> by MikeR
		posted on 1/22/2007 at 12:19 AM
		</div>
		<div class="comment_text"><p>Also make sure your page fully validates.<br>HTML errors can sometimes confuse javascripts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661309">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661309">5</a> by Raymond Camden
		posted on 1/22/2007 at 4:47 AM
		</div>
		<div class="comment_text"><p>Hey guys - see my latest post. Thanks to all of you (and Rob G) for helping me get this fixed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661312">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661312">6</a> by John
		posted on 9/21/2007 at 10:37 AM
		</div>
		<div class="comment_text"><p>Just for anyone who stumbles on this in the future (like I did). The reason it's not working is that you're accessing a jQuery object and not a DOM object -- which ".disabled" is part of.  The correct format is:</p><p>$("prevbutton").get(0).disabled = true;</p><p>or</p><p>$("prevbutton")[0].disabled = true;</p><p>or, if you want to target multiple objects:</p><p>$(".button").each( function() { this.disabled = true } );</p><p>The $( ) function returns a jQuery object while the .get( ) method or array index [ ] return DOM object(s) for the given selection.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661314">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661314">7</a> by Michael McDaniel
		posted on 9/28/2007 at 11:20 PM
		</div>
		<div class="comment_text"><p>I wrote a little extension for jquery for disabling controls.</p><p>jQuery.fn.extend({<br> filterDisabled : function(){ return this.filter(function(){return (typeof(this.disabled)!=undefined)})},<br> disabled: function(h) {<br>	if (h!=undefined) return this.filterDisabled().each(function(){this.disabled=h});<br>	this.filterDisabled().each(function() {h=((h||this.disabled)&amp;&amp;this.disabled)}); return h;<br> },<br> toggleDisabled: function() { return this.filterDisabled().each(function(){this.disabled=!this.disabled});}<br>});</p><p>So, with the piece of code above, you can do the following:</p><p>$("prevButton").disabled(true);<br>or use it with multiple objects:<br>$(".button").disabled(true);<br>or just toggle states<br>$(".button").toggleDisabled();<br>or get the state of a control<br>if ($("prevButton").disabled()) { /*we are disabled*/}</p><p>This will also chain like other calls:<br>$(".button").disabled(true).val("disabled!");</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661318">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661318">8</a> by Jim
		posted on 9/21/2009 at 10:32 PM
		</div>
		<div class="comment_text"><p>I need to do a variation of this and just can't seem to get it right.  I have a form with a radio control and when a certain selection is selected I need to enable a select control otherwise the select control is disabled.  I spent the last four hours trying to figure this one out.  The code doesn't throw an error in FB.  In fact it doesn't do anything.  Any help would be appreciated:</p><p>Here's my jquery: (inside a script tag of course with some other code)</p><p>    $(":input[@name='prTyp']").select(function(){<br>    if ($(":input[@name='prTyp']:checked").val() == '1')<br>         $('#HWType').attr("readonly", true); <br>    else<br>         $('#HWType').attr("readonly", false); <br>    });</p><p>My html (cf):</p><p>          &lt;div id="prtyps" class="fullrow"&gt; <br>            &lt;div class="padleft"&gt;&lt;h5&gt;Types:&lt;/h5&gt;&lt;/div&gt;<br>            &lt;div&gt;<br>	&lt;ol&gt;             <br>            &lt;li class="squishbot"&gt;<br>            &lt;cfinput type="radio" name="prTyp" id="prTyp" value="1" /&gt; Outbound from PAR&lt;/li&gt;<br>            &lt;li&gt;<br>            &lt;cfinput type="radio" name="prTyp" id="prTyp" value="2" /&gt; Inbound to PAR&lt;/li&gt;<br>            &lt;li class="squishtop"&gt;<br>            &lt;cfinput type="radio" name="prTyp" id="prTyp" value="3" checked="yes"/&gt; All&lt;/li&gt;                         <br>            &lt;/ol&gt;             <br>            &lt;/div&gt;<br>          &lt;/div&gt;<br>        &lt;div id="RepairUnits" class="fullrow"&gt;<br>           &lt;div class="padleft"&gt;&lt;h5&gt;Repair Unit: &lt;/h5&gt;&lt;/div&gt;<br>           &lt;div class="rowrightfull"&gt;<br>                   &lt;!--- Add ajax drop down list to add filter capability ---&gt;<br>		&lt;cfset ListName = "Hardware Type"&gt;<br> 		&lt;cfinvoke component="portal" method="ddlList" returnvariable="ddlListRet"&gt;<br>			&lt;cfinvokeargument name="thisDSN" value="#application.DSN#"/&gt;<br>			&lt;cfinvokeargument name="thisField" value="#ListName#"/&gt;<br>		&lt;/cfinvoke&gt;</p><p>               &lt;label for="HWType" class="fltleft"&gt;Hardware:               <br>                &lt;cfselect name="HWType" id="HWType" class="fltleft"&gt;<br>		 			 &lt;cfloop query="ddlListRet"&gt;<br>						&lt;cfoutput&gt;&lt;option value="#objid#"&gt;#title#&lt;/option&gt;&lt;/cfoutput&gt;<br>		  			&lt;/cfloop&gt;<br>				&lt;/cfselect&gt;<br>              &lt;/label&gt;</p><p>           &lt;label for="A_COMPONET" class="fltleft"&gt;Component:<br>          &lt;cfselect class="fltleft" name="A_COMPONET" id="A_COMPONET" bind="CFC:portal.myList({HWType})" bindonload="true"  display="title" value="title"&gt;<br>              &lt;cfoutput&gt;&lt;option value="title"&gt;title&lt;/option&gt;&lt;/cfoutput&gt;          &lt;/cfselect&gt;<br>			&lt;/label&gt;</p><p>            		&lt;cfset ListName = "Action Code"&gt;<br>		&lt;cfinvoke component="portal" method="ddlList" returnvariable="ddlListRet"&gt;<br>			&lt;cfinvokeargument name="thisDSN" value="#application.DSN#"/&gt;<br>			&lt;cfinvokeargument name="thisField" value="#ListName#"/&gt;<br>		&lt;/cfinvoke&gt;<br>		&lt;label for="ActCode" class="fltleft"&gt;Action Code:<br>		&lt;select name="ActCode" id="ActCode" class="fltleft"&gt;<br>		  &lt;cfloop query="ddlListRet"&gt;<br>			&lt;cfoutput&gt;&lt;option value="#ddlListRet.objid#"&gt;#ddlListRet.title#&lt;/option&gt;&lt;/cfoutput&gt;<br>		  &lt;/cfloop&gt;<br>		&lt;/select&gt;&lt;/label&gt;              <br>           &lt;/div&gt;<br>           &lt;/div&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661316">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661316">9</a> by Raymond Camden
		posted on 9/21/2009 at 10:34 PM
		</div>
		<div class="comment_text"><p>FB?</p><p>Also - I'd consider removing the cfinput statements and converting them to just input blocks. CF uses its own JS and may get in the way of any jQuery you wan to use.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661320">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661320">10</a> by Jim
		posted on 9/21/2009 at 10:48 PM
		</div>
		<div class="comment_text"><p>FB = Fire Bug</p><p>I've tried cfinput (they are inside a cfform) and input. It doesn't make a difference.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661315">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661315">11</a> by Raymond Camden
		posted on 9/21/2009 at 10:56 PM
		</div>
		<div class="comment_text"><p>I'd switch both the cfinputs AND cfform to the vanilla form. Again, just to keep things simple. Have you tried that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661319">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661319">12</a> by Jim
		posted on 9/21/2009 at 11:14 PM
		</div>
		<div class="comment_text"><p>I have inputs (date picker) that require the cfform.  I also have cfinput fields that use a jquery autosuggest.  I stuck my jquery code in that block of script.  Should I put it in it's on script block and ready statement&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661322">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661322">13</a> by Raymond Camden
		posted on 9/21/2009 at 11:18 PM
		</div>
		<div class="comment_text"><p>What I'd recommend then is some simplification. Build a form with ONLY the radio and select items. No databases. No cfinvokes. You need to strip things down to the barest example. If you can, then shoot it over and I can try to get it working as well.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661321">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661321">14</a> by Raymond Camden
		posted on 9/21/2009 at 11:27 PM
		</div>
		<div class="comment_text"><p>The following code worked ok for me. A bit verbose as it uses NAMEs and not IDs.</p><p>&lt;script src="<a href="http://disq.us/url?url=http%3A%2F%2Fajax.googleapis.com%2Fajax%2Flibs%2Fjquery%2F1.3.2%2Fjquery.min.js%3AagR_mf_L1EWh6Rp5RsKMUqrFQmU&amp;cuid=3321886" rel="nofollow noopener" title="http://ajax.googleapis.com/ajax/libs/jquery/1.3.2/jquery.min.js">http://ajax.googleapis.com/...</a>"&gt;&lt;/script&gt;<br>&lt;script&gt;<br>$(document).ready(function() {</p><p>	$("select[name='people']").attr("disabled", true)</p><p>	$("input:radio[name='inviteothers']").change(function() {<br>		if($(this).val() == "yes") {<br>			$("select[name='people']").attr("disabled", false)<br>		} else {<br>			$("select[name='people']").attr("disabled", true)<br>		}<br>	})<br>})<br>&lt;/script&gt;</p><p>&lt;cfform name="foo"&gt;</p><p>Others invited?&lt;br/&gt;<br>&lt;input type="radio" name="inviteothers" value="no"&gt;No&lt;br/&gt;<br>&lt;input type="radio" name="inviteothers" value="yes"&gt;Yes&lt;br/&gt;</p><p>&lt;select name="people"&gt;<br>&lt;option&gt;How many?&lt;/option&gt;<br>&lt;option value="0-10"&gt;0-10&lt;/option&gt;<br>&lt;option value="10+"&gt;10 or more&lt;/option&gt;<br>&lt;/select&gt;</p><p>&lt;/cfform&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661353">15</a> by Jim
		posted on 9/21/2009 at 11:51 PM
		</div>
		<div class="comment_text"><p>THANK YOU,  THANK YOU, THANK YOU - Ray</p><p>Your code worked in my test page. I modified to my code And it still worked.  Plugged your script into my real page, did a couple of name updates and it WORKED.  You're my Jedi for sure.</p><p>Jim</p></div>
	</div>
</div>
		