
<div class="comment" id="c_1713734669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734669">1</a> by Donny
		posted on 8/12/2011 at 11:48 PM
		</div>
		<div class="comment_text"><p>Thanks . . its been a while since I had to do this . .great refresher!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734668">2</a> by Michael G. Workman
		posted on 8/13/2011 at 12:57 AM
		</div>
		<div class="comment_text"><p>Thats a good example of using a self posting form to generate a pdf document and mail it. One thing I also do is use the name attribute on the submit button, but I differ in that I reference it as FORM.Submit, then you can process the form submit with an if statement like &lt;cfif FORM.Submit eq "Create PDF"&gt;, I use this often, and also you can have more than one submit button to process different methods of processing the form.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734655">3</a> by Ian Finch
		posted on 8/13/2011 at 3:07 AM
		</div>
		<div class="comment_text"><p>Another way to do this would be to grab the entire innerHTML of the ORIGINAL form in Javascript and use an Ajax request to handle the PDF creation / emailing. This could work nicely as a generic and reusable function  that uses the on-screen formatting as-is. Saves having to re-do the form at the back end. You could perhaps just top and tail it and grab/validate the email address.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734670">4</a> by Chris Bowyer
		posted on 8/13/2011 at 3:08 AM
		</div>
		<div class="comment_text"><p>@ Ray</p><p>As usual, you have thrown my well planned day out of schedule - by tickling my never ending thirst for new knowledge about ColdFusion :)</p><p>I have never had need to create and add a PDF document as a mail attachment, but due to a conversation with another developer yesterday, in particular about PDF document creation, I was already well primed for this article.</p><p>Just a couple of things:</p><p>1/. There is no need to use the cfmailparam 'disposition' attribute, with a value of 'attachment' in your example, because it is the default value and works fine without it. Of course, it does no harm using it, but I have a pet hate of using things unnecessarily :)</p><p>2/. I was a bit confused by what initially looked like you 'Request' scoping the cfmailparam 'file' attribute value. I eventually realised that 'request.pdf' was just the file name, it would have been clearer if named order_request.pdf. I also discovered that it could be just named order_request without the .pdf, as that is covered by the 'type' attribute value, and that if I put whitespace in the file name i.e. 'order request', ColdFusion would name it with an incrementing (each send), alpha prefixed file number i.e. ATT12345.pdf</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734667">5</a> by Raymond Camden
		posted on 8/13/2011 at 5:37 AM
		</div>
		<div class="comment_text"><p>+Chris:<br>So using filename="x" would create an attachment called x.pdf? You sure? Even if it worked, I just feel better supplying a complete filename. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734671">6</a> by Raymond Camden
		posted on 8/13/2011 at 5:39 AM
		</div>
		<div class="comment_text"><p>+Michael G Workman: I did use the name of the form button. What you mean - if I may paraphrase you - is that you use the _value_ of the button to allow for multiple types of actions for the form. That certainly makes sense, but for a form with one action, it's simpler to just check for the existence. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734673">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734673">7</a> by Chris Bowyer
		posted on 8/13/2011 at 9:15 AM
		</div>
		<div class="comment_text"><p>@ Ray</p><p>Re: So using filename="x" would create an attachment called x.pdf? You sure?</p><p>Absolutely. Double checked this. Mind you, it seems this is just a case of ColdFusion being lenient because there is binary data for content.</p><p>The Adobe documentation is basically correct, but easily misinterpreted...</p><p>Attaches a file in a message. Mutually exclusive with name attribute. The file is MIME encoded before sending.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734674">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734674">8</a> by Raymond Camden
		posted on 8/13/2011 at 4:55 PM
		</div>
		<div class="comment_text"><p>To be clear, I'm aware it is mutually exclusive with name, and the point of it in general, which is why I used it, but I was not aware that leaving the extension off the file name would force CF to add it. I still say you should just go ahead and supply it to be safe .</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734675">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734675">9</a> by Craig Inman
		posted on 8/13/2011 at 7:56 PM
		</div>
		<div class="comment_text"><p>Ray, I have a required real estate form that looks like it was created by un-trained monkeys. I am definitely going to create a form to populate the PDF. My plan is to populate the PDF and post the information to a database for use later and in other forms. Can that be done with one web form?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734677">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734677">10</a> by Raymond Camden
		posted on 8/13/2011 at 8:29 PM
		</div>
		<div class="comment_text"><p>As far as I know, yes. I've not done form population in a PDF with CF, but it can be done with cfpdfform. You can take the same data and save it to the db too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734678">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734678">11</a> by Wilma Warchol
		posted on 8/13/2011 at 10:28 PM
		</div>
		<div class="comment_text"><p>What happens with the pdf if the email doesn't get sent right away? We use external mail servers (exchange or another hosted option) and if an email can't be sent and gets saved in the undelivr folder we move it back to the spool folder to try again. Will the email refer to a temporary object properly?</p><p>On my sites attachments are always saved to the server so that when it gets re-sent the file location is clear. If need be the email then can also have a link to the attachment on the server if need be.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734676">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734676">12</a> by Raymond Camden
		posted on 8/13/2011 at 11:35 PM
		</div>
		<div class="comment_text"><p>That's what I'm seeing here on my laptop. The mail was left in the Undeliver folder and the tmp file still exists. I assume not forever though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734679">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734679">13</a> by Indy Griffiths
		posted on 8/20/2011 at 9:32 AM
		</div>
		<div class="comment_text"><p>I've spent hours trying to get this to work, but every time it tries to generate the PDF, the page will timeout. Even a very basic cfdocument will throw this error: 503 Request timed out waiting to execute.</p><p>Could this have something to do with me running the Developer Edition of CF?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734654">14</a> by Chris Bowyer
		posted on 8/20/2011 at 9:58 AM
		</div>
		<div class="comment_text"><p>@Indy</p><p>The developer edition works fine with this. Other than that, I don't know what is causing your problem</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734672">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734672">15</a> by Raymond Camden
		posted on 8/20/2011 at 3:58 PM
		</div>
		<div class="comment_text"><p>Try turning off the cfdocument and see if it helps. You will get an error trying to email it obviously, but see if it gets there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734681">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734681">16</a> by Indy Griffiths
		posted on 8/21/2011 at 10:06 AM
		</div>
		<div class="comment_text"><p>A simple cfmail will work perfectly, it's only the cfdocument that fails.</p><p>Something as simple as this will cause a timeout<br>&lt;cfdocument format="pdf" name="tester"&gt;<br>&lt;cfoutput&gt;<br>Hello #name#<br>&lt;/cfoutput&gt;<br>&lt;/cfdocument&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713734680">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713734680">17</a> by Chris Bowyer
		posted on 8/21/2011 at 10:28 AM
		</div>
		<div class="comment_text"><p>@Indy</p><p>Have you tried running cfdocument on its own?</p><p>&lt;cfset name = "Indy"&gt;</p><p>&lt;cfdocument format="pdf" name="tester"&gt;<br>&lt;cfoutput&gt;<br>Hello #name#<br>&lt;/cfoutput&gt;<br>&lt;/cfdocument&gt;</p><p>&lt;cfdump var="#tester#"&gt;</p></div>
	</div>
</div>
		