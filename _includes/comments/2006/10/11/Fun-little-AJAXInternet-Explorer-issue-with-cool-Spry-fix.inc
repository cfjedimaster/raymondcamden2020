
<div class="comment" id="c_1713658137">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658137">1</a> by Neil Bailey
		posted on 10/12/2006 at 7:51 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Maybe I am not understanding what the issue is, but couldn't you just do something like document.formName.selectName.selectedIndex = 0;?</p><p>Or am I missing the entire point?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658141">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658141">2</a> by Raymond Camden
		posted on 10/12/2006 at 7:54 PM
		</div>
		<div class="comment_text"><p>See my last post on Spry - you CAN do this using an observer. That's what I did for my friend because he had _other_ needs for the observer as well - but - this solution is simpler I'd say.  I'd use this instead of an observer if I didn't need to do anything else.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658148">3</a> by Mamdoh
		posted on 10/18/2007 at 3:11 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I have a challenging problem and I am wondering if you will be able to help.</p><p>I have an edit form which contains State and City drop down boxes.  I managed to select the state but I am unable to figure out how to refresh the city box. when the form/page open the city always defaulted to Alabama's cites.</p><p>/////my code which is a copy from spry sample</p><p>&lt;script language="JavaScript" type="text/javascript" src="js/includes/xpath.js"&gt;&lt;/script&gt;<br>&lt;script language="JavaScript" type="text/javascript" src="js/includes/SpryData.js"&gt;&lt;/script&gt;<br>&lt;script language="JavaScript" type="text/javascript" src="js/includes/SpryNestedXMLDataSet.js"&gt;&lt;/script&gt;</p><p>&lt;script type="text/javascript"&gt;<br>var dsStates = new Spry.Data.XMLDataSet("xml/states/states.xml", "states/state");<br>var dsCities = new Spry.Data.XMLDataSet("xml/states/{dsStates::url}", "state/cities/city");</p><p>&lt;/script&gt;</p><p>&lt;form ....&gt;</p><p>&lt;SPAN  class="requiredField"&gt;State:&lt;/SPAN&gt;<br>&lt;span spry:region="dsStates" id="stateSelector"&gt;<br>		&lt;select spry:repeatchildren="dsStates" name="billto_state" onchange="document.forms[0].citySelect.disabled = true; dsStates.setCurrentRowNumber(this.selectedIndex);" id="billto_state"&gt;<br>			&lt;option  spry:if="'{name}' == '#form.billto_state#'"  spry:if="{ds_RowNumber} == {ds_CurrentRowNumber}" value="{name}" spry:setrow="dsStates" selected="selected"&gt;{name}&lt;/option&gt;<br>			&lt;option  spry:if="'{name}' != '#form.billto_state#'" spry:setrow="dsStates" spry:if="{ds_RowNumber} != {ds_CurrentRowNumber}" &gt;{name}&lt;/option&gt;<br>		&lt;/select&gt;<br>	&lt;/span&gt;&lt;br&gt;</p><p>	&lt;SPAN  class="requiredField"&gt;City&lt;/SPAN&gt;<br>	&lt;span spry:region="dsCities" id="citySelector"&gt;</p><p>		&lt;select spry:repeatchildren="dsCities" id="citySelect" name="billto_city"&gt;<br>			&lt;option spry:if="'{name}' == '#form.billto_city#'" value="{name}" spry:if="{ds_RowNumber} == {ds_CurrentRowNumber}"  selected="selected"&gt;{name}&lt;/option&gt;<br>			&lt;option  spry:if="'{name}' != '#form.billto_city#'" spry:if="{ds_RowNumber} != {ds_CurrentRowNumber}" value="{name}"&gt;{name}&lt;/option&gt;<br>		&lt;/select&gt;<br>	&lt;/span&gt;<br>...&lt;/FORM&gt;</p><p>//////END OF CODE////</p><p>I look forward to hearing from you</p><p>Thank you<br>Mamdoh</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658146">4</a> by Raymond Camden
		posted on 10/18/2007 at 9:56 PM
		</div>
		<div class="comment_text"><p>W/o me digging into your code - I'd just say to examine more carefully the demo that ships with Spry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658147">5</a> by Mamdoh
		posted on 10/19/2007 at 12:16 AM
		</div>
		<div class="comment_text"><p>Thank you Ray for your response. I did examine the code carefully and it works as long the form in Add Mode (no specific state or city need to be selected), but what I have a problem with is the edit mode form. I need to select the state and the city in the drop down box based on the data retrieve from the database.  the demo that ships with spry, does not show any example for edit mode.</p><p>Also, Thank you for the Blog "Cool Spry Tip".  It seems my code above inspire you to write about it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658154">6</a> by Raymond Camden
		posted on 10/19/2007 at 12:57 AM
		</div>
		<div class="comment_text"><p>Oh heh, I didn't notice it in your code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658151">7</a> by Mamdoh
		posted on 10/20/2007 at 4:01 AM
		</div>
		<div class="comment_text"><p>I just would like to share with you that I figured it out with a help from Adobe staff. Mr. Kin confirmed that this feature is missing and he is going to request to be added.</p><p>to see the solution go to <a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fcfusion%2Fwebforums%2Fforum%2Fmessageview.cfm%3Fcatid%3D602%26threadid%3D1308016%26forumid%3D72%3AYWfx099il9F-7EgPVt7xfrIvrUg&amp;cuid=3321886" rel="nofollow noopener" title="http://www.adobe.com/cfusion/webforums/forum/messageview.cfm?catid=602&amp;threadid=1308016&amp;forumid=72">http://www.adobe.com/cfusio...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658150">8</a> by Raymond Camden
		posted on 10/20/2007 at 5:50 PM
		</div>
		<div class="comment_text"><p>Interesting. I've done the 'default on load' thing before, but his code is definitely more elegant. I may blog it separately as it is a good example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658155">9</a> by Jesus Gutierrez
		posted on 12/12/2007 at 4:33 AM
		</div>
		<div class="comment_text"><p>Hello.</p><p>Thankx a lot. I have worked to fix this issue but I couldn't find solution ...</p><p>...until I found this site and now it's works fine.</p><p>Thanks again!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658156">10</a> by Peter Coe
		posted on 4/6/2008 at 12:46 PM
		</div>
		<div class="comment_text"><p>I found your fix to work well, but (there is often one) it did not work when I sorted the data using spry.<br>Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713658157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713658157">11</a> by Jeff Salter
		posted on 5/16/2008 at 10:59 PM
		</div>
		<div class="comment_text"><p>I am having this same problem, but do not quite understand your solution.  The website I listed has the photogallery that is in question.  IE 7 is displaying the menu item first.  Here is the code for the dropdown box.  Any help will be greatly appreciated.</p><p>&lt;div id="gallerySelect" spry:region="dsGalleries"&gt;<br>&lt;label for="chooseGallery"&gt;Select Gallery: &lt;/label&gt;&lt;select name="chooseGallery"spry:repeatchildren="dsGalleries" class="dropDownMenu" id="chooseGallery" onchange="dsGalleries.setCurrentRow(this.value)" &gt;<br>&lt;option value="{ds_RowID}"&gt;{name} &lt;/option&gt;<br>&lt;/select&gt;<br>&lt;/div&gt;</p><p>Thanks Jeff</p></div>
	</div>
</div>
		