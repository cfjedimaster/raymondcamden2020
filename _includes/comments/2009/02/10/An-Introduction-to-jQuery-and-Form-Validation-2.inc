
<div class="comment" id="c_1713712558">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712558">1</a> by Kumar
		posted on 2/10/2009 at 11:33 PM
		</div>
		<div class="comment_text"><p>Examples look good on FF, don't work on IE. But yes, I have been quite impressed with jQuery too, mainly working with jqGrid till now though (much faster than cfgrid).</p><p>The Form Validation stuff should be very useful in the future. Thanks Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712559">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712559">2</a> by Raymond Camden
		posted on 2/10/2009 at 11:34 PM
		</div>
		<div class="comment_text"><p>What fails in IE? What version of IE?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712560">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712560">3</a> by Kumar
		posted on 2/10/2009 at 11:38 PM
		</div>
		<div class="comment_text"><p>IE7, the last example, just submits the form for me (all fields left blank).</p><p>Error Screen: <a href="http://disq.us/url?url=http%3A%2F%2Fi42.tinypic.com%2Ffoptea.jpg%3AvMYFlpOX81mwGjSJjGAGbZwyy5w&amp;cuid=3321886" rel="nofollow noopener" title="http://i42.tinypic.com/foptea.jpg">http://i42.tinypic.com/fopt...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712557">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712557">4</a> by Gabe
		posted on 2/10/2009 at 11:38 PM
		</div>
		<div class="comment_text"><p>Both of these have been really insightful.  Wish I could have found something like this a little over a year ago when I was struggling with jQuery form validation.  Of course, it's always important to remind clients that javascript form validation is still no substitute for verifying and cleaning data submitted to a form.  But, the jQuery form validation plugin is a vast improvement over what CF is doing in CFFORM.  The level of control over returned error messages and combination validations (requiring field validation based on input in other fields) makes it valuable tool in any developers box of tricks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712562">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712562">5</a> by Gabe
		posted on 2/10/2009 at 11:41 PM
		</div>
		<div class="comment_text"><p>In your rules area, there is an error in IE7.</p><p>    rules: {<br>    	name: "required",<br>    	email: {<br>    		required: true,<br>    		email: true,<br>    	}, //this comma is throwing an exception<br>    	comment: "required"<br>    },</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712566">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712566">6</a> by Jim Priest
		posted on 2/10/2009 at 11:47 PM
		</div>
		<div class="comment_text"><p>I really need to find some time to play with Jaxer - server side JS.  Then you could validate on both ends using the same code...</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fejohn.org%2Fblog%2Fserver-side-javascript-with-jaxer%2F%3AHgpKPvYaD9oy3ElDDj8N-3qFJ9I&amp;cuid=3321886" rel="nofollow noopener" title="http://ejohn.org/blog/server-side-javascript-with-jaxer/">http://ejohn.org/blog/serve...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712564">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712564">7</a> by Gabe
		posted on 2/10/2009 at 11:47 PM
		</div>
		<div class="comment_text"><p>Sorry, wrong line, it's the trailing comma here:</p><p>rules: {<br>   name: "required",<br>   email: {<br>      required: true,<br>      email: true, //this comma is throwing an exception<br>   }, <br>   comment: "required"<br>},</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712565">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712565">8</a> by Dan G. Switzer, II
		posted on 2/11/2009 at 12:01 AM
		</div>
		<div class="comment_text"><p>IE does not like Objects that have a trailing comma with null data after it (which is what Gabe was pointing out.)</p><p>Having had similar issues bite me in the past, I moved to placing my commas in front of additional lines, instead of after them. Since moving this this formatting style, I've avoided these types of errors.</p><p>Example:</p><p>  p1<br>, p2<br>, p3<br>, p4</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712569">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712569">9</a> by Michael Brennan-White
		posted on 2/11/2009 at 1:35 AM
		</div>
		<div class="comment_text"><p>I just found a pretty cool page which will help the Javascript dyslexic like me when creating jQuery functions. It is a wizard based jQuery function builder</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.accessify.com%2Ftools-and-wizards%2Fdeveloper-tools%2Fjquery-builder%2Fdefault.php%3AVVZ_wN9ie2Elx_2HwwMgqiWGUG8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.accessify.com/tools-and-wizards/developer-tools/jquery-builder/default.php">http://www.accessify.com/to...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712561">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712561">10</a> by Raymond Camden
		posted on 2/11/2009 at 2:38 AM
		</div>
		<div class="comment_text"><p>Thanks for the IE info there. I'll try Dan's format for my next demo.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712568">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712568">11</a> by Scott Stroz
		posted on 2/11/2009 at 4:05 AM
		</div>
		<div class="comment_text"><p>jQuery is like the CF of JavaScript libraries.  It can do a whole lot of shit with very little code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712571">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712571">12</a> by Garrett Johnson
		posted on 2/11/2009 at 4:11 AM
		</div>
		<div class="comment_text"><p>This is a great plug-in, we use it at <a href="http://disq.us/url?url=http%3A%2F%2Fworshipplanning.com%3AFsEc0CuT3hmMQslHRrDhcC2otxU&amp;cuid=3321886" rel="nofollow noopener" title="worshipplanning.com">worshipplanning.com</a> for our sign up form. (<a href="http://disq.us/url?url=http%3A%2F%2Fworshipplanning.com%2Flogin%2Fsignup.cfm%29%3A-fpsyd3eDZnqmPxGDe571g9vCDw&amp;cuid=3321886" rel="nofollow noopener" title="http://worshipplanning.com/login/signup.cfm)">http://worshipplanning.com/...</a></p><p>There are also many things functions you can pass into the validator as well for success and failure placement and responses. (not sure how this code will look below in this comment!)</p><p>$("#signupform").validate({<br>  ignoreTitle: true,<br>  onkeyup: false,<br>  success: function(label){<br>	label.addClass("success").fadeTo(3000,1).fadeOut('slow');<br>					 },<br>errorPlacement: function(error, element){<br>								error.appendTo(<a href="http://disq.us/url?url=http%3A%2F%2Felement.next%3AXmHG3x83HsHiPqBSzjv0awTiBGs&amp;cuid=3321886" rel="nofollow noopener" title="element.next">element.next</a>("span"));<br>							},<br>			meta: "validate"<br>		});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712574">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712574">13</a> by brian
		posted on 2/11/2009 at 5:15 AM
		</div>
		<div class="comment_text"><p>I tried class="required minlength:2" for a select but it's not quite right. What's the format for selects?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712575">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712575">14</a> by Raymond Camden
		posted on 2/11/2009 at 6:55 AM
		</div>
		<div class="comment_text"><p>Not that it helps, but 'minlength' would refer to the length of a text value, not the number of selected items. Let me try to dig a bit on that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712576">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712576">15</a> by Raymond Camden
		posted on 2/11/2009 at 6:57 AM
		</div>
		<div class="comment_text"><p>Here ya go:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.mail-archive.com%2Fjquery-en%40googlegroups.com%2Fmsg38954.html%3A0jBo-o8-3p4J9UFY952SHrYGK5A&amp;cuid=3321886" rel="nofollow noopener" title="http://www.mail-archive.com/jquery-en@googlegroups.com/msg38954.html">http://www.mail-archive.com...</a></p><p>From the creator himself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712573">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712573">16</a> by Jörn Zaefferer
		posted on 2/12/2009 at 3:44 AM
		</div>
		<div class="comment_text"><p>Another note from the author: You can make your custom methods much more robust by adding a call to this.optional:</p><p>$.validator.addMethod("noanon", function(value) {<br>  return this.optional(element) || value.toLowerCase().indexOf("anonymous") != 0;<br>}, 'Do not hide behind the cover of anonymity');</p><p>Otherwise the method would be always applied, even when the element isn't required.</p><p>@brian: Try class="requierd" minlength="2". &lt;a href="<a href="http://disq.us/url?url=http%3A%2F%2Fdocs.jquery.com%2FPlugins%2FValidation%2FMethods%2Fminlength%3AM7I4u8UI26MjL6psH1MrjFBpzss&amp;cuid=3321886" rel="nofollow noopener" title="http://docs.jquery.com/Plugins/Validation/Methods/minlength">http://docs.jquery.com/Plug...</a>"&gt;minlength&lt;/a&gt; works with inputs of type text, checkboxes and selects.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712578">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712578">17</a> by Raymond Camden
		posted on 2/12/2009 at 3:54 AM
		</div>
		<div class="comment_text"><p>Thanks for the tip, Jorn.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712577">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712577">18</a> by brian
		posted on 2/12/2009 at 4:01 AM
		</div>
		<div class="comment_text"><p>thanks Jörn, that works great</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712579">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712579">19</a> by Byron Raines
		posted on 2/21/2009 at 11:10 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>This is my first try at JQuery validation and this has been very helpful.  I do have one problem.  I use Brian Kotek's FormUtilities, so I name my variables employee.fname, employee.lname, etc..</p><p>It looks like I can use the class="required" method but I can't specify employee.fname in the rules attribute.  It throws an error From firebug:</p><p>missing : after property id<br> employee.fname: "required",\n</p><p>Is this correct.  The only draw back is it looks like I can;t use custom messages with the "class=required" method.</p><p>Thanks again</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712580">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712580">20</a> by Raymond Camden
		posted on 2/22/2009 at 2:36 AM
		</div>
		<div class="comment_text"><p>Wrap the name in quotes:</p><p>"name.moon": {<br>required: true,<br>minlength: 2<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712582">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712582">21</a> by Byron Raines
		posted on 2/22/2009 at 2:55 AM
		</div>
		<div class="comment_text"><p>Sweet.  Works like a charm.</p><p>Thanks, Ray</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712583">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712583">22</a> by cucumucz
		posted on 2/23/2009 at 1:34 PM
		</div>
		<div class="comment_text"><p>Well elaborated !</p><p> I am trying to implement a validation using this plugin, but failed to produce customized error messages. Lets say<br> we have there dates to compare ,<br>  FromDate<br>  ToDate<br>  CurrentDate</p><p>  FromDate &lt;= ToDate         <br>  ToDate &gt;= FromDate ( this can be achieved with above single validation also )<br> ToDate &lt;= currentDate</p><p>hence my rules are:</p><p>   rules:{<br>  'fromDatelog': { beforeToDate:'toDatelog' },		<br>  'toDatelog': { afterFromDate:'fromDatelog' },<br>  'toDatelog': { beforeToDate:'current_date'}<br>   }</p><p>Now the problem is how can I produce a distinct message for each validation while I use the same validation rule<br>e.g <br>  'fromDatelog': { beforeToDate:'toDatelog' },<br>I want message '"From Date" should be less than "To Date"'</p><p>and for<br>  'toDatelog': { beforeToDate:'current_date'}<br>I want message '"To Date" should be less than "Current Date"'</p><p>any help ,suggestion will be appreciated.</p><p>Thanks in advance<br>cucumucz</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712584">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712584">23</a> by Raymond Camden
		posted on 2/23/2009 at 6:58 PM
		</div>
		<div class="comment_text"><p>You don't see how to define customized messages in the code above?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712587">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712587">24</a> by Mark S
		posted on 2/28/2009 at 5:26 AM
		</div>
		<div class="comment_text"><p>Hi, I am a bit late to the party but have a question:</p><p>I need to keep the default error messages "field is required", but for certain fields I need to also pop up another message. I was wondering if this can be easily done with this jquery validation or do I have to write my own script?</p><p>Thanks in advance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712586">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712586">25</a> by Raymond Camden
		posted on 2/28/2009 at 5:38 AM
		</div>
		<div class="comment_text"><p>Just use the messages block as described above. If you want to use another sentence along with what jquery uses by default, you would just specify both in the messages block.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712589">26</a> by Mark S
		posted on 2/28/2009 at 5:42 AM
		</div>
		<div class="comment_text"><p>Thanks Ray,</p><p>The problem is that the extra message has to be placed in a different area.. the extra message will need to be appended to an error box that appears away from the default message</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712590">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712590">27</a> by Raymond Camden
		posted on 2/28/2009 at 5:44 AM
		</div>
		<div class="comment_text"><p>Hmmm. Then you may need to tie into the events that Validation supports. Notice the error event, and handle doing the 'special' message.</p><p>Make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712588">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712588">28</a> by Mark S
		posted on 2/28/2009 at 7:18 AM
		</div>
		<div class="comment_text"><p>I think so.</p><p>So, I will have to play with this</p><p>errorPlacement: function(error, element) {</p><p>}</p><p>Thanks for the help</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712591">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712591">29</a> by mahendra
		posted on 3/20/2009 at 4:21 PM
		</div>
		<div class="comment_text"><p>hi <br>please help me i am using following code for form validation<br>it work in FF fine ... but<br>it cannot work in IE6 and IE7 <br>&amp; also it cannot show any error</p><p>var design_validator = jQuery("#add_new_design").validate({<br>        rules: {<br>            design_title : { required: true },<br>            design_comment : { required: true },<br>            design_keywords : { required: true },<br>            design_category : { required: true, noselect:true }<br>        },</p><p>        messages: {<br>            design_title:{ <br>                        required: "Please enter design title"<br>                         },<br>            design_comment:{ <br>                         required: "Please explain about your design"<br>                             },        <br>            design_keywords:{ <br>                          required: "Please enter tag(s) for your design"<br>                           },<br>            design_category:{<br>                        required: "Please select a category",<br>                        noselect: "Please select a category"<br>                           }</p><p>        },</p><p>        errorPlacement: function(error, element) {<br>                error.appendTo(<a href="http://disq.us/url?url=http%3A%2F%2Felement.next%3AXmHG3x83HsHiPqBSzjv0awTiBGs&amp;cuid=3321886" rel="nofollow noopener" title="element.next">element.next</a>().next()); <br>        },</p><p>        submitHandler: function(data) {</p><p>             //console.log(jQuery('#uploaded_default').val());<br>             //console.log(jQuery('#uploaded_default_location').val());</p><p>        }, <br>        // set this class to error-labels to indicate valid fields <br>        success: function(label) { <br>            // set   as text for IE <br>            label.html(" ").addClass("checked"); <br>        }<br>    });</p><p>.....please help me !!!!!<br>!!!!!! waiting for your replay!!!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712594">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712594">30</a> by Raymond Camden
		posted on 3/21/2009 at 2:21 AM
		</div>
		<div class="comment_text"><p>@mahendra: Someone, I forget who, told me that use of commas in the JS code can break IE. They said to switch from:</p><p>foo,<br>moo,</p><p>to</p><p>foo<br>,moo</p><p>If you look at my later blog entries in this series, I believe I switched to this format.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712593">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712593">31</a> by John
		posted on 4/2/2009 at 2:04 PM
		</div>
		<div class="comment_text"><p>Hi, perhaps somebody can help me, I try to validate on several checkboxes in fieldsets. For example, I have 4 checkboxes and I want to require at least 2 of them. And I simple try to view the error message under the 4 checkboxes.</p><p>Thanks for any help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712595">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712595">32</a> by Raymond Camden
		posted on 4/2/2009 at 3:21 PM
		</div>
		<div class="comment_text"><p>John, please check the docs for the validation plugin. Your scenario is exactly something they support.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712596">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712596">33</a> by John
		posted on 4/2/2009 at 3:37 PM
		</div>
		<div class="comment_text"><p>You're right, I got a working example form the demos of the plugin, but only with the metadata plugin. I try to find a solution like in example: test30.html</p><p>I didn't found the solution for this with checkboxes.<br>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712597">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712597">34</a> by Raymond Camden
		posted on 4/2/2009 at 4:57 PM
		</div>
		<div class="comment_text"><p>The metadata rules work just as easy, if not easier, in pure JS, which is covered in my series. I don't mean to keep pushing you to the docs, but, this _is_ covered there. Or you are at least given the _rules_ you can do.</p><p>I would check this out:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjquery.bassistance.de%2Fvalidate%2Fdemo%2F%3ApiuORK7GHd49YkRcxxvMjfPm0_w&amp;cuid=3321886" rel="nofollow noopener" title="http://jquery.bassistance.de/validate/demo/">http://jquery.bassistance.d...</a></p><p>He has a demo just for checkboxes and selects.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712598">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712598">35</a> by John
		posted on 4/2/2009 at 6:35 PM
		</div>
		<div class="comment_text"><p>Thanks for the advice, I did look at the example, but my problem were just the '[]' brackets for the name tag of my checkboxes and even the necessary label for the error message. It now works.</p><p>Thanks and great tutorial by the way.</p><p>john</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712599">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712599">36</a> by Joe Devon
		posted on 5/14/2009 at 5:49 AM
		</div>
		<div class="comment_text"><p>Thanks for a great tutorial! I'm a javascript newbie though, so I need help on a custom validator. I'm trying to use this REGEX:<br>('/^[a-z0-9\.\-_]+$/')<br>Any idea how to write that w/ JQuery Validator?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712601">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712601">37</a> by Raymond Camden
		posted on 5/14/2009 at 3:36 PM
		</div>
		<div class="comment_text"><p>Bam: <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F280759%2Fjquery-validate-how-to-add-a-rule-for-regular-expression-validation%3A_Vf1zIirXeA1YZNIPPQ60-WdiGY&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/280759/jquery-validate-how-to-add-a-rule-for-regular-expression-validation">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712707">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712707">38</a> by José Luis
		posted on 5/15/2009 at 12:31 AM
		</div>
		<div class="comment_text"><p>Hello everybody!!</p><p>I need to block or hide the submit button when the user click on it... I do a function to hide the button:<br>"function OcultaBoton(){<br>	$('.bloquear_boton').hide();<br>}"</p><p>And I call in the form when it's submitted:</p><p>"&lt;form action="index.php" method="post" id="DataForm" onsubmit="OcultaBoton();"&gt;"</p><p>that's work but when all the fields is not empty!!! if one of them is empty the button dissapear and the user didn't see the button again!!!</p><p>What can I do in this case?? if anyone have a idea!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712706">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712706">39</a> by Raymond Camden
		posted on 5/15/2009 at 12:42 AM
		</div>
		<div class="comment_text"><p>Well, it looks like you didn't do any validation. Your code just always hides the button. Period. You would want to hide it on _successful_ validation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712714">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712714">40</a> by José Luis
		posted on 5/15/2009 at 12:51 AM
		</div>
		<div class="comment_text"><p>sorry and how can I do that whi jquery-validate or jquery or javascript??.... If have any reference.... thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712710">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712710">41</a> by Raymond Camden
		posted on 5/15/2009 at 4:47 AM
		</div>
		<div class="comment_text"><p>This page itself, and the related links in the article, discuss form validation and jQuery. Please read the links, and the jQuery documentation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712719">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712719">42</a> by Joe Hansen
		posted on 12/31/2009 at 11:31 PM
		</div>
		<div class="comment_text"><p>Awesome Tutorial. Learnt JQuery Validation within minutes! Thank you very much Raymond! No wonder "Everybody loves Raymond!" :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712720">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712720">43</a> by pbaylis
		posted on 10/7/2010 at 11:25 AM
		</div>
		<div class="comment_text"><p>I've been a-fiddlin' with the email rule to check if email has already been used by a subscriber. But, I'm running into an issue. I'm sure what I've got can be done better.</p><p>&lt;!--- user registration page ---&gt;<br>rules:<br>{											email:{remote:{url:"emailCheck.cfm",type:"post"}}<br>}</p><p>&lt;!--- emailCheck.cfm ---&gt;<br>&lt;cfset getPageContext().getOut().clearBuffer() /&gt;<br>&lt;cfsetting enablecfoutputonly="true"&gt;<br>&lt;cfsilent&gt;<br>&lt;cfset o_main = createObject("component","cfcs.main")&gt;<br>&lt;/cfsilent&gt;<br>&lt;cfoutput&gt;#trim(o_main.checkEmail(email=<a href="http://disq.us/url?url=http%3A%2F%2Fform.email%3AvoKRpDCk_gw6yZiWIVr2ybhYUhc&amp;cuid=3321886" rel="nofollow noopener" title="form.email">form.email</a>))#&lt;/cfoutput&gt;</p><p>&lt;!--- main.cfc ---&gt;<br>&lt;cffunction name="checkEmail" access="remote" returnType="boolean"&gt;<br>&lt;cfargument name="email" type="string" required="true"&gt;<br>&lt;cfset var qCheckEmail = ""&gt;<br>&lt;cfquery name="qCheckEmail" datasource="#application.datasource#"&gt;<br>select  record_id<br>from    users<br>where	email = '#<a href="http://disq.us/url?url=http%3A%2F%2Farguments.email%3AdEb0XjJc0-rxkMWb6bK1u-r4Ydk&amp;cuid=3321886" rel="nofollow noopener" title="arguments.email">arguments.email</a>#'<br>&lt;/cfquery&gt;<br>&lt;cfreturn not qCheckEmail.recordcount&gt;<br>&lt;/cffunction&gt;</p><p>So, if the email is not in use already, we'll get a boolean yes returned.</p><p>However, there is a bunch of whitespace above the YES as I view it in firebug, which I can't get rid of and it's wrecking my nice boolean.</p><p>As you can see, I've used various techniques such as &lt;cfsilent&gt; and clearbuffer, but there still whitespace. How do I get rid of it or somehow dig the boolean out of the whitespace so the callback sees only a "yes", not "whitespace-yes"? Hope I'm making sense.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712709">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712709">44</a> by Raymond Camden
		posted on 10/7/2010 at 3:56 PM
		</div>
		<div class="comment_text"><p>Try adding output="false" to your CFC method. Worse comes to worse, in jQuery you can $.trim(x) where X is the response.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712721">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712721">45</a> by keong
		posted on 4/28/2011 at 11:05 AM
		</div>
		<div class="comment_text"><p>Hi,<br>  May i know how i can show the custom error message for each field form in a specific area? <br>eg</p><p>  First name [ textbox ]<br>   &lt;span id ="firstname"&gt;&lt;/span&gt;</p><p>When the First Name is not enter, the custom error message will showed in &lt;span id ="FirstName"&gt; ?</p><p>Another question is, How i can used this jquery validation with the submit form with button type = [button] instead of type = [submit]?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712708">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712708">46</a> by Raymond Camden
		posted on 4/28/2011 at 3:05 PM
		</div>
		<div class="comment_text"><p>This demo shows an example of that.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fjquery.bassistance.de%2Fvalidate%2Fdemo%2Fmultipart%2F%3AjG770VB2DpOSHV3QW3f_osV-028&amp;cuid=3321886" rel="nofollow noopener" title="http://jquery.bassistance.de/validate/demo/multipart/">http://jquery.bassistance.d...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712711">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712711">47</a> by keong
		posted on 4/29/2011 at 9:25 AM
		</div>
		<div class="comment_text"><p>Hi Raymond<br>   Thank for your update and link, very appreciate it.</p><p>    But It seem little bit difference compare with the once i looking for.</p><p>    Actually im looking something like :</p><p>Jquery script (with Javascript? possible?)<br>  If First name not entered<br>     If Error,  Set custom error message :"  Please enter your first name"<br>        -- Showed in &lt;span id ="FirstName"&gt;<br>     Elese<br>        Set message :" First name Entered"<br>        -- Showed in &lt;span id ="FirstName"&gt;</p><p>  If dateis entered<br>    -- Calling Custom Jscript to do more checking <br>         If Error,  Set custom error message :"  Please enter valid date"<br>        -- Showed in &lt;span id ="FirstName"&gt;<br>     Elese<br>        Set message :" Date entered"<br>        -- Showed in &lt;span id ="FirstName"&gt;</p><p>-- HTML Code -- <br>First name [ textbox ] &lt;br&gt;&lt;br&gt;<br>&lt;span id ="firstname"&gt;&lt;/span&gt;</p><p>Date [ textbox ] &lt;br&gt;&lt;br&gt;<br>&lt;span id ="date"&gt;&lt;/span&gt;<br>&lt;input type="button" value="submit"&gt;</p><p>1) When the First Name is not enter, the custom error message will showed in &lt;span id ="FirstName"&gt;</p><p>   Most of the sample i found in internet din't have such sample.</p><p>   Of course, the message showed in span will vary depend of the Validation result.</p><p>2) Another question is, How i can used this jquery validation with the submit form with button type = [button] instead of type = [submit]?</p><p>    Im only can found those sample used button Type = [submit] but not Type = [button].</p><p>Any idea?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712717">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712717">48</a> by Raymond Camden
		posted on 4/29/2011 at 3:23 PM
		</div>
		<div class="comment_text"><p>Maybe i'm not just reading you right. The core thing in your #1 to me is - show the error in a div the field. The plugin supports that and the demo I showed demonstrates that. Does it not?</p><p>2) It's been a while - but if I remember, you can run the validation programmatically. You would just use jQuery to bind to the click event of your button.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712713">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712713">49</a> by keong
		posted on 5/11/2011 at 2:28 PM
		</div>
		<div class="comment_text"><p>Hi Raymond</p><p>   I think i did figure out how to showed the custom message now, by using below script :</p><p>  errorPlacement: function(error, element) {<br>  jsSetIDName = $('#' + element.attr("name") + '_msg').fadeIn();<br>  error.appendTo(jsSetIDName);<br>}</p><p>  where by the attr("name") is your span ID : ID attribute.</p><p>But i still unable to figure out how to used button to control the validation process eg : Click [Update] or [Convert] etc..</p><p>I may used hidden variable , eg FinalAction = [?]to control this when sent the form for processing..</p><p>I have several question here :<br>1) how we can fadeIn and FadeOut the validation text? I only can figure out when click the Submit button, but not when user edit the form field.</p><p>2) Adding Custom Jscript , eg DateCompare (FromDate, Todate) and then return the result? I will try using the "addMethod" to plug in my current jscript..</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712712">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712712">50</a> by Raymond Camden
		posted on 5/12/2011 at 4:33 PM
		</div>
		<div class="comment_text"><p>No idea about your first question. You may want to contact the plugin author?</p><p>To your second one - yeah - give it a shot. That's all I can offer. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712716">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712716">51</a> by Helen Neely
		posted on 8/30/2011 at 2:23 AM
		</div>
		<div class="comment_text"><p>Thanks for this post. I just started working with jQuery and needed a way to override the default error messages on the form. Your examples here have helped. I don't have to rll my own Javascript to validate forms anymore  :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712725">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712725">52</a> by Andrea
		posted on 5/22/2012 at 3:07 AM
		</div>
		<div class="comment_text"><p>Thanks for your article. I need your help to solve my problem. I want to validate a checkbox by his ID inside rules, but I don't know how.<br>&lt;input type="checkbox" name="language" id="french"&gt;<br>&lt;input type="checkbox" name="language" id="english"&gt;<br>&lt;input type="checkbox" name="language" id="italian"&gt;</p><p>$("#settete").validate(<br>	{<br>	rules:{<br>'language[2]':{<br>	required: true<br>	}<br>	},<br>	messages:{<br>		....}<br>How to select checkbox with ID="Italian"? Thanks in advance</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712726">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712726">53</a> by Raymond Camden
		posted on 5/22/2012 at 10:37 PM
		</div>
		<div class="comment_text"><p>Check out the responses here: <a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F1535187%2Fjquery-validate-form-with-multiple-checkboxes-at-least-one-must-be-checked%3Ax5MquNW3h0ygddS3paIyyepde7w&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/1535187/jquery-validate-form-with-multiple-checkboxes-at-least-one-must-be-checked">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712724">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712724">54</a> by Greg
		posted on 10/16/2012 at 2:29 AM
		</div>
		<div class="comment_text"><p>Hello,<br>I have 3 input text fields in my form. I want the user to fill à least one these 3 fieds. Is it possible to have this rule with the plug-in ?<br>Tnacks a lot !</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712718">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712718">55</a> by Raymond Camden
		posted on 10/16/2012 at 9:33 AM
		</div>
		<div class="comment_text"><p>Yep - check all the entries in this series - I'm pretty sure I discussed custom rules some place. If not though, yes, you can have any custom logic you wish.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712723">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712723">56</a> by Greg
		posted on 10/17/2012 at 8:16 PM
		</div>
		<div class="comment_text"><p>Hi,<br>I didn't found a similar example in the previous posts. I saw how to do with checkboxes (at least 2 checked) but not with text fields... I have inderstood how the plug in works for basic controls but i'm limited for these kind of specifical cases.<br>Can somebody help me ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712715">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712715">57</a> by Raymond Camden
		posted on 10/18/2012 at 10:16 AM
		</div>
		<div class="comment_text"><p>Well the rule for "at least two checkboxes" demonstrates how to do custom rules, right? You would just need to change the logic to get the values of your text fields and ensure at least 2 have values.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712722">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712722">58</a> by Greg
		posted on 10/19/2012 at 1:50 AM
		</div>
		<div class="comment_text"><p>Hi !</p><p>My problem is that every checkbox field has the same name, whereas my 3 text fields don't have.<br>For checkboxes the code is :</p><p>topic: {<br>required: true,<br>minlength: 2<br>},</p><p>for</p><p>&lt;input type="checkbox" value="Topic1" name="topic" /&gt; Topic 1<br>&lt;input type="checkbox" value="Topic2" name="topic" /&gt; Topic 2<br>&lt;input type="checkbox" value="Topic3" name="topic" /&gt; Topic 3</p><p>But for text fields, "minlength" "makes the element require a given minimum length" (from the documentation) so how to apply the rule to 3 fields with different name. Here are my 3 fields I want the user to fill in at least one :</p><p>&lt;input type="text" name="telephone"&gt;<br>&lt;input type="text" name="mobile"&gt;<br>&lt;input type="text" name="mail"&gt;</p><p>Maybe I don't see something obvious... Coding is not my full time job ! :-) et sorry for my English.</p><p>Thanks !</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712727">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712727">59</a> by Raymond Camden
		posted on 10/19/2012 at 9:39 PM
		</div>
		<div class="comment_text"><p>You want to look at the example in this post, the noanon rule. That shows you how to do custom validation. You would modify the code inside the method to check those text fields.  Does that make sense?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712728">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712728">60</a> by Greg
		posted on 10/21/2012 at 3:17 AM
		</div>
		<div class="comment_text"><p>Ok I understand. Unfortunately i'm not good enough in javascript to write a custom rule... I'm gonna use PHP... not user friendly but that's all i can do ! Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712730">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712730">61</a> by Raymond Camden
		posted on 10/21/2012 at 5:43 AM
		</div>
		<div class="comment_text"><p>You could also use this as an opportunity to *learn* JavaScript. It will compliment your PHP knowledge.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712737">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712737">62</a> by Greg
		posted on 10/21/2012 at 1:17 PM
		</div>
		<div class="comment_text"><p>You're completely right. I don't have time right now and i have to advance on this project. But I will come back on it !</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712738">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712738">63</a> by Jai
		posted on 2/19/2013 at 7:03 PM
		</div>
		<div class="comment_text"><p>Thanks for displaying error in different ways and styles. I like most the last one which is used by team for joomla custom project.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712733">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712733">64</a> by Jai
		posted on 2/19/2013 at 9:07 PM
		</div>
		<div class="comment_text"><p>Hi Ray,<br>    I have 5 fields and want to display only 1 message 'Please fill all fields' if user left any of field blank. Any help would really be great. One input box is SELECT and rest are just text boxes. Please help</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712734">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712734">65</a> by Raymond Camden
		posted on 2/19/2013 at 9:13 PM
		</div>
		<div class="comment_text"><p>The plugin supports that, but I can't remember the syntax off the top of my head. Please read their documentation for details.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712736">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712736">66</a> by Jai
		posted on 2/19/2013 at 9:17 PM
		</div>
		<div class="comment_text"><p>OK. Thanks for quick reply :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713712739">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713712739">67</a> by Pat
		posted on 7/22/2014 at 5:03 PM
		</div>
		<div class="comment_text"><p>Hello i've problems to get the validation right with a select box.(aantalpers)<br>An input field works fine! (name).</p><p>*Here my code!*</p><p>_*HTML*_<br>&lt;div data-role="content"&gt;	<br>		&lt;form action="retour.php" method="post" id="formretour" name="formretour"&gt;</p><p>                &lt;div data-role="fieldcontain"&gt;<br>        &lt;label for="name" class="name"&gt;&lt;h3&gt;Your Name:&lt;/h3&gt;&lt;/label&gt;<br>        &lt;input type="text" name="name" id="name"class="required"&gt;<br>        &lt;span id="forgetname"class="forgetfilltext"&gt; &lt;/span&gt;<br>        &lt;/div&gt;</p><p>        &lt;div data-role="fieldcontain"&gt;<br>         &lt;h4&gt;How many persons:&lt;/h4&gt;&lt;/br&gt;<br>          &lt;label for="aantalpers" class="select"&gt;&lt;/label&gt;<br>          &lt;select name="aantalpers" id="aantalpers"class="required number" min="1" max="100"&gt;<br>          &lt;option value="0"disabled="disabled"selected="selected"&gt;Select&lt;/option&gt;<br>          &lt;option value="1"&gt;1&lt;/option&gt;<br>            &lt;option value="2"&gt;2&lt;/option&gt;<br>            &lt;option value="3"&gt;3&lt;/option&gt;<br>            &lt;option value="4"&gt;4&lt;/option&gt;<br>            &lt;option value="5"&gt;5&lt;/option&gt;<br>            &lt;option value="6"&gt;6&lt;/option&gt;<br>            &lt;option value="7"&gt;7&lt;/option&gt;<br>            &lt;option value="8"&gt;8&lt;/option&gt;<br>            &lt;option value="9"&gt;9&lt;/option&gt;<br>            &lt;option value="10"&gt;10&lt;/option&gt;<br>            &lt;option value="11"&gt;11&lt;/option&gt;<br>            &lt;option value="12"&gt;12&lt;/option&gt;<br>            &lt;option value="13"&gt;13&lt;/option&gt;<br>            &lt;option value="14"&gt;14&lt;/option&gt;<br>            &lt;option value="15"&gt;15&lt;/option&gt;<br>            &lt;option value="16"&gt;16&lt;/option&gt;<br>          &lt;/select&gt;<br>          &lt;span id="forgetpersons"class="forgetfilltext"&gt; &lt;/span&gt;<br>        &lt;/div&gt;</p><p>_*JQuery*_</p><p>&lt;script&gt;&lt;!-- deze werkt!!! voor een textveld--&gt;<br>$(document).ready(function() {<br>    $("#formretour").submit(function() {<br>        if ($("#name").val() == "") {<br>            $("#forgetname").html("Don't forget to fill in your name!").show();<br>            return false;}	<br>		else{ return true;<br>        }<br>    });<br>});<br>&lt;/script&gt;</p><p>-------------------------</p><p>Anybody knows how to code the select box validation?</p></div>
	</div>
</div>
		