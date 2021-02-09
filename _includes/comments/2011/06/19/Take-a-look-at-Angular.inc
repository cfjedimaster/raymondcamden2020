
<div class="comment" id="c_1713733464">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733464">1</a> by Andrew Scott
		posted on 6/20/2011 at 12:49 AM
		</div>
		<div class="comment_text"><p>This is one of the reasons why ExtJS is so good, not only is it an OO framework but all the UI widgets are made up of smaller OO snippets of code, that can be easier to extend/overwrite and get that extra functionality. Don't like the way the Grid displays its data, then extand/overwrite the view class for the Grid and you have changed the way it looks, behaves with extremely minimal code.</p><p>Templates are no excpetion, ExtJS has had such things as templates before it even hit version 1.0 from memory. But to be able to write something like this has so much power, and so far I have not even seen jQuery come close to matching ExtJS and its awesome in these two areas.</p><p>ExtJS has had excellent Databinding for years and now with the new model, has become even more pwerful and it is has been using an MVC type of approach for sometime now, and has gotten a huge overhaul in the latest release as well.</p><p>And ExtJS has a similar approach to DI in the new release as well.</p><p>Now having said all that, it might still be worth a further look down the track.</p><p>Sorry not to ditch Angular, as it looks interesting. It is just that Angular so far is no different to ExtJS or ExtJS core at this stage except that the license may be appealable to many for Angular.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733475">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733475">2</a> by Raymond Camden
		posted on 6/20/2011 at 1:37 AM
		</div>
		<div class="comment_text"><p>I've never had any doubts about the capabilities of Ext - I just plain don't like it. Much like I'm sure I could use Ruby to build sites like ColdFusion, I don't like Ruby's syntax and wouldn't enjoy coding with it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733474">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733474">3</a> by Andrew Scott
		posted on 6/20/2011 at 1:56 AM
		</div>
		<div class="comment_text"><p>Ok Ray why don't you like it?</p><p>The syntax is almost identical between ExtJS core and jQuery, and both provide the same desired results towards the end. The only difference is that one can write far less code with ExtJS than jQuery put together.</p><p>But as that is now off topic, I am sort of liking the way the binding works in Angular. The problem that I am seeing at the moment, and this may chnage in time as google develop this further, is the time it takes to traverse the DOM to make the binding changes. I haven't looked to far into this as yet, but from what I can tell off the cup, is that it traverses the DOM looking for the binding block and changes it accordingly.</p><p>So the more that needs binding on the page, could mean problems with the user experience as well. Might not be the case, but something to be aware off I guess.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733473">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733473">4</a> by Raymond Camden
		posted on 6/20/2011 at 2:02 AM
		</div>
		<div class="comment_text"><p>Do I  have to have a logical reason? I just don't. :) To be fair, some constructs in jQuery bugged me at first too. Maybe I haven't given Ext a fair shake. At the end of the day - it just doesn't interest me I guess.</p><p>Binding: I know binding can be an issue in Flex apps. I _seem_ to remember Elliott saying they worked to make binding perform well. I can't say that for certain though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733462">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733462">5</a> by Andrew Scott
		posted on 6/20/2011 at 2:07 AM
		</div>
		<div class="comment_text"><p>Knowing Google they will have looked at it with serious intent to overcome the DOM traversal, but in time it will worth keeping an eye on to see how well this develops and/or matures overtime.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733471">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733471">6</a> by Raymond Camden
		posted on 6/20/2011 at 2:10 AM
		</div>
		<div class="comment_text"><p>Ajax performance in general is still something I don't know how well to test. I've got a good hand on the data portions (lessons I learned painfully), but outside of that, I've got a lot to learn.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733461">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733461">7</a> by Andrew Scott
		posted on 6/20/2011 at 2:19 AM
		</div>
		<div class="comment_text"><p>Well to be honest I have done none of the tests to answer that either, but from what I can say with most frameworks that use Ajax are still using the standard type wrappers to the browser way of doing it. The difference is that there are extra featurs like callbacks and events that you don't get with the standard browser XHR way, not to mention configuration params for post and get etc, that you would have to write manually yourself.</p><p>I think the extra time it takes to run this wrapper for Ajax is nothing to be concerned about either. It will always run faster than the time it takes to connect to the remote call and get what you need. And at that point you are in the hands of your favourite browser.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733457">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733457">8</a> by Jean Ducrot
		posted on 6/20/2011 at 5:59 AM
		</div>
		<div class="comment_text"><p>Ray,</p><p>Just a friendly heads up. In the second point you make to support how impressed you were with their tutorial (I was too BTW) you write "I'm now TDD extremist". I think you mean to say "I am not a" or "I'm no".</p><p>Since I never got the TDD evangelist vibe from you I am just looking out for your inbox flooding with that type of questions on Monday morning :)</p><p>Jean</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733467">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733467">9</a> by Dave Hoff
		posted on 6/20/2011 at 6:06 AM
		</div>
		<div class="comment_text"><p>In my opinion the best JS MVC framework available today is backbonejs. Not really digging these frameworks that want to do data binding through dom elements. Just feels icky to me. Backbone really helps you write better JS, making it clear how to best separate code, but keeping it light on convention. Check it out: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.backbonejs.com%3Aamy9GOyUiHQRZy3c-N4gT0tazSE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.backbonejs.com">http://www.backbonejs.com</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733465">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733465">10</a> by Raymond Camden
		posted on 6/20/2011 at 6:19 AM
		</div>
		<div class="comment_text"><p>@Jean: Oops, yep, I meant "not" - thanks.</p><p>@Dave: I've heard good things about Backbone too. I'll try to take a look sometime this summer.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733463">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733463">11</a> by Andrew Scott
		posted on 6/20/2011 at 6:52 AM
		</div>
		<div class="comment_text"><p>Yeah Backbone is supposed to be fantastic, I haven't used it for nearly 5 years though so its probably gone through a lot in that time too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733468">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733468">12</a> by existdissolve
		posted on 6/20/2011 at 8:16 PM
		</div>
		<div class="comment_text"><p>@Andrew-- +1 from me for ExtJS. I've not used jQuery enough to really make a comparison, but I've loved working with ExtJS over the last couple years.</p><p>Curious: have you done anything with ExtJS 4 yet? I have to say, the full-on MVC approach threw me for a loop at first, but after using it for developing an entire application, I'm sold :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733469">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733469">13</a> by Raymond Camden
		posted on 6/20/2011 at 8:32 PM
		</div>
		<div class="comment_text"><p>@Existdissolve: Not sure if your second paragraph was for Andrew or "all of us", but for me, I haven't taken a good look at Ext lately. Maybe this summer - along with Backbone, I'll take another look. I still feel like it won't be a good fit though (and that's not Ext's issue of course).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733466">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733466">14</a> by Andrew Scott
		posted on 6/20/2011 at 11:56 PM
		</div>
		<div class="comment_text"><p>Yes I have played around with ExtJS4, and can I say I love it. Was a pain to migrate some badly written code, but its worth the upgrade.</p><p>I also made a blog that shows how to read in an XML file into a data model, that can be used for a lot of scenarios. Data Models rock, the fact that they now support relationships, of manytoone etc, absolutely rocks.</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.andyscott.id.au%2F2011%2F5%2F17%2FExtJS-really-shines-with-data-models-and-its-ease-to-extend-its-functionality%3AhGQiDSBnLAr-qxtZKugcjpCmOyU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.andyscott.id.au/2011/5/17/ExtJS-really-shines-with-data-models-and-its-ease-to-extend-its-functionality">http://www.andyscott.id.au/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733470">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733470">15</a> by Igor Minar
		posted on 6/21/2011 at 10:59 AM
		</div>
		<div class="comment_text"><p>@Ray Thanks for kinds words. Feel free to drop us an email on the mailing list if you have any further questions.</p><p>@Andrew don't worry about the data binding performance. It might surprise you to hear, that it performs better than a hand-coded dom manipulation in most cases. Especially if you start using repeaters (ng:repeat).</p><p>I gave a lightning talk on this topic at Velocity conference recently. It might be worth it capturing the main points in a blog post. In the meantime, you'll have to take my word for it or benchmark stuff for yourself.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733472">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733472">16</a> by Andrew Scott
		posted on 6/21/2011 at 4:31 PM
		</div>
		<div class="comment_text"><p>@Igor, is that with a deeply nested dom?</p><p>From what I have seen so far, still want to find some time to sit down and play with it myself, but it looks fairly good to date.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733459">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733459">17</a> by Vojta Jina
		posted on 6/21/2011 at 5:20 PM
		</div>
		<div class="comment_text"><p>Just note about ExtJs (I'm talking about v3.4, haven't touch v4.0):</p><p>I think ExtJs is FANTASTIC, especially the UI components. The overall design of the framework is good from the extendability point of view, but unfortunately not for testing. The separation of presentation and logic is very bad.</p><p>I worked on one bigger project on ExtJs and this was a big issue. It took a lot of energy to test and organize ExtJs code. <br>So this is a big advantage for angular - clear separation of logic (with full unit/e2e testing environment) and declarative presentation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733477">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733477">18</a> by Igor Minar
		posted on 6/21/2011 at 6:39 PM
		</div>
		<div class="comment_text"><p>@Andrew we traverse the dom only once - when the application starts - we call this phase html compilation.</p><p>Once a template is compiled, we have all the references to DOM nodes that may need an update, as well as all the binding expressions that we need to use to watch the model for changes.</p><p>So if anything, it might be the number of bindings on a page that could slow down your app. We estimate that you'll start to see issues only after adding a few thousand bindings to your template, which nobody has had a need to do yet in the real world.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733479">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733479">19</a> by Andrew Scott
		posted on 6/22/2011 at 4:14 AM
		</div>
		<div class="comment_text"><p>@Igor, sorry but that was what I was referring to in the first place. I know even with the likes of ExtJS, jQuery and others the more DOM Nodes there are on the page, the slower it is to move something around on the screen. I used that as a reference, beause I would have imagined that the more binding on the page would have some impact.</p><p>Now this is not the fault of the JS framework/library as we all know, most browsers handle there DOM differently when they traverse etc.</p><p>So yeah that was my main concern, whether that might still be a problem.</p><p>Still I think so far this is still worth much further playing around with.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733480">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733480">20</a> by Andrew Scott
		posted on 6/22/2011 at 4:17 AM
		</div>
		<div class="comment_text"><p>@Voita that I couldn't argue with, however in ExtJS4.0 it is now taken a leaf from Sencha Touch which is to now have an MVC type approach.</p><p>I am not sure it is perfect, haven't really had a good play with it as yet. But it looks fairly impressive to say the least.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733476">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733476">21</a> by Igor Minar
		posted on 6/22/2011 at 8:40 PM
		</div>
		<div class="comment_text"><p>@Andrew we have yet to see a real world (useful) app, that has performance problems that we can't address somehow.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713733478">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713733478">22</a> by Andrew Scott
		posted on 6/23/2011 at 8:47 AM
		</div>
		<div class="comment_text"><p>@igor, cool it was only a thought anyway.</p></div>
	</div>
</div>
		