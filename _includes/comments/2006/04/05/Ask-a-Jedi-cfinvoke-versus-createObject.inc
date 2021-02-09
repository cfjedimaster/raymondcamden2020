
<div class="comment" id="c_1713651350">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651350">1</a> by Christopher Wigginton
		posted on 4/6/2006 at 2:05 AM
		</div>
		<div class="comment_text"><p>The CFOBJECT and createObject tag may be locked down for security reasons, where your only option may be CFINVOKE for components.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651351">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651351">2</a> by Ryan Guill
		posted on 4/6/2006 at 2:22 AM
		</div>
		<div class="comment_text"><p>Another way to put it is when you use cfinvoke on a component directly, without creating an object out of it first, you are keeping it stateless, meaning that any of your initialization code and local code has to be ran by all of the methods.  If you create an object out of it first, you can run an init method while creating it and get all the local variables (local to the object) created and ready before you call any of your methods.  Also, remember that you can call cfinvoke on an object that you have already created.  then it just becomes a difference of cfset myresult = myobject.mymethod(myarguments) to cfinvoke component="#myobject#" returnvariable="myresult" method="mymethod"  <br>cfargument name="myargumentname" value="myargument" /<br>/cfinvoke</p><p>sorry if that makes it hard to read, i left out the greater than less than signs so it wouldnt get stripped.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651352">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651352">3</a> by John Elkins
		posted on 4/6/2006 at 2:40 AM
		</div>
		<div class="comment_text"><p>Well said, Ryan.</p><p>In addition, by instantiating an object and then calling the objects methods it creates less load on server for garbage collection.  If a site that has a lot of traffic instantiates an object in the application scope (only do this for objects that do not need to maintain instance "state" data).. its a lot less work for the server than constantly invoking arguments over and over again.</p><p>My $.02</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651353">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651353">4</a> by Raymond Camden
		posted on 4/6/2006 at 6:37 AM
		</div>
		<div class="comment_text"><p>The tip of reusing a CFC instance is not something I covered in this entry since I didn't think it was on topic. Do you think an entry on it (even though it's simple) would be a worthwhile blog entry?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651355">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651355">5</a> by MrBuzzy
		posted on 4/6/2006 at 2:18 PM
		</div>
		<div class="comment_text"><p>I might as well mention; I recently changed BlogCFC so it could work on a host that does not allow createObject(). I replaced the createObjects with cfinvoke, using the init() approach... and bob's your uncle.</p><p>If you're writing your CF for portability (on to cheap hosting solutions for example) then this is a reason to use cfinvoke only.</p><p>Perhaps there should be a createComponent() function. So it can be differentiated from the java stuff in the Sandbox.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651354">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651354">6</a> by john s.
		posted on 4/6/2006 at 5:28 PM
		</div>
		<div class="comment_text"><p>Ray,</p><p>I think that would help clear the water a bit more and give some of us a refresh.</p><p>@Ryan, I'm not sure I follow your stateless example in regards to initilization code and local code having to be run if you use cfinvoke.</p><p>I think I'm confused on the "instance state"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651357">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651357">7</a> by Ryan Guill
		posted on 4/6/2006 at 5:36 PM
		</div>
		<div class="comment_text"><p>Lets say for example that you have a method in your cfc that takes in the datasource name you are working with and stores it locally.  You would want to put this in an init method.  If you do this, and you create an object out of the component, you can access that local variable (local to the object itself) in all of your other methods, keeping you from having to pass in the datasource name to each of your methods.</p><p>When you set variables local to an object and create an object out of it, it is said to have state.  When you just call a component directly through cfinvoke, without first creating an object out of it, it is said to be stateless, meaning it has no "instance" variables.</p><p>Generally, stateless is fine for "services", or components that do not need to "know" anything, they just take arguments and do something with them.  But if you want your component to know something, that is, you tell it once and it remembers it, then you are going to have to create an object out of it.</p><p>For example, to make my code portable between our development and production environments, I always pass in the datasource that an object should use when I create it, and then for the rest of my app where I am using that object, I dont have to pass in the datasource any more.</p><p>Does that make more sense or is it still clear as mud?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651356">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651356">8</a> by Ryan Guill
		posted on 4/6/2006 at 5:39 PM
		</div>
		<div class="comment_text"><p>I also want to respond to Christopher Wigginton's comment that cfobject and createObject may be locked down.  Generally this is done more so to keep you from being able to create java and com objects.  But there is more than just a syntatical difference between createObject and cfInvoke, while related they do two completely different things.  If you are going to get into any Object Oriented programming at all, you are going to need object support.  I definately suggest getting a new host if that is the case.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651360">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651360">9</a> by Michael White
		posted on 4/6/2006 at 6:12 PM
		</div>
		<div class="comment_text"><p>Ray, I think one of the key problems relative newbies to CFMX have is the ins and outs of Components. What are some of the ways that experienced programmers have found works best (three components for each like you did here, etc.), what are the guidelines (how long should my cfc be before I think about breaking it up, how should I use the Psuedo-constructor and "Init" method, etc.). Now that "Experienced" CFMX programmers have been using components for a couple of years it may be time for a book, or a paper or an article or a blog entry. I have been working on cfmx for about a year now and I'm still using the This scope in my cfc because I didn't know any better and i'm too far into the three projects I'm working on... Don't let others suffer the same fate as me!!!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651363">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651363">10</a> by Phillip Senn
		posted on 4/6/2006 at 7:38 PM
		</div>
		<div class="comment_text"><p>Yes, I remember talking about this before, but my legs are wobbly when I talk about this subject.</p><p>Here's what I do:<br>&lt;cfset xxxObj = CreateObject("Component","<a href="http://disq.us/url?url=http%3A%2F%2FComponents.xxx%3AFzI5Rdx1CDZzG5msafmCgh67I70&amp;cuid=3321886" rel="nofollow noopener" title="Components.xxx">Components.xxx</a>").Init("myDataSource")&gt;<br>&lt;cfset xxxQry = xxxObj.View1()&gt;<br>&lt;cfdump var="#xxxQry#"&gt;</p><p>xxx.cfc contains:<br>&lt;cfcomponent displayname="xxx" output="False"&gt;<br>&lt;cffunction name="Init" output="true" returntype="<a href="http://disq.us/url?url=http%3A%2F%2Fcomponents.xxx%3AoKLt19v_OUJr-1xRqw0axOPK7lI&amp;cuid=3321886" rel="nofollow noopener" title="components.xxx">components.xxx</a>"&gt;<br>	&lt;cfargument name="DSN" required="yes"&gt;<br>	&lt;cfset Variables.DSN = arguments.DSN&gt;<br>	&lt;cfreturn this&gt;<br>&lt;/cffunction&gt;</p><p>&lt;cffunction name="View1" output="False" returntype="query" hint="I return everything from xxxView"&gt;<br>	&lt;cfargument name="xxxID" type="numeric" required="no"&gt;<br>	&lt;cfset var rst = ""&gt;<br>	&lt;cfquery name="rst" datasource="#Variables.DSN#"&gt;<br>	SELECT * FROM xxx<br>	&lt;cfif isDefined("arguments.xxxID") and isValid("integer",arguments.xxxID)&gt;<br>		WHERE xxxID  = #arguments.xxxID#<br>	&lt;/cfif&gt;<br>	&lt;/cfquery&gt;<br>	&lt;cfreturn rst&gt;<br>&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p><p>The thinking is:<br>ANYTHING THAT HAS TO DO WITH TABLE xxx GOES THROUGH THIS CFC.<br>So my question is:<br>How would you rewrite line 2:<br>&lt;cfset xxxQry = xxxObj.View1()&gt;<br>using cfinvoke?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651359">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651359">11</a> by Ryan Guill
		posted on 4/6/2006 at 7:42 PM
		</div>
		<div class="comment_text"><p>Phillip, the only way to do that would be to rewrite your view1 method to take an argument of dsn.  Then you could do</p><p>&lt;cfinvoke component="<a href="http://disq.us/url?url=http%3A%2F%2Fcomponents.xxx%3AoKLt19v_OUJr-1xRqw0axOPK7lI&amp;cuid=3321886" rel="nofollow noopener" title="components.xxx">components.xxx</a>" method="View1" returnvariable="xxxQry"&gt;<br>&lt;cfinvokeargument name="dsn" value="myDatasource" /&gt;<br>&lt;/cfinvoke&gt;</p><p>But this illustrates the point that if you have many methods in your component that all need the same dsn, why not create and object out of it while passing in the dsn, and then use it throughout your component.</p><p>While both methods may be &lt;em&gt;functionally the same&lt;/em&gt; they are quite different.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651361">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651361">12</a> by Phillip Senn
		posted on 4/6/2006 at 7:51 PM
		</div>
		<div class="comment_text"><p>Right.<br>For the sake of simplicity, I left out the following functions in xxx.cfc:</p><p>&lt;cffunction name="View2" output="False" returntype="query" hint="I return a list starting from xxxID"&gt;<br>&lt;/cffunction&gt;<br>&lt;cffunction name="NextRecord" returntype="numeric" output="false" hint="I return the next xxxID"&gt;<br>&lt;/cffunction&gt;<br>&lt;cffunction name="PrevRecord" output="False" returntype="numeric" hint="I return the Prev xxxID"&gt;<br>&lt;/cffunction&gt;</p><p>The idea is that you don't have any cfquery commands in your programs.  If you need something from table xxx, you have to create a function and either return a query or return a primary key ID.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651362">13</a> by Drew
		posted on 4/17/2006 at 4:51 PM
		</div>
		<div class="comment_text"><p>Ryan,<br>You mentioned earlier on that I can call cfinvoke on an object that's already in existance.  This would mean that I can now pass named values to functionS rather than relying on position as I normally would?  <br>Could that lend itself to the thought that because the arguments are named the function call would be quicker, as well as more flexible?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651366">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651366">14</a> by Ryan Guill
		posted on 4/17/2006 at 4:59 PM
		</div>
		<div class="comment_text"><p>First, let me say that cfinvoke is not the only way you can passed named arguments to a function.  If I have a function like so:</p><p>&lt;cffunction name="myFunct"&gt;<br>&lt;cfargument name="one" required="True" /&gt;<br>&lt;cfargument name="two" required="true" /&gt;<br>&lt;/cffunction&gt;</p><p>I can call that function like this:</p><p>&lt;cfset myFunct(two=a,one=b) /&gt;</p><p>Which gives you named parameters.  This way of doing things can also be used for providing values for non-required arguments.</p><p>Also, you can pass argument collections into functions, which is also passing them in named as well in a sense.  For the function above I could call it like so:</p><p>&lt;cfset myArgs = structNew() /&gt;<br>&lt;cfset myArgs.two = a /&gt;<br>&lt;cfset <a href="http://disq.us/url?url=http%3A%2F%2FmyArgs.one%3AleHMSJ4OIMmin1Q0P-opCczys-E&amp;cuid=3321886" rel="nofollow noopener" title="myArgs.one">myArgs.one</a> = b /&gt;</p><p>&lt;cfset myFunct(argumentCollection=myArgs) /&gt;</p><p>Now, I much prefer the cfinvoke syntax because I believe it to be easier to read, even though it is a little more typing.</p><p>As far as speed, I doubt the difference in any of these methods really make much difference.  Named or not, the functions would probably run about the same.  To me, no matter which one ran faster though, the readability that named parameters gives you is worth it.</p><p>But try all the different methods and time them to see what you get, if you are really worried about performance.  But to me, ease of maintenance is my first priority.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651365">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651365">15</a> by Henry Ho
		posted on 2/24/2009 at 12:26 AM
		</div>
		<div class="comment_text"><p>Hum.. excuse me for adding comment to this 3-yrs-old blog entry, but...</p><p>Doesn't CFINVOKE create an instance of the component before invoking the method anyway?  I believe it does, and therefore I do not think CFINVOKE has any performance advantage over CreateObject()</p><p>e.g.</p><p>&lt;!-- x.cfc --&gt;<br>&lt;cfcomponent&gt;<br>&lt;cfscript&gt;<br> variables.x = 123;  // sudo-contructor init</p><p> function getX(){<br>  return variables.x;<br> }<br>&lt;/cfscript&gt;<br>&lt;/cfcomponent&gt;</p><p>&lt;!-- getX.cfm --&gt;</p><p>&lt;cfset x = createObject("component","x").getX()</p><p>&lt;!--- should be the same as ---&gt;</p><p>&lt;cfinvoke component="x" method="getX" returnvariable="x"&gt;</p><p>Notice that if cfinvoke is really just invoking the method getX, it should not have been able to get x, since x belongs to the Variables scope (a scope that's created once the component has been instantiated).</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651367">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651367">16</a> by Raymond Camden
		posted on 2/24/2009 at 12:31 AM
		</div>
		<div class="comment_text"><p>CFINVOKE _can_ create a new instance. It does not _HAVE_ to.</p><p>&lt;cfinvoke component="#foo#" ...&gt;</p><p>will work with a CFC already created.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651368">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651368">17</a> by Henry Ho
		posted on 2/24/2009 at 12:40 AM
		</div>
		<div class="comment_text"><p>Oops.. I should specify that.. in the case of invoking a 'static' method from a 'static' class.</p><p>Although there's no 'static' class in CF, but like when you have a helper method that get called throughout many objects, but you don't want to use &lt;cfinclude&gt; to inject that method.  Then, in that case, use of createObject() then invoke should be same as cfinvoke that method directly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651369">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651369">18</a> by Raymond Camden
		posted on 2/24/2009 at 12:53 AM
		</div>
		<div class="comment_text"><p>Well, if I get you right, I'd still create the CFC once. CFC creation, while much improved in CF8, can still be slow. Make it once in onApplicationStart and use the instance from then on.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651371">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651371">19</a> by Susan Brun
		posted on 5/18/2010 at 7:52 PM
		</div>
		<div class="comment_text"><p>What happens if you run the init method of a CFC more than once?  Will it keep creating new objects in memory?</p><p>What if you have two applications that want to be able to use the same CFC, can one application create the object, and the other application use the object?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651373">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651373">20</a> by Raymond Camden
		posted on 5/18/2010 at 7:54 PM
		</div>
		<div class="comment_text"><p>"What happens if you run the init method of a CFC more than once? Will it keep creating new objects in memory?"</p><p>Yes. If thats what you want.</p><p>"What if you have two applications that want to be able to use the same CFC, can one application create the object, and the other application use the object?"</p><p>Yes - but you need to modify how you do things. The best way to handle this is with ColdSpring: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coldspringframework.org%2F%3Aqe4uoqVrf0rwPvxE6eo3THJyK5s&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coldspringframework.org/">http://www.coldspringframew...</a></p><p>It can manage creating singletons for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651370">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651370">21</a> by Khurram
		posted on 5/28/2010 at 1:31 AM
		</div>
		<div class="comment_text"><p>Hi. I just have read the post and the comments. these are the great. but I am just trying to evaluate at a problem while changing the [CreateObject]s into the [cfinvoke]s.<br>Pretty obvious that I could change all the stuff where I found the createObject as follows</p><p>&lt;cfset xxx = CreateObject("component","<a href="http://disq.us/url?url=http%3A%2F%2Fcfc.xxx%3ALhI2dl4z7kg1zt4UjgUFyYjgifU&amp;cuid=3321886" rel="nofollow noopener" title="cfc.xxx">cfc.xxx</a>").init("requiredparam") /&gt;</p><p>simply to the cfinvoke with the method attribute and cfinvokearguments within it.</p><p>But what if I have to change the following statement to the cfinvoke with no calling method. what would you recommend to do..</p><p>&lt;cfset obj_xxx = CreateObject("component","<a href="http://disq.us/url?url=http%3A%2F%2Fcfc.xxx%3ALhI2dl4z7kg1zt4UjgUFyYjgifU&amp;cuid=3321886" rel="nofollow noopener" title="cfc.xxx">cfc.xxx</a>") /&gt;<br>If you noticed the above statement initiating the component but is not calling the init method (which actually does have one required parameter as below)</p><p>&lt;cfcomponent displayname="xxx" output="false"&gt;<br>	&lt;cffunction name="init" access="public" returntype="xxx" output="false"&gt;<br>		&lt;cfargument name="required_param" type="cfc.xxx2" required="true" /&gt;<br>		&lt;!--- other work ---&gt;<br>		&lt;cfreturn this /&gt;<br>	&lt;/cffunction&gt;<br>&lt;/cfcomponent&gt;</p><p>Above context works great but with CreateObject as it just returns the instance of the component and I can use it later on the page.<br>I am just not able to figure it out how can I use &lt;cfinvoke&gt; to get instance of the component as I don't have any parameter of type "xxx2" to send in to the init method.</p><p>Hope I tried good to reproduce the problem.</p><p>Regards<br>Khurram</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651375">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651375">22</a> by Raymond Camden
		posted on 5/28/2010 at 10:14 AM
		</div>
		<div class="comment_text"><p>In your case you are out of luck. Since the init() function requires an arg you don't want to send, you can't use it. If you want, you can always make a new method, perhaps even called "new", and in that let it simply return this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651376">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651376">23</a> by Khurram
		posted on 5/28/2010 at 5:04 PM
		</div>
		<div class="comment_text"><p>Thanks Raymond,<br>I actually don't require to use the init method at all. It was a case what I felt being trouble and the I just managed to prepare a required parameter to send in. But right after that I thought of making the new method just as you told above. I did it as below..</p><p>&lt;cffunction name="doNothingButReturnThis" access="public" returntype="xxx" output="false"&gt;<br>	&lt;cfreturn this /&gt;<br>&lt;/cffunction&gt;</p><p>So would it be perfectly equal to the CreateObject (without init method) using cfinvoke with this above method</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651377">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651377">24</a> by Raymond Camden
		posted on 5/28/2010 at 7:10 PM
		</div>
		<div class="comment_text"><p>Was that a question or a statement? Either way - yes. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651380">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651380">25</a> by Khurram
		posted on 5/28/2010 at 7:15 PM
		</div>
		<div class="comment_text"><p>This was a question afcourse. Just forgot to put the Question Mark perhaps :D<br>And I was just not sure what I did is would be the same as createObject in the listed scenario. So I had to ask this question to be sure.</p><p>So thanks alot. now after your "Yes" I am sure that I can have it like that :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651382">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651382">26</a> by Mohammad Tinawi
		posted on 8/23/2011 at 2:35 PM
		</div>
		<div class="comment_text"><p>Have a question on the performance.<br>Read an article the other day on how objects get instantiated in ColdFusion, and it was said that each method maps to an object when actually complied.<br>That said will it be safe to assume that Using cfinvoke to access a method on a CFC would be faster than actually creating an instance then accessing the method.</p><p>Assuming the CFC is of a services type &amp; doesn't need any properties</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713651381">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713651381">27</a> by Raymond Camden
		posted on 8/24/2011 at 6:44 AM
		</div>
		<div class="comment_text"><p>When you use cfinvoke to call a method on a CFC and use the name of the CFC, the CFC is instantiated anyway.</p></div>
	</div>
</div>
		