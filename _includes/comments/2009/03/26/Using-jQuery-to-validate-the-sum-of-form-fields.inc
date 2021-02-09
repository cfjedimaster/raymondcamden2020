
<div class="comment" id="c_1713714117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714117">1</a> by Hal Helms
		posted on 3/26/2009 at 5:22 PM
		</div>
		<div class="comment_text"><p>I dunno, Ray. I really like the first version better. I think the problem of which field should the checksum rule appear on might be better handled by having an additional space for the form itself (rather than only form fields).</p><p>While your second solution certainly has the virtue of simplicity of writing (less code), it is has less internal consistency and is (according to the Schleirmacher Simplicity Theorem that I just made up), actually more complex.</p><p>BTW, I like how you're doing your validation. The one thing I've done is to put my validation into CFCs that are called via Ajax by jQuery. The benefit is that I have a single validation "engine" that can be used for both client and server-side validation.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714121">2</a> by Raymond Camden
		posted on 3/26/2009 at 5:32 PM
		</div>
		<div class="comment_text"><p>For the first demo, I did use an additional space for the error message (but didn't bother adding line breaks). My issue though was the I ended up with 2 errors. The plugin _does_ support grouping of fields, so that may have worked as well. I'll see if I can get that working.</p><p>Can you talk about why my second solution has less internal consistency? I'm not seeing what you mean here. The first one does make it a bit more obvious that the sum can be dynamic, but practically, I don't see needing to change it often, and since the validation is repeated twice, there is a higher chance of a typo slipping in and messing things up.</p><p>In regards to your last point - imagine a single CFC that supports validation at an abstract level ("Name must be a string, 2 char long", "Age must be numeric, 0 and higher."). Now imagine a service on top that allows you to say: "Please express the validation in jQuery validation rules." or "Please epxress the validation in a custom method." In other words, you can define the logic one, and use it both for jQuery or server side validation. You could, in theory, write other interfaces to support some random Ext library, or Spry, etc. Just thinking out loud here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714119">3</a> by Hal Helms
		posted on 3/26/2009 at 6:00 PM
		</div>
		<div class="comment_text"><p>By internal consistency, I mean that in your latter example, there are two places where you express validation rules. What if you had something like...<br>rules: {<br>  phappy: {blah : blah},<br>  puhappy: {foo : bar},<br>  form: {sum : <br>    {fields : 'phappy', 'puhappy', min: 100, max: 100}<br>  }<br>}</p><p>Something like that, anyway. So you could set rules for the *form* instead of for individual fields only. Now, we have only one place where all rules are expressed, hence greater internal consistency, which (according to Carollian Coagulation Correspondence), makes for more robustified code.</p><p>As for the CFC idea, yes -- exactly. If the validation CFC returns a struct of errors, the calling page is free to deal with it as it wishes to. And moving the validation out of JavaScript into a CFC makes it more reusable both across applications and on both client and server.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714118">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714118">4</a> by Raymond Camden
		posted on 3/26/2009 at 6:02 PM
		</div>
		<div class="comment_text"><p>Woah - does that syntax even work? I mean form: { }? (I would test, but about to get into a meeting.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714120">5</a> by anthony
		posted on 3/26/2009 at 6:09 PM
		</div>
		<div class="comment_text"><p>@Hal<br>I'm not sure how I feel about the whole Ajax validation thing.  I use JS validation as a way of catching errors on the client side so I can reduce the number of unnecessary http requests.  If validation happens on submit, it seems a little redundant to make two requests to validate, one after the other.  If validation happens on blur for each field, then you could be making quite a few http requests just for one page.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714122">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714122">6</a> by Gareth Arch
		posted on 3/26/2009 at 6:11 PM
		</div>
		<div class="comment_text"><p>As there are only 2 fields, why not do something like:</p><p>$("#puhappy").attr( "disabled", "disabled" );<br>$("#puhappy").val( 100 - $("#phappy").val() );</p><p>Of course this would not work for more than 2 fields, but for simplicity, this seems like an easy solution (as you are adding limitations to the phappy input).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714123">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714123">7</a> by Todd Rafferty
		posted on 3/26/2009 at 6:25 PM
		</div>
		<div class="comment_text"><p>Gareth is correct IMHO. We know the end result must always equal 100. We know that a user can enter a number. Why not take care of the 2nd field with jQuery and keep it controlled?</p><p>[user entered] + [jquery controlled] = 100</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714124">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714124">8</a> by Raymond Camden
		posted on 3/27/2009 at 5:55 AM
		</div>
		<div class="comment_text"><p>That's pretty slick Gareth. I'd probably not disable one form field though. I'd simply make the other one update with the right value when you change it. I may do another blog entry showing that. Simple math of course, but shows how to 'listen' to form fields in jQuery.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714125">9</a> by Jose
		posted on 4/23/2009 at 1:30 AM
		</div>
		<div class="comment_text"><p>Hello!!! I want to know how can I use the methods "max" and "min" if I use the metadata archive... I mean: &lt;input name="xxx" class="required"&gt;... If anybody can help me....<br>sera de gran ayuda!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714126">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714126">10</a> by Raymond Camden
		posted on 4/23/2009 at 1:32 AM
		</div>
		<div class="comment_text"><p>Did you try max and min in the input tag?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714127">11</a> by Jose
		posted on 4/23/2009 at 1:42 AM
		</div>
		<div class="comment_text"><p>Thanks man!!! That's work.... like I said: "eres un coco".... (it means: you know a lot of!!)...</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714129">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714129">12</a> by Raymond Camden
		posted on 4/23/2009 at 1:43 AM
		</div>
		<div class="comment_text"><p>You sure you didn't mean "loco", not "coco" ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714132">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714132">13</a> by Dave DuPlantis
		posted on 1/12/2013 at 2:09 AM
		</div>
		<div class="comment_text"><p>It looks like you could also use the validator to show the error when the fields do not add up: this would be more useful with 3 or more fields (my current issue), where you can't force one to the appropriate value based on the other. Just replace your $().html() call with</p><p>validator.showErrors({"puhappy": "Sum of fields must be 100"});</p><p>or in my case, it would be "total" instead. (And I have a class assigned to the fields I sum, so I use .find(".allocation").each() to get the total.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714131">14</a> by Raymond Camden
		posted on 1/12/2013 at 2:11 AM
		</div>
		<div class="comment_text"><p>Always nice when someone discovers one of my old posts. I don't even remember this one. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714140">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714140">15</a> by Ronan Kealy
		posted on 1/31/2013 at 8:07 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I am using your example but I want the validation to work for any number of fields. In your examples you have to enter the percentage for both fields but I need to have it working so that if you just enter one field (with 100%) it will validate. So you can have any number of fields instead of it relying on a set number of fields.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714146">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714146">16</a> by Raymond Camden
		posted on 1/31/2013 at 8:16 PM
		</div>
		<div class="comment_text"><p>Wow, an old post here. :) Ronan, that sounds like an interesting idea. Let me work up a demo that supports N fields. I've not used jQuery Validate in a long time (not because I don't like it anymore, just because I haven't played with it), so it will be a refresher. I've got a presentation today and a flight tomorrow so I can't promise quick turnarond. I'll also look into some of the suggestions from others in this thread.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714148">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714148">17</a> by Raymond Camden
		posted on 1/31/2013 at 9:12 PM
		</div>
		<div class="comment_text"><p>Here is an updated version:</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2F4683989%3ALAjLdDtoRL8EEBb3HQOxaMCD2Uw&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/4683989">https://gist.github.com/468...</a></p><p>I moved to using a class value to mark the individual items as required/numeric and added the min/max to each. I also switched the type to number which in modern browsers provided a basic step control.</p><p>The validation logic then gets simpler as we can just do a jQuery selector and get a total.</p><p>To be clear, there are multiple other ways of doing this. I wrote this one in about 10 minutes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714144">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714144">18</a> by Ronan Kealy
		posted on 2/1/2013 at 7:54 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I appreciate you coming back to me on this but unfortunately this still does not allow me to validate the entire form when you just have ONE field filled in. Does this make sense? Your new example still relies on entering the data into ALL fields. I require it to work that you may have these multiple fields but it will validate if you fill in ONE field with the 100% value. Again, I would greatly appreciate any help with this.</p><p>Kind Regards,</p><p>Ronan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714149">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714149">19</a> by Raymond Camden
		posted on 2/1/2013 at 7:56 PM
		</div>
		<div class="comment_text"><p>Oh, so to be clear, you want N fields where you do not need to enter something in them all, but if you do, it must be numeric. And at the end, the sum is 100, right?</p><p>If so, take my code, and try removing required from the classes.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714150">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714150">20</a> by Ronan Kealy
		posted on 2/1/2013 at 8:30 PM
		</div>
		<div class="comment_text"><p>Yes that's exactly it. I tried removing the required class from the input fields and in the js code. still not working.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714147">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714147">21</a> by Raymond Camden
		posted on 2/1/2013 at 8:40 PM
		</div>
		<div class="comment_text"><p>About to board a plane so pardon terseness.</p><p><a href="https://disq.us/url?url=https%3A%2F%2Fgist.github.com%2F4692083%3A4VWhvRokNQDWjJOFi9nah2_g6os&amp;cuid=3321886" rel="nofollow noopener" title="https://gist.github.com/4692083">https://gist.github.com/469...</a></p><p>Changed it to use a new selector to find the fields.<br>Check for empty string, and don't add if empty.</p><p>Seems to work for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714151">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714151">22</a> by Ronan Kealy
		posted on 2/8/2013 at 3:20 PM
		</div>
		<div class="comment_text"><p>Raymond, I just wanted to say thank you very much for this. It worked great. Thank you for the massive help. Greatly appreciated.</p><p>Kind regards,</p><p>Ronan</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714154">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714154">23</a> by Raymond Camden
		posted on 2/8/2013 at 5:59 PM
		</div>
		<div class="comment_text"><p>Glad to help.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714153">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714153">24</a> by Trevor Carlow
		posted on 11/1/2013 at 6:16 PM
		</div>
		<div class="comment_text"><p>Hi All,<br>Is there an updated version of the code based on all of the comments?<br>I jsut found this and using the original post (bottom code) have it working quite nicely but as mentioned the errors from the fields never clear when you update them like they normally do within the jquery validator.</p><p>Here is the basic code I am using<br>&lt;div class="familypacks"&gt;<br>  &lt;p&gt;Please select a combination of Adult and Youth brushes upto a maximum of {{limit}}&lt;/p&gt;<br>  &lt;label for="adult"&gt;Number of Adult Brushes&lt;/label&gt;&lt;input type="number" id="adult" name="properties[Adult]" /&gt;<br>  &lt;label for="youth"&gt;Number of Youth Brushes&lt;/label&gt;&lt;input type="number" id="youth" name="properties[Youth]" /&gt;<br>  &lt;div class="familyerror"&gt;&lt;/div&gt;</p><p>&lt;/div&gt;</p><p>{{'jquery.validate.js' | asset_url |script_tag}}<br>{{'additional-methods.js' | asset_url |script_tag}}</p><p>{%if limit == '4'%}<br>&lt;script&gt;<br>$("#product-form-{{ <a href="http://disq.us/url?url=http%3A%2F%2Fproduct.id%3AujVPd7yGNHy8DrxQ3tMmQuFg8_A&amp;cuid=3321886" rel="nofollow noopener" title="product.id">product.id</a> }}").validate({</p><p>     rules: {<br>            "properties[Adult]": {<br>                required: true,<br>                number: true,<br>                min: 0,<br>                max: 4,<br>            },<br>            "properties[Youth]": {<br>                required: true,<br>                number: true,<br>                min: 0,<br>                max: 4,<br>            }</p><p>     },<br>        submitHandler: function(form){<br>            var total = parseInt($("#adult").val()) + parseInt($("#youth").val()); <br>            if (total != 4) {<br>                $("#product-form-{{ <a href="http://disq.us/url?url=http%3A%2F%2Fproduct.id%3AujVPd7yGNHy8DrxQ3tMmQuFg8_A&amp;cuid=3321886" rel="nofollow noopener" title="product.id">product.id</a> }} div.familyerror").html("Your total must equal 4.")<br>                return false;<br>            } else form.submit();<br>        }</p><p>});</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714152">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714152">25</a> by Anton Thorn
		posted on 7/16/2014 at 5:37 AM
		</div>
		<div class="comment_text"><p>The demos no longer work (because the paths to the jQuery scripts are now 404s).    :(</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714155">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714155">26</a> by Raymond Camden
		posted on 7/16/2014 at 5:37 AM
		</div>
		<div class="comment_text"><p>You can view source and save locally. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713714156">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713714156">27</a> by Anton Thorn
		posted on 7/16/2014 at 5:38 AM
		</div>
		<div class="comment_text"><p>fair enough   :)</p></div>
	</div>
</div>
		