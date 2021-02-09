
<div class="comment" id="c_1713681956">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681956">1</a> by James Moberg
		posted on 6/20/2008 at 2:07 AM
		</div>
		<div class="comment_text"><p>Please identify the ColdFusion requirements as necessary.</p><p>This appears to be a CFMX 8-Only method.  Can this be modified to work with CFMX 6 or 7?  If so, is there any easy way to integrate it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681954">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681954">2</a> by Raymond Camden
		posted on 6/20/2008 at 2:09 AM
		</div>
		<div class="comment_text"><p>Right, this is CF8 only. As far as I know there is no way to do this with CF7.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681957">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681957">3</a> by Casey
		posted on 6/20/2008 at 5:42 AM
		</div>
		<div class="comment_text"><p>Have there been any tests to determine the performance difference with trusted cache enabled/disabled?<br>By the way, the image does not work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681959">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681959">4</a> by Gary Fenton
		posted on 6/20/2008 at 1:00 PM
		</div>
		<div class="comment_text"><p>Thanks Ray, this is a nice solution to the problem. I've been using trusted cache for a couple of years now but found it annoying to clear it every time we have the most minor of code changes. An unsung feature of trusted cache is if you have code changes in multiple files across a few directories and you need to make all changes live at exactly the same time (because of file dependancies) then it's impossible without the use of trusted cache.</p><p>For the past month I've turned off trusted cache and haven't noticed any performance changes. I suspect it's only noticable if your server is running close to its limit, then it may shave a few milliseconds off each request - which adds up if you have lots of requests per second.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681958">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681958">5</a> by Raymond Camden
		posted on 6/20/2008 at 4:44 PM
		</div>
		<div class="comment_text"><p>Casey - Adobe 100% recommends turning this feature on, and I know I've definitely seen improvements when doing it. Fixed the image.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681964">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681964">6</a> by James Moberg
		posted on 6/20/2008 at 6:09 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Is it possible to add a function to "onrequestend.cfm" to take a parameter (URL variable, IP address, browser agent, time window) and then determine which templates were recently used to generate the current page and clear them from the trusted cache?</p><p>If it is possible, would this method be advisable?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681963">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681963">7</a> by Scott P
		posted on 6/20/2008 at 11:51 PM
		</div>
		<div class="comment_text"><p>Adding a pointer to <a href="http://disq.us/url?url=http%3A%2F%2Ftemplatelistener.riaforge.org%2F%3APYRK42HDlV7RGkRBExatUAT_gkE&amp;cuid=3321886" rel="nofollow noopener" title="http://templatelistener.riaforge.org/">http://templatelistener.ria...</a> for those that can use event gateways.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681965">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681965">8</a> by Charlie Arehart
		posted on 6/21/2008 at 6:35 PM
		</div>
		<div class="comment_text"><p>@Casey, there's clearly a performance benefit in that  using trusted cache saves an i/o if a template can be found in the cache. CF then doesn't look to disk to test if the file has changed. When you know it will not, it's a good feature.</p><p>Of course, if the template cache is too small, then the value of having trusted cache enabled may be diminished, as the cache is thrashed removing requests and recompiling them.</p><p>Indeed, when Gary says he experienced no difference by enabling it, I'd wonder if that was the issue (unless it's simply that he didn't have enough requests on his server to notice any benefit from the i/o saved, which may be small per request but would increase in total value with more requests.)</p><p>@James, I don't understand what you're asking. What connection would you expect "recent use" to have on whether templates should be cleared from the cache? All that matters is whether the template has been *edited*, which is why tools that use the filewatcher gateway (as pointed to by Scott P) would be the way to go.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681986">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681986">9</a> by James Moberg
		posted on 6/22/2008 at 4:16 AM
		</div>
		<div class="comment_text"><p>@Charlie, by recently used I meant all templates that were included or accessed in the page request.</p><p>For example if a simple template was updated, it would be nice to be able to pass a parameter or something and have an "onrequestend" function determine which templates were used in the generation of the page and delete them from the trusted cache.  This would save a trip to the CFAdmin and requirement to find the templates that need to be deleted.</p><p>I looked at the solution offered by Scott P and the project states that ColdFusion 8 is a requirement... although I downloaded the project and the readme.txt has installation instructions for CFMX 6 &amp; 7 but doesn't mention 8.  I'm not sure if there a legitimate 8 requirement or whether it will it also work with 6/7.</p><p>I guess what frustrates me the most is reading an article and not knowing whether or not it will work on CFMX 7 because the writer takes it for granted that everyone is using 8.  This has happened a couple of times in other forums and I find myself wasting time attempting to determine why something isn't working only to find that the developer uses new CF-8 only syntax or requires new hidden features not available in 7.  I sometimes spend even more time trying to figure out a work-around to make it work.  Sometimes I'm successful and other times I am not.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681989">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681989">10</a> by Scott P
		posted on 6/22/2008 at 6:56 AM
		</div>
		<div class="comment_text"><p>@James - clearing the cache will work on 7.  The Difference between 7 &amp; 8 is that in 8 you can clear a single or list of files from the cache instead of the whole cache.</p><p>If you are on 7 then you will be stuck with clearing the entire cache - the same as clicking on the clear template cache button in the admin.  You could set the code to do that part for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681991">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681991">11</a> by Raymond Camden
		posted on 6/22/2008 at 3:56 PM
		</div>
		<div class="comment_text"><p>@James - I guess that's my fault - not making it clear it was CF8 only. Although in my defense, the article I linked to clearly said it was cf8 only. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681988">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681988">12</a> by James Moberg
		posted on 6/22/2008 at 5:44 PM
		</div>
		<div class="comment_text"><p>@Scott P - Thanks for the clarification.  I currently have a method exposed in CFMX7 to clear the entire cache and was hoping to find a better way of doing it without having to resort to an upgrade.</p><p>@Ray - I read the linked article and thought that all the magic was in the Admin API and set of CFCs that may have also been possible to work with CFMX7.  I didn't know if this was just a couple of new scripts that were added or if is an internal java update that allows it to do it.  Is it possible that these CF8 CFCs would also work in CFMX7 but are available only in CF8?</p><p>Some organizations I work with remain on CF5 and CFMX6 due to budget constraints and the fact that "it's not broken" and "doesn't need updating."  This requires me to integrate scripts that work across as many versions as possible to ensure that I can upsell new features to them as no new CF8 features that I've mentioned have enticed them to upgrade yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681987">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681987">13</a> by Raymond Camden
		posted on 6/22/2008 at 5:53 PM
		</div>
		<div class="comment_text"><p>Ah, well, in that old article I do say: "Along with cool tags and functions added in ColdFusion 8, there have also been some neat updates to the Admin API." That's pretty clear I'd say. ;) But I shoulda been clear in this post as well. As far as I know you can't use the CF8 cfcs in CF7.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681985">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681985">14</a> by James Moberg
		posted on 6/22/2008 at 6:14 PM
		</div>
		<div class="comment_text"><p>When I initially went through the new tag and function list, some CF8 features seemed like graduated CFTags and functions (that were already available) or internal wrappers for existing javascript libraries like FCKEditor and Ext (which are things I've been doing without the need for CF8.)</p><p>Don't get me wrong, I'm using CF8 too and I know that the upgrade is a lot more than just the inclusion of already existing third-party tags and libraries.  I've been following many of the book, articles  and blogs since CF2/3 and now more than ever I have to filter what I'm reading to determine which version (and potential client) I can actually apply these new tips too.  I really don't recall having to do before as most tips seemed to be CFML-specific and not version or vendor specific.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681993">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681993">15</a> by Charlie Arehart
		posted on 6/23/2008 at 6:50 PM
		</div>
		<div class="comment_text"><p>James, if you need more ammunition for appreciation of what else has changed in CF8, check out my CF8 Hidden Gems presentation: <a href="http://disq.us/url?url=http%3A%2F%2Fcarehart.org%2Fpresentations%2F%23cf8gems%3A-EBwRhBK4j5KM-rLl_sxO8HSpLs&amp;cuid=3321886" rel="nofollow noopener" title="http://carehart.org/presentations/#cf8gems">http://carehart.org/present...</a></p><p>There are several dozen small (and some important) changes beyond the big things you hear talked about all the time.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681990">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681990">16</a> by Barbara ONeal
		posted on 7/13/2008 at 12:57 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I downloaded and placed the code on my server.  I just ran inot an issue where is does't actually remove any of the class files.  If i put in an individual file it says that it is going to clear it.  But it still exist in the directory.  So i thought hmmm  i will just do the entire direcotry.  Well that didn't work either. For example:  C:\JRun4\servers\cfusion\cfusion-ear\cfusion-war\WEB-INF\cfclasses  then select clear file/folder  It doesn't throw an error it just doesn't do anything.</p><p>Ideas?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681995">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681995">17</a> by Raymond Camden
		posted on 7/14/2008 at 6:10 AM
		</div>
		<div class="comment_text"><p>I think you misunderstand what this tool does. It does not delete the class files. When you turn on trusted cache, CF stops checking a CFM file to see if it has been updated and needs to be compiled again.</p><p>This utility doesn't clear the class files. Instead, it tells CF, "Hey, for these files, you need to check them on next execution to see if they need rebuilding."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681994">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681994">18</a> by Yaron Kohn
		posted on 11/11/2008 at 12:48 AM
		</div>
		<div class="comment_text"><p>Love this tool...thanks Ray...<br>I would suggest adding this line of code to the bottom of the page....It sets the "Last Page Visited" cookie like all the other admin pages.</p><p>&lt;cfset cookie.CFADMIN_LASTPAGE_ADMIN = cgi.SCRIPT_NAME&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682002">19</a> by Raymond Camden
		posted on 11/11/2008 at 12:56 AM
		</div>
		<div class="comment_text"><p>Yaron, thank you for this tip! This application here doesn't have a proper RIAForge project I think so folks tend to forget about it, but I may correct that. I'm also going to add this to SpoolMail. I also have a Verity tester CF Admin plugin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681998">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681998">20</a> by Charlie Arehart
		posted on 1/24/2009 at 8:52 AM
		</div>
		<div class="comment_text"><p>Hey Ray, you mentioned in a comment here a couple of months ago that you might create a riaforge project from the cache clear/filewatcher combo. Did you ever get to? I didn't want to try to search fearing I may not use the right terms and figured folks would love to hear if you did.</p><p>Also, I would think this is a feature set that should be built into CF (or at least an admin interface to point to templates to clear manually). Have you made either suggestion as a feature request? It may be considered for Centaur, which would be awesome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681997">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681997">21</a> by Raymond Camden
		posted on 1/24/2009 at 8:41 PM
		</div>
		<div class="comment_text"><p>Nope, I did not make a RIAForge project out of it. Think its worth it?</p><p>I did file an enhancement request for this with Adobe (like 2 mins ago).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681999">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681999">22</a> by Charlie Arehart
		posted on 1/24/2009 at 9:05 PM
		</div>
		<div class="comment_text"><p>Well, I definitely think it's worth a project. Otherwise only those who find this entry and the other will know of it. It's just an awesome solution to an important problem (for those who recognize it, at least.)</p><p>Really great to hear you've requested it of Adobe. Of course, if it gets in then one could argue that the need of a project is diminished, but since 9 is still in the future, and even then many may remain on 8 who would benefit, it seems worth it, sure.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682001">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682001">23</a> by Raymond Camden
		posted on 1/24/2009 at 10:39 PM
		</div>
		<div class="comment_text"><p>Alright, I'll look into it. I do see some benefit of just making it easier to find. Although I hope people are also using my CF Admin Extensions Guide: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldfusionjedi.com%2Fpage.cfm%2FGuide-to-ColdFusion-Administrator-Extensions%3AlUr1COruMlWiA_HUTOIUBSgBHTo&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldfusionjedi.com/page.cfm/Guide-to-ColdFusion-Administrator-Extensions">http://www.coldfusionjedi.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682000">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682000">24</a> by Eric P
		posted on 3/24/2009 at 8:57 PM
		</div>
		<div class="comment_text"><p>Hi, thanks a lot for this info.  I've modified the extension a bit (to accept a list of files) and it's working great.</p><p>Is anyone aware of a way to check the state of the trusted cache toggle?  I thought it'd be cool to deactivate the 'cache clearer' form when the trusted cache is toggled off.</p><p>Thanks again,<br>Eric P</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713681996">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713681996">25</a> by Raymond Camden
		posted on 3/25/2009 at 1:29 AM
		</div>
		<div class="comment_text"><p>I think supporting a list of files would be nice. I normally just enter a directory, but a list would be cool. Send me your mod.</p><p>You can tell if the trusted cache is on with the Admin API. It may be cool to add that to my tool as a flag. "Are you sure you want to clear cache? Trusted cache isn't even turned on, Bozo."</p><p>Shall I add that?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682003">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682003">26</a> by Eric P
		posted on 3/31/2009 at 4:40 AM
		</div>
		<div class="comment_text"><p>Sent via your Contact Me form.</p><p>By the way where is the Admin API documented?</p><p>Thanks,<br>Eric P</p><p>Ps. the lucky captcha I got to type was 'die'.  (*shiver*)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682005">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682005">27</a> by Raymond Camden
		posted on 3/31/2009 at 4:49 AM
		</div>
		<div class="comment_text"><p>In the developer's guide I believe - although not every single method. If you view the CFC in your browser, you can see a list of methods. (Don't forget you can open a CFC in your browser to see automatically generated documentation.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682004">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682004">28</a> by Raymond Camden
		posted on 4/2/2009 at 10:33 PM
		</div>
		<div class="comment_text"><p>Live: <a href="http://disq.us/url?url=http%3A%2F%2Fcacheclearer.riaforge.org%3AdvxvER41U4tGoIq0fjEMaNTBWOg&amp;cuid=3321886" rel="nofollow noopener" title="http://cacheclearer.riaforge.org">http://cacheclearer.riaforg...</a></p><p>I'll update the link in my guide soon.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682006">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682006">29</a> by Raymond Camden
		posted on 4/2/2009 at 10:35 PM
		</div>
		<div class="comment_text"><p>Make that:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fcacheclearer.riaforge.org%3AdvxvER41U4tGoIq0fjEMaNTBWOg&amp;cuid=3321886" rel="nofollow noopener" title="http://cacheclearer.riaforge.org">http://cacheclearer.riaforg...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682007">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682007">30</a> by Vad
		posted on 9/16/2009 at 3:10 PM
		</div>
		<div class="comment_text"><p>I am using CFMX and there is an issue (variable "yy" is undefined in "yyfiling")thats a show stopper , on the production.</p><p>I am promoting corrections to it but they do not seem to show up on the server.</p><p>I want to resort to clearing the Server cache so that my promoted code can take effect.</p><p>The CFAdmin production template was cached (Trusted Cache turned on). so wanna turn it off Trusted Cache and clear template cache.</p><p>So was wondering it will effect the main site? <br>ANY PRECAUTIONS, as this is for a production server?</p><p>Thanks <br>-Vad</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682009">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682009">31</a> by Raymond Camden
		posted on 9/16/2009 at 3:45 PM
		</div>
		<div class="comment_text"><p>Does it really say yy in yyfling? That doesn't sound like my code. As it stands, I'm not sure if MX had the Admin API setting for this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682010">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682010">32</a> by Vad
		posted on 9/16/2009 at 3:59 PM
		</div>
		<div class="comment_text"><p>I am sorry to be out of context here, but i want to ask a general question.<br>Is what are the precautions to be mad if at all the server cache is to be cleared on CFMX admin?esp a production server.</p><p>I have the detailed issue i faced over here.<br><a href="http://disq.us/url?url=http%3A%2F%2Fstackoverflow.com%2Fquestions%2F1429368%2Felement-variable-yyfiling-dtregi160da-is-undefined-in-yywe%3AdJPzdNnRZPocqTVRF91UKFU3hJU&amp;cuid=3321886" rel="nofollow noopener" title="http://stackoverflow.com/questions/1429368/element-variable-yyfiling-dtregi160da-is-undefined-in-yywe">http://stackoverflow.com/qu...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682013">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682013">33</a> by Raymond Camden
		posted on 9/16/2009 at 4:01 PM
		</div>
		<div class="comment_text"><p>If by server cache you mean the Server scope, then none. The cache clearing here just refers to the CFM cache.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682012">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682012">34</a> by Vad
		posted on 9/16/2009 at 4:53 PM
		</div>
		<div class="comment_text"><p>Thanks a lot.</p><p>I meant in CFAdmin/cache/templated cache</p><p>I think the template was cached (Trusted Cache turned on),<br>So I want to turn off Trusted Cache and clear template cache.</p><p>As it is Live,  wanted to know if any precautions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682014">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682014">35</a> by Raymond Camden
		posted on 9/16/2009 at 5:18 PM
		</div>
		<div class="comment_text"><p>The only real concern is that your next few hits will be a bit slow since has to re-cache stuff.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682016">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682016">36</a> by Vad
		posted on 9/16/2009 at 5:33 PM
		</div>
		<div class="comment_text"><p>In this case....<br>The form fields were in  saved  session variables and then stored in a SAVED form.<br>My error was in opening the saved form.<br>I corrected it and pushed the code.<br>So was hitting on the last option as to turn off Trusted Cache and clear template cache.</p><p>Now would the SAVED forms with the old session-id be gone?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682015">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682015">37</a> by Matt
		posted on 5/18/2011 at 5:09 AM
		</div>
		<div class="comment_text"><p>Thanks for this Ray.</p><p>I have my dev and live sites on the same box and would love to have the best of both worlds... trusted caching for the live site but non-cached templates on the dev.  Do you have any ideas on how I could accomplish this without going to a dedicated dev server?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682017">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682017">38</a> by Yaron Kohn
		posted on 5/18/2011 at 5:21 AM
		</div>
		<div class="comment_text"><p>You can create an additional CF instance for dev and leave template caching off. (This only applies to a multi CF installation)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682018">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682018">39</a> by Raymond Camden
		posted on 5/18/2011 at 6:20 AM
		</div>
		<div class="comment_text"><p>@Matt: Yaron answered, but let me just add - I strongly urge you not to run dev and production on the same physical box. Remember - ColdFusion is free for your dev server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682085">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682085">40</a> by Hal Dunithan
		posted on 12/17/2011 at 2:09 AM
		</div>
		<div class="comment_text"><p>Hey Ray,</p><p>How can I make the CacheClearer custom menu option available in CFAdmin for my team without giving them full admin access?  I've allowed them Console &amp; API with the roles "Debugging &amp; Logging &gt; Logging" and "Server Settings &gt; Settings Summary" but the custom menu generates a forbidden message when they attempt to run it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682082">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682082">41</a> by Raymond Camden
		posted on 12/17/2011 at 6:50 AM
		</div>
		<div class="comment_text"><p>Unfortunately, you can't. I'd just use the code _outside_ of the CF Administrator.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682083">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682083">42</a> by Matt
		posted on 9/17/2012 at 5:00 AM
		</div>
		<div class="comment_text"><p>I'm trying to use it outside of my Administrator and it doesn't seem to be working.</p><p>I'd love to be able to add this to the root of my test sites so developers can flush when they need to without having Admin access.</p><p>Thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713682095">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713682095">43</a> by Raymond Camden
		posted on 9/17/2012 at 10:44 PM
		</div>
		<div class="comment_text"><p>Are the calls to the Admin API not working?</p></div>
	</div>
</div>
		