
<div class="comment" id="c_1713655119">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655119">1</a> by Peter Bell
		posted on 7/17/2006 at 6:46 PM
		</div>
		<div class="comment_text"><p>Hi Ray,</p><p>Just to follow up, it is important to distinguish between singletons and business objects.</p><p>You are probably going to have a bunch of services, DAO's and maybe gateways for your application. They are like object specific function libraries which you can just load and forget in application.cfc.</p><p>You will also have stateful business objects (perhaps a user or a list of articles) which have different scopes. A user or shopping cart may be session scoped whereas display information (perhaps a list of articles or products) will often be request scoped.</p><p>It is possible that if you create an array of objects for all of your display lists, you may have performance problems. If you don't need the encapsulation of methods provided by getters and setters, just use query recordsets instead. If you DO need the encapsulation, consider creating a single business object, loading it with your query and providing iterator functions. Certainly instantiating one (or a handful) of request scoped objects is unlikely to be a performance problem.</p><p>Also, on the whole it is better to write for maintainability (assuming the applicaiton will be around for a while) and to refactor for performance IF you run into problems. Otherwise you're in danger of premature optimization!</p><p>Best Wishes,<br>Peter</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655125">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655125">2</a> by Raymond Camden
		posted on 7/17/2006 at 6:49 PM
		</div>
		<div class="comment_text"><p>All good points. You definitely want to watch what your cache. I was definitely referring to Application scope objects, as Session based objects could get insane with robots. Michael Dinowitz has some good resources for dealing with robots and sessions.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655114">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655114">3</a> by Nat Papovich
		posted on 7/17/2006 at 9:28 PM
		</div>
		<div class="comment_text"><p>To specifically answer the original question, yes. ColdFusion will slow to a crawl due to "obsessive" use of OOP practices. Additionally, many objects instantiated per template is frequently a major cause of application slowdown. ColdFusion's OOP-like implementation of CFCs are poor substitutes for the real deal. Native OO languages (like Java) are designed to handle lots of objects flying around in the code. ColdFusion is not.</p><p>Before jumping on the OO bandwagon in CF, you need to have a good reason. You may lose much of the RAD and simplicity while introducing a whole new world of problems.</p><p>NAT</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655117">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655117">4</a> by Tony Petruzzi
		posted on 7/17/2006 at 10:56 PM
		</div>
		<div class="comment_text"><p>If done right, CFCs can offer a incredible performance boost to an application. I'm going to start blogging about the performance gains we are experiencing since we converted BannerBoxes over to CFCs. Check it out.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655111">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655111">5</a> by Raymond Camden
		posted on 7/18/2006 at 12:04 AM
		</div>
		<div class="comment_text"><p>Nat, while I think you are right, I don't think it is the "obsessive" use of OOP, but just the improper use. Anything can be done improperly. However, there is probably a bigger chance of it happening with CFers going to OOP if they are new to the concepts.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655120">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655120">6</a> by Ronan
		posted on 7/19/2006 at 6:55 PM
		</div>
		<div class="comment_text"><p>Ray, thank you for you answer.<br>What do you suggest for...</p><p>I used to create many classes for the most used tables (clients, products, categories, cities and so on).<br>Usually, each class has two methods: Load() and List(), although some tables have a few more widely used methods.</p><p>Since I started working this way I´ve noted improvement in the development productivity, once it provides a cleaner and centralized code.</p><p>OK, let´s see an example:<br>When a user register a product, the template instantiate some classes (around 10) used to lists the combobox options.</p><p>The same situation happen on the product searchs.</p><p>What do you suggest for keep the code maintenability and have good performance of the website?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655127">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655127">7</a> by Raymond Camden
		posted on 7/20/2006 at 5:36 PM
		</div>
		<div class="comment_text"><p>Ronan, I may not be getting you. It sounds like you are using CFCs already, and have already noticed a productivity improvement. Are you asking if you should be caching those classes you create? Well, if Load() loads instance data into the CFC, then you can't, since you need them to be unique. If Load() returns a struct, then you could, since the CFC would be more a service. It sounds like you may be mixing a "Instance" CFC (Load) and a "Service" CFC (List) together. Maybe consider breaking them up so that your CFC which does List ops, and other NON instance ops, into a fooService.cfc.</p><p>I break up my CFCs into Beans, DAOs, and Gateways. The Bean holds one record. The DAO does CRUD, and the Gateways to list() + other misc functions. If you download some of my projects you will see this in use. (But not in BlogCFC.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655121">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655121">8</a> by Ronan
		posted on 7/21/2006 at 6:32 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>&gt; It sounds like you are using CFCs already, and have already noticed a productivity improvement.</p><p>Yes.</p><p>&gt; Are you asking if you should be caching those classes you create?</p><p>Perhaps. I´m asking for the ways to keep the application fast without loosing the power reusability of the OOP.<br>I know it isn´t a simple question... :-)</p><p>cache the classes could be one way, as you said, but it wont works in all situation.</p><p>OK, now answering your questions:<br>Load() loads the instance data into the CFC properties and List() returns a query with the options.</p><p>&lt;cfcomponent hint="Class Products"&gt;<br>  &lt;cfscript&gt;<br>    <a href="http://disq.us/url?url=http%3A%2F%2FTHIS.id%3Av2CSp7c2xW98b-flYr9Z6ATV98Y&amp;cuid=3321886" rel="nofollow noopener" title="THIS.id">THIS.id</a>;<br>    <a href="http://disq.us/url?url=http%3A%2F%2FTHIS.name%3AdQzvkNzJ2ioPzNFwmxd8nPvaYdM&amp;cuid=3321886" rel="nofollow noopener" title="THIS.name">THIS.name</a>;<br>    <a href="http://disq.us/url?url=http%3A%2F%2FTHIS.group%3AtxdxfJ6vMHEowd3VJNs8lG7CrFw&amp;cuid=3321886" rel="nofollow noopener" title="THIS.group">THIS.group</a>;<br>    THIS.category;<br>  &lt;/cfscript&gt;</p><p>  &lt;cffunction name="Load"&gt;<br>    &lt;cfargument name="id" type="numeric" required="yes" /&gt;<br>    &lt;cfset var q_GetData = "" /&gt;</p><p>    &lt;cfif IsDefined("arguments.cod") and IsNumeric("<a href="http://disq.us/url?url=http%3A%2F%2Farguments.id%3A4OezL3xjZJdZ6Xca_bShcIQeaqo&amp;cuid=3321886" rel="nofollow noopener" title="arguments.id">arguments.id</a>")&gt;<br>      &lt;cfquery name="q_GetData" datasource="#dsn#"&gt;<br>        SELECT *<br>        FROM products<br>        WHERE id = &lt;cfqueryparam value="<a href="http://disq.us/url?url=http%3A%2F%2Farguments.id%3A4OezL3xjZJdZ6Xca_bShcIQeaqo&amp;cuid=3321886" rel="nofollow noopener" title="arguments.id">arguments.id</a>" cfsqltype="cf_sql_integer" /&gt;<br>      &lt;/cfquery&gt;</p><p>      &lt;cfscript&gt;<br>        <a href="http://disq.us/url?url=http%3A%2F%2FTHIS.id%3Av2CSp7c2xW98b-flYr9Z6ATV98Y&amp;cuid=3321886" rel="nofollow noopener" title="THIS.id">THIS.id</a>       = <a href="http://disq.us/url?url=http%3A%2F%2Fq_GetData.id%3AU1Wl-3GdgeNxEpiyVvlz14-pXX4&amp;cuid=3321886" rel="nofollow noopener" title="q_GetData.id">q_GetData.id</a>;<br>        <a href="http://disq.us/url?url=http%3A%2F%2FTHIS.name%3AdQzvkNzJ2ioPzNFwmxd8nPvaYdM&amp;cuid=3321886" rel="nofollow noopener" title="THIS.name">THIS.name</a>     = <a href="http://disq.us/url?url=http%3A%2F%2Fq_GetData.name%3AiDzEEToLyfJ3Q9SVQr4qUpo_GGM&amp;cuid=3321886" rel="nofollow noopener" title="q_GetData.name">q_GetData.name</a>;<br>        <a href="http://disq.us/url?url=http%3A%2F%2FTHIS.group%3AtxdxfJ6vMHEowd3VJNs8lG7CrFw&amp;cuid=3321886" rel="nofollow noopener" title="THIS.group">THIS.group</a>    = <a href="http://disq.us/url?url=http%3A%2F%2Fq_GetData.group%3A_Ffs7_FMOCnCbOMQPaqXO32-6Ak&amp;cuid=3321886" rel="nofollow noopener" title="q_GetData.group">q_GetData.group</a>;<br>        THIS.category = q_GetData.category;<br>      &lt;/cfscript&gt;<br>    &lt;/cfif&gt;<br>  &lt;/cffunction&gt;</p><p>  &lt;cffunction name="Load"&gt;<br>    &lt;cfargument name="id" type="numeric" required="yes" /&gt;<br>    &lt;cfset var q_Options = "" /&gt;</p><p>    &lt;cfquery name="q_GetData" datasource="#dsn#"&gt;<br>      SELECT id, name, group, category<br>      FROM products<br>    &lt;/cfquery&gt;</p><p>    &lt;cfreturn q_Options /&gt;<br>  &lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p><p>Having classes like these, I use to instantiate it in the templates, for example, if I have a form that asks for cliente, product and city:</p><p>&lt;cfcomponent hint="Order form"&gt;<br>  &lt;cffunction name="OrderController" returnvariable="struct"&gt;<br>    &lt;cfset var stReturn = StructNew() /&gt;<br>    &lt;cfset var oClient  = CreateObject("component", "classes.clients") /&gt;<br>    &lt;cfset var oProduct = CreateObject("component", "classes.products") /&gt;<br>    &lt;cfset var oCity    = CreateObject("component", "classes.cities") /&gt;</p><p>    &lt;cfset stReturn.q_Clients = oClient.List() /&gt;<br>    &lt;cfset stReturn.q_Clients = oProduct.List() /&gt;<br>    &lt;cfset stReturn.q_Clients = oCity.List() /&gt;</p><p>    &lt;cfreturn stReturn /&gt;<br>  &lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p><p>If I need to use the client informations in the template:</p><p>&lt;cfcomponent hint="View Client Details"&gt;<br>  &lt;cfset THIS.oClient = CreateObject("component", "classes.clients") /&gt;<br>  &lt;cfset THIS.oCategory = CreateObject("component", "classes.categories") /&gt;</p><p>  &lt;cffunction name="CallController"&gt;<br>    &lt;cfargument name="clientId" type="numeric" required="yes" /&gt;<br>    &lt;cfif IsNumeric(arguments.clientId)&gt;<br>      &lt;cfset THIS.oClient.Load(clientId) /&gt;<br>      &lt;cfset THIS.oCategory.Load(THIS.oClient.category)<br>    &lt;/cfif&gt;<br>  &lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p><p>So in the template I can use:</p><p>------------------------<br>&lt;cfset oController = CreateObject("component", "controllers.ViewClientDetails") /&gt;<br>&lt;cfset oController.CallController(URL.clientId) /&gt;</p><p>Name: &lt;cfoutput&gt;#<a href="http://disq.us/url?url=http%3A%2F%2FoController.oClient.name%3AUl7hzgLrhK-EDsheIKF_pXo3FA4&amp;cuid=3321886" rel="nofollow noopener" title="oController.oClient.name">oController.oClient.name</a>#&lt;/cfoutput&gt;<br>Category: &lt;cfoutput&gt;#<a href="http://disq.us/url?url=http%3A%2F%2FoController.oCategory.name%3Ac8xSMJHDf-mdF6jSZuDMbpR8Zrg&amp;cuid=3321886" rel="nofollow noopener" title="oController.oCategory.name">oController.oCategory.name</a>#&lt;/cfoutput&gt;<br>------------------------</p><p>In many cases I need to instantiate much more objects (around 10)</p><p>I know I could use a controller method containing just a query joining the table informations and returning it, but I would loose productvity, code clarity, maintenability and abstraction.</p><p>I also thought, as you said, to keep a big one component just for List methods in a persistent scope. I´m sure that it would be help in any way, but the problem I see is each time the code or applications grows or a table is added, It would need to be reloaded.</p><p>Anyway, I´ll download one of your projects to study it understand better your thoghts.</p><p>Thank´s in advance Ray,</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713655131">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713655131">9</a> by Raymond Camden
		posted on 7/22/2006 at 12:12 AM
		</div>
		<div class="comment_text"><p>Wow, big comment. I didn't mean one component for ALL list methods. I meant one for each content type.</p><p>So for example, imagine my site has Spaceships and Fruit. I normally have the 3 CFCs I mentioned above. So I'd have 6 CFCs total. If I wanted to get all the fruit, I'd use the FruitGateway.cfc.</p><p>Definitely take a look at a few of my projects, it will help. (Not that I'm the best.)</p></div>
	</div>
</div>
		