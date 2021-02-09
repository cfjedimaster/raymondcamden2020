
<div class="comment" id="c_1713720098">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720098">1</a> by Robert
		posted on 1/31/2011 at 10:31 PM
		</div>
		<div class="comment_text"><p>Hey Ray,<br>What if I wanted to takes this a step further and auto-fill form fields based upon what the user ultimately selects in "chosen"?<br>Can I return an array of multiple columns from that query and somehow autofill other fields on the page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720097">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720097">2</a> by Raymond Camden
		posted on 2/1/2011 at 8:26 PM
		</div>
		<div class="comment_text"><p>Unfortunately no. The auto select in CF is really meant to return just data for the drop down. This is trivial though in jQuery's autocomplete.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720096">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720096">3</a> by Robert
		posted on 2/1/2011 at 8:38 PM
		</div>
		<div class="comment_text"><p>Ok cool, thanks Ray.  I'll look into the jQuery autocomplete.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720095">4</a> by Michael Appenzellar
		posted on 2/4/2011 at 7:45 PM
		</div>
		<div class="comment_text"><p>One thing I am trying to figure out is, is it possible to do an autosuggest but if you type in the last say...4 digits of a value, the result will still come up? Ex: The list of database values are very similar for the first 10 characters, but only the last 4 or 5 change. So I don't want the user to have to type in the first 10 to get the autosuggest to start working...does this make since?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720094">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720094">5</a> by Michael Appenzellar
		posted on 2/4/2011 at 7:47 PM
		</div>
		<div class="comment_text"><p>NEVERMIND, matchcontains="true" worked like a charm....sorry for the bad post!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720099">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720099">6</a> by Raymond Camden
		posted on 2/4/2011 at 7:50 PM
		</div>
		<div class="comment_text"><p>No worries Michael - thanks for posting what you found though as I'm sure others may have the same question.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720102">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720102">7</a> by puspita
		posted on 7/12/2011 at 1:35 PM
		</div>
		<div class="comment_text"><p>anybody.. can help me to send source code about that.<br>Because it doesn't work, and i am newbie with coldfusion. Thanks anyway :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720100">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720100">8</a> by Raymond Camden
		posted on 7/12/2011 at 2:27 PM
		</div>
		<div class="comment_text"><p>Sorry - what doesn't work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720101">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720101">9</a> by shinta
		posted on 7/29/2011 at 2:09 PM
		</div>
		<div class="comment_text"><p>I have query his,<br>SELECT a.Name,c.Client FROM tAnggota a,tClient c WHERE	a.Name LIKE &lt;cfqueryparam cfsqltype="cf_sql_varchar"value="%#ucase(<a href="http://disq.us/url?url=http%3A%2F%2Farguments.search%3AWSxwSa-9i1rFmrrE7nSlZAipOG4&amp;cuid=3321886" rel="nofollow noopener" title="arguments.search">arguments.search</a>)%" /&gt; AND c.Client = "#FORM.txtClient#" AND c.CodePK =a.CodeFK			Order by a.Name</p><p>and  '#FORM.txtClient#' made error in my file. <br>The error is :<br>   Error invoking CFC/dir/autosuggest.cfc : Element TXTXCLIENT is undefined in FORM. [enabling debugging by adding 'cfdebug' to your URL parameter to seemore information]<br>I hope you answer my question. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720124">10</a> by Raymond Camden
		posted on 7/29/2011 at 3:22 PM
		</div>
		<div class="comment_text"><p>The error is pretty clear. That key does not exist in the form scope. This isn't a form post happening here - rather CF is grabbing a form field and passing the data itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720117">11</a> by Ray Meade
		posted on 3/30/2012 at 12:30 AM
		</div>
		<div class="comment_text"><p>Ray, is there a way to make the autosuggest feature work on a cfgridcolumn? (preferably in a flash formatted cfgrid)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720113">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720113">12</a> by David Jaocbson
		posted on 8/28/2012 at 6:28 PM
		</div>
		<div class="comment_text"><p>Ray, Is it possible to return more than one field, much like a dropdown that has a display value and an actual value?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720119">13</a> by Raymond Camden
		posted on 8/28/2012 at 7:32 PM
		</div>
		<div class="comment_text"><p>Not with the CF control. You can do it with others - like the jQuery UI one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720122">14</a> by ManOnTheMoon
		posted on 1/12/2013 at 3:28 AM
		</div>
		<div class="comment_text"><p>Is there a way to mimic the matchcontains="true" in CF8?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720114">15</a> by Raymond Camden
		posted on 1/12/2013 at 3:52 AM
		</div>
		<div class="comment_text"><p>Not w/o modifying the code. I'd just use the autosuggest from jQuery UI.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720125">16</a> by ManOnTheMoon
		posted on 1/12/2013 at 11:59 PM
		</div>
		<div class="comment_text"><p>Thank you! I'll give it a go :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720118">17</a> by ion
		posted on 4/10/2013 at 11:59 PM
		</div>
		<div class="comment_text"><p>is there a way to retrieve 2 columns, say, ID and Name, display only the Name and, onClick, set a field with that ID value?</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720127">18</a> by Raymond Camden
		posted on 4/11/2013 at 1:34 AM
		</div>
		<div class="comment_text"><p>No. I'd recommend you use something like jQuery UI for this. (In general, I no longer recommend folks use the CF AJAX UI tags!)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720123">19</a> by Steve
		posted on 11/21/2013 at 8:59 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>That matchContains tidbit really helped. I am having an issue though. Is there any way to get it to return _all_ the results? My client wants to be able to have it just give her all the results if she hits the spacebar, so that she doesn't have to remember the list, or have to guess. (I know, then that's a dropdown. Mine is not to question why). I am already using the jQuery autosuggest to get data that populates another cfinput. this second cfinput is based on the first one. i.e. give me all the sub projects, based on the projects you just got. I couldn't figure out how to daisy chain the jQuery calls so the first is jQuery, the second is CF.</p><p>So summing up I guess the questions are: can cf autosuggest return all rows, OR can you pass 2 arguments to jQuery autosuggest?</p><p>Code:<br>&lt;script&gt;<br>&lt;!---// this script pulls in data for the autocomplete of the project name.  ---&gt;<br>$(function(request, response) {<br>    var options = {<br>        source: "getProjectWithSubView.cfc?method=get_ProjectData&amp;returnformat=json",<br>		dataType: "json",<br>		minLength: 0,<br>		data: {<br>		Search: request.term,<br>	 	maxRows: 30<br>},<br>success: function(data) {<br>response(data);<br>} <br>    };</p><p>	&lt;!--- // this is the class for the field that activates autocomplete. ---&gt;<br>    $("input.searchInput").live("focus.autocomplete", function() {<br>        $(this).autocomplete(options);<br>    });</p><p>    var addInput = function() {<br>        var inputHTML = "&lt;input name='search' value='' class='searchInput' maxlength='20' /&gt;";<br>        $(inputHTML).appendTo("form#myForm");<br>        $("input.searchInput:last").focus();<br>    };</p><p>    if (!$("form#myForm").find("input.searchInput").length) {<br>        addInput();<br>    }</p><p>	&lt;!--- //adds the data into the field once it is clicked in the 'dropdown' ---&gt;<br>    $("input#addButton").click(addInput);<br>    });       <br>&lt;/script&gt;</p><p>a hidden field then fires off a standard SQL that populates another filed:<br>&lt;cfinput name="Sub_Project_Name" id="Sub_Project_Name"  type="text" size="15" maxlength="16" tooltip="Sub Project Names - Press spacebar to see full list" autosuggest="#ValueList(getSubProjectParent2.Sub_Project_Name)#" autosuggestminlength="1"  matchContains="true"&gt;</p><p>Thanks!<br>Steve</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720120">20</a> by Raymond Camden
		posted on 11/22/2013 at 5:44 AM
		</div>
		<div class="comment_text"><p>Steve, this is an *incomplete* answer and I did not read your comment completely. I'm currently on the road and will not be back till after Thanksgiving. As a quick fix, you may be able to build your CFC such that if " " is passed as a search string, your query returns everything.</p><p>I'm assuming this answer probably isn't right, but I was able to get it out quickly and not make you wait a week. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720115">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720115">21</a> by Raymond Camden
		posted on 11/24/2013 at 3:33 AM
		</div>
		<div class="comment_text"><p>Still a half ass answer, but:</p><p>1) Please, please, please do not mix cfinput (and other CF client stuff) with jQuery (or any other JS stuff). You may not want to hear this, but you should avoid any and all usage of CF client side stuff. Yes, I blogged about it. A *lot*. And to be fair, I know some people make good use of it, but I cannot recommend enough that you do things the "right" way (and yes, that is my opinion, but also those of *many* in the CF upper echelons) and focus on just doing the JS yourself.</p><p>"So summing up I guess the questions are: can cf autosuggest return all rows, OR can you pass 2 arguments to jQuery autosuggest?"</p><p>To your first question, no, because " " won't work with matchContains unless your data actually has a space. Now, to be fair, I haven't tested it, but I'd be surprised if it worked.</p><p>To your second question: I think you mean, using jQuery Autosuggest, when I ping a server side service, can I pass multiple arguments. If so, yes. You can do whatever you want for the XHR call. Please see their docs for more info.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720121">22</a> by Balu
		posted on 7/31/2014 at 9:28 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>I am using the below code for autosuggest. Here the autosuggest clearly works to show the suggestion. But I want to get the value field changed as per the item I am selecting using auto suggest. Is there any way to do that?</p><p>&lt;cfinput name="mfg" onchange="setNetworkModelList();"  autosuggest="#ValueList(qGetDeviceMFGs.mfg)#" value="#qGetDeviceMFGs.mfg#" matchContains="true"&gt;</p><p>Thanks,<br>Balu</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713720126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713720126">23</a> by Raymond Camden
		posted on 7/31/2014 at 3:53 PM
		</div>
		<div class="comment_text"><p>I do not understand your question.</p></div>
	</div>
</div>
		