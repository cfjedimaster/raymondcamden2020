
<div class="comment" id="c_2663956049">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2663956049">1</a> by Akash Pal
		posted on 5/7/2016 at 9:16 PM
		</div>
		<div class="comment_text"><p>I actually got most of the part, even am able to upload multiple images and as you have mentioned even the server at my end ; ended up getting a blob object. However i do not have the control over server. I replaced these two lines</p><p> fd.append('file'+(images.indexOf(i)+1), imgBlob);<br>                    fd.append('fileName'+(images.indexOf(i)+1), <a href="http://disq.us/url?url=http%3A%2F%2Ffile.name%3AUGqt-C7b1V2q1kv6IsFB9zMLDpg&amp;cuid=3321886" rel="nofollow noopener" title="file.name">file.name</a>);</p><p>with</p><p>fd.append('attachments', imgBlob);</p><p>Now from this position how do I give this image blob a fileName and mime type<br>without adding a new form field.</p><p>My response currently looks like this:</p><p>"attachments": {<br>        "multimediaId": 538073,<br>        "multimediaType": "unknown",<br>        "text": "",<br>        "url": "/c/document_library/get_file?groupId=509206&amp;folderId=538060&amp;title=-806640443blob",<br>        "usedFor": "ATTACHMENT"<br>      }</p></div>
	</div>
</div>
		
