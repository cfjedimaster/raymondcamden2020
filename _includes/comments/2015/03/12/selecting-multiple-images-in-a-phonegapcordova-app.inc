
<div class="comment" id="c_1903287132">
	<div>
		<img src="https://disqus.com/api/users/avatars/mailpravink.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1903287132">1</a> by mailpravink
		posted on 3/12/2015 at 2:35 PM
		</div>
		<div class="comment_text"><p>Thank you Raymond !!! I was just waiting for this. Kudos</p></div>
	</div>
</div>
		
<div class="comment" id="c_1909140963">
	<div>
		<img src="https://disqus.com/api/users/avatars/martincisneroscapistrn.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1909140963">2</a> by Martin Cisneros Capistrán
		posted on 3/16/2015 at 1:41 AM
		</div>
		<div class="comment_text"><p>Very useful, thanks !!</p></div>
	</div>
</div>
		
<div class="comment" id="c_1935808880">
	<div>
		<img src="https://disqus.com/api/users/avatars/mariakhaled.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1935808880">3</a> by Maria khaled
		posted on 3/30/2015 at 12:22 PM
		</div>
		<div class="comment_text"><p>it doesn't work with me. he can't read from content://media.... <br>if the path is 'http://..' it work. what I need do to fix it.<br>this is my code:<br>$scope.allImages = [];<br> function UploadPicture(imageURI) {<br>        $scope.allImages.splice($scope.allImages.length, 0, imageURI);<br>        $scope.$apply();<br>      }</p><p>$scope.FindPicture = function () {</p><p>           navigator.camera.getPicture(UploadPicture, function(imageData) {<br>                    alert('get picture failed');<br>                    },{<br>                    quality: 50,<br>                    destinationType: navigator.camera.DestinationType.FILE_URI,<br>                    sourceType: navigator.camera.PictureSourceType.PHOTOLIBRARY<br>                }<br>            );<br>  }</p><p>and in page index.htm:<br>a class="item item-list-detail"&gt;<br>&lt;ion-scroll direction="x"&gt;<br>&lt;img ng-repeat="image in allImages" ng-src="{{image}}" ng-click="showImages($index)" class="image-list-thumb"/&gt;<br>&lt;/ion-scroll&gt;</p><p>can any one help me please.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1935930126">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1935930126">4</a> (In reply to <a href="#c_1935808880">#3</a>) by Raymond Camden
		posted on 3/30/2015 at 1:56 PM
		</div>
		<div class="comment_text"><p>How doesn't it work?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1936056366">
	<div>
		<img src="https://disqus.com/api/users/avatars/mariakhaled.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1936056366">5</a> (In reply to <a href="#c_1935930126">#4</a>) by Maria khaled
		posted on 3/30/2015 at 2:59 PM
		</div>
		<div class="comment_text"><p>yes if I want to choose an image from my android phone doesn't work it work only if I take picture directly from my camera. I think it can't read from content //media/external/images/media.<br>if I choose an image from internet he take it only from the gallery doesn't work.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1936347481">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1936347481">6</a> (In reply to <a href="#c_1936056366">#5</a>) by Raymond Camden
		posted on 3/30/2015 at 5:44 PM
		</div>
		<div class="comment_text"><p>Um, I'm having a hard time understanding your English. What version of my app did you try?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1936413006">
	<div>
		<img src="https://disqus.com/api/users/avatars/mariakhaled.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1936413006">7</a> (In reply to <a href="#c_1936347481">#6</a>) by Maria khaled
		posted on 3/30/2015 at 6:18 PM
		</div>
		<div class="comment_text"><p>yes my English not good.</p><p>I tried this one "Option Two – Media-Capture API"</p></div>
	</div>
</div>
		
<div class="comment" id="c_1941051153">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1941051153">8</a> (In reply to <a href="#c_1936413006">#7</a>) by Raymond Camden
		posted on 4/2/2015 at 1:08 AM
		</div>
		<div class="comment_text"><p>And how doesn't it work? It doesn't render in the page?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1964775002">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1964775002">9</a> by nehil
		posted on 4/13/2015 at 11:59 AM
		</div>
		<div class="comment_text"><p>How can I upload Multiple selected images to server?</p></div>
	</div>
</div>
		
<div class="comment" id="c_1964951816">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1964951816">10</a> (In reply to <a href="#c_1964775002">#9</a>) by Raymond Camden
		posted on 4/13/2015 at 1:54 PM
		</div>
		<div class="comment_text"><p>You could use the FileTransfer plugin, but it does one at a time. You could also use XHR2.</p></div>
	</div>
</div>
		
<div class="comment" id="c_1982591122">
	<div>
		<img src="https://disqus.com/api/users/avatars/Ferryfax.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_1982591122">11</a> by Gary Howard
		posted on 4/23/2015 at 3:51 AM
		</div>
		<div class="comment_text"><p>imagePicker is good but it doesn't support videos.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2107957967">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_6h4khvvGZP.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2107957967">12</a> by Clark
		posted on 6/30/2015 at 4:50 AM
		</div>
		<div class="comment_text"><p>Hi i am wondering do i have to use Angular js for it? I see that the lib has all the angular js files, but the index just has the ionic referenced. And i just take the folder as it is, the "Multipleimageselect2" folder and packaged that and tried to run it, and clicked the select images, and it doesnt open the gallery. </p></div>
	</div>
</div>
		
<div class="comment" id="c_2108423273">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2108423273">13</a> (In reply to <a href="#c_2107957967">#12</a>) by Raymond Camden
		posted on 6/30/2015 at 12:59 PM
		</div>
		<div class="comment_text"><p>AngularJS is not required - it is just what I used for my demo. You can't take the code as is - you would need to use Ionic for it. Well, I mean my code. You can use the technique of course outside of Ionic.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2178750131">
	<div>
		<img src="https://disqus.com/api/users/avatars/chichengdeng.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2178750131">14</a> by Chicheng Deng
		posted on 8/7/2015 at 1:58 AM
		</div>
		<div class="comment_text"><p>This is just what I want , thanks you so much Raymond!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2181170064">
	<div>
		<img src="https://disqus.com/api/users/avatars/nehilmistry.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2181170064">15</a> by Nehil Mistry
		posted on 8/8/2015 at 12:31 PM
		</div>
		<div class="comment_text"><p>How can I send multiple images selected at same time? Do file transfer support sending multiple images at same time? Is there any other solution to send images except using for loop?</p><p>I have form which have some input data fields and images to select which further on click sends data to server. Currently what I am doing is sending form data(using option parameter in file transfer plugin of cordova) every-time with each image and filtering data on server side(prevent adding duplicates).</p><p>What will be the best way to achieve above functionality? Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_2181248771">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2181248771">16</a> (In reply to <a href="#c_2181170064">#15</a>) by Raymond Camden
		posted on 8/8/2015 at 1:45 PM
		</div>
		<div class="comment_text"><p>The FileTransfer object only supports one per instance, but you could do N instances and wait for them all to complete. Another option is to use XHR2 which lets you do file uploads via JavaScript too. That isn't a Cordova thing, but a "modern browser" thing. It would let you make one Form post with N uploads.</p><p>I can't make any promises, but I've added this idea to my queue of stuff to write.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2306491495">
	<div>
		<img src="https://disqus.com/api/users/avatars/jafarullahansari.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2306491495">17</a> by Jafarullah Ansari
		posted on 10/14/2015 at 8:38 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,  I tried the above code samples for my project.. especially option 3.. but it seems there is problem in getting the picture from photo library..</p><p>Below is the part of the program which causing the issue..</p><p>pls kindly help me to resolve this issue..</p><p>                                                window.imagePicker.getPictures(</p><p>                            function(results) {<br>                                for (var i = 0; i &lt; results.length; i++) {</p><p>                                    var ft = new FileTransfer();<br>                                    ft.upload(results[i], encodeURI("http://192.168.8.7:80/mShare_fileupload/upload.php"), null, null, options);<br>                                    console.log('Image URI: ' + results[i]);<br>                                    $scope.images.push(results[i]);<br>                                }<br>                                if (!$scope.$$phase) {<br>                                    $scope.$apply();<br>                                }<br>                            }, function(error) {<br>                                alert("error");<br>                        console.log('Error: ' + error);<br>                    }, {<br>                        maximumImagesCount: 2,<br>                        quality: 50,<br>                        width: 400,<br>                        destinationType: Camera.DestinationType.FILE_URI,<br>            sourceType: Camera.PictureSourceType.PHOTOLIBRARY<br>                    }<br>                    );</p></div>
	</div>
</div>
		
<div class="comment" id="c_2306982062">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2306982062">18</a> (In reply to <a href="#c_2306491495">#17</a>) by Raymond Camden
		posted on 10/14/2015 at 2:57 PM
		</div>
		<div class="comment_text"><p>You didn't say what your issue was. What I mean is, you said you got an error, but not what the error was.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2307592836">
	<div>
		<img src="https://disqus.com/api/users/avatars/jafarullahansari.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2307592836">19</a> (In reply to <a href="#c_2306982062">#18</a>) by Jafarullah Ansari
		posted on 10/14/2015 at 8:41 PM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>I have tried to check the above option 3 code to select multiple images at a time by using phonegap.. but i couldn't able to access the photo library by clicking "Select Images" on android device.. Whether your image picker code would support only for ios platform.. ?? Because in all your demo, u had tested only on iOS Simulators..  Could we able to perform the same process on phonegap to support for both ios and android devices..?</p><p>Thanks..</p></div>
	</div>
</div>
		
<div class="comment" id="c_2307749584">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2307749584">20</a> (In reply to <a href="#c_2307592836">#19</a>) by Raymond Camden
		posted on 10/14/2015 at 9:43 PM
		</div>
		<div class="comment_text"><p>So it failed to let you select pictures? If so, you should file  bug report with the plugin author to see if they know what it is up. It just worked for me, but as you said, I used iOS.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2322821583">
	<div>
		<img src="https://disqus.com/api/users/avatars/jamesagwa.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2322821583">21</a> by James
		posted on 10/23/2015 at 1:43 PM
		</div>
		<div class="comment_text"><p>Great tuts Ray! This really comes in handy. Thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_2322900460">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2322900460">22</a> (In reply to <a href="#c_2322821583">#21</a>) by Raymond Camden
		posted on 10/23/2015 at 2:31 PM
		</div>
		<div class="comment_text"><p>You are most welcome.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2369832460">
	<div>
		<img src="https://disqus.com/api/users/avatars/ykarthikreddy.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2369832460">23</a> by ykarthik reddy
		posted on 11/20/2015 at 11:56 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, when I use cordova camera plugin I'm getting the file_uri which is different from the file_uri which i was getting from the imagePicker plugin..Due to this different uri I cant able to extract the EXIF data from the URI of imagePicker. Can u plz help me with this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2370224152">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2370224152">24</a> (In reply to <a href="#c_2369832460">#23</a>) by Raymond Camden
		posted on 11/20/2015 at 4:38 PM
		</div>
		<div class="comment_text"><p>I don't know how your getting EXIF data now, but it sounds like an issue you should raise with the plugin author.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2399315089">
	<div>
		<img src="https://disqus.com/api/users/avatars/tejalpandya.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2399315089">25</a> by Tejal Pandya
		posted on 12/8/2015 at 10:35 AM
		</div>
		<div class="comment_text"><p>multipleimageselect2 does not working... no any gallary open. anubody can solve this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2399582000">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2399582000">26</a> (In reply to <a href="#c_2399315089">#25</a>) by Raymond Camden
		posted on 12/8/2015 at 2:47 PM
		</div>
		<div class="comment_text"><p>You should reach out to the plugin author directly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2401087672">
	<div>
		<img src="https://disqus.com/api/users/avatars/tejalpandya.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2401087672">27</a> (In reply to <a href="#c_2307592836">#19</a>) by Tejal Pandya
		posted on 12/9/2015 at 10:52 AM
		</div>
		<div class="comment_text"><p>i also have this same type of error. i cant select multiple image at a time but i cant.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2401091035">
	<div>
		<img src="https://disqus.com/api/users/avatars/tejalpandya.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2401091035">28</a> by Tejal Pandya
		posted on 12/9/2015 at 10:56 AM
		</div>
		<div class="comment_text"><p>Hello raymond, i am not selecting multiple image selection using cordova. i tried multiimageselector2 demo but it crashes every time.In ios, it performs very well. Is anything solution for this?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2401126439">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2401126439">29</a> (In reply to <a href="#c_2401091035">#28</a>) by Raymond Camden
		posted on 12/9/2015 at 11:34 AM
		</div>
		<div class="comment_text"><p>You need to reach out to the plugin author and report the issue you are seeing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2401202149">
	<div>
		<img src="https://disqus.com/api/users/avatars/tejalpandya.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2401202149">30</a> (In reply to <a href="#c_2401126439">#29</a>) by Tejal Pandya
		posted on 12/9/2015 at 12:47 PM
		</div>
		<div class="comment_text"><p>i dont know plugin author contact details. if u have then please give me. Its too urgent for me.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2401460626">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2401460626">31</a> (In reply to <a href="#c_2401202149">#30</a>) by Raymond Camden
		posted on 12/9/2015 at 3:45 PM
		</div>
		<div class="comment_text"><p>I linked to the repo in the blog entry.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2492388065">
	<div>
		<img src="https://disqus.com/api/users/avatars/claudioviola.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2492388065">32</a> by Claudio Viola
		posted on 2/2/2016 at 6:33 PM
		</div>
		<div class="comment_text"><p>Hi thanks for your tutorial. Is very helpfull.<br>With android when I try to open the album the app crash and its close its self.<br>This bug is happend you too?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2492627107">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2492627107">33</a> (In reply to <a href="#c_2492388065">#32</a>) by Raymond Camden
		posted on 2/2/2016 at 8:33 PM
		</div>
		<div class="comment_text"><p>I normally test in iOS only - do you see anything in the logs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2493424265">
	<div>
		<img src="https://disqus.com/api/users/avatars/claudioviola.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2493424265">34</a> (In reply to <a href="#c_2492627107">#33</a>) by Claudio Viola
		posted on 2/3/2016 at 9:06 AM
		</div>
		<div class="comment_text"><p>Yes. I saw a log with logcat and I submitted new issue on github plugin. You can see the log of the error on github here: <a href="https://disq.us/url?url=https%3A%2F%2Fgoo.gl%2F6tfbWM%3AUol0H4PZPZh_bf1dJ9ENNWlyDAY&amp;cuid=3321886" rel="nofollow noopener" title="https://goo.gl/6tfbWM">https://goo.gl/6tfbWM</a><br>Can I ask you to could you try a short test with an Android and check if the bug and the crash happend you too?<br>My only doubt and maybe that could be my application and not the plugin the cause of crash....<br>Thank you ray!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2493754978">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2493754978">35</a> (In reply to <a href="#c_2493424265">#34</a>) by Raymond Camden
		posted on 2/3/2016 at 2:26 PM
		</div>
		<div class="comment_text"><p>So when I try this on Android, window.imagePicker is undefined. I'm not sure why. I've got the platform added for sure. I can see the bits in there. I'd check with the plugin author since its possible they didn't handle the code right for Android.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2493758163">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2493758163">36</a> (In reply to <a href="#c_2493754978">#35</a>) by Raymond Camden
		posted on 2/3/2016 at 2:29 PM
		</div>
		<div class="comment_text"><p>As an aside, window.plugins.ImagePicker exists - so changing to that would probably fix it for now - at least on Android.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2518331592">
	<div>
		<img src="https://disqus.com/api/users/avatars/swatikothiyal.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2518331592">37</a> by Swati Kothiyal
		posted on 2/17/2016 at 6:50 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, I am getting problem with this plugin in android. My application is getting crashed when I am submitting multiple images in android phone. The App is based on phonegap..Could you please help me on this??</p></div>
	</div>
</div>
		
<div class="comment" id="c_2518769644">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2518769644">38</a> (In reply to <a href="#c_2518331592">#37</a>) by Raymond Camden
		posted on 2/17/2016 at 2:18 PM
		</div>
		<div class="comment_text"><p>If you are sure the plugin is causing it, then your first course of action is to file a bug report on the plugin's github repo. They would be best suited to help you correct it, right?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2530695008">
	<div>
		<img src="https://disqus.com/api/users/avatars/assemmahrous.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2530695008">39</a> by Assem Mahrous
		posted on 2/23/2016 at 2:41 PM
		</div>
		<div class="comment_text"><p>Hi Raymond , it works great on android but i am facing a problem when i try to upload them , is there any thing you can recommend me to do</p></div>
	</div>
</div>
		
<div class="comment" id="c_2530747973">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2530747973">40</a> (In reply to <a href="#c_2530695008">#39</a>) by Raymond Camden
		posted on 2/23/2016 at 3:13 PM
		</div>
		<div class="comment_text"><p>What do you see when you remote debug?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2568303704">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_364kSZ6Ugf.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2568303704">41</a> by Hiren
		posted on 3/14/2016 at 4:10 AM
		</div>
		<div class="comment_text"><p>Nice tutorial Raymond... but when I use image picker for multiple selection it doesn't show photo library but just a temporary directory with all photos and not album view.. any work around for this?? On android i mean. I googled a lot but not finding any proper solution for this. Thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_2568766439">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2568766439">42</a> (In reply to <a href="#c_2568303704">#41</a>) by Raymond Camden
		posted on 3/14/2016 at 1:35 PM
		</div>
		<div class="comment_text"><p>From what I can see of the plugin documentation (the link I had above is dead now, use this: <a href="https://disq.us/url?url=https%3A%2F%2Fwww.npmjs.com%2Fpackage%2Fcordova-plugin-imagepicker%29%3AJ-bYw66g4eU6o9hM_wriHzPiQHA&amp;cuid=3321886" rel="nofollow noopener" title="https://www.npmjs.com/package/cordova-plugin-imagepicker)">https://www.npmjs.com/packa...</a> this is documented. I'd suggest reaching out to the author and asking if something can be changed about that behavior.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2579978965">
	<div>
		<img src="https://disqus.com/api/users/avatars/garidepalliteja.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2579978965">43</a> by garidepalli teja
		posted on 3/20/2016 at 6:36 PM
		</div>
		<div class="comment_text"><p>Heyy Raymond , It works fine in browser , But I could not build apk file for android device.<br>Could you please let me know the solution</p></div>
	</div>
</div>
		
<div class="comment" id="c_2579984551">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2579984551">44</a> (In reply to <a href="#c_2579978965">#43</a>) by Raymond Camden
		posted on 3/20/2016 at 6:40 PM
		</div>
		<div class="comment_text"><p>How does it fail?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2580415430">
	<div>
		<img src="https://disqus.com/api/users/avatars/garidepalliteja.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2580415430">45</a> (In reply to <a href="#c_2579984551">#44</a>) by garidepalli teja
		posted on 3/20/2016 at 11:56 PM
		</div>
		<div class="comment_text"><p><a href="https://uploads.disquscdn.com/images/04df846f803fb6379f7d1031739adb7f8db734dc14afd82ba320d6378bc842a7.jpg" rel="nofollow noopener" title="https://uploads.disquscdn.com/images/04df846f803fb6379f7d1031739adb7f8db734dc14afd82ba320d6378bc842a7.jpg">https://uploads.disquscdn.c...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2581041227">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2581041227">46</a> (In reply to <a href="#c_2580415430">#45</a>) by Raymond Camden
		posted on 3/21/2016 at 10:56 AM
		</div>
		<div class="comment_text"><p>Two things. One, you aren't in a proper Cordova project. My code, as is, can't be used as a project. You have to create a new one, then copy the code into www.</p><p>Second, Android is a platform, not a plugin, so you would use: cordova platform add android</p></div>
	</div>
</div>
		
<div class="comment" id="c_2643008972">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_nI6o3WPhPw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2643008972">47</a> by Kewal Krishan
		posted on 4/26/2016 at 3:53 AM
		</div>
		<div class="comment_text"><p>window.plugins.imagePicker.getPictures(</p><p>    function(results) {</p><p>		alert(results.length);</p><p>      for (i = 0; i &lt; results.length; i++) {</p><p>			//images.push(results[i]);</p><p>			alert('Image URI: ' + results[i]);</p><p>			//uploadPhoto(results[i]);</p><p>            //console.log('Image URI: ' + results[i]);</p><p>        }</p><p>    }, function (error) {</p><p>       alert('Error: ' + error);</p><p>    }, {</p><p>        maximumImagesCount: 8,</p><p>        width: 800</p><p>    }</p><p>);</p><p>After picking up images message shows processing images. After that in for loop no alert is fired.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2643502913">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2643502913">48</a> (In reply to <a href="#c_2643008972">#47</a>) by Raymond Camden
		posted on 4/26/2016 at 1:25 PM
		</div>
		<div class="comment_text"><p>What does remote debug show you?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2644922512">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_nI6o3WPhPw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2644922512">49</a> (In reply to <a href="#c_2643502913">#48</a>) by Kewal Krishan
		posted on 4/27/2016 at 5:23 AM
		</div>
		<div class="comment_text"><p>Thanks Raymond. It has been solved. I was doing mistake.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2697927362">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2697927362">50</a> by yasir shah
		posted on 5/27/2016 at 7:52 AM
		</div>
		<div class="comment_text"><p>how to define camera oreintation in Media-Capture API<br> please help</p></div>
	</div>
</div>
		
<div class="comment" id="c_2698101061">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2698101061">51</a> (In reply to <a href="#c_2697927362">#50</a>) by Raymond Camden
		posted on 5/27/2016 at 11:25 AM
		</div>
		<div class="comment_text"><p>Did you check the docs (<a href="https://disq.us/url?url=https%3A%2F%2Fwww.npmjs.com%2Fpackage%2Fcordova-plugin-media-capture%29%3AI0GEXyaP9v99ugDiNNXmsAEEmDU&amp;cuid=3321886" rel="nofollow noopener" title="https://www.npmjs.com/package/cordova-plugin-media-capture)">https://www.npmjs.com/packa...</a> for it?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2702507715">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_TORqlsXumO.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2702507715">52</a> (In reply to <a href="#c_2698101061">#51</a>) by yasir shah
		posted on 5/30/2016 at 6:58 AM
		</div>
		<div class="comment_text"><p>this page is not found</p></div>
	</div>
</div>
		
<div class="comment" id="c_2703243443">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2703243443">53</a> (In reply to <a href="#c_2702507715">#52</a>) by Raymond Camden
		posted on 5/30/2016 at 6:06 PM
		</div>
		<div class="comment_text"><p>Take the ) off at the end of the URL.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2703986275">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2703986275">54</a> (In reply to <a href="#c_2703243443">#53</a>) by yasir shah
		posted on 5/31/2016 at 4:27 AM
		</div>
		<div class="comment_text"><p>can you please tell me what should i change in my code<br>for correctOreintation<br>this is my code :</p><p> $scope.ready = false;</p><p>    $scope.images = [];</p><p>    $scope.selImages = function () {</p><p>        var options = <br>        {<br>            limit : 20,<br>        };</p><p>        $cordovaCapture.captureImage(options).then(function (results) {<br>            for (var i = 0; i &lt; results.length; i++) {<br>                var sign = "sign" + i;<br>                $scope.images.push(results[i].fullPath);<br>}</p><p>            if (!$scope.$$phase) {<br>                $scope.$apply();<br>            }</p><p>        }, function (err) {</p><p>            console.log('err');</p><p>            console.log(err);</p><p>        });</p></div>
	</div>
</div>
		
<div class="comment" id="c_2704705381">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2704705381">55</a> (In reply to <a href="#c_2703986275">#54</a>) by Raymond Camden
		posted on 5/31/2016 at 4:09 PM
		</div>
		<div class="comment_text"><p>When you looked up the docs for MediaCapture, did you see anything related to orientation? What did you try?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2705851046">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2705851046">56</a> (In reply to <a href="#c_2704705381">#55</a>) by yasir shah
		posted on 6/1/2016 at 5:08 AM
		</div>
		<div class="comment_text"><p>I looked the docs there is nothing related to orientation , any other way to control orientation?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2706376138">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2706376138">57</a> (In reply to <a href="#c_2705851046">#56</a>) by Raymond Camden
		posted on 6/1/2016 at 1:49 PM
		</div>
		<div class="comment_text"><p>Not with the plugin - as far as I know. Once you have the image you could use a Canvas element to rotate it. Possibly.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2713215942">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2713215942">58</a> (In reply to <a href="#c_2706376138">#57</a>) by yasir shah
		posted on 6/5/2016 at 3:02 PM
		</div>
		<div class="comment_text"><p>please can you send me any example? <br>thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_2713375234">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2713375234">59</a> (In reply to <a href="#c_2713215942">#58</a>) by Raymond Camden
		posted on 6/5/2016 at 5:12 PM
		</div>
		<div class="comment_text"><p>I don't have any handy - but I'm sure if you Google for it, you'll find one.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2714458839">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2714458839">60</a> (In reply to <a href="#c_2713375234">#59</a>) by yasir shah
		posted on 6/6/2016 at 11:52 AM
		</div>
		<div class="comment_text"><p>ok thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_2716045483">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_oTsMk4Y8Gw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2716045483">61</a> by sam
		posted on 6/7/2016 at 4:45 AM
		</div>
		<div class="comment_text"><p>hi<br> Am also try this code fine only.then which plugin I want add in Coredova can u tell that plugin name sir </p></div>
	</div>
</div>
		
<div class="comment" id="c_2716066583">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_oTsMk4Y8Gw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2716066583">62</a> (In reply to <a href="#c_2716045483">#61</a>) by sam
		posted on 6/7/2016 at 5:11 AM
		</div>
		<div class="comment_text"><p>Anyone help me pls</p></div>
	</div>
</div>
		
<div class="comment" id="c_2716412384">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2716412384">63</a> (In reply to <a href="#c_2716045483">#61</a>) by Raymond Camden
		posted on 6/7/2016 at 10:27 AM
		</div>
		<div class="comment_text"><p>Which option are you trying?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2727610825">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_oTsMk4Y8Gw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2727610825">64</a> (In reply to <a href="#c_2716412384">#63</a>) by sam
		posted on 6/13/2016 at 4:40 AM
		</div>
		<div class="comment_text"><p>sir am using camera</p></div>
	</div>
</div>
		
<div class="comment" id="c_2727611091">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_oTsMk4Y8Gw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2727611091">65</a> (In reply to <a href="#c_2727610825">#64</a>) by sam
		posted on 6/13/2016 at 4:40 AM
		</div>
		<div class="comment_text"><p>sir am using camera plugin. cordova plugin add cordova-plugin-camera,cordova plugin add <a href="http://disq.us/url?url=http%3A%2F%2Forg.apache.cordova.camera%3ADsR8cqbORsBbKF9uwjG_YKrfAUo&amp;cuid=3321886" rel="nofollow noopener" title="org.apache.cordova.camera">org.apache.cordova.camera</a> both are am tying sir</p></div>
	</div>
</div>
		
<div class="comment" id="c_2727652435">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_oTsMk4Y8Gw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2727652435">66</a> by sam
		posted on 6/13/2016 at 5:34 AM
		</div>
		<div class="comment_text"><p>can u send plugin name also sir</p></div>
	</div>
</div>
		
<div class="comment" id="c_2727812910">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_oTsMk4Y8Gw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2727812910">67</a> by sam
		posted on 6/13/2016 at 9:19 AM
		</div>
		<div class="comment_text"><p>3rd option and i need to select gallery from multiple image,video,audio at a time how  sir can un give any idea and html part allso</p></div>
	</div>
</div>
		
<div class="comment" id="c_2727997866">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2727997866">68</a> (In reply to <a href="#c_2727611091">#65</a>) by Raymond Camden
		posted on 6/13/2016 at 12:34 PM
		</div>
		<div class="comment_text"><p>Ok so you added the right plugin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2727999052">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2727999052">69</a> (In reply to <a href="#c_2727812910">#67</a>) by Raymond Camden
		posted on 6/13/2016 at 12:35 PM
		</div>
		<div class="comment_text"><p>You are asking a lot of questions here at once and honestly I can't understand you. For option 3, I literally linked to the plugin itself. That's the one you install.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2729543869">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_oTsMk4Y8Gw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2729543869">70</a> (In reply to <a href="#c_2727999052">#69</a>) by sam
		posted on 6/14/2016 at 4:55 AM
		</div>
		<div class="comment_text"><p>Option Three - cordova-imagePicker <br>here: <a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fcfjedimaster%2FCordova-Examples%2Ftree%2Fmaster%2Fmultiimageselect%2Fmultiimageselect2%3AqaItAUO8RypOX4Ei9Hs0QLzDeu0&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/cfjedimaster/Cordova-Examples/tree/master/multiimageselect/multiimageselect2">https://github.com/cfjedima...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_2729545291">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_oTsMk4Y8Gw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2729545291">71</a> (In reply to <a href="#c_2727999052">#69</a>) by sam
		posted on 6/14/2016 at 4:57 AM
		</div>
		<div class="comment_text"><p>ok sir. i need to select gallery from multiple image,video,audio at a time. how sir can you  give any idea and html part allso.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2729863948">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2729863948">72</a> (In reply to <a href="#c_2729543869">#70</a>) by Raymond Camden
		posted on 6/14/2016 at 11:27 AM
		</div>
		<div class="comment_text"><p>Ok... so are you saying you know the plugin to use?</p></div>
	</div>
</div>
		
<div class="comment" id="c_2729864897">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2729864897">73</a> (In reply to <a href="#c_2729545291">#71</a>) by Raymond Camden
		posted on 6/14/2016 at 11:28 AM
		</div>
		<div class="comment_text"><p>I don't think you can do that.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2731620905">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_oTsMk4Y8Gw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2731620905">74</a> (In reply to <a href="#c_2729864897">#73</a>) by sam
		posted on 6/15/2016 at 5:45 AM
		</div>
		<div class="comment_text"><p>IF YOU KNOW GIVE SOME IDEA SIR</p></div>
	</div>
</div>
		
<div class="comment" id="c_2731625657">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_oTsMk4Y8Gw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2731625657">75</a> (In reply to <a href="#c_2729863948">#72</a>) by sam
		posted on 6/15/2016 at 5:51 AM
		</div>
		<div class="comment_text"><p>ya</p></div>
	</div>
</div>
		
<div class="comment" id="c_2754164374">
	<div>
		<img src="https://disqus.com/api/users/avatars/rodrigorellana.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2754164374">76</a> by Rodrigo Orellana
		posted on 6/28/2016 at 2:19 AM
		</div>
		<div class="comment_text"><p>window.imagePicker is undefined:</p><p>solution here<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fratkop%2F-cordova-imagePickerEx%2Fissues%2F8%3AD07-m44hGrQmCD69Do3qgeTyUHI&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/ratkop/-cordova-imagePickerEx/issues/8">https://github.com/ratkop/-...</a></p><p>thank you!</p></div>
	</div>
</div>
		
<div class="comment" id="c_2839977619">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2839977619">77</a> by hazzaa
		posted on 8/16/2016 at 9:00 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>Is it possible to load all pics (or select all of them) from gallery or image library to my app to do some process for them.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2840236916">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2840236916">78</a> (In reply to <a href="#c_2839977619">#77</a>) by Raymond Camden
		posted on 8/16/2016 at 1:27 PM
		</div>
		<div class="comment_text"><p>Hmm. If you have read access to the folder, then you could. It is going to be a *big* upload possibly though so I'm not sure I'd recommend it.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2858411065">
	<div>
		<img src="//a.disquscdn.com/1611874952/images/noavatar32.png" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2858411065">79</a> by Samaludheen
		posted on 8/25/2016 at 4:41 AM
		</div>
		<div class="comment_text"><p>Hi Raymond,</p><p>cordova-imagePicker is exactly I wanted but, I need this option for windows app. Is there any other option to select multiple images for cordova windows app.</p><p>Thanks.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2858843308">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2858843308">80</a> (In reply to <a href="#c_2858411065">#79</a>) by Raymond Camden
		posted on 8/25/2016 at 1:07 PM
		</div>
		<div class="comment_text"><p>All I can suggest is searching <a href="http://disq.us/url?url=http%3A%2F%2Fplugins.cordova.io%3ANpyS05i7d7DYoF5XTn5OcoL74io&amp;cuid=3321886" rel="nofollow noopener" title="plugins.cordova.io">plugins.cordova.io</a> and filter to the Windows platform.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2931600211">
	<div>
		<img src="https://disqus.com/api/users/avatars/antoniogallo.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2931600211">81</a> by Antonio Gallo
		posted on 10/3/2016 at 7:38 PM
		</div>
		<div class="comment_text"><p>window.imagePicker.getPicture is nice but they don't support the browser platform :-(</p></div>
	</div>
</div>
		
<div class="comment" id="c_2931678319">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2931678319">82</a> (In reply to <a href="#c_2931600211">#81</a>) by Raymond Camden
		posted on 10/3/2016 at 8:26 PM
		</div>
		<div class="comment_text"><p>Just use &lt;input type="file" multiple=""&gt;</p></div>
	</div>
</div>
		
<div class="comment" id="c_2931680398">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2931680398">83</a> (In reply to <a href="#c_2931678319">#82</a>) by Raymond Camden
		posted on 10/3/2016 at 8:28 PM
		</div>
		<div class="comment_text"><p>That multiple="" should be just multiple. Disqus changed my input.</p></div>
	</div>
</div>
		
<div class="comment" id="c_2947247195">
	<div>
		<img src="https://disqus.com/api/users/avatars/romanviskin.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_2947247195">84</a> by Roman Viskin
		posted on 10/12/2016 at 7:58 PM
		</div>
		<div class="comment_text"><p>We needed an option to develop our custom page that displays and selects photo thumbnails. So here's library I wrote that can enumerate and display images from gallery:<br><a href="https://disq.us/url?url=https%3A%2F%2Fgithub.com%2Fterikon%2Fcordova-plugin-photo-library%3AO8qpKyDWJm4kKGoY9yBpwvLqGZM&amp;cuid=3321886" rel="nofollow noopener" title="https://github.com/terikon/cordova-plugin-photo-library">https://github.com/terikon/...</a></p></div>
	</div>
</div>
		
<div class="comment" id="c_3017916590">
	<div>
		<img src="https://disqus.com/api/users/avatars/Akash_Pal_93.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3017916590">85</a> by Akash Pal
		posted on 11/24/2016 at 10:27 AM
		</div>
		<div class="comment_text"><p>hi about the cordova-imagePicker plugin ; after a user selects and returns back the selection disappears. Is there a way to perverse the selection.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3019696852">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3019696852">86</a> (In reply to <a href="#c_3017916590">#85</a>) by Raymond Camden
		posted on 11/25/2016 at 2:40 PM
		</div>
		<div class="comment_text"><p>Did you check with the plugin docs?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3064241757">
	<div>
		<img src="https://disqus.com/api/users/avatars/rajkumarmg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3064241757">87</a> by Rajkumar M G
		posted on 12/22/2016 at 1:24 PM
		</div>
		<div class="comment_text"><p>can anyone suggest me how to avoid that keyboard hides input field of the page in cordova android app ...and also how to access camera ... Kindly post your valuable correct answer</p></div>
	</div>
</div>
		
<div class="comment" id="c_3064315831">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3064315831">88</a> (In reply to <a href="#c_3064241757">#87</a>) by Raymond Camden
		posted on 12/22/2016 at 2:23 PM
		</div>
		<div class="comment_text"><p>For Camera, look at the Camera plugin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3064344347">
	<div>
		<img src="https://disqus.com/api/users/avatars/rajkumarmg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3064344347">89</a> (In reply to <a href="#c_3064315831">#88</a>) by Rajkumar M G
		posted on 12/22/2016 at 2:44 PM
		</div>
		<div class="comment_text"><p>thanks ...for keyboard any suggestions...?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3064411991">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3064411991">90</a> (In reply to <a href="#c_3064344347">#89</a>) by Raymond Camden
		posted on 12/22/2016 at 3:30 PM
		</div>
		<div class="comment_text"><p>Off the top of my head - no - but there is a keyboard plugin that I *think* helps with this.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3065697027">
	<div>
		<img src="https://disqus.com/api/users/avatars/rajkumarmg.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3065697027">91</a> (In reply to <a href="#c_3064411991">#90</a>) by Rajkumar M G
		posted on 12/23/2016 at 7:34 AM
		</div>
		<div class="comment_text"><p>hello sir, how to add camera taken picture in file input plugin for preview..?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3066039352">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3066039352">92</a> (In reply to <a href="#c_3065697027">#91</a>) by Raymond Camden
		posted on 12/23/2016 at 2:06 PM
		</div>
		<div class="comment_text"><p>No idea what you are asking here.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3104460843">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_18Sl5IciPE.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3104460843">93</a> by Gerardo Marin
		posted on 1/17/2017 at 6:44 PM
		</div>
		<div class="comment_text"><p>Hi I have getPicture function in two different controllers inside the same ionic app, the problem is that when I use the function of a co-driver works well but when using it in the other driver no longer works. I think the options of the first function I use are kept, there is some kind of break or clean that allows me to use CordovaCamera on two different controllers with different options.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3104635859">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3104635859">94</a> (In reply to <a href="#c_3104460843">#93</a>) by Raymond Camden
		posted on 1/17/2017 at 8:19 PM
		</div>
		<div class="comment_text"><p>You got me on that. If you can create a simple, reproduceable case, you could file a bug report on the plugin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3104850151">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_18Sl5IciPE.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3104850151">95</a> (In reply to <a href="#c_3104635859">#94</a>) by Gerardo Marin
		posted on 1/17/2017 at 10:28 PM
		</div>
		<div class="comment_text"><p>Hello Raymond thanks for response, the error I get is "Selection cancelled" I found this:<br>"I have seen this problem occur under 2 conditions - 1) Low memory 2) Your events are cascaded, and are triggered twice. For instance, you have a onClick on an Icon, inside a div that also has another event trigger like an a-href or another onClick."<br>but I dont have idea how to fix in ionic</p></div>
	</div>
</div>
		
<div class="comment" id="c_3104853055">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3104853055">96</a> (In reply to <a href="#c_3104850151">#95</a>) by Raymond Camden
		posted on 1/17/2017 at 10:30 PM
		</div>
		<div class="comment_text"><p>Ok - and as I said (grin) - if you can make a simple demo of this - use it to file a bug report.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3160214480">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_AA3kCJVntJ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3160214480">97</a> by Rodrigo Batista
		posted on 2/17/2017 at 1:28 PM
		</div>
		<div class="comment_text"><p>I have installed this plugin but if I try to use it, the window.imagePicker is allways undefined...</p></div>
	</div>
</div>
		
<div class="comment" id="c_3161266026">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3161266026">98</a> (In reply to <a href="#c_3160214480">#97</a>) by Raymond Camden
		posted on 2/17/2017 at 9:40 PM
		</div>
		<div class="comment_text"><p>Where are you testing - emulator or device?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3165815885">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_AA3kCJVntJ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3165815885">99</a> (In reply to <a href="#c_3161266026">#98</a>) by Rodrigo Batista
		posted on 2/20/2017 at 5:48 PM
		</div>
		<div class="comment_text"><p>Hi Raymond<br>I'm using phonegap desktop to test. If I build the app and install it, I can use imagePicker, but if I call the app using phonegap, it's undefined</p></div>
	</div>
</div>
		
<div class="comment" id="c_3165889241">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3165889241">100</a> (In reply to <a href="#c_3165815885">#99</a>) by Raymond Camden
		posted on 2/20/2017 at 6:14 PM
		</div>
		<div class="comment_text"><p>When you say you "call the app using phonegap", what exactly do you mean?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3165902769">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_AA3kCJVntJ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3165902769">101</a> (In reply to <a href="#c_3165889241">#100</a>) by Rodrigo Batista
		posted on 2/20/2017 at 6:22 PM
		</div>
		<div class="comment_text"><p>I started phonegap desktop, put the url in chrome... window.imagePicker is ok, but, <br>if I call from phonegap on my cellphone, window.imagePicker is undefined... is it normal?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3165909057">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3165909057">102</a> (In reply to <a href="#c_3165902769">#101</a>) by Raymond Camden
		posted on 2/20/2017 at 6:26 PM
		</div>
		<div class="comment_text"><p>"If I call from phonegap on my cellphone" - are you saying you used the CLI to install the app on your device, or did you open it with a web browser on your device?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3165956259">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_AA3kCJVntJ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3165956259">103</a> (In reply to <a href="#c_3165909057">#102</a>) by Rodrigo Batista
		posted on 2/20/2017 at 6:54 PM
		</div>
		<div class="comment_text"><p>I'm using phonegap client on cellphone...<br>but if I try to call using CLI, the window.imagePicker is undefined..<br>I built the app and installed it on cellphone, it works fine.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3165983920">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3165983920">104</a> (In reply to <a href="#c_3165956259">#103</a>) by Raymond Camden
		posted on 2/20/2017 at 7:10 PM
		</div>
		<div class="comment_text"><p>It won't work there as it has a limited set of baked in plugins.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3166039081">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_AA3kCJVntJ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3166039081">105</a> (In reply to <a href="#c_3165983920">#104</a>) by Rodrigo Batista
		posted on 2/20/2017 at 7:41 PM
		</div>
		<div class="comment_text"><p>ok Raymond<br>thank you...<br>Thanks for the plugin... works perfect on device...</p></div>
	</div>
</div>
		
<div class="comment" id="c_3166115332">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3166115332">106</a> (In reply to <a href="#c_3166039081">#105</a>) by Raymond Camden
		posted on 2/20/2017 at 8:23 PM
		</div>
		<div class="comment_text"><p>The plugin isn't mine - I just blogged about it. :)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3254213904">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_AA3kCJVntJ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3254213904">107</a> by Rodrigo Batista
		posted on 4/13/2017 at 1:12 PM
		</div>
		<div class="comment_text"><p>Raymond, could you help me again?<br>This plugin works fine on android platform, but, running on IOS, when I click to open gallery, the gallery window opens but it's showed only if I roll down the notification bar...<br>And, after I select the picture and click OK, my page shows the picture only afer I roll notification bar again...</p></div>
	</div>
</div>
		
<div class="comment" id="c_3254221973">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3254221973">108</a> (In reply to <a href="#c_3254213904">#107</a>) by Raymond Camden
		posted on 4/13/2017 at 1:17 PM
		</div>
		<div class="comment_text"><p>Not to pass the buck, but that sounds strongly like an issue with the plugin, and it should be raised on their bug tracker.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3254235554">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_AA3kCJVntJ.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3254235554">109</a> (In reply to <a href="#c_3254221973">#108</a>) by Rodrigo Batista
		posted on 4/13/2017 at 1:27 PM
		</div>
		<div class="comment_text"><p>Ok... I'll write it there... thank you</p></div>
	</div>
</div>
		
<div class="comment" id="c_3297810886">
	<div>
		<img src="https://disqus.com/api/users/avatars/jaleleddineagrebi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3297810886">110</a> by jalel eddine agrebi
		posted on 5/10/2017 at 8:58 AM
		</div>
		<div class="comment_text"><p>when i use &lt;input type="file" multiple="multiple" name="file[]"/&gt;<br>i pick picture but the input is empty</p></div>
	</div>
</div>
		
<div class="comment" id="c_3298028614">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3298028614">111</a> (In reply to <a href="#c_3297810886">#110</a>) by Raymond Camden
		posted on 5/10/2017 at 12:27 PM
		</div>
		<div class="comment_text"><p>Do you get an error in console? Do you use any other code or literally just the input field?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3334987068">
	<div>
		<img src="https://disqus.com/api/users/avatars/jaleleddineagrebi.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3334987068">112</a> (In reply to <a href="#c_3298028614">#111</a>) by jalel eddine agrebi
		posted on 6/1/2017 at 12:19 PM
		</div>
		<div class="comment_text"><p>just the input field (my problem is not to upload multiple i have a solution but the problem is to pick multiple picture then upload it)</p></div>
	</div>
</div>
		
<div class="comment" id="c_3335031175">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3335031175">113</a> (In reply to <a href="#c_3334987068">#112</a>) by Raymond Camden
		posted on 6/1/2017 at 12:48 PM
		</div>
		<div class="comment_text"><p>I'm not clear what you are asking then. Are you asking about how to upload multiple files? If so, I'd look at the FileTransfer plugin. Or look at XHR2 for uploading files.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3397450185">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_tF4wmWtfWO.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3397450185">114</a> by Shaymaa
		posted on 7/3/2017 at 11:55 AM
		</div>
		<div class="comment_text"><p>Hi, how can i share (with Facebook) the picture which i picked. i m  using<br>EddyVerbruggen/SocialSharing-PhoneGap-Plugin.</p><p>can you help me ?</p><p>thanks</p></div>
	</div>
</div>
		
<div class="comment" id="c_3397470986">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3397470986">115</a> (In reply to <a href="#c_3397450185">#114</a>) by Raymond Camden
		posted on 7/3/2017 at 12:15 PM
		</div>
		<div class="comment_text"><p>Not really. This blog post isn't about social sharing. I assume you are having a problem of some sort. I'd reach out to the author of the plugin and tell him what went wrong. If nothing went wrong and you haven't started development yet, then you should be reading the docs there to get started.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3404493190">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_HFbeURWP0d.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3404493190">116</a> by Geeky
		posted on 7/7/2017 at 1:08 PM
		</div>
		<div class="comment_text"><p>thanks for the tutorial sir, what if i want to read all image files automatically with out having either of the above three options  can you help on this</p></div>
	</div>
</div>
		
<div class="comment" id="c_3404500105">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3404500105">117</a> (In reply to <a href="#c_3404493190">#116</a>) by Raymond Camden
		posted on 7/7/2017 at 1:14 PM
		</div>
		<div class="comment_text"><p>You would need to use the File System plugin to look at various directories. You can list files and the such. It is NOT easy to use, but doable.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3609956566">
	<div>
		<img src="https://disqus.com/api/users/avatars/kunalshaktawat.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3609956566">118</a> by kunal shaktawat
		posted on 11/10/2017 at 5:48 PM
		</div>
		<div class="comment_text"><p>hello sir , how to access all files from device storage folder.<br>ex. I am trying to make an app to list images or video like photo gallery in android. but only from one folder ??</p></div>
	</div>
</div>
		
<div class="comment" id="c_3610248984">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3610248984">119</a> (In reply to <a href="#c_3609956566">#118</a>) by Raymond Camden
		posted on 11/10/2017 at 8:55 PM
		</div>
		<div class="comment_text"><p>This really isn't on topic for this post, but look at the file system plugin.</p></div>
	</div>
</div>
		
<div class="comment" id="c_3996005819">
	<div>
		<img src="https://disqus.com/api/users/avatars/rey_nave.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3996005819">120</a> by reynave
		posted on 7/19/2018 at 4:46 AM
		</div>
		<div class="comment_text"><p>Hi Raymond, for option 3, after you  have selected the multiple images, does it mean that the images save into an array ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_3996591317">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_3996591317">121</a> (In reply to <a href="#c_3996005819">#120</a>) by Raymond Camden
		posted on 7/19/2018 at 2:59 PM
		</div>
		<div class="comment_text"><p>Yep.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4003575828">
	<div>
		<img src="https://disqus.com/api/users/avatars/rey_nave.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4003575828">122</a> (In reply to <a href="#c_3996591317">#121</a>) by reynave
		posted on 7/24/2018 at 8:41 AM
		</div>
		<div class="comment_text"><p>When I have tested, I got error <br>"TypeError: Cannot read property 'getPictures' of undefined", how do I do ?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4003765691">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4003765691">123</a> (In reply to <a href="#c_4003575828">#122</a>) by Raymond Camden
		posted on 7/24/2018 at 12:23 PM
		</div>
		<div class="comment_text"><p>Did you add the plugin properly?</p></div>
	</div>
</div>
		
<div class="comment" id="c_4004336212">
	<div>
		<img src="https://disqus.com/api/users/avatars/rey_nave.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4004336212">124</a> (In reply to <a href="#c_4003765691">#123</a>) by reynave
		posted on 7/24/2018 at 6:41 PM
		</div>
		<div class="comment_text"><p>Yes, I did, everythink done. problem solved, the problem come from the permissions..<br>in older versions of Android (&lt; 6.0), Android apps do list (during the install process) all the required permissions to run it properly, but in the newest versions of Android, the apps will ask you the permissions during runtime</p></div>
	</div>
</div>
		
<div class="comment" id="c_4010379724">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_poc6FJLlCw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4010379724">125</a> by Aaron French
		posted on 7/28/2018 at 9:20 AM
		</div>
		<div class="comment_text"><p>Do you have a version of option 3 that will work with jQuery rather than angular? I've been having the hardest time getting an image picker to work where I can select multiple images and store them in an array. I've been able to figure out the other Cordova Plugins I need for my app but this one has been the thorn in my side.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4010547343">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4010547343">126</a> (In reply to <a href="#c_4010379724">#125</a>) by Raymond Camden
		posted on 7/28/2018 at 1:02 PM
		</div>
		<div class="comment_text"><p>Can you share what you've done? Don't post the code in here, but rather share it via a Gist perhaps.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4012336869">
	<div>
		<img src="https://disqus.com/api/users/avatars/disqus_poc6FJLlCw.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4012336869">127</a> (In reply to <a href="#c_4010547343">#126</a>) by Aaron French
		posted on 7/29/2018 at 8:30 PM
		</div>
		<div class="comment_text"><p>I'm using this plugin: <a href="https://disq.us/url?url=https%3A%2F%2Fwww.npmjs.com%2Fpackage%2Fcordova-plugin-imagepicker%3ANiTV4ajqymQH3prRhyLTwJkcDQY&amp;cuid=3321886" rel="nofollow noopener" title="https://www.npmjs.com/package/cordova-plugin-imagepicker">https://www.npmjs.com/packa...</a></p><p>I can't seem to get the 'getPictures(success, fail, options)' method to work. It says that the method is created in the window.imagePicker method but it doesn't do anything.</p><p>Since I'm using PhoneGap I don't know how to view the error message because it's running from the app on my phone. I do have the plugin added to my config.xml page as:</p><p>&lt;plugin name="cordova-plugin-imagepicker" spec="1.3.0" source="nmp"/&gt;</p><p>Any help would be greatly appreciated. I'm new to the PhoneGap/Cordova stuff so it's probably something simple I'm missing.</p></div>
	</div>
</div>
		
<div class="comment" id="c_4013104097">
	<div>
		<img src="https://disqus.com/api/users/avatars/cfjedimaster.jpg" class="comment_author_profile_pic">
	</div>
	<div>
		<div class="comment_header">
		Comment <a href="#c_4013104097">128</a> (In reply to <a href="#c_4012336869">#127</a>) by Raymond Camden
		posted on 7/30/2018 at 12:48 PM
		</div>
		<div class="comment_text"><p>First - to view error messages, you want to use remote debugging. Please Google for that (I've blogged on it too), but it is a way to connect the Chrome, or Safari, debugger to the running app and view console messages, errors, and the like. You need to do that to figure out what's wrong.</p></div>
	</div>
</div>
		