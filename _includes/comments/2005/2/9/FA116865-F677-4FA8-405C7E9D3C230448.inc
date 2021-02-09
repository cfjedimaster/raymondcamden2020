
<div class="comment" id="c_1713617167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617167">1</a> by Brett Liotta
		posted on 2/12/2005 at 12:41 PM
		</div>
		<div class="comment_text"><p>Your welcome Ray.  Thank you for this UDF validation concept.  By the way, your credentials are very impressive.  I'm going to try to attend your Macrochat coming up in a few days.</p><p>I realized that our projects are a bit different so I had to mod the function a little bit more to work for my purposes.  Here are the differences in our projects.</p><p>Yours is a flash form with multiple accordion tabs. Each accordion tab is a separate step and you can only move forward in the tabs if each tab passes form validation.</p><p>Now here's mine: you can move around in the tabs at any point (not separate steps) in the data entry process.  The fields on each tab are submitted as one step when all tabs pass form validation rules.  This is a bit more complicated and I'm still working out a solution.  I also have some fields that are required only when some other field has been filled out (dynamic validation).  It's a pretty complicated Data Entry process.  I really like the whole flash concept, but yeah I do see a bit of a learning curve with ActionScript.  I guess it was just a matter of time that I was going to have to learn it. What better time than this?</p><p>Or, I can always go back to regular forms or XML forms..</p><p>Any thoughts?  Kind of an open forum post, than a specific problem.</p><p>The more I think about it, the more I'm thinking it might be easier to just do it the step way like you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617164">2</a> by Steve Moore
		posted on 2/15/2005 at 1:30 AM
		</div>
		<div class="comment_text"><p>Seems like the programmatic interface to these Flash forms comes from the Flex environment. Without knowing Flex, is there documentation on this stuff somewhere?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617168">3</a> by Raymond Camden
		posted on 2/15/2005 at 1:34 AM
		</div>
		<div class="comment_text"><p>If you go to LiveDocs, go into Flex, then... into the AS portion and you will be in the right area.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617169">4</a> by johnb
		posted on 2/16/2005 at 3:48 PM
		</div>
		<div class="comment_text"><p>if i could just figure out how to move between the tabs from clickig buttons...I'm no AS guy! YET!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617165">5</a> by Raymond Camden
		posted on 2/16/2005 at 7:57 PM
		</div>
		<div class="comment_text"><p>It is very easy. For accordians, you can add this to the onClick to the button:</p><p>accordion1.selectedIndex=2</p><p>It should be simular for tabs. Note, "accordian1" is the name value for the accordion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617166">6</a> by johnb
		posted on 2/16/2005 at 8:04 PM
		</div>
		<div class="comment_text"><p>thanks Ray - looking forward to tonights session!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617172">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617172">7</a> by johnb
		posted on 2/16/2005 at 11:22 PM
		</div>
		<div class="comment_text"><p>FYI - just seen this too, <a href="http://disq.us/url?url=http%3A%2F%2Fwww.macromedia.com%2Fcfusion%2Fknowledgebase%2Findex.cfm%3Fid%3D2adf4c64%26amp%3Bpss%3Drss_coldfusion_2adf4c64%3AAA-tfmwOEX7_Gwe1k-Q5VxAkiSM&amp;cuid=3321886" rel="nofollow noopener" title="http://www.macromedia.com/cfusion/knowledgebase/index.cfm?id=2adf4c64&amp;amp;pss=rss_coldfusion_2adf4c64">http://www.macromedia.com/c...</a> which points to using the ID attribute over the name for selected components.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617173">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617173">8</a> by Raymond Camden
		posted on 2/17/2005 at 2:39 AM
		</div>
		<div class="comment_text"><p>Hmm, ok. I'll use ID next time. Name seemed to work fine for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617179">9</a> by pim
		posted on 2/25/2005 at 11:40 PM
		</div>
		<div class="comment_text"><p>the onClick stuff to select an index in the accordion is nice, I have tried to find a way to do this when the form is initialized, but there is no onLoad event on any form component, nor in the cfform itself, do you have an idea how to perform this???</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617176">10</a> by Brett Liotta
		posted on 2/26/2005 at 1:14 AM
		</div>
		<div class="comment_text"><p>pim, its pretty easy.  all you have to do is add the attribute [selectedIndex="thetabnum"] to your cfformgroup tag.  see following code:</p><p>&amp;lt;cfform type="flash"...&amp;gt;<br>  &amp;lt;cfformgroup type="tabnavigator" selectedIndex="#<a href="http://disq.us/url?url=http%3A%2F%2Furl.tab%3Aoo7SuX6SlMUUtYUmywu-nRSW_HM&amp;cuid=3321886" rel="nofollow noopener" title="url.tab">url.tab</a>#"&amp;gt;<br>    &amp;lt;cfformgroup type="page" label="General"&amp;gt;<br>    some cfinputs..<br>    &amp;lt;/cfformgroup&amp;gt;<br>    &amp;lt;cfformgroup type="page" label="Special Instructions"&amp;gt;<br>    some cfinputs..<br>    &amp;lt;/cfformgroup&amp;gt;<br>  &amp;lt;/cfformgroup&amp;gt;<br>&amp;lt;/cfform&amp;gt;</p><p>so whats going to happen here is say the variable <a href="http://disq.us/url?url=http%3A%2F%2Furl.tab%3Aoo7SuX6SlMUUtYUmywu-nRSW_HM&amp;cuid=3321886" rel="nofollow noopener" title="url.tab">url.tab</a> is a 1.  the flash form will open with the second tab selected (viewable).  Keep in mind almost everything in flash is based on 0 now being the first in an array (b/c of actionscript).  so [selectedIndex="0"] will be referencing the first tab and 1 will be referencing the second tab, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617175">11</a> by Brett Liotta
		posted on 2/26/2005 at 1:15 AM
		</div>
		<div class="comment_text"><p>Ray, how do I post code sample so it doesn't look like junk?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617174">12</a> by cfm_pedawan
		posted on 3/2/2006 at 4:03 AM
		</div>
		<div class="comment_text"><p>Hi all.</p><p>I am sure this is a silly question.</p><p>I have created a 6 page multi-step CFFORM and I want to validate one of the tabs to ensure a users answser at least one question. Unfortunatly the spec will not let me use a required say text field that will take a Y or N value.</p><p>So I searched the net and found this partial solution.</p><p>But how do you use this UDF with flash forms. Does it have to within  the tab/page being validated to be called? I currently have it above my &lt;cfform&gt; and I am not getting the alert messages.</p><p>Here is my code for the executing button on the tab I am validating.<br>&lt;!--- Push To Next Tab ---&gt;<br>&lt;cfinput value="Continue..." onClick="tnav.selectedIndex=5;" type="button" name="tab5_btn" width="100"&gt;</p><p>Any help is appreciated.</p><p>Thanks..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617182">13</a> by Raymond Camden
		posted on 3/2/2006 at 4:06 AM
		</div>
		<div class="comment_text"><p>THe UDF simply returns the AS code needed to check the page. So you put the call in the button that leads from one page to another.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617178">14</a> by Raymond Camden
		posted on 3/2/2006 at 4:07 AM
		</div>
		<div class="comment_text"><p>The previous post may help:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Findex.cfm%3Fmode%3D%3AaX_rLNjNVqNVaXmLTcDq4CGma6w&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/index.cfm?mode=">http://ray.camdenfamily.com...</a><br>entry&amp;entry=F002F1C6-C060-F0E5-EB698A2C0202209D</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617185">15</a> by cfm_pedawan
		posted on 3/2/2006 at 4:08 AM
		</div>
		<div class="comment_text"><p>...Drat!! wrong sample code. Here is the correct code</p><p>&lt;!--- Push To Next Tab ---&gt;<br>&lt;cfinput value="Continue..." onClick="#checkFieldSet("field1,field2","formname","tnav.selectedIndex=4")#" type="button" name= "tab4_btn" width="100"&gt;</p><p>Thanks...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617177">16</a> by cfm_pedawan
		posted on 3/2/2006 at 6:07 AM
		</div>
		<div class="comment_text"><p>Below is an example of the code I have...I chopped up the original code so I could post this watered down version. I am don't know what I am doing wrong.</p><p>- The function is included <br>- I am calling the function in my the tab that I need the field validated?<br>- ???</p><p>Any Thoughts? Any is appreciated...</p><p>&lt;code&gt;<br>&lt;!--- Begin Tab Field Check Function ---&gt;<br>&lt;cffunction name="checkFieldSet" output="false" returnType="string"&gt;<br>   &lt;cfargument name="fields" type="string" required="true" hint="Fields to search"&gt;<br>   &lt;cfargument name="form" type="string" required="true" hint="Name of the form"&gt;<br>   &lt;cfargument name="ascode" type="string" required="true" hint="Code to fire if all is good."&gt;</p><p>   &lt;cfset var vcode = ""&gt;<br>   &lt;cfset var f = ""&gt;</p><p>   &lt;cfsavecontent variable="vcode"&gt;<br>      var ok = true;<br>      var msg = "";<br>      &lt;cfloop index="f" list="#arguments.fields#"&gt;<br>         &lt;cfoutput&gt;<br>         if(!mx.validators.Validator.isValid(this, '#arguments.form#.#f#')) { msg = msg + #f#.errorString + '\n'; ok=false; }<br>         &lt;/cfoutput&gt;<br>      &lt;/cfloop&gt;<br>   &lt;/cfsavecontent&gt;<br>   &lt;cfset vcode = vcode &amp; "if(!ok) <a href="http://disq.us/url?url=http%3A%2F%2Fmx.controls.Alert.show%3A7oz5xEaV9qecCD0_m13-s4bYxi8&amp;cuid=3321886" rel="nofollow noopener" title="mx.controls.Alert.show">mx.controls.Alert.show</a>(msg,'Error'); "&gt;<br>   &lt;cfset vcode = vcode &amp; "if(ok) #ascode#"&gt;   <br>   &lt;cfset vcode = replaceList(vcode,"#chr(10)#,#chr(13)#,#chr(9)#",",,")&gt;</p><p>   &lt;cfreturn vcode&gt;      <br>&lt;/cffunction&gt;<br>&lt;!--- End Tab Field Function ---&gt;</p><p>&lt;!--- Begin CFFORM ---&gt;<br>&lt;cfform format="flash" width="550" height="400" timeout="1000" skin="haloblue" name="demotab"&gt;</p><p>&lt;cfformgroup type="panel" label="Multi Step Form" width="400" height="300" style="marginRight:2;  font-size:12px; color:##000000; headerColors:##FFFFFF; dropShadow:0; headerHeight:22; panelBorderStyle:'roundCorners'; backgroundColor:##FFFFFF"&gt;</p><p>&lt;!--- Begin Tab Navigation Box ---&gt;	<br>&lt;cfformgroup  type="tabnavigator" id="tnav" name="tnav"&gt;</p><p>			&lt;!--- Begin Tab 1 ---&gt;<br>			&lt;cfformgroup type="page" label="Tab1" width="650" height="300"&gt;</p><p>					&lt;!--- Headers ---&gt;<br>					&lt;cfformitem type="html"&gt;<br>					&lt;font size="-1" color="##666666"&gt;<br>					&lt;br&gt; <br>					&lt;b&gt;Contact Info:&lt;/b&gt;&lt;br&gt;<br>					&lt;/font&gt;<br>					&lt;/cfformitem&gt;</p><p>					&lt;!--- Form Fields ---&gt;		<br>					&lt;cfinput type="text" name="contName"  label="Name:" size="20" value="" required="yes" message="Please Enter Contact First Name"&gt;<br>					&lt;cfinput type="text" name="contEmail"  label="Email:" size="20" value="" required="yes" message="Please Enter Valid Contact Email Address" validate="email"&gt;<br>					&lt;cfinput type="text" name="contPhone"  label="Phone:" size="20" value=""&gt;</p><p>					&lt;!--- Push To Next Tab ---&gt;<br>					&lt;cfinput value="Continue..." onClick="tnav.selectedIndex=1;" type="button" name="tab1_btn" width="100"&gt;</p><p>			&lt;/cfformgroup&gt;<br>			&lt;!--- End Tab 1 ---&gt;</p><p>			&lt;!--- Begin Tab 2  ---&gt;<br>			&lt;cfformgroup type="page" label="Tab2" width="400" height="300"&gt;</p><p>					&lt;!--- Header ---&gt;<br>					&lt;cfformitem type="html"&gt;<br>					&lt;font size="-1" color="##666666"&gt;<br>					&lt;br&gt;&lt;b&gt;Select Geography:  (Select all that apply)&lt;/b&gt;<br>					&lt;/font&gt;<br>					&lt;/cfformitem&gt;</p><p>					&lt;!--- Form Fields ---&gt;<br>					&lt;cfformgroup type="tile"&gt;<br>					&lt;cfinput type="checkbox" name="Amer1" label="North America"&gt;<br>					&lt;cfinput type="checkbox" name="Amer2" label="South America"&gt;<br>					&lt;/cfformgroup&gt;<br>					&lt;cfinput type="text" name="Other"  label="Other:" size="10"&gt;</p><p>			&lt;!--- Push To Next Tab ---&gt;<br>		    &lt;cfinput type="button" name= "tab2_btn" value="Val_This_Tab" onClick="#checkFieldSet("Amer1,Amer2,Other","demotab","tnav.selectedIndex=2")#" width="100"&gt;</p><p>			&lt;/cfformgroup&gt;<br>			&lt;!--- End Tab 2  ---&gt;</p><p>			&lt;!--- Begin Finish Tab ---&gt;<br>			&lt;cfformgroup type="page" label="Finish" width="400" height="300"&gt;</p><p>					&lt;!--- Header ---&gt;<br>					&lt;cfformitem type="html"&gt;<br>					&lt;font size="-1" color="##666666"&gt;<br>					&lt;br&gt; <br>					&lt;b&gt;Comments:&lt;/b&gt;&lt;br&gt;<br>					&lt;/font&gt;<br>					&lt;/cfformitem&gt;<br>					&lt;!--- TextArea field ---&gt;<br>					&lt;cftextarea name="Comments" wrap="virtual" rows="5" cols="30" validate="maxlength" validateAt="onBlur" maxlength="500"&gt;<br>				   &lt;/cftextarea&gt;</p><p>				   &lt;!--- Submit Request ---&gt;<br>					&lt;cfinput type="submit" name="submit" value="Submit Request"&gt;</p><p>		&lt;/cfformgroup&gt;<br>		&lt;!--- End Finish Tab ---&gt;</p><p>&lt;/cfformgroup&gt;<br>&lt;!--- Begin Tab Navigation Box ---&gt;</p><p>&lt;/cfformgroup&gt;</p><p>&lt;/cfform&gt;<br>&lt;!--- End CFFORM ---&gt;<br>&lt;/code&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617180">17</a> by cfm_pedawan
		posted on 3/10/2006 at 6:43 AM
		</div>
		<div class="comment_text"><p>Hi all,</p><p>Could someone post some example code of how you got the UDF to work? Please post UDF + CFFORMS... I am looking over my code and I can't seem to figure out why the alerts are not popping up etc when no field is select on X tab. I have posted my code in the post above. Any help would be much appreciated.</p><p>&lt;/thanks&gt;</p><p>P.S<br>I am really weak with all the AS stuff, need to catch up "FLEX TIME"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617181">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617181">18</a> by Rod Kesselring
		posted on 11/27/2006 at 9:35 PM
		</div>
		<div class="comment_text"><p>Ok i have run into a bit of an issue... I am working with tab navigator and using a button to step to the next tab... but when i check the values of the fields the function fies and the boxes turn red but i get no alerts and the whole form seems to become disabled. I cannot place the cursor in any text field or type anything else into the form. If I submit the entire form I get the same issue. Have you seen anything like this?  Am i doing something wrong?  I will be glad to send you the code but i don't want to fill up the blog with a lot of extraneous code if not needed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713617183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713617183">19</a> by Rod Kesselring
		posted on 11/27/2006 at 9:37 PM
		</div>
		<div class="comment_text"><p>the function "fires"  sorry for the typo</p></div>
	</div>
</div>
		