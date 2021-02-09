
<div class="comment" id="c_1713668902">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668902">1</a> by Peter TIlbrook
		posted on 7/22/2007 at 7:39 PM
		</div>
		<div class="comment_text"><p>Boggles me you can write openly about CF8 and no-one seems to be allowed to (NDA and all that).</p><p>They are very useful however and I hope you are on the CFWACK 8 team!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668906">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668906">2</a> by Raymond Camden
		posted on 7/22/2007 at 7:42 PM
		</div>
		<div class="comment_text"><p>Peter - you are aware that you cna download CF8 from Labs, right? It has been open for a while now. You are only disallowed from blogging about what happens in the _internal_ testing program. Everything I've blogged about is open.</p><p>Except - I used toBinary in cfcontent to serve up a PDF. That doesn't work on the labs version. This was a mistake on my part and someone else noted it. I pinged Adobe and they said this was fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668919">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668919">3</a> by Dustin
		posted on 7/23/2007 at 6:43 PM
		</div>
		<div class="comment_text"><p>LOL... I love it: "This space left intentionally blank."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668917">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668917">4</a> by Kurt Look
		posted on 7/23/2007 at 7:26 PM
		</div>
		<div class="comment_text"><p>We'd like to develop a site where we present a blank PDF form to a user, have them fill out the form, then "give" the form back to Cold Fusion for processing.  If errors are detected, alert the user, and give them a chance to edit the form.</p><p>Historically, Adobe has made editing of PDF files possible if you fill the form out and print it, but editing/saving of forms required expensive tools to do.</p><p>Has anything changed in this area?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668918">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668918">5</a> by Raymond Camden
		posted on 7/23/2007 at 8:00 PM
		</div>
		<div class="comment_text"><p>I'm just getting into forms myself. I know CF8 lets you process the form post. But are you saying you want to reshow the form on error and put flags in it? Not quite sure if you could do that. But again - I'm learning this stuff as I post, so I _definitely_ could be wrong.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668916">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668916">6</a> by Kurt Look
		posted on 7/23/2007 at 9:08 PM
		</div>
		<div class="comment_text"><p>Raymond, users come to fill out a regulatory document and submit the document (PDF) to a state agency.  Ideally, the user logs on, picks a PDF to fill out, we pre-fill all the standard stuff we can, then download the PDF to the user's computer/browser to fill out.  The user fills the form out and posts the PDF back to the web site.  We process the filled out form, and either accept it (if filled out properly) or repeat the process with the user (download to computer/browser, re-edit, re-upload) until the form is properly filled out.</p><p>Historically, what has precluded this from happening is that users use Acrobat Reader.  For marketing/licensing reasons, Adobe requires users to have Acrobat to edit forms and save them in this way.</p><p>I'm wondering if, with the tighter integration of CF and PDF files, has Adobe made form editing possible to the masses who use Acrobat Reader, not Acrobat itself.  My guess is no, which means web developers who don't control the client desktop still can't develop around the idea of users filling out PDF files online.  But maybe I'm wrong - that is what lead to my post.</p><p>Kurt</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668920">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668920">7</a> by Raymond Camden
		posted on 7/23/2007 at 9:31 PM
		</div>
		<div class="comment_text"><p>Kurt, by "edit" do you mean fill out the form? I swear I remember filling out forms with just Reader.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668922">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668922">8</a> by Charlie Arehart
		posted on 7/24/2007 at 6:02 AM
		</div>
		<div class="comment_text"><p>This is going a bit far afield from the subject of this post, but Kurt, I think you'll find that CFPDFFORM (also new in CF8) does what you want. While Ray's not written about it yet, you can read about it yourself either by getting the docs (available free at the labs site, click the "product details" tab on the CF page), or via the CFQuickdocs site, which has a new version for CF8. Here's the link directly to the CFPDFFORM tag:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.cfquickdocs.com%2Fcf8%2F%3FgetDoc%3Dcfpdfform%23cfpdfform%3AQE6T885Xrnfsyr4yeX65aOl2ujA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cfquickdocs.com/cf8/?getDoc=cfpdfform#cfpdfform">http://www.cfquickdocs.com/...</a></p><p>And Peter, really, many people are writing openly about CF8 (myself included). Ray's right: beta participants are not to write about anything discussed on the beta forums. Everything else is fair game--and the fact that the docs are so publicly available further testifies to this.</p><p>Still, since so many people never read the docs, blog entries like this are a great way to get people to learn about what's new. There's certainly a LOT in CF8! :-)</p><p>As for CFPDFFORM, I'm sure Ray will be writing about it soon. It'll be a great continuation of this series. Thanks again, Ray.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668926">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668926">9</a> by Charlie Arehart
		posted on 7/31/2007 at 8:34 PM
		</div>
		<div class="comment_text"><p>Hey Ray, great stuff as always, but here's something I've not been able to find an answer to: how can you REMOVE a password? I've not found a way. I've had to open a file protected this way in Acrobat, and set the "file&gt;document properties" to have "no security" for the "security method". Was this just left out in CF8? Or have you heard it was for some reason impossible to do programmatically?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668925">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668925">10</a> by Raymond Camden
		posted on 7/31/2007 at 8:40 PM
		</div>
		<div class="comment_text"><p>I haven't tried this - but did you try providing the old password, and setting new password to ""?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668927">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668927">11</a> by Charlie Arehart
		posted on 7/31/2007 at 8:49 PM
		</div>
		<div class="comment_text"><p>Sorry, should have yes, I'd try that. Thanks for the fast reply! :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668924">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668924">12</a> by Raymond Camden
		posted on 7/31/2007 at 8:51 PM
		</div>
		<div class="comment_text"><p>So wait - did you try it? Or are you saying you will try it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668929">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668929">13</a> by Charlie Arehart
		posted on 8/1/2007 at 2:20 AM
		</div>
		<div class="comment_text"><p>Failure in my english (just typing fast). Meant to use the past perfect participle. :-)</p><p>"I'd *tried* that".</p><p>In other words, no, setting the newOwnerPassword or newUserPassword to the empty string does NOT remove the security setting. Seems a one way trip. :-)</p><p>Would love to hear if anyone learns otherwise. :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668928">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668928">14</a> by Michael White
		posted on 10/9/2007 at 12:45 AM
		</div>
		<div class="comment_text"><p>I downloaded Acrobat 8 Professional for evaluation to try out it's forms creation/conversion features. It seems that with Version 7 and newer you get a separate product bundled (and integrated) with acrobat called LiveCycle Designer. You can click on the forms toolbar and it opens LiveCycle to convert your PDF to a dynamic form (you're no longer in acrobat). then if you want users that only have acrobat reader to fill out the form, save it and submit back to the server you can "distribute" the form using a wizard. This process switches you back to Acrobat to apply security and modify the submit button. I found this to be problematic (it seems to force an email submit), so when I found out what was going on I opened up my dynamic form in Acrobat and from the Advanced menu you can select "Enable Usage Rights in Adobe Reader" which will allow reader-users to save the form all filled out to be submitted or emailed later. Also, it doesn't mess up your submit button.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668930">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668930">15</a> by William Seiter
		posted on 4/11/2008 at 2:31 AM
		</div>
		<div class="comment_text"><p>I am looking into the dynamic password protecting and was wondering two things about it.<br>1- can you set the file to open for the password ONLY IF the date is less than or equal to [whatever I set it]?<br>2- can I restrict the user from 'saving' the file?  [grey out the save button]?</p><p>Thanks in advance</p><p>William</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668932">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668932">16</a> by Raymond Camden
		posted on 4/16/2008 at 12:44 AM
		</div>
		<div class="comment_text"><p>1) I do not think you can do date restrictions. <br>2) Save is not an option as far as I know.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668934">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668934">17</a> by reinhard
		posted on 10/22/2008 at 10:38 PM
		</div>
		<div class="comment_text"><p>hi ray,</p><p>nice article. do you know a way to access a password protected file via cfcontent?</p><p>what i need to do is ...</p><p>deliver a pdf for viewing online (in the browsers window) but when the user downloads the pdf he should not be able to open it (because he doesn't know the password)</p><p>any ideas?</p><p>thx!<br>reinhard</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668936">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668936">18</a> by Raymond Camden
		posted on 10/23/2008 at 1:58 AM
		</div>
		<div class="comment_text"><p>The thing is - if the user is viewing the pdf in their window, they have access to it. Period. (AFAIK) So at that point, it is too late. You can always provide them with a sample, like 1-5 pages, and have the full PDF password protected.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668935">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668935">19</a> by reinhard
		posted on 10/23/2008 at 11:53 AM
		</div>
		<div class="comment_text"><p>that's true. when the pdf is in the browser window the users has access. that is not the problem. i was thinking about finding a way to have the server provide the password for the user but not showing it to the user. so the pdf is opened and displayed when viewed with the browser (cf-app) but it is useless to save the document as the user never actually knew the password, so he can't reopen the pdf when the browser context is not available.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668938">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668938">20</a> by Raymond Camden
		posted on 10/23/2008 at 3:11 PM
		</div>
		<div class="comment_text"><p>I don't think it works that way. Even if it did, once I recognized tht you had had done this, I (the bad guy) would simply cut and paste. Or if you blocked Copy, I'd print screen.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668937">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668937">21</a> by reinhard
		posted on 10/23/2008 at 3:20 PM
		</div>
		<div class="comment_text"><p>cut&amp;paste would be disabled and print screen can't be blocked if something can be viewed. so this is okay.<br>i just need to have a possibility to pass the password to the pdf (programmatically with cf) when viewed with the browser ... any ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713668939">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713668939">22</a> by Raymond Camden
		posted on 10/23/2008 at 3:22 PM
		</div>
		<div class="comment_text"><p>Well you can always remove the password from the pdf using &lt;cfpdf&gt; and then pass that binary data to cfcontent. It would be a bit slow though.</p><p>Note that on my Mac, Firefox never views the PDF in browser. It _always_ downloads it.</p></div>
	</div>
</div>
		