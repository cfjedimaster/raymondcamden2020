
<div class="comment" id="c_1713661589">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661589">1</a> by Mark
		posted on 1/30/2007 at 2:49 PM
		</div>
		<div class="comment_text"><p>Thank you sooooo much Ray, I look forward to more :)  I'm printing and putting the jug on now.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661643">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661643">2</a> by Raymond Camden
		posted on 1/30/2007 at 4:32 PM
		</div>
		<div class="comment_text"><p>Putting the jug on?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661647">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661647">3</a> by Sid Wing
		posted on 1/30/2007 at 6:57 PM
		</div>
		<div class="comment_text"><p>Hmmmmmm.... jug...  last time I heard someone "putting the jug on" they were placing it under the spigot of a STILL!!! (grins)</p><p>Anyway... nice stuff, Ray... between Spry and Flex2 my brain has been pretty stuffed the last few weeks.  I HATE being behind the learning curve.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661646">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661646">4</a> by Mark
		posted on 1/30/2007 at 11:51 PM
		</div>
		<div class="comment_text"><p>Now now, no still here lol.  I'm in New Zealand so I guess it's a saying we have that you folk don't.  It means I'm boiling some water for a cup of coffee or tea :)  Nothing sinister, I promise.</p><p>Thanks again Ray, you are a life saver.  Before I try, will this pass multiple checked check boxes to coldfusion the normal way?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661645">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661645">5</a> by Raymond Camden
		posted on 1/31/2007 at 12:10 AM
		</div>
		<div class="comment_text"><p>This sample code only works with text fields. I'm going to update it eventually to work with all form fields.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661652">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661652">6</a> by Mark
		posted on 1/31/2007 at 5:14 AM
		</div>
		<div class="comment_text"><p>Ray, Thanks to your tutorial and a little googling, I got this puppy working, it's made my day.</p><p>// delete images action function<br>function deleteImages() {<br>   var url = "img-del.cfm";<br>   var vaultImgFile = document.imgForm.vaultImgFile;<br>	 var formData = "vaultImgFile=";<br>	 	for (i = 0; i &lt; vaultImgFile.length; i++){<br>		if (vaultImgFile[i].checked == true){<br>			formData = formData + vaultImgFile[i].value + ",";<br>		}//ends IF<br>	}//ends FOR<br>	// strip last comma<br>	formData = formData.substr(0,formData.length-1);<br>	// encode for spry<br>  formData = encodeURI(formData);<br>  Spry.Utils.loadURL('POST', url, true, delComplete, {postData: formData, headers: {"Content-Type": "application/x-www-form-urlencoded; charset=UTF-8"}});<br>}<br>function delComplete(request) {<br>	var result = Spry.Utils.encodeEntities(request.xhRequest.responseText); <br>	$("respContent").innerHTML = "Result was: " + result; <br>	// reset status text area<br>	setTimeout("clearVaultImageResults()",10000);<br>	// reload image list<br>	dsVaultImages.setURL("images.cfm?nocache="+d.getSeconds());<br>	dsVaultImages.setXPath('images/image');<br>	dsVaultImages.loadData();<br>}</p><p>Cheers.<br>Mark.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661644">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661644">7</a> by Massimo Foti
		posted on 1/31/2007 at 10:30 AM
		</div>
		<div class="comment_text"><p>Extract form field value this way can be time consuming. That's why I wrote a JavaScript library for forms that, among other features, let you extract and "serialize" field's value from any form. You can see it in action here<br><a href="http://disq.us/url?url=http%3A%2F%2Fwww.massimocorner.com%2Flibraries%2Fform%2Fsample_serializer.htm%3AdGjGSPeeTHTEedlTTuT3yzkbKnU&amp;cuid=3321886" rel="nofollow noopener" title="http://www.massimocorner.com/libraries/form/sample_serializer.htm">http://www.massimocorner.co...</a></p><p>Hope it could help</p><p>Massimo</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661658">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661658">8</a> by Kate Juliff
		posted on 2/17/2007 at 5:21 AM
		</div>
		<div class="comment_text"><p>Excellent!!!</p><p>I can understand it all but for one part that will be obvious to anyone with a brain and knowledge of Java,</p><p>"Spry automatically passes a collection of data back. The information I'm interested in resides in xhRequest.responseText. Once I have that, I can write out the result in the browser."</p><p>HOW to I display the reasult?</p><p>I have it all working<br>see <a href="http://disq.us/url?url=http%3A%2F%2Fwww.coolabah.com%2Fspry%2Fdemos%2Fgallery%2Ftest.cfm%3Ac4F4BmvwjdrFyf1EtAoluH0Gn8w&amp;cuid=3321886" rel="nofollow noopener" title="http://www.coolabah.com/spry/demos/gallery/test.cfm">http://www.coolabah.com/spr...</a> (underneath the large photo.</p><p>But how can I display the actual result????</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661665">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661665">9</a> by Raymond Camden
		posted on 2/17/2007 at 6:56 AM
		</div>
		<div class="comment_text"><p>There are a few ways to display something. One way is like so:</p><p>Assume foo is the id of a div:</p><p>&lt;div id="foo"&gt;&lt;/div&gt;</p><p>Then in JS you can do:</p><p>var mydiv = document.getElementById("foo");<br>mydiv.innerHTML = "some stirng";</p><p>This will write out some string as the contents of the div.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661642">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661642">10</a> by Kate Juliff
		posted on 2/17/2007 at 7:14 AM
		</div>
		<div class="comment_text"><p>OK. I think I'm missing something.</p><p>On my page I have these functions as per your example<br>function doFormPost(url,formlist,resfunc) {<br>   var formdata = '';<br>   var formarray = formlist.split(',');<br>   for(var i=0; i &lt; formarray.length; i++) {<br>      formdata+='&amp;'+formarray[i]+'=';<br>      var fValue = $(formarray[i]).value;<br>      formdata+=fValue;<br>   }<br>      alert(formdata);<br>   formData = encodeURI(formdata);<br>   Spry.Utils.loadURL('POST', url, true, resfunc, {postData: formdata, headers: {"Content-Type": "application/x-www-form-urlencoded; charset=UTF-8"}});<br>}<br>function resFunc(request) {<br>   var result = request.xhRequest.responseText;<br>   $("result").innerHTML = "Result was: " + result;</p><p>}</p><p>doFormPost is called onclick.</p><p>Given THAT code, how do I display "result?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661649">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661649">11</a> by Kate Juliff
		posted on 2/18/2007 at 5:32 AM
		</div>
		<div class="comment_text"><p>OK I have figured it out to an extent. BUT I'm having trouble with the last parameter of  Spry.Utils.loadURL.</p><p>In the code snippet below I am trying to pass a value to  Spry.Utils.loadURL that will them be passed to resfunc as request. But I cannot work out how to do this.</p><p>The function that calls Spry.Utils.loadURL works ok., I test that it is receiving the correct value by using alert(value). But how do I get this value into the argument list of Spry.Utils.loadURL  so I can display it?</p><p>function doFormPost(url,photoId,resfunc) {<br>   formData = encodeURI(photoId);<br>   Spry.Utils.loadURL('POST', url, true, resfunc, {"Content-Type": "application/x-www-form-urlencoded; charset=UTF-8"});</p><p>}</p><p>function resFunc(request) {<br>   var mydiv = document.getElementById("foo");<br>   var result = request.xhRequest.responseText;<br>   $("result").innerHTML = "Result was: " + result ;<br>   mydiv.innerHTML = result;</p><p>}</p><p>function HandleThumbnailClick(id, photoId)<br>{</p><p>  StopSlideShow();<br>  doFormPost('moon.cfm', photoId,resFunc);<br>  dsPhotos.setCurrentRow(id);<br>  ShowCurrentImage();<br>}</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661653">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661653">12</a> by Raymond Camden
		posted on 2/18/2007 at 8:42 AM
		</div>
		<div class="comment_text"><p>I think if you want to do this you need to store it in a global javascript variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661657">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661657">13</a> by Kate Juliff
		posted on 2/18/2007 at 9:00 AM
		</div>
		<div class="comment_text"><p>But in your example it isn't in a global javascript variable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661651">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661651">14</a> by Raymond Camden
		posted on 2/18/2007 at 9:11 AM
		</div>
		<div class="comment_text"><p>I must be misunderstanding you. You want to do a form post, and when you, remember a value such that when the form post is done you can retrieve it. Is that not true.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661655">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661655">15</a> by Kate Juliff
		posted on 2/18/2007 at 9:25 AM
		</div>
		<div class="comment_text"><p>I am trying to do exactly what you illustrate in <br><a href="http://disq.us/url?url=http%3A%2F%2Fray.camdenfamily.com%2Findex.cfm%2F2007%2F1%2F29%2FDoing--form-Post-in-Spry-2%3AnH0Dct9I258ToFuQEhhskvfjtu4&amp;cuid=3321886" rel="nofollow noopener" title="http://ray.camdenfamily.com/index.cfm/2007/1/29/Doing--form-Post-in-Spry-2">http://ray.camdenfamily.com...</a></p><p>but instead of passing a form variable, I'm trying to post an argument to the function .</p><p>I'm concerned with thew last argument - <br>{postData: formData, headers: {"Content-Type": "application/x-www-form-urlencoded; charset=UTF-8"}}</p><p>where I do not have "formdata", but a variable passed to the function.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661659">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661659">16</a> by Raymond Camden
		posted on 2/18/2007 at 9:37 AM
		</div>
		<div class="comment_text"><p>formdata is simply a query string I build manually of form values. You can use other values instead, like the one you passed in. But it must be in query string form:</p><p>name=value&amp;name=value&amp; etc</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661650">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661650">17</a> by Kate Juliff
		posted on 2/18/2007 at 9:57 AM
		</div>
		<div class="comment_text"><p>I'm sorry, but I don't understand.</p><p>In function doFormPost(url,photoId,resfunc) {<br>   formData = encodeURI(photoId);<br>   Spry.Utils.loadURL('POST', url, true, resfunc, {"Content-Type": "application/x-www-form-urlencoded; charset=UTF-8"});</p><p>}</p><p>How do I pass the contents of photoId</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661661">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661661">18</a> by Raymond Camden
		posted on 2/18/2007 at 10:13 AM
		</div>
		<div class="comment_text"><p>You have a few issues here. First, you didn't follow what I said about name=value (query string) format. You can't just pass a value like photoid. It MUST look like a query string. So if you want to pass photoId, you have ot pass a name for the value as well:</p><p>   var formData = 'photoId='+photoId;</p><p>This says - pass the value photoId, but also give it a name of photoId. In your CFM code that processes this form post, you would use form.photoID.</p><p>Then you must encode the value:</p><p>   formData = encodeURI(formData);</p><p>Lastly, you removed the part of loadURL that contained formData:</p><p>Spry.Utils.loadURL('POST', url, true, resFunc, {postData: formData, headers: {"Content-Type": "application/x-www-form-urlencoded; charset=UTF-8"}});</p><p>See how I pass formData as the value to postData?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661648">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661648">19</a> by Marcelo Macedo
		posted on 4/23/2007 at 7:40 PM
		</div>
		<div class="comment_text"><p>A liked your post, its almost what im looking for, maybe you can help-me</p><p>I need to send post params.</p><p>I can send using this for example:<br>var dsPhotos = new Spry.Data.XMLDataSet("/photos.php", "/gallery/photos/photo", { method: "POST", postData: "galleryid=2000&amp;offset=20&amp;limit=10", headers: { "Content-Type": "application/x-www-form-urlencoded; charset=UTF-8" } });</p><p>Using post data it works,ok, or i can send using your example too, ok, it works.</p><p>But in my aplication a create a spry DataSet, and i dont trigger onload, i do that after a few actions.</p><p>So, i need to send a post params after i create the Dataset, because i use DataSet.loadData() after some time</p><p>But, your example should work, but i couldant populate a spry dataset with my xml result format</p><p>Could you help me??</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661662">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661662">20</a> by Raymond Camden
		posted on 4/23/2007 at 7:55 PM
		</div>
		<div class="comment_text"><p>I'm sorry, but I'm having a hard time understanding your English. Everything after "But in my ..." is a bit greek to me. Can you reword?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661656">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661656">21</a> by Marcelo Macedo
		posted on 4/23/2007 at 9:27 PM
		</div>
		<div class="comment_text"><p>=D=D=D=D</p><p>Really sory, let´s try again</p><p>I need to send post params.</p><p>I can send using this for example:<br>var dsPhotos = new Spry.Data.XMLDataSet("/photos.php", "/gallery/photos/photo", { method: "POST", postData: "galleryid=2000&amp;offset=20&amp;limit=10", headers: { "Content-Type": "application/x-www-form-urlencoded; charset=UTF-8" } });</p><p>Using post data it works,ok, or i can send using your example too, ok, it works.</p><p>My problem is:<br>I dont know hot set Post Params, after define a spry DataSet<br>ex:<br>var myDs = new Spry.Data.XMLDataSet()<br>function triggerLater(){<br>myDs.setXPath("Node/ChildNode")<br>myDs.setURL(myxml.aspx?aLotOfParams=somevalue);<br>myDs.loadData()<br>}</p><p>those params ('aLotOfParams') must be POST, because they have a lot of info.</p><p>But in your example we heve that function:<br>function resFunc(request) {<br>   var result = request.xhRequest.responseText; <br>   $("result").innerHTML = "Result was: " + result;   <br>}</p><p>than ok, i receive my xml, and i can see it, but i need to populate it in my spry data set<br>Somethink like:</p><p>function resFunc(request) {<br>   var result = request.xhRequest.responseText; <br>     mySpryDataSet=request<br>}</p><p>if you have time,could you help me?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661663">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661663">22</a> by Raymond Camden
		posted on 4/23/2007 at 10:18 PM
		</div>
		<div class="comment_text"><p>So are you saying, how do I do a post after my spry data is loaded? If so you simply need to use a dataset observer. The docs cover this and show you how you could run X after data has been loaded.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661654">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661654">23</a> by Marcelo Macedo
		posted on 4/25/2007 at 4:21 PM
		</div>
		<div class="comment_text"><p>test</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661664">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661664">24</a> by Marcelo
		posted on 4/25/2007 at 4:25 PM
		</div>
		<div class="comment_text"><p>No, its not that, by know i made some progress</p><p>there is the source: <a href="http://disq.us/url?url=http%3A%2F%2Fwww.wl.com.br%2FspryXMLv2.zip%3ANYli5UM_Q_gLGn5p6CQSm1QEtk8&amp;cuid=3321886" rel="nofollow noopener" title="http://www.wl.com.br/spryXMLv2.zip">http://www.wl.com.br/spryXM...</a></p><p>So, i have problems to parse my xml data, it works fine in firefox, but not in ie6, do you know why?</p><p>Another thing, i just could use it in Firefox when i removed all the white spaces from my XML, Is there some way  to keep using spaces??</p><p>Thanks for your help!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661660">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661660">25</a> by H Jaber
		posted on 12/16/2007 at 12:45 AM
		</div>
		<div class="comment_text"><p>Ray, this is a great post, thank you for it!</p><p>I went ahead and modified the example slightly and incorporated Massimo's serializer with it. If anyone is interested in downloading the example, please go to:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fblog.webexterminator.com%2Findex.cfm%2F2007%2F12%2F15%2FSpry-Form-Post-Sending-Data-With-Spry-To-The-Server%3AV5Zq_iq62GlPp0122l5FxXQkwMU&amp;cuid=3321886" rel="nofollow noopener" title="http://blog.webexterminator.com/index.cfm/2007/12/15/Spry-Form-Post-Sending-Data-With-Spry-To-The-Server">http://blog.webexterminator...</a></p><p>Thanks again Ray and Massimo, you guys are the best!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661670">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661670">26</a> by Matthew Penn
		posted on 6/8/2008 at 4:39 AM
		</div>
		<div class="comment_text"><p>You might check out the Spry.Utils.submitForm function. It grabs all of the form variables and submits very nicely.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661666">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661666">27</a> by Massimo Foti
		posted on 6/8/2008 at 10:16 AM
		</div>
		<div class="comment_text"><p>Spry.Utils.submitForm is a better solution since it handles &lt;select&gt;, radion buttons and checkboxes too. Just be aware it has a bug, it doesn't properly handles &lt;select&gt; tags whenever their value is an empty string. You can see it in action here:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fwww.massimocorner.com%2Fspry%2FextractParamsFromForm.htm%3Aety7GO8aC8IlnduDvHUPlFOogUE&amp;cuid=3321886" rel="nofollow noopener" title="http://www.massimocorner.com/spry/extractParamsFromForm.htm">http://www.massimocorner.co...</a></p><p>On a side note, Prototype is affected by a similar bug. Actually, it's worst, since it returns different value for IE and FF. At least Spry is wrong, but consistent :-)</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661668">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661668">28</a> by Raymond Camden
		posted on 6/8/2008 at 7:03 PM
		</div>
		<div class="comment_text"><p>Thanks - yea - I definitely recommend submitForm now. This post is rather old. :)</p><p>@MF - Did you report the bug?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661667">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661667">29</a> by Massimo Foti
		posted on 6/8/2008 at 11:52 PM
		</div>
		<div class="comment_text"><p>Yes, I reported the bug</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661669">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661669">30</a> by MikeG
		posted on 12/2/2008 at 3:15 AM
		</div>
		<div class="comment_text"><p>@Ray<br>Realizing that this is an OLD post, when I tried to implement I found that you may need to update this line:</p><p>First I'll grab the value of the form field, one, using the Spry/Prototype $() shortcut:</p><p>To:<br>First I'll grab the value of the form field, one, using the Spry  Spry.$() shortcut:</p><p>The updated versions of the js files no longer support just $(), it is now Spry.$() - or atleast, by changing from $() to Spry.$() it worked</p></div>
	</div>
</div>
		
<div class="comment" id="c_1713661671">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1713661671">31</a> by Raymond Camden
		posted on 12/2/2008 at 3:36 AM
		</div>
		<div class="comment_text"><p>Good point. I'm feeling a bit lazy though so I assume folks will scan the comments. :) I've got way too many blog posts to make a habit out of updating them all. ;)</p></div>
	</div>
</div>
		