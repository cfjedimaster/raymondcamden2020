
<div class="comment" id="c_1713669789">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669789">1</a> by todd sharp
		posted on 8/7/2007 at 11:12 PM
		</div>
		<div class="comment_text"><p>I've since whipped up a script that would handle multiple selected items by passing an array of them in the ajaxproxy.  This uses the mysteriously undocumented ColdFusion.JSON.decode function to handle the array.  Obviously you'd also change the size on the select and add multiple=true...</p><p>&lt;cfajaxproxy bind="javascript:test({mediaid},'[2,3,4]' )"&gt;</p><p>&lt;script&gt;<br>var imdone = false;<br>function test(x,val) {<br>	if(!imdone) {<br>	var dd = document.getElementById('mediaid');<br>	valArr = ColdFusion.JSON.decode(val);<br>	for(var i = 0; i &lt; dd.length; i++){<br>		//loop over the array of selectedItems<br>		for(var j = 0; j &lt; valArr.length; j++){<br>			if(dd.options[i].value == valArr[j]){<br>				dd.options[i].selected = true;<br>			}<br>		}<br>	}<br>	imdone = true;<br>	}<br>}</p><p>&lt;/script&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669788">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669788">2</a> by todd sharp
		posted on 8/7/2007 at 11:14 PM
		</div>
		<div class="comment_text"><p>Also worth nothing - if the first select accepts multiple then the bind will receive a comma seperated list of selected items (2,3,4 in this case) - so your CFC will have to accomodate...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669792">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669792">3</a> by Sean Coyne
		posted on 8/7/2007 at 11:24 PM
		</div>
		<div class="comment_text"><p>I haven't tried it because I'm lazy but can you just set the default value in the form scope &lt;cfset form.mediaid = 1 /&gt; and then use &lt;cfform&gt;'s preserveData="true" attribute?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669791">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669791">4</a> by Raymond Camden
		posted on 8/7/2007 at 11:37 PM
		</div>
		<div class="comment_text"><p>Tried it - didn't work. Good one there though. If that would have worked....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669797">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669797">5</a> by todd sharp
		posted on 8/7/2007 at 11:40 PM
		</div>
		<div class="comment_text"><p>Blogged a complete example of supporting multiple selected items (including handling them on the cfc side of things).</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcfsilence.com%2Fblog%2Fclient%2Findex.cfm%2F2007%2F8%2F7%2FSelecting-Multiple-Default-Items-With-ColdFusion-8-Ajax-Controls%3AGhr_iaXBzUHf441N-t4BjfjWWVY&amp;cuid=3321886" rel="nofollow noopener" title="http://cfsilence.com/blog/client/index.cfm/2007/8/7/Selecting-Multiple-Default-Items-With-ColdFusion-8-Ajax-Controls">http://cfsilence.com/blog/c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669796">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669796">6</a> by Will
		posted on 8/7/2007 at 11:55 PM
		</div>
		<div class="comment_text"><p>You read my mind! I knew I should have worked on something else! I spent 2 hours trying to get this to work yesterday before giving up and resigning myself to emailing you about it. I just hadn't gotten around to emailing you yet :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669802">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669802">7</a> by Mike Benner
		posted on 8/8/2007 at 2:25 AM
		</div>
		<div class="comment_text"><p>I think the real question is how to they do it with Ext JS Library, as I believe that is Adobe used to model theirs after.</p><p>The docs are here: <a href="http://disq.us/url?url=http%3A%2F%2Fextjs.com%2Fdeploy%2Fext%2Fdocs%2F%3AG8FTCRXyrCzJ2j1z7GtscBhTfjM&amp;cuid=3321886" rel="nofollow noopener" title="http://extjs.com/deploy/ext/docs/">http://extjs.com/deploy/ext...</a> for anyone to go through.  I looked at them briefly but saw nothing off the top of my head.  Will take another look after the kids go down for the night.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669793">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669793">8</a> by Eric
		posted on 9/14/2007 at 12:17 AM
		</div>
		<div class="comment_text"><p>Thankfully SOMEBODY is talking about this!!!  I just spent the last hour and a half scouring the web for some sort of solution to this. Not having this out of the box is shameful on Adobe's part.  I surely hope they come up with a clean solution for this as well.  Cheers to you for making it work for now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669794">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669794">9</a> by Raymond Camden
		posted on 9/14/2007 at 12:21 AM
		</div>
		<div class="comment_text"><p>Eric - to be fair - I found the same problem in Spry. No simply way to do defaults. Can others on this entry comment on other Ajax frameworks?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669798">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669798">10</a> by fred
		posted on 10/21/2007 at 11:08 PM
		</div>
		<div class="comment_text"><p>This works for defaulting the first select... How can the 2nd select be defaulted as well?  <br>I tried updating the javascript by adding the same logic to the 2nd select but it doesn't work.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669795">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669795">11</a> by Raymond Camden
		posted on 10/21/2007 at 11:15 PM
		</div>
		<div class="comment_text"><p>I don't have an easy solution for this in CF8 Ajax.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669799">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669799">12</a> by Fred
		posted on 10/21/2007 at 11:55 PM
		</div>
		<div class="comment_text"><p>workaround: I'm able to default the second value with the script below. It basically works depending on the time it takes for the CFC query to return.  This sets the second select to its corresponding value after 1 second of page loading. If for whatever reason the query takes longer, this doesn't work. No guarantees. In my case 'model' is the name of my 2nd select.</p><p>&lt;pre&gt;<br>&lt;script&gt;<br>	function initSelect(){<br>	   var dd2 = document.getElementById('Model');</p><p>	   for(var i = 0; i &lt; dd2.length; i++){<br>	      //loop over the array of selectedItems       <br>	         if(dd2.options[i].value == '&lt;cfoutput&gt;#form.defaultvalue#&lt;/cfoutput&gt;'){<br>	            dd2.options[i].selected = true;<br>	     		 }  <br>		  } ;<br>	 }</p><p>	setTimeout("initSelect()",1000)</p><p>&lt;/script&gt;<br>&lt;/pre&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669801">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669801">13</a> by Steve Savage
		posted on 4/3/2008 at 1:48 AM
		</div>
		<div class="comment_text"><p>I think I've found a simpler solution to this.</p><p>I've created a .js file that "overrides" a function from coldfusion's cfajax.js library.</p><p>The new version of the function allows you to specify which options are selected as part of the array you return from your "bound" .cfc function.</p><p>See my site for details.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.realitystorm.com%2Fexperiments%2Fcoldfusion%2Fcfselect.cfm%3AsNhIlw7N_7k5FyQxU-BNhayCAjU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.realitystorm.com/experiments/coldfusion/cfselect.cfm">http://www.realitystorm.com...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669800">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669800">14</a> by PhilNg
		posted on 5/12/2008 at 6:57 AM
		</div>
		<div class="comment_text"><p>A useful trick is to tell the calling CFC what the selected value and making sure that it's #1:</p><p>&lt;cfcomponent&gt;</p><p>    &lt;cffunction name="get" access="remote"&gt;<br>        &lt;cfargument name="TABLE_NAME" default=""&gt;<br>        &lt;cfargument name="VARIABLE_NAME" default=""&gt;</p><p>        &lt;!--- this is kind of lame, but cold fusion will not set the selected variable!!!!! ---&gt;<br>        &lt;cfargument name="SELECTED" default="" type="String"&gt; <br>			&lt;cfset answer=ArrayNew(2)&gt;</p><p>			&lt;!--- this is to set the "selected" item first; so that they're um.. selected. ---&gt;<br>			&lt;cfset iter = 2&gt;<br>			&lt;cfset answer[1][1]=selected&gt;<br>			&lt;cfset answer[1][2]=selected&gt;<br>			&lt;cfloop index="i" from="1" to="#data.RecordCount#"&gt;<br>				&lt;cfif ucase(trim(data.value[i])) neq ucase(trim(selected))&gt;<br>					&lt;cfset answer[iter][1]=data.value[i]&gt;<br>					&lt;cfset answer[iter][2]=data.display[i]&gt;<br>					&lt;cfset iter = iter + 1&gt;<br>				&lt;cfelse&gt;</p><p>					&lt;!--- ooo! we have the label of the first selected value! ---&gt;<br>				 	&lt;cfset answer[1][2]=data.display[i]&gt;</p><p>				&lt;/cfif&gt;<br>      		&lt;/cfloop&gt;</p><p>        &lt;cfreturn answer&gt;<br>    &lt;/cffunction&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669803">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669803">15</a> by Mark Chripczuk
		posted on 7/16/2008 at 4:02 AM
		</div>
		<div class="comment_text"><p>Thanks for the help guys!  This page has been my close friend for the past couple of hours as I tried to figure out how to make this all work.  Hopefully Adobe will provide some more functionality soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669819">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669819">16</a> by Nando
		posted on 7/26/2008 at 8:19 PM
		</div>
		<div class="comment_text"><p>I've worked thru most of the workarounds I've found in this blog entry and on the original by Ben Forta. I finally settled on Steve Savage's solution and it's working very well for me. Once you have his javascript file in place and you wrap your head around the array you need to generate, which has 3 values per record - the id (option value), the display value, and a boolean that indicates if this record should be selected - it's actually very easy to implement.</p><p>Ray, if you see this comment, how can Steve's solution be passed on to Adobe for possible inclusion in the next update of CF8?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669825">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669825">17</a> by Raymond Camden
		posted on 7/29/2008 at 4:52 AM
		</div>
		<div class="comment_text"><p>Use this form:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.adobe.com%2Fgo%2Fwish%3AeVByS_kB5f-F_Xb5m4vrRNXZtoA&amp;cuid=3321886" rel="nofollow noopener" title="www.adobe.com/go/wish">www.adobe.com/go/wish</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669823">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669823">18</a> by Nando
		posted on 7/29/2008 at 4:15 PM
		</div>
		<div class="comment_text"><p>Done!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669822">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669822">19</a> by George
		posted on 9/2/2008 at 8:44 AM
		</div>
		<div class="comment_text"><p>Hi Nando,</p><p>Can you please give us an example how did you work around with Steve Savage's solution? I'm not sure how to use his new function.</p><p>Thanks,<br>George</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669821">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669821">20</a> by Giedrius
		posted on 9/18/2008 at 8:50 PM
		</div>
		<div class="comment_text"><p>For some reason IE doesn't work. FireFox is fine. It seems as IE executes the test function before the select is populated with options, so dd.length is 0. Ugh!</p><p>I am using the function just for a single cfselect which is using javascript bind.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669818">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669818">21</a> by Michael White
		posted on 9/26/2008 at 12:26 AM
		</div>
		<div class="comment_text"><p>a twist on this problem is: how do you select an item in one combo box using the selected value in another combo box. say combo box #1 is a list criteria (fastest, economical, luxuriest, etc), combo box #2 is a list of car models. you don't want to filter combo box #2, you just want to select the default car model for that criteria (you might filter combo box #1 with a MFG combo box but we can skip that for now). How do you set the selected index of the model combo box based on the selection you make in the criteria combo box whenever the combo box is changed?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669826">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669826">22</a> by Raymond Camden
		posted on 9/26/2008 at 3:43 PM
		</div>
		<div class="comment_text"><p>Use cfajaxproxy to run JS function foo() when the first drop down changes. In the JS function, use another ajaxproxy to call your cfc to get the right value for the second drop down based on the value in the first. Then simply loop over the options in drop down 2, and when you get the right value, you set it to selected. This is what I told you in email I think. :) Didn't it make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669827">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669827">23</a> by Chris
		posted on 12/24/2008 at 5:27 AM
		</div>
		<div class="comment_text"><p>George, It was months ago but if you are still after some more info, I got the solution by Steve Savage working recently (thanks Steve!).</p><p>My example uses a product type/category/sub category hierarchy.</p><p>I added an argument to each of the functions in the cfc for the ID of the value I wanted to select:</p><p>&lt;!--- Get array of product types ---&gt;<br>&lt;cffunction name="getProductTypes" access="remote" returnType="array"&gt;<br>&lt;cfargument name="typeID" type="numeric"&gt;<br>...<br>&lt;!--- Get category by product type ---&gt;<br>&lt;cffunction name="getCategories" access="remote" returnType="array"&gt;<br>&lt;cfargument name="typeid" type="numeric" required="true"&gt;<br>&lt;cfargument name="catID" type="numeric"&gt;<br>...<br>&lt;!--- Get sub category by category ---&gt;<br>&lt;cffunction name="getSubCategories" access="remote" returnType="array"&gt;<br>&lt;cfargument name="categoryID" type="numeric" required="true"&gt;<br>&lt;cfargument name="subCatID" type="numeric"&gt;<br>...<br>In each of the functions I added a cfif to the query to array loop to set the new array element to true for the passed ID:</p><p>&lt;!--- Convert results to array ---&gt;<br>&lt;cfloop index="i" from="1" to="#getTypes.RecordCount#"&gt;<br> &lt;cfset result[i][1]=getTypes.typeID[i]&gt;<br> &lt;cfset result[i][2]=getTypes.type[i]&gt;<br> &lt;cfif getTypes.typeID[i] is arguments.typeID&gt;<br>  &lt;cfset result[i][3]=true&gt;<br> &lt;/cfif&gt;<br>&lt;/cfloop&gt;<br>...<br>(repeat for categories and sub categories)</p><p>Then on the display page I included Steve's magic JavaScript and added the arguments to each of the cfselect tags:</p><p>&lt;cfselect name="typeID" bind="cfc:typeCatSubCat.getProductTypes(#typeID#)" bindonload="true" /&gt;<br>...<br>&lt;cfselect name="catID" bind="cfc:typeCatSubCat.getCategories({typeID},#catID#)" /&gt;<br>...<br>&lt;cfselect name="subCatID" bind="cfc:typeCatSubCat.getSubCategories({catID},#subCatID#)" /&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669829">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669829">24</a> by Frankie
		posted on 2/19/2009 at 5:56 AM
		</div>
		<div class="comment_text"><p>Hi Chris,</p><p>you have used also Steve script? <br>or you have made this works only with cfc?</p><p>I cannot understand how I can make it works...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669832">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669832">25</a> by Frankie
		posted on 2/22/2009 at 9:27 PM
		</div>
		<div class="comment_text"><p>Hallo,</p><p>this is my code:</p><p>&lt;cfcomponent output="false"&gt;</p><p>   &lt;!--- Get array of media types ---&gt;<br>   &lt;cffunction name="getRegioni" access="remote" returnType="array" output="no"&gt;<br>		&lt;cfargument name="regioneid" type="numeric"&gt;</p><p>      &lt;!--- Define variables ---&gt;<br>      &lt;cfset var data=""&gt;<br>      &lt;cfset var result=ArrayNew(2)&gt;<br>      &lt;cfset var i=0&gt;</p><p>      &lt;!--- Get data ---&gt;<br>      &lt;cfquery name="data" datasource="#application.dsn#"&gt;<br>      SELECT fld_id,fld_provincia,fld_id_regione<br>      FROM tbl_province<br>      ORDER BY fld_id<br>      &lt;/cfquery&gt;<br>      &lt;!--- Convert results to array ---&gt;<br>      &lt;cfloop index="i" from="1" to="#data.RecordCount#"&gt;<br>         &lt;cfset result[i][1]=data.fld_id[i]&gt;<br>         &lt;cfset result[i][2]=data.fld_provincia[i]&gt;<br>      	 &lt;cfif data.fld_id[i] is arguments.regioneid&gt;<br>				 &lt;cfset result[i][3]=true&gt;<br>				&lt;/cfif&gt;<br>      &lt;/cfloop&gt;<br>      &lt;!--- And return it ---&gt;<br>      &lt;cfreturn result&gt;<br>   &lt;/cffunction&gt;</p><p>   &lt;!--- Get art by media type ---&gt;<br>   &lt;cffunction name="getProvince2" access="remote" returnType="array" output="no"&gt;<br>      &lt;cfargument name="regione" type="numeric" required="true"&gt;<br>			&lt;cfargument name="provinceid" type="numeric"&gt;</p><p>      &lt;!--- Define variables ---&gt;<br>      &lt;cfset var data=""&gt;<br>      &lt;cfset var result=ArrayNew(2)&gt;<br>      &lt;cfset var i=0&gt;</p><p>      &lt;!--- Get data ---&gt;<br>      &lt;cfquery name="data" datasource="#application.dsn#"&gt;<br>      SELECT fld_id, fld_localita<br>      FROM tbl_localita<br>      WHERE fld_id_provincia = #ARGUMENTS.provinceid#<br>      ORDER BY tbl_localita.fld_localita<br>      &lt;/cfquery&gt;</p><p>      &lt;!--- Convert results to array ---&gt;		 <br>      &lt;cfloop index="i" from="1" to="#data.RecordCount#"&gt;<br>         &lt;cfset result[i][1]=data.fld_id[i]&gt;<br>         &lt;cfset result[i][2]=data.fld_localita[i]&gt;<br>					&lt;cfif data.fld_id[i] is arguments.provinceid&gt;<br>					&lt;cfset result[i][3]=true&gt;<br>					&lt;/cfif&gt;<br>			&lt;/cfloop&gt;</p><p>      &lt;!--- And return it ---&gt;<br>      &lt;cfreturn result&gt;</p><p>   &lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p><p>And this is my form:</p><p> &lt;script src="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.agriturismoincampania.it%2Fprove%2FfixColdfusionAjax.js%3E%3C%2Fscript%3E%3AaBnvZCyyUropPB8lUvtzYzByKYo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.agriturismoincampania.it/prove/fixColdfusionAjax.js></script>">http://www.agriturismoincam...</a></p><p> &lt;cfform&gt;<br>  &lt;cfselect name="regione" bind="cfc:select2.getRegioni(1)" bindonload="true" id="regione" /&gt;</p><p>  &lt;cfselect name="fld_id_localita" id="fld_id_localita" bind="cfc:select2.getProvince2({regione},20)" /&gt;<br>  &lt;/cfform&gt;</p><p>Where is my error?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669828">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669828">26</a> by Raymond Camden
		posted on 2/22/2009 at 10:49 PM
		</div>
		<div class="comment_text"><p>What error are you getting? You need to provide a bit more detail.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669830">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669830">27</a> by Frankie
		posted on 2/23/2009 at 12:02 AM
		</div>
		<div class="comment_text"><p>I got this error:</p><p>bind failed, element not found: regioneid.</p><p>Any idea?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669833">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669833">28</a> by Raymond Camden
		posted on 2/23/2009 at 12:07 AM
		</div>
		<div class="comment_text"><p>Odd. No where in your clientside code do you use regioneid. You use regione, but not regioneid. Are you sure you pasted the right code? (PS - in the future, please do not post large blocks of code - try to post something smaller, or use a link to pastebin.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669834">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669834">29</a> by Frankie
		posted on 2/23/2009 at 12:18 AM
		</div>
		<div class="comment_text"><p>Sorry.</p><p>I have uploaded my code in:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.agriturismoincampania.it%2Fprove%2Fselect2.txt%3AZOkNp05olEkVtSte15fCr4V-5yY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.agriturismoincampania.it/prove/select2.txt">http://www.agriturismoincam...</a></p><p>and the form</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.agriturismoincampania.it%2Fprove%2Fsel.txt%3ACiKhIoG6lb3GSPSG-XLxNwLfq9w&amp;cuid=3321886" rel="nofollow noopener" title="http://www.agriturismoincampania.it/prove/sel.txt">http://www.agriturismoincam...</a></p><p>Where is the error? could you help me,please?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669831">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669831">30</a> by Raymond Camden
		posted on 2/23/2009 at 12:20 AM
		</div>
		<div class="comment_text"><p>Hmm. Can you put the actual code up where we can run it? Not seeing anything obvious yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669836">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669836">31</a> by Raymond Camden
		posted on 2/23/2009 at 12:20 AM
		</div>
		<div class="comment_text"><p>Oh wait - try this - in the second select, set bindonload to false.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669837">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669837">32</a> by Frankie
		posted on 2/23/2009 at 12:28 AM
		</div>
		<div class="comment_text"><p>Nothing...same error...</p><p>I really don't understand where is the error...</p><p>I will go crazy!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669838">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669838">33</a> by Raymond Camden
		posted on 2/23/2009 at 12:29 AM
		</div>
		<div class="comment_text"><p>Well, if you can put it online where I can run it, I can try to dig more.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669839">34</a> by Frankie
		posted on 2/23/2009 at 12:32 AM
		</div>
		<div class="comment_text"><p>Same address....</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.agriturismoincampania.it%2Fprove%2Fsel.cfm%3Ayl2Q3chF2FA0kW_nfclJ91pH4Xo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.agriturismoincampania.it/prove/sel.cfm">http://www.agriturismoincam...</a></p><p>It's possible my error is how I import the javascript fixColdfusionAjax.js?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669842">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669842">35</a> by Frankie
		posted on 2/23/2009 at 12:36 AM
		</div>
		<div class="comment_text"><p>On local machine the debug give me new error:</p><p>window:global: Error loading script (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.agriturismoincampania.it%2Fprove%2FfixColdfusionAjax.js%253E%253C%2Fscript%253E%2520%253Cform%2520name%3D%3AIt2-jwSvEbDx01QmVkANvQUT320&amp;cuid=3321886" rel="nofollow noopener" title="http://www.agriturismoincampania.it/prove/fixColdfusionAjax.js%3E%3C/script%3E%20%3Cform%20name=">http://www.agriturismoincam...</a>, line 1)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669841">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669841">36</a> by Raymond Camden
		posted on 2/23/2009 at 1:34 AM
		</div>
		<div class="comment_text"><p>I don't get any error. The first drop down never loads - nor do I see an ajax request. I see other JS code involved here - the google map stuff. I'd recommend creating a new page that doesn't do this. In other words, simplify your page as much as possible in order to make it easier to find what is wrong.</p><p>Also, what is fixColdFusionAjax.js?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669840">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669840">37</a> by Frankie
		posted on 2/23/2009 at 2:39 AM
		</div>
		<div class="comment_text"><p>fixColdfusionAjax.js is script of Steve Savage, posted on this blog.</p><p>I've simplified my page....I have red the example in the comment of Chris...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669844">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669844">38</a> by Raymond Camden
		posted on 2/23/2009 at 3:03 AM
		</div>
		<div class="comment_text"><p>I think I see it. A typo. No closing quote on the script src:</p><p>&lt;script src="<a href="http://disq.us/url?url=http%3A%2F%2Fwww.agriturismoincampania.it%2Fprove%2FfixColdfusionAjax.js%3E%3C%2Fscript%3E%3AaBnvZCyyUropPB8lUvtzYzByKYo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.agriturismoincampania.it/prove/fixColdfusionAjax.js></script>">http://www.agriturismoincam...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669845">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669845">39</a> by Frankie
		posted on 2/23/2009 at 3:42 AM
		</div>
		<div class="comment_text"><p>Thank you, Raymond.</p><p>But I think there is another problem, because the second select doesn't retrive any value....</p><p>I don't think I will make it work....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669847">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669847">40</a> by Frankie
		posted on 2/23/2009 at 3:48 AM
		</div>
		<div class="comment_text"><p>Now the problem is:</p><p>error:http: Error invoking CFC /CMS/select2.cfc : The REGIONEID argument passed to the getProvince2 function is not of type numeric.</p><p>Probably because if I type <a href="http://disq.us/url?url=http%3A%2F%2Fwww.agriturismoincampania.it%2Fselect2.cfc%3Fmethod%3Dgetregioni%26regioneid%3D1%3AqcXDkkpJokup-f8z-RYGWEeKSHo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.agriturismoincampania.it/select2.cfc?method=getregioni&amp;regioneid=1">http://www.agriturismoincam...</a> it give me the value with true on the selected value....</p><p>I need to change my cfc?</p><p>Sorry if I stress you with many question but in Italy there aren't many coldfusion's developers...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669849">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669849">41</a> by Raymond Camden
		posted on 2/23/2009 at 4:00 AM
		</div>
		<div class="comment_text"><p>I'm not seeing an error now. Not on your online version.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669850">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669850">42</a> by Frankie
		posted on 2/23/2009 at 4:08 AM
		</div>
		<div class="comment_text"><p>Not error, but the second select doesn't retrieve any value...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669854">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669854">43</a> by Raymond Camden
		posted on 2/23/2009 at 4:18 AM
		</div>
		<div class="comment_text"><p>Did you set the second one to bindonload=false?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669848">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669848">44</a> by Frankie
		posted on 2/23/2009 at 4:26 AM
		</div>
		<div class="comment_text"><p>DONE!!!!</p><p>Finally I made it works....</p><p>Thank you for your support...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669846">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669846">45</a> by Raymond Camden
		posted on 2/23/2009 at 4:40 AM
		</div>
		<div class="comment_text"><p>I live to serve. You owe me one good beer now. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669851">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669851">46</a> by Frankie
		posted on 3/12/2009 at 3:43 AM
		</div>
		<div class="comment_text"><p>Only one?</p><p>Two or more....</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669855">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669855">47</a> by Sheldon Goldberg
		posted on 4/8/2009 at 3:45 AM
		</div>
		<div class="comment_text"><p>Has this problem ever been fully resolved?  The js override function looks interesting.  But, how/when do <br>you call getValues?</p><p>Is there any code to show this being implemented?</p><p>Any help would be really appreciated.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669853">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669853">48</a> by dan fredericks
		posted on 7/6/2009 at 7:25 PM
		</div>
		<div class="comment_text"><p>Here is my code:</p><p>&lt;cfselect name="courseType" id="courseType" bind="cfc:cfcs.template.getCourseType()" value="courseMethodID" display="courseMethodDescription" bindOnLoad="true" tooltip="Course Type"&gt; &lt;option value="0"&gt;Select Type&lt;/option&gt;&lt;/cfselect&gt;</p><p>On my initial screen, the option will not show up...first problem.<br>When the user submits that page back to itself, I need to value they selected to be autoselected on the page again...need a summary page they can change before submiting to db. I tried the JS solution on this page, however, I received an error stating my courseMethodID value was undefined.</p><p>&lt;cfajaxproxy bind="javascript:test({courseType},#form.courseType#)"&gt;<br>&lt;script language="javascript"&gt;<br>var imdone = false;<br>function test(x,val) {<br>if(!imdone) {<br>var dd = document.getElementById('courseType');<br>for(var i = 0; i &lt; dd.length; i++){<br>if(dd.options[i].value == val){<br>dd.selectedIndex = i;</p><p>}<br>}<br>imdone = true;<br>}<br>}<br>&lt;/script&gt;</p><p>Below is the source of my file where the error is located:<br>&lt;script type="text/javascript"&gt;<br>	_cf_bind_init_1246893138308=function()<br>	{<br>		ColdFusion.Bind.register([['courseType','','change']],{'bindTo':ColdFusion.empty,'bindToAttr':'true','callFunction':'test','bindExpr':[['courseType','','value'],ILT]},ColdFusion.Bind.jsBindHandler,false);<br>	};ColdFusion.Event.registerOnLoad(_cf_bind_init_1246893138308);<br>&lt;/script&gt;</p><p>any help would be appreciated</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669857">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669857">49</a> by dan fredericks
		posted on 7/6/2009 at 11:26 PM
		</div>
		<div class="comment_text"><p>Figured out my issue, if you don't use numeric values in the cfajaxproxy:<br>&lt;cfajaxproxy bind="javascript:test({courseType},#form.courseType#)"&gt;</p><p>it won't work right. Once I figured out I was not using numeric, and switched, it works just fine.</p><p>thanks for the code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669856">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669856">50</a> by Francesco
		posted on 7/17/2009 at 5:25 AM
		</div>
		<div class="comment_text"><p>Hallo,</p><p>I've made this related select, but I have problem with charset. In fact one of my value has accent but I cannot make it formatted properly....</p><p>Could someone help me?</p><p>This is the link to the component output: <br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.agriturismoincampania.it%2Fselect.cfc%3Fmethod%3DgetLocalita%26provincia%3D2%3A-qnhSb22kuPC941_4fF0nfFgArk&amp;cuid=3321886" rel="nofollow noopener" title="http://www.agriturismoincampania.it/select.cfc?method=getLocalita&amp;provincia=2">http://www.agriturismoincam...</a></p><p>And this is on site: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.agriturismoincampania.it%3A06mtGFu2QwenaZNAvkia6XYLxLo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.agriturismoincampania.it">http://www.agriturismoincam...</a></p><p>What I have to do to make this work? I have tried to put cfheader on utf-8 but nothing change...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669859">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669859">51</a> by Steve Savage
		posted on 7/17/2009 at 5:32 PM
		</div>
		<div class="comment_text"><p>You could try replacing the character with it's html entity equivalent.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.w3schools.com%2Ftags%2Fref_entities.asp%3AmITDcL9BpzKMyK2zyDoAVd2H4iY&amp;cuid=3321886" rel="nofollow noopener" title="http://www.w3schools.com/tags/ref_entities.asp">http://www.w3schools.com/ta...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669858">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669858">52</a> by Anthony
		posted on 9/3/2009 at 9:29 AM
		</div>
		<div class="comment_text"><p>Brilliant, works perfectly</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669860">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669860">53</a> by Sean Sekora
		posted on 12/9/2009 at 11:16 PM
		</div>
		<div class="comment_text"><p>Steve Savage's fixed worked perfect for me. I have a vehicle look up that has 14 &lt;cfselect&gt;s all binding to javascript functions that call CFCs to get there options. I just include Steve's js file and added the third value to the return array for each option setting the currently selected value to true and everything just worked. Thanks Steve</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669862">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669862">54</a> by Alex Moustris
		posted on 2/5/2010 at 4:39 PM
		</div>
		<div class="comment_text"><p>The code below works fine without any extra javascript. Only native CF9:<br>&lt;cfselect  bind="cfc:hotelier.components.GeoInfo.getRegionsByCountry({CountryID})" enabled="No" bindonload="yes"  name="RegionID" class="FormFields" id="RegionID"   multiple="no" value="RegionID" display="RegionStringEN" selected="#HotelDetails.RegionID#"&gt;<br>	&lt;cfoutput&gt; &lt;option value="#HotelDetails.RegionID#" selected="selected"&gt;#HotelDetails.REGIONSTRINGEN#&lt;/option&gt;&lt;/cfoutput&gt; ---&gt;&lt;/cfselect&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669863">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669863">55</a> by Andrew
		posted on 2/27/2010 at 2:41 AM
		</div>
		<div class="comment_text"><p>Great function Ray, but what if I needed to default two drop downs?</p><p>For instance, I have two cfselects, a country drop down and a state drop down list bound to the country drop down. I want the selected values from the previous post to the form to be the default selected values... let's see if I can quickly post some code:</p><p>&lt;cfform name="f"&gt;<br> Country:&lt;br&gt;<br> &lt;cfselect id="listCountryCodes" name="listCountryCodes" required="yes" bind="cfc:path.to.my.cfc.that.returns.countries()" bindonload="yes" display="CountryName" value="CountryCode" /&gt;&lt;br&gt;<br>Select State:&lt;br&gt;<br>	&lt;cfselect <br>		id="listStateCodes" name="listStateCodes" required="yes" bind="cfc:path.to.my.cfc.that.returns.states.based.on.Country.Selected(CountryCode={f:listCountryCodes})" bindonload="yes" display="StateName" value="StateCode" /&gt;<br>&lt;/cfform&gt;</p><p>having two cfajaxproxy tags (both bound to their respective selects) doesn't seem to do the trick. any thoughts based on the above, or do you need more info?</p><p>Thanks in advance!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669861">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669861">56</a> by Raymond Camden
		posted on 2/27/2010 at 7:16 AM
		</div>
		<div class="comment_text"><p>I've done this before - in jQuery. I'm sure it could be done here. It just gets more complex. On load you set that first select. The second select will then load, right? You then use code to say, "If this is the first time the second select has loaded, then default to X".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669864">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669864">57</a> by Bobbi
		posted on 7/1/2010 at 8:52 PM
		</div>
		<div class="comment_text"><p>I'm having a problem with an "element var_proposal not defined". I can't understand why it isn't found!<br> &lt;cfselect name="cbo_status"<br>                bind="cfc:proposal_status_cfc.getStatus()"<br>                bindonload="true"<br>                display="prop_status"<br>                id="prop_status"</p><p>                /&gt;</p><p>            &lt;cfselect name="cbo_proposal"<br>                bind="cfc:proposal_status_cfc.getProposal({cbo_status})"<br>                value="prop_number"<br>                size="3"</p><p>                /&gt;</p><p>Then in the cfc: I have a function (getStatus) with a query that "Select distinct prop_status".  Then in the function (getProposal), I set cfargument name="var_proposal".  This is where I get the "element var_proposal not defined" error.   I'd be glad to post the full code, but I didn't want to clog up the blog.<br>Thanks!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669867">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669867">58</a> by Raymond Camden
		posted on 7/2/2010 at 2:10 AM
		</div>
		<div class="comment_text"><p>I believe because on load, your second select is sending _nothing_ to the CFC because nothing is picked yet. You can make the argument optional and simply return nothing when no value is passed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669869">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669869">59</a> by Gurpreet
		posted on 7/8/2010 at 9:37 PM
		</div>
		<div class="comment_text"><p>Hi! <br>i came across the same type issue but a bit confusing! i got 4 select statements!. I am trying to edit the value of the record. So countryid is the one selectbox which is calling no bind operation, it is just listing the countries and countryid is already get populated when we try to edit as it fetches infor from database:</p><p>the problem is with the remaining cfselect.. The selects are dependent upon one another!</p><p>like the Country &gt;&gt; Province &gt;&gt; Town &gt;&gt; Suburb</p><p>Province, town and suburb are using the bind attributes, i want that when my country is selected, it should automatically get the values from the database for the follwing three selects and populate them with the exact info.</p><p>code like this:</p><p>&lt;tr&gt;<br>      &lt;td align="right"&gt;&lt;strong&gt;Country : &lt;/strong&gt;&lt;/td&gt;<br>      &lt;td&gt;&lt;select name="countryid" id="countryid" class="inputstyle"&gt;<br>      	&lt;option value="none"&gt;(Select One)...&lt;/option&gt;<br>		&lt;cfoutput query="getcountries"&gt;<br>      		&lt;option value="#countryid#"&gt;#country#&lt;/option&gt;<br>		&lt;/cfoutput&gt;<br>		&lt;/select&gt;<br>		&lt;/td&gt;<br>    &lt;/tr&gt;<br>	&lt;tr&gt;<br>      &lt;td align="right"&gt;&lt;strong&gt;Province : &lt;/strong&gt;&lt;/td&gt;<br>      &lt;td&gt;&lt;cfselect name="province" bind="cfc:com.remoteCalls.getRemoteProvince({countryid})" bindonload="false" class="inputstyle"&gt;&lt;option value="0" selected&gt;Select One&lt;/option&gt;&lt;/cfselect&gt;&lt;/td&gt;<br>    &lt;/tr&gt;<br>	&lt;tr&gt;<br>      &lt;td align="right"&gt;&lt;strong&gt;Town : &lt;/strong&gt;&lt;/td&gt;<br>      &lt;td&gt;&lt;cfselect name="town" id="town" class="inputstyle" bind="cfc:com.remoteCalls.getRemoteTowns({province})" bindonload="false"&gt;&lt;option value="0" selected&gt;Select One&lt;/option&gt;&lt;/cfselect&gt;&lt;/td&gt;<br>    &lt;/tr&gt;<br>    &lt;tr&gt;<br>      &lt;td align="right"&gt;&lt;strong&gt;Suburb : &lt;/strong&gt;&lt;/td&gt;<br>      &lt;td&gt;&lt;cfselect name="suburb" id="suburb" class="inputstyle" bind="cfc:com.remoteCalls.getRemoteSuburb({town})" bindonload="false"&gt;&lt;option value="0" selected&gt;Select One&lt;/option&gt;&lt;/cfselect&gt;&lt;/td&gt;<br>    &lt;/tr&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669870">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669870">60</a> by Gurpreet
		posted on 7/11/2010 at 5:47 PM
		</div>
		<div class="comment_text"><p>any update on this ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669872">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669872">61</a> by Raymond Camden
		posted on 7/11/2010 at 8:20 PM
		</div>
		<div class="comment_text"><p>Well whats not working? I don't think you said.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669873">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669873">62</a> by Gurpreet
		posted on 7/11/2010 at 8:45 PM
		</div>
		<div class="comment_text"><p>All good!</p><p>trouble i am lost where i should use the ajaxproxy to load the contents based upon one after anotehr select box! like the countries selected is ZIMBABWE, so i loaded province,town,suburn based upon each other, so how to make use of ajaxproxy to load the contents based upon one another</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669874">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669874">63</a> by Raymond Camden
		posted on 7/11/2010 at 11:27 PM
		</div>
		<div class="comment_text"><p>You shouldn't need cfajaxproxy to just do binding.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669932">64</a> by alonso
		posted on 7/13/2010 at 11:27 PM
		</div>
		<div class="comment_text"><p>I want used bind with cfselect and I found many example like your but any one work.<br>I received a empty combo with any example I used it.<br>this my code<br>&lt;cfinvoke component="test" method="A_Showhistory_level"</p><p>        returnvariable="ret_Showhistoryitem" &gt;<br>&lt;/cfinvoke&gt;<br>&lt;cfdump var="ret_Showhistoryitem" &gt;</p><p>&lt;cfform name="OutputHistory"&gt;<br>	&lt;table&gt;<br>    	&lt;tr&gt;&lt;td&gt; Description : &lt;/td&gt;<br>        &lt;td&gt; &lt;cfselect name="testbind"<br>        	 bind="cfc:store.A_Showhistory_level()"<br>             bindonload="true"<br>             	&gt;<br>           &lt;option name="blank" &gt;--Select-- &lt;/option&gt;<br>        &lt;/cfselect&gt;<br>        &lt;/td&gt;&lt;/tr&gt;<br>    &lt;/table&gt;<br>&lt;/cfform&gt;</p><p>and My component is :<br>&lt;cfcomponent output="no" &gt;<br>&lt;cfset datasource = 'Store' &gt;<br>   &lt;cffunction name="A_Showhistory_level" access="remote" returntype="array" &gt;<br>	&lt;cfset a="0" &gt;<br>	&lt;cfquery name="data" datasource="#datasource#" &gt;<br>    	Exec sp_showhistoryitem1 '13'<br>    &lt;/cfquery&gt;<br>&lt;!---    &lt;cfdump var="#qShowhistory_level#" &gt;---&gt;<br>    &lt;cfset alevel=arraynew(2) &gt;<br>        &lt;cfloop index="i" from="1" to="#data.RecordCount#"&gt;<br>            &lt;cfset result[i][1]=data.cases_location_id[i]&gt;<br>            &lt;cfset result[i][2]=data.boxname[i]&gt;<br>        &lt;/cfloop&gt;<br>   &lt;cfreturn result &gt;<br>&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;<br>I very apreciate any help with this problem</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669936">65</a> by Raymond Camden
		posted on 7/14/2010 at 12:00 AM
		</div>
		<div class="comment_text"><p>What does Firebug, or Chrome Dev tools tell you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669930">66</a> by Alonso
		posted on 7/14/2010 at 5:24 PM
		</div>
		<div class="comment_text"><p>I use IE8 and didn't notice small yellow triangle with admiration sign said Done on the left lower corner of the browser<br>I copy and paste the error</p><p>Webpage error details</p><p>User Agent: Mozilla/4.0 (compatible; MSIE 8.0; Windows NT 5.2; Trident/4.0; GTB6.5; .NET CLR 1.1.4322; .NET CLR 2.0.50727; .NET CLR 3.0.4506.2152; .NET CLR 3.5.30729)<br>Timestamp: Wed, 14 Jul 2010 13:22:49 UTC</p><p>Message: Exception thrown and not caught<br>Line: 803<br>Char: 1<br>Code: 0<br>URI: http://localhost/CFIDE/scripts/ajax/package/cfajax.js</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669940">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669940">67</a> by ALONSO
		posted on 7/14/2010 at 5:41 PM
		</div>
		<div class="comment_text"><p>I review source code in chrome and I went to script and this code return on my browser.</p><p>   &lt;tr&gt;&lt;td&gt; Description : &lt;/td&gt;<br>        &lt;td&gt; &lt;select name="testbind" id="testbind"&gt;<br>           &lt;option name="blank" &gt;--Select-- &lt;/option&gt;<br>        &lt;/select&gt;<br>   &lt;/td&gt;&lt;/tr&gt;<br>Any suggestion</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669941">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669941">68</a> by Raymond Camden
		posted on 7/14/2010 at 5:59 PM
		</div>
		<div class="comment_text"><p>I'd switch to Firefox or Chrome. You don't have to switch forever, just long enough to use the nice Ajax debugging tools included with them.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669939">69</a> by Alonso
		posted on 7/14/2010 at 7:08 PM
		</div>
		<div class="comment_text"><p>I get this error :</p><p>/CFIDE/scripts/ajax/package/cfajax.js:803Uncaught SyntaxError: parseJSON</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669935">70</a> by Raymond Camden
		posted on 7/14/2010 at 7:09 PM
		</div>
		<div class="comment_text"><p>What do you see in the XHR request? Firebug/Chrome dev tools will show you the JSON returned. Do you see stuff _after_ or before the JSON?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669937">71</a> by Alonso
		posted on 7/14/2010 at 7:47 PM
		</div>
		<div class="comment_text"><p>No on Chrome show me only the error I sent you.<br>Also I test result from the array and query and I used dump to view the result and averything looks fine.<br>Also I see on Jedi blog and I comment all query's from application.cfm and rename application.cfc</p><p>if you want I have print screen how I sent to you :<br>Thanks a lot</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669933">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669933">72</a> by Raymond Camden
		posted on 7/15/2010 at 2:08 AM
		</div>
		<div class="comment_text"><p>Chrome has developer tools and a resource tracker. It allows you to monitor Ajax based requests (they call em XHR requests). You need to check that. Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669938">73</a> by Jbradley
		posted on 7/21/2010 at 9:57 AM
		</div>
		<div class="comment_text"><p>The sample that comes with cold fusion returns "result" and fills the select box choices .  How do you address the array that it uses while working in the form? If you treated the 1st record of the array like a variable and could change that to be the selected value you want,  would that work some how?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669929">74</a> by Jbradley
		posted on 7/21/2010 at 10:02 AM
		</div>
		<div class="comment_text"><p>Is there a way to send more then one value with each cfselect.<br>like send the id and the description along with it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669931">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669931">75</a> by David Miller
		posted on 8/18/2010 at 2:41 PM
		</div>
		<div class="comment_text"><p>I am getting the parseJSON Error at line 803 as well. The response shows one entry in the XHR request response field preceded by a comment that has some sort of number in it. Maybe the serialization?<br>&lt;!-- 34586154205 --&gt; ["HAZEN TRANSPORT"]<br>Is there a CF Patch available?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669944">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669944">76</a> by David Miller
		posted on 8/18/2010 at 3:35 PM
		</div>
		<div class="comment_text"><p>I found out the the cfinclude at the beginning of my cfc was outputting</p><p>an html comment (with my session id) and that was being returned with my JSON. Ergo, parseJSON error.</p><p>I removed the cfoutput from the file being cfincluded and voila, no more parseJSON error.</p><p>The Net tab in the firebug debug window was really helpful once I knew what I was looking for.</p><p>The XHR tab shows all of the information being passed in ajax including request and response.</p><p>The response tab, having expanded the URL shows the information that you are getting back.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713669934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713669934">77</a> by Saad
		posted on 1/30/2014 at 7:37 PM
		</div>
		<div class="comment_text"><p>Hello Raymond,</p><p>I am using Ben Forta's related selects example.</p><p>I am able to get 2 Related Selects to Work. But when using 3rd one, getting CF-Invoke Error. But the 3rd select does populate and works. CFDebug does not show any errors with the cfc.</p><p>What am I doing wrong?</p><p>CFM.<br> &lt;cfform&gt;</p><p>    &lt;table&gt;<br>    &lt;tr&gt;<br>    &lt;td&gt;Select Device Type:&lt;/td&gt;<br>    &lt;td&gt;&lt;cfselect name="device"<br>            bind="cfc:art.getDevice()"<br>            bindonload="true" /&gt;&lt;/td&gt;<br>&lt;/tr&gt;<br>&lt;tr&gt;<br>    &lt;td&gt;Select Problem Type:&lt;/td&gt;<br>    &lt;td&gt;&lt;cfselect name="problem"<br>            bind="cfc:art.getProblem({device})" <br>            bindonload="false" /&gt;&lt;/td&gt;<br>&lt;/tr&gt;<br>&lt;tr&gt;<br>    &lt;td&gt;Select Description Type:&lt;/td&gt;<br>    &lt;td&gt;&lt;cfselect name="description"<br>            bind="cfc:art.getdescription({device},{problem})" <br>            bindonload="false"/&gt;&lt;/td&gt;<br> &lt;/tr&gt;<br> &lt;/table&gt;</p><p>CFC.<br>&lt;cfcomponent output="false"&gt;</p><p>&lt;!--- Get array of media types ---&gt;<br>&lt;cffunction name="getDevice" access="remote" returnType="array"&gt;<br>    &lt;!--- Define variables ---&gt;<br>    &lt;cfset var data=""&gt;<br>    &lt;cfset var result=ArrayNew(2)&gt;<br>    &lt;cfset var i=0&gt;</p><p>    &lt;!--- Get data ---&gt;<br>    &lt;cfquery name="data" datasource="#dsn#"&gt;<br>    SELECT device_id, device_list<br>    FROM pa_device<br>    ORDER BY device_list<br>    &lt;/cfquery&gt;</p><p>    &lt;!--- Convert results to array ---&gt;<br>    &lt;cfloop index="i" from="1" to="#data.RecordCount#"&gt;<br>        &lt;cfset result[i][1]=data.device_id[i]&gt;<br>        &lt;cfset result[i][2]=data.device_list[i]&gt;<br>    &lt;/cfloop&gt;</p><p>    &lt;!--- And return it ---&gt;<br>    &lt;cfreturn result&gt;<br>&lt;/cffunction&gt;</p><p>&lt;!--- Get art by media type ---&gt;<br>&lt;cffunction name="getProblem" access="remote" returnType="array"&gt;<br>    &lt;cfargument name="device_id" type="numeric" required="true"&gt;</p><p>    &lt;!--- Define variables ---&gt;<br>    &lt;cfset var data=""&gt;<br>    &lt;cfset var result=ArrayNew(2)&gt;<br>    &lt;cfset var i=0&gt;</p><p>    &lt;!--- Get data ---&gt;<br>    &lt;cfquery name="data" datasource="#dsn#"&gt;<br>    SELECT problem_id, problem_list<br>    FROM pa_problem<br>    WHERE device_id = #ARGUMENTS.device_id#<br>    ORDER BY problem_list<br>    &lt;/cfquery&gt;</p><p>    &lt;!--- Convert results to array ---&gt;<br>    &lt;cfloop index="i" from="1" to="#data.RecordCount#"&gt;<br>        &lt;cfset result[i][1]=data.problem_id[i]&gt;<br>        &lt;cfset result[i][2]=data.problem_list[i]&gt;<br>    &lt;/cfloop&gt;</p><p>    &lt;!--- And return it ---&gt;<br>    &lt;cfreturn result&gt;<br>&lt;/cffunction&gt;</p><p>  &lt;!--- Get art by media type ---&gt;<br>&lt;cffunction name="getdescription" access="remote" returnType="array"&gt;<br>    &lt;cfargument name="device_id" type="numeric" required="true"&gt;<br>    &lt;cfargument name="problem_id" type="numeric" required="true"&gt;</p><p>    &lt;!--- Define variables ---&gt;<br>    &lt;cfset var data=""&gt;<br>    &lt;cfset var result=ArrayNew(2)&gt;<br>    &lt;cfset var i=0&gt;</p><p>    &lt;!--- Get data ---&gt;<br>    &lt;cfquery name="data" datasource="#dsn#"&gt;<br>    SELECT description_id, description_list, device_id<br>    FROM pa_description<br>    WHERE device_id = #ARGUMENTS.device_id# and problem_id =#arguments.problem_id#<br>            ORDER BY description_list<br>    &lt;/cfquery&gt;</p><p>    &lt;!--- Convert results to array ---&gt;<br>    &lt;cfloop index="i" from="1" to="#data.RecordCount#"&gt;<br>        &lt;cfset result[i][1]=data.description_id[i]&gt;<br>        &lt;cfset result[i][2]=data.description_list[i]&gt;<br>    &lt;/cfloop&gt;</p><p>    &lt;!--- And return it ---&gt;<br>    &lt;cfreturn result&gt;<br>&lt;/cffunction&gt;</p></div>
	</div>
</div>
		