<div class="comment" id="c_2664164855">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2664164855">2</a> (In reply to <a href="#c_2663956049">#1</a>) by Akash Pal
		posted on 5/8/2016 at 12:44 AM
		</div>
		<div class="comment_text"><p>I actually solved the issue, I replaced following lines</p><p>fd.append('file'+(images.indexOf(i)+1), imgBlob);<br>fd.append('fileName'+(images.indexOf(i)+1), <a href="http://disq.us/url?url=http%3A%2F%2Ffile.name%3AUGqt-C7b1V2q1kv6IsFB9zMLDpg&amp;cuid=3321886" rel="nofollow noopener" title="file.name">file.name</a>);</p><p>with</p><p>fd.append('attachments',imgBlob,'sky.jpg');</p><p>I just provided a third parameter with a file-name.<br>So the server no longer received blob objects.</p><p>Thank you for the assistance. So would be procedure remain same if instead of images some kind document is used.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2664179791">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2664179791">3</a> (In reply to <a href="#c_2664164855">#2</a>) by Raymond Camden
		posted on 5/8/2016 at 1:01 AM
		</div>
		<div class="comment_text"><p>Yep - you are perfectly correct and that is documented in the append method. I wish I had seen that - thank you for sharing. Monday I'll edit the post to point out your comment below. (Since some folks never read the comments.)</p></div>
	</div>
</div>
		
<div class="comment" id="c_2664554542">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2664554542">4</a> (In reply to <a href="#c_2664179791">#3</a>) by Akash Pal
		posted on 5/8/2016 at 9:31 AM
		</div>
		<div class="comment_text"><p>Okay that's perfectly all right. Well I came across another issue in android ; when I add a picture from the recent menu (1st image) the image is not rendered and it gets broken.(2nd image). However upon uploading its gets rendered properly.(image 3). The the first is broke under the Download section is the one which wasn't rendered.</p><p>However this issue doesn't occur if I select select an image from the gallery or download section.</p><p>What maybe the probable reason for this cause?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2668653083">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2668653083">5</a> (In reply to <a href="#c_2664554542">#4</a>) by Raymond Camden
		posted on 5/10/2016 at 6:00 PM
		</div>
		<div class="comment_text"><p>Can you see if you can recreate this in a simpler demo? Try this one: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcfjedimaster%2FCordova-Examples%2Ftree%2Fmaster%2Fbasic_camera%3AWEbylOLJYNa0zM7tOFAyV0fjEbw&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cfjedimaster/Cordova-Examples/tree/master/basic_camera">https://github.com/cfjedima...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2670158164">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2670158164">6</a> (In reply to <a href="#c_2668653083">#5</a>) by Akash Pal
		posted on 5/11/2016 at 2:35 PM
		</div>
		<div class="comment_text"><p>I actually found a way around by using <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fwymsee%2Fcordova-imagePicker%3Abd9c6pnK9sVfyC35DIpXhJRIljg&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/wymsee/cordova-imagePicker">https://github.com/wymsee/c...</a> .</p></div>
	</div>
</div>
		
<div class="comment" id="c_2692443970">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ygrDUCyNhU.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2692443970">7</a> by Tony
		posted on 5/24/2016 at 8:19 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, how hard is to use this in Ionic app? I'm using <a href="http://disq.us/url?url=http%3A%2F%2Fngcordova.com%2Fdocs%2Fplugins%2FfileTransfer%2F%3A6a3U0VG5sVXSzp6F8sdjoD_RBBQ&amp;cuid=3321886" rel="nofollow noopener" title="http://ngcordova.com/docs/plugins/fileTransfer/">http://ngcordova.com/docs/p...</a> , how to modify your example using this plugin?<br>Thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2692593654">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2692593654">8</a> (In reply to <a href="#c_2692443970">#7</a>) by Raymond Camden
		posted on 5/24/2016 at 11:30 AM
		</div>
		<div class="comment_text"><p>It shouldn't be difficult at all. Just give it a try.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2694078510">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_ygrDUCyNhU.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2694078510">9</a> (In reply to <a href="#c_2692593654">#8</a>) by Tony
		posted on 5/25/2016 at 4:57 AM
		</div>
		<div class="comment_text"><p>I'll try, but first, how to "transform" this jQuery to angular?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2694477547">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2694477547">10</a> (In reply to <a href="#c_2694078510">#9</a>) by Raymond Camden
		posted on 5/25/2016 at 12:43 PM
		</div>
		<div class="comment_text"><p>Well, I'm not sure there is *one* way of doing it - but I'd create a service to handle taking an array of file obs and sending it to the server where you want stuff stored. Or you could just do it in the controller. That's sounds "impure" in terms of building proper Angular apps, but it may 'just work' for you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2695872852">
	<div>
		<img src="https://disqus.com/api/users/avatars/laersheng.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2695872852">11</a> (In reply to <a href="#c_2664164855">#2</a>) by laersheng
		posted on 5/26/2016 at 4:23 AM
		</div>
		<div class="comment_text"><p>angular or jquery? I replaced jquery with angular, but I got the FormData empty</p></div>
	</div>
</div>
		
<div class="comment" id="c_3050946204">
	<div>
		<img src="https://disqus.com/api/users/avatars/divanvanbiljon.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3050946204">12</a> by Divan van Biljon
		posted on 12/13/2016 at 11:57 PM
		</div>
		<div class="comment_text"><p>Hi, I've tried implementing this in Ionic 2 but I'm getting the following errors</p><p>Error:</p><p>Error in Success callbackId: File1313867162 : [object Object]<br>Uncaught [object Object]callbackFromNative @ cordova.js:314(anonymous function) @ VM107:1<br>cordova.js:312 Error in Success callbackId: File1313867163 : TypeError: Cannot read property 'result' of undefined</p><p>Code:</p><p><a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2Fix2Fzfv0%3AxnKWBqC060oXAFlNdwKnw5BfBLo&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/ix2Fzfv0">http://pastebin.com/ix2Fzfv0</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3050994093">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3050994093">13</a> (In reply to <a href="#c_3050946204">#12</a>) by Raymond Camden
		posted on 12/14/2016 at 12:23 AM
		</div>
		<div class="comment_text"><p>I'd say look at the arguments passed to the success handler and see why "result" wasn't there.</p><p>Ah - I see you are using ES - "this" is being bound different I bet. Just... figure out where result should be. :) Start there.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3050995713">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3050995713">14</a> (In reply to <a href="#c_3050994093">#13</a>) by Raymond Camden
		posted on 12/14/2016 at 12:24 AM
		</div>
		<div class="comment_text"><p>Try reader.result.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3050996328">
	<div>
		<img src="https://disqus.com/api/users/avatars/divanvanbiljon.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3050996328">15</a> (In reply to <a href="#c_3050994093">#13</a>) by Divan van Biljon
		posted on 12/14/2016 at 12:25 AM
		</div>
		<div class="comment_text"><p>How would you propose I go about doing that? I'm still new to angular 2 but if I have sort of an Idea where to look then I'll know xD</p></div>
	</div>
</div>
		
<div class="comment" id="c_3050997444">
	<div>
		<img src="https://disqus.com/api/users/avatars/divanvanbiljon.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3050997444">16</a> (In reply to <a href="#c_3050995713">#14</a>) by Divan van Biljon
		posted on 12/14/2016 at 12:26 AM
		</div>
		<div class="comment_text"><p>Okay I'll give it a try, I take it i should check out the file parameter being passed through correct? from this</p><p>entry.file(function(file) {</p></div>
	</div>
</div>
		
<div class="comment" id="c_3051000408">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3051000408">17</a> (In reply to <a href="#c_3050997444">#16</a>) by Raymond Camden
		posted on 12/14/2016 at 12:29 AM
		</div>
		<div class="comment_text"><p>I really think it will be in the reader object.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3051003551">
	<div>
		<img src="https://disqus.com/api/users/avatars/divanvanbiljon.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3051003551">18</a> (In reply to <a href="#c_3051000408">#17</a>) by Divan van Biljon
		posted on 12/14/2016 at 12:31 AM
		</div>
		<div class="comment_text"><p>Okay will have a look now and let you know what I find. Hopefully we can sort this out for other people to use :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3051009624">
	<div>
		<img src="https://disqus.com/api/users/avatars/divanvanbiljon.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3051009624">19</a> (In reply to <a href="#c_3051000408">#17</a>) by Divan van Biljon
		posted on 12/14/2016 at 12:37 AM
		</div>
		<div class="comment_text"><p>Okay so I've replaced it with reader.result so I believe you are correct that it was in the object. I now get a different error regarding the file name I'm passing through as It cant find the property 'venue_images' which is passed through to the fd.append.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3051026093">
	<div>
		<img src="https://disqus.com/api/users/avatars/divanvanbiljon.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3051026093">20</a> (In reply to <a href="#c_3051000408">#17</a>) by Divan van Biljon
		posted on 12/14/2016 at 12:53 AM
		</div>
		<div class="comment_text"><p>Is the reader.result/this.result suppose to return an empty object?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3051030592">
	<div>
		<img src="https://disqus.com/api/users/avatars/divanvanbiljon.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3051030592">21</a> (In reply to <a href="#c_3051000408">#17</a>) by Divan van Biljon
		posted on 12/14/2016 at 12:57 AM
		</div>
		<div class="comment_text"><p>FileReader {_readyState: 2, _error: null, _result: ArrayBuffer, _progress: 9843, _localURL: "cdvfile://localhost/cache-external/IMG_20161214_025141.jpg"…}</p><p>This is what is returned when I console.log(reader)</p><p>And console.log(reader.result) returns ArrayBuffer {}</p></div>
	</div>
</div>
		
<div class="comment" id="c_3051055568">
	<div>
		<img src="https://disqus.com/api/users/avatars/divanvanbiljon.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3051055568">22</a> (In reply to <a href="#c_3051000408">#17</a>) by Divan van Biljon
		posted on 12/14/2016 at 1:18 AM
		</div>
		<div class="comment_text"><p>Okay I've got it to not throw any errors anymore but now for some reason it's not appending anything to the 'fd'. When I console.log(fd), it returns an empty object</p></div>
	</div>
</div>
		
<div class="comment" id="c_3051137690">
	<div>
		<img src="https://disqus.com/api/users/avatars/divanvanbiljon.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3051137690">23</a> by Divan van Biljon
		posted on 12/14/2016 at 2:30 AM
		</div>
		<div class="comment_text"><p>Hey man. Okay so I've managed to post the data to server except for the image files, for some reason that is not being sent to the server, basically its not being appended to the FormData which I can't understand why :(</p><p>Here is a Pastebin for the code im currently using: <a href="http://disq.us/url?url=http%3A%2F%2Fpastebin.com%2FaUfBwMdq%3AkyITEfNzLoq4rZprhLfLHU7yZNI&amp;cuid=3321886" rel="nofollow noopener" title="http://pastebin.com/aUfBwMdq">http://pastebin.com/aUfBwMdq</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3051215241">
	<div>
		<img src="https://disqus.com/api/users/avatars/divanvanbiljon.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3051215241">24</a> by Divan van Biljon
		posted on 12/14/2016 at 3:40 AM
		</div>
		<div class="comment_text"><p>Okay so the reader is reading the file in the array, its creating this blob, is this correct?<br>Blob {size: 72295, type: "image/jpeg"}...</p></div>
	</div>
</div>
		
<div class="comment" id="c_3051218668">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3051218668">25</a> (In reply to <a href="#c_3051215241">#24</a>) by Raymond Camden
		posted on 12/14/2016 at 3:43 AM
		</div>
		<div class="comment_text"><p>I believe so.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3051219696">
	<div>
		<img src="https://disqus.com/api/users/avatars/divanvanbiljon.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3051219696">26</a> (In reply to <a href="#c_3051218668">#25</a>) by Divan van Biljon
		posted on 12/14/2016 at 3:45 AM
		</div>
		<div class="comment_text"><p>the thing is it's still not appending and im not seeing it server side or the network call being made with the passed parameters?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3051240504">
	<div>
		<img src="https://disqus.com/api/users/avatars/divanvanbiljon.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3051240504">27</a> (In reply to <a href="#c_3051218668">#25</a>) by Divan van Biljon
		posted on 12/14/2016 at 4:07 AM
		</div>
		<div class="comment_text"><p>Provisional headers are shown<br>Accept:application/json, text/plain, */*<br>Content-Type:multipart/form-data; boundary=----WebKitFormBoundaryAW2uo8dUCJ2x6u13<br>Origin:file://<br>User-Agent:Mozilla/5.0 (Linux; Android 6.0.1; SM-G900H Build/MMB29K) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/52.0.2743.116 Crosswalk/22.52.561.4 Mobile Safari/537.36</p><p>That is the Request Headers output.</p><p>Request payload</p><p>------WebKitFormBoundaryAW2uo8dUCJ2x6u13<br>Content-Disposition: form-data; name="id"</p><p>58504f5ace291b1d4036a7ba<br>------WebKitFormBoundaryAW2uo8dUCJ2x6u13<br>Content-Disposition: form-data; name="venue"</p><p>{"name":"","slogan":"","address":"","description":""}<br>------WebKitFormBoundaryAW2uo8dUCJ2x6u13--</p></div>
	</div>
</div>
		
<div class="comment" id="c_3051864774">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3051864774">28</a> (In reply to <a href="#c_3051219696">#26</a>) by Raymond Camden
		posted on 12/14/2016 at 3:33 PM
		</div>
		<div class="comment_text"><p>Sorry - I'm out for the day. I'll try to look more later tonight.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3051882614">
	<div>
		<img src="https://disqus.com/api/users/avatars/divanvanbiljon.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3051882614">29</a> (In reply to <a href="#c_3051864774">#28</a>) by Divan van Biljon
		posted on 12/14/2016 at 3:45 PM
		</div>
		<div class="comment_text"><p>Cool thanks man I appreciate it, once this is done then my project will be completed :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3486432781">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_cxQXlcDP0a.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3486432781">30</a> by Andrew Watson
		posted on 8/25/2017 at 3:37 PM
		</div>
		<div class="comment_text"><p>Is it possible to show an icon which will be replaced by photo selected?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3486665445">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3486665445">31</a> (In reply to <a href="#c_3486432781">#30</a>) by Raymond Camden
		posted on 8/25/2017 at 5:51 PM
		</div>
		<div class="comment_text"><p>Sure - you would add N images to the page with an icon, and as you upload each one, change the src on an image to the new source.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3486822669">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_cxQXlcDP0a.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3486822669">32</a> by Andrew Watson
		posted on 8/25/2017 at 7:29 PM
		</div>
		<div class="comment_text"><p>how should i accept the files on server side on Php?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3486823127">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_cxQXlcDP0a.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3486823127">33</a> (In reply to <a href="#c_3486665445">#31</a>) by Andrew Watson
		posted on 8/25/2017 at 7:30 PM
		</div>
		<div class="comment_text"><p>thanks for quick answer, any ideas how to accept the files on php?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3486825448">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3486825448">34</a> (In reply to <a href="#c_3486822669">#32</a>) by Raymond Camden
		posted on 8/25/2017 at 7:31 PM
		</div>
		<div class="comment_text"><p>I don't know - I use Node, and in the past, ColdFusion.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3486825580">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3486825580">35</a> (In reply to <a href="#c_3486823127">#33</a>) by Raymond Camden
		posted on 8/25/2017 at 7:31 PM
		</div>
		<div class="comment_text"><p>See my other comment.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3486828109">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_cxQXlcDP0a.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3486828109">36</a> (In reply to <a href="#c_3486825448">#34</a>) by Andrew Watson
		posted on 8/25/2017 at 7:33 PM
		</div>
		<div class="comment_text"><p>thanks again for quick answer :) <br>i am just wondering what is the variable name upon receiving</p></div>
	</div>
</div>
		
<div class="comment" id="c_3486830507">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3486830507">37</a> (In reply to <a href="#c_3486828109">#36</a>) by Raymond Camden
		posted on 8/25/2017 at 7:34 PM
		</div>
		<div class="comment_text"><p>Ah, see this line: fd.append('fileName'+(images.indexOf(i)+1), <a href="http://disq.us/url?url=http%3A%2F%2Ffile.name%3AUGqt-C7b1V2q1kv6IsFB9zMLDpg&amp;cuid=3321886" rel="nofollow noopener" title="file.name">file.name</a>);</p><p>basically fileName1, fileName2, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3486834296">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_cxQXlcDP0a.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3486834296">38</a> (In reply to <a href="#c_3486830507">#37</a>) by Andrew Watson
		posted on 8/25/2017 at 7:37 PM
		</div>
		<div class="comment_text"><p>Thanks a lot for your solution, it is saved a lot of time for me :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3486835169">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3486835169">39</a> (In reply to <a href="#c_3486834296">#38</a>) by Raymond Camden
		posted on 8/25/2017 at 7:37 PM
		</div>
		<div class="comment_text"><p>Cool - if you can bill a rich client, visit the Amazon wish list. ;)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3486843271">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_cxQXlcDP0a.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3486843271">40</a> (In reply to <a href="#c_3486835169">#39</a>) by Andrew Watson
		posted on 8/25/2017 at 7:43 PM
		</div>
		<div class="comment_text"><p>You are the best, Raymond :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3486949063">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_cxQXlcDP0a.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3486949063">41</a> by Andrew Watson
		posted on 8/25/2017 at 8:51 PM
		</div>
		<div class="comment_text"><p>One more question, when i tap to select a photo, it opens the gallery of images. Is it possible to take a photo directly from camera? E.g. to show a message box first: Upload existing image or Take a picture. <br>Thank you.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3486953047">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3486953047">42</a> (In reply to <a href="#c_3486949063">#41</a>) by Raymond Camden
		posted on 8/25/2017 at 8:54 PM
		</div>
		<div class="comment_text"><p>Yes - the Camera plugin supports doing either or.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3487020255">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_cxQXlcDP0a.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3487020255">43</a> (In reply to <a href="#c_3486953047">#42</a>) by Andrew Watson
		posted on 8/25/2017 at 9:44 PM
		</div>
		<div class="comment_text"><p>alright, thank you :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3487839048">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_cxQXlcDP0a.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3487839048">44</a> by Andrew Watson
		posted on 8/26/2017 at 1:35 PM
		</div>
		<div class="comment_text"><p>It sends only 1 file, i am not understanding whether the issue is on cordova or on server side. The file sent is the latest selected file, all others are being ignored. Any advice would be appreciated.</p><p>Accepting the files with following code:<br>	 for($i=1; $i&lt;10;$i++)<br>        {</p><p>                	$filename = $_FILES["file".$i]["name"];</p><p>                	$newfilename = md5($filename) .date(isu).".png";<br>                if(@copy($_FILES['file'.$i]['tmp_name'],"uploads/".	$newfilename))<br>                {</p><p>                    $messages[] = $_FILES['file'.$i]['name'].' uploaded';<br>                }<br>                else<br>                {<br>                    /*** an error message ***/<br>                    $messages[] = 'Uploading '.$_FILES['file'.$i]['name'].' Failed';<br>                }<br>            }</p></div>
	</div>
</div>
		
<div class="comment" id="c_3487844198">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3487844198">45</a> (In reply to <a href="#c_3487839048">#44</a>) by Raymond Camden
		posted on 8/26/2017 at 1:40 PM
		</div>
		<div class="comment_text"><p>Use dev tools to debug the app and check the network panel. Confirm it is only sending one file.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3487903814">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_cxQXlcDP0a.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3487903814">46</a> (In reply to <a href="#c_3487844198">#45</a>) by Andrew Watson
		posted on 8/26/2017 at 2:27 PM
		</div>
		<div class="comment_text"><p>alright, the problem is on server side. <br>If i change the server side code to accept file number 2 it accepts it. But if create variables to accept file 1, file 2 etc. it accepts only file 1. Any suggestions?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3487918509">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3487918509">47</a> (In reply to <a href="#c_3487903814">#46</a>) by Raymond Camden
		posted on 8/26/2017 at 2:39 PM
		</div>
		<div class="comment_text"><p>Well, I don't know PHP so I don't know what to tell you. Generally, your code needs to say: is there  form field called fileX? if so, grab it. then check for fileX+1. And keep doing that till fileX+1 doesn't exist.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3488371233">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_cxQXlcDP0a.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3488371233">48</a> (In reply to <a href="#c_3487918509">#47</a>) by Andrew Watson
		posted on 8/26/2017 at 8:38 PM
		</div>
		<div class="comment_text"><p>alright, thanks a lot for support</p></div>
	</div>
</div>
		
<div class="comment" id="c_4408194569">
	<div>
		<img src="https://disqus.com/api/users/avatars/nurkhasanahh.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4408194569">49</a> by Nur Khasanah
		posted on 4/3/2019 at 6:09 PM
		</div>
		<div class="comment_text"><p>please update this source code into Ionic 3 version</p></div>
	</div>
</div>
		
<div class="comment" id="c_4408211657">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4408211657">50</a> (In reply to <a href="#c_4408194569">#49</a>) by Raymond Camden
		posted on 4/3/2019 at 6:20 PM
		</div>
		<div class="comment_text"><p>The code I shared here would work fine in Ionic 1, 2, or 3. The focus was on the JS code to upload data, not the UI/UX front end, so it should "just work" in Ionic. Not as a copy and paste of course, but you get the idea.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4408277102">
	<div>
		<img src="https://disqus.com/api/users/avatars/nurkhasanahh.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4408277102">51</a> (In reply to <a href="#c_4408211657">#50</a>) by Nur Khasanah
		posted on 4/3/2019 at 7:05 PM
		</div>
		<div class="comment_text"><p>okay thanks. is it possible if I insert multiple images into multiple file keys and uploading to server ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4408284058">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4408284058">52</a> (In reply to <a href="#c_4408277102">#51</a>) by Raymond Camden
		posted on 4/3/2019 at 7:09 PM
		</div>
		<div class="comment_text"><p>I'm not quite sure what you are asking. I'm associating each image with a name, fileX, where X increments. So on the server it would be file1, file2, etc.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4408295804">
	<div>
		<img src="https://disqus.com/api/users/avatars/nurkhasanahh.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4408295804">53</a> (In reply to <a href="#c_4408284058">#52</a>) by Nur Khasanah
		posted on 4/3/2019 at 7:17 PM
		</div>
		<div class="comment_text"><p>thanks. no problem anymore.</p></div>
	</div>
</div>
		