
<div class="comment" id="c_1713722227">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722227">1</a> by Donnie Bachan
		posted on 2/28/2010 at 5:15 AM
		</div>
		<div class="comment_text"><p>Thanks for this Ray, I've just started working with FW/1 myself. I have not been much of a frameworks supporter since Fusebox went past version 2, however I do like the convention over configuration paradigm alot and from what I've seen so far with FW/1 it's going to save me a lot of time for certain implementations.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722229">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722229">2</a> by CFer
		posted on 2/28/2010 at 7:50 AM
		</div>
		<div class="comment_text"><p>Ray - Have you worked with CFRails? I lost my virginity to frameworks recently (with FW/1) and after a quick scan of CFRails, it seems to be pretty simple too and was thinking of going to the next level. So, if you or any of the viewers/commenters have feedback, please let me know. I dont think I am quite ready for beans yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722236">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722236">3</a> by Rob Cawte
		posted on 2/28/2010 at 9:56 AM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Great to see you jumping in to FW/1.</p><p>I installed your app on Apache/CF9 a Mac and PC, but in both cases running it gives me an error stating:</p><p>Exception in</p><p>An association from the table answer refers to an unmapped class:</p><p>(org.hibernate.MappingException)</p><p>This is followed by a cfdump with about 60 recursive instances of the same error.   No tables are created.</p><p>It seems you are using coldspring in this app, although it is not mentioned in your post - is this a dependency? .... I thought this might be the issue, but already have a CF Mapping to a coldspring install.</p><p>Any idea what I am doing wrong?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722233">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722233">4</a> by Ben Riordan
		posted on 2/28/2010 at 10:54 AM
		</div>
		<div class="comment_text"><p>@ CFer ~ Have you tried CFWheels? <a href="http://disq.us/url?url=http%3A%2F%2Fcfwheels.org%3Aj-CFAyknxhkGlxa_-TcAIqH2i44&amp;cuid=3321886" rel="nofollow noopener" title="http://cfwheels.org">http://cfwheels.org</a><br>I assume you are referring to <a href="http://disq.us/url?url=http%3A%2F%2Fcfrails.riaforge.org%3Ai8784uVXLGnaEl5JODiDw0G1XT0&amp;cuid=3321886" rel="nofollow noopener" title="http://cfrails.riaforge.org">http://cfrails.riaforge.org</a> in your post? I haven't tried that. I'll take a look at it.</p><p>~ Ben</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722232">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722232">5</a> by CFer
		posted on 2/28/2010 at 11:40 AM
		</div>
		<div class="comment_text"><p>@Ben - No, I haven't tried CFWheels yet. I started going through it a few days back and then stumbled upon the <a href="http://disq.us/url?url=http%3A%2F%2Fcfrails.riaforge.org%3Ai8784uVXLGnaEl5JODiDw0G1XT0&amp;cuid=3321886" rel="nofollow noopener" title="http://cfrails.riaforge.org">http://cfrails.riaforge.org</a> and it looked like simpler but it didn't register that they were both Rails related frameworks. I need to research what the differences are between the two.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722238">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722238">6</a> by Andreas Schuldhaus
		posted on 2/28/2010 at 6:05 PM
		</div>
		<div class="comment_text"><p>I became a fan of FW/1 recently and I want to thank you for sharing another useful sample application making use of this new kid on the framework block.</p><p>I ran into the same problem as @Rob. This seems to happen, when running the app in a subdirectory below webroot. Doing a quick-fix by removing the "model." prefix in answer.cfc and question.cfm (many-to-many properties cfc=)  brought up another ORM error. Hibernate did not like the dbdefault="false" entry for property selectedanswer, when creating the tables for the first time (applies to both derby and ms-sql). Replacing false with 0 did the trick - and voila. Ready for playing around with the app.</p><p>BTW: I didn't check whether my above changes would break the application when running in webroot, was too busy trying out the features ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722237">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722237">7</a> by Raymond Camden
		posted on 2/28/2010 at 6:41 PM
		</div>
		<div class="comment_text"><p>@CFer: I have not looked at CFRails yet.</p><p>@Rob: Should be fixed now - get latest download.</p><p>@Andreas: Thank you for your tips. I changed the relationships to just point to each other directly, no model.x. I've had issues w/ orm before where things will get cached and a full CF restart is necessary for CF to recognize that something exists in a new place. Anyway, the code has been updated.</p><p>I also documented the need for ColdSpring. Totally forgot about that and I assumed everyone used it. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722234">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722234">8</a> by Rob Cawte
		posted on 3/1/2010 at 7:42 AM
		</div>
		<div class="comment_text"><p>Thanks Ray... working fine now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722235">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722235">9</a> by Nando
		posted on 3/3/2010 at 7:05 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Thanks much for the example app! I've learned a few very interesting things studying it. A question for the QBall, if you have a moment.</p><p>What's the advantage of using an ORM style query? Or is it more that you're just trying it out?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722230">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722230">10</a> by Raymond Camden
		posted on 3/3/2010 at 7:35 PM
		</div>
		<div class="comment_text"><p>I want to be clear - when you say "ORM style query" do you mean ORM in general, or HQL?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722231">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722231">11</a> by Nando
		posted on 3/4/2010 at 1:25 PM
		</div>
		<div class="comment_text"><p>HQL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722239">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722239">12</a> by Raymond Camden
		posted on 3/4/2010 at 5:10 PM
		</div>
		<div class="comment_text"><p>To over simplify things, there are 2 main ways to fetch data. entityLoad and ormExecuteQuery. entyityLoad lets you filter the data, ie, all people with gender="F", but it doesn't let you _search_, ie, all people who have a name like '%ray%'. So one reason to use HQL is for searches. Also, HQL allows for more complex filtering than what you can do with entityLoad.</p><p>Typically - I use entityLoadByPk to get one record, entityLoad to get them all, and ormExecuteQuery when I'm doing _any_ type of filtering.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722240">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722240">13</a> by Nando
		posted on 3/4/2010 at 7:46 PM
		</div>
		<div class="comment_text"><p>Thanks for the comments Ray. As often, you're a CF pioneer.</p><p>Why ormExecuteQuery instead of SQL within the familiar cfquery tag ... could be you're simply sharpening your skillset, could also be that there's another motivation.</p><p>?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722241">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722241">14</a> by Raymond Camden
		posted on 3/4/2010 at 7:51 PM
		</div>
		<div class="comment_text"><p>Before I say anymore, let me stress. I am an ORM newbie. I have one large ORM app under my belt (Picard, not yet released), but I"m still fumbling around this area like everyone else. I look at it like CFCs. When CFCs first came out, the way I used them is FAR different than how I use them now.</p><p>So in another words, if what I say makes sense now, I reserve the right to come back later and say it was dumb. ;) I also HIGHLY encourage folks to argue with me here as I definitely am NOT the "Jedi" of this.</p><p>So why HQL and not a regular CFQUERY? I feel like if I'm using Hibernate to manage my DB interactions, then I should strive to always do that. So HQL to me makes the most sense. I'm basically being consistent with the framework I use to access and work with my data.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722245">15</a> by Nando
		posted on 3/9/2010 at 2:19 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Have you figured out how to set values to null using CF Hibernate like you can with a cfqueryparam? eg:</p><p>cfqueryparam <br>value="#arguments.getEndTime()#"<br>cfsqltype="cf_sql_datetime" null="#NOT<br>isDate(arguments.getEndTime())#"</p><p>I don't find anything in the docs ...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722249">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722249">16</a> by Raymond Camden
		posted on 3/9/2010 at 2:40 AM
		</div>
		<div class="comment_text"><p>Can't you just use</p><p>ob.setFoo(javaCast("null",""))</p><p>?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722254">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722254">17</a> by Nando
		posted on 3/9/2010 at 5:19 PM
		</div>
		<div class="comment_text"><p>That works wonderfully Ray. Thanks. I'm in the middle of catching up after many months away from CF, so some of these details I just haven't absorbed yet. I was somehow expecting and searching for a native CF function to set a null value, along the lines of the new isNull() function, but couldn't find it. It's amazing how quickly things have progressed.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722257">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722257">18</a> by Joe Mastroianni
		posted on 5/11/2010 at 4:58 PM
		</div>
		<div class="comment_text"><p>Ray Thanks for the javaCast example. I was scouring the web looking for how to set a null value in CF9 ORM. Why isn't this in the Adobe docs!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722250">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722250">19</a> by sanoop
		posted on 8/28/2010 at 3:48 PM
		</div>
		<div class="comment_text"><p>@Ray<br>Good to see you on FW/1. After seeing QBall code I am able to explore Framework-one :)</p><p>Thank you so much</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722251">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722251">20</a> by aprian
		posted on 6/23/2011 at 3:21 AM
		</div>
		<div class="comment_text"><p>Hey Ray, I'm trying to learn fw/1. I think it easier for me to learn when there's a sample of code like this. You posted that this sample application can be downloaded, but i didn't found the link. Where can i download this?</p><p>Thanks for sharing Ray ... :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722262">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722262">21</a> by Raymond Camden
		posted on 6/23/2011 at 5:03 AM
		</div>
		<div class="comment_text"><p>At the end of the blog entry look for the download link.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722248">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722248">22</a> by aprian
		posted on 6/25/2011 at 2:17 AM
		</div>
		<div class="comment_text"><p>ah there they are, i found it. Thx ray .. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722247">23</a> by dehian
		posted on 2/27/2012 at 6:46 PM
		</div>
		<div class="comment_text"><p>Hi ray,</p><p>i have a problem with you sample app on cf 9.0.1 (with a apache derby embeded database)<br>when trying to "register" in qball i get errors:<br>1)no file views.main.error caused by #2<br>2)data undefined in rc</p><p>what could be the problem?</p><p>thanks for your help</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722255">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722255">24</a> by Raymond Camden
		posted on 2/27/2012 at 8:23 PM
		</div>
		<div class="comment_text"><p>Um... no idea. It's been two years since I worked with this sample. If you are using the latest FW/1, it's possible my code is WAY out of date now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722252">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722252">25</a> by dehian
		posted on 2/29/2012 at 3:50 AM
		</div>
		<div class="comment_text"><p>indeed your code is no more compliant with that version of FW/1<br>Found out this in the docs <br>"<br>Prior to FW/1 2.0, a service method was automatically called, with a name that matched the action and the result was placed in <a href="http://disq.us/url?url=http%3A%2F%2Frc.data%3AcAaHpVLYuLllXWwkZkXKL5SIKUw&amp;cuid=3321886" rel="nofollow noopener" title="rc.data">rc.data</a>. FW/1 1.2 introduced a configuration variable to control this behavior and that variable is still present in 2.0, but the default behavior has changed so that service methods are not called automatically.<br>"<br>so i had to call them manually in the controllers</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722260">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722260">26</a> by Shimju David
		posted on 3/8/2012 at 5:52 PM
		</div>
		<div class="comment_text"><p>Add below config inside variables.framework{} <br>structure insider Application.cfc<br>"suppressImplicitService=false".</p><p>It will look like <br>variables.framework = {<br>		reloadApplicationOnEveryRequest=false,<br>		suppressImplicitService=false<br>	};</p><p>Once it is done, the app will work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722253">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722253">27</a> by dehian
		posted on 3/8/2012 at 9:23 PM
		</div>
		<div class="comment_text"><p>I'll give it a try, thanks!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722256">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722256">28</a> by Prak
		posted on 4/1/2013 at 4:39 PM
		</div>
		<div class="comment_text"><p>I have CF10. I tried to run, but got error "Could not find the ColdFusion component or interface fw1.framework."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722259">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722259">29</a> by Raymond Camden
		posted on 4/1/2013 at 5:29 PM
		</div>
		<div class="comment_text"><p>In order for CF to find the framework.cfc file, you must either:</p><p>a) Create a subfolder called fw1 and place it there.<br>b) Create a CF mapping in your App.cfc called fw1 that points to the same folder.<br>c) Do the above, but in the CF Admin.</p><p>I recommend A or B.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722258">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722258">30</a> by Prak
		posted on 4/1/2013 at 6:04 PM
		</div>
		<div class="comment_text"><p>Exception occured before FW/1 was initialized<br>(org.hibernate.JDBCException)<br>I was created table already but it says can't create table.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722261">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722261">31</a> by Raymond Camden
		posted on 4/1/2013 at 6:05 PM
		</div>
		<div class="comment_text"><p>Um, what? "I was created table already but it says can't create table."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722263">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722263">32</a> by Prak
		posted on 4/2/2013 at 9:08 AM
		</div>
		<div class="comment_text"><p>I created dsn "qball".and I did not found where the table is.<br>can you please explain configuration in steps.<br>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722265">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722265">33</a> by Prak
		posted on 4/2/2013 at 9:35 AM
		</div>
		<div class="comment_text"><p>I steped ahead.<br>now error is "Element CONTROLLER is undefined in TUPLE."</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722264">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722264">34</a> by Raymond Camden
		posted on 4/2/2013 at 2:37 PM
		</div>
		<div class="comment_text"><p>Sorry, not sure about that one. DoController is failing within FW/1 itself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722266">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722266">35</a> by Rik
		posted on 4/2/2013 at 3:30 PM
		</div>
		<div class="comment_text"><p>Getting :</p><p> Exception in onError</p><p>The action main.default failed.<br>Element AUTHENTICATED is undefined in RC.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722269">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722269">36</a> by Raymond Camden
		posted on 4/2/2013 at 3:31 PM
		</div>
		<div class="comment_text"><p>Are you using the code from my zip or the latest FW/1? This code here is over three years old and if you are using the latest FW/1 it may not work right.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722268">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722268">37</a> by Prak
		posted on 4/2/2013 at 3:44 PM
		</div>
		<div class="comment_text"><p>Should I use older fw/1 ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722271">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722271">38</a> by Raymond Camden
		posted on 4/2/2013 at 3:49 PM
		</div>
		<div class="comment_text"><p>Um, well. If I were someone learning FW/1, I'd want to use the latest. This blog post is over 3 years old. You must keep that in mind. I'm sure my zip and it's copy of FW/1 would work, but frankly, I'd use the latest FW/1 and just consider my sample a dated example.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722273">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722273">39</a> by Jeremey Hustman
		posted on 5/27/2014 at 9:16 PM
		</div>
		<div class="comment_text"><p>This was one of the best examples I found about ColdFusion ORM and Framework One.  I updated it and it's now included in the examples of the latest build. <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fframework-one%2Ffw1%3AHUzf-OwxkPwsbp088rGGn9Jd3rw&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/framework-one/fw1">https://github.com/framewor...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722272">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722272">40</a> by Raymond Camden
		posted on 5/27/2014 at 9:43 PM
		</div>
		<div class="comment_text"><p>I am honored. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722275">41</a> by Kumar
		posted on 10/27/2014 at 1:26 AM
		</div>
		<div class="comment_text"><p>i AM NEW TO FW/1 FRAME WORK. I have downloaded the code from<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fframework-one%2Ffw1%3AHUzf-OwxkPwsbp088rGGn9Jd3rw&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/framework-one/fw1">https://github.com/framewor...</a><br>qball is not working. <br>org.hibernate.JDBCException<br>Exception occured before FW/1 was initialized<br>Error code : 102</p><p>org.hibernate.JDBCException: Error during DDL export at org.hibernate.tool.hbm2ddl.SchemaUpdate.execute(<a href="http://disq.us/url?url=http%3A%2F%2FSchemaUpdate.java%3AkPhW8HLmZIANlR_zvcm7VI-nvaA&amp;cuid=3321886" rel="nofollow noopener" title="SchemaUpdate.java">SchemaUpdate.java</a>:232) at org.hibernate.tool.hbm2ddl.SchemaUpdate.execute(<a href="http://disq.us/url?url=http%3A%2F%2FSchemaUpdate.java%3AkPhW8HLmZIANlR_zvcm7VI-nvaA&amp;cuid=3321886" rel="nofollow noopener" title="SchemaUpdate.java">SchemaUpdate.java</a>:178) at coldfusion.orm.hibernate.HibernateConfiguration.exportSchema(<a href="http://disq.us/url?url=http%3A%2F%2FHibernateConfiguration.java%3A13ctDQ7oJxjMTDg8Tvaql-IaNog&amp;cuid=3321886" rel="nofollow noopener" title="HibernateConfiguration.java">HibernateConfiguration.java</a>:482) at coldfusion.orm.hibernate.HibernateConfiguration.exportSchema(<a href="http://disq.us/url?url=http%3A%2F%2FHibernateConfiguration.java%3A13ctDQ7oJxjMTDg8Tvaql-IaNog&amp;cuid=3321886" rel="nofollow noopener" title="HibernateConfiguration.java">HibernateConfiguration.java</a>:434) at coldfusion.orm.hibernate.HibernateConfiguration.initHibernateConfiguration(<a href="http://disq.us/url?url=http%3A%2F%2FHibernateConfiguration.java%3A13ctDQ7oJxjMTDg8Tvaql-IaNog&amp;cuid=3321886" rel="nofollow noopener" title="HibernateConfiguration.java">HibernateConfiguration.java</a>:215) at coldfusion.orm.hibernate.HibernateConfiguration.&lt;init&gt;(<a href="http://disq.us/url?url=http%3A%2F%2FHibernateConfiguration.java%3A13ctDQ7oJxjMTDg8Tvaql-IaNog&amp;cuid=3321886" rel="nofollow noopener" title="HibernateConfiguration.java">HibernateConfiguration.java</a>:183) at coldfusion.orm.hibernate.ConfigurationManager.initConfiguration(<a href="http://disq.us/url?url=http%3A%2F%2FConfigurationManager.java%3A-NnqrOEUqR9pIi4ahhDAboDJqoY&amp;cuid=3321886" rel="nofollow noopener" title="ConfigurationManager.java">ConfigurationManager.java</a>:67) at coldfusion.orm.hibernate.HibernateProvider.InitializeORMForApplication(<a href="http://disq.us/url?url=http%3A%2F%2FHibernateProvider.java%3ABUYM3qMPPwIJIAbbLe3qYeAGo_U&amp;cuid=3321886" rel="nofollow noopener" title="HibernateProvider.java">HibernateProvider.java</a>:184) at coldfusion.orm.hibernate.HibernateProvider.beforeApplicationStart(<a href="http://disq.us/url?url=http%3A%2F%2FHibernateProvider.java%3ABUYM3qMPPwIJIAbbLe3qYeAGo_U&amp;cuid=3321886" rel="nofollow noopener" title="HibernateProvider.java">HibernateProvider.java</a>:80) at coldfusion.filter.ApplicationFilter.fireBeforeAppStartEvent(<a href="http://disq.us/url?url=http%3A%2F%2FApplicationFilter.java%3A_uYcV8J6FPZPo3khkIMmkViNQb8&amp;cuid=3321886" rel="nofollow noopener" title="ApplicationFilter.java">ApplicationFilter.java</a>:611) at coldfusion.filter.ApplicationFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FApplicationFilter.java%3A_uYcV8J6FPZPo3khkIMmkViNQb8&amp;cuid=3321886" rel="nofollow noopener" title="ApplicationFilter.java">ApplicationFilter.java</a>:330) at coldfusion.filter.RequestMonitorFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FRequestMonitorFilter.java%3Am-PVS2bQzmXiERdT4dpdEijYL0M&amp;cuid=3321886" rel="nofollow noopener" title="RequestMonitorFilter.java">RequestMonitorFilter.java</a>:42) at coldfusion.filter.MonitoringFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FMonitoringFilter.java%3A5MrsV4xdu8Q39_rgQDy6Msv-pFU&amp;cuid=3321886" rel="nofollow noopener" title="MonitoringFilter.java">MonitoringFilter.java</a>:40) at coldfusion.filter.PathFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FPathFilter.java%3ASiwAy2pVu_YikdHxqFRltdPO5JY&amp;cuid=3321886" rel="nofollow noopener" title="PathFilter.java">PathFilter.java</a>:141) at coldfusion.filter.LicenseFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FLicenseFilter.java%3ACP_T7Pll9qWS25QcipTGrCd67bk&amp;cuid=3321886" rel="nofollow noopener" title="LicenseFilter.java">LicenseFilter.java</a>:30) at coldfusion.filter.ExceptionFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FExceptionFilter.java%3AGDJhmJPm0y_uBv-bqMx5jgl7Wfo&amp;cuid=3321886" rel="nofollow noopener" title="ExceptionFilter.java">ExceptionFilter.java</a>:94) at coldfusion.filter.ClientScopePersistenceFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FClientScopePersistenceFilter.java%3AmvDij2u_jq0YyaHGHDEWlaUqhBg&amp;cuid=3321886" rel="nofollow noopener" title="ClientScopePersistenceFilter.java">ClientScopePersistenceFilte...</a>:28) at coldfusion.filter.BrowserFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FBrowserFilter.java%3ALRSSTwI9Zda-lt7K56CFXKPwiwI&amp;cuid=3321886" rel="nofollow noopener" title="BrowserFilter.java">BrowserFilter.java</a>:38) at coldfusion.filter.NoCacheFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FNoCacheFilter.java%3ANNAZxE4DRGivTIp38pT6XUmuYbw&amp;cuid=3321886" rel="nofollow noopener" title="NoCacheFilter.java">NoCacheFilter.java</a>:58) at coldfusion.filter.GlobalsFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FGlobalsFilter.java%3AhfMTTeWk4FjivveGFnZ-xQC2tA0&amp;cuid=3321886" rel="nofollow noopener" title="GlobalsFilter.java">GlobalsFilter.java</a>:38) at coldfusion.filter.DatasourceFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FDatasourceFilter.java%3AdBTp_Dn8uwhG4HbdJILyOjSMWzo&amp;cuid=3321886" rel="nofollow noopener" title="DatasourceFilter.java">DatasourceFilter.java</a>:22) at coldfusion.filter.CachingFilter.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FCachingFilter.java%3AhGFAIDA_lLrWT8lNupeyWCMSrGE&amp;cuid=3321886" rel="nofollow noopener" title="CachingFilter.java">CachingFilter.java</a>:62) at coldfusion.CfmServlet.service(<a href="http://disq.us/url?url=http%3A%2F%2FCfmServlet.java%3ACNRAnHD9AZAKRfKi9S-TTmchW0o&amp;cuid=3321886" rel="nofollow noopener" title="CfmServlet.java">CfmServlet.java</a>:219) at coldfusion.bootstrap.BootstrapServlet.service(<a href="http://disq.us/url?url=http%3A%2F%2FBootstrapServlet.java%3AC_Di1359-66Rr5G-YwUHKgwpYvc&amp;cuid=3321886" rel="nofollow noopener" title="BootstrapServlet.java">BootstrapServlet.java</a>:89) at org.apache.catalina.core.ApplicationFilterChain.internalDoFilter(<a href="http://disq.us/url?url=http%3A%2F%2FApplicationFilterChain.java%3Azs5Bfp2kkai--R2-jM1-1rX6J5g&amp;cuid=3321886" rel="nofollow noopener" title="ApplicationFilterChain.java">ApplicationFilterChain.java</a>:303) at org.apache.catalina.core.ApplicationFilterChain.doFilter(<a href="http://disq.us/url?url=http%3A%2F%2FApplicationFilterChain.java%3Azs5Bfp2kkai--R2-jM1-1rX6J5g&amp;cuid=3321886" rel="nofollow noopener" title="ApplicationFilterChain.java">ApplicationFilterChain.java</a>:208) at coldfusion.monitor.event.MonitoringServletFilter.doFilter(<a href="http://disq.us/url?url=http%3A%2F%2FMonitoringServletFilter.java%3AznjTcb1QXnOErl6h-zHPbRIc8dk&amp;cuid=3321886" rel="nofollow noopener" title="MonitoringServletFilter.java">MonitoringServletFilter.java</a>:42) at coldfusion.bootstrap.BootstrapFilter.doFilter(<a href="http://disq.us/url?url=http%3A%2F%2FBootstrapFilter.java%3AF8X3r-ExKrYCy0lpXnRpVyn_NVI&amp;cuid=3321886" rel="nofollow noopener" title="BootstrapFilter.java">BootstrapFilter.java</a>:46) at org.apache.catalina.core.ApplicationFilterChain.internalDoFilter(<a href="http://disq.us/url?url=http%3A%2F%2FApplicationFilterChain.java%3Azs5Bfp2kkai--R2-jM1-1rX6J5g&amp;cuid=3321886" rel="nofollow noopener" title="ApplicationFilterChain.java">ApplicationFilterChain.java</a>:241) at org.apache.catalina.core.ApplicationFilterChain.doFilter(<a href="http://disq.us/url?url=http%3A%2F%2FApplicationFilterChain.java%3Azs5Bfp2kkai--R2-jM1-1rX6J5g&amp;cuid=3321886" rel="nofollow noopener" title="ApplicationFilterChain.java">ApplicationFilterChain.java</a>:208) at org.apache.catalina.core.StandardWrapperValve.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FStandardWrapperValve.java%3A9jmzUhcc8VeiE2W9rASs01uhjFY&amp;cuid=3321886" rel="nofollow noopener" title="StandardWrapperValve.java">StandardWrapperValve.java</a>:220) at org.apache.catalina.core.StandardContextValve.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FStandardContextValve.java%3AJmpdH6zh4VIZMX0TfSRFdSLs3fA&amp;cuid=3321886" rel="nofollow noopener" title="StandardContextValve.java">StandardContextValve.java</a>:122) at org.apache.catalina.authenticator.AuthenticatorBase.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FAuthenticatorBase.java%3AwO8K7M1wakz6ua6e-w75BN18L3g&amp;cuid=3321886" rel="nofollow noopener" title="AuthenticatorBase.java">AuthenticatorBase.java</a>:501) at org.apache.catalina.core.StandardHostValve.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FStandardHostValve.java%3AiRATp5KWdkLE7J0muees6Pb4LZ8&amp;cuid=3321886" rel="nofollow noopener" title="StandardHostValve.java">StandardHostValve.java</a>:170) at org.apache.catalina.valves.ErrorReportValve.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FErrorReportValve.java%3AIilNqfCnStfgVpxK6YrL2GulYxc&amp;cuid=3321886" rel="nofollow noopener" title="ErrorReportValve.java">ErrorReportValve.java</a>:98) at org.apache.catalina.core.StandardEngineValve.invoke(<a href="http://disq.us/url?url=http%3A%2F%2FStandardEngineValve.java%3A8UXiabxE0vuUCdjR7rlULiy-kn4&amp;cuid=3321886" rel="nofollow noopener" title="StandardEngineValve.java">StandardEngineValve.java</a>:116) at org.apache.catalina.connector.CoyoteAdapter.service(<a href="http://disq.us/url?url=http%3A%2F%2FCoyoteAdapter.java%3ADpcqIzagYfWTSh9F31cX_QR6Cnw&amp;cuid=3321886" rel="nofollow noopener" title="CoyoteAdapter.java">CoyoteAdapter.java</a>:422) at org.apache.coyote.ajp.AjpProcessor.process(<a href="http://disq.us/url?url=http%3A%2F%2FAjpProcessor.java%3Alps_zwHYhEYbBhJnJpuz1U__tqk&amp;cuid=3321886" rel="nofollow noopener" title="AjpProcessor.java">AjpProcessor.java</a>:198) at org.apache.coyote.AbstractProtocol$AbstractConnectionHandler.process(<a href="http://disq.us/url?url=http%3A%2F%2FAbstractProtocol.java%3AH0vZihmeReM3jJk5IRsI1MS4jDs&amp;cuid=3321886" rel="nofollow noopener" title="AbstractProtocol.java">AbstractProtocol.java</a>:607) at org.apache.tomcat.util.net.JIoEndpoint$<a href="http://disq.us/url?url=http%3A%2F%2FSocketProcessor.run%3AdYMfEHeqZrmkQkMqVzwR3D4FhnQ&amp;cuid=3321886" rel="nofollow noopener" title="SocketProcessor.run">SocketProcessor.run</a>(<a href="http://disq.us/url?url=http%3A%2F%2FJIoEndpoint.java%3AOxEQU_zK_AOo_IcpKAWpNSMH8Z4&amp;cuid=3321886" rel="nofollow noopener" title="JIoEndpoint.java">JIoEndpoint.java</a>:313) at java.util.concurrent.ThreadPoolExecutor.runWorker(Unknown Source) at java.util.concurrent.ThreadPoolExecutor$<a href="http://disq.us/url?url=http%3A%2F%2FWorker.run%3AJgascNvg5mGXymiP977Wzi8VSC4&amp;cuid=3321886" rel="nofollow noopener" title="Worker.run">Worker.run</a>(Unknown Source) at <a href="http://disq.us/url?url=http%3A%2F%2Fjava.lang.Thread.run%3AihyBEa3w3PknQXFtdf9s-Zclq5I&amp;cuid=3321886" rel="nofollow noopener" title="java.lang.Thread.run">java.lang.Thread.run</a>(Unknown Source) Caused by: java.sql.SQLException: [macromedia][SQLServer JDBC Driver][SQLServer]Incorrect syntax near 'auto_increment'. at macromedia.jdbc.sqlserverbase.ddcw.b(Unknown Source) at macromedia.jdbc.sqlserverbase.ddcw.a(Unknown Source) at macromedia.jdbc.sqlserverbase.ddcv.b(Unknown Source) at macromedia.jdbc.sqlserverbase.ddcv.a(Unknown Source) at macromedia.jdbc.sqlserver.tds.ddr.v(Unknown Source) at macromedia.jdbc.sqlserver.tds.ddr.a(Unknown Source) at macromedia.jdbc.sqlserver.tds.ddr.a(Unknown Source) at macromedia.jdbc.sqlserver.dda3.m(Unknown Source) at macromedia.jdbc.sqlserverbase.dde7.e(Unknown Source) at macromedia.jdbc.sqlserverbase.dde7.a(Unknown Source) at macromedia.jdbc.sqlserverbase.dde7.v(Unknown Source) at macromedia.jdbc.sqlserverbase.dde7.x(Unknown Source) at macromedia.jdbc.sqlserverbase.dde7.executeUpdate(Unknown Source) at coldfusion.server.j2ee.sql.JRunStatement.executeUpdate(<a href="http://disq.us/url?url=http%3A%2F%2FJRunStatement.java%3APTiz4WiA_agSN2mqPdDbGJ4EQOA&amp;cuid=3321886" rel="nofollow noopener" title="JRunStatement.java">JRunStatement.java</a>:193) at org.hibernate.tool.hbm2ddl.SchemaUpdate.execute(<a href="http://disq.us/url?url=http%3A%2F%2FSchemaUpdate.java%3AkPhW8HLmZIANlR_zvcm7VI-nvaA&amp;cuid=3321886" rel="nofollow noopener" title="SchemaUpdate.java">SchemaUpdate.java</a>:227) ... 42 more</p><p>Please i just want to know how to execute a query from MSSql server db. If you can give a sample for that. I am trying use this fw/1 for my application with one dynamic page</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713722274">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713722274">42</a> by Raymond Camden
		posted on 10/28/2014 at 1:54 AM
		</div>
		<div class="comment_text"><p>Kumar - my demo is now far out of date. I recommend looking at the demo apps for FW/1 you can get from the project itself.</p></div>
	</div>
</div>
		