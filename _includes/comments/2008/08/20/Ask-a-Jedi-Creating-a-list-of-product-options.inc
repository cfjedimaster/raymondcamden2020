
<div class="comment" id="c_1713685165">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685165">1</a> by duncan
		posted on 8/20/2008 at 3:39 PM
		</div>
		<div class="comment_text"><p>Once the lists are into the database (I assume a table for colours and a table for sizes), you could just do a cartesian join on the tables:<br>SELECT C.Colour, S.Size<br>FROM Colours C, Sizes S</p><p>If wanting to limit it to just those colours and sizes already in our lists, add:<br>WHERE C.Colour IN ( &lt;cfqueryparam value="#colorList#" list="yes"&gt; )<br>AND S.Size IN ( &lt;cfqueryparam value="#sizeList#" list="yes"&gt; )</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685146">2</a> by Raymond Camden
		posted on 8/20/2008 at 3:49 PM
		</div>
		<div class="comment_text"><p>Wow, that is a lot simpler. ;) Even if you don't have queries at first it may be worthwhile to make them by hand from your data. I used <a href="http://disq.us/url?url=http%3A%2F%2Fwww.cflib.org%2Fudf%2Fquerysim%3Ax16MXXfa29-zJIX7FfrOC-IqXSA&amp;cuid=3321886" rel="nofollow noopener" title="http://www.cflib.org/udf/querysim">http://www.cflib.org/udf/qu...</a> on the data and the join worked just fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685166">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685166">3</a> by Bliss
		posted on 8/20/2008 at 4:07 PM
		</div>
		<div class="comment_text"><p>Dang!  Finally one I could have helped with and you guys beat me to the cartesian join comments!  Gotta be quicker!  :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685164">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685164">4</a> by Hussein Grant
		posted on 8/20/2008 at 5:54 PM
		</div>
		<div class="comment_text"><p>I like your approach with the loops but how does this scale when combining more variations? Suppose I was buiding an eCommerce app and I needed to create all possible product variations of color, size, fabric and price. How would the loop approach work in this case or any other for that matter? I hope this is not too extreme of a question, just really curious is all.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685167">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685167">5</a> by Raymond Camden
		posted on 8/20/2008 at 5:56 PM
		</div>
		<div class="comment_text"><p>Well using either my loops, or a query, it's going to get expensive fast as the number of groups increases. However, you could, and should, easily just cache this. Stuff like shirt sizes will NOT be changing often, so you could create your uber list on start up and cache it throughout the application.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685169">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685169">6</a> by Andy Sandefer
		posted on 8/20/2008 at 6:11 PM
		</div>
		<div class="comment_text"><p>Well I respectfully disagree with everyone here which means that I'm probably wrong.  Why not just make a two column SizeColor table that has a composite primary key of SizeCode, ColorCode where the SizeCode is a foreign key to a Size table and the ColorCode is a foreign key to a Color table.  This is a properly structured solution if you're following EF Codd's rules for data normalization.  If you're tracking inventory (qty. on hand) by size and color it would be way easy to do a select on this new table and subquery your inventory ledger table by size and color to get a count.  You'll also eliminate the need for messing around with the Cartesian join or any looping at all.  You could have bound cfselects by allowing someone to pick a size and then showing the colors that are within that size in the new table via a remote cfc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685174">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685174">7</a> by Bliss
		posted on 8/20/2008 at 6:58 PM
		</div>
		<div class="comment_text"><p>@Andy</p><p>I'd only use a SizeColor table if the DB needs to know something else about the relationship (i.e. "some Size/Color combos are not possible," "some Size/Color combos have different prices," etc).</p><p>Otherwise I'd add SizeID and/or ColorID as foreign keys into my OrderLineItem (or whatever) table(s), as needed.</p><p>Seems like questionable DB design to have a SizeColor table that *only* exists to represent all combinations of Size and Color.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685173">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685173">8</a> by Hussein Grant
		posted on 8/20/2008 at 7:04 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond for the extremely quick response. Caching the results would be a prudent thing to do but what I was really trying to get at was how you would scale the actual loop code to accommodate more than two lists. Suppose I had a structure of four list groups (and this could increase) to process? I can actually envision a handy little function to accomplish this. Something like this could really cut down on data entry. Suppose you had 50 variants of a product you could select the necessary lists (colors, sizes, fabric), generate and insert the results into your products table and later update the pricing accordingly.</p><p>@Andy<br>I think your points are valid but it depends on whether you are dynamically creating these attributes or if they are hard and set as with your example. I've found that when developing product inventory systems, there is always that late and unpredictable requirement for additional fields on varying product types and to be honest the normalize approach don't always cut it. I guess that is why some turn to the Entity Attribute Value (EAV) model. Anyway I am going off topic a bit.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685157">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685157">9</a> by Andy Sandefer
		posted on 8/20/2008 at 7:05 PM
		</div>
		<div class="comment_text"><p>@Bill<br>That's a good point.  Although I do know from being the type of guy who could benefit from losing a few pounds as well as an online shopper that larger sizes (usually 2X or greater) actually cost more.  The real answer to this question has to do with business rules.  If they will ALWAYS provide every option for every inventory item then the create every possible combination is the way to go.  This sounds far fetched to me though.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685159">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685159">10</a> by Andy Sandefer
		posted on 8/20/2008 at 7:18 PM
		</div>
		<div class="comment_text"><p>Well to draw on my past experience as an ERP developer I would have to say that if the these similar items aren't going to be separate records in the Item table and they're going to have different pricing and be tracked by basis of differing attributes then an ItemVariants table is in order here.  This table will probably link out to many other types of subsidiary attribute tables - some with mandatory participation of the parent record and some not.  Anyway, the next time someone opens up a can of worms this size we should try to muddle this discussion to an even greater extent by throwing in Customer Item, Cumulative Sales Order and Item Group discounts on top!  LOL</p><p>At any rate, I'm glad to see that other folks are using CF to build business applications!  We just signed a few new deals and one of them is for developing a highly customized warehouse management system.  CF is awesome like that, you can use it to make <a href="http://disq.us/url?url=http%3A%2F%2Ffluffybunnies.com%3Ap5pEEo-lWPqkTMg8t6EIXCEpiQ4&amp;cuid=3321886" rel="nofollow noopener" title="fluffybunnies.com">fluffybunnies.com</a> or a manufacturing system!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685156">11</a> by Hussein Grant
		posted on 8/20/2008 at 7:34 PM
		</div>
		<div class="comment_text"><p>Andy you are absolutely correct about needing an "ItemVariants" link table. I should have been more explicit, otherwise it wouldn't work correctly. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685158">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685158">12</a> by Dave DuPlantis
		posted on 8/21/2008 at 12:36 AM
		</div>
		<div class="comment_text"><p>With respect to handling more than two lists, I could see a few different ways to handle that dynamically. The easiest might be to do a Cartesian product on everything so that the DB does the work. (In the case mentioned above, it seems that the lists do get written to the database first.)</p><p>If your lists aren't coming from a database, you could use implicit or explicit recursion to build your results, but in those cases especially, you should watch your lists carefully ... it would only take one decent-sized list to expand your set of variations well beyond what you'd hoped to return.</p><p>For cases like those I think we've all seen where you don't have a completely populated matrix, one approach might be to break the complete matrix into matrices that are completely populated, wherever possible. You'd definitely want something like a DB table or a CF struct to hold the results.</p><p>What I mean is something like this. Say that you have the lists from above:</p><p>colorList = "green,red,brown,blue,yellow,purple,white"<br>sizeList = "S,M,L,Xl,XXL,XXXL"</p><p>But green is only available in L and XL, and XXXLs are available only in yellow and white. You could do three Cartesians:</p><p>1. "red,brown,blue,purple" x "S,M,L,XL,XXL"<br>2. "green" x "L,XL"<br>3. "yellow,white" x "S,M,L,XL,XXL,XXXL"</p><p>This would probably be easier to understand given a size/color chart.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685161">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685161">13</a> by Gary Funk
		posted on 8/21/2008 at 4:52 AM
		</div>
		<div class="comment_text"><p>Should I mention that it is bad form to use a cartesian join in production. If you have 100 items in table A and 100 items in table B, you just returned 10,000 records. I've never met a DBA that that allows a cartesian join, except in testing.</p><p>I guess Ben Forta hasn't seen this post yet.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685163">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685163">14</a> by Raymond Camden
		posted on 8/21/2008 at 6:18 AM
		</div>
		<div class="comment_text"><p>@GF: I don't think anyone would argue that doing the cartesian join is good - but - it DOES solve the problem, does it not? Whether you do the query or the loops, its going to be slow. You could save the results though and never generate them again until you have to.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685171">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685171">15</a> by duncan
		posted on 8/21/2008 at 12:14 PM
		</div>
		<div class="comment_text"><p>Gary, it's a good job we're only talking about 7 and 6 items.  If it was indeed 10000 rows, doing it in a query is significantly faster than using ListAppend.  <br>ListAppend : 30703ms<br>Query of Queries : 172ms</p><p>I'll post the code I used for this later</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685168">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685168">16</a> by Hussein Grant
		posted on 8/21/2008 at 5:29 PM
		</div>
		<div class="comment_text"><p>Thanks for the feedback on my question Dave. Some very interesting points there especially on the topic of matrices. Surely got me thinking.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685170">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685170">17</a> by Andy Sandefer
		posted on 8/21/2008 at 7:39 PM
		</div>
		<div class="comment_text"><p>Let me try to be the voice of reason here and ask why this is a debate?  Have you ever seen a high end packaged solution like SAP or a mid range packaged solution like Great Plains or Navision that handled inventory like this?  I haven't and I've worked with more than one of these solutions over the past 12 years or so.  Some of these software companies have been evolving their respective code bases which handle integrated financial, warehouse management, manufacturing, sales and purchasing tasks since long before ColdFusion existed.  Are all of these Accounting, Warehouse Mgmt. and Mfg. software vendors from various corners of the world wrong?  If so then how is it that they are all wrong in very similar ways and how do they all seem to be handling this type of issue in similar fashions?  If we assume that they're all wrong and that everyone on this forum is correct in their handling of this inventory/sales issue then how have these companies survived and prospered for well over 20 years?<br>The art of handling these types of logic issues should revolve around business decisions and rules.  This is a fun question but I'm starting to feel like everyone has packed their bags and arrived in theory land and is totally ready to look at this issue like it is a math problem or an excuse to see who can write the coolest piece of code to handle this instead of seeing it for what it truly is - a business rule.  <br>When defining variations on for sale inventory items, production materials and in some cases even service labor or production labor it is standard practice that the variations are pre-defined in the database before they're used in sales and inventory transactions.  Yes that means making end users login and say this shirt type is available in green, black or red in small, medium, large or 2x - ahead of time - before the item is ready to be put in a catalog and sold.  This type of thought process is also applicable to units of measure, item variants and all sorts of other common scenarios.<br>Why on earth would I go through this type of programming exercise when this data should be setup ahead of time and merely selected from out of a table?<br>And after you've all explained it to me and helped me understand it I would ask that you please forward the wisdom onto the folks who built PeopleSoft, Navision, Great Plains, SAP, J.D. Edwards and a whole lot of others out there.<br>There is an excellent book that's probably in 2nd or 3rd edition by now called Database Design for Mere Mortals authored by Michael J. Hernandez where he specifically solves issues like these and helps developers, data architects and business analysts learn how to resolve everything from multivalued fields of data to avoiding many to many relationships.  This book actually refers to the type of table that I described in my reply yesterday as a "linking table".  Somebody nearly chopped my head off for bringing it up as an idea but believe it or not these little tables that consist of two foreign keys linking to the primary keys of two other entities are quite common in many types of systems.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685176">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685176">18</a> by Bliss
		posted on 8/21/2008 at 8:00 PM
		</div>
		<div class="comment_text"><p>@Andy</p><p>"these little tables that consist of two foreign keys linking to the primary keys of two other entities are quite common in many types of systems."</p><p>Let's say you have tables Size, Color, and SizeColor.  Are you saying that every time you insert into Size, for example, you also automatically insert x rows into SizeColor (where x is the number of rows in Color)?  So, literally, SizeColor *only* exists to represent all combinations of Size and Color, without saying anything else about the combinations?</p><p>I'm not chopping heads...I'm actually curious as to why one would do this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685178">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685178">19</a> by Andy Sandefer
		posted on 8/21/2008 at 8:10 PM
		</div>
		<div class="comment_text"><p>@Bliss<br>It depends as to whether or not participation to that entity is mandatory.  If they sold an adjustable (one size fits all) Indianapolis Colts ball cap then they would not have to have participation in that size entity.  If they sold a Darth Vader poster they might not have to either.  What's going to happen in your code when multiple sizes are available but not colors?  My code would call a cfc and if size size records related to that item existed it would display a size selector on the page.  If color, or any other type of variant entities for that matter, existed then it would probably display those as well.  The approach that everyone has laid out is essentially rendering every possible combination whether it is warranted or not.  You're programming around data instead of objects.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685180">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685180">20</a> by Bliss
		posted on 8/21/2008 at 8:20 PM
		</div>
		<div class="comment_text"><p>@Andy</p><p>Thanks for clarifying.  I certainly agree.</p><p>When this thread began, I was only thinking about Andrew's specific issue as he described it ("...create a list of all possible combinations.")  I think Duncan and Ray were too.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685184">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685184">21</a> by Andy Sandefer
		posted on 8/21/2008 at 8:31 PM
		</div>
		<div class="comment_text"><p>@Bliss and Everyone Else<br>I appreciate the healthy discussion.  Now I'm just waiting for Ray to put on another CF Biggest Loser competition so that I can move down from a 2X to a 1X when I buy funny shirts online.  The irony is that there are many funny fat people out there and it seems like you have to be a 1X or smaller to buy a funny shirt.  Now where is the justice in that!  LOL<br>I did recently add to my collection when I found a gamer shirt that reads "Your Skill in Reading has Increased by 1pt!".  At any rate, Adobe has the right idea.  They know that many developers and graphic designers could stand to lose a few pounds and that must be why the 1X shirts that I get at user group meetings seem to fit me just fine!  Keep up the under-sizing Adobe and I'll keep buying CF, FlexBuilder and Dreamweaver!  LOL</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685179">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685179">22</a> by duncan
		posted on 8/21/2008 at 10:42 PM
		</div>
		<div class="comment_text"><p>the code i used to compare ListAppend against the cartesian join, and some further discussion:<br><a href="http://disq.us/url?url=http%3A%2F%2Fduncan99.wordpress.com%2F2008%2F08%2F21%2Fcartesian-join-listappend%2F%3AzXXP9W8rL1HPBmmjZXP2hU0uJmU&amp;cuid=3321886" rel="nofollow noopener" title="http://duncan99.wordpress.com/2008/08/21/cartesian-join-listappend/">http://duncan99.wordpress.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685183">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685183">23</a> by Hussein Grant
		posted on 8/22/2008 at 3:24 AM
		</div>
		<div class="comment_text"><p>Hey Andy, this discussion had me thinking in less traditional ways and I don’t think anything is wrong with that, even if it was only momentarily. It surely doesn’t mean I would literally take this and implement in a real system as per the earlier discussions, LOL, that would be ludicrous but it may help down the road when a problem shows its ugly head and the right solution is on this thread.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685185">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685185">24</a> by GaryFunk
		posted on 8/22/2008 at 5:06 PM
		</div>
		<div class="comment_text"><p>@ray</p><p>All good points Ray. My point is, there are hundreds, if not thousands, of new developers that read this blog and take what you, and others, write as gospel (and with very good reason) and that is 'good practice.'</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685182">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685182">25</a> by Raymond Camden
		posted on 8/22/2008 at 5:28 PM
		</div>
		<div class="comment_text"><p>@gary - Well, if a person can't be bothered to peruse the comments, I'd be a bit concerned about the developer. ;) In many of my posts I recommend X and ask folks to add their thoughts. I don't think this entry is any different. Do you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685181">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685181">26</a> by Andy Sandefer
		posted on 8/22/2008 at 5:31 PM
		</div>
		<div class="comment_text"><p>@Gary<br>Lots of people buy Advil too and it works.  But it says on the bottle use as directed so most folks don't take the whole bottle at once if they've thrown their back out or have a splitting headache.<br>If people are using this, or any other blog, for anything other than ideas then they have bigger problems than we can solve.<br>Ray, and others, are consistently right on the money and have solved many problems for me and countless other developers out there.  He even stated in the initial post that their were many ways to skin the cat on this one so don't get too caught up on the cartesian join, listappend flux capacitor or any of the other ideas that were thrown out on the table here.<br>At any rate, as soon as Ray posts a few more blogs this will be back page news - LOL.  Personally I can't wait for the new blogs.  This is my CNN, my Nancy Grace - Ray keep doing what you're doing man, and don't forget to throw in the occasional corny joke while you're at it!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685186">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685186">27</a> by GaryFunk
		posted on 8/22/2008 at 10:20 PM
		</div>
		<div class="comment_text"><p>@ ray - I agree. I do not think it's any idfferent. That's why I added the first comment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685243">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685243">28</a> by Andrew
		posted on 8/24/2008 at 5:38 PM
		</div>
		<div class="comment_text"><p>Here is what I have come to on this:<br>I looked at both options cartesian join and listappend method.  My options are all stored in the database<br>and are dynamic user entered. I allow user/admin<br>to enter a set of options like this:<br>Color:red,green,blue,yellow<br>Size:s,m,l,xl,xxl</p><p>And i pull this apart and enter into a table with<br>several fields, option name, option value, option id, and the option set id in one table.<br>Being dynamic i never know how many different options in a set so I then i do this for 1,2,3,4,5,6,7,8 options.<br>I have never heard of a normal product having 8 options<br>other then a car. I couldnt think of a better way to do this with one table and dynamic options.</p><p>&lt;cfif listlen(namelist) IS 3&gt;<br>&lt;cfloop index="a" list="#evaluate('#listgetat(namelist,1,",")#')#"&gt;<br>&lt;cfloop index="b" list="#evaluate('#listgetat(namelist,2,",")#')#"&gt;<br>   &lt;cfloop index="c" list="#evaluate('#listgetat(namelist,3,",")#')#"&gt;<br>      &lt;cfset comboList = listAppend(comboList, a &amp; " " &amp; b &amp; " " &amp; c)&gt;<br>   &lt;/cfloop&gt;<br> &lt;/cfloop&gt;<br>&lt;/cfloop&gt;<br>&lt;/cfif&gt;</p><p>Is there a better way which is true dynamic?<br>this is limited to the number I code.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685245">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685245">29</a> by Raymond Camden
		posted on 8/24/2008 at 7:03 PM
		</div>
		<div class="comment_text"><p>This does NOT answer your q Andrew, it is just a quick aside. You do not need those evaluates. If namelist is a list of variables you can get the values like so:</p><p>#variables[listGetAt(namelist,1)]#</p><p>Note to I dropped "," since the comm is the default delimiter.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685247">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685247">30</a> by Andrew
		posted on 8/24/2008 at 7:31 PM
		</div>
		<div class="comment_text"><p>That small a change made the page load wayyy faster<br>amazing variables is faster then evaluates.<br>I really need to start reading and learn some more.<br>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713685246">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713685246">31</a> by duncan
		posted on 8/24/2008 at 10:35 PM
		</div>
		<div class="comment_text"><p>@ Andrew:</p><p>try replacing the ListAppend with ArrayAppend inside your loop.  Then just use ArrayToList later on when you need to access it as a list.  Read this blog which gives details of how much faster ArrayAppend (and other methods) are over ListAppend or just string concatenation.<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.aliaspooryorik.com%2Fblog%2Findex.cfm%2Fe%2Fposts.details%2Fpost%2Fstring-concatenation-performance-test-128%3AU2wGJ-8n853lpjYUA4bD1d1AH-M&amp;cuid=3321886" rel="nofollow noopener" title="http://www.aliaspooryorik.com/blog/index.cfm/e/posts.details/post/string-concatenation-performance-test-128">http://www.aliaspooryorik.c...</a></p></div>
	</div>
</div>
		