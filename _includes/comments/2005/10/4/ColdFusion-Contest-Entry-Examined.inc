
<div class="comment" id="c_1713621174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621174">1</a> by Brian Kotek
		posted on 10/4/2005 at 11:53 PM
		</div>
		<div class="comment_text"><p>Ray, your thoughts on this? It's been mentioned by folks like Sean Corfield that we shouldn't rely on the CGI scope as the implementation varies between web servers. It's better to get info like the path to the current page directly from CF using something like #getPageContext().getRequest().getServletPath()#.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621177">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621177">2</a> by Daniel D
		posted on 10/5/2005 at 12:28 AM
		</div>
		<div class="comment_text"><p>Allong with your security comment on not using hidden fields to hold the actual values.  The code should validate type of data being entered.  It allows entry of any lenght of text and does not validate that it is a number.  This allow the user to enter any thing they want from text.  Try "Z"  or "."  these do not error but are accepted.  You can also include HTML or Javascript in the box.  The fact that Javascript can be passed and is displayed back on the page makes it a possibly large security issue.  The validation should probably happen both on the client sice for best user experince and server side for full security.  Adding type="integer" to the cfparam for guess and adding change the form to cfform and add validate="range"  range="1,100" to only allow a valid guess.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621175">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621175">3</a> by Raymond Camden
		posted on 10/5/2005 at 12:28 AM
		</div>
		<div class="comment_text"><p>Thats interesting. I hate to disagree with Sean. ;) I'm of two minds here. On one hand, I see his point. On the other hand, this is the kind of thing where I'd be _shocked_ to see it break at any point in the future. Something like script_name, at least over IIS, Apache, and even CF's built in web server, seems pretty standard. Good point Brian. I'll have to think more about it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621179">4</a> by Raymond Camden
		posted on 10/5/2005 at 12:29 AM
		</div>
		<div class="comment_text"><p>Good point Daniel.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621176">5</a> by Barneyb
		posted on 10/5/2005 at 12:42 AM
		</div>
		<div class="comment_text"><p>I have to back up Brian here, though for a different reason.  If you've got CF deployed to a context root other than "/", cgi.script_name will return an invalid page, since it (according to the J2EE spec), returns a path relative to the context root of the application, not the web site itself.  So if I deploy CF at /cfusion, and then request /cfusion/mypage.cfm, cgi.script_name will contain /mypage.cfm, which is clearly not a valid path for subsequent requests.  Ironically, the getFileFromPath(getCurrentTemplatePath()) method doesn't have this problem.    If you need to get a domain-relative path to your current template, you ought to hit the underlying servlet context as Brian illustrated, though he's missing the critical part:</p><p>[cfset req = getPageContext().getRequest() /]<br>[cfset thispage = "#req.getContextPath()##req.getServletPath()#" /]</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621178">6</a> by Raymond Camden
		posted on 10/5/2005 at 12:55 AM
		</div>
		<div class="comment_text"><p>Barney - good point. I didn't realize that. I'm going to update the main entry to point this out and tell folks to read your comment.</p><p>I _knew_ if I wrote a post pointing out mistakes I'd make my own. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621182">7</a> by Raymond Camden
		posted on 10/5/2005 at 1:00 AM
		</div>
		<div class="comment_text"><p>Barney, I've edited the post. Let me know what you think, and thanks for "schooling" me. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621180">8</a> by Barneyb
		posted on 10/5/2005 at 1:06 AM
		</div>
		<div class="comment_text"><p>Looks good to me; glad to help out.  I've become a bit of a nazi about that particular thing, because for a while I was developing on a different context root (actually, several different roots) than I was deploying.  You can get some really weird behaviour when you're switching context roots in the middle of testing a workflow, which is all to easy if you've got both "/" and "/cfusion" roots.  ;)  Easier to just do it the 'right' way all the time, even though the vast majority of apps won't ever run on a context root other than "/".</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621185">9</a> by J.J. Merrick
		posted on 10/5/2005 at 1:23 AM
		</div>
		<div class="comment_text"><p>::sniff:: our boy Andy is all grown up now! :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621181">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621181">10</a> by tof
		posted on 10/5/2005 at 12:43 PM
		</div>
		<div class="comment_text"><p>Hey guys,</p><p>I'm a beginner myself but I'd change a few things anyway :-).<br>- You should always initialize the random engine whenever using a random function<br>- why have <br>   &lt;cfif&gt;<br>   &lt;cfelse&gt;<br>      &lt;cfif&gt;<br>      &lt;cfelseif&gt;<br>      &lt;/cfif&gt;<br>   &lt;/cfif&gt;<br>instead of a standard  &lt;cfif&gt;&lt;cfelseif&gt;&lt;cfelse&gt;&lt;/cfif&gt; ?</p><p>-instead of FORM.guess IS NOT "", use len(form.guess), it just looks nicer :-)<br>-why is there a submit and a button, instead of 2 submits ?</p><p>And that's all, correct me if I'm wrong :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621183">11</a> by Andy Matthews
		posted on 10/5/2005 at 4:02 PM
		</div>
		<div class="comment_text"><p>Raymond...</p><p>Thank you for examining my code. You noticed some things that I didn't think about, but also commented on some things that I left out purposefully.</p><p>I intentionally didn't store the information in session variables because in this case, I didn't want to have to enable them via an application.cfm file, and frankly, I liked the elegance of just one page.</p><p>Also, i never use the VARIABLES scope either. I only did it this time because I thought you'd comment on it if I DIDN'T. So that's funny. I will pay more attention to consistency in scoping though so thank you for pointing that out.</p><p>About the #thispage# variable, I spent quite a bit of time playing with functions and cgi variables to get what I wanted. I only wanted that variable to return the actual filename. Then I would never have to fiddle with trimming out other stuff from it and it will always work as is. That goes in every application file I use, it's so handy.</p><p>Thanks for pointing out the ListAppend function. There are LOTS of cases where I use my manual method so ListAppend will be much better solution!</p><p>Some of the people in my Nashville CFUG pointed out the form security issue as well. Note that I would never store important information like this in a form field in a real life situation. They also pointed out that I should have hidden the form once the person won.</p><p>All in all, I appreciate you looking over my code. I learned a few things, and maybe other's will to.</p><p>Shout outs to the Nashville CFUG (<a href="http://disq.us/url?url=http%3A%2F%2Fwww.ncfug.com%3Ap4HIbqFsi9dsWqnOzNgqikuPGx0&amp;cuid=3321886" rel="nofollow noopener" title="www.ncfug.com">www.ncfug.com</a>).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621186">12</a> by Andy Matthews
		posted on 10/5/2005 at 4:05 PM
		</div>
		<div class="comment_text"><p>Tof...</p><p>The reason there is a submit and a button is that the "take a guess" submits the form, which triggers some code, whereas the "try again" button simply restarts the game.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621187">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621187">13</a> by Raymond Camden
		posted on 10/5/2005 at 4:08 PM
		</div>
		<div class="comment_text"><p>Andy, thanks for being a good sport. Please note that I wasn't saying your lack of session vars was a mistake per se. I agree with your design decision there. Also note - "my" feelings on the use of Variables. is probably NOT in the majority. My format is - use scoping for ALL scopes except variables. Many people are more strict and use scoping for ALL scopes period.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621188">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621188">14</a> by Patrick McElhaney
		posted on 10/5/2005 at 5:12 PM
		</div>
		<div class="comment_text"><p>Great post, Ray. Very well done. Kudos to you too, Andy. I like the simplicity of keeping everything in hidden fields.</p><p>After you've reviewed all of the entries I think you should have another contest for advanced CF programmers. Tell them to write the code as if someone's life depended on it. I'd love to see those programs picked apart. <a href="http://disq.us/url?url=http%3A%2F%2FDepressedPress.com%3Ayvf1DODcghQUaIsehujLL6tu0sg&amp;cuid=3321886" rel="nofollow noopener" title="DepressedPress.com">DepressedPress.com</a> used to have contests to see who could write the fastest algothims for things like sorting a query. It was a lot of fun and a great learning experience.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713621184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713621184">15</a> by Raymond Camden
		posted on 10/5/2005 at 5:14 PM
		</div>
		<div class="comment_text"><p>The response I had was great, so I definitely plan on going on. The next contest will be for intermediate programmers. I will then followup with an advanced contest.</p></div>
	</div>
</div>
		