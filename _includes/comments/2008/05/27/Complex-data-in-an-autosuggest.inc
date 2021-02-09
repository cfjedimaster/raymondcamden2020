
<div class="comment" id="c_1713681212">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681212">1</a> by Sam Farmer
		posted on 5/27/2008 at 5:51 PM
		</div>
		<div class="comment_text"><p>I've done this by bind a cfselect to an input field.  So the user types in the input field and the values appear in the select.  You can set the size of the select to 5 or 10 if you want people to see it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681211">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681211">2</a> by Raymond Camden
		posted on 5/27/2008 at 6:07 PM
		</div>
		<div class="comment_text"><p>So I'm confused. Is your comment specifically talking about the issue of linking one name to N results with the same name?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681206">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681206">3</a> by Trent Richardson
		posted on 5/27/2008 at 6:18 PM
		</div>
		<div class="comment_text"><p>I've never used it with ColdFusion 8 or Spry, but normally I in my json or whatever feeds the values to the type suggest I will create lists as my values of some sort, wither by number of characters or delimiters: "23|John Doe".  Thats pretty easy to decode in any server side language.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681217">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681217">4</a> by Doug Keen
		posted on 5/27/2008 at 6:41 PM
		</div>
		<div class="comment_text"><p>The multiple "Victor Newman" problem may be a moot point.  If two "Victor Newman"s show up in your auto-suggest list, how is your user supposed to differentiate between them?  Seems like there's a more critical user interface problem that underlies that hypothetical duplicate label problem... ie, you shouldn't be showing duplicates in the list in the first place (assuming the list is an identity selection and not a search term selection).</p><p>Granted, the secondary lookup of the selected label is clunky, but it does seem like a valid workaround.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681218">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681218">5</a> by Boyan Kostadinov
		posted on 5/27/2008 at 6:42 PM
		</div>
		<div class="comment_text"><p>This should be pretty simple to do if you can capture or wire your own event that gets triggered after you do the select. Something like:<br>function afterSelect() {<br>  // alert the value of the selected element<br>  alert(document.getElementById(<a href="http://disq.us/url?url=http%3A%2F%2Fthis.id%3AE1w8iolBAiwVVRDUkgIWKZIwtz4&amp;cuid=3321886" rel="nofollow noopener" title="this.id">this.id</a>).value));<br>}</p><p>The above has not been tested but it should give you an idea on how to implement.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681215">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681215">6</a> by Sam Farmer
		posted on 5/27/2008 at 6:46 PM
		</div>
		<div class="comment_text"><p>@Ray:</p><p>This is how it would work:</p><p>&lt;input type="text" name="lookup" id="lookup"&gt;&lt;br /&gt;</p><p>&lt;cfselect name="userID" id="userID" <br>   bind="url:/index.cfm?<br>   event=user.lookup={lookup@keyup}" <br>   display="userName" <br>   value="userID" <br>   bindOnLoad="false" /&gt;</p><p>As the user types in the lookup field, it fires off a request to the server which returns a json-ed query to the select which puts the IDs and names in the right place.  User then picks the correct user name and when submitting the form returns the ID.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681216">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681216">7</a> by Raymond Camden
		posted on 5/27/2008 at 6:52 PM
		</div>
		<div class="comment_text"><p>Ah so technically you aren't doing a traditional autosuggest at all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681219">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681219">8</a> by Sam Farmer
		posted on 5/27/2008 at 7:00 PM
		</div>
		<div class="comment_text"><p>Yeah.</p><p>Is autosuggest old enough to have a traditional version?!  Haha.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681222">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681222">9</a> by Jim Priest
		posted on 5/27/2008 at 7:25 PM
		</div>
		<div class="comment_text"><p>This is easy with jQuery and Jorn's excellent Autocomplete plugin: (<a href="http://disq.us/url?url=http%3A%2F%2Fbassistance.de%2Fjquery-plugins%2Fjquery-plugin-autocomplete%2F%29%3A6DuEVbuTPwLEr3RywkV8FTksryI&amp;cuid=3321886" rel="nofollow noopener" title="http://bassistance.de/jquery-plugins/jquery-plugin-autocomplete/)">http://bassistance.de/jquer...</a></p><p>I routinely use this and then use jQuery to populate a hidden field with the user ID.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681226">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681226">10</a> by Raymond Camden
		posted on 5/27/2008 at 7:27 PM
		</div>
		<div class="comment_text"><p>Thanks for sharing, Jim.</p><p>Is there anything jQuery can't do? ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681224">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681224">11</a> by Richard Dillman
		posted on 5/27/2008 at 7:55 PM
		</div>
		<div class="comment_text"><p>It currently cant bring Coffee to my desk, but I've taken to calling my assistant Jquery to bridge that gap.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681223">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681223">12</a> by Jim Ruzicka
		posted on 5/27/2008 at 9:11 PM
		</div>
		<div class="comment_text"><p>I ran into this when autosuggesting on multiple fields and displaying multiple fields...for instance: auto suggest a POC at specific location... I let the user type in the location or the first or last name of the poc and it returns the POC, Company, and City and lastly ID into the autosuggest. I append ID: at the end of it, then I parse out the ID to run another ajax query and load the complete POC data into display with other contact info and pass the ID as a hidden field.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681225">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681225">13</a> by stitch
		posted on 5/28/2008 at 12:59 AM
		</div>
		<div class="comment_text"><p>This is possible with Spry. Display the autosuggest in a table:</p><p>&lt;div id="autosuggest"&gt;<br>	&lt;span id="SupplierName"&gt;&lt;input type="text" name="SupplierName" id="SupplierName" /&gt;&lt;/span&gt;<br>	&lt;div id="SupplierMenu" spry:region="dsSuppliers"&gt;<br>		&lt;table&gt;<br>			&lt;tr&gt;<br>				&lt;th&gt;Supplier ID&lt;/th&gt;<br>				&lt;th&gt;Supplier Name&lt;/th&gt;<br>			&lt;/tr&gt;<br>			&lt;tr spry:repeat="dsSuppliers" spry:suggest="{SUPPLIERID}|{SUPPLIERNAME}"&gt;<br>				&lt;td&gt;{SUPPLIERID}&lt;/td&gt;<br>				&lt;td&gt;{SUPPLIERNAME}&lt;/td&gt;<br>			&lt;/tr&gt;<br>		&lt;/table&gt;<br>	&lt;/div&gt;<br>&lt;/div&gt;</p><p>Tweak the Spry.Widget.AutoSuggest.prototype.setValue function in SpryAutoSuggest.js file (Spry 1.6.1 line 178)to break the string into an array of strings and populate the form:</p><p>Spry.Widget.AutoSuggest.prototype.setValue = function(str)<br>{<br>	if (!this.textElement)<br>		return;<br>	this.textElement.value = str;<br>	var myArray = str.split(/\|/);<br>	document.form.SupplierID.value=myArray[0];<br>	this.textElement.value=myArray[1];<br>	this.showSuggestions(false);<br>};</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681221">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681221">14</a> by Raymond Camden
		posted on 5/28/2008 at 1:04 AM
		</div>
		<div class="comment_text"><p>To be fair Stich - I don't think modifying Spry to make it work is the same as 'possible' with Spry. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681230">15</a> by Seamus Campbell
		posted on 12/8/2008 at 6:42 AM
		</div>
		<div class="comment_text"><p>I do this by getting an array from my query, <br>eg &lt;cfloop query="get_staff"&gt;<br>&lt;cfset my_staff_array = ArrayAppend(staff_array, "#contact_first_name# #contact_surname# #contact_id#")&gt;<br>&lt;/cfloop&gt;<br>use ArrayToList to change it to a list, which cfautosuggest accepts.<br>&lt;cfset staff_name_list = ArrayToList(staff_array,",")&gt;<br>Then on my action page, get the id field <br>&lt;cfset contact_id = ListLast(staff_name_list, " ")&gt;</p><p>This seems to work - not sure how efficient it is</p><p>Seamus</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681227">16</a> by Matt Hunnell
		posted on 1/29/2009 at 10:18 PM
		</div>
		<div class="comment_text"><p>I wrestled with this issue for a while. This is what i came up with. I wanted to populate a hidden "personID" field when they selected from a "personName" cfselect. Instead, I populated a second cfselect with a bind attribute just like the clasic city/state example. If the "personID" cfselect calls a cfc that only returns one record, then it can work the same as the hidden input item that we originally wanted. finally you just have to use css to hide the second cfselect. My code is a little messy still, or else I would post it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681228">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681228">17</a> by Adam
		posted on 9/24/2009 at 11:59 PM
		</div>
		<div class="comment_text"><p>Hi Seamus -</p><p>I've added the ArrayToList function to my CFC.  I am still trying to grab the ID from my list of clients.</p><p>I've used your recommendation on my action page of grabbing the ID, but I'm having no luck.  Could you elaborate on how you accomplish this?</p><p>Thanks,<br>Adam</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681231">18</a> by Chad Armond
		posted on 2/24/2011 at 8:09 PM
		</div>
		<div class="comment_text"><p>I know this isn't the best approach, but it works.  My return values from the CFC are in the format of:</p><p>#name# &lt;span style='display:none'&gt;#id#&lt;/span&gt;</p><p>Then in my JavaScript, I strip the &lt;span&gt;&lt;/span&gt; from the result and put the id in a hidden field.</p></div>
	</div>
</div>
